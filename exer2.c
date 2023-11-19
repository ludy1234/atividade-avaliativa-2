#include <stdio.h>
#include <stdlib.h>

  char validaSexo() {;
    char sexo;
    printf("Digite o sexo do funcionário (M/F): ");
    scanf("%c", &sexo);
    while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {  
      printf("Sexo inválido. Digite novamente (M/F): ");
      scanf(" %c", &sexo);
  } 
    return sexo;
  }

  float validaSalario() {  
    float salario;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    while (salario <= 0) {
      printf("Salário inválido.Informe um valor maior que R$ 1,00: ");
      scanf("%f", &salario);
    }  
    return salario;
  }  

  char* classificaSalario(float salario) { 
    if (salario > 1400.00) {  
      return "Acima do salário mínimo";
    } else if (salario == 1400.00) {  
      return "Igual ao salário mínimo";
    } else {  
      return "Abaixo do salário mínimo";
    }  
      }

    void mostraClassificacao(char sexo, float salario, char* classificacao) { 
      printf("\nResultado:\n");
      printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
      printf("Salário: R$%.2f\n", salario);
      printf("Classificação em relação ao salário mínimo: %s\n", classificacao);
      }

  int main() {  
    int numAssalariados, abaixoSalarioMinimo = 0, acimaSalarioMinimo = 0;

    printf("Informe o número de assalariados a serem cadastrados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; ++i){
      printf("\nDados do assalariado %d:\n", i + 1);
      
      char sexo = validaSexo();
      float salario = validaSalario();

      char* classificacao = classificaSalario(salario);
            mostraClassificacao(sexo, salario, classificacao);

      if (salario < 1400.00) {  
        abaixoSalarioMinimo++;
      
    } else if (salario > 1400.00) {  
      acimaSalarioMinimo++;
        }
      }

    printf("\nTotal de assalariados abaixo do salário mínimo: %d\n", abaixoSalarioMinimo);
    printf("Total de assalariados acima do salário mínimo: %d\n", acimaSalarioMinimo);

    return 0;
    }