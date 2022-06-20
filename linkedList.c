#include<stdio.h>
#include<stdlib.h>

//definimos nuestra node
typedef struct node
{
    int number;
    struct node *next;
}
node;

node *addNode(node *nodes, int element){
    node *newNode = malloc(sizeof(node));
    if(newNode == NULL){
        printf("Error al reservar memoria");}
    else{
        newNode->number = element;
        newNode->next = NULL;
        if(nodes == NULL){
            nodes = newNode;
        }
        else{
            node *tmp = nodes;
            while(tmp->next != NULL){
                tmp = tmp->next;
            }
            tmp->next = newNode;
        }
    }
    return nodes;
}
int main(){
    node *list=NULL;

    //agregamos un elemento a la lista
    node *n = malloc(sizeof(node)); //asignando memoria para node
    if(n==NULL){
        return 1;
    }
    n->number=45;
    n->next=NULL;

    node *n_2 = malloc(sizeof(node)); //asignando memoria para node
    if(n_2==NULL){
        return 1;
    }
    n_2->number=15;
    n_2->next=NULL;

    //actualizar el punto next del primer elemento
    n->next=n_2;


    //actualizamos la lista
    list=n;

    // imprimir los elementos de la lista
    for (node *tmp = list;tmp!=NULL;tmp=tmp->next)
    {
        printf("%i\n",tmp->number);


    }

    // función (free) BUENA PR´ACTICA EN PROGRAMACI´ON EN "C"
    while(list!=NULL){
        node *tmp=list->next;
        free(list);
        list=tmp;
    }

    return 0;

}