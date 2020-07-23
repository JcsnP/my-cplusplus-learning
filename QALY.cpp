#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int n;
    cin >> n;
    double sum = 0;
    while(n--){
        double q, y;
        cin >> q >> y;
        sum += q * y;
    }
    cout << sum << endl;
}