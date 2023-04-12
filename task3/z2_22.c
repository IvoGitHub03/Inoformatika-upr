#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int s_t,s_o,r,pi=3.14,diff;
    printf ("Enter radius: ");
    scanf("%d",&r);
    s_o= pi*(pow(r,2));
    s_t=3*pow(r,2)*sqrt(3);
    printf("s_t= %d\n", s_t);
    printf("s_o= %d\n",s_o);
    diff=s_t - s_o;
    printf("diff= %d\n",diff);
    system("pause");
    return 0;
}
