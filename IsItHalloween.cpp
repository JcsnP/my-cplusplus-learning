#include <iostream>
#include <string>
using namespace std;

int main(void){
    string month;
    int day;

    cin >> month >> day;
    bool choice1 = (month == "OCT" && day == 31);
    bool choice2 = (month == "DEC" && day == 25);
    if(choice1 || choice2){
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }
}