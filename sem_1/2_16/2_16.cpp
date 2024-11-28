#include <iostream>
using namespace std;
int main() {
    int n,sm;
    cin >> n;
    sm=0;
    for (int i=1;i<=n;i++) {
        if (i%2==0) {sm+=i;}
        else {sm-=i;}
    }
    cout << sm<< endl;
    return 0;
}