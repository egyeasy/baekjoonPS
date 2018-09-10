#include <iostream>
using namespace std;

int gcdf(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdf(b, a%b);
    }
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[111];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        long long sum = 0;
        for (int i=1; i<n; i++) {
            for (int j=0; j<i; j++) {
                sum += gcdf(arr[i], arr[j]);
            }
        }
        cout << sum << '\n';
    }

    return 0;
}