#include <iostream>
using namespace std;

int main(void){
    int arr[5] = {1,2,3,4,5};
    int *pointer;
    pointer = arr;

    cout << "ARR Address start: " << pointer << " and value is: " << *pointer << endl;

    //update address and value
    pointer += 2;
    *pointer = 33;
    cout << "ARR after i update (+2): " << pointer << " and value is: " << *pointer << endl;

    //update address and value
    pointer += 2;
    *pointer = 55;
    cout << "ARR after index to 1: " << pointer << " and value is: " << *pointer << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    //BOOKMARK (TEST)
    //i will set pointer = arr again
    pointer = arr;
    cout << "(Now i set pointer = arr again and address is): " << pointer << " and value is: " << *pointer << endl;
}