#include <iostream>
using namespace std;

int main(void) {
    int data1 = 30;
    int *pointer_data = &data1;

    cout << "Before i will change value" << endl;
    cout << data1 << endl;

    cout << pointer_data << endl;
    cout << *pointer_data << endl;
    cout << &pointer_data << "\t AND \t" << &data1 << endl;

    //change value of data1 by pointer
    cout << "After i change value" << endl;
    cout << data1 << endl;
}