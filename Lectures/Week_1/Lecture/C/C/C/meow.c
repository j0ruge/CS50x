#include <stdio.h>
#include <cs50.h>

void meow_v1()
{
    printf("meow.\n");
    printf("meow.\n");
    printf("meow.\n");
}

void meow_while_loop_version(int number_of_meows)
{
    int counter = 0;
    while (counter < number_of_meows)
    {
        printf("meow.\n");
        counter++;
    }
}

void meow_for_loop_version(int number_of_meows)
{
    for(int counter = 0; counter < number_of_meows; counter++ )
    {
        printf("meow.\n");
    }
}


int main(void)
{
    meow_v1();

    int meows = get_int("How many meows?");
    // meow_while_loop_version(meows);
    meow_for_loop_version(meows);

}



