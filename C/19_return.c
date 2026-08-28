#include <stdio.h>
#include <stdbool.h>

// square_i
int square_i(int num){ // << pass the variables as 'void'

    return num * num;
}

// square_d
double square_d(double num1){

    return num1 * num1;
}

// cube
double cube(double num2){
    return num2 * num2 * num2;
}

// ageCheck
bool ageCheck(int age){
    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}

// getMax
int getMax(int a, int b){

    if(a >= b){
        return a;
    }
    else{
        return b;
    }

}

int main(){
    
    // return = returns a value back to where you call a function
    // call a function that have values and return something

    int x = square_i(2);
    int y = square_i(3);
    int z = square_i(4);

    double h = square_d(2.1);
    double j = square_d(3.2);
    double k = square_d(4.3);

    double t = cube(4.4);
    double u = cube(5.5);
    double v = cube(6.6);

    int age = 26;

    int max = getMax(2, 3);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    printf("%lf\n", h);
    printf("%lf\n", j);
    printf("%lf\n", k);

    printf("%lf\n", t);
    printf("%lf\n", u);
    printf("%lf\n", v);

    if(ageCheck(age)){
        printf("You may sign up.\n");
    }
    else{
        printf("You are must be 18+ to sign up.\n");
    }

    printf("%d", max);

    return 0;
}