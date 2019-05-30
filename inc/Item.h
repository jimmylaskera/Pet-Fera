/**
* @file Item.h
* @brief Classe dos itens do cardapio.
* @author Gerson David da Silva Santos
* @date 30/05/2019
*/

#ifndef _ITEM_H_
#define _ITEM_H_

#include <iostream>
#include <string>

class Item
{
    private:
        std::string name; //nome do item
        int price; // preço do item

    public:
        //Construtores e destrutores
        Item();
        Item(std::string n, int p);
        ~Item();

        // Getters & Setters
        std::string getName(); //Retorno do nome do Item
        int getPrice(); //Retorno do preço do Item

        void setName(std::string n); //Esse método permite que o usuário especifique o nome do item
        void setPrice(int p); //Esse método permite que o usuário especifique o preço do item

        friend std::ostream& operator<< (std::ostream &o, Item const i);
};

#endif  //_ITEM_H_