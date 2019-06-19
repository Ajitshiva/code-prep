class NRepeatedNum
{
    static void findnum(int A[])
    {
        int N = A.length/2;
        int key = 0;
        
        for(int i=0;i<A.length;i++)
        {
            int count=1;
            for(int j=i+1;j<A.length;j++)
            {
                if(A[i]==A[j])
                {
                        count++;
                        
                }
            }
            if(count==N)
            {
                key = A[i];
            }
        }
        System.out.println(key);

    }
    public static void main(String args[])
    {
        int A[]={5,1,5,2,5,3,5,4};
        findnum(A);
    }
}