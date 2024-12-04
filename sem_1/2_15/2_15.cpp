#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, s, k;
    bool fl = false;
    cin >> n >> s;
    while (n > 0 && !fl) {
        k = n % 10;
        if (k == s) {
            fl = true;
            cout << "Цифра входит в состав числа n" << endl;
        }
        else { n /= 10; }
    }
    if (!fl) { cout << "Цифра не входит в состав числа n" << endl; }
    return 0;
}
