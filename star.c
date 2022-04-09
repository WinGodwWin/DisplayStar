
#include <stdio.h>

// include star
void star(int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (i % 2 >= 0)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
}

// include blanc
void blanc(int size)
{
    for (int i = 0; i < size + 1; ++i)
    {
        printf(" ");
    }
}
// Function which is displaying a star
void display_star(int value)
{

    int i = 0;

    for (i = 0; i < (value); ++i)
    {
        if (i < value - 1)
        {
            // initial distance using blanc
            blanc(value * 2);
            // This is initial blanc of current position
            blanc(value - i);
            printf("*");
            if (i != 0)
            {
                blanc(i + i - 1);
                printf("*");
            }
        }
        else
        {

            blanc(2);
            star(value * 2);
            blanc((value - 2) * 2);
            star(value * 2);
        }
        printf("\n");
    }
    // This is include middle top layer
    for (i = 0; i < (value) /* -1 */; ++i)
    {
        blanc(i + 4);
        printf("*");
        blanc((value - 1) * 6 - (i + 2 + i));
        printf("*\n");
    }

    for (i = 0; i < (value); ++i)
    {
        if (i < value - 1)
        {
            blanc(value + 2 - i);
            printf("*");
            blanc((value - 1) * 4 + (i * 2) - 1);
            printf("*");
        }
        else
        {
            blanc(3);
            star(value * 2);
            blanc((value - 2) * 2);
            star(value * 2);
        }
        printf("\n");
    }

    for (i = 0; i < value; ++i)
    {
        blanc(3 + (value - 1) * 2 + i);
        printf("*");
        if (i + 1 != value)
        {
            blanc((value - 1) * 2 - (i)*2 - 1);
            printf("*");
        }
        printf("\n");
    }
}
int main()
{

    // printf("Enter value size: ");
    int n;

    scanf("%d", &n);

    if (n < 1)
    {
        printf("null\n");
        return 0;
    }

    display_star(n);

    return 0;
}