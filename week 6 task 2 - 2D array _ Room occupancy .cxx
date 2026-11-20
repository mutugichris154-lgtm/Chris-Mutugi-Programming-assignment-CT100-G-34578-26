
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int occupancy[5][10];
    int i, j;
    int occupied, vacant;

    srand(time(0));

    // Generate random occupancy data
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 10; j++)
        {
            occupancy[i][j] = rand() % 2;
        }
    }

    // Display room occupancy
    printf("HOTEL ROOM OCCUPANCY\n");

    for(i = 0; i < 5; i++)
    {
        occupied = 0;
        vacant = 0;

        for(j = 0; j < 10; j++)
        {
            if(occupancy[i][j] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        printf("\nFloor %d:\n", i + 1);
        printf("Occupied Rooms: %d\n", occupied);
        printf("Vacant Rooms: %d\n", vacant);
    }

    return 0;
}
