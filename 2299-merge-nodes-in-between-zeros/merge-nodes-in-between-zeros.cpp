/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
    ListNode* dummy = new ListNode(0);       // Create dummy node to build result
    ListNode* tail = dummy;                  // Tail pointer to append merged nodes
    int sum = 0;                              // Running sum of values between zeros

    head = head->next;                        // Skip the first 0

    while (head) {
        if (head->val == 0) // Found a zero → end of group
        {                 
            tail->next = new ListNode(sum);   // Create node with sum
            tail = tail->next;                // Move tail forward
            sum = 0;                          // agle k liye reset sum
        } else {
            sum += head->val;                 // add values
        }
        head = head->next;                    // Move to next node
    }

    return dummy->next;                      
}
};