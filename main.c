#include <stdio.h>
#include <stdlib.h>
#include <string.h>





#include "cidade.h"
#include "missil.h"
#include "defesa.h"


int main(){

    tCidade cidade;

    FILE * arquivo;

    arquivo = fopen("entrada.txt" , "r");

    if(arquivo == NULL)
        exit(1);

    char c[1000];
    char *pt;

  
    for (int i =0; i<8; i++){

    fgets(c, 1000, arquivo);

/*        if(strcmp(c, "C")){
            cidade = CriaCidade();
            LiberaCidade(cidade);
       }
  */      
    printf("%s", c);

    pt = strtok(c," ");

    while ((pt)){
    printf( "%s\n",pt);
    pt = strtok(NULL," ");

    }
 
}

    fclose(arquivo);
    return 0;
}
