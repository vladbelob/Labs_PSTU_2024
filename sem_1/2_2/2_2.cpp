#include <iostream>
using namespace std;
int main(){
    int n; int prz = 1;
    cin >> n;
    if (n <= 0) {
        cout << "Невозможно посчитать произведение натуральных чисел при n<= 0" << endl;
    }
    else{
        for (int i = 1; i <= n; i++) {
            prz *= i;
        }
        cout << prz << endl;
    }
    return 0;
}