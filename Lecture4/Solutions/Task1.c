#include <stdio.h>

int dec2bin(int n){
    if (n == 0){
        printf("0");
        return 0;
    }
    dec2bin(n / 2);
    printf("%d", n % 2);
}

int main(){
    int d;
    printf("Enter number : ");
    scanf("%d", &d);
    dec2bin(d);
    printf("\n");
    return 0;
}