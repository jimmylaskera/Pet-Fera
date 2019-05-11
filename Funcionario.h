#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

using namespace std;

class Funcionario
{
	protected:
		int m_id;
		string m_nome;
		string m_cpf;
		short m_idade;
		string m_tipo_sanguineo;
		char m_fator_rh;
		string m_especialidade;
public:
	Funcionario();
	~Funcionario();
};

class Vet: public Funcionario
{
	private:
		string m_crmv;
	public:
		Vet();
		~Vet();
};

class Trat: public Funcionario
{
	private:
		int m_nivel_seguranca;
	public:
		Trat();
		~Trat();
};

#endif