#include<stdio.h>
int main()
{
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int i,minutes = 0;
    float distance =0.0;
    for(i=1;i<=10;i++);
    {
        distance = distance+0.5;
        printf("Minute %d: Distance covered = %.1f km\n", i, distance);
        if (distance=10)
        {
            printf("Marathon Complete\n");
            
        }
 
    }
    return 0;
}