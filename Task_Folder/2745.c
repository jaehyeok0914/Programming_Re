// 2745 - 진법 변환

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) 
{
    char n[36] = {0};
    int b, ans = 0;
    int size;

    scanf("%s %d",n,&b);
    
    size = strlen(n);

    for (int i = 0; i < size; i++) {
        if (n[i] >= 'A' && n[i] <= 'Z') {
            ans += (n[i] - 55) * pow(b,size - i - 1);
        }
        else {
            ans += (n[i] - 48) * pow(b,size - i - 1);
        }
    }

    printf("%d", ans);

    return 0;
}

// 제출 번호 : 87564339
