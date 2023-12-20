#ifndef _missil
#define _missil

#define MAX_TAM 100 /**< Tamanho maximo do nome do missil. */

/**
 * @brief Estrutura que representa um missil.
 * 
 * A estrutura tMissil contem o nome do missil, as coordenadas x e y, e o poder de ataque.
 * 
 */
typedef struct missil * tMissil;

/**
 * @brief Le a entrada do usuario e cria um novo missil.
 * 
 * @return tMissil Ponteiro para o missil criado.
 */
tMissil LeMissil();

/**
 * @brief Imprime as informacoes do missil.
 * 
 * @param missil Ponteiro para o missil que sera impresso.
 */
void ImprimeMissil(tMissil missil);

/**
 * @brief Libera a memoria alocada para o missil.
 * 
 * @param missil Ponteiro para o missil que tera a memoria liberada.
 */
void LiberaMissil(tMissil missil);

/**
 * @brief Obtem a coordenada y do missil.
 * 
 * @param missil Ponteiro para o missil que tera a coordenada y obtida.
 * @return float Coordenada y do missil.
 */
float GetMissilY(tMissil missil);

/**
 * @brief Obtem a coordenada x do missil.
 * 
 * @param missil Ponteiro para o missil que tera a coordenada x obtida.
 * @return float Coordenada x do missil.
 */
float GetMissilX(tMissil missil);

/**
 * @brief Obtem o poder de ataque do missil.
 * 
 * @param missil Ponteiro para o missil que tera o poder de ataque obtido.
 * @return float Poder de ataque do missil.
 */
float GetMissilPoder(tMissil missil);

/**
 * @brief Reduz o poder de ataque do missil.
 * 
 * @param missil Ponteiro para o missil que tera o poder de ataque reduzido.
 * @param valor Valor a ser subtraido do poder de ataque do missil.
 */
void ReduzPoder(tMissil missil, float valor);

#endif