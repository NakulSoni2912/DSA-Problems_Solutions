# 232. Implement Queue Using Stacks

## Intuition
A stack is LIFO (last-in-first-out), but a queue is FIFO (first-in-first-out). To reverse order, use a second stack: push all elements from s1 to s2, then push the new element to s1, then move elements back from s2 to s1.

## Approach
**Two-Stack Queue:**

Maintain two stacks: `s1` (main) and `s2` (auxiliary).

**Push operation:**
1. Move all elements from s1 to s2 (reverses order)
2. Push new element to s1
3. Move all elements back from s2 to s1 (maintains FIFO at top of s1)

**Pop operation:**
- Remove and return top of s1

**Peek operation:**
- Return top of s1 without removing

**Empty check:**
- Check if s1 is empty

**Example:** Push 1, Push 2, Pop
- Push 1: s1 = [1]
- Push 2: s1 → s2, push 2, s2 → s1 = [1,2] (1 on top)
- Pop: return 1, s1 = [2]

## Time Complexity
- **Push:** O(n) — Move elements twice
- **Pop, Peek, Empty:** O(1)

## Space Complexity
**O(n)** — Two stacks store all n elements.