#include <iostream>
using namespace std;

int pbv(int a, int b);
int pbr(int &a, int &b);

int main(void){
    int a, b;
    cin >> a >> b;
    cout << "Before pass by value " << a << " " << b << endl;
    pbv(a, b);
    cout << "After pass by value " << a << " " << b << endl;

    cout << "Before pass by reference " << a << " " << b << endl;
    pbr(a, b);
    cout << "After pass by reference " << a << " " << b << endl;


    //printf after using pass by reference function
    cout << a << " " << b;
}

int pbv(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "( This is output from pass by value function ) = " << a << " " << b << endl;
}

int pbr(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}