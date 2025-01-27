#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* deleteHead(ListNode* head) {
        if (head == NULL) return head;
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
};