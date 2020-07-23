#include <iostream>
using namespace std;

void addFive(int *number){
    *number += 5;
}

int main(){
    int myNum = 9;
    int *addressOfmyNum = &myNum;
    cout << "My num (before): " << myNum << endl;
    
    //Now i send argument to addFive function with pointer
    addFive(addressOfmyNum);
    cout << "My num (after): " << myNum << endl;
}