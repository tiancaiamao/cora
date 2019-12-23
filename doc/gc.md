




实现垃圾回收的第一个难点是，如何确定 root。

一种方式是扫描栈。
另一种方式是全虚拟机化。第二种方式实现需要编译器那一层实现活跃对象分析，这个不好实现。故而放弃，采用较笨的扫描栈方式。

如果用扫描栈去实现 root，则会遇到
垃圾回收的另一个难点，如何实现精确 gc

为了不误报栈扫描的信息，需要确认一个 int 是：
1. 堆分配的
2. 是由 cora 分配出去的对象


如果用 mark-sweep 一个难点是如何实现

如果不是堆分配，那么解引用直接会出现指针越界。
解决这个有一个方式是用一个 map 存所有 cora 分配的对象的指针。
这个做法太丑了，每次判断是不是精确指针，性能也有问题。

另一个做法是，自己实现内存分配器，然后只需要用地址块的分界去判断一个指针是不是 cora 分配出来的。
这种方式主要是自己实现内存分配器引用的复杂度过高了。

使用 copy gc 算法

```
void*
gcCopy(scmHead* head, struct GC *gc) {
  // Copy the data of itself to the new place.
  void* to = gcAlloc(gc, head->size);
  memcpy(to, head, head->size);

  // Copy the children to the new place.
  // And update the reference of the new object.
  gcCopyFunc gcCopyChildren = getGCFunc(head->type);
  if (gcCopyChildren != NULL) {
    gcCopyChildren(head, to, gc);
  }

  // Update the forwarding and leave it as a tombstone.
  head->forwarding = to;
  head->visited = true;
  return to;
}
```
