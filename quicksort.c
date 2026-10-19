#include<stdio.h>
int phandoan(int a[], int trai, int phai, int pivot){
    int i = trai +1;
    int j = phai;
    while(i <= j){
        while(a[i] < pivot && i <= phai){
            i++;
        }
        while(a[j] > pivot && j > trai){
            j--;
        }
        if(i < j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    pivot = j; 
    int temp = a[trai];
    a[trai] = a[pivot];
    a[pivot] = temp;
    return pivot;
}
void quicksort(int a[], int trai, int phai){
    if(trai < phai){
        int pivot = a[trai];
        pivot = phandoan(a, trai, phai, pivot);
        quicksort(a, trai, pivot - 1);
        quicksort(a, pivot + 1, phai);
    }
    else{
        return;
    }
}
int main(){
    int a[13];
    for(int i = 0; i < 13; i++){
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, 12);
    for(int i = 0; i < 13; i++){
        printf("%d ", a[i]);
    }
    return 0;
}