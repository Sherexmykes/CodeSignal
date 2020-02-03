// Arrays are already defined with this interface:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
_Bool sudoku2(arr_arr_char grid) {
	_Bool correct = 1;

	for (int r = 0; r < grid.size; r++) {
		int cr[9] = {0};
		int cc[9] = {0};
		int cg[9] = {0};

		for (int c = 0; c < grid.arr[r].size; c++) {
			correct &= (grid.arr[r].arr[c] != '.' && ++cr[grid.arr[r].arr[c] - '1'] > 1) ? 0 : 1;
			correct &= (grid.arr[c].arr[r] != '.' && ++cc[grid.arr[c].arr[r] - '1'] > 1) ? 0 : 1;
			correct &= (grid.arr[3*(r/3)+c%3].arr[3*(r%3)+c/3] != '.' && ++cg[grid.arr[3*(r/3)+c%3].arr[3*(r%3)+c/3] - '1'] > 1) ? 0 : 1;
		}
	}

	return correct;
}
