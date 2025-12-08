// What output does the following program fragment produce? (Assume that i is an integer
// variable.)
// i = 1;
// switch (i % 3) {
// case 0: printf("zero");
// case 1: printf("one");
// case 2: printf("two");
// }
// 
// The switch statement expression i % 3 evaluates to 1 when i is 1
// so "one" then due to fallthrough "two" is printed. The output is "onetwo"
