#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
 };





struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    //��list2Ϊ����
    while (list1 != NULL)
    {
        struct ListNode* tmp = list2;
        //���ұ�����Ҿͱ���list2ֱ���ҵ�����С���ٲ嵽�����
        if (list1->val > tmp->val)
        {

            while (list1 != NULL && tmp->next != NULL && list1->val >= tmp->next->val)
            {
                tmp = tmp->next;
                if (tmp->next == NULL)
                    break;
            }
            struct ListNode* pc = list1;
            list1 = list1->next;
            tmp->next = pc;
            pc->next = NULL;
            if (list1 == NULL)
                return list2;
        }
        else if (list1->val <= tmp->val)
        {
            list1 = list1->next;
            tmp->next = list2;
            list2 = tmp;
        }
    }
    return list2;
}

void InitList(struct ListNode* list)
{
    list = NULL;
}

//��庯��
void InsertNode(struct ListNode* list, int x)
{
    if (list == NULL)
    {
        struct ListNode* pc = (struct ListNode*)malloc(sizeof(struct ListNode));
        list = pc;
        list->val = x;
        list->next = NULL;
        return;
    }
    struct ListNode* pt = list;
    while (pt->next != NULL)
    {
        pt = pt->next;
    }
    struct ListNode* pa = (struct ListNode*)malloc(sizeof(struct ListNode));
    pa->val = x;
    pa->next = NULL;
    pt->next = pa;
}



int main()
{
    struct ListNode list1 = { 0 };
    struct ListNode list2 = {0};
    InitList(&list1);
    InitList(&list2);
    InsertNode(&list1, 1);
    InsertNode(&list1, 2);
    InsertNode(&list1, 4);
    InsertNode(&list2, 1);
    InsertNode(&list2, 3);
    InsertNode(&list2, 4);
    struct ListNode* pc = mergeTwoLists(&list1, &list2);

}



//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    if (list1 == NULL)
//        return list2;
//    if (list2 == NULL)
//        return list1;
//    //��list2Ϊ����
//    while (list1 != NULL)
//    {
//        struct ListNode* tmp = list2;
//        //���ұ�����Ҿͱ���list2ֱ���ҵ�����С���ٲ嵽�����
//        if (list1->val > tmp->val)
//        {
//
//            while (list1 != NULL && tmp->next != NULL && list1->val >= tmp->next->val)
//            {
//                tmp = tmp->next;
//                if (tmp->next == NULL)
//                    break;
//            }
//            struct ListNode* pc = list1;
//            list1 = list1->next;
//            tmp->next = pc;
//            pc->next = NULL;
//            if (list1 == NULL)
//                return list2;
//        }
//        else if (list1->val <= tmp->val)
//        {
//            list1 = list1->next;
//            tmp->next = list2;
//            list2 = tmp;
//        }
//    }
//    return list2;
//}


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    //��list2Ϊ����
    struct ListNode* tmp = list2;
    while (list1 != NULL)
    {
        //���ұ�����Ҿͱ���list2ֱ���ҵ�����С���ٲ嵽�����//�Ż�����һ��ָ���¼�����λ�ã��ǾͲ���ÿ�ζ�����������
        if (list1!=NULL && tmp!=NULL && list1->val > tmp->val)
        {
            if (tmp->next == NULL)
            {
                struct ListNode* pc = list1;
                list1 = list1->next;
                pc->next = tmp->next;
                tmp->next = pc;
            }
            tmp = tmp->next;

        }
        else if (list1->val <= tmp->val)
        {
            struct ListNode* pc = list1;
            list1 = list1->next;
            pc->next = tmp->next;
            tmp->next = pc;
            int t = pc->val;
            pc->val = tmp->val;
            tmp->val = t;
        }
    }
    return list2;
}



  /*Definition for singly-linked list.*/
  struct ListNode {
      int val;
     struct ListNode *next;
  };

 // void ISture(int m,int n)
 //{
 // if(m>=next)
 // {
 //     return m;
 // }
 // return n;
 //}
struct ListNode* mergeTwoLists(struct ListNode* L1, struct ListNode* L2) 
{
    struct ListNode* preHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    preHead->val = -1;

    struct ListNode* p = preHead;
    /*�����б���û�пյģ��������ǿյķ��� ����һ���յľͷ�����һ��*/
    if (L1 == NULL)
    {
        return L2;
    }
    else if (L2 == NULL)
    {
        return L1;
    }
    /*дһ��ѭ�������бȽ�*/
    while (L1 != NULL && L2 != NULL)
    {
        if (L1->val < L2->val)
        {
            p->next = L1;
            L1 = L1->next;
        }
        else
        {
            p->next = L2;
            L2 = L2->next;
        }
        p = p->next;
    }
    if (L1 == NULL)
    {
        p->next = L2;
    }
    else
    {
        p->next = L1;
    }
    return preHead->next;
}