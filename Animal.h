#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;
#include "Funcionario.h"

class Animal
{
	protected:
		int m_id;
		string m_classe;
		string m_nome;
		string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		string m_dieta;
		Vet m_veterinario;
		Trat m_tratador;
		string m_nome_batismo;

	public:
		Animal();
		Animal(int id, string classe, string nome, string nomeC, char sexo, double tamanho,
			string dieta, Vet veterinario, Trat tratador, string nomeB);
		~Animal();
};

class Anfibio: public Animal
{
	protected:
		int m_total_mudas;
		int m_ultima_muda;      //precisa mudar para um tipo "data"
	public:
		Anfibio();
		~Anfibio();
};

class Reptil: public Animal
{
	protected:
		bool m_venenoso;
		string m_tipo_veneno;
	public:
		Reptil();
		~Reptil();
};

class Mamifero: public Animal
{
	protected:
		string m_cor_pele;
	public:
		Mamifero();
		~Mamifero();
};

class Ave: public Animal
{
	protected:
		double m_tamanho_bico_cm;
		double m_envergadura;
	public:
		Ave();
		~Ave();
};



class AnimalSilvestre
{
	protected:
		string m_autorizacao_ibama;
	public:
		AnimalSilvestre();
		~AnimalSilvestre();
};

class AnimalNativo: public AnimalSilvestre
{
	protected:
		string m_uf_origem;
		string m_autorizacao;
	public:
		AnimalNativo();
		~AnimalNativo();
};

class AnimalExotico: public AnimalSilvestre
{
	protected:
		string m_pais_origem;
	public:
		AnimalExotico();
		~AnimalExotico();	
};

class AnfibioNativo: public Anfibio, public AnimalNativo
{
	public:
		AnfibioNativo();
		~AnfibioNativo();
};

class AnfibioExotico: public Anfibio, public AnimalExotico
{
	public:
		AnfibioExotico();
		~AnfibioExotico();
};

class MamiferoNativo: public Mamifero, public AnimalNativo
{
	public:
		MamiferoNativo();
		~MamiferoNativo();
};

class MamiferoExotico: public Mamifero, public AnimalExotico
{
	public:
		MamiferoExotico();
		~MamiferoExotico();
};

class ReptilNativo: public Reptil, public AnimalNativo
{
	public:
		ReptilNativo();
		~ReptilNativo();
};

class ReptilExotico: public Reptil, public AnimalExotico
{
	public:
		ReptilExotico();
		~ReptilExotico();
};

class AveNativo: public Ave, public AnimalNativo
{
	public:
		AveNativo();
		~AveNativo();
};

class AveExotico: public Ave, public AnimalExotico
{
	public:
		AveExotico();
		~AveExotico();
};

#endif