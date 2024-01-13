#include<curses.h>

int main() {
    // Inicializar a biblioteca ncurses
    initscr();
    cbreak();
    noecho();
    
    // Criar uma janela para a interface
    WINDOW *win = newwin(10, 40, 5, 10);
    
    // Definir bordas na janela
    box(win, 0, 0);
    
    // Atualizar a tela
    refresh();
    wrefresh(win);
    
    // Imprimir t�tulo na janela
    mvwprintw(win, 1, 10, "Tela de Interface");
    
    // Imprimir op��es de menu
    mvwprintw(win, 3, 2, "1. Op��o 1");
    mvwprintw(win, 4, 2, "2. Op��o 2");
    mvwprintw(win, 5, 2, "3. Op��o 3");
    mvwprintw(win, 6, 2, "4. Sair");
    
    // Imprimir mensagem de sele��o
    mvwprintw(win, 8, 2, "Selecione uma op��o: ");
    
    // Capturar entrada do usu�rio
    int choice = wgetch(win);
    
    // Processar a escolha do usu�rio
    switch (choice) {
        case '1':
            mvwprintw(win, 9, 2, "Voc� selecionou a Op��o 1");
            break;
        case '2':
            mvwprintw(win, 9, 2, "Voc� selecionou a Op��o 2");
            break;
        case '3':
            mvwprintw(win, 9, 2, "Voc� selecionou a Op��o 3");
            break;
        case '4':
            mvwprintw(win, 9, 2, "Saindo...");
            break;
        default:
            mvwprintw(win, 9, 2, "Op��o inv�lida");
            break;
    }
    
    // Atualizar a tela
    wrefresh(win);
    
    // Aguardar por um caractere antes de sair
    getch();
    
    // Finalizar a biblioteca ncurses
    endwin();
    
    return 0;
}
