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
arr_arr_integer rotateImage(arr_arr_integer a) {
	for (int r = 0; r < a.size/2; r++) {
		for (int c = 0; c < a.arr[r].size; c++) {
			int temp = a.arr[r].arr[c];
			a.arr[r].arr[c] = a.arr[a.size - 1 - r].arr[c];
			a.arr[a.size - 1 - r].arr[c] = temp;
		}
	}

	for (int r = 0; r < a.size; r++) {
		for (int c = 0; c < r; c++) {
			int temp = a.arr[r].arr[c];
			a.arr[r].arr[c] = a.arr[c].arr[r];
			a.arr[c].arr[r] = temp;
		}
	}

	return a;
}
