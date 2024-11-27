#include <iostream>
using namespace std;
int main() {
    int n,tmp;
    bool fl1=false,fl2=false;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> tmp;
        if (fl1==false and fl2==false){
            if (tmp>0) {fl1=true;}
            else if (tmp<0) {fl2=true;}
        }
    }
    if (fl1==true) {cout << "положительное вывелось раньше отрицательного"<< endl;}
    else if (fl2==true) {cout << "отрицательное вывелось раньше положительного"<< endl;}
    else {cout << "все числа нулевые"<< endl;}
    return 0;
}