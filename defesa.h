#ifndef _defesa
#define _defesa

#define QUADRADO 'Q' /**< Caractere que indica uma defesa do tipo quadrado. */
#define CIRCULO 'C' /**< Caractere que indica uma defesa do tipo circulo. */
#define MAX_TAM 100 /**< Tamanho maximo do nome da defesa. */

/**
 * @brief Estrutura que representa uma defesa.
 * 
 * A estrutura tDefesa contem o tipo da defesa, as coordenadas do centro, o tamanho e o poder de defesa.
 * 
 */
typedef struct defesa * tDefesa;

/**
 * @brief Le a entrada do usuario e cria uma nova defesa.
 * 
 * @return tDefesa Ponteiro para a defesa criada.
 */
tDefesa LeDefesa();

/**
 * @brief Imprime as informacoes da defesa.
 * 
 * @param defesa Ponteiro para a defesa que sera impressa.
 */
void ImprimeDefesa(tDefesa defesa);

/**
 * @brief Libera a memoria alocada para a defesa.
 * 
 * @param defesa Ponteiro para a defesa que tera a memoria liberada.
 */
void LiberaDefesa(tDefesa defesa);

/**
 * @brief Verifica se um ponto esta dentro da area de defesa.
 * 
 * @param defesa Ponteiro para a defesa que sera verificada.
 * @param x Coordenada x do ponto.
 * @param y Coordenada y do ponto.
 * @return int 1 se o ponto esta dentro da area de defesa, 0 caso contrario.
 */
int VerificaSeDentroArea(tDefesa defesa, float x, float y);

/**
 * @brief Usa a defesa, diminuindo seu poder de defesa.
 * 
 * @param defesa Ponteiro para a defesa que sera usada.
 */
void UsaDefesa(tDefesa defesa);

/**
 * @brief Obtem o poder de defesa da defesa.
 * 
 * @param defesa Ponteiro para a defesa que tera o poder de defesa obtido.
 * @return float Poder de defesa da defesa.
 */
float GetDefesaPoder(tDefesa defesa);

/**
 * @brief Verifica se a defesa pode defender.
 * 
 * @param defesa Ponteiro para a defesa que sera verificada.
 * @return int 1 se a defesa pode defender, 0 caso contrario.
 */
int PodeDefender(tDefesa defesa);

#endif