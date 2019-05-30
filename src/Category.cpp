#include "Category.h"

/**
* @brief Construtor padrao da classe Category
*/
Category::Category()
{
    name = "Nova Category";
}

/**
* @brief Construtor parametrizado da classe Category
* @param n Nome da categoria a ser inicializada
*/
Category::Category(std::string n)
{
    name = n;
}

/**
* @brief Construtor copia da classe Category
* @details Foi necessario adicionar um "const", ou geraria um erro.
* @param C O objeto Category original, do qual serao usadas as informacoes para criar o novo.
*/
Category::Category(const Category &C)
{
	name = C.name;
	items = C.items;
}

/**
* @brief Destrutor padrao da classe Category
*/
Category::~Category()
{
}

/**
* @brief Setter da classe Category
*/
void Category::setName(std::string n) { name = n; }

/**
* @brief Getters da classe Category
*/
std::string Category::getName() { return name; }
        int Category::getTotal() { return items.size(); }

/**
* @brief Adiciona um novo item a categoria
* @param i Objeto Item, previamente criado
*/
void Category::add_item(Item i) 
{
    items.push_back(i);
}

/**
* @brief Funcao auxiliar que busca a posicao do item em uma categoria
* @param n Contem o nome do item desejado
* @return A posicao onde o item se encontra, ou -1 no caso de nao existir
*/
int Category::search_item(std::string n)
{
	int count = 0;
	for (auto i: items)
	{
		if (i.getName() == n)
		{
			return count;
		} else count++;
	}
	return -1;
}

/**
* @brief Remove um item de uma categoria
* @param pos A posicao do item a ser removido
*/
void Category::del_item(int pos)
{
    std::list< Item >::iterator i;
    i = items.begin();
    advance(i, pos);
    items.erase(i);
}

/**
* @brief Imprime todos os itens existentes na categoria
*/
void Category::print_items()
{
    for (auto i: items) std::cout << i;
}

/**
* @brief Funcao auxiliar que retorna a lista de itens. Usada para atualizar a lista da classe em alguns casos.
* @return A lista de itens guardada no objeto Category.
*/
std::list<Item> Category::get_items()
{
	return items;
}

/**
* @brief Sobrecarga do operador de extracao para a classe.
*/
std::ostream& operator<< (std::ostream &o, Category const c)
{
	o << "~~~ " << c.name << " ~~~" << std::endl;
    for (auto i: c.items) o << i;
    return o;
}
