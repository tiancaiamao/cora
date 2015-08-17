#include <stdio.h>
#include <stdlib.h>

struct interval {
  int start;
  int end;
  char *var;
};

// input: intervals obtain by liveless analysis
// sorted by increasing start point
struct interval *intervals;
int numIntervals;

// input: available registers
char *regs;
int numRegs;

// output: the mapping from variable, which is in interval var field, to register
// size equal to numIntervals
int *result;

struct allocation {
  int intervalIdx;
  int registerIdx;
};

// live intervals that overlap the current point and have been placed in registers
// maintain as a queue, sorted by interval end
struct allocation *active;
int activeHead;
int activeTail;
int activeSize;

// current available registers, maintain as a stack
int *available;
int availableIndex;

void addActive(int intervalIdx, int registerIdx) {
  int i, pos, tmp, headPrev;

  if (activeHead == activeTail) {
    active[activeTail].intervalIdx = intervalIdx;
    active[activeTail].registerIdx = registerIdx;
    activeTail = (activeTail + 1) % activeSize;
    return;
  }

  pos = (activeTail==0) ? (activeSize-1) : (activeTail-1);
  headPrev = (activeHead==0) ? (activeSize-1) : (activeHead-1);
  for (i=pos; i!=headPrev; i = (i==0)?(activeSize-1):i-1) {
    tmp = active[i].intervalIdx;
    if (intervals[tmp].end <= intervals[intervalIdx].end) {
      break;
    }
    active[(i+1) % activeSize] = active[i];
  }
  pos = (i+1) % activeSize;
  active[pos].intervalIdx = intervalIdx;
  active[pos].registerIdx = registerIdx;
  activeTail = (activeTail+1) % activeSize;
}

int popAvailable() {
  availableIndex--;
  return available[availableIndex];
}

void pushAvailable(int registerIdx) {
  available[availableIndex] = registerIdx;
  availableIndex++;
  return;
}

void expireOldIntervals(int intervalIdx) {
  int i, tmp;
  
  for (i=activeHead; i<activeTail; i = (i+1) % activeSize) {
    tmp = active[i].intervalIdx;
    if (intervals[tmp].end > intervals[intervalIdx].start) {
      activeHead = i;
      return;
    }

    result[tmp] = active[i].registerIdx;
    pushAvailable(active[i].registerIdx);
  }
}

void spillAtInterval(int intervalIdx) {
  int pos, tmp;

  pos = (activeTail==0) ? (activeSize-1) : (activeTail-1);
  tmp = active[pos].intervalIdx;
  if (intervals[tmp].end > intervals[intervalIdx].end) {
    activeTail = pos; // remove it from active
    addActive(intervalIdx, active[pos].registerIdx);
    result[tmp] = -1;
  } else {
    result[intervalIdx] = -1;
  }
  return;
}

void linearScanRegisterAllocation() {
  int i, tmp;

  for (i=0; i<numIntervals; i++) {
    expireOldIntervals(i);
    if ((activeTail+1) % activeSize == activeHead) {
      spillAtInterval(i);
    } else {
      tmp = popAvailable();
      addActive(i, tmp);
    }
  }

  for (i=activeHead; i!=activeTail; i=(i+1)%activeSize) {
    result[active[i].intervalIdx] = active[i].registerIdx;
  }
}

void initinterval(int ith, int start, int end, char *var) {
  intervals[ith].start = start;
  intervals[ith].end = end;
  intervals[ith].var = var;
}

int main(int argc, char **argv) {
  int i;

  numIntervals = 7;
  intervals = malloc(sizeof(struct interval) * numIntervals);
  numRegs = 3;
  activeSize = numRegs + 1;
  regs = malloc(numRegs);
  result = malloc(sizeof(int) * numIntervals);
  active = malloc(sizeof(struct allocation) * activeSize);
  available = malloc(sizeof(int) * numRegs);
  
  initinterval(0, 0, 3, "va");
  initinterval(1, 1, 5, "vb");
  initinterval(2, 2, 3, "vc");
  initinterval(3, 4, 7, "vd");
  initinterval(4, 5, 10, "ve");
  initinterval(5, 5, 8, "vf");
  initinterval(6, 6, 7, "vg");

  regs[0] = 'c';
  regs[1] = 'd';
  regs[2] = 'e';
  regs[3] = 'f';

  for (i=0; i<numIntervals; i++) {
    result[i] = -1;
  }

  activeHead = 0;
  activeTail = 0;

  for (i=0; i<numRegs; i++) {
    available[i] = i;
  }
  availableIndex = numRegs;

  linearScanRegisterAllocation();
  
  for (i=0; i<numIntervals; i++) {
    if (result[i] < 0) {
      printf("%s => stack\n", intervals[i].var);
    } else {
      printf("%s => %c\n", intervals[i].var, regs[result[i]]);
    }
  }

  return 0;
}
