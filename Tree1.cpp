#include<bits/stdc++.h>
using namespace std;

class node{
 
 public:
    int data;
    node *left;
    node *right;
 
     node(int val)
     {
         left = NULL;
         right = NULL;
         data = val;
     }
};

 void preOrderTraversal(node *root)
 {
    if(root != NULL)
    {
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }

 }
 void postOrderTraversal(node *root)
 {
    if(root != NULL)
    {
        
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }

 } 
 void inOrderTraversal(node *root)
 {
    if(root != NULL)
    {
        
        inOrderTraversal(root->left);
         cout << root->data << " ";
        inOrderTraversal(root->right);
       
    }

 }





int main()
{
    node *p = new node(4);
    node *p1 = new node(3);
    node *p2 = new node(6);
    node *p3 = new node(5);
    node *p4 = new node(2);
    /*     
              4
             / \
            3   6
           / \
          5   2 

    */

    p->left = p1;
    p->right= p2;
    p1->left = p3;
    p1->right = p4;

    inOrderTraversal(p);
    return 0;
}
