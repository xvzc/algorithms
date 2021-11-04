#include <iostream>
#include <vector>

class Node {
    public :
        int data;
        Node *next;
};

class Link {
    public :
        Node *head = nullptr;
        Node *tail = nullptr;

        void add(int data);
        void remove_next_of(Node *node);

        const int size();

    private:
        int num_of_node = 0;
};

void Link::add(int data) {
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    if (num_of_node == 0) {
        head = new_node;
        tail = head;
    } else {
        tail->next = new_node;
        tail = new_node;
    }

    ++num_of_node;
}

const int Link::size() {
    return num_of_node;
}

void Link::remove_next_of(Node *node) {
    if(node->next == nullptr)
        return;

    Node *next_node = node->next;

    if(next_node == tail) {
        tail = node;
    }

    node->next = next_node->next;

    delete next_node;
    next_node = nullptr;

    --num_of_node;

    return;
}

int main() {
    std::vector<int> v = {4, 4, 4, 2, 2, 1, 2, 2, 3, 3, 2, 5, 6, 1, 2, 3, 4};

    Link link;
    for(auto i : v) link.add(i);

    Node *cur = link.head;
    while(cur != nullptr) {
        std::cout << cur->data << ' ';
        cur = cur->next;
    }
    std::cout << std::endl;

    Node *base = link.head;

    while(base != nullptr) {
        Node *cur = base;

        while(cur != nullptr) {
            if(cur->next != nullptr && cur->next->data == base->data) {
                link.remove_next_of(cur); // remove 메서드의 결과 cur->next는 cur->next->next를 가리키게 되므로 continue. 
                continue;
            }

            cur = cur->next;
        }

        base = base->next;
    }

    cur = link.head;
    while(cur != nullptr) {
        std::cout << cur->data << ' ';
        cur = cur->next;
    }

    std::cout << std::endl;
    std::cout << "size : " << link.size() << std::endl;

    return 0;
}
