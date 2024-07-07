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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        // ListNode* start = list1;
        // ListNode* end = list1;
        // for(int i = 1; i < a; i++){ //a se ek kam bar chalani hai
        //     start = start->next;
        // }
        // for(int i = 1; i<= b; i++){ //isko b+1 times challani hai
        //     end = end->next;
        // }

        // start->next =  list2;
        // ListNode* temp = list1;
        // while(temp->next!=NULL){
        //     temp = temp->next;
        // }
        // temp->next = end->next;
        // return list1; 
        
        //METHOD2
        ListNode *start = list1;
        ListNode* end = list1    ;
        a--;
        while(a){
            start = start->next;
            a--;
        }
        b++;
        while(b){
            end = end->next;
            b--;
        }
        start->next = list2;

        ListNode* temp = list2;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next  = end;
        return list1;


    }
};