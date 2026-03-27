#include <stdio.h>

int main()
{
    int r, c, i, j, k;

    scanf("%d %d", &r, &c);

    int A[10][10], B[10][10], sum[10][10];

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum[i][j] = A[i][j] + B[i][j];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    int saddleFound = 0;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            int isSaddle = 1;

            for(k = 0; k < c; k++)
                if(A[i][j] > A[i][k])
                    isSaddle = 0;

            for(k = 0; k < r; k++)
                if(A[i][j] < A[k][j])
                    isSaddle = 0;

            if(isSaddle)
            {
                printf("Saddle Point: %d\n", A[i][j]);
                saddleFound = 1;
            }
        }
    }

    if(!saddleFound)
        printf("No Saddle Point\n");

    printf("Transpose of Matrix A:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d ", A[j][i]);
        printf("\n");
    }

    if(r == c)
    {
        int sum1 = 0, sum2 = 0, flag = 1;

        for(i = 0; i < r; i++)
        {
            int row = 0, col = 0;

            for(j = 0; j < c; j++)
            {
                row += A[i][j];
                col += A[j][i];
            }

            if(i == 0)
            {
                sum1 = row;
                sum2 = col;
            }
            else
            {
                if(row != sum1 || col != sum2)
                    flag = 0;
            }
        }

        int d1 = 0, d2 = 0;

        for(i = 0; i < r; i++)
        {
            d1 += A[i][i];
            d2 += A[i][r - i - 1];
        }

        if(d1 != sum1 || d2 != sum1)
            flag = 0;

        if(flag)
            printf("Magic Square\n");
        else
            printf("Not Magic Square\n");
    }
    else
    {
        printf("Magic Square not possible\n");
    }

    return 0;
}
