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
void problem1(int a[], int n, int target){
    quicksort(a, 0, n - 1);
    int dau = 0;
    int cuoi = n - 1;
    int counter = 0;
    while(dau<cuoi){
        if (a[dau] + a[cuoi] == target){
            printf("(%d, %d)\n", a[dau], a[cuoi]);
            counter++;
            dau++;
            cuoi--;
        }
        else if(a[dau] + a[cuoi] < target){
            dau++;
        }
        else{
            cuoi--;
        }
    }
    if (counter == 0){
        printf("Not found\n");
    }
}
int main(){
    int a[6] = {8, 7, 2, 5, 3, 1};
    int b[7] = {9, 7, 26, 4, 15, 31, 19};
    int targeta = 10;
    int targetb = 25;
    problem1(a, 6, targeta);
    problem1(b, 7, targetb);
    return 0;
}