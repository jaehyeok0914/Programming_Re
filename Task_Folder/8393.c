// 8393 합
#include <stdio.h>

int main(){
    int n;
    int i = 0;
    scanf("%d", &n);
    for (; n>0; n--){
        i = n + i;
    }
    printf("%d", i);
    
    return 0;
}

// 제출 번호 : 87154788
