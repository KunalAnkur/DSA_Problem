//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> listData;
        ListNode* temp = head;
        while(temp != NULL){
            listData.push_back(temp->val);
            temp = temp->next;
        }
        int ans = 0;
        int j=listData.size()-1;
    for(int i=0; i<listData.size(); i++){
       ans = ans+listData[j]*pow(2,i);
        j--;
    }
       return ans;
    }
};
