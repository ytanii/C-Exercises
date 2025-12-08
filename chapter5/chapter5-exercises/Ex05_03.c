// (a) i = 3; j = 4; k = 5;
// printf("%d ", i < j || ++j < k); prints 1
// printf("%d %d %d", i, j, k); prints 3 4 5
// 
// (b) i = 7; j = 8; k = 9;
// printf("%d ", i - 7 && j++ < k); prints 0 
// printf("%d %d %d", i, j, k); prints 7 8 9
// 
// (c) i = 7; j = 8; k = 9;
// printf("%d ", (i = j) || (j = k)); prints 1
// printf("%d %d %d", i, j, k); prints 8 8 9
// 
// (d) i = 1; j = 1; k = 1;
// printf("%d ", ++i || ++j && ++k); prints 1
// printf("%d %d %d", i, j, k); 2 1 1
