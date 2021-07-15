void deleteNode(ListNode* node) {
        ListNode *curr,*temp;
        curr=node;
        temp=node->next;
        while(temp->next!=NULL){
            curr->val=temp->val;
            curr=curr->next;
            temp=temp->next;
        }
        curr->val=temp->val;
        curr->next=NULL;
    }
