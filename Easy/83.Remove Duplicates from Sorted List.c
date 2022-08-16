// Given the head of a sorted linked list, delete all duplicates such that each element appears only once.
// Return the linked list sorted as well.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdlib.h>
#include <stdio.h>

struct ListNode* deleteDuplicates(struct ListNode* head){

    if(head == NULL)
        return NULL;

    struct ListNode *headPtr = head;
    struct ListNode *prvPtr = NULL;

    int prvVal = headPtr->val - 1;
    while(headPtr != NULL){

        if(headPtr->val == prvVal){
            prvPtr->next = headPtr->next;
        }
        else{
            prvPtr = headPtr;
        }

        prvVal = headPtr->val;
        headPtr = headPtr->next;

    }

    return head;

}
