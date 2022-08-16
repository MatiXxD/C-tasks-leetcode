//You are given the heads of two sorted linked lists list1 and list2.
//Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
//Return the head of the merged linked list.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){

    struct ListNode *newList;
    struct ListNode *rootNode;

    if(list1 != NULL && list2 != NULL){

        if(list1->val < list2->val){
            newList = list1;
            list1 = list1->next;
        }
        else{
            newList = list2;
            list2 = list2->next;
        }
        rootNode = newList;

        while(list1 != NULL && list2 != NULL){

            if(list1->val < list2->val){
                newList->next = list1;
                list1 = list1->next;
            }
            else{
                newList->next = list2;
                list2 = list2->next;
            }
            newList = newList->next;

        }
        if(list1 == NULL)
            newList->next = list2;
        else
            newList->next = list1;

        return rootNode;

    }

    if(list1 == NULL && list2 == NULL)
        return NULL;
    else if(list1 == NULL)
        return list2;
    else
        return list1;

}
