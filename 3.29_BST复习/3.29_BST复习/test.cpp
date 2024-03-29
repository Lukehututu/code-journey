#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//定义节点
class BST_TreeNode {
private:
    int My_data;//数据
    BST_TreeNode* left;//左孩子指针
    BST_TreeNode* right;//右孩子指针
public:
    BST_TreeNode(int data)
    {
        this->My_data = data;
        left = nullptr;
        right = nullptr;
    }
    //设置左孩子
    void set_left(BST_TreeNode* ptr)
    {
        left = ptr;
    }
    //设置右孩子
    void set_right(BST_TreeNode* ptr)
    {
        right = ptr;
    }
    //修改数据
    void set_My_data(int val)
    {
        My_data = val;
    }
    //获取数据
    int get_My_data()
    {
        return this->My_data;
    }
    //获取左孩子
    BST_TreeNode* get_left()
    {
        return left;
    }
    //获取右孩子
    BST_TreeNode* get_right()
    {
        return right;
    }
};


//二叉树查找--迭代实现
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


//二叉树查找--递归实现
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

//二叉排序树的插入
bool BST_insert(BST_TreeNode* T, int val)
{
    //先检查是不是空树
    if (T == nullptr)
        T = new BST_TreeNode(val);
    //如果不是空树,就一直作比较直到找到叶子节点
    else if (T->get_My_data() == val)
        return false;
    //要插入得节点比根节点大则往右走
    else if (T->get_My_data() < val)
    {
        BST_insert(T->get_right(), val);
    }
    else
        BST_insert(T->get_left(), val);
}

//值得注意的是,二叉排序树得插入规则是只考虑data的大小,不考虑树的高度,因此,当数据量很大时,二叉排序树可能会退化为链表.


//按照str[]中的关键字序列来建立二叉排序树
void Create_BST(BST_TreeNode* T, int str[], int n)
{
    T = nullptr;//初识时T为空树
    int i = 0;
    while (i < n)
    {
        BST_insert(T, str[i]);//依次将每个关键字插入到二叉排序树中
        ++i;
    }
}

bool delete_leafnode(BST_TreeNode* T, int val)
{
    if (T == nullptr)
        return false;
    //要双指针找到他的父结点,然后parentnode->childnode = nullptr
    BST_TreeNode* cur = T;
    BST_TreeNode* pre = nullptr;
    //跳出循环可能是 找到了 或者 cur已经为空了 也就是没找到
    while (val != cur->get_My_data() && cur != nullptr)
    {
        pre = cur;
        if (val < cur->get_My_data())
            cur = cur->get_left();
        else
            cur = cur->get_right();
        //当跳到该叶节点时,循环结束,那pre就是他的父结点
    }


    //当跳出是因为cur=nullptr时
    return false;


    //当跳出是因为找到了该结点时

    //情况1: 删除的节点是叶子结点,则直接删除
    if (cur->get_right() == cur->get_left())
    {
        if (cur->get_My_data() == val)
        {
            //当该结点为根结点时
            if (pre == nullptr)
                return true;

            //当为叶子结点时
            if (cur == pre->get_left())
                pre->set_left (nullptr);
            else
                pre->set_right (nullptr);

            delete cur;
            return true;
        }
    }


    //情况2: 结点z只有一颗左/右子树,让其子树成为z父结点的子树
    if (cur->get_left() == nullptr || cur->get_right() == nullptr)
    {
        //先找到cur的子树
        BST_TreeNode* child = (cur->get_left()) ? cur->get_left() : cur->get_right();
        //当为cur为根节点时
        if (pre == nullptr)
            T = child;
        //当cur不为根节点时
        if (!pre->get_left())
            pre->set_left(child);
        else
            pre->set_right(child);
        delete cur;
        return true;
    }

    //情况3: 当结点z左右子树都有时,让其直接后继(或前驱)代替它
    if (cur->get_left() != nullptr && cur->get_right() != nullptr)
    {
        //找其直接后继
        BST_TreeNode* Successor = cur->get_right();
        while (!Successor && Successor->get_left())
        {
            if (!Successor->get_left())
                cur = cur->get_left();
        }


        cur->set_My_data(Successor->get_My_data());//将后继值赋给待删除结点

        //当其直接后继为叶子结点
        //找到后继的父结点,将其child=null,同时delete后继

        //当后继只有右子树时(直接后继只能有右子树,因为中序遍历是升序)
        //找到后继的父结点,将后继的子树代替后继

    }
    return false;
}

//也可以找其直接前驱去代替