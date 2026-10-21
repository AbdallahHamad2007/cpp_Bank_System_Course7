#include<iostream>
using namespace std;

class Node
{
	public:
		int value;
		Node* next = NULL;
		Node(int v) {
			this->value = v;
	}
};
void InsertAtBeginning(Node* &head,int v)
{
	Node* NewNode = new Node(v);
	NewNode->next= head;
	head = NewNode;
}
void InsertAfter(Node* node,int After)
{
	if (node == NULL) {
		cout << "NULL Node." << endl;
		return;
	}
	Node* NewNode = new Node(After);
	NewNode->next = node->next;
	node->next = NewNode;
}
void PrintList(Node* head)
{
	while (head!= NULL)
	{
		cout << head->value << ' ' ;
		head = head->next;
	}
}
Node* Find(Node* head, int v)
{
	while (head != NULL)
	{
		if (head->value == v)return head;
		head = head->next;
	}
	return NULL;
}
int main()
{
	Node* head = NULL;
	InsertAtBeginning(head,1);
	InsertAtBeginning(head, 2);
	InsertAtBeginning(head,3);
	InsertAtBeginning(head,4);
	Node* n = Find(head,4);


	InsertAfter(NULL, 400);
	PrintList(head);
	
	return 0;
}