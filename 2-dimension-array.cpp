#include <iostream>
using namespace std;

int main(){
    int arr[3][4] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << "m[" << i << "][" << j << "] = ";
            cout <<  arr[i][j] << endl;
        }
    }
}