#include <iostream>
using namespace std;

int main(void){
    int n, tcout(0);
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        if(t < 0){
            tcout++;
        }
    }
    cout << tcout;
}