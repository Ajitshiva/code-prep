/*
977. Squares of a Sorted Array
https://leetcode.com/problems/squares-of-a-sorted-array/
*/
class SortedSquares
{

    static void sort(int A[])
    {
        int temp[]=new int[A.length];
        for(int i=0;i<A.length;i++)
        {
            temp[i]=A[i]*A[i];
        }
        for(int i=0;i<temp.length;i++)
        {
            for(int j=0;j<temp.length-i-1;j++)
            {
                if(temp[j]>temp[j+1])
                {
                    int swap = temp[j];
                    temp[j] = temp[j+1];
                    temp[j+1]=swap;
                }
            }
        }
        for(int i=0;i<temp.length;i++)
        {
            System.out.println(temp[i]);
        }
    }
    public static void main(String args[])
    {
        int A[]={-4,-1,0,3,10};
        sort(A);
    }
}
/*
PS C:\Users\Anonymous\code-prep> java SortedSquares
0
1
9
16
100
*/