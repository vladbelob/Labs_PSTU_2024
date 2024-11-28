#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    int s;
    bool vh;
    cin >> n >> s;
    for (int i=0;i<n.length();i++) {    
        if ((int)n[i]-48 == s) {
            vh=true;
        }
    }
    if (vh==true){cout << "число s входит в состав числа n"<< endl;}
    else {cout << "число s не входит в состав числа n"<< endl;}
    return 0;
}