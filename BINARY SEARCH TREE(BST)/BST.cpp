//write a program to perform all the opertion.

using namespace std;
#include<iostream>

class NODE
{
private:
    /* data */
    NODE *left;
    int info;
    NODE *right;

public:
    NODE* insert(NODE*,int);
    void inorder(NODE*);
    void preorder(NODE*);
    void postorder(NODE*);
    int count(NODE*);
    int count_leaf(NODE*);
};

NODE* NODE::insert(NODE* temp,int x)
{
    if(temp==NULL)
    {
        temp=new NODE;
        temp->info=x;
        temp->left=temp->right=NULL;
        cout<<"/nElement Inserted";
    }
    else if(x<temp->info)
    temp->right=insert(temp->right,x);
    else
    cout<<"/nDuplicate node can not insert";
    return temp;
}

 void NODE :: inorder(NODE *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->info<<" ";
        inorder(temp->right);
    }
}

void NODE :: preorder(NODE *temp)
{
    if (temp!=NULL)
    {
        /* code */
        cout<<temp->info<<" ";
        preorder(temp->left);
        preorder(temp->right);
    }
    
}

void NODE :: postorder(NODE *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->info<<" ";
    }
}

int NODE :: count(NODE *temp)
{
    if (temp==NULL)
    {
        /* code */
        return 0;
    }
    else if(temp->left==NULL && temp->right==NULL)
    return 1;
    else
    return 1 + count(temp->left) + count(temp->right);
    
}

int NODE :: count_leaf(NODE *temp)
{
    if (temp==NULL)
    {
        /* code */
        return 0;
    }
    else if(temp->left==NULL && temp->right==NULL)
    return 1;
    else
    return count_leaf(temp->left) + count_leaf(temp->right);
    
}

int main()
{
    int ch,x;
    NODE *root=NULL;
    do
    {
        /* code */
        cout<<"/n/n 1 for insert an element";
        cout<<"/n/n 2 for inorder Transverse";
        cout<<"/n/n 3 for pre-order Transverse";
        cout<<"/n/n 4 for post-order Transverse";
        cout<<"/n/n 5 for count total no of nodes";
        cout<<"/n/n 6 for count total no of leaf nodes";
        cout<<"/n/n 7 for count total no of non leaf nodes";
        cout<<"/n/n 8 for Exist";
        cout<<"/n/nEnter your choice";
        cin>>ch;

        switch (ch)
        {
        case 1: cout<<"/nEnter any element to be insert :";
                cin>>x;
                root=root->insert(root,x);
                break;

        case 2: if(root==NULL)
                cout<<"/n Binary Search tree is Empty";
                else
                {
                    cout<<"/nInorder Traversal :";
                    root->inorder(root);
                } 
                break;

        case 3: if(root==NULL)
                cout<<"/nBinary Search Tree is Empty";
                else
                {
                    cout<<"/n preoreder Traversal:";
                    root->preorder(root);
                }
                break;

        case 4: if(root==NULL)
                cout<<"/n Binary search is Empty";
                else
                {
                    cout<<"/n Post order Traversal:";
                    root->postorder(root);
                } 
                break;

        case 5: x=root->count(root);
                cout<<"/n Total no nodes is"<<x;
                break;

        case 6: x=root->count_leaf(root);
                cout<<"/nTotal no of leaf nodes is "<<x;
                break;

        case 7: x=root->count(root) - root->count_leaf(root);
                cout<<"/nTotal no of non_leaf nodes is"<<x;   

        case 8: break;

        default: cout<<"/Invalid choice";                                  
        }//switch
    } while (ch!=8);
    
}//main();
