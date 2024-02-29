#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//��ģ�尸��
template<class T>
class MyArray
{
private:
	int m_size;//����Ԫ�ظ���
	int m_capacity;//��������b 
	T* m_Array;//ָ��ָ������
public:

	MyArray(int cap)//���ù��캯���������ʼ��
	{
		m_Array = new T[cap];
		m_capacity = cap;
		m_size = 0;
	}

	//���
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

	//β�巨
	void Add_Tail(T m)
	{
		if (this->m_size != this->m_capacity)//�������ֱ��β��
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

	//βɾ��
	void Dele_Tail()
	{
		if (this->m_size == 0)//�ж������Ƿ�Ϊ��
		{
			cout << "����Ϊ��ɾ��ʧ��" << endl;
		}
		else
		{
			//this->m_Array[this->m_size - 1] = NULL;
			this->m_size--;//ʵ�����������߼�βɾ�����û����ʲ����Ϳ�����
		}
	}

	//ͨ���±���������е�Ԫ��
	T operator[](int i)
	{

		return m_Array[i];
	}

	//���Ի�ȡ�����е�ǰԪ�ظ��������������
	void get(int& num, int& capa)
	{
		num = m_size;
		capa = m_capacity;
	}

	//���߽������ʹ�С��Ϊ������������
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