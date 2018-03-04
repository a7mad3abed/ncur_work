#include <ncurses.h>
#include <stdlib.h>


int main()
{
	initscr();  			/* Strart Curses mode */
	printw("Hello World !!!\n");    // Print Hello Wold
	refresh();			// Print it on to the real screen
	def_prog_mode();               // Save tty modes
	endwin();			// End cusrs mode temporarily
	system("/bin/sh");		// Do whatever you like in cooked mode
	reset_prog_mode();		// return to the previous tty mode

	refresh();			// Do refresh to restore the 
					// Screen contents

	printw("Another String\n");	// Back to curses use te full capabilities of curses

	refresh();
	endwin();

	return 0;
}
