/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node* fs = head;
    Node* sl = head;
    while (fs != NULL && sl != NULL){
        fs = fs->next->next;
        sl = sl->next;
        if (fs == sl){
            return true;
        }
    }
    return false;
}
