#include <iostream>
#include <cmath>
using namespace std;
int fact(int i){
    int fct=1;
    for (int j=1;j<=i;j++){ fct*=j;}
    return fct;
}
int main() {
    float n, x, sm=0;
    cin >> n >> x;
    for (int i=0;i<=n;i++) {
        sm+=pow(x,i)/fact(i);
    }
    cout << sm << endl;
    return 0;
}