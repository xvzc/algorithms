#include<iostream>
#include<map>

using namespace std;

class Node {
    public:
        int data;                                  // 노드가 담고 있는 실제 데이터
        Node* left;
        Node* right;
    public:
        Node(int _data = 0, Node* _left = nullptr , Node* _right = nullptr) { 
            this->data = _data;
            this->left = _left;
            this->right = _right;
        }
};

class Tree {
    private:
        Node* root;
    public:
        void insert(Node* node) {
            // 중복이 없을 때
            if (search(root, node->data) == nullptr) {
                Node* parent = nullptr;
                Node* current = root;
                // 작으면 왼쪽, 크면 오른쪽으로 이동,
                // 새 노드의 부모가 정해짐
                while (current != nullptr) {
                    parent = current;
                    if (node->data < parent->data) {
                        current = current->left;
                    }
                    else {
                        current = current->right;
                    }
                }
                if (node->data < parent->data) {
                    parent->left = node;
                }
                else {
                    parent->right = node;
                }
                cout << "Inserted " << node->data << endl;
            }
        }

        Node* search(Node* cur, int data) {
            if (cur == nullptr) 
                return nullptr;

            if (data == cur->data) {
                return cur;
            }

            else if (data < cur->data) {
                return search(cur->left, data);
            }

            return search(cur->right, data);

        }
}
