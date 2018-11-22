#include <iostream>
#include "Project.hpp"
#include <ncurses.h>
#include <string>
#include <string.h>
#include <Table.hpp>
using namespace std;

int main()
{
	string msg1("sevenle");
	string msg2("3le");

	initscr();
	WINDOW* table_1 = newwin(8, 43, 0, 0);
	WINDOW* table_2 = newwin(8, 43, 9, 0);
	box(table_1, '|', '-');
	box(table_2, '|', '-');
	refresh();
	wrefresh(table_1);
	wrefresh(table_2);
	wprintw(table_1, "hey");
	mvwprintw(table_2, 1, 1, "%7s|%3s|", msg1.c_str(), msg2.c_str());
	mvwprintw(table_2, 2, 1, (string(41, '-')).c_str());
	wrefresh(table_1);
	wrefresh(table_2);
	getch();
	endwin();
	return 0;
}
