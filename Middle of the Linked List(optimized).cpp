ListNode* middleNode(ListNode* head) {
        //the tortoise method
        ListNode *fast,*slow;
        slow=fast=head;
        if(head==NULL) return head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
