#include <stdio.h>
int main(){
    int arr[13];
    for (int i = 0; i < 13; i++){
        scanf("%d", &arr[i]);
    }
    int index,min,k;
    for (int i = 0; i < 13; i++){
        min = arr[i];
        index = i;
        for (int j = i + 1; j < 13; j++){
            if (arr[j] < min){
                min = arr[j]; //tim min
                index = j;    //luu index cua min
            }
        }
        k = arr[i];
        arr[i] = arr[index];
        arr[index] = k;
    }
    for (int i = 0; i < 13; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}