#include <stdio.h>
#include "../../inc/io.h"


int main (void){

 FILE *izTok;
 int n;
 short int vrijednost = 32;

 izTok = fopen("testFile.bin", "wb+");
 
 if(izTok==NULL)
   fatal("Datoteka ne postoji...");

 write_half(izTok, vrijednost);

 fclose(izTok);
 
 printf("\nUpisana vrijednost: %d\n", vrijednost);

 
 return 0;

}
