#include <stdio.h>

int get_height(int *h);
int is_valid_height(int h);
void print_pyramid(int h);

int main(void)
{
    int height;

    printf("Address of height: %d \n", &height);
    printf(" The value of height in main : %d \n", *height);


    if (!get_height(&height)) {
        printf("Invalid input.\n");
        return 1;
    }
    printf(" The value of height in main (after): %i \n", *height);

    if (!is_valid_height(height)) {
        return 1;
    }

    print_pyramid(height);
    return 0;
}

int get_height(int *height)
{
    printf ("Height insides the function: %d \n", height);
    printf(" The value of height in the function : %i \n", *height);

    printf("Enter a pyramid height (: ");
    return scanf("%d", height) == 1;
}

int is_valid_height(int height)
{
    if (height < 1 || height > 8) {
        printf("Height must be between 1 and 8.\n");
        return 0;
    }
    return 1;  
}

void print_pyramid(int height)
{
    for (int row = 1; row <= height; row++) 
    {
        int spaces = height - row;
        int stars  = row;

        for (int i = 0; i < spaces; i++) printf(" ");
        for (int i = 0; i < stars;  i++) printf("*");

        printf("  ");

        for (int i = 0; i < stars;  i++) printf("*");
        for (int i = 0; i < spaces; i++) printf(" ");

        printf("\n");
    }
}
