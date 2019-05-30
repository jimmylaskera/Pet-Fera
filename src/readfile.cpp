#include "readfile.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
* @brief Funcao que atualiza as informacoes no programa ao inicio da execucao, lendo o arquivo "data.csv" caso exista.
* @param s Lista de estabelecimentos.
* @param M Lista de categorias do cardapio.
*/
void read_file(std::list<Seller> &s, Menu &M)
{
	ifstream data("data.csv");
	if (data)
	{
		while(!data.eof())
		{
			string tmp;
			getline(data, tmp, ';');

			if (tmp[0] == '\n') tmp.erase(tmp.begin());
			if (tmp == "S")
			{
				getline(data, tmp, ';');
				int id = stoi(tmp);
				getline(data, tmp, ';');
				string name = tmp;
				Seller sel(name, id);
				s.push_back(sel);
			}

			if (tmp == "C")
			{
				getline(data, tmp, ';');
				string c_name = tmp;
				Category cat(c_name);
				char next = data.peek();
				while(next == 'I')
				{
					getline(data, tmp, ';');
					getline(data, tmp, ';');
					string name = tmp;
					getline(data, tmp, ';');
					int price = stoi(tmp);
					Item i(name, price);
					cat.add_item(i);
					next = data.peek();
				}
				M.add_category(cat);
			}
		}
	}
}

/**
* @brief Funcao que atualiza o arquivo, ou cria um novo no caso de ser a primeira execucao do programa, com os dados fornecidos.
* @param s Lista de estabelecimentos.
* @param M Lista de categorias do cardapio.
*/
void save_file(std::list<Seller> s, Menu M)
{
	ofstream data("data.csv");

	for (auto i: s) data << "S;" << i.getId() << ";" << i.getName() << ";" << endl;

	for (auto i: M.categories)
	{
		data << "C;" << i.getName() << ";";
		list<Item> it = i.get_items();
		for (auto j: it) data << "I;" << j.getName() << ";" << j.getPrice() << ";";
		data << endl;
	}
}