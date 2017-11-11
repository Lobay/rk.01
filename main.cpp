#include<iostream>
using namespace std;
int main(){
    int a, i;
    cin >> a;
    if (a <= 0)
        return 0;
    int k[a];
    for (i = 0; i < a; i++) {
        cin >> k[i];
    }
    for (i = 0; i < a / 2; i++) {
        swap(k[i], k[a - i - 1]);
    }
    for (i = 0; i < a; i++) {
        cout << k[i] << " ";
    }
    return 0;
}
