#include <iostream>
using namespace std;

int main(void){
    int n, max(0), count(0);
    for(int i = 0; i < 5; i++){
        int sum(0);
        for(int j = 0; j < 4; j++){
            cin >> n;
            sum += n;
        }
        if(sum > max){
            max = sum;
            count = i + 1;
        }
    }
    cout << count << " " << max << endl;
}