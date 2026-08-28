#include <stdio.h>

// result = 0; << You can make a GLOBAL SCOPE() at the top
// but its not best practice, hard to debug!

// add
int add(int x, int y){
    int result = x + y;
    return result;
}

// subtract
int subtract(int x, int y){
    int result1 = x - y;
    return result1;
}

// function can't see inside other function
// think of your house and neightbors house
// Neightbors can't see inside our house

int main(){

    // variable scope = Refers to where a variable is recognized and accessible
    // varialbes can share the same name if
    // they're in different scopes {}
    // they're can have the same name as long as they're within different scopes.

    int x = 3;
    int y = 4;

    // LOCAL
    int result = add(x, y);
    int result1 = subtract(x, y);

    printf("%d\n", result);
    printf("%d\n", result1);

    return 0;

}