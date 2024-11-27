#include <iostream>
using namespace std;
int main() {
    int n, mx, mn, tmp;
    cin >> n >> mx;
    mn=mx;
    for (int i=1;i<n;i++) {
        cin >> tmp;
        if (tmp>mx) {
            mx=tmp;
        }
        if (tmp<mn) {
            mn=tmp;
        }
    }
    cout << mx+mn << endl;
    return 0;
}