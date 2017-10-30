#include "/home/tin/Desktop/fftw3/api/fftw3.h"


// c = a / b;
void cmplx_div(fftw_complex a, fftw_complex b, fftw_complex c);
// c = a * b;
void cmplx_mul(fftw_complex a, fftw_complex b, fftw_complex c);
// returns |a|
double cmplx_mag(fftw_complex a);
// returns phase in radians of a 
double cmplx_phs(fftw_complex a);
// returns real part of mag/_phs
double cmplx_real(double mag, double phs);
// returns imaginary part of mag/_phs
double cmplx_imag(double mag, double phs);
