import java.util.ArrayList;
import java.util.Scanner;
class Shooting
{
    public static void main(String args[])
    {
        Stack st = new Stack(5);
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr= new ArrayList<Integer>();
        int shoot[] = new int[n];
        for(int i=0;i<n;i++)
        {
            int num=sc.nextInt();
            arr.add(num);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr.get(j)>arr.get(j+1))
                {
                    int temp = arr.get(j);
                    arr.set(j,arr.get(j+1));
                    arr.set(j+1,temp);
                }
            }
        }
        st.push(arr.get(0));
        for(int i=1;i<n;i++)
        {
            int num = arr.get(i);
            System.out.println(num);
            System.out.println("peek"+st.peek());
            if(st.peek()<num && shoot[i]==0)
            {
                st.pop(4);
            }
            shoot[i]=1;
            st.push(num);
        }
        while(st.pop()<0)
        {
            System.out.println(st.pop());
        }

         
        
    }
}
class Stack
{
    int top;
    int arr[] = new int[1000];
    Stack(int n)
    {
        top =-1;
    }
    void push(int num)
    {
        arr[++top] = num;
    }
    int pop()
    {
        if(top<0)
        {
            return -1;
        }
        return arr[top--];
    }
    void pop(int data)
    {
        int i=top;
        while(arr[i]!=data)
        {
            i--;
        }
        for(int j=i;j<top-2;j++)
        {
            arr[j]=arr[j+1];
        }
        top--;

    }
    int peek()
    {
        return arr[top];
    }
    int peek(int index)
    {
        return arr[index];
    }
}