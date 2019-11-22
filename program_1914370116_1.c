#include <stdio.h>

int main(){
    printf("5! = ");
        int total = 1;
            for (int i=5; i>=1; i--){
                printf("%d%s", i, "x ");
                total = (i*total);
            }
            printf(" = %s %d", "total: ", total);
}
