/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    multiset<pair<int,ListNode*>> s;
    for(int i = 0;i<A.size();i++){
        ListNode* temp = A[i];
        while(temp!=NULL){
            s.insert(make_pair(temp->val,temp));
            temp = temp->next;
        }
    }
    ListNode* ans = new ListNode(0);
    ListNode* temp = ans;
    for(auto it = s.begin();it!=s.end();it++){
        temp->next = it->second;
        temp = temp->next;
    }
    
    return ans->next;
}
