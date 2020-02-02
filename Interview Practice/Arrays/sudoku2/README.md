Filling a 9 x 9 grid with numbers in a way that each column, row, and the 3 x 3 sub-grids all contains the numbers from 1 to 9 only one time.<br />
Note: the puzzle represented by the grid does not have to be solvable.

ex:<br />
	&nbsp;&nbsp;&nbsp;&nbsp;grid = [['.', '.', '.', '1', '4', '.', '.', '2', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '6', '.', '.', '.', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '.', '.', '.', '.', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '1', '.', '.', '.', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '6', '7', '.', '.', '.', '.', '.', '9'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '.', '.', '.', '.', '8', '1', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '3', '.', '.', '.', '.', '.', '.', '6'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '.', '.', '.', '7', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '.', '5', '.', '.', '.', '7', '.']]<br />
	&nbsp;&nbsp;&nbsp;&nbsp;sudoku2(grid) = true;<br />

	&nbsp;&nbsp;&nbsp;&nbsp;grid = [['.', '.', '.', '.', '2', '.', '.', '9', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '.', '.', '6', '.', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['7', '1', '.', '.', '7', '5', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '7', '.', '.', '.', '.', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '.', '.', '8', '3', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '8', '.', '.', '7', '.', '6', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '.', '.', '.', '.', '2', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '1', '.', '2', '.', '.', '.', '.', '.'],<br />
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;['.', '2', '.', '.', '3', '.', '.', '.', '.']]<br />
	&nbsp;&nbsp;&nbsp;&nbsp;sudoku2(grid) = false;<br />
	Second grid has two 1s in second column and two 7s in seconde row to be not correct.

Constraints:<br />
	&nbsp;&nbsp;&nbsp;&nbsp;Input array is a 9 x 9 character array, each character is either a digit from '1' to '9' or a period '.'.

	Execution time limit:<br />
	&nbsp;&nbsp;&nbsp;&nbsp;c: 0.5 seconds<br />
	&nbsp;&nbsp;&nbsp;&nbsp;c++: 0.5 seconds<br />
	&nbsp;&nbsp;&nbsp;&nbsp;java: 3 seconds<br />
	&nbsp;&nbsp;&nbsp;&nbsp;javascript: 4 seconds<br />
	&nbsp;&nbsp;&nbsp;&nbsp;python: 4 seconds<br />

Asked By:<br />
	&nbsp;&nbsp;&nbsp;&nbsp;Apple<br />
	&nbsp;&nbsp;&nbsp;&nbsp;Uber<br />
