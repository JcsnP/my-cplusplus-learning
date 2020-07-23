#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s;
    bool hiss = false;
    cin >> s;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == 's' && s[i + 1] == 's'){
            hiss == true;
            break;
        }
    }
    if(hiss){
        cout << "hiss" << endl;
    } else {
        cout << "no hiss" << endl;
    }
}