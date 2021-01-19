#include <stdio.h>
#include <stdlib.h>
#define MAX 12
int main(){
    int c[MAX], i, c13, s;

    s = 0;

    for(i = 0; i < MAX; i++){
        printf("Inserisci il valore numero %d: ", i + 1);
        scanf("%d", &c[i]);
    }

    for(i = 0; i < MAX - 1; i = i + 2){
        s = s + c[i];
        s = s + 3 * c[i + 1];
    }

    c13 = s % 10;
    c13 = 10 - c13;

    printf("\n%d\n", c13);
    system("pause");
}