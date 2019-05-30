/**
* @file Seller.h
* @brief Classe que representa as informacoes de um estabelecimento.
* @author Gerson David da Silva Santos
* @date 30/05/2019
*/

#ifndef _SELLER_H_
#define _SELLER_H_

#include <string>

class Seller
{
	private:
		int id; ///< Identificador do Seller
		std::string name; ///< name do Seller
		
	public:
		// Contrutores e destrutor
		Seller();
		Seller(std::string n, int i);
		~Seller();

		// Getters & Setters
		int getId();
		std::string getName();

		void setId(int i);
		void setName(std::string n);
};

#endif // _SELLER_H_