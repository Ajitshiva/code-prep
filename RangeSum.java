//https://leetcode.com/problems/range-sum-of-bst/
class RangeSum
{
    class Node
    {
        int key;
        Node left, right;
        public Node(int item)
        {
            key = item;
            left = right = null;
        }
    }
    Node root;
    int count=0;
    RangeSum()
    {
        root=null;
        
    }
    
    void insert(int key)
    {
        root = insertRec(root,key);
    }
    Node insertRec(Node root,int key)
    {
        if(root == null)
        {
            root = new Node(key);
            return root;
        }
        if(key < root.key)
        {
            root.left = insertRec(root.left,key);
        }
        else if (key > root.key)
        {
            root.right = insertRec(root.right, key);
        }

        return root;
    }
    void inorder(int left,int right)
    {
        inorderRec(left,right,root);
        
    }
    int total=0;
    void inorderRec(int left,int right,Node root)
    {
        
        if(root != null)
        {
            inorderRec(left,right,root.left);
            if(root.key >= left && root.key <= right )
            {
                total += root.key;
                
            }
            inorderRec(left,right,root.right);
        }
        
    }
    public static void main(String args[])
    {
        RangeSum tree = new RangeSum();
        tree.insert(50);
        tree.insert(30);
        tree.insert(20);
        tree.insert(40);
        tree.insert(70);
        tree.insert(60);
        tree.insert(80);
        tree.insert(10);
        tree.inorder(30,50);
        System.out.println(tree.total);
    }
}