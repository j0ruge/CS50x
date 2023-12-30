#include <stdio.h>


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

int main(void)
{
    //question_marks(4);
    //wall_marks(3);
    wall_matrix(2, 4);
}
