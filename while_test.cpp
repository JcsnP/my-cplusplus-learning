#include <iostream>
using namespace std;

int main(void){
    int n, p, sum(0);
    cin >> n;
    while(n--){
        cin >> p;
        sum += p;
    }
    cout << sum;
}