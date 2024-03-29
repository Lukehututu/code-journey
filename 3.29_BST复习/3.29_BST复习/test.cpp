#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//����ڵ�
class BST_TreeNode {
private:
    int My_data;//����
    BST_TreeNode* left;//����ָ��
    BST_TreeNode* right;//�Һ���ָ��
public:
    BST_TreeNode(int data)
    {
        this->My_data = data;
        left = nullptr;
        right = nullptr;
    }
    //��������
    void set_left(BST_TreeNode* ptr)
    {
        left = ptr;
    }
    //�����Һ���
    void set_right(BST_TreeNode* ptr)
    {
        right = ptr;
    }
    //�޸�����
    void set_My_data(int val)
    {
        My_data = val;
    }
    //��ȡ����
    int get_My_data()
    {
        return this->My_data;
    }
    //��ȡ����
    BST_TreeNode* get_left()
    {
        return left;
    }
    //��ȡ�Һ���
    BST_TreeNode* get_right()
    {
        return right;
    }
};


//����������--����ʵ��
BST_TreeNode* BST_Search(BST_TreeNode* T, int val)
{
    if (T == nullptr)
        return nullptr;
    BST_TreeNode* emp = T;
    while (emp != nullptr)
    {
        if (emp->get_My_data() == val)
            return emp;
        else if (emp->get_My_data() < val)
            emp = emp->get_left();
        else
            emp = emp->get_right();
    }
    return emp;
}


//����������--�ݹ�ʵ��
BST_TreeNode* BST_Search(BST_TreeNode* T, int val)
{
    if (T->get_My_data() == val)
        return T;
    else if (T == nullptr)
        return T;
    else if (T->get_My_data() < val)
        BST_Search(T->get_left(), val);
    else
        BST_Search(T->get_right(), val);
}

//�����������Ĳ���
bool BST_insert(BST_TreeNode* T, int val)
{
    //�ȼ���ǲ��ǿ���
    if (T == nullptr)
        T = new BST_TreeNode(val);
    //������ǿ���,��һֱ���Ƚ�ֱ���ҵ�Ҷ�ӽڵ�
    else if (T->get_My_data() == val)
        return false;
    //Ҫ����ýڵ�ȸ��ڵ����������
    else if (T->get_My_data() < val)
    {
        BST_insert(T->get_right(), val);
    }
    else
        BST_insert(T->get_left(), val);
}

//ֵ��ע�����,�����������ò��������ֻ����data�Ĵ�С,���������ĸ߶�,���,���������ܴ�ʱ,�������������ܻ��˻�Ϊ����.


//����str[]�еĹؼ�����������������������
void Create_BST(BST_TreeNode* T, int str[], int n)
{
    T = nullptr;//��ʶʱTΪ����
    int i = 0;
    while (i < n)
    {
        BST_insert(T, str[i]);//���ν�ÿ���ؼ��ֲ��뵽������������
        ++i;
    }
}

bool delete_leafnode(BST_TreeNode* T, int val)
{
    if (T == nullptr)
        return false;
    //Ҫ˫ָ���ҵ����ĸ����,Ȼ��parentnode->childnode = nullptr
    BST_TreeNode* cur = T;
    BST_TreeNode* pre = nullptr;
    //����ѭ�������� �ҵ��� ���� cur�Ѿ�Ϊ���� Ҳ����û�ҵ�
    while (val != cur->get_My_data() && cur != nullptr)
    {
        pre = cur;
        if (val < cur->get_My_data())
            cur = cur->get_left();
        else
            cur = cur->get_right();
        //��������Ҷ�ڵ�ʱ,ѭ������,��pre�������ĸ����
    }


    //����������Ϊcur=nullptrʱ
    return false;


    //����������Ϊ�ҵ��˸ý��ʱ

    //���1: ɾ���Ľڵ���Ҷ�ӽ��,��ֱ��ɾ��
    if (cur->get_right() == cur->get_left())
    {
        if (cur->get_My_data() == val)
        {
            //���ý��Ϊ�����ʱ
            if (pre == nullptr)
                return true;

            //��ΪҶ�ӽ��ʱ
            if (cur == pre->get_left())
                pre->set_left (nullptr);
            else
                pre->set_right (nullptr);

            delete cur;
            return true;
        }
    }


    //���2: ���zֻ��һ����/������,����������Ϊz����������
    if (cur->get_left() == nullptr || cur->get_right() == nullptr)
    {
        //���ҵ�cur������
        BST_TreeNode* child = (cur->get_left()) ? cur->get_left() : cur->get_right();
        //��ΪcurΪ���ڵ�ʱ
        if (pre == nullptr)
            T = child;
        //��cur��Ϊ���ڵ�ʱ
        if (!pre->get_left())
            pre->set_left(child);
        else
            pre->set_right(child);
        delete cur;
        return true;
    }

    //���3: �����z������������ʱ,����ֱ�Ӻ��(��ǰ��)������
    if (cur->get_left() != nullptr && cur->get_right() != nullptr)
    {
        //����ֱ�Ӻ��
        BST_TreeNode* Successor = cur->get_right();
        while (!Successor && Successor->get_left())
        {
            if (!Successor->get_left())
                cur = cur->get_left();
        }


        cur->set_My_data(Successor->get_My_data());//�����ֵ������ɾ�����

        //����ֱ�Ӻ��ΪҶ�ӽ��
        //�ҵ���̵ĸ����,����child=null,ͬʱdelete���

        //�����ֻ��������ʱ(ֱ�Ӻ��ֻ����������,��Ϊ�������������)
        //�ҵ���̵ĸ����,����̵�����������

    }
    return false;
}

//Ҳ��������ֱ��ǰ��ȥ����