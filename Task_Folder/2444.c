// 2444 별찍기 - 7

#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            printf(" ");
        }
        for(int k=i; k>0; k--){
            printf("*");
        }
        for(int l=i-1; l>0; l--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            printf(" ");
        }
        for(int k=n-i; k>0; k--){
            printf("*");
        }
        for(int l=n-i-1; l>0; l--){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

// 제출 번호 : 87500356
