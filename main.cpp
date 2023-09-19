#include "Pets.h"

using namespace std;

int main()
{
    string nome, raca;
    int op;
    int idade, tipo;
    Pets **vet;
    Pets aux;
    vet = new Pets *[2];
    vet[0] == NULL;
    vet[1] == NULL;
    cout<<"1. Cadastrar Pet";
    cout<<"2. Excluir Pet";

    cout<<"3. Listagem Geral";
    cout<<"4. Listagem de cães";
    cout<<"5. Listagem de gatos";
     cout<<"6. Pesquisar";

    switch (op)
    {

    case 1:
        cout << "nome:";
        cin >> nome;
        cout << "raça:\n1.Cachorro\n2.Gato";
        cin >> raca;
        cout << "tipo:";
        cin >> tipo;
        cout << "idade:";
        cin >> idade;
        vet = aux.Inserir(vet, nome, tipo, idade, raca);
        break;
    case 2:
        break;
    case 3:
        aux.Listar(vet, 0);
        break;
    case 4:
        cout<<"cães\n";
        aux.Listar(vet, 1);
        break;
    case 5:
    cout<<"gatos\n";
        aux.Listar(vet,2;
        break;
    case 6:
    case 7:return;
    cout<<"nome a ser pesquisado:";
    cin>>nome;
    aux.Pesquisar(vet, "mafalda");
    }

    return 0;
}
