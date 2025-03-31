#include <ncurses.h>

int main()
{
    int key, x, y;

    initscr();
    keypad(stdscr, TRUE);
    noecho();
    x = y = 5;
    clear();
    move(0, 0);
    printw("Press left or rigth arrows and exit by pressing q");
    move(y, x);
    printw("O");
    refresh();

    key = getch();
    while ((key = getch()) != 'q')
    {
        clear(); // Clear the screen

        // 5. Display instructions
        attron(A_BOLD); // Make text bold
        mvprintw(0, 0, "Use arrow keys to move! Press 'q' to quit");
        attroff(A_BOLD);
        switch (key)
        {
        case KEY_LEFT:
            x--;
            break;
        case KEY_RIGHT:
            x++;
            break;
        case KEY_DOWN:
            y++;
            break;

        case KEY_UP:
            y--;
            break;

        default:
            break;
        }
        move(y, x);
        printw("O");
        refresh();
    }

    endwin();

    return 0;
}