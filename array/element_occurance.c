#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
