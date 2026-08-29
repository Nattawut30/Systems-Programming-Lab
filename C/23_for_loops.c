#include <stdio.h>
#include <unistd.h> // Mac and Linux (sleep function)
// if you use window: #include <windows.h>

int main(){
    
    // for loop = Repeat some code a limited # of times
    // for(Innitialization; Condition; Update)

    for(int i = 0; i <= 10; i++){
        printf("%d\n", i);
    }

    printf("\n");

    for(int a = 0; a <= 10; a+=2){
        printf("%d\n", a);
    }

    printf("\n");

    for(int b = 10; b >= 0; b-=2){
        printf("%d\n", b);
    }

    printf("\n");

    for(int x = 10; x>= 0; x--){
        sleep(1); 
        // Mac/Linux "sleep", Window "Sleep"
        // Mac/Linux passing seconds, Window passing milliseconds
        // Our program gonna sleep for approximately x seconds.
        printf("%d\n", x);
    }

    printf("Bomb has been boom!");

    return 0;
}