import java.io.*;
import java.util.*;


public class LinkedList
{
	class Node
	{
		int data;
		Node next;
		Node(int d)
		{
			this.data =d;
			this.next = null;
		}
	}
	public Node head = null;
	public Node tail = null;
	public int size = 0;
	void insert(int data)
	{
		Node temp = new Node(data);
		if(head == null)
		{
			head = temp;
			tail = head;
		}
		else
		{
			tail.next = temp;
			tail = temp;
		}
		size++;
	}
	void insertAtPos(int data, int pos)
	{
		if(pos >= size) 
		{
			System.out.println("Out of Range");
			return;
		}
		else
		{
			Node element = new Node(data);
			if(pos==0)
			{
				element.next = head;
				head  = element;
			}
			if(pos==size-1)
			{
				tail.next = element;
				tail = element;
			}
			else
			{
				Node temp = head;
				while(--pos > 0)
				{
					temp = temp.next;
				}
				element.next = temp.next;
				temp.next = element;

			}

		}
	}
	void insertAtMid(int data)
	{
		Node element = new Node(data);

		Node slow = head;
		Node fast = head;
		if(slow!=null)
		{
			while(fast.next != null && fast.next.next != null)
			{
				fast = fast.next.next;
				slow = slow.next;
			}
			element.next = slow.next;
			slow.next = element;
		}
	}
	void deleteAtpos(int pos)
	{
		if(pos >= size) 
		{
			System.out.println("Out of Range");
			return;
		}
		else
		{
			Node temp = head;
			if(pos==0)
			{
				head = head.next;
			}
			else if(pos==size-1)
			{
				while(temp.next != tail)
				{
					temp = temp.next;
				}
				temp.next = temp.next.next;
				tail = temp;
			}
			else
			{
				while(--pos>0)
				{
					temp = temp.next;
				}
				temp.next = temp.next.next;
			}
		}
	}
	void print()
	{
		Node current = head;
		while(current!=null)
		{
			System.out.print(current.data+" -> ");
			current = current.next;
		}
		System.out.println();
	}
	public static void main (String[] args)
	{
		
		LinkedList ll = new LinkedList();
		ll.insert(9);
		ll.insert(10);
		ll.insert(12);
		ll.insert(13);
		ll.insert(15);
		ll.insert(16);
		ll.insert(17);
		ll.print();
		ll.insertAtPos(11,6);
		ll.print();
		ll.insertAtMid(999);
		ll.deleteAtpos(1);
		ll.print();
	}
}