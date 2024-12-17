// 10988 - 팰린드롬인지 확인하기

#include <stdio.h>
#include <string.h>

int main() {
    int size, k = 1;
    char str[100];
    scanf("%s", str);
    size = strlen(str);
    
    for (int i = 0; i < size / 2; i++) {
        if(str[i] != str[size - 1 - i]) {
            k = 0;
            break;
        }
    }
   
    printf("%d", k);
    return 0;
}

// 제출 번호 : 87564361
