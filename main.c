#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    int size = n+n-1;
    int front = 0;
    int end = size-1;
    int row[size][size];

    //initialize all elements of row to zero
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            row[i][j] = 0;
        }
    }

    // assigning values to each element of row
    while(n!=0)
    {
        for(int i=front ; i<=end ; i++)
        {
            for(int j=front ; j<=end ; j++)
            {
                if(i==front || i==end || j==front || j==end)
                    row[i][j] = n ;
            }
        }
        ++front;
        --end;
        --n;
    }

    //printing elements of row
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            printf("%d ", row[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    return 0;
}
