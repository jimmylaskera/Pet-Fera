#include "Item.h"

/**
* @brief Construtor padrao da classe Item
*/
Item::Item()
{
    name = "Novo Item";
    price = 0;
}

/**
* @brief Construtor parametrizado da classe Item
* @param n Nome do item do cardapio
* @param p Preco do item do cardapio
*/
Item::Item(std::string n, int p)
{
    name = n;
    price = p;
}

/**
* @brief Destrutor padrao da classe Item
*/
Item::~Item()
{
}

/**
* @brief Setters da classe Item
*/
void Item::setName(std::string n) { name = n; }
void Item::setPrice(int p) { price = p; }

/**
* @brief Getters da classe Item
*/
std::string Item::getName() { return name; }
        int Item::getPrice() { return price; }

/**
* @brief Sobrecarga do operador de extracao para a classe.
*/
std::ostream& operator<< (std::ostream &o, Item const i)
{
	o << "~~~ DETALHES DO ITEM ~~~" << std::endl;
    o << "Nome: " << i.name << std::endl;
    o << "Preço: " << i.price << std::endl;
    return o;
}