//Optimal
//https://leetcode.com/problems/intersection-of-two-linked-lists/
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode *a=headA,*b=headB;
        while(a!=b){
            a=a==NULL?headA:a->next;
            b=b==NULL?headB:b->next;
        }
        return a;
    }
