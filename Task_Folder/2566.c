// 2566 최댓값

#include <stdio.h>

int main(void){
    int arr[9][9]={};
    int max = -1;
    int x, y = 0;
    
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", x, y);
    
    return 0;
}

// 제출 번호 : 87296905
