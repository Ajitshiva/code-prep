//https://leetcode.com/problems/flipping-an-image/;
//832. Flipping an Image

class FlipImage
{
    public static int[][] flipAndInvertImage(int[][] A) {
        int temp[][]=new int[A.length][];

        for(int i=0;i<A.length;i++)
        {
            temp[i]=new int[A[i].length];
            for(int j=A[i].length-1,k=0;j>=0 && k<A[i].length;j--,k++)
            {
                if(A[i][j]==0)
                    temp[i][k]=1;
                else
                    temp[i][k]=0;
            }

        }
        return temp;
    }
    public static void main(String args[])
    {
        int A[][] = {{1,1,0},{1,0,1},{0,0,0}};
        int res[][] = flipAndInvertImage(A);
        for(int i=0;i<A.length;i++)
        {
            for(int j=0;j<A[i].length;j++)
            {
                System.out.print(res[i][j]);
            }
            System.out.println();
        }
    }
}
//PS C:\Users\Anonymous\code-prep> java FlipImage
//100
//010
//111

