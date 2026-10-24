#include<stdio.h>
int problem3 (int a[], int n){
    int xor = 0;
    for(int i = 0; i < n; i++){
        xor ^= a[i];
    }
    for (int i = 0; i < n; i++){
        xor ^= i;
    }
    return xor;

}
int main(){
    int a[] = {1,4,2,3,5,6,8,7,4};
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d \n", problem3(a, n));
    int b[] = {1,1};
    int m = sizeof(b)/sizeof(b[0]);
    printf("%d", problem3(b, m));
    return 0;
}