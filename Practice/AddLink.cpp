#include<bits/stdc++.h>
using namespace std;
struct l {
      int data;
      l *next;
      l();
      l(int x) : data(x), next(NULL) {}
  };
void push(l **head,int data)
{
    l *ptr = new l(data);
    ptr->data = data;
    ptr->next = (*head);
    (*head) = ptr;
}
void printList(l *head)
{
    l *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
l* add(l *one,l *two)
{
    int carry=0,sum;
    
    l *three = NULL;
    while(one !=NULL || two!=NULL)
    {
        sum = carry +(one?one->data:0)+(two? two->data:0);
        carry = (sum >=10)?1:0;
        sum = sum%10;
        push(&three,sum);
    }
    return three;
}
int main()
{
    l *one = NULL;
    l *two = NULL;
    l *three= NULL;
    push(&one,3);
    push(&one,4);
    push(&one,2);
    push(&two,4);
    push(&two,6);
    push(&two,5);
    printList(one);
    cout<<endl;
    printList(two);
    three = add(one,two);
    printList(three);
}