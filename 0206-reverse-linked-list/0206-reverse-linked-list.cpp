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
    void insert(ListNode*& head,int data){
        ListNode* node = new ListNode(data);
        node->next = head;
        head = node;
    }
    ListNode* reverseList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* temp2 = nullptr;
        for(int i=0;i<arr.size();i++){
            insert(temp2,arr[i]);
        }
        return temp2;
    }
};