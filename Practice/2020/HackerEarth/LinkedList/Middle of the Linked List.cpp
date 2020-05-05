#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};
node* head;

void print(node* h)
{
	node* temp = h;
	while(temp)
	{
		cout << temp->data <<" -> ";
		temp = temp -> next;
	}
	cout << '\n';
}
int getMiddle(node* head)
{
	node* fast = head;
	node* slow = head;
	while(fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow->data;
}
int main()
{
	freopen("output.txt", "w", stdout);
	head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);
	head->next->next->next = new node(40);
	head->next->next->next->next = new node(50);
	//head->next->next->next->next->next = new node(60);
	print(head);
	cout << "Middle element of the linked list is " << getMiddle(head) << '\n';
}