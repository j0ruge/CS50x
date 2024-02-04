// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

float half(float bill, float tax, int tip)
{
    const int PERCENT = 100;
    const int HALF = 2;

    // The tax should be added to the bill amount before calculating the tip
    float converted_tax_percent = tax / PERCENT;
    float tax_ammount = bill * converted_tax_percent;
    float bill_with_tax = bill + tax_ammount;

    // Calculate the tip
    float converted_tip_percent = (float) tip / PERCENT;
    float tip_amount = bill_with_tax * converted_tip_percent;

    // Adding tip to amount
    float total_amount = bill_with_tax + tip_amount;

    return total_amount / HALF;
}
