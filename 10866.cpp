#include <iostream>
#include <string>
using namespace std;
struct Deque {
    int data[10000];
    int begin, end;
    Deque() {
        begin = 5000;
        end = 5001;
    }

    void push_front(int num) {
        data[begin] = num;
        begin -= 1;
    }
    void push_back(int num) {
        data[end] = num;
        end += 1;
    }
    bool empty() {
        if (begin + 1 == end) {
            return true;
        } else {
            return false;
        }
    }
    int size() {
        return end - begin - 1;
    }
    int front() {
        return data[begin+1];
    }
    int back() {
        return data[end-1];
    }
    int pop_front() {
        if (empty()) {
            return -1;
        }
        begin += 1;
        return data[begin];
    }
    int pop_back() {
        if (empty()) {
            return -1;
        }
        end -= 1;
        return data[end];
    }
};

int main() {
    int n;
    cin >> n;

    Deque q;

    while (n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push_front") {
            int num;
            cin >> num;
            q.push_front(num);
        } else if (cmd == "push_back") {
            int num;
            cin >> num;
            q.push_back(num);
        } else if (cmd == "pop_front") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
                q.pop_front();
            }
        } else if (cmd == "pop_back") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.back() << '\n';
                q.pop_back();
            }
        } else if (cmd == "size") {
            cout << q.size() << '\n';
        } else if (cmd == "empty") {
            cout << q.empty() << '\n';
        } else if (cmd == "front") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
            }
        } else if (cmd == "back") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.back() << '\n';
            }
        }
    }

    return 0;
}
