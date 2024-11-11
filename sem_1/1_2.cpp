#include <iostream>
using namespace std;
int main() {
    float a,b;
    cin >> a >> b;
    if (b!=0) {
        a/=b;
        cout << a << endl;
    }
    else {
        cout << "Нельзя делить на 0" << endl;
    }
    return 0;
}