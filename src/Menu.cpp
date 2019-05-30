#include "Menu.h"

/**
* @brief Construtor padrao da classe Menu
*/
Menu::Menu()
{
}

/**
* @brief Destrutor padrao da classe Item
*/
Menu::~Menu()
{
}

/**
* @brief Adiciona uma nova categoria a lista do programa.
* @param C A categoria a ser adicionada, criada previamente.
*/
void Menu::add_category(Category C)
{
    categories.push_back(C);
}

/**
* @brief Remove uma categoria da lista do programa.
* @param pos A posicao da categoria a ser removida.
*/
void Menu::del_category(int pos)
{
    std::list< Category >::iterator i;
    i = categories.begin();
    advance(i, pos);
    categories.erase(i);
}