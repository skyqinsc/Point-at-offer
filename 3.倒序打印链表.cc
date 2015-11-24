/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

//使用 verctor stack 都行。
class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
        vector<int> ret;
        while(head!=NULL){
            ret.push_back(head->val);
            head=head->next;
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};
