#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
 int a, i;
 cin >> a;
 if (a <= 0){
 cout << "An error has occurred while reading input data" << endl;
 return 0; 
 }
 int *k = new int[a];
 for (i = 0; i < a; i++) {
 cin >> k[i];
 }
 for (i = 0; i < a / 2; i++) {
 swap(k[i], k[a - i - 1]);
 }
 for (i = 0; i < a; i++) {
 cout << k[i] << " ";
 }
 delete [] k;
 return 0;
}
