#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//类模板案例
template<class T>
class MyArray
{
private:
	int m_size;//数组元素个数
	int m_capacity;//数组容量b 
	T* m_Array;//指针指向数组
public:

	MyArray(int cap)//利用构造函数将数组初始化
	{
		m_Array = new T[cap];
		m_capacity = cap;
		m_size = 0;
	}

	//深拷贝
	MyArray& operator=(const MyArray& b)
	{
		this->m_capacity = b.m_capacity;
		this->m_size = b.m_size;
		if (this->m_Array != nullptr)
		{
			delete[] m_Array;
			MyArray temp(b.m_capacity);
			for (int i = 0; i < b.m_size; i++)
			{
				temp.m_Array[i] = b.m_Array[i];
			}
			return temp;
		}
		else
		{
			m_Array = new T[b.m_capacity];
			for (int i = 0; i < b.m_size; i++)
			{
				m_Array[i] = b.m_Array[i];
			}
			return *this;
		}
	}

	//尾插法
	void Add_Tail(T m)
	{
		if (this->m_size != this->m_capacity)//不相等则直接尾插
		{
			this->m_Array[this->m_size] = m;
			this->m_size++;
		}
		else if (this->m_size == this->m_capacity) 
		{
			int sz = 2 * this->m_capacity;
			T* temp = new T[sz];
			if (temp == nullptr)
			{
				perror("Add_Tail");
				return;
			}
			for (int i = 0; i < this->m_size + 1; i++)
			{
				temp[i] = this->m_Array[i];
			}
			this->m_Array = temp;
			m_capacity *= 2;
			m_size++;
		}
	}

	//尾删法
	void Dele_Tail()
	{
		if (this->m_size == 0)//判断数组是否为空
		{
			cout << "数组为空删除失败" << endl;
		}
		else
		{
			//this->m_Array[this->m_size - 1] = NULL;
			this->m_size--;//实际上做的是逻辑尾删，让用户访问不到就可以了
		}
	}

	//通过下标访问数组中的元素
	T operator[](int i)
	{

		return m_Array[i];
	}

	//可以获取数组中当前元素个数和数组的容量
	void get(int& num, int& capa)
	{
		num = m_size;
		capa = m_capacity;
	}

	//或者将容量和大小分为两个函数返回
	int get_capacity()
	{
		return this->m_capacity;
	}
	
	int get_size()
	{
		return this->m_size;
	}


	~MyArray()
	{
		delete[] m_Array;
		m_Array = nullptr;
	}
};