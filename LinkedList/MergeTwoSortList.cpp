#include<iostream>
using namespace std;

// Definition of ListNode
class ListNode {
public:
    int val;
    ListNode* next;

    // Constructor
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

        // Base case
        if (head1 == NULL || head2 == NULL) {
            return head1 == NULL ? head2 : head1;
        }

        // Case 1: head1 smaller
        if (head1->val <= head2->val) {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        } 
        // Case 2: head2 smaller
        else {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }
};