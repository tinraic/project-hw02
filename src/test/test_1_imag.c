#include <stdio.h>
#include <math.h>
#include "../../inc/fftw3.h"
#include "../../inc/cmplx.h"
#include <stdlib.h>
#include <time.h>


int main (void) {


 fftw_complex a;
 double mag, phase;

 srand((unsigned) time(NULL));

 printf("\nOdabirem kompleksni broj metodom slucajnog odabira...\n");

 a[0] = rand() % 16;
 a[1] = rand() % 16;
 
 if(rand()%10 > 6)
    a[0] = -1*a[0];

 if(rand()%17 > 7)
    a[1] = -1*a[1];
 
 mag = cmplx_mag(a);
 phase = cmplx_phs(a);

 printf("Odabrani broj: %lf + %lf*i\n", a[0], a[1]);
 printf("Modul odabranog broja: %lf\n", mag);
 printf("Argument (faza) odabranog broja: %lf\n", phase);

 printf("Imaginarni dio odabranog broja (%lf<%lf): %lf\n", mag, phase, cmplx_imag(mag, phase));

 return 0;

}
