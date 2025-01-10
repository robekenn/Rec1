/* CS261- Recitation 1 - Q. 1*
 * Name : Kenneth Robertson
 * Recitation time: 2:00
 * Solution description: check the properties, like value and address, of pointer
 */
 
#include <stdio.h>
#include <stdlib.h>

void myFuntion(int* iptr){
     /*Print the value pointed to by iptr*/
     printf("%i\n", *iptr);
     /*Print the address pointed to by iptr*/
     printf("%p\n", iptr);
     /*Print the address of iptr itself*/
     printf("%p\n", &iptr);
}

int main(){
    
    /*declare an integer x and initialize it with 0*/
    int x = 0;
    /*print the address of x*/
    printf("%p\n", &x);
    /*Call myFunction() with the address of x*/
    myFuntion(&x);
    /*print the value of x*/
    printf("%i\n",x);
    return 0;
}
