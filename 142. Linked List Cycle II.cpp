 //Naive approach
//https://leetcode.com/problems/linked-list-cycle-ii/
    ListNode *detectCycle(ListNode *head) {
        map<ListNode *,int> m;
        ListNode *d=head;
        while(d!=NULL && d->next!=NULL){
            if(m.find(d)==m.end()){
                m[d]=0;
            }
            else if(m[d]>=1){
                return d;
            }
            else{
                m[d]+=1;
            }
            d=d->next;
        }
        return NULL;
    }
