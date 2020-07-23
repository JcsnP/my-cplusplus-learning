#include <iostream>
using namespace std;

int main(void){
    int a = 50;
    int *address = &a;
    cout << "Value of Address is: " << *address << endl;

    *address = 88;
    cout << "Now i change value in pointer (Address) " << *address << endl;
    cout << "Now i change value in pointer (Varible) " << a << endl;
}