#include <stdio.h>
#include <stdlib.h>

#include "cidade.h"
#include "missil.h"
#include "defesa.h"

#define MAX_NOME 10 /**< Tamanho máximo do nome da cidade. */

#define QTD_DEF 10 /**< Quantidade máxima de defesas que uma cidade pode ter. */
#define QTD_MIS 10 /**< Quantidade máxima de mísseis que uma cidade pode ter. */

#define ENCERRAR 'F' /**< Caractere que indica o fim da entrada. */
#define MISSIL 'M' /**< Caractere que indica um míssil. */
#define DEFESA 'D' /**< Caractere que indica uma defesa. */


/**
 * @brief Estrutura que representa uma cidade.
 * 
 * A estrutura tCidade contem o nome da cidade, a quantidade de misseis e defesas, e as listas de misseis e defesas.
 * 
 */
struct cidade {

    float X;
    float Y;
    char nomeCidade[MAX_NOME];
    int quantMisseis;
    int quantDefesas;
    tMissil listaMisseis[QTD_MIS];
    tDefesa listaDefesas[QTD_DEF];

};
/**
 * @brief Cria uma nova cidade.
 * 
 * @return tCidade Ponteiro para a cidade criada.
 */

tCidade CriaCidade() {

    tCidade cidade = (tCidade)malloc(sizeof(struct cidade));

    LeEntrada(cidade);
    return cidade;
}


/**
 * @brief Le a entrada do usuario e preenche a cidade com as informacoes lidas.
 * 
 * @param cidade Ponteiro para a cidade que sera preenchida.
 * @return tCidade Ponteiro para a cidade preenchida.
 */
tCidade LeEntrada(tCidade cidade){

    if (cidade != NULL) {
        scanf("%f %f", &(cidade->X), &(cidade->Y));

    }

}

/**
 * @brief Imprime as informacoes da cidade.
 * 
 * @param cidade Ponteiro para a cidade que sera impressa.
 */
void ImprimeCidade(tCidade cidade){

    printf("%s\n", cidade->nomeCidade);

    printf("%.1f\n%.1f\n", cidade->X, cidade->Y);

    printf("%%");

}

/**
 * @brief Libera a memória alocada para a cidade.
 * 
 * @param cidade Ponteiro para a cidade que tera a memoria liberada.
 */
void LiberaCidade(tCidade cidade){
    if(cidade != NULL)
        free(cidade);

}

/**
 * @brief Processa os ataques na cidade.
 * 
 * @param cidade Ponteiro para a cidade que sera atacada.
 */
void ProcessaAtaques(tCidade cidade){

}

/**
 * @brief Imprime os dados finais da cidade.
 * 
 * @param cidade Ponteiro para a cidade que tera os dados impressos.
 */
void ImprimeDados(tCidade cidade){

}
