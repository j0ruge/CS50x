#include <cs50.h>
#include <stdio.h>


int get_rows(void);
void wall_matrix(int rows_quantity, int lines_quantity);

int main(void)
{
    //question_marks(4);
    //wall_marks(3);

    int rows = get_rows();


    wall_matrix(rows, 4);
}


void question_marks(int mumber_of_marks)
{
 for (int i = 0; i < mumber_of_marks; i++)
    {
        printf("?");
    }
    printf("\n");
}

void wall_marks(int mumber_of_marks)
{
    for (int i = 0; i < mumber_of_marks; i++)
    {
        printf("#\n");
    }
}

void wall_matrix(int rows_quantity, int lines_quantity)
{

    for (int lines = 0; lines < lines_quantity; lines++)
    {
        for (int rows = 0; rows < rows_quantity; rows++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_rows(void)
{
    int rows_quantity_input;

    do
    {
        rows_quantity_input = get_int("Size of Rows: \n");
    }
    while(rows_quantity_input < 1);
    return rows_quantity_input;
}




