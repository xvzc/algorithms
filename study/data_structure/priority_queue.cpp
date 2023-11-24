#include <bits/stdc++.h>

using namespace std;

template <class T, class CONT = std::vector<T>,
          class CMP = less<typename CONT::value_type>>
class heap_queue {
 private:
  CONT container;
  int num;
  CMP compare;

 public:
  heap_queue() {
    num = 0;
    container.push_back(0);
  }

  bool empty() {
    if (num)
      return false;
    else
      return true;
  }

  int size() { return num; }

  T top() { return container[1]; }

  void push(T input) {
    num++;
    container.push_back(input);
    int now = num; // starting from the very right leaf node
    while (now > 1) {
      if (compare(container[now / 2], input)) { // if the parent is smaller
        container[now] = container[now / 2]; // replace current node 
        // this will leave the parent node free to be filled with another value
        now /= 2; // point to the parent node
      } else {
        break;
      }
    }
    container[now] = input;
  }

  void pop() {
    if (!num) return;
    int pivot = container[num];
    container.pop_back();
    num--;

    // Start from the root node
    int now = 2; // initiated with the index of first left node
    while (now <= num) {
      if (now + 1 <= num) { // if the index of right node is not out of the range
        if (compare(container[now], container[now + 1])) {
          now++; // increase "now" if the value of right node(2*now + 1) is bigger
        }
      }
      if (compare(pivot, container[now])) {
        container[now / 2] = container[now];
        now *= 2;
      } else {
        break;
      }
    }
    container[now / 2] = pivot; // fill the empty space with the input value
  }
};

int main() { 
  heap_queue<int> pq; 
  pq.push(3);
  pq.push(1);
  pq.push(2);
  pq.push(7);
  pq.push(3);
  pq.push(4);
  pq.push(0);
  pq.push(-1);

  cout << pq.top() << endl;
}
