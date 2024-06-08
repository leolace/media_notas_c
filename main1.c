#include <stdio.h>

int main() {
  char opt = 'S';
    
  do {
  
    char nome1[100];
    float nota1_1;
    float nota1_2;
  
    char nome2[100];
    float nota2_1;
    float nota2_2;
  
    char nome3[100];
    float nota3_1;
    float nota3_2;

    printf("Digite o nome do aluno 1: ");
    scanf("%s", &nome1);

    printf("Digite a nota 1 do aluno %s: ", nome1);
    scanf("%f", &nota1_1);

    printf("Digite a nota 2 do aluno %s: ", nome1);
    scanf("%f", &nota1_2);

    printf("=========================\n");

    printf("Digite o nome do aluno 2: ");
    scanf("%s", &nome2);

    printf("Digite a nota 1 do aluno %s: ", nome2);
    scanf("%f", &nota2_1);

    printf("Digite a nota 2 do aluno %s: ", nome2);
    scanf("%f", &nota2_2);

    printf("=========================\n");

    printf("Digite o nome do aluno 3: ");
    scanf("%s", &nome3);

    printf("Digite a nota 1 do aluno %s: ", nome3);
    scanf("%f", &nota3_1);

    printf("Digite a nota 2 do aluno %s: ", nome3);
    scanf("%f", &nota3_2);

    printf("=========================\n");

    float media1 = (nota1_1 + nota1_2) / 2;
    float media2 = (nota2_1 + nota2_2) / 2;
    float media3 = (nota3_1 + nota3_2) / 2;

    printf("Media do aluno %s: %.2f\n", nome1, media1);
    printf("Media do aluno %s: %.2f\n", nome3, media2);
    printf("Media do aluno %s: %.2f\n", nome3, media3);

    float media_turma = (media1 + media2 + media3) / 3;

    printf("Media da turma: %.2f\n", media_turma);

    printf("=========================\n");

    printf("Deseja usar o programa novamente? [S/N]: ");
    scanf(" %c", &opt);
    
  } while(opt == 'S' || opt == 's');
  

  return 0;
}
