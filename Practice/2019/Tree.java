import java.util.Vector;

class Node
    {
        
        int key;
        Node left,right;
        public Node(int data)
        {
            key= data;
            left = right =null;
        }
    }
public class Tree
{
    Node root = null;
     
        Vector<Integer> a = new Vector<Integer>();
        void inorder(Node root)
        {
            if(root!=null)
            {
                inorder(root.left);
                a.add(root.key);
                inorder(root.right);
            }
        }
        void check(Node root,int k)
        {
            int start = 0;
            int last = a.size()-1;
            boolean flag = false;
            for(int i=0;i<a.size();i++)
            {
                int left = a.get(start);
                int right = a.get(last);
                if(left+right == k) flag = true;
                else
                {
                    if(left+right < k) start++;
                    else last--;
                }
            }
            if(flag == true) System.out.println("found");
            else System.out.println("not found");
        }

    
    public static void main(String[] args)
    {
        Tree tree = new Tree();
        tree.root = new Node(5); 
        tree.root.left = new Node(1); 
        tree.root.right = new Node(6); 
        tree.root.left.left = new Node(9); 
        tree.root.left.right = new Node(4);
        tree.root.right.right = new Node(7); 
        tree.inorder(tree.root);
        tree.check(tree.root,9);
        

    }

}