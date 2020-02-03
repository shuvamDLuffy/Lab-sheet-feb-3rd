

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nums[1000];
    int num, count = 0,a;

    printf("Enter a number :\n");
    scanf("%d", &num);

    nums[count] = num;

    while(1)
    {
        printf("Enter another number :\n");
        scanf("%d", &num);

        if (num <= 0)
            break;

        count++;

        nums[count] = num;

    }

    int max = nums[0], min = nums[0];
    float avg = 0;

    for( a = 0; a <= count; a++)
    {
        if (max < nums[a])
            max = nums[a];

        if (min > nums[a])
            min = nums[a];

        avg += nums[a];
    }

    count++;

    avg /= count;

    printf("\n\nMaximum number = %d\n", max);
    printf("Minimum number = %d\n", min);
    printf("Average of all numbers = %f\n\n\n\n", avg);

    return 0;
}

