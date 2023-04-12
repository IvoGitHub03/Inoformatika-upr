#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float xp,yp,xc,yc,rc,distance;
    printf("Enter coordinates of the point(Xp,Yp): ");
    scanf ("%f %f", &xp, &yp);
    
    printf("Enter coordinates of the center of the circle (Xc, Yc) and the radius Rc: ");
    scanf("%f %f %f", &xc, &yc, &rc);
    
    distance = sqrt ((xp-xc)*(xp-xc)+(yp-yc));
    
    if (distance<=rc)  {
  printf("The point (%.2f, %.2f) is inside the circle./n", xp,yp);
         }
         
    else {
          printf("The point (%.2f, %2.f) is outside the circle./n", xp,yp);
         }
    
    
     system("pause");
    return 0; 
}
