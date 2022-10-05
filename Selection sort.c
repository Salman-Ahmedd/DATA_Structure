#include<stdio.h>

int main ()

{
        int A[100], n, i, j, temp;

        printf("\n Enter the total Number of Elements : ");
        scanf("%d", &n);

        printf("\n Enter the Array  Elements : ");

        for (i = 0; i < n; i++)
            scanf("%d", &A[i]);

        for (i = 0; i < n; i++)
            {
                for (j = i+1; j < n; j++)
                    {
                        if (A[i] > A[j])
                            {
                                temp = A[i];
                                A[i] = A[j];
                                A[j] =temp;
                            }
                    }
            }

            printf("\n Selection Sort Result : ");

            for (i = 0; i < n; i++)
            {
                printf("%d \t", A[i]);
            }

            printf("\n");

    return 0;
}
