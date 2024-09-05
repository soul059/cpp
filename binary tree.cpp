// simple programe to understand binary tree

#include <iostream>
#include <queue> // Include the <queue> header
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

class BST
{   
private:
    Node *root;

public:
    BST()
    {
        root = NULL;
    }

    Node *createNode(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    void insertNode(int val)
    {
        Node *newNode = createNode(val);
        if (root == NULL)
        {
            root = newNode;
            return;
        }
        Node *temp = root;
        while (temp != NULL)
        {
            cout << "Current node value: " << temp->data << endl;
            int choice;
            cout << "Enter 1 to insert on the left, 2 to insert on the right: ";
            cin >> choice;
            if (choice == 1)
            {
                if (temp->left == NULL)
                {
                    temp->left = newNode;
                    return;
                }
                temp = temp->left;
            }
            else if (choice == 2)
            {
                if (temp->right == NULL)
                {
                    temp->right = newNode;
                    return;
                }
                temp = temp->right;
            }
            else
            {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    void findMaxValueAtEachLevel()
    {
        if (root == NULL)
        {
            cout << "Binary tree is empty." << endl;
            return;
        }

        queue<Node*> q; // Add the std:: namespace qualifier before 'queue' and 'Node'
        q.push(root);
        int level =1;
        while (!q.empty())
        {
            int levelSize = q.size();
            int maxVal = INT_MIN;

            for (int i = 0; i < levelSize; i++)
            {
                Node* current = q.front();
                q.pop();

                maxVal = max(maxVal, current->data);

                if (current->left != NULL)
                    q.push(current->left);
                if (current->right != NULL)
                    q.push(current->right);
            }

            cout << "Max value at level " << level << ": " << maxVal << endl;
            level++;
        }
    }
    Node* invertTree(Node* root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        
        Node* left = invertTree(root->left);
        Node* right = invertTree(root->right);
        
        root->left = right;
        root->right = left;
        
        return root;
    }

    void invertTree()
    {
        root = invertTree(root);
    }
    void display()
    {
        display(root);
    }

    void display(Node *temp)
    {
        if (temp != NULL)
        {
            display(temp->left);
            cout << temp->data << " ";
            display(temp->right);
        }
    }
};

int main()
{
    BST obj;
    obj.insertNode(5);
    obj.insertNode(3);
    obj.insertNode(7);
    obj.insertNode(2);
    obj.insertNode(4);
    obj.insertNode(6);
    obj.insertNode(8);
    obj.display();
    obj.invertTree();
    cout<<"\n"<<endl;
    obj.display();
    return 0;
}