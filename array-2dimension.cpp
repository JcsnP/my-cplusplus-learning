#include <iostream>
using namespace std;

int main(){
	//int i, j;
    int arr[2][3] =
	{
        {2,4,6},
        {3,5,7}
    };
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << "arr[" << i << "][" << j << "] = ";
            cout << arr[i][j] << end;

        }
    }

    cout << arr[2];
}
