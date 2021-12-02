#include <stdio.h>
#include "hello.h"

int main()
{
int a;
printf("kies een nummer -1,2 of 3: \n");
scanf("%d", &a);
if(a<0){
    printf("Abort program");
    return(0);
    };
printf("gekozen nummer is: %d", a);
if(a==2){
    hello();
}
else{
    printf("\n3 is een mooi nummer");
}
}