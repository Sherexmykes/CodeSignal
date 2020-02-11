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
bool isCryptSolution(arr_string crypt, arr_arr_char solution) {
	for (int i = 0; i < solution.size; i++) {
		for (int j = 0; j < crypt.size; j++) {
			for (int k = 0; k < strlen(crypt.arr[j]); k++) {
				if (crypt.arr[j][k] == solution.arr[i].arr[0]) {
					crypt.arr[j][k] = solution.arr[i].arr[1];
				}
			}
		}
	}

	for (int i = 0; i < crypt.size; i++) {
		if (crypt.arr[i][0] == '0' && strlen(crypt.arr[i]) > 1) {
			return false;
		}
	}

	return atoi(crypt.arr[0]) + atoi(crypt.arr[1]) == atoi(crypt.arr[2]);
}
