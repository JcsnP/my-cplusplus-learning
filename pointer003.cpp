#include <iostream>
using namespace std;

int pointer003(int &a, int &b){
    a = 1;
    b = 1;
}

int main(void){
    int a(5), b(10);
    cout << "before i send a and b to pointer003 function" << endl;
    cout << "a = " << a << "b = " << b << endl;

    cout << "after i send a and b to pointer003 function" << endl;
    pointer003(a, b);
    cout << "a = " << a << "b = " << b << endl;

    cout << "now a + b = " << a + b << endl;
}