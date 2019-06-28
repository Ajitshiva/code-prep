import java.util.Scanner;
class Johny
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
            }
            int pos = sc.nextInt();
            int key = arr[pos];

            for(int i=0;i<n-1;i++)
            {
                for(int j=0;j<n-i-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                if(arr[i]==key)
                {
                    System.out.println(i);
                }
            }
        }
    }
}
/*
1
4
1 3 4 2
2
3
*/