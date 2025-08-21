class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newL=new ListNode(0);
        ListNode *temp=newL;
        int carry=0;
        while(l1 ||l2 || carry){
            int d1=(l1)?l1->val:0;
            int d2=(l2)?l2->val:0;
            int sum=d1+d2+carry;
            int digit=sum%10;
            carry=sum/10;
            ListNode *nn=new ListNode(digit);
            temp->next=nn;
            temp=temp->next;
            l1=(l1)?l1->next:nullptr;
            l2=(l2)?l2->next:nullptr;
        }
        return newL->next;
    }
};