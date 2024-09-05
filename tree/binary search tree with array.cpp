// binary seach tree with array

#include <iostream>
using namespace std;

class BST
{
private:
    int *arr;
    int size;

public:

    BST(int size)
    {
        this->size = size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }

    void insertNode(int val)
    {
        if (arr[0] == 0)
        {
            arr[0] = val;
        }
        else
        {
            for (int i = 0; i < size;)
            {
                if (val < arr[i] && arr[2 * i + 1] == 0)
                {
                    arr[2 * i + 1] = val;
                    break;
                }
                else if (val < arr[i] && arr[2 * i + 1] != 0)
                {
                    i = 2 * i + 1;
                }
                else if (val > arr[i] && arr[2 * i + 2] == 0)
                {
                    arr[2 * i + 2] = val;
                    break;
                }
                else if (val > arr[i] && arr[2 * i + 2] != 0)
                {
                    i = 2 * i + 2;
                }
            }
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] != 0)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << "- ";
            }
        }
    }
};

int main()
{
    BST bst(10);
    bst.insertNode(5);
    bst.insertNode(3);
    bst.insertNode(7);
    bst.insertNode(2);
    bst.insertNode(4);
    bst.insertNode(6);
    bst.insertNode(8);
    bst.display();
    return 0;
}