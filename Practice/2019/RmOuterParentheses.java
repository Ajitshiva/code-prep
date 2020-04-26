//https://leetcode.com/problems/remove-outermost-parentheses/
class RmOuterParentheses
{
    static void removeParentheses(String S)
    {
        char str[] = S.toCharArray();
        String res="";
        int depth=0;
        for(int i=0;i<str.length;i++)
        {
            if(str[i]=='(')
            {
                depth++;
                if(depth>1)
                {
                    res +=str[i];
                }

            }
            else
            {
                depth--;
                if(depth==0)
                {

                }
                else
                {
                    res +=str[i];
                }
            }

        }        
        
        System.out.println(res);

    }
    public static void main(String args[])
    {
        removeParentheses("(()())(())(()(()))");
    }
}