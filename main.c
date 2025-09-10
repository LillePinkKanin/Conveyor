
//conveyorbelt problem:

#include <stdio.h>


int main(void){

  
   int motor = 0;

   printf("How many motors are available?\n"); //prompts how many motors
   scanf("%d", &motor); // read an integer

   
   float weight = 0;

   printf("how many kgs of packages are expected? \n"); //prompts how many kg's of packages
   scanf("%f", &weight); // read a float

   if (weight/motor <=5.6) { //decides if the amount of motors can carry the amount of packages
        printf("The motors can carry the packages");
   } else {
        printf("The motors can't carry the packages");

   }



}
