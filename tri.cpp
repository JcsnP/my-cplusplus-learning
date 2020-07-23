#include <iostream>
using namespace std;

int main(void){
    int x, y, z;
    cin >> x >> y >> z;
    if(x * y == z) {
        cout << x << "+" << y << "=" << z;
    } else if(x / y == z){
        cout << x << "/" << y << "=" << z;
    } else if(x + y == z){
        cout << x << "+" << y << "=" << z;
    } else if(x - y == z){
        cout << x << "-" << y << "=" << z;
    } else if(z = x * y){
        cout << z << "=" << x << "*" << y;
    } else if(z = x / y){
        cout << z << "=" << x << "/" << y;
    }
}