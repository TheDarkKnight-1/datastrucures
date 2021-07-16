//https://leetcode.com/problems/palindrome-linked-list/
bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode *slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode *d=head;
        while(slow!=NULL){
            if(d->val!=slow->val) return false;
            slow=slow->next;
            d=d->next;
        }
        return true;
        
    }
    ListNode* reverse(ListNode *head){
        ListNode *p=NULL;
        ListNode *next=NULL;
        while(head!=NULL){
            next=head->next;
            head->next=p;
            p=head;
            head=next;
        }
        return p;
    }
