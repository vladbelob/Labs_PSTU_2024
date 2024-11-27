#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c;
    cin >> a >> b >> c;
    if (a!=0){
        if (b*b-4*a*c>0) {
        cout << (-b-sqrt(b*b-4*a*c))/2*a << endl;
        cout << (-b+sqrt(b*b-4*a*c))/2*a << endl;
        }
        else if (b*b-4*a*c==0) {cout <<-b/2*a<< endl;}
        else {cout << "корней нет"<< endl;}
    }
    else if (b!=0) {cout << -c/b<< endl;}
    else {cout << "все числа являются корнями уравнения" << endl;}
    return 0;
}