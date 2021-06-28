#include <stdio.h>
#include <stdlib.h>

#define GRID_SIZE 3
#define char_X 120
#define char_O 79

void print_grid(char grid[GRID_SIZE][GRID_SIZE]);
int * get_user_choice();
int get_cpu_choice();

int main()
{
    // system("clear");
    printf("Welcome to CLI TIC-TAC-TOE!\n\n");

    char grid[GRID_SIZE][GRID_SIZE] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    int *array = get_user_choice();
    grid[array[1]][array[0]] = char_X;

    print_grid(grid);
    
    int *array1 = get_user_choice();
    grid[array[1]][array[0]] = char_O;

    print_grid(grid);

    int *array2 = get_user_choice();
    grid[array[1]][array[0]] = char_X;

    print_grid(grid);

    int *array3 = get_user_choice();
    grid[array[1]][array[0]] = char_O;

    print_grid(grid);

    int *array4 = get_user_choice();
    grid[array[1]][array[0]] = char_X;

    print_grid(grid);

    int *array5 = get_user_choice();
    grid[array[1]][array[0]] = char_O;

    print_grid(grid);

    int *array6 = get_user_choice();
    grid[array[1]][array[0]] = char_X;

    print_grid(grid);
    
    int *array7 = get_user_choice();
    grid[array[1]][array[0]] = char_O;

    print_grid(grid);

    int *array8 = get_user_choice();
    grid[array[1]][array[0]] = char_X;

    print_grid(grid);

return 0;
};

void print_grid(char grid[GRID_SIZE][GRID_SIZE])
{
    printf("\n");
    for (int i = 0; i < GRID_SIZE; i++)
    {
        for (int j = 0; j < GRID_SIZE; j++)
        {
            printf("%c\t", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
};

int * get_user_choice()
{
    static int  arr[2];
    int input_x, input_y;
    
    printf("Please select where you want to play:\n");
    scanf("%i %i", &input_x, &input_y);

    while(!(0 < input_x) || !(input_x < 4) || !(0 < input_y) || !(input_y < 4)){
        printf("Invalid input please try again:\n");
        scanf("%i %i", &input_x, &input_y);
    }

    input_x = input_x - 1;
    input_y = input_y - 1;
    arr[0] = input_x;
    arr[1] = input_y;

    return arr;
};

//?     + | + | +
//?    ___|___|___
//?     + | + | +
//?    ___|___|___
//?     + | + | +