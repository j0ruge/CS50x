#include <cs50.h>
#include <stdio.h>

int main(void)
{

    const int born_llama_rate = 3;
    const int pass_away_llamas_rate = 4;

    // Prompt the user for starting # of llamas

    int current_llamas_quantity;
    do
    {
        current_llamas_quantity = get_int("How many llhamas you have nowadays? ");
    }
    while (current_llamas_quantity < 9);

    // Prompting them for an ending # of llamas

    int goal_llamas_quantity;
    do
    {
        goal_llamas_quantity = get_int("How is your goal fro llamas quantity in the future? ");
    }
    while (goal_llamas_quantity < current_llamas_quantity);

    // How many years will take to get to the goal?

    int goal_year;
    for (goal_year = 0; current_llamas_quantity < goal_llamas_quantity; goal_year++)
    {

        // Every year, 1/3 of our current llamas are born;
        int born_llama_rate_per_year = current_llamas_quantity / born_llama_rate;

        // Every year, 1/4 of our current llamas pass away
        int pass_away_llamas_per_year = current_llamas_quantity / pass_away_llamas_rate;

        int difference_of_llamas = born_llama_rate_per_year - pass_away_llamas_per_year;
        current_llamas_quantity = current_llamas_quantity + difference_of_llamas;
    }

    printf("You got your goal in %i year ahead\n", goal_year);
}
