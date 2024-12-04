// 25304 영수증
#include <stdio.h>

int main(void){
    int x, n;
    int a[100];
    int b[100];
    int total = 0;
    
    scanf("%d", &x);
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a[i], &b[i]);
        total += a[i]*b[i];
    }
    if(total == x)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}

// 제출번호 : 87153142
