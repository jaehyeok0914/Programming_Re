// 5073 삼각형의 세 변

#include <stdio.h>

int main(void){
    int a, b, c;
    
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if(a==0 && b==0 && c==0)
            break;
        if(a>=b && a>=c && a<b+c){
            if(a==b && b==c)
                printf("Equilateral\n");
            else if(a==b||b==c||c==a)
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
        else if(b>=a && b>=c && b<a+c){
            if(a==b && b==c)
                printf("Equilateral\n");
            else if(a==b||b==c||c==a)
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
        else if(c>=a && c>=b && c<a+b){
            if(a==b && b==c)
                printf("Equilateral\n");
            else if(a==b||b==c||c==a)
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
        else
            printf("Invalid\n"); 
    }
    
    return 0;
}

// 제출번호 : 87499909
