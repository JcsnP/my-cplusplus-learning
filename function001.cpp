#include <iostream>
using namespace std;

int cal(int a, int b);
char y(int a, int b);

int main(void){
    int a, b;
    cin >> a >> b;
    cout << "Answer is: " << cal(a, b) << endl;
    cout << "Y Function output: " << endl;
    cout << y(a, b);
}

int cal(int a, int b){
    int sum = a + b;
    return sum;
}

char y(int a, int b){
    char y = 'y';
    if(a + b >= 1) {
        return 'Y' ;
    }
}