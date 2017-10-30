#include <stdio.h>
#include "/home/tin/Desktop/fftw3/api/fftw3.h"
#include <math.h>
#include <cmplx.h>
#define PI 3.141592654


void cmplx_div(fftw_complex a, fftw_complex b, fftw_complex c){
 
 double magA, magB, phsA, phsB; 
 
 magA = cmplx_mag(a);
 magB = cmplx_mag(b);
 phsA = cmplx_phs(a);
 phsB = cmplx_phs(b);


 c[0] = (magA/magB)*cos(phsA-phsB);
 c[1] = (magA/magB)*sin(phsA-phsB);

}

void cmplx_mul(fftw_complex a, fftw_complex b, fftw_complex c){

 double magA, magB, phsA, phsB;

 magA = cmplx_mag(a);
 magB = cmplx_mag(b);
 phsA = cmplx_phs(a);
 phsB = cmplx_phs(b);

 c[0] = (magA*magB)*cos(phsA+phsB);
 c[1] = (magA*magB)*sin(phsA+phsB);

}

double cmplx_mag(fftw_complex a){

 return pow(pow(a[0],2) + pow(a[1],2), 0.5);

}

double cmplx_phs(fftw_complex a){

 if (a[0] > 0. && a[1] >= 0.)
     return atan(a[1]/a[0]);

 else if (a[0] < 0. && a[1] >= 0.)
     return atan(a[1]/a[0]) + PI;

 else if (a[0] < 0. && a[1] <= 0.)
     return atan(a[1]/a[0]) + PI;

 else if (a[0] > 0. && a[1] <= 0.)
     return atan(a[1]/a[0]) + 2*PI;

 else if (a[0] == 0 && a[1] > 0)
     return PI/2;

 else if (a[0] == 0 && a[1] < 0)
     return -PI/2;


 else
     return -1.;

}

double cmplx_real(double mag, double phs){

 return mag * cos(phs);

}

double cmplx_imag(double mag, double phs){

 return mag * sin(phs);

}
