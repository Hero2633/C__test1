#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//struct ListNode {
//   int val;
//    struct ListNode* next;
//    
//};
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//dummyhead->next = head;
//struct ListNode* fast = head;
//struct ListNode* slow = head;
//struct ListNode* prev = dummyhead;
//while (--n)
//{
//    fast = fast->next;
//}
//while (fast->next != NULL)
//{
//    fast = fast->next;
//    prev = slow;
//    slow = slow->next;
//}
//prev->next = prev->next->next;
//return dummyhead->next;
//
//}///////nţ��BM9
//
//int main()
//{
//
//
//	return 0;
//}
//
// 
// struct TreeNode {
// 	int val;
// 	struct TreeNode *left;
// 	struct TreeNode *right;
//  };
// /**
// * C������������ȫ�ֱ��������static����ֹ�ظ�����
// */
// /**
//  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//  *
//  *
//  * @param root TreeNode��
//  * @return int����һά����
//  * @return int* returnSize ������������
//  */
//void _preorder(struct TreeNode* root, int* a, int* returnSize)
//{
//    static int i = 0;
//
//    if (root == NULL)
//        return;
//    a[i] = root->val;
//    i++;
//    (*returnSize)++;
//    _preorder(root->left, a, returnSize);
//    _preorder(root->right, a, returnSize);
//
//
//}
//
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    // write code here
//    if (root == NULL)
//        return NULL;
//    *returnSize = 0;
//    int* a = (int*)malloc(sizeof(int*) * 100);
//    _preorder(root, a, returnSize);
//
//
//
//
//    return a;
//}.///////////////////////////////////BM23


//struct ListNode {
//    int val;
//    struct ListNode* next;
//    
//};
//struct ListNode* ReverseList(struct ListNode* head) {
//    // write code here
//    if (head == NULL)
//        return head;
//    struct ListNode* tail = NULL;
//    struct ListNode* next = head->next;
//    while (head != NULL)
//    {
//        head->next = tail;
//        tail = head;
//        head = next;
//        next = next->next;
//    }
//
//    return tail;
//
//}...................ţ��BM1
//
//int main()
//{
//
//
//
//	return 0;
//}