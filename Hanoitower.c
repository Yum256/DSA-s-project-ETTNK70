#include <stdio.h>
void hanoi(int n,char A, char B, char C){
    if(n==1){
        printf("chuyen dia 1 tu cot %c sang cot %c\n",A,C);
    }else{
        hanoi(n-1,A,C,B); // chuyen n-1 dia tu cot A sang B voi C la trung gian
        printf("chuyen dia %d tu cot %c sang cot %c\n",n,A,C);
        hanoi(n-1,B,A,C); // chuyen n-1 dia tư cot B ve cot C voi A la trung gian
    }
}
int main(){
    int dia;
    char A='A',B='B',C='C';
    printf("Nhap vao so dia: ");
    scanf("%d", &dia);

    hanoi(dia,A,B,C);
    return 0;
}
