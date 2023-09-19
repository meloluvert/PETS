#include "Pets.h"

Pets::Pets()
{
    //ctor
}

Pets ** Pets::Inserir (Pets **vet, std::string nome, int tipo, int idade, std::string raca){
    Pets *novo = new Pets();
    novo->nome = nome;
    novo->idade = idade;
    novo->tipo = tipo;
    novo->raca = raca;
    if(vet[0] == NULL){
        vet[0] = novo;
        vet[1] = novo;
        vet[0]->ant = NULL;
        vet[1]->prox = NULL;
    }else{
        Pets *atual = vet[0];
        if(novo->tipo ==1){
            while((atual!=NULL) && (novo->nome > atual->nome) && (novo->tipo == atual->tipo)){
                atual = atual->prox;
            }

        }else{
            while((atual!=NULL) && (novo->tipo != atual->tipo)){
                atual = atual->prox;
            }

            while((atual!=NULL) && (novo->nome > atual->nome) && (novo->tipo == atual->tipo)){
                atual = atual->prox;
            }
        }

        if(atual == vet[0]){
            novo->prox = atual;
            atual->ant = novo;
            vet[0] = novo;
            vet[0]->ant = NULL;
        }else if(atual == NULL){
            vet[1]->prox = novo;
            novo->ant = vet[1];
            vet[1] = novo;
            vet[1]->prox = NULL;
        }else{
            atual->ant->prox = novo;
            novo->ant = atual->ant;
            novo->prox = atual;
            atual->ant = novo;

        }

    }
    return vet;

}

Pets* Pets::Pesquisar(Pets **vet, std::string nome){
Pets *atual = vet[0];
    if(vet[0]==NULL){
    }else{
     while((atual!=NULL) && (nome != atual->nome)){
        atual = atual->prox;
     }
    return atual;

    }
}
void Pets::Listar(Pets **vet, int i){
    Pets *aux =  vet[0];
    if(i==0){
        while(aux!=NULL){
            std::cout<<"\nNome:" <<aux->nome;
            std::cout<< "\nIdade:" <<aux->idade;
            std::cout<<"\nTipo:"<<(aux->tipo == 1 ? "Cachorro" : "Gato");
            std::cout<<"\n===========\n";
            aux = aux->prox;

        }
    }else if(i==1){
        while((aux!=NULL) && ( aux->tipo == 1)){
                std::cout<<"\nNome:" <<aux->nome;
            std::cout<< "\nIdade:" <<aux->idade;
            std::cout<<"\nTipo:"<<(aux->tipo == 1 ? "Cachorro" : "Gato");
            std::cout<<"\n===========\n";
            aux = aux->prox;
        }
    }else{
    aux = vet[1];
        while((aux!=NULL) && ( aux->tipo == 2)){
         std::cout<<"\nNome:" <<aux->nome;
            std::cout<< "\nIdade:" <<aux->idade;
            std::cout<<"\nTipo:"<<(aux->tipo == 1 ? "Cachorro" : "Gato");
            std::cout<<"\n===========\n";
            aux = aux->ant;
        }
    }

}
