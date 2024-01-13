#include <stdio.h>
#include <time.h>

// Fun��o para calcular a idade com base na data de nascimento e na data atual
int calcularIdade(int anoNascimento, int mesNascimento, int diaNascimento) {
    time_t agora;
    struct tm dataNascimento;
    struct tm dataAtual;

    time(&agora);  // Obter a data e hora atuais
    dataAtual = *localtime(&agora);  // Converter para uma estrutura tm

    // Configurar a data de nascimento na estrutura tm
    dataNascimento.tm_year = anoNascimento - 1900;
    dataNascimento.tm_mon = mesNascimento - 1;
    dataNascimento.tm_mday = diaNascimento;
    dataNascimento.tm_hour = 0;
    dataNascimento.tm_min = 0;
    dataNascimento.tm_sec = 0;

    // Calcular a diferen�a em anos
    int idade = dataAtual.tm_year - dataNascimento.tm_year;

    // Verificar se o anivers�rio j� ocorreu este ano
    if (dataAtual.tm_mon < dataNascimento.tm_mon || (dataAtual.tm_mon == dataNascimento.tm_mon && dataAtual.tm_mday < dataNascimento.tm_mday)) {
        idade--;
    }

    return idade;
}

int main() {
    int anoNascimento, mesNascimento, diaNascimento;

    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &diaNascimento, &mesNascimento, &anoNascimento);

    int idade = calcularIdade(anoNascimento, mesNascimento, diaNascimento);

    printf("A idade �: %d anos\n", idade);

    return 0;
}
