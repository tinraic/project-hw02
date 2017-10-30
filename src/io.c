#include <stdio.h>
#include <io.h>

void fatal(char *poruka){

 fputs(poruka, stderr);
 fputs("\n", stderr);
 exit(1);

}

int read_word(FILE *fd){
 
 int result, n;
 
 n = fread(&result, sizeof(int), 1, fd);

 if(n<1)
   fatal("Citanje nije uspjelo...");

 return result;
 
}

short read_half(FILE *fd){

 int n;
 short int result;

 n = fread(&result, sizeof(short), 1, fd);
 
 if(n<1)
   fatal("Citanje nije uspjelo...");

 return result;

}

void write_word(FILE *fd, int word){

 int n;

 n = fwrite(&word, sizeof(word), 1, fd);
 
 if(n<1)
   fatal("Zapisivanje nije uspjelo...");

}

void write_half(FILE *fd, short word){

 int n;

 n = fwrite(&word, sizeof(word), 1, fd);
 
 if(n<1)
   fatal("Zapisivanje nije uspjelo...");

}
