#include<iostream>
using namespace std;

class treenode
{
    public:
    int value;//value of node
    int* left;
    int *right;
    treenode()
    {   
        value=0;
        left=NULL;
        right=NULL;
    }
    treenode(int v)
    { 
        value=v;
        left=NULL;
        right=NULL;
    }
};
class BST
{
    public:
    treenode* root;
    bool isempty()
    {
        if(root==NULL)
        {
            return true;
        }
        else
            return false;
    }
    void insertnode(treenode* newnode)
    {
        int temp;
        if (root == NULL)
        {    
            root = newnode;
            cout << "value insert at root";
        }
        else
        {
            temp = root;
        }
    }
};
int main()
{   
    BST obj;
    int option;
    do
    {
        cout<<"Which opration you want to perform.Enter 0 to exit"<<endl;
        cout<<"1.Insert Node"<<endl;
        cout<<"2.Delete Node"<<endl;
        cout<<"3.Search Node"<<endl;
        cout<<"4.Print BST values"<<endl;
        cout<<"5.CLR Screen"<<endl;
        cin>>option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            //INsert node
            break;
        case 2:
            //Delete node
            break;
        case 3:
            //Search node
            break;
        case 4:
            //print
            break;
        case 5:
            system("clear");
            break;
        default:
            cout<<"Enter valid Number"<<endl;
            break;
        }
    } while (option!=0);
    
}