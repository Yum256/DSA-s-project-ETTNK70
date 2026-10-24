#include<stdio.h>
int phandoan(int a[], int trai, int phai, int pivot){
    int i = trai +1;
    int j = phai;
    while(i <= j){
        while(a[i] <= pivot && i <= phai){
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
    int temp = a[trai];
    a[trai] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int a[], int trai, int phai){
    if(trai < phai){
        int pivot = a[trai];
        int newpivot = phandoan(a, trai, phai, pivot);
        quicksort(a, trai, newpivot - 1);
        quicksort(a, newpivot + 1, phai);
    }
    else{
        return;
    }
}
void problem5(int a[], int n){
    quicksort(a, 0, n - 1);
    if (a[0] * a[1] > a[n-2] * a[n-1]){
        printf("( %d, %d )\n", a[0], a[1]);}
    else if (a[0] * a[1] < a[n-2] * a[n-1]){
        printf("( %d, %d )\n", a[n-2], a[n-1]);
    }
    else{
        printf("( %d, %d ) ( %d, %d )\n", a[0], a[1], a[n-2], a[n-1]);
    }
}
int main(){
    int a[] = {4, 3, -6, -8, 5, 9};
    int n = sizeof(a)/sizeof(a[0]);
    problem5(a, n);
    int b[] = {6, 6, -4, -9, 1, 4, 5};
    int m = sizeof(b)/sizeof(b[0]);
    problem5(b, m);
    return 0;
}
