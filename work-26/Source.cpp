#include <stdio.h>
int rows;
int functioncall() {
    
    printf("Enter rows : ");
    scanf_s("%d", &rows);
    return 0;
}

int main()
{
    int i, j,n;
    int a[] = { 1,2,3,4,6 };
    int result = 0;
    int value;
    int* mypointer;

    functioncall();
    for (n = 0; n < 5; ++n)
    {
        result += a[n];
    }
    value = result;
    mypointer = &value;
    printf(" The number of  all star is %d\n", *mypointer);
  
    for (i= 1; i <= rows; i++)
    {
        /* Print trailing spaces */
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }


        /* Print stars and center spaces */
        for (j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("*");
              
            }
            else
                printf(" ");
        }

        printf("\n");
    }
  
    return 0;
}