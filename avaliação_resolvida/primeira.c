#include <stdio.h>

int main() {
  // Declarando Variaveis
  float peso, altura, imc;

  // Apresentação do programa
  puts("\t-- Programa para calcular IMC e descobrir estado nutricional --\n");
  puts("Digite os valores separando as casas decimais por ' . ', PONTO");

  // Entrada de Dados
  printf("Digite seu peso em Kg: ");
  scanf("%f", &peso);

  printf("Digite sua altura em metros: ");
  scanf("%f", &altura);

  // Calculo
  imc = peso / (altura * altura);

  // Exibição de resultado
  if(imc <= 16){
    printf("Seu IMC (%.2f) está abaixo de 16, logo você está desnutrido", imc);
  } else{
    if(imc <= 18.4){
      printf("Seu IMC (%.2f) está entre 16.1 e 18.4,"
             " logo você está magro", imc);
    } else{
      if(imc <= 25){
        printf("Seu IMC (%.2f) está entre 18.5 e 25,"
               " logo você está normal", imc);
      } else{
        if(imc <= 29.9){
          printf("Seu IMC (%.2f) está entre 25.1 e 29.9,"
                 " logo você está com sobrepeso", imc);
        } else{
          if(imc <= 39.9){
            printf("Seu IMC (%.2f) está entre 30 e 39.9,"
                   " logo você está obeso", imc);
          } else{
            printf("Seu IMC (%.2f) está acima de 40, logo você"
                   " está em estado de obesidade mórbida", imc);
          }
        }
      }
    }
  }

  printf("\n\n FIM DO PROGRAMA \n");

  return 0;
}
