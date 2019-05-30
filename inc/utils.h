/**
* @file utils.h
* @brief Funcoes utilitarias do programa.
* @author Gerson David da Silva Santos
* @date 30/05/2019
*/

#include <iostream>
#include <iterator>
#include <list>

#include "Item.h"
#include "Category.h"
#include "Menu.h"
#include "Seller.h"

//Função responsavel por exibir uma interdace simples de cabeçalho
void header(std::string title);

//Função responsavel por exibir uma interface de menu de opções
void main_menu();

void options_loop(std::list< Seller > &V, Menu &M);

//Função de cadastro de novos estabelecimentos
void new_seller(std::list< Seller > &V);

void remove_seller(std::list< Seller > &V);

//Função responsável por imprimir na tela os estabelecimentos cadastrados
void print_sellers(std::list< Seller > &V);

// FUNÇÕES DE ITENS
void item_create(std::list< Category > &C);
void item_remove(std::list< Category > &C);
// void item_print(Item i);

// FUNÇÕES DE CATEGORIAS
void category_create(Menu &M);
void category_remove(Menu &M);
void category_print(std::list< Category > &V);
// void category_print(std::list< Category > &V, unsigned int target);

void print_category_items(std::list< Category > C);
// void print_categoty(std::vector< Category > &V);
// void print_menu();
