//O(2n) timecomplexity and O(1) spacecomplexity
ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Brute force
        int len=0,count=0;
        ListNode *t=head;
        while(t!=NULL){len++; t=t->next;}
        if(n==len){
            head=head->next;
            return head;
        }
        else{
            ListNode *p=head;
            while(count<len-n-1){
                p=p->next;
                count++;
                //cout<<count<<" "<<p->val<<endl;
            }
            //cout<<p->val;
            ListNode *temp=p->next;
            //cout<<temp->val;
            p->next=p->next->next;
            temp->next=NULL;
        }
        return head;
    }
