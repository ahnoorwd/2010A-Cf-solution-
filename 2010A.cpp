#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[n];
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (i % 2 == 0) {
                sum += a[i];
            } else {
                sum -= a[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}

