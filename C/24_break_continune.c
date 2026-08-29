#include <stdio.h>

int main(){
    
    // break = Break out of a loop (STOP)
    // continune = Skip current cycle of loop (SKIP)

    for(int i = 1; i <= 10; i++){

        if(i == 5){
            break;
        }
        printf("%d\n", i);
    }

    printf("\n");

    for(int i = 1; i <= 10; i++){

        if(i == 4){
            continue;;
        }
        printf("%d\n", i);
    }

    return 0;
}