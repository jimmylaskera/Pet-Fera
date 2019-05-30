/**
* @file Category.h
* @brief Classe que guarda as categorias de cardapios.
* @author Gerson David da Silva Santos
* @date 30/05/2019
*/

#ifndef _CATEGORY_H_
#define _CATEGORY_H_

#include <iostream>
#include <string>
#include <list>

#include "Item.h"

class Category 
{
	private:
		std::string name; ///< Nome da Categoria
		std::list< Item > items;

	public:
		Category();
		Category(std::string n);
		Category(const Category &C);
		~Category();

		// Getters & Setters
		std::string getName();
		int getTotal();
		void setName(std::string n);

		// Operações
		void add_item(Item i);
		int search_item(std::string n);
		void del_item(int pos);
		void print_items();
		std::list<Item> get_items();

		friend std::ostream& operator<< (std::ostream &o, Category const c);
};

#endif // _CATEGORY_H_