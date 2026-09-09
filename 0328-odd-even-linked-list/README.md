# 328. Odd Even Linked List

## Intuition
Rearrange list to group odd-indexed nodes first, then even-indexed nodes. Maintain separate pointers for odd and even chains, link them at the end.

## Approach
**Two-Pointer Linked List Reordering:**

1. Handle edge case: If head is NULL or head->next is NULL, return head.
2. Initialize:
   - `odd = head` (first odd-indexed node)
   - `even = head->next` (first even-indexed node)
   - `evenhead = even` (save start of even chain)

3. Traverse and alternate linking:
   - While `even != NULL && even->next != NULL`:
     - `odd->next = even->next` (link odd to next odd)
     - `odd = odd->next` (move odd pointer)
     - `even->next = odd->next` (link even to next even)
     - `even = even->next` (move even pointer)

4. Connect: `odd->next = evenhead` (connect odd chain to even chain start)
5. Return head.

**Example:** `head = [1,2,3,4,5]`
- Odd indices (1-indexed): 1, 3, 5
- Even indices: 2, 4
- Result: [1,3,5,2,4]

## Time Complexity
**O(n)** — Single pass through list.

## Space Complexity
**O(1)** — Only pointer adjustments; no extra space.