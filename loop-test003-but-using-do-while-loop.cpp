#include <iostream>
using namespace std;

int main(void){
    int pass = 333;
    int pass_input;
    int log(0);///

    cin >> pass_input;
    while(pass_input != pass){
        cin >> pass_input;
        log++;
    }

    cout << "password is correct" << endl << "you trying to loging " << log << " times" << endl;
}