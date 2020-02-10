Given an array of three strings crypt, and an array of mapping solution. Deciding crypt[0] + crypt[1] = crypt[2] is a valid arithmetic equation containing no numbers with leading zeroes.<br />

Note: number 0 doesn't contain leading zeroes (while 00 or 0123 do).<br />

ex1:

	crypt = ["SEND", "MORE", "MONEY"] and
	solution = [['O', '0'],
				['M', '1'],
				['Y', '2'],
				['E', '5'],
				['N', '6'],
				['D', '7'],
				['R', '8'],
				['S', '9']]
	The output should be isCryptSolution(crypt, solution) = true.
	Which 9567 + 1085 = 10652 is a valid arithmetic equation.

ex2:

	crypt = ["TEN", "TWO", "ONE"] and
	solution = [['O', '1'],
				['T', '0'],
				['W', '9'],
				['E', '5'],
				['N', '4']]
	The output should be isCryptSolution(crypt, solution) = false.
	Which 054 + 091 = 145 is not a valid arithmetic equation.

Constraints:

	crypt.length = 3
	1 <= crypt[i].length <= 14
	Elements in solution is a pair of unique characters. First is an uppercase English letter and the second is a digit in the range from 0 to 9. 
	solution[i].length = 2
	'A' <= solution[i][0] <= 'Z'
	'0' <= solution[i][1] <= '9'

Execution time limit:

	c: 0.5 seconds
	c++: 0.5 seconds
	java: 3 seconds
	javascript: 4 seconds
	python: 4 seconds

Asked By:

	Palantir