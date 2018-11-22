#ifndef _TABLE_H_
#define _TABLE_H_

#include "Project.hpp"
#include <ncurses.h>

/*!Doc: Table

	This class is meant to be an add-on for the ncurses library.

	Creation of a table object creates an instance of a window to
	include itself in. It may seem counterintuitive to create an instance
	of a window within the class the table will reside in, but the idea
	is to abstract the formatting part of the table away from the user of
	a table. I may switch this up eventually.

*/
class Table
{
public:
	Table();
	~Table();
private:
	WINDOW* win;

	/*!Doc: Table
		The user will input the number of rows and columns
		they will need in their table, excluding formatting
		characters.

		EXAMPLE: A 2x2 table with 1 field width for each column
		is 4 characters	in size to the user, however, in actuality the '|'
		character will take up some space. With a horizontal border applied, a
		2x2 table becomes a 2x5 table (Y,X).

		|1|1|	<== 2x2 to the user, 2x5 in code
		|2|2|

		EXAMPLE: Here's the same example without the horizontal border applied.
		The same 2x2 table becomes a 2x3 table with no borders applied:

		1|1		<== 2x2 to the user, 2x3 in code
		1|1
	*/

	//Rows, cols represent the practical number of rows and columns, aka

	int rows;
	int cols;
	int actualRows;
	int actualColumns;

	//Adds borders to your tables
	bool bHorizontalBorder = false;
	bool bVerticalBorder = false;

	//Makes the first row of your table a header row for the titles of columns
	bool bIncludeHeaderRow = false;
	std::string title;

	int tableNumber;
	static int tableCount;
	char borderChar = '|';
};


#endif
