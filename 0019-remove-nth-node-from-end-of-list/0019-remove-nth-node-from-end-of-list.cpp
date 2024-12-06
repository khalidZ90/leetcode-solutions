/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        std::stack<ListNode*> link;
 ListNode* temp =head;
 while(temp!=NULL){
    link.push(temp);
    temp=temp->next;
 }
 for (int i=1;i<n;i++){
    link.pop();
 }
 ListNode* temp1 = link.top();
 link.pop();
 if(!link.empty()){
 ListNode* temp2 = link.top();
 ListNode* temp3 = temp1->next;
 temp2->next=temp3;
 delete temp1;
 head = link.top();
 }
 else{
    head =temp1->next;
    
 }
while(!link.empty()){
    head=link.top();
    link.pop();
}
 
return head;

    }
};