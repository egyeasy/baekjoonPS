#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;

    queue<int> q;
    queue<int> s;

    for (int i=0; i<n; i++) {
        q.push(i+1);
    }

    int ii = 1;
    int mm = m;
    cout << '<';
    while (s.size() != n) {
        if (ii != mm) {
            q.push(q.front());
            q.pop();
        } else {
            if (s.size() == n-1) {
                s.push(q.front());
                q.pop();
                cout << s.back();
                mm += m;
            } else {
                s.push(q.front());
                q.pop();
                cout << s.back();
                mm += m;
                cout << ',' << ' ';
            }
        }
        ii += 1;
    }
    cout << '>';

    return 0;
}