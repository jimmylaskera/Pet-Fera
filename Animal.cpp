#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal() {}

Animal::~Animal () {}

Animal::Animal(int id, string classe, string nome, string nomeC, char sexo, double tamanho,
	string dieta, Vet veterinario, Trat tratador, string nomeB): m_id(id), m_classe(classe), 
	m_nome(nome), m_nome_cientifico(nomeC), m_sexo(sexo), m_tamanho(tamanho), m_dieta(dieta),
	m_veterinario(veterinario), m_tratador(tratador), m_nome_batismo(nomeB) {}

Anfibio::Anfibio () {}

Anfibio::~Anfibio () {}

Mamifero::Mamifero () {}

Mamifero::~Mamifero () {}

Reptil::Reptil () {}

Reptil::~Reptil () {}

Ave::Ave () {}

Ave::~Ave () {}

AnimalSilvestre::AnimalSilvestre () {}

AnimalSilvestre::~AnimalSilvestre () {}

AnimalNativo::AnimalNativo () {}

AnimalNativo::~AnimalNativo () {}

AnimalExotico::AnimalExotico () {}

AnimalExotico::~AnimalExotico () {}

AnfibioNativo::AnfibioNativo () {}

AnfibioNativo::~AnfibioNativo () {}

AnfibioExotico::AnfibioExotico () {}

AnfibioExotico::~AnfibioExotico () {}

MamiferoNativo::MamiferoNativo () {}

MamiferoNativo::~MamiferoNativo () {}

MamiferoExotico::MamiferoExotico () {}

MamiferoExotico::~MamiferoExotico () {}

ReptilNativo::ReptilNativo () {}

ReptilNativo::~ReptilNativo () {}

ReptilExotico::ReptilExotico () {}

ReptilExotico::~ReptilExotico () {}

AveNativo::AveNativo () {}

AveNativo::~AveNativo () {}

AveExotico::AveExotico () {}

AveExotico::~AveExotico () {}