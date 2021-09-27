#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *left, *right;

    Node(int val)
{
        data = val;
       
        left = NULL;
        right = NULL;

    }
};
int height(struct Node* root){
    //If the tree is empty height is 0
    if(root==NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right)
int diameter(struct Node* root){
    
    //base case if tree is NULL diameter is 0
    if(root==NULL)
        return 0;

    //calculate the height of the left subtree
    int leftHeight = height(root->left);

    //calculate the height of the right subtree
    int rightHeight = height(root->right);

    //calcualte the diameter of the left subtree
    int leftDiameter = diameter(root->left);

    //calculate the diameter of the right subtree
    int rightDiameter = diameter(root->right);

    //Diameter of the tree
    return max(leftHeight + rightHeight + 1 , max(leftDiameter, rightDiameter));
}

int main()
{

   struct Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->right->left = new Node(4);
   root->right->right = new Node(5);

   cout<<"Diameter of the binary tree is : "<<diameter(root)<<endl;;

   return 0;
}
