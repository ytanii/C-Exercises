// a) i = 7; j = 8;
// i *= j + 1; i is 63
// printf("%d %d", i, j); prints 63 8

// (b) i = j = k = 1;
// i += j += k;
// printf("%d %d %d", i, j, k); prints 3 2 1

// (c) i = 1; j = 2; k = 3;
// i -= j -= k;
// printf("%d %d %d", i, j, k); prints 2 -1 3

// (d) i = 2; j = 1; k = 0;
// i *= j *= k;
// printf("%d %d %d", i, j, k); prints  0 0 0