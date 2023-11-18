class Solution {
public:
    /* Should return data of the middle node. If linked list is empty, then return -1 */
    int getMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return (slow != NULL) ? slow->data : -1;
    }
};
