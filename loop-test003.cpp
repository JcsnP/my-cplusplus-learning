#include <iostream>
using namespace std;

int main(void){
    int pass = 333;
    int pass_input;
    int log(0);

    do{
        cin >> pass_input;
        log++;
    }while(pass_input != pass);

    cout << "password is correct" << endl << "you trying to loging " << log << " times" << endl;
}