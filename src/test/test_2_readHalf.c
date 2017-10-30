#include <stdio.h>
#include "../../inc/io.h"

int main (void){

 FILE *ulTok;
 short int procitanaVrijednost;

 ulTok = fopen("testFile.bin", "rb");
 
 if(ulTok==NULL)
   fatal("Datoteka ne postoji...");

 procitanaVrijednost = read_word(ulTok);
 
 fclose(ulTok);

 printf("\nProcitana vrijednost: %d\n", procitanaVrijednost);

 
 return 0;

}
