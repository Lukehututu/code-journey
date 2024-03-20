#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>



 //Definition for singly-linked list.
 struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int new_data = head->val;//设置一个n来存不重复的数        
        ListNode* tmp = head;//设置一个迭代器来实现遍历
       // ListNode* new_list = new ListNode(new_data);//设置一个新的链表来存数据
        ListNode first(new_data);
        ListNode* new_list = &first;
        ListNode* cur_node = new_list;//同时设置一个指针来帮助插入数据
        //开始遍历整个链表，遇到不同的就new一个新的结点将数据放进去
        while (tmp != nullptr) {
            tmp = tmp->next;
            if (!tmp)
                break;
            //如果tmp指的结点的值不等于new_data,那就更新new_data并插入新结点
            if (tmp->val != new_data) {
                new_data = tmp->val;
                ListNode nnode(new_data);
                ListNode* newnode = &nnode;
                cur_node->next = newnode;
                cur_node = newnode;
            }
        }
        //此时已经得到新的链表
        head = new_list;
        return head;
    }
};

void PrintList(ListNode* head)
{
    ListNode* tmp = head;
    for (; tmp != nullptr; tmp = tmp->next)
    {
        cout << tmp->val << " ";
    }
}

int main()
{
  /*  ListNode* head;
    head = new ListNode(1);
    ListNode* cur = head;
    int input = 0;
    int rnd = 0;
    cin >> rnd;
    while (rnd--)
    {
        cin >> input;
        ListNode nnode(input);
        cur->next = &nnode;
        cur = &nnode;
    }
    Solution S;
    ListNode* L = S.deleteDuplicates(head);
    PrintList(L);*/


    ListNode* head = new ListNode(1);
    ListNode* cur = head;
    int input = 0;
    int rnd = 0;
    cin >> rnd;
    while (rnd--) {
        cin >> input;
        ListNode* nnode = new ListNode(input); // 在堆上分配节点对象
        cur->next = nnode;
        cur = nnode;
    }
    PrintList(head);
    Solution S;
    ListNode* L = S.deleteDuplicates(head);
    PrintList(L);
    // 释放链表的内存
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}