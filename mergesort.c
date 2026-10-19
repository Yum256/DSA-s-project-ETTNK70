#include<stdio.h>
void mergearr(int a[], int trai, int giua, int phai){
    int n1 = giua - trai + 1;
    int n2 = phai - giua;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++){
        L[i] = a[trai + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = a[giua + 1 + j];
    }
    int i = 0, j = 0, k = trai;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = R[j];
        j++;
        k++;
    }
    for(int inx = 0; inx < 13; inx++){
              printf("%d ", a[inx]);}
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