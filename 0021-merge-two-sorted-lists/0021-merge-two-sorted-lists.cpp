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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged ;
        ListNode* p=list1;
        ListNode* q=list2;
        if(list1==NULL&&list2==NULL) return NULL;
        else if (list1==NULL) return list2;
        else if(list2==NULL) return list1;
       else if(list1->val <= list2->val){
            merged = list1;
            p=list1->next;

        }
        else {
            merged =list2;
            q=list2->next;
        }
        ListNode* curr = merged;
        while(p!=NULL&&q!=NULL){
            if(p->val<=q->val){
                curr->next =p;
                curr=p;
                p=curr->next;
            }
                else {
                    curr->next = q;
                    curr=q;
                    q=curr->next;
                }
            }
        
        if(p==NULL){
            curr->next=q;
        }
        else curr->next=p;

        return merged;
    }
};