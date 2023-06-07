#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf("Enter distance in Miles: \n");
    scanf("%d \n", &a);

    for (a = 0, b = a * 1.609; a < 10; a = a + 1)
    {
        printf("%d Miles = %d Kilometers \n", a, b);
    }

    return 0;
}
