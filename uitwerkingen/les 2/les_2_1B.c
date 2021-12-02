#include <stdio.h>
#include <math.h>

void diameter_ber(float, float*);

int main()
{
float diameter, omtrek;
printf("kies een diameter voor de cirkel");
scanf("%f", &diameter);

diameter_ber(diameter, &omtrek);

printf("het omtrek van de cirkel = %.2f\n", omtrek);
return 0;
}



void diameter_ber(float dia, float *om){
    *om = (3.14*dia);
}


