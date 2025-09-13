#include<stdio.h>
int main()
{
    int i,minutes = 0;
    double distance =0.0;
    for(i=0;i<=10;i++);
    {
        minutes++;
        distance = distance+0.5;
        printf("Minute %d: Distance covered = %.1f km\n", minutes, distance);
        if (distance=10)
        {
            printf("Marathon Complete\n");
            
        }
 break;
    }
    return 0;
}