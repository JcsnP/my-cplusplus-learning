#include <iostream>
using namespace std;

int main(){
    int i, j, k;
    for(i = 0; i < 5; i++){
        for(j = 0; j <= i - 1; j++){
            cout << " ";
        }
        for(k = 5; k >= j; k++){
            cout << "*";
        }
    }
}