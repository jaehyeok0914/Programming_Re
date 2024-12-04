// 2675 문자열 반복
#include <stdio.h>

int main(void){
    int t, r;
    char str[20]="";
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        scanf("%d %s", &r, str);
        for(int j=0; j<strlen(str); j++){
            for(int k=0; k<r; k++){
                printf("%c", str[j]);
            }
        }
        printf("\n");
        
    }
    return 0;
}

// 제출 번호 : 87155093
