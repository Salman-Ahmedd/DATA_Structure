#include <stdio.h>

int main()

{
    int array[100], search, first, last, middle, i, n;

    printf("\nEnter Size of the Array : ");
    scanf("%d", &n);

    printf("\nEnter any %d integers Values : ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("\nEnter the Element to be Search : ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
        if (array[middle] < search)
        {
            first = middle+1;
        }

        else if (array[middle] == search)
        {
            printf("\n%d Element is found at : %d Number Index.\n\n Thanks for Searching.\n", search, middle+1);
            break;
        }

        else
        {
            last = middle-1;
            middle = (first + last)/2;
        }
    }



    return 0;
}
