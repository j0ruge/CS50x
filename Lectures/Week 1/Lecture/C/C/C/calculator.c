#include <cs50.h>
#include <stdio.h>


long get_sum(long x, long y);

int main(void){

    long x = get_long("x: ");

    long y = get_long("y: ");

    long result = get_sum(x,y);

    printf("%li\n", result);

    double z = (double) x / (double) y;

    printf("%.20f", z);

}

long get_sum(long x, long y){
    return x + y;
}
