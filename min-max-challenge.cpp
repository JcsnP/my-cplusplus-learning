#include <stdio.h>

int main(){
    int arr[6] = {};
    int min = 999999;
    int max = 0;
    int inputNum, count;

    for(int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 6; i++){
    	if(arr[i] < min){
            min = arr[i];   //find min value
        }
        if(arr[i] > max){   //find max value
            max = arr[i];
        }
    }

    printf("%d\n", min);
    printf("%d", max);
}
