#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Obtendo a data atual
    time_t t = time(nullptr);
    struct tm *data_atual = localtime(&t);

    // Obtendo o ano, mês e dia atual
    int ano_atual = data_atual->tm_year + 1900;
    int mes_atual = data_atual->tm_mon + 1;
    int dia_atual = data_atual->tm_mday;

    // Exibindo a data atual
    cout << "Data Atual: " << dia_atual << "/" << mes_atual << "/" << ano_atual << endl;

    // Obtendo a data inserida pelo usuário
    int ano_usuario, mes_usuario, dia_usuario;
    cout << "Insira a data desejada (ano mes dia): ";
    cin >> ano_usuario >> mes_usuario >> dia_usuario;

    // Comparando as datas
    if (ano_usuario > ano_atual || (ano_usuario == ano_atual && mes_usuario > mes_atual) ||
        (ano_usuario == ano_atual && mes_usuario == mes_atual && dia_usuario > dia_atual)) {
        cout << "A data inserida é no futuro." << endl;
    } else if (ano_usuario == ano_atual && mes_usuario == mes_atual && dia_usuario == dia_atual) {
        cout << "A data inserida é hoje." << endl;
    } else {
        cout << "A data inserida é no passado." << endl;
    }

    return 0;
}

