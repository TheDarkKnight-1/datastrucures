//206. Reverse Linked List (LeetCode)
ListNode* reverseList(ListNode* head) {
        stack<ListNode*>st;
        ListNode *p=head;
        if(p==NULL) return p;
        while(p!=NULL){
            //cout<<p<<" ";
            st.push(p);
            p=p->next;
            
        }
        cout<<endl;
        head=st.top();
        st.pop();
        p=head;
        while(!st.empty()){
            //cout<<st.top()->val<<" ";
            p->next=st.top();
            p=p->next;
            st.pop();
            
        }
        p->next=NULL;
        return head;
    }
