/*
905. Sort Array By Parity
https://leetcode.com/problems/sort-array-by-parity/
*/
class SortArrayByParity
{
    static void sortByParity(int A[])
    {
        int temp[] = new int[A.length];
        int first =0,last =A.length-1;
        for(int i=0;i<A.length;i++)
        {
            if(A[i]%2==0)
            {
                temp[first]=A[i];
                first++;
            }
            else
            {
                temp[last]=A[i];
                last--;
            }         
        }
        for(int i:temp)
        {
            System.out.println(i);
        }       
    }
    public static void main(String args[])
    {
        int A[]={3,1,2,4};
        sortByParity(A);
    }
}
/*
PS C:\Users\Anonymous\code-prep> java SortArrayByParity
2
4
1
3
*/