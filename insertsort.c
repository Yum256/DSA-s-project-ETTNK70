#include<stdio.h>
int main(){
    int arr[13];
    for (int i = 0; i<13; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1;i<13;i++){
        for(int j = i -1;j>=0;j--){
            if(arr[j] > arr[j+1]){
                int k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
                i =-1;
            }
        }
    }
    for (int i = 0; i<13; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}