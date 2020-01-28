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

int firstDuplicate(arr_integer a) {
	int had[a.size];
	memset(had, '0', a.size*sizeof(int));

    for (int i = 0; i < a.size; i++) {
		if (had[a.arr[i]] == a.arr[i]) {
			return a.arr[i];
		}
		had[a.arr[i]] = a.arr[i];
	}
	return -1;
}
