#include <stdio.h>
#include <stdlib.h>

#include "cidade.h"
#include "missil.h"
#include "defesa.h"

#define MAX_TAM 100 /**< Tamanho maximo do nome do missil. */

/**
 * @brief Estrutura que representa um missil.
 * 
 * A estrutura tMissil contem o nome do missil, as coordenadas x e y, e o poder de ataque.
 * 
 */
struct missil {

    char nomeMissil[MAX_TAM];
    float X;
    float Y;
    float poderAtaque;

};

/**
 * @brief Le a entrada do usuario e cria um novo missil.
 * 
 * @return tMissil Ponteiro para o missil criado.
 */
tMissil LeMissil(){
    tMissil novoMissil = (tMissil)malloc(sizeof(struct missil));

    scanf("%s", novoMissil->nomeMissil);

    scanf("%f %f", &novoMissil->X, &novoMissil->Y);

    scanf("%f", &novoMissil->poderAtaque);

    return novoMissil;
}

/**
 * @brief Imprime as informacoes do missil.
 * 
 * @param missil Ponteiro para o missil que sera impresso.
 */
void ImprimeMissil(tMissil missil){

    printf("%s\n", missil->nomeMissil);
    printf("%.2f\n", missil->X);
    printf("%.2f\n", missil->Y);
    printf("%.2f\n", missil->poderAtaque);

}

/**
 * @brief Libera a memoria alocada para o missil.
 * 
 * @param missil Ponteiro para o missil que tera a memoria liberada.
 */
void LiberaMissil(tMissil missil){

    if(missil != NULL)
        free(missil);

}

/**
 * @brief Obtem a coordenada y do missil.
 * 
 * @param missil Ponteiro para o missil que tera a coordenada y obtida.
 * @return float Coordenada y do missil.
 */
float GetMissilY(tMissil missil){

    return missil->Y;
}

/**
 * @brief Obtem a coordenada x do missil.
 * 
 * @param missil Ponteiro para o missil que tera a coordenada x obtida.
 * @return float Coordenada x do missil.
 */
float GetMissilX(tMissil missil){

    return missil->X;
}

/**
 * @brief Obtem o poder de ataque do missil.
 * 
 * @param missil Ponteiro para o missil que tera o poder de ataque obtido.
 * @return float Poder de ataque do missil.
 */
float GetMissilPoder(tMissil missil){

    return missil->poderAtaque;

}

/**
 * @brief Reduz o poder de ataque do missil.
 * 
 * @param missil Ponteiro para o missil que tera o poder de ataque reduzido.
 * @param valor Valor a ser subtraido do poder de ataque do missil.
 */
void ReduzPoder(tMissil missil, float valor){

    missil->poderAtaque = missil->poderAtaque - valor;

}