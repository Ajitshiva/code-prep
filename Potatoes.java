import java.util.Scanner;
class Potatoes
{
    static Boolean isPrime(int n)
    {
        Boolean flag = true;
        for(int i=2;i<=Math.sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = x+y;
            int i=1;
            while(true)
            {
                
                if(isPrime(z+i))
                    break;
                i++;
            }
            System.out.println(i);
        }   
    }  
        
    
}