#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
    float total;
} Produto;

void lerprodutos(Produto est[], int n);
void calcularestoque(Produto est[], int n);
void imprimirestoque(Produto est[], int n);
int encontrarmaiorestoque(Produto est[], int n);
int encontrarmenorpreco(Produto est[], int n);

int main(){

    int a;

    printf("Quantos produtos serão cadastrados?");
    scanf("%d", &a);

    Produto estoque(a);

    lerprodutos(estoque, a);
    calcularestoque(estoque, a);
    imprimirestoque(estoque, a);

    int maiorestoque = encontrarmaiorestoque(estoque, a);
    int menorpreco = encontrarmenorpreco(estoque, a);

    printf("\nDestaques:\n");
    printf("Produto com maior valor em estoque: %s, com o valor de R$ %.2f\n", estoque(maiorestoque).nome, estoque(maiorestoque).total);
    printf("Produto mais barato em estoque: %s, com o valor de R$ %.2f\n", estoque(menorpreco).nome, estoque(menorpreco).total);

}

void lerprodutos (Produto est[], int n){
    for (int i=0; i < n; i++){
        Print("\nProduto: %d\n", i+1);
        Printf("Nome: ");
        scanf("%49s", est[i].nome);
        Printf("\nPreco: R$");
        scanf("%f", est[i].preco);
        Printf("Quantidade: ");
        scanf("%d", est[i].quantidade);
    }
}

void calcularestoque(Produto est[], int n){
    for (int i=0; i<n; i++){
        est[i].total = est[i].preco*est[i].quantidade;
    }
}

void imprimirestoque(Produto est[], int n){

    float totalgeral = 0;

    printf("\n%-20s %-10s %-10s %-20s\n", "NOME" "PREÇO" "QUANTIDADE" "ESTOQUE TOTAL");
    printf("\n");
    
    for (int i=0; i < i; i++){
 printf("%-20s R$%-8.2f %-10d R$%-10.2f\n", 
               est[i].nome, est[i].preco, est[i].quantidade, est[i].total);
        totalgeral += est[i].total;
    }
    printf("------------------------------------------------------\n");
    printf("TOTAL GERAL EM ESTOQUE: R$ %.2f\n", totalgeral);
}

int encontrarMaiorEstoque(Produto est[], int n) {
    int iMaior = 0;
    for (int i = 1; i < n; i++) {
        if (est[i].total > est[iMaior].total) {
            iMaior = i;
        }
    }
    return iMaior;
}

int encontrarMenorPreco(Produto est[], int n) {
    int iMenor = 0;
    for (int i = 1; i < n; i++) {
        if (est[i].preco < est[iMenor].preco) {
            iMenor = i;
        }
    }
    return iMenor;
}