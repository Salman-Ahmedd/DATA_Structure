#include<stdio.h>

int main ()

{
        int A[100], n, i, j, temp;

        printf("\n Enter the total Number of Elements : ");
        scanf("%d", &n);

        printf("\n Enter the Array  Elements : ");

        for (i = 0; i < n; i++)
            scanf("%d", &A[i]);

        for (i = 1; i < n-1; i++)
            {
                for (j = i; j > 0 && A[j-1] > A[j]; j--)
                    {
                        temp = A[j];
                        A[j] = A[j-1];
                        A[j-1] =temp;
                    }
            }

            printf("\n Insertion Sort Result : ");

            for (i = 0; i < n; i++)
            {
                printf("%d \t", A[i]);
            }

            printf("\n");

    return 0;
}
