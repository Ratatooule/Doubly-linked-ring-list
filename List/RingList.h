#pragma once

//����� ���������� ����������� ����� ����
template<typename T>
class RingList
{
	// ������ ������ ����������
public:
	RingList();
	~RingList();

	//���������� � ����� ����������
	void push_back(T data);
	//�������� ������� ��������
	void pop_front();
	//���������� � ������ ����������
	void push_front(T data);
	//������� �������� �� ���������� �������
	void insert(T data, int index);
	//�������� �������� �� �������
	void removeAt(int index);
	//����� �������� � ���������� �� ���������� �������
	auto searchElement(int index);
	//�������� ���������� ��������
	void pop_back();
	//������� ���������
	void clear();
	//��������� ������� ����������
	int GetSize() { return size; }
	//���������� ��������� [] ��� ��������� � ��������� ����������
	T& operator[](const int index);

private:

	//����� ���� ���������� ����������� ����� ����
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
			
		}

	};

	//���� �������� � ������ ����������
	int size;
	Node<T>* head;
};