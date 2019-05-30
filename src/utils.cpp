#include "utils.h"

/**
* @brief Função auxiliar que gera um título para funções que printam algo na tela, como o menu, ou uma lista.
* @param title O que a função quer usar como título.
*/
void header(std::string title)
{
    std::cout << "\n~~~ " << title << " ~~~" << std::endl;
}

/**
* @brief Função auxiliar para pausar a execução na exibição de alguma lista. Resume a execução quando se digita 0.
*/
void pause()
{
    int x = 1;
    do
    {
      std::cout << "Digite 0 para voltar" << std::endl;
      std::cin >> x;
    } while ( x != 0);
}

/**
* @brief Imprime as opções do menu principal do programa.
*/
void main_menu() 
{
    header("MENU DE ESCOLHAS");
    std::cout << "1. Adicionar Seller" << std::endl;
    std::cout << "2. Remover Seller" << std::endl;
    std::cout << "3. Visualizar Sellers" << std::endl;
    std::cout << "4. Adicionar Categoria" << std::endl;
    std::cout << "5. Remover Categoria" << std::endl;
    std::cout << "6. Visualizar Categorias" << std::endl;
    std::cout << "7. Adicionar Item" << std::endl;
    std::cout << "8. Remover Item" << std::endl;
    std::cout << "9. Visualizar Itens" << std::endl;
    std::cout << "0. Encerrar Programa" << std::endl;
}

/**
* @brief Controle das ações disponíveis no programa.
* @param V Lista de estabelecimentos.
* @param M Lista de categorias de cardápios.
*/
void options_loop(std::list< Seller > &V, Menu &M)
{
    unsigned int opt;

    do {
        main_menu();
        std::cin >> opt;

        switch (opt)
        {
            case 0: break;
            case 1: new_seller(V); break;
            case 2: remove_seller(V); break;
            case 3: print_sellers(V); break;
            case 4: category_create(M); break;
            case 5: category_remove(M); break;
            case 6: category_print(M.categories); break;
            case 7: item_create(M.categories); break;
            case 8: item_remove(M.categories); break;
            case 9: print_category_items(M.categories); break;
            default:
                std::cout << "Você escolheu uma opção inválida!" << std::endl;
                break;
        }
    } while( opt != 0 );
}

/**
* @brief Adiciona um novo estabelecimento à lista do controle.
* @param V Lista de estabelecimentos.
*/
void new_seller(std::list< Seller > &V)
{
    header("NOVO ESTABELECIMENTO");

    std::string name;
    int id;
    
    std::cout << "Nome do Estabelecimento: "; std::cin >> name;
    std::cout << "ID do Estabelecimento: "; std::cin >> id;

    Seller s(name, id);
    V.push_back(s);
}

/**
* @brief Remove um estabelecimento da lista do controle.
* @param V Lista de estabelecimentos.
*/
void remove_seller(std::list< Seller > &V)
{
    print_sellers(V);
    int idx = 0;
    unsigned int count = 0;
    std::list< Seller >::iterator it = V.begin();
    std::cout << "Insira o ID: "; std::cin >> idx;
    for (auto i: V)
    {
        if (i.getId() == idx) break;
        count++;
    }
    advance(it, count);
    V.erase(it);
}

/**
* @brief Imprime todos os estabelecimentos disponíveis no momento.
* @param V Lista de estabelecimentos.
*/
void print_sellers(std::list< Seller > &V)
{
    header("LISTA DE SELLERS");
    for(std::list< Seller >::iterator i = V.begin(); i != V.end(); ++i)
        std::cout << i->getId() << ". " << i->getName() << std::endl;
}

/**
* @brief Adiciona uma nova categoria à lista do controle.
* @param M Lista de categorias de cardápios.
*/
void category_create(Menu &M)
{
    header("NOVA CATEGORIA");
    std::string name;
    std::cout << "Nome: "; std::cin >> name;
    Category c(name);
    M.add_category(c);
}

/**
* @brief Remove uma categoria da lista do controle.
* @param M Lista de categorias de cardápios.
*/
void category_remove(Menu &M)
{
    int id;
    std::cout << "ID da Categoria: "; std::cin >> id;
    M.del_category(id-1);
}

/**
* @brief Imprime todas as categorias disponíveis, sem exibir os seus itens.
* @param C Lista de categorias de cardápios.
*/
void category_print(std::list< Category > &C)
{
    header("CATEGORIAS");
    int j = 1;
    for( std::list< Category >::iterator i = C.begin(); i != C.end(); ++i, ++j )
        std::cout << j << ". " << i->getName() << std::endl;
}

/**
* @brief Adiciona um novo item a uma categoria de cardápio.
* @param C Lista de categorias de cardápios.
*/
void item_create(std::list< Category > &C)
{
    header("NOVO ITEM");
    category_print(C);
    std::string id;
    std::cout << "Para a categoria: "; std::cin >> id;
    std::string n;
    std::cout << "Nome: "; std::cin >> n;
    int p;
    std::cout << "Preço: "; std::cin >> p;
    Item i(n, p);

    for (auto it = C.begin(); it != C.end(); it++)
    {
        Category cat(*it);
        if(cat.getName() == id)
        {
            cat.add_item(i);
            C.erase(it);
            it--;
            C.insert(it, cat);
            break;
        }
    }
}

/**
* @brief Remove um item de uma categoria de cardápio.
* @param C Lista de categorias de cardápios.
*/
void item_remove(std::list< Category > &C)
{
    category_print(C);
    std::string id;
    std::cout << "Para a categoria: "; std::cin >> id;
    std::string n;
    std::cout << "Nome: "; std::cin >> n;

    for (auto it = C.begin(); it != C.end(); it++)
    {
        Category cat(*it);
        if(cat.getName() == id)
        {
            int pos = cat.search_item(n);
            if (pos == -1) break;
            cat.del_item(pos);
            C.erase(it);
            it--;
            C.insert(it, cat);
            break;
        }
    }
}

/**
* @brief Exibe todas as categorias com seus respectivos itens.
* @param C Lista de categorias de cardápios.
*/
void print_category_items(std::list< Category > C)         // corrigir "item_create" primeiro
{
    for (auto i: C)
    {
        header(i.getName());
        i.print_items();
        pause();
    }
}