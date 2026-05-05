class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        int length = 1;
        ListNode* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
            length++;
        }

        temp->next = head;
        k = k % length;
        int steps = length - k;

        while (steps--) {
            temp = temp->next;
        }

        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};