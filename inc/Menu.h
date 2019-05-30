/**
* @file Menu.h
* @brief A ideia inicial era fazer dessa classe um link entre um estabelecimento e as categorias que o mesmo dispoe. Mas nunca foi terminada.
* @author Gerson David da Silva Santos
* @date 30/05/2019
*/

#ifndef _MENU_H_
#define _MENU_H_

#include <iostream>
#include <string>
#include <list>

#include "Category.h"
#include "Item.h"

class Menu
{
	public:
		std::list< Category > categories;

		// Contrutores e destrutor
		Menu();
		~Menu();

		// Operações
		void add_category(Category C);
		void del_category(int pos);
};

#endif // _MENU_H_