#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct TreeNode {
    T word;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(T w) : word(w), left(nullptr), right(nullptr) {}
};

template <typename T>
class BST {
public:
    BST() : root(nullptr) {}

    void insert(const T& word) {
        root = insertRec(root, word);
    }

    void inOrderTraversal() const {
        inOrderRec(root);
    }

private:
    TreeNode<T>* root;

    TreeNode<T>* insertRec(TreeNode<T>* node, const T& word) {
        if (node == nullptr) {
            return new TreeNode<T>(word);
        }
        if (word < node->word) {
            node->left = insertRec(node->left, word);
        } else if (word > node->word) {
            node->right = insertRec(node->right, word);
        }
        return node;
    }

    void inOrderRec(TreeNode<T>* node) const {
        if (node != nullptr) {
            inOrderRec(node->left);
            cout << node->word << " ";
            inOrderRec(node->right);
        }
    }
};

int main() {
    BST<string> tree;
    tree.insert("apple");
    tree.insert("banana");
    tree.insert("cherry");
    tree.insert("date");
    tree.insert("fig");
    tree.insert("grape");

    cout << "Words in dictionary order: ";
    tree.inOrderTraversal();
    cout << endl;

    return 0;
}