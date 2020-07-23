#include <iostream>
#include <string>
using namespace std;

int main(){
    string event = " ";
    int l, x, sum(0);
    cin >> l >> x;
    while(x--){
        cin >> event >> l;
        if(event == "enter"){
            sum += l;
            if(sum < l){
                sum += l;
            }
        } else if(event == "leave"){
            sum -= l;
        }
    }
    //sum = sum - l;
    cout << sum;
}