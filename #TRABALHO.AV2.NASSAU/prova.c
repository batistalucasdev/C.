/*
fazer as questoes com switch case

#include <stdio.h>

int questoes(){
	int questao = 0;
	do{
		printf("Qual questao voce deseja responder?\n");
		printf("1 - Questao 17\n");
		printf("2 - Questao 20\n");
		printf("3 - Questao 22\n");
		printf("4 - Questao 30\n");
        printf("5 - Questao 31\n");
		scanf("%d",&questao);
		if (!((questao >=1 )&&(questao <= 5))){
			printf("Opcao invalida! Digite um valor de 1 a 5:\n");
		}
	}while (!((questao >=1 )&&(questao <= 5)));
	return questao;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void questao1();
void questao2();
void questao3();
void questao3();
void questao3();

int main() {
    int escolha;

    do {
        printf("\nEscolha a questao que voce quer responder:\n");
        printf("1. Questão 17\n");
        printf("2. Questão 20\n");
        printf("3. Questão 22\n");
		printf("4. Questão 30\n");
		printf("5. Questão 31\n");
        printf("0. Sair\n");
        printf("Digite a sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                questao1();
                break;
            case 2:
                questao2();
                break;
            case 3:
                questao3();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Escolha inválida! Por favor, tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}

void questao1() {
    printf("Esta é a Questão 17.\n");

	float num, soma = 0.0;
    int contagem = 0;

    printf("Digite valores positivos. Para parar, digite um valor negativo.\n");
    printf("Digite um número: ");
    scanf("%f", &num);

    while (num >= 0)
    {
        soma += num;
        contagem++;
        printf("Digite um valor: ");
        scanf("%f", &num);
    }

    if (contagem == 0) {
        printf("Nenhum valor positivo foi fornecido.\n");
    } else {
        float media = soma / contagem;
        printf("A média dos valores digitados é: %.2f\n", media);
    }
}

void questao2() {
    printf("Esta é a Questão 20.\n");

    float horas_trabalhadas, valor_hora, salario;
    
    printf("Digite o número de horas trabalhadas na semana: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);

    if (horas_trabalhadas <= 40) {
        salario = horas_trabalhadas * valor_hora;
    } else if (horas_trabalhadas <= 60) {
        salario = 40 * valor_hora + (horas_trabalhadas - 40) * valor_hora * 1.5;
    } else {
        salario = 40 * valor_hora + 20 * valor_hora * 1.5 + (horas_trabalhadas - 60) * valor_hora * 2;
    }

    printf("O salário semanal é: R$%.2f\n", salario);
}

void questao3() {
    printf("Esta é a Questão 22.\n");

    int numeroMagico, chute, tentativas = 0;

    srand(time(0));
    numeroMagico = rand() % 501;

    printf("Bem-vindo ao jogo do número mágico!\n");
    printf("Tente adivinhar o número mágico entre 0 e 500.\n");

    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute > numeroMagico) {
            printf("O número mágico é menor!\n");
        } else if (chute < numeroMagico) {
            printf("O número mágico é maior!\n");
        } else {
            printf("Parabéns! Você acertou o número mágico em %d tentativas.\n", tentativas);
            if (tentativas >= 1 && tentativas <= 3) {
                printf("Você é muito sortudo!\n");
            } else if (tentativas >= 4 && tentativas <= 6) {
                printf("Você é sortudo!\n");
            } else if (tentativas >= 7 && tentativas <= 10) {
                printf("Você é normal.\n");
            } else {
                printf("Tente novamente!\n");
            }
            break;
        }
    } while (1);
}

void questao4() {
    printf("Esta é a Questão 30.\n");

}


void questao5() {
    printf("Esta é a Questão 31.\n");
	
    int calcularDuracaoJogo(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino) {
    // Converter hora e minuto de início para minutos desde o início do dia
    int inicioEmMinutos = horaInicio * 60 + minutoInicio;
    
    // Converter hora e minuto de término para minutos desde o início do dia
    int terminoEmMinutos = horaTermino * 60 + minutoTermino;
    
    // Calcular a duração do jogo em minutos
    int duracao;
    if (terminoEmMinutos >= inicioEmMinutos) {
        duracao = terminoEmMinutos - inicioEmMinutos;
    } else {
        // Caso o jogo termine no dia seguinte
        duracao = (24 * 60 - inicioEmMinutos) + terminoEmMinutos;
    }
    
    return duracao;
}

int main() {
    int horaInicio, minutoInicio, horaTermino, minutoTermino;
    
    // Solicitar ao usuário a hora e minuto de início
    printf("Digite a hora de início do jogo (0-23): ");
    scanf("%d", &horaInicio);
    printf("Digite os minutos de início do jogo (0-59): ");
    scanf("%d", &minutoInicio);
    
    // Solicitar ao usuário a hora e minuto de término
    printf("Digite a hora de término do jogo (0-23): ");
    scanf("%d", &horaTermino);
    printf("Digite os minutos de término do jogo (0-59): ");
    scanf("%d", &minutoTermino);
    
    // Calcular e exibir a duração do jogo
    int duracao = calcularDuracaoJogo(horaInicio, minutoInicio, horaTermino, minutoTermino);
    printf("A duração do jogo é de %d minutos\n", duracao);
    
    return 0;
}
    
}

