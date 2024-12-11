// 2738 행렬 덧셈

#include <stdio.h>

int main(void){
    int n, m;
    int arra[100][100]={};
    int arrb[100][100]={};
    
    scanf("%d %d", &n, &m);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%d", &arra[i][j]);
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%d", &arrb[i][j]);
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("%d ", arra[i][j] + arrb[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

// 제출 번호 : 87359744
