//https://leetcode.com/problems/unique-morse-code-words/
class MorseCode
{
    static int wordToMorse(String[] words)
    {
        
        String Morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int n = words.length;
        int count=n;
        char str[]=new char[30];
        String st[] = new String[n];
        for(int i=0;i<n;i++)
        {
            str=words[i].toCharArray();
            String mor="";
            for(int j=0;j<str.length;j++)
            {
                int ascii=(int)str[j]-97;    
                mor +=Morse[ascii];
            }
            System.out.println(mor);
            st[i]=mor;
        }
        String temp;
        System.out.println(count);
        for(int i=0;i<n;i++)
        {
            temp = st[i];
            for(int j=i+1;j<n;j++)
            {
                if(temp.equals(st[j]))
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
    public static void main(String args[])
    {
        
        String str[]={"rwjje","aittjje","auyyn","lqtktn","lmjwn"};
        int ans = wordToMorse(str);
        System.out.println(ans);
    }
        
}