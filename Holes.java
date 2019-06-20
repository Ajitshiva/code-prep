import java.util.Scanner;
class Holes
{
    public static void main(String args[])
    {
       Scanner sc = new Scanner(System.in);
       
       int t = sc.nextInt();
       String words[] = new String[t];
       for(int j=0;j<t;j++)
       {
           Scanner st = new Scanner(System.in);
           words[j]=st.nextLine();
       }
       for(int j=0;j<t;j++)
       {
        
       char letters[]=words[j].toCharArray();
       int count=0;
       for(int i=0;i<letters.length;i++)
       {

           if(letters[i]=='A' || letters[i]=='D' || letters[i]=='O' || letters[i]=='P' || letters[i]=='R' )
           {  
               count++;
           }
           else if(letters[i]=='B')
           {
               count +=2;
           }

        }
        System.out.println(count);
        

    }
    }
}
