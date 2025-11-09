class Solution {
public:
    int getListLength(ListNode* head) {
        int length = 0;
        while (head) {
            length++;
            head = head->next;
        }
        return length;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getListLength(headA);
        int lenB = getListLength(headB);

        // Align both lists to the same starting level
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }
        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }

        // Move both pointers together until intersection is found
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }

        return headA; // returns intersection node or NULL
    }
};
