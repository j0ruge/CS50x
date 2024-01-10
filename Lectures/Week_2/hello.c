#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_name("Your name: ");
    printf("Hello, %s!", name);
}