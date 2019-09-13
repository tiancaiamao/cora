#include "runtime.h"
#include <stdlib.h>

static void clofun287 (struct VM* m);
static void clofun265 (struct VM* m);
static void clofun276 (struct VM* m);
static void clofun286 (struct VM* m);
static void clofun277 (struct VM* m);
static void clofun278 (struct VM* m);
static void clofun279 (struct VM* m);
static void clofun280 (struct VM* m);
static void clofun281 (struct VM* m);
static void clofun282 (struct VM* m);
static void clofun283 (struct VM* m);
static void clofun284 (struct VM* m);
static void clofun285 (struct VM* m);
static void clofun266 (struct VM* m);
static void clofun267 (struct VM* m);
static void clofun268 (struct VM* m);
static void clofun269 (struct VM* m);
static void clofun270 (struct VM* m);
static void clofun271 (struct VM* m);
static void clofun272 (struct VM* m);
static void clofun273 (struct VM* m);
static void clofun274 (struct VM* m);
static void clofun275 (struct VM* m);


static void
clofun287 (struct VM* m) {
  Obj reg288 = makeClosure(clofun265, 0);
  Obj reg289 = intern("recur");
  Obj reg290 = symbolSet(reg289, reg288);
  m->stack[0] = reg290;
  m->pc = NULL;
  return;
}
static void
clofun265 (struct VM* m) {
  Obj reg292 = m->stack[0];
  Obj reg293 = m->stack[1];
  Obj reg294 = m->stack[2];
  Obj reg295 = m->stack[3];
  Obj reg296 = makeClosure(clofun276, 2, reg294, reg295);
  Obj reg297 = Nil;
  Obj reg298 = cons(reg295, reg297);
  Obj reg299 = cons(reg294, reg298);
  Obj reg300 = symbolGet(intern("cons?"));
  m->pc = closureFn(reg300);
  Obj reg301 = symbolGet(intern("cons?"));
  Obj reg302 = makeClosure(clofun266, 4, reg296, reg293, reg294, reg295);
  m->stack[0] = reg301;
  m->stack[1] = reg302;
  m->stack[2] = reg299;
  return;
}
static void
clofun276 (struct VM* m) {
  Obj reg304 = m->stack[0];
  Obj reg305 = m->stack[1];
  Obj reg306 = makeClosure(clofun286, 0);
  Obj reg307 = closureRef(reg304, 1);
  Obj reg308 = Nil;
  Obj reg309 = cons(reg307, reg308);
  Obj reg310 = closureRef(reg304, 0);
  Obj reg311 = cons(reg310, reg309);
  Obj reg312 = symbolGet(intern("cons?"));
  m->pc = closureFn(reg312);
  Obj reg313 = symbolGet(intern("cons?"));
  Obj reg314 = closureRef(reg304, 0);
  Obj reg315 = closureRef(reg304, 1);
  Obj reg316 = makeClosure(clofun277, 4, reg306, reg305, reg314, reg315);
  m->stack[0] = reg313;
  m->stack[1] = reg316;
  m->stack[2] = reg311;
  return;
}
static void
clofun286 (struct VM* m) {
  Obj reg318 = m->stack[0];
  Obj reg319 = m->stack[1];
  Obj reg320 = symbolGet(intern("error"));
  m->pc = closureFn(reg320);
  Obj reg321 = symbolGet(intern("error"));
  Obj reg322 = makeString("no match-help found!", 20);
  m->stack[0] = reg321;
  m->stack[1] = reg319;
  m->stack[2] = reg322;
  return;
}
static void
clofun277 (struct VM* m) {
  Obj reg324 = m->stack[0];
  Obj reg325 = m->stack[1];
  Obj reg326 = closureRef(reg324, 3);
  Obj reg327 = Nil;
  Obj reg328 = cons(reg326, reg327);
  Obj reg329 = closureRef(reg324, 2);
  Obj reg330 = cons(reg329, reg328);
  Obj reg331 = symbolGet(intern("null?"));
  m->pc = closureFn(reg331);
  Obj reg332 = symbolGet(intern("null?"));
  Obj reg333 = closureRef(reg324, 2);
  Obj reg334 = closureRef(reg324, 3);
  Obj reg335 = closureRef(reg324, 0);
  Obj reg336 = closureRef(reg324, 1);
  Obj reg337 = makeClosure(clofun278, 5, reg333, reg334, reg335, reg336, reg325);
  m->stack[0] = reg332;
  m->stack[1] = reg337;
  m->stack[2] = reg330;
  return;
}
static void
clofun278 (struct VM* m) {
  Obj reg339 = m->stack[0];
  Obj reg340 = m->stack[1];
  Obj reg341 = symbolGet(intern("not"));
  m->pc = closureFn(reg341);
  Obj reg342 = symbolGet(intern("not"));
  Obj reg343 = closureRef(reg339, 0);
  Obj reg344 = closureRef(reg339, 1);
  Obj reg345 = closureRef(reg339, 2);
  Obj reg346 = closureRef(reg339, 3);
  Obj reg347 = closureRef(reg339, 4);
  Obj reg348 = makeClosure(clofun279, 5, reg343, reg344, reg345, reg346, reg347);
  m->stack[0] = reg342;
  m->stack[1] = reg348;
  m->stack[2] = reg340;
  return;
}
static void
clofun279 (struct VM* m) {
  Obj reg350 = m->stack[0];
  Obj reg351 = m->stack[1];
  Obj reg352 = symbolGet(intern("and"));
  m->pc = closureFn(reg352);
  Obj reg353 = symbolGet(intern("and"));
  Obj reg354 = closureRef(reg350, 0);
  Obj reg355 = closureRef(reg350, 1);
  Obj reg356 = closureRef(reg350, 2);
  Obj reg357 = closureRef(reg350, 3);
  Obj reg358 = makeClosure(clofun280, 4, reg354, reg355, reg356, reg357);
  Obj reg359 = closureRef(reg350, 4);
  m->stack[0] = reg353;
  m->stack[1] = reg358;
  m->stack[2] = reg359;
  m->stack[3] = reg351;
  return;
}
static void
clofun280 (struct VM* m) {
  Obj reg361 = m->stack[0];
  Obj reg362 = m->stack[1];
  if (reg362 == True) {
    Obj reg363 = closureRef(reg361, 1);
    Obj reg364 = Nil;
    Obj reg365 = cons(reg363, reg364);
    Obj reg366 = closureRef(reg361, 0);
    Obj reg367 = cons(reg366, reg365);
    Obj reg368 = car(reg367);
    Obj reg369 = closureRef(reg361, 1);
    Obj reg370 = Nil;
    Obj reg371 = cons(reg369, reg370);
    Obj reg372 = closureRef(reg361, 0);
    Obj reg373 = cons(reg372, reg371);
    Obj reg374 = cdr(reg373);
    Obj reg375 = symbolGet(intern("cons?"));
    m->pc = closureFn(reg375);
    Obj reg376 = symbolGet(intern("cons?"));
    Obj reg377 = closureRef(reg361, 2);
    Obj reg378 = closureRef(reg361, 3);
    Obj reg379 = closureRef(reg361, 0);
    Obj reg380 = closureRef(reg361, 1);
    Obj reg381 = makeClosure(clofun281, 5, reg368, reg377, reg378, reg379, reg380);
    m->stack[0] = reg376;
    m->stack[1] = reg381;
    m->stack[2] = reg374;
    return;
  } else {
    Obj reg383 = closureRef(reg361, 2);
    m->pc = closureFn(reg383);
    Obj reg384 = closureRef(reg361, 2);
    Obj reg385 = closureRef(reg361, 3);
    m->stack[0] = reg384;
    m->stack[1] = reg385;
    return;
  }
}
static void
clofun281 (struct VM* m) {
  Obj reg388 = m->stack[0];
  Obj reg389 = m->stack[1];
  Obj reg390 = closureRef(reg388, 4);
  Obj reg391 = Nil;
  Obj reg392 = cons(reg390, reg391);
  Obj reg393 = closureRef(reg388, 3);
  Obj reg394 = cons(reg393, reg392);
  Obj reg395 = cdr(reg394);
  Obj reg396 = symbolGet(intern("null?"));
  m->pc = closureFn(reg396);
  Obj reg397 = symbolGet(intern("null?"));
  Obj reg398 = closureRef(reg388, 0);
  Obj reg399 = closureRef(reg388, 3);
  Obj reg400 = closureRef(reg388, 4);
  Obj reg401 = closureRef(reg388, 1);
  Obj reg402 = closureRef(reg388, 2);
  Obj reg403 = makeClosure(clofun282, 6, reg398, reg399, reg400, reg401, reg402, reg389);
  m->stack[0] = reg397;
  m->stack[1] = reg403;
  m->stack[2] = reg395;
  return;
}
static void
clofun282 (struct VM* m) {
  Obj reg405 = m->stack[0];
  Obj reg406 = m->stack[1];
  Obj reg407 = symbolGet(intern("not"));
  m->pc = closureFn(reg407);
  Obj reg408 = symbolGet(intern("not"));
  Obj reg409 = closureRef(reg405, 0);
  Obj reg410 = closureRef(reg405, 1);
  Obj reg411 = closureRef(reg405, 2);
  Obj reg412 = closureRef(reg405, 3);
  Obj reg413 = closureRef(reg405, 4);
  Obj reg414 = closureRef(reg405, 5);
  Obj reg415 = makeClosure(clofun283, 6, reg409, reg410, reg411, reg412, reg413, reg414);
  m->stack[0] = reg408;
  m->stack[1] = reg415;
  m->stack[2] = reg406;
  return;
}
static void
clofun283 (struct VM* m) {
  Obj reg417 = m->stack[0];
  Obj reg418 = m->stack[1];
  Obj reg419 = symbolGet(intern("and"));
  m->pc = closureFn(reg419);
  Obj reg420 = symbolGet(intern("and"));
  Obj reg421 = closureRef(reg417, 0);
  Obj reg422 = closureRef(reg417, 1);
  Obj reg423 = closureRef(reg417, 2);
  Obj reg424 = closureRef(reg417, 3);
  Obj reg425 = closureRef(reg417, 4);
  Obj reg426 = makeClosure(clofun284, 5, reg421, reg422, reg423, reg424, reg425);
  Obj reg427 = closureRef(reg417, 5);
  m->stack[0] = reg420;
  m->stack[1] = reg426;
  m->stack[2] = reg427;
  m->stack[3] = reg418;
  return;
}
static void
clofun284 (struct VM* m) {
  Obj reg429 = m->stack[0];
  Obj reg430 = m->stack[1];
  if (reg430 == True) {
    Obj reg431 = closureRef(reg429, 2);
    Obj reg432 = Nil;
    Obj reg433 = cons(reg431, reg432);
    Obj reg434 = closureRef(reg429, 1);
    Obj reg435 = cons(reg434, reg433);
    Obj reg436 = cdr(reg435);
    Obj reg437 = car(reg436);
    Obj reg438 = closureRef(reg429, 2);
    Obj reg439 = Nil;
    Obj reg440 = cons(reg438, reg439);
    Obj reg441 = closureRef(reg429, 1);
    Obj reg442 = cons(reg441, reg440);
    Obj reg443 = cdr(reg442);
    Obj reg444 = cdr(reg443);
    Obj reg445 = symbolGet(intern("null?"));
    m->pc = closureFn(reg445);
    Obj reg446 = symbolGet(intern("null?"));
    Obj reg447 = closureRef(reg429, 0);
    Obj reg448 = closureRef(reg429, 3);
    Obj reg449 = closureRef(reg429, 4);
    Obj reg450 = makeClosure(clofun285, 4, reg437, reg447, reg448, reg449);
    m->stack[0] = reg446;
    m->stack[1] = reg450;
    m->stack[2] = reg444;
    return;
  } else {
    Obj reg452 = closureRef(reg429, 3);
    m->pc = closureFn(reg452);
    Obj reg453 = closureRef(reg429, 3);
    Obj reg454 = closureRef(reg429, 4);
    m->stack[0] = reg453;
    m->stack[1] = reg454;
    return;
  }
}
static void
clofun285 (struct VM* m) {
  Obj reg457 = m->stack[0];
  Obj reg458 = m->stack[1];
  if (reg458 == True) {
    Obj reg459 = closureRef(reg457, 1);
    Obj reg460 = 2;
    Obj reg461 = reg459 + reg460;
    Obj reg462 = closureRef(reg457, 0);
    Obj reg463 = 2;
    Obj reg464 = reg462 - reg463;
    Obj reg465 = symbolGet(intern("recur"));
    m->pc = closureFn(reg465);
    Obj reg466 = symbolGet(intern("recur"));
    Obj reg467 = closureRef(reg457, 3);
    m->stack[0] = reg466;
    m->stack[1] = reg467;
    m->stack[2] = reg461;
    m->stack[3] = reg464;
    return;
  } else {
    Obj reg469 = closureRef(reg457, 2);
    m->pc = closureFn(reg469);
    Obj reg470 = closureRef(reg457, 2);
    Obj reg471 = closureRef(reg457, 3);
    m->stack[0] = reg470;
    m->stack[1] = reg471;
    return;
  }
}
static void
clofun266 (struct VM* m) {
  Obj reg474 = m->stack[0];
  Obj reg475 = m->stack[1];
  Obj reg476 = closureRef(reg474, 3);
  Obj reg477 = Nil;
  Obj reg478 = cons(reg476, reg477);
  Obj reg479 = closureRef(reg474, 2);
  Obj reg480 = cons(reg479, reg478);
  Obj reg481 = symbolGet(intern("null?"));
  m->pc = closureFn(reg481);
  Obj reg482 = symbolGet(intern("null?"));
  Obj reg483 = closureRef(reg474, 2);
  Obj reg484 = closureRef(reg474, 3);
  Obj reg485 = closureRef(reg474, 0);
  Obj reg486 = closureRef(reg474, 1);
  Obj reg487 = makeClosure(clofun267, 5, reg483, reg484, reg485, reg486, reg475);
  m->stack[0] = reg482;
  m->stack[1] = reg487;
  m->stack[2] = reg480;
  return;
}
static void
clofun267 (struct VM* m) {
  Obj reg489 = m->stack[0];
  Obj reg490 = m->stack[1];
  Obj reg491 = symbolGet(intern("not"));
  m->pc = closureFn(reg491);
  Obj reg492 = symbolGet(intern("not"));
  Obj reg493 = closureRef(reg489, 0);
  Obj reg494 = closureRef(reg489, 1);
  Obj reg495 = closureRef(reg489, 2);
  Obj reg496 = closureRef(reg489, 3);
  Obj reg497 = closureRef(reg489, 4);
  Obj reg498 = makeClosure(clofun268, 5, reg493, reg494, reg495, reg496, reg497);
  m->stack[0] = reg492;
  m->stack[1] = reg498;
  m->stack[2] = reg490;
  return;
}
static void
clofun268 (struct VM* m) {
  Obj reg500 = m->stack[0];
  Obj reg501 = m->stack[1];
  Obj reg502 = symbolGet(intern("and"));
  m->pc = closureFn(reg502);
  Obj reg503 = symbolGet(intern("and"));
  Obj reg504 = closureRef(reg500, 0);
  Obj reg505 = closureRef(reg500, 1);
  Obj reg506 = closureRef(reg500, 2);
  Obj reg507 = closureRef(reg500, 3);
  Obj reg508 = makeClosure(clofun269, 4, reg504, reg505, reg506, reg507);
  Obj reg509 = closureRef(reg500, 4);
  m->stack[0] = reg503;
  m->stack[1] = reg508;
  m->stack[2] = reg509;
  m->stack[3] = reg501;
  return;
}
static void
clofun269 (struct VM* m) {
  Obj reg511 = m->stack[0];
  Obj reg512 = m->stack[1];
  if (reg512 == True) {
    Obj reg513 = closureRef(reg511, 1);
    Obj reg514 = Nil;
    Obj reg515 = cons(reg513, reg514);
    Obj reg516 = closureRef(reg511, 0);
    Obj reg517 = cons(reg516, reg515);
    Obj reg518 = car(reg517);
    Obj reg519 = closureRef(reg511, 1);
    Obj reg520 = Nil;
    Obj reg521 = cons(reg519, reg520);
    Obj reg522 = closureRef(reg511, 0);
    Obj reg523 = cons(reg522, reg521);
    Obj reg524 = cdr(reg523);
    Obj reg525 = symbolGet(intern("cons?"));
    m->pc = closureFn(reg525);
    Obj reg526 = symbolGet(intern("cons?"));
    Obj reg527 = closureRef(reg511, 2);
    Obj reg528 = closureRef(reg511, 3);
    Obj reg529 = closureRef(reg511, 0);
    Obj reg530 = closureRef(reg511, 1);
    Obj reg531 = makeClosure(clofun270, 5, reg518, reg527, reg528, reg529, reg530);
    m->stack[0] = reg526;
    m->stack[1] = reg531;
    m->stack[2] = reg524;
    return;
  } else {
    Obj reg533 = closureRef(reg511, 2);
    m->pc = closureFn(reg533);
    Obj reg534 = closureRef(reg511, 2);
    Obj reg535 = closureRef(reg511, 3);
    m->stack[0] = reg534;
    m->stack[1] = reg535;
    return;
  }
}
static void
clofun270 (struct VM* m) {
  Obj reg538 = m->stack[0];
  Obj reg539 = m->stack[1];
  Obj reg540 = closureRef(reg538, 4);
  Obj reg541 = Nil;
  Obj reg542 = cons(reg540, reg541);
  Obj reg543 = closureRef(reg538, 3);
  Obj reg544 = cons(reg543, reg542);
  Obj reg545 = cdr(reg544);
  Obj reg546 = symbolGet(intern("null?"));
  m->pc = closureFn(reg546);
  Obj reg547 = symbolGet(intern("null?"));
  Obj reg548 = closureRef(reg538, 0);
  Obj reg549 = closureRef(reg538, 3);
  Obj reg550 = closureRef(reg538, 4);
  Obj reg551 = closureRef(reg538, 1);
  Obj reg552 = closureRef(reg538, 2);
  Obj reg553 = makeClosure(clofun271, 6, reg548, reg549, reg550, reg551, reg552, reg539);
  m->stack[0] = reg547;
  m->stack[1] = reg553;
  m->stack[2] = reg545;
  return;
}
static void
clofun271 (struct VM* m) {
  Obj reg555 = m->stack[0];
  Obj reg556 = m->stack[1];
  Obj reg557 = symbolGet(intern("not"));
  m->pc = closureFn(reg557);
  Obj reg558 = symbolGet(intern("not"));
  Obj reg559 = closureRef(reg555, 0);
  Obj reg560 = closureRef(reg555, 1);
  Obj reg561 = closureRef(reg555, 2);
  Obj reg562 = closureRef(reg555, 3);
  Obj reg563 = closureRef(reg555, 4);
  Obj reg564 = closureRef(reg555, 5);
  Obj reg565 = makeClosure(clofun272, 6, reg559, reg560, reg561, reg562, reg563, reg564);
  m->stack[0] = reg558;
  m->stack[1] = reg565;
  m->stack[2] = reg556;
  return;
}
static void
clofun272 (struct VM* m) {
  Obj reg567 = m->stack[0];
  Obj reg568 = m->stack[1];
  Obj reg569 = symbolGet(intern("and"));
  m->pc = closureFn(reg569);
  Obj reg570 = symbolGet(intern("and"));
  Obj reg571 = closureRef(reg567, 0);
  Obj reg572 = closureRef(reg567, 1);
  Obj reg573 = closureRef(reg567, 2);
  Obj reg574 = closureRef(reg567, 3);
  Obj reg575 = closureRef(reg567, 4);
  Obj reg576 = makeClosure(clofun273, 5, reg571, reg572, reg573, reg574, reg575);
  Obj reg577 = closureRef(reg567, 5);
  m->stack[0] = reg570;
  m->stack[1] = reg576;
  m->stack[2] = reg577;
  m->stack[3] = reg568;
  return;
}
static void
clofun273 (struct VM* m) {
  Obj reg579 = m->stack[0];
  Obj reg580 = m->stack[1];
  if (reg580 == True) {
    Obj reg581 = closureRef(reg579, 2);
    Obj reg582 = Nil;
    Obj reg583 = cons(reg581, reg582);
    Obj reg584 = closureRef(reg579, 1);
    Obj reg585 = cons(reg584, reg583);
    Obj reg586 = cdr(reg585);
    Obj reg587 = car(reg586);
    Obj reg588 = symbolGet(intern("equal?"));
    m->pc = closureFn(reg588);
    Obj reg589 = symbolGet(intern("equal?"));
    Obj reg590 = closureRef(reg579, 0);
    Obj reg591 = closureRef(reg579, 1);
    Obj reg592 = closureRef(reg579, 2);
    Obj reg593 = closureRef(reg579, 3);
    Obj reg594 = closureRef(reg579, 4);
    Obj reg595 = makeClosure(clofun274, 5, reg590, reg591, reg592, reg593, reg594);
    Obj reg596 = 0;
    m->stack[0] = reg589;
    m->stack[1] = reg595;
    m->stack[2] = reg596;
    m->stack[3] = reg587;
    return;
  } else {
    Obj reg598 = closureRef(reg579, 3);
    m->pc = closureFn(reg598);
    Obj reg599 = closureRef(reg579, 3);
    Obj reg600 = closureRef(reg579, 4);
    m->stack[0] = reg599;
    m->stack[1] = reg600;
    return;
  }
}
static void
clofun274 (struct VM* m) {
  Obj reg603 = m->stack[0];
  Obj reg604 = m->stack[1];
  if (reg604 == True) {
    Obj reg605 = closureRef(reg603, 2);
    Obj reg606 = Nil;
    Obj reg607 = cons(reg605, reg606);
    Obj reg608 = closureRef(reg603, 1);
    Obj reg609 = cons(reg608, reg607);
    Obj reg610 = cdr(reg609);
    Obj reg611 = cdr(reg610);
    Obj reg612 = symbolGet(intern("null?"));
    m->pc = closureFn(reg612);
    Obj reg613 = symbolGet(intern("null?"));
    Obj reg614 = closureRef(reg603, 0);
    Obj reg615 = closureRef(reg603, 3);
    Obj reg616 = closureRef(reg603, 4);
    Obj reg617 = makeClosure(clofun275, 3, reg614, reg615, reg616);
    m->stack[0] = reg613;
    m->stack[1] = reg617;
    m->stack[2] = reg611;
    return;
  } else {
    Obj reg619 = closureRef(reg603, 3);
    m->pc = closureFn(reg619);
    Obj reg620 = closureRef(reg603, 3);
    Obj reg621 = closureRef(reg603, 4);
    m->stack[0] = reg620;
    m->stack[1] = reg621;
    return;
  }
}
static void
clofun275 (struct VM* m) {
  Obj reg624 = m->stack[0];
  Obj reg625 = m->stack[1];
  if (reg625 == True) {
    Obj reg626 = closureRef(reg624, 2);
    m->pc = closureFn(reg626);
    Obj reg627 = closureRef(reg624, 2);
    Obj reg628 = closureRef(reg624, 0);
    m->stack[0] = reg627;
    m->stack[1] = reg628;
    return;
  } else {
    Obj reg630 = closureRef(reg624, 1);
    m->pc = closureFn(reg630);
    Obj reg631 = closureRef(reg624, 1);
    Obj reg632 = closureRef(reg624, 2);
    m->stack[0] = reg631;
    m->stack[1] = reg632;
    return;
  }
}
