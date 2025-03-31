#include <ncurses.h>

int main()
{
    int x, y;
    x = 0;
    y = 0;
    initscr();

    clear();

    printw(
        "X = %d\n"
        "Y = %d\n",
        x, y);
    refresh();

    y = 5;
    x = 10;

    move(y, x);
    printw("Over here");
    refresh();
    getch();
    endwin();
    return 0;
}