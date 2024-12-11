// 1157 단어 공부
#include <stdio.h>

int main() {
    char word[1000000] = "";
    int arr[26] = {};
    int max = 0;
    int alp = 0;
    int count = 0;
    int size;
    
    scanf("%s", word);
    size = strlen(word);
    for (int i = 0; i < size; i++) {
        if (word[i] >= 'a') {
            word[i] -= 32;
        } //소문자 -> 대문자
        arr[(int) word[i] - 65]++; //알파벳 카운팅
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 0)
            continue;
            
        else if(arr[i] > max) {
            count = 0;
            max = arr[i];
            alp = i;
        } //알파벳 갱신
        else if (arr[i] == max) {
            count++;
        } //개수가 중복이면 카운트 올리기
    }

    if (count > 0)
        printf("?");
    else if (count == 0)
        printf("%c", alp + 65);

    return 0;
}

// 제출 번호 : 87360160
