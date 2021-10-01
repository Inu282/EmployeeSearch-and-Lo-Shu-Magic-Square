#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int MagicSquare(int in[3][3])
{
    int rowSum, colSum, firstDiagonal, secondDiagonal;
    
    //sum rows
    for (int row = 0; row < 3; row++)
    {
        rowSum = 0;
        for (int col = 0; col < 3; col++)
        {
            rowSum += in[row][col];
        }
        
    }

    //sum columns
    for (int col2 = 0; col2 < 3; col2++)
    {
        colSum = 0;
        for (int row2 = 0; row2 < 3; row2++)
        {
            colSum += in[row2][col2];
        }
        
    }
    //sum of firstDiagonal
    firstDiagonal = 0;
    for (int i = 0; i < 3; i++)
    {

        firstDiagonal += in[i][i];
    }

    //sum of secondDiagonal
    for (int i = 2; i >= 0; i--)
    {
        secondDiagonal = 0;
        for (int j = 0; j < 3; j++)
        {
            secondDiagonal += in[i][j];
        }
    }

    if (rowSum == 15  && colSum == 15 && firstDiagonal == 15 && secondDiagonal == 15)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int testArray[3][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6},
    };
    int test = MagicSquare(testArray);
    if (test == 1)
    {
        printf("This is a valid magic square.\n");
        for (int i = 0; i < 3; i++)
        {
            printf("[");
            for (int j = 0; j < 3; j++)
            {
                printf("%d", testArray[i][j]);
            }
            printf("]\n");
        }
    }
    else
    {
        printf("This is not a valid magic square.");
    }
    // testing known magic square

    time_t t;
    srand(time(NULL));
    int input[3][3];
    int chk = 0;
    int total = 0;
    while (chk == 0)
    {
        for (int k = 0; k < 3; k++)
        {

            for (int h = 0; h < 3; h++)
            {
                int random = (1 + rand() % 9); //check previous number for duplicate, exclude 0

                input[k][h] = random;
                // printf("%d", input[i][j]);
            }
        }
        chk = MagicSquare(input);
        total++;
    }
    if (chk == 1)
    {
        printf("This is a valid magic square.\n");
        printf("Number of tries: %d \n", total);
        for (int i = 0; i < 3; i++)
        {
            printf("[");
            for (int j = 0; j < 3; j++)
            {
                printf("%d", input[i][j]);
            }
            printf("]\n");
        }
    }
    else
    {
        printf("This is not a valid magic square.");
    }
}
