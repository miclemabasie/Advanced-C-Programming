#include <ncurses.h> // Include the ncurses library

int main()
{
    int ch;            // Variable to store keyboard input
    int x = 10, y = 5; // Starting position of our character

    // 1. Initialize ncurses mode
    initscr();
    // 2. Hide cursor and enable immediate key input
    curs_set(0);          // Make cursor invisible
    noecho();             // Don't echo pressed keys
    cbreak();             // Disable line buffering (get keys immediately)
    keypad(stdscr, TRUE); // Enable function/arrow keys

    // 3. Check for color support and initialize colors
    if (has_colors())
    {
        start_color();
        init_pair(1, COLOR_RED, COLOR_BLACK); // Create color pair 1 (red text)
    }

    // 4. Main program loop
    while ((ch = getch()) != 'q')
    {            // Exit when 'q' is pressed
        clear(); // Clear the screen

        // 5. Display instructions
        attron(A_BOLD); // Make text bold
        mvprintw(0, 0, "Use arrow keys to move! Press 'q' to quit");
        attroff(A_BOLD);

        // 6. Handle keyboard input
        switch (ch)
        {
        case KEY_UP:
            y--;
            break;
        case KEY_DOWN:
            y++;
            break;
        case KEY_LEFT:
            x--;
            break;
        case KEY_RIGHT:
            x++;
            break;
        }

        // 7. Draw our character with color
        if (has_colors())
        {
            attron(COLOR_PAIR(1));
        }
        mvaddch(y, x, '@'); // Draw '@' at (x,y) position
        if (has_colors())
        {
            attroff(COLOR_PAIR(1));
        }

        // 8. Refresh the screen to show changes
        refresh();
    }

    // 9. Clean up and return to normal terminal mode
    endwin();
    return 0;
}