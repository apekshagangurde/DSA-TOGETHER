class Solution {
public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        // Initialize pointers
        struct Node* prev = nullptr;
        struct Node* current = head;
        struct Node* next_node = nullptr;

        // Traverse the linked list
        while (current != nullptr) {
            // Save the next node
            next_node = current->next;
            // Reverse the link
            current->next = prev;
            // Move to the next nodes
            prev = current;
            current = next_node;
        }

        // The new head is the last node (prev)
        head = prev;
        return head;
    }
};

  
