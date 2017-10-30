#include <stdio.h>
#include "../../inc/fftw3.h"
#include "../../inc/cmplx.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main (void) {


 fftw_complex a;
 double mag;

 srand((unsigned) time(NULL));

 printf("\nOdabirem kompleksni broj metodom slucajnog odabira...\n");
 
 a[0] = rand() % 16;
 a[1] = rand() % 16;
 
 if(rand()%10 > 6)
    a[0] = -1*a[0];

 if(rand()%17 > 7)
    a[1] = -1*a[1];

 mag = cmplx_mag(a);

 printf("Odabrani broj: %lf + %lf*i\n", a[0], a[1]);
 printf("Modul odabranog broja: %lf\n", mag);

 return 0;

}
