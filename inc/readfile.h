/**
* @file readfile.h
* @brief Funcoes de manipulacao de arquivo do programa.
* @author Gerson David da Silva Santos
* @date 30/05/2019
*/

#ifndef READFILE_H
#define READFILE_H

#include "Item.h"
#include "Category.h"
#include "Seller.h"
#include "Menu.h"

void read_file(std::list<Seller> &s, Menu &M);  //adiciona as informações do arquivo aos vetores do programa
void save_file(std::list<Seller> s, Menu M);    //salva as informações dos vetores no arquivo

#endif