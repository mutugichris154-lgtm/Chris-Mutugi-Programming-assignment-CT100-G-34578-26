
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int chain[3][5][10];
    int i, j, k;
    int totalOccupied = 0;

    srand(time(0));

    // Generate random occupancy data
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            for(k = 0; k < 10; k++)
            {
                chain[i][j][k] = rand() % 2;
            }
        }
    }

    // Count occupied rooms
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            for(k = 0; k < 10; k++)
            {
                if(chain[i][j][k] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    // Display result
    printf("HOTEL CHAIN ROOM OCCUPANCY\n");
    printf("Total Branches: 3\n");
    printf("Total Floors: 15\n");
    printf("Total Rooms: 150\n");
    printf("Total Occupied Rooms: %d\n", totalOccupied);

    return 0;
}
