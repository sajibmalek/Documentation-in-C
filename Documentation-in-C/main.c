/*Program Name: How to calculate Your Age */
/*In This Program We are gonna to learn How to calculate Your Age.   */
/*So, Let's Start*/
/*

Step-1: declare int datatype variabe like  int age,date_of_Birth,currentYear.
Step-2: Create a logic like your age= current year - Date of Birth
Step-3: If you did this properly then your code will be run successfully
Step-4: Use printf function to see your Output. like printf(" My age is% d",age);
Step-5: Run Your Program.

Huha! it was awesome

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,date_of_Birth,currentYear; // Variable Declaration Section and Those are local variable

   date_of_Birth=2003; // variable value initialize

   currentYear=2020; // variable value initialize

   age= currentYear- date_of_Birth; // Main logic to calculate your age

   printf("My Age is %d",age); // printf it's output function

    return 0;
}
