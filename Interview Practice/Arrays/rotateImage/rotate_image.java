int[][] rotateImage(int[][] a) {
    for (int r = 0; r < a.length/2; r++) {
      for (int c = 0; c < a[r].length; c++) {
        int temp = a[r][c];
        a[r][c] = a[a.length-1-r][c];
        a[a.length-1-r][c] = temp;
      }
    }

    for (int r = 0; r < a.length; r++) {
      for (int c = 0; c < r; c++) {
        int temp = a[r][c];
        a[r][c] = a[c][r];
        a[c][r] = temp;
      }
    }

    return a;
}