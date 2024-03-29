//fastest
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode *slow=head,*fast=head,*entry=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
