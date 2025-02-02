#include <iostream>
#include <vector>
using namespace std;
int main() {
    int min=-10000,max=10000;
    vector<int> m;
    srand(time(NULL));
    for (int i=0; i<50; i++) {
        m.push_back(((float)rand()/RAND_MAX)*(max-min)+min);
        cout << m[i] << " ";}
    cout << endl;
    for (int i=49; i>=0; i--) {
        if (i%3==0){
            m.erase(m.begin()+i);}}
    cout << endl;
    for (int i=0; i<50; i++) {
        cout << m[i] << " ";}
    int i = 0;
    for (int i = 0; i < m.size();i++) {
        if (m[i] < 0 and i>0) {
            m.insert(m.begin()+i+1,abs(m[i-1]) + 1);
        }} 
    cout << endl;
    cout << endl;
    for (int i=0; i<50; i++) {
        cout << m[i] << " ";}
    return 0;
}
