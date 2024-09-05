// basic understanding of binnary scherch tree

#include <iostream>
#include <queue>
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
            if (val < temp->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = newNode;
                    return;
                }
                temp = temp->left;
            }
            else
            {
                if (temp->right == NULL)
                {
                    temp->right = newNode;
                    return;
                }
                temp = temp->right;
            }
        }
    }

    void inorderTraversal(Node *temp)
    {
        if (temp == NULL)
        {
            return;
        }
        inorderTraversal(temp->left);
        cout << temp->data << " ";
        inorderTraversal(temp->right);
    }

    void preorderTraversal(Node *temp)
    {
        if (temp == NULL)
        {
            return;
        }
        cout << temp->data << " ";
        preorderTraversal(temp->left);
        preorderTraversal(temp->right);
    }

    void postorderTraversal(Node *temp)
    {
        if (temp == NULL)
        {
            return;
        }
        postorderTraversal(temp->left);
        postorderTraversal(temp->right);
        cout << temp->data << " ";
    }

    void BFS(Node *temp)
    {
        queue<Node *> q;
        q.push(temp);
        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();
            cout << current->data << " ";
            if (current->left != NULL)
                q.push(current->left);
            if (current->right != NULL)
                q.push(current->right);
        }
    }

    void display()
    {
        inorderTraversal(root);
        cout<<endl;
        preorderTraversal(root);
        cout<<endl;
        postorderTraversal(root);
        cout<<endl;
        BFS(root);
    }
};

int main()
{
    BST obj;
    obj.insertNode(50);
    obj.insertNode(30);
    obj.insertNode(20);
    obj.insertNode(40);
    obj.insertNode(70);
    obj.insertNode(60);
    obj.insertNode(80);
    obj.display();
    return 0;
}
