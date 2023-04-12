#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x,y;
    printf("Enter the coordinates og the point (x,y): ");
    scanf("%f %f ", &x, &y);
    
    if (x==0 && y==0)
    {
             printf("The point is at the origin.\n");
    }
    
    else if (x==0 && y!=0)
    {
     printf("The point is at the y-axis.\n");
    }
    
        else if (x!=0 && y==0)
    {
     printf("The point is at the x-axis.\n");
    }
    
    else if (x>0 && y>0)
    {
     printf("The point is at the first quadrant.\n");
    }    
    
    else if (x<0 && y>0)
    {
     printf("The point is at the second quadrant.\n");
    }
    
    else if (x<0 && y<0)
    {
     printf("The point is at the third quadrant.\n");
     
    }
    
    else 
    {
         printf("The point is at the fourd quadrant.\n"); 
     }
             system("pause");
    return 0; 
}
