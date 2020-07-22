#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		Node(int val)
		{
			data = val;
			next = NULL;
		}

};
class LinkedList
{	
public:
	Node* head;
	LinkedList()
	{
		head = NULL;
	}
	~LinkedList() {};
	void addNode(int val);
	Node* reverse(Node* prev, Node* curr);
	void display(Node* head);
	int getMiddle(Node* head);
};

void LinkedList::addNode(int val)
{
	Node* newnode = new Node(val);
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		Node* temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void LinkedList::display(Node* head)
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp -> next;
	}
	cout << "NULL" << '\n';	
}
Node* LinkedList::reverse(Node* prev, Node* curr)
{
	if(curr == NULL)
		return prev;

	Node *actualhead = reverse(curr, curr->next);
	curr -> next = prev;

	return actualhead; 
}
int LinkedList::getMiddle(Node* head)
{
	Node* fast = head;
	Node* slow = head;

	while(fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow->data;
}
int main()
{
	//freopen("output.txt", "w", stdout);
	LinkedList* ll = new LinkedList();
	ll->addNode(10);
	ll->addNode(20);
	ll->addNode(30);
	ll->addNode(40);
	ll->addNode(50);
	ll->addNode(60);
	cout << "--------------" << '\n';
	cout << "Before Reverse" << '\n';
	cout << "--------------" << '\n';
	ll->display(ll->head);
	cout << "------------------------------------" << '\n';
	cout << "Middle element of the LinkedList is " << ll->getMiddle(ll->head) << '\n';
	cout << "------------------------------------" << '\n';
	cout << "--------------" << '\n';
	cout << "After Reverse" << '\n';
	cout << "--------------" << '\n';

	ll->head = ll->reverse(NULL, ll->head);
	ll->display(ll->head);
	cout << "------------------------------------" << '\n';
	cout << "Middle element of the LinkedList is " << ll->getMiddle(ll->head) << '\n';
	cout << "------------------------------------" << '\n';

	delete ll;

	return 0;

}
