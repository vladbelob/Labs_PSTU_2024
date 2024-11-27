#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    int sm;
    cin >> n;
    sm=0;
    for (int i=0;i<n.length();i++) {    
        sm+=(int)n[i]-48;
    }
    cout << sm << endl;
    return 0;
}