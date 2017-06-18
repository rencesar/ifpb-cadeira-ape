#include <stdio.h>

int main() {
  int qtd_zika, qtd_dengue, qtd_chikungunya;
  int casa_zika, casa_dengue, casa_chikungunya;
  int residencias_visitadas, maior_qtd_chikungunya, maior_chik_bairro;
  int bairro, casa;

  // Inicializando Variaveis com 0
  residencias_visitadas = maior_qtd_chikungunya = maior_chik_bairro = 0;


  // Apresentação do programa
  puts("\t-- Programa de analise de dados dos casos do mosquito Aedes --");

  for(bairro=1; bairro<=20; bairro++){

    // Inicializa e zera variaveis de quantidade
    qtd_zika = qtd_dengue = qtd_chikungunya = 0;

    for(casa=1; casa<=100; casa++){
      printf("\n\t\tBairro %d - Casa %d\n", bairro, casa);
      // Entrada de dados
      printf("Digite a quantidade de casos de Zika: ");
      scanf("%d", &casa_zika);

      printf("Digite a quantidade de casos de Dengue: ");
      scanf("%d", &casa_dengue);

      printf("Digite a quantidade de casos de Chikungunya: ");
      scanf("%d", &casa_chikungunya);

      // Calculo por casa
      qtd_zika += casa_zika;
      qtd_dengue += casa_dengue;
      qtd_chikungunya += casa_chikungunya;
      residencias_visitadas++;
    }

    printf("\n\t\tO Bairro %d teve:\n", bairro);
    printf("%d casos de Zika, %d casos de Dengue, %d casos de Chikungunya\n",
           qtd_zika, qtd_dengue, qtd_chikungunya);

    if (maior_qtd_chikungunya <= qtd_chikungunya){
      maior_qtd_chikungunya = qtd_chikungunya;
      maior_chik_bairro = bairro;
    }
  }

  printf("\nBairro %d - com %d Casos de Chucungunya\n",
         maior_chik_bairro, maior_qtd_chikungunya);

  return 0;
}
