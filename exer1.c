/*#include <stdio.h>

  int validaQuantidade();
  float calculaSalario(int quantidade);
  void mostraFinal(char nome[], float salario);

  int main() {
    char nome[50];
    int quantidade;
    float salario;

    while (1) { 
      printf("Digite o nome do funcionário (ou 'sair' para encerrar): ");  
      scanf("%s", nome);

      if (strcmp(nome, "sair") == 0) {  
        break;
     }
      quantidade = validaQuantidade();
      salario = calculaSalario(quantidade);
            mostraFinal(nome, salario);
    }  
    return 0;
  }

  int validaQuantidade() {  
    int quantidade;

    while (1) {  
      printf("Digite a quantidade de peças fabricadas: ");
      scanf("%d", &quantidade);

      if (quantidade >= 0) {  
        return quantidade;
      } else {  
        printf("A quantidade não pode ser negativa. Tente novamente.\n");
        }
      }
    }
  float calculaSalario(int quantidade) {  
    float salario_base = 600.0;
    float adicional = 0.0;

    if (quantidade > 50 && quantidade <= 80) {  
      adicional = 0.50 * (quantidade - 50);
    } else if (quantidade > 80) {  
      adicional = 0.50 * (80 - 50) + 0.75 * (quantidade - 80);

      return salario_base + adicional;
    }  
    void mostraFinal(char nome[], float salario) {
        printf("O funcionário %s receberá um salário de R$ %.2f.\n", nome, salario);
    }
*/
    