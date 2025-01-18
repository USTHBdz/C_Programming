#include <stdio.h>
#include <math.h>

int main(){
    int n, k;
    printf("Enter number n : ");
    scanf("%d", &n);
    for(int i = 2 ; i <= n; i++){
        k = ceil(sqrt(i));
        for (int j = 2; j <= k; j++){
            if(i % j == 0 && j != k){
                break;
            }else if (j == k){
                printf("%i\n", i);
            }
        }

    }
    
    return 0;
}