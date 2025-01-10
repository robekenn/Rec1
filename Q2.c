/* CS261- Recitation 1 - Q.2
 * Name:  Kenneth Robertson
 * Recitation time:2:00
 * Complete the code below 
*/
 
#include <stdio.h>
#include <stdlib.h>

int foo(int a, int* b, int c[], int n){
    /* Set a to double its original value*/
	a *= 2;
    /* Set b to the maximum value in the array c[] using a for loop */
	int max = c[0];
	for(int i = 1; i < n; i++){
		if(max < c[i])
			max = c[i];
	}
	*b = max;
    /* Set c[0] to triple its original value */
	c[0] *= 3;

    /* Return  the sum of a and b */
	return a + *b;
}

int main(){
    int n = 5;  // the size of the array c
    int c[5] = {4,9,1,2,0};

    /*Declare two integers x and y and initialize them to 2 and 4 respectively*/
	int x = 2;
	int y = 4;
    
    /*Print the values of x, y and the first element of c in one line*/
	printf("x = %i y = %i c[0] = %i\n",x,y, c[0]);
    /*Call foo() appropriately, passing x,y,c,n as parameters*/
	int ret = foo(x,&y,c,n);
    /*Print the value returned by foo*/
	printf("returned #: %i\n", ret);
    /*Print the values of x, y and the first element of c  again*/
	printf("x = %i y = %i c[0] = %i\n", x, y, c[0]);
    /*  Did the values printed change? Why?
     *
     *	y changed because it is a pointer and not a copy of the variable, the first value of c array changed because it acts as a pointer and we tripled the amount 
     *  */
    return 0;
}
    
    
