#include <iostream>
class Pets
{
    public:
        std::string nome, raca;
        int idade, tipo;

        Pets();
        Pets **Inserir (Pets **, std::string, int, int, std::string);
        Pets **Excluir (Pets **, std::string);
        void Listar(Pets **,int);
        Pets *ant, *prox;
Pets* Pesquisar(Pets **vet, std::string nome);
    protected:

    private:
};
