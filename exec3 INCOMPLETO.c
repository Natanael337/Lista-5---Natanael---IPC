#include <stdio.h>

int main() {

    int opcao;
    float saldo = 1000.0, deposito;
    
    do {
        printf("\nMenu: ");
        printf("\n1 - Consultar Saldo.");
        printf("\n2 - Depositar.");
        printf("\n0- Sair\n");
        
        scanf("%d", &opcao);
        
         if(opcao == 1){
            printf("Seu saldo é de R$%.3f", saldo);
        }
        else if(opcao == 2) {
            printf("Digite o valor do depósito: ");
            scanf("%f", &deposito);
            saldo = saldo + deposito;
        }
        else{
            printf("Opção Inválida!");
        }
   }
   
   while(opcao = 0);
    printf("\nPrograma Encerrado.");
    return 0;
}
