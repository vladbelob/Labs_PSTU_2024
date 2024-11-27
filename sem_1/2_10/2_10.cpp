#include <iostream>
using namespace std;
int main() {
    int n, mx, tmp;
    cin >> n >> mx;
    for (int i=1;i<n;i++) {
        cin >> tmp;
        if (tmp>mx) {
            mx=tmp;
        }
    }
    cout << mx << endl;
    return 0;
}