#include <iostream>
using namespace std;

int main(void){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x % 2 == 0){
            cout << x << " is even" << endl;
        } else {
            cout << x << " is odd" << endl;
        }
    }
}