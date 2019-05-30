#include "Seller.h"

/**
* @brief Construtor padrao da classe Seller
*/
Seller::Seller()
{
    name = "Novo Seller";
    id = 0;
}

/**
* @brief Construtor parametrizado da classe Seller
* @param n Nome do estabelecimento
* @param i Numero de identificacao do estabelecimento
*/
Seller::Seller(std::string n, int i)
{
    name = n;
    id = i;
}

/**
* @brief Destrutor padrao da classe Seller
*/
Seller::~Seller()
{
}

/**
* @brief Getter da classe Seller
* @return O nome do estabelecimento
*/
std::string Seller::getName() {
    return name;
}

/**
* @brief Getter da classe Seller
* @return O identificador do estabelecimento
*/
int Seller::getId() {
    return id;
}

/**
* @brief Setter da classe Seller
* @param n O novo nome do estabelecimento
*/
void Seller::setName(std::string n) {
    name = n;
}

/**
* @brief Setter da classe Seller
* @param i O novo identificador do estabelecimento
*/
void Seller::setId(int i) {
    id = i;
}