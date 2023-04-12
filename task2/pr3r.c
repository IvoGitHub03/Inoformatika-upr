#include <stdio.h>
#include <stdlib.h>
int main()
{
    float C,F;
    int a;
    printf("Izchislenie na gradusi ot Celsii v Farenhait\n");
    printf("Vuvdete gradusite po Celsii:");
    scanf("%f",&C);
    F=C*1.8+32;
    printf("Gradusite v Farenhait sa =%f\n",F);
    system("pause");
    return 0;
}
