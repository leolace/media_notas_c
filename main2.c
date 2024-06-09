#include <stdio.h>

int pegar_quantidade_alunos() {
  int quantidade_alunos;
  
  printf("Digite a quantidade de alunos: ");
  scanf("%d", &quantidade_alunos);

  return quantidade_alunos;
}

int pegar_quantidade_notas() {
  int quantidade_notas;
  
  printf("Digite a quantidade de notas por aluno: ");
  scanf("%d", &quantidade_notas);

  return quantidade_notas;
}

float calcular_media_aluno(float notas[], int quantidade_notas) {
  float total = 0.0;

  for (int i = 0; i < quantidade_notas; i++) {
    total += notas[i];
  }

  return total / quantidade_notas;
}

void calcular_media_alunos(int quantidade_alunos, int quantidade_notas, float notas[][quantidade_notas], char nomes[][100]) {
  for (int i = 0; i < quantidade_alunos; i++) {
    float media = calcular_media_aluno(notas[i], quantidade_notas);
    printf("A media do aluno %s e %.2f\n", nomes[i], media);
  }

  return;
}

void calcular_media_turma(int quantidade_alunos, int quantidade_notas, float notas[][quantidade_notas]) {
  float total_turma;
  
  for (int i = 0; i < quantidade_alunos; i++) {
    float media = calcular_media_aluno(notas[i], quantidade_notas);
    total_turma = media;
  }

  float media_turma = total_turma / quantidade_alunos; 

  printf("A media da turma e %.2f\n", media_turma);
  return;
}

int main() {
  char opt = 'S';
  
  do {
    int quantidade_alunos = pegar_quantidade_alunos();
    int quantidade_notas = pegar_quantidade_notas();

    char nomes[quantidade_alunos][100];
    float  notas[quantidade_alunos][quantidade_notas];
    printf("=============================\n");

    for (int i = 0; i < quantidade_alunos; i++) {
      printf("Digite o nome do %d° aluno: ", i + 1);
      scanf(" %s", nomes[i]);

      for (int j = 0; j < quantidade_notas; j++) {
	printf("Digite a %d° nota do aluno %s: ", j + 1, nomes[i]);
	scanf(" %f", &notas[i][j]);
      }

      printf("=============================\n");
    }

    calcular_media_alunos(quantidade_alunos, quantidade_notas, notas, nomes);
    calcular_media_turma(quantidade_alunos, quantidade_notas, notas);
     
    printf("=========================\n");
    
    printf("Deseja usar o programa novamente? [S/N]: ");
    scanf(" %c", &opt);
  } while(opt == 'S' || opt == 's');
  return 0;
}
