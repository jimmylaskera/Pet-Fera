/**
* @file main.cpp
* @brief O programa mantem um controle de estabelecimentos, cardapios e produtos. O conteudo e salvo para futuras execucoes.
* @author Gerson David da Silva Santos
* @date 30/05/2019
*/

#include <iostream>
#include "Seller.h"
#include "Category.h"
#include "Item.h"
#include "Menu.h"
#include "utils.h"
#include "readfile.h"

/**
* @brief Funcao principal
* @details O programa inicializa as listas de informacoes, entao se houver um arquivo de uma execucao passada, as informacoes contidas no arquivo
* e carregadas para as listas. Entao o menu principal e lancado. Antes de o programa ser encerrado, o arquivo e atualizado.
* @param argc Nao e utilizado no momento.
* @param argv Nao e utilizado no momento.
*/
int main(int argc, char const *argv[])
{
    std::list<Seller> s;
    Menu M;
    read_file(s, M);

    options_loop(s, M);

    save_file(s, M);
    
    return 0;
}