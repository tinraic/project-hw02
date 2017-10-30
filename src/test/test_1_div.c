#include <stdio.h>
#include "../../inc/fftw3.h"
#include "../../inc/cmplx.h"
#include <math.h>
#include <time.h>
#include <stdlib.h>


int main (void) {


 fftw_complex a, b, c;

 srand((unsigned) time(NULL));

 printf("\nOdabirem prvi i drugi kompleksni broj metodom slucajnog odabira...\n");
 
 a[0] = rand() % 16;
 a[1] = rand() % 16;
 b[0] = rand() % 16;
 b[1] = rand() % 16;

 if(rand()%10 > 6)
    a[0] = -1*a[0];

 if(rand()%17 > 7)
    a[1] = -1*a[1];

 if(rand()%23 > 10)
    b[0] = -1*b[0];

 if(rand()%61 > 25)
    b[1] = -1*b[1];


 cmplx_div(a, b, c);

 printf("Prvi broj: %lf + %lf*i\n", a[0], a[1]);
 printf("Drugi broj: %lf + %lf*i\n", b[0], b[1]);
 printf("(Prvi broj) / (Drugi broj): %lf + %lf*i\n", c[0], c[1]);

 return 0;

}


