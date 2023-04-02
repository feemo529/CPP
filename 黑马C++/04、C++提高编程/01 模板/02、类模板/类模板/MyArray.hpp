#pragma once
#include <iostream>
using namespace std;

template <class T>
class MyArray
{
public:
	//�вι��� ��������
	MyArray(int capacity) {
		//cout << "MyArrar�вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		//cout << "MyArrar�����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		this->pAddress = new T[arr.m_Capacity];

		//��arr�е����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator =(const MyArray& arr) {
		//cout << "MyArrar ��operator����" << endl;

		//���ж�ԭ�������Ƿ�������
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;

	}

	//β�巨
	void Push_Back(const T& val) {
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[m_Size] = val;
		this->m_Size++;
	}

	//βɾ��
	void Pop_Back() {
		//���û����ʲ������һ��Ԫ��,βɾ���߼�ɾ��
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--;

	}

	//ͨ���±귽ʽ��������
	T& operator[](int index) {
		return this->pAddress[index];
	}

	//�������������
	int getCapacity() {
		return this->m_Capacity;
	}

	//���������С
	int getSize() {
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "MyArrar ��������������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:

	T* pAddress; // ָ��ָ��������ٵ���ʵ����

	int m_Capacity; // ����

	int m_Size; // ��С
};