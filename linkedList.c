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
    int listSize;
    // test listZise = 20;
    listSize = 20;
    // para la prueba se asigna a cada nodo el  valor a partir de 1
    for(int i = 1; i <= listSize; i++){
        list = addNode(list,i);
    }
    // creamos bucle para recorrer la lista de nodos
    for (node *tmp = list; tmp != NULL; tmp->next){
        printf("%i\t",tmp->number);
    }

    // 
    // función (free) BUENA PRACTICA EN PROGRAMACI´ON EN "C"
    while(list!=NULL){
        node *tmp=list->next;
        free(list);
        list=tmp;
    }

    return 0;

}