#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Rus");
    char n[1000];
    int answer = 0;
    int Numbers[10] = {0,0,0,0,0,0,0,0,0,0};

    printf("Введите число:\n");
    scanf("%s",&n);

    for (int i=0; i<strlen(n); i++){
        Numbers[n[i] - '0'] += 1;
    }
    for (int i=0; i < 10; i++){
        if (Numbers[i] != 0){
            answer += 1;
        }
    }
    printf("Различных цифр: %d\n", answer);
    return 0;
}
