#include <cs50.h>
#include <stdio.h>

int main(void){


    string name;
    int age;
    string phone_number;


    name = get_string("Contact Name: ");
    age = get_int("Contact Age: ");
    phone_number = get_string("Phone Number: ");

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Phone: %s\n", phone_number);

}
