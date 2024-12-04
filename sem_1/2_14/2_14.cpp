#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, sm=0;
    cin >> n;
    sm=0;
    while (n > 0) {
        sm += n % 10;
        n /= 10;
    }
    cout << sm << endl;
    return 0;
}
