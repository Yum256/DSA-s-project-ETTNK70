#include<stdio.h>
void mergearr(int a[], int trai, int giua, int phai){
    int i = trai;
    int j = giua + 1;
    int k = 0;
    int temp[phai - trai + 1];
    while(i <= giua && j <= phai){
        if(a[i] <= a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    for(int k = 0; k < 13; k++){
              printf("%d ", a[k]);}
        printf("\n");
}
void splitmergearr(int a[], int trai, int phai){
    if(trai < phai){
        int giua = (trai + phai) / 2;
        splitmergearr(a, trai, giua);
        splitmergearr(a, giua + 1, phai);
        mergearr(a, trai, giua, phai);
    }
    else{
        return;
    }
}

void mergesort(int a[], int n){
    splitmergearr(a, 0, n - 1);
    if(n < 2){
        return;
    }
}
int main(){
    int a[13];
    for(int i = 0; i < 13; i++){
        scanf("%d", &a[i]);
    }
    mergesort(a, 13);
    for(int i = 0; i < 13; i++){
        printf("%d ", a[i]);
    }
    return 0;
}