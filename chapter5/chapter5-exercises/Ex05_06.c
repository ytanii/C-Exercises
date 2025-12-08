// Is the following if statement legal?
// if (n == 1-10)
// printf("n is between 1 and 10\n");
// If so, what does it do when n is equal to 5?
// 
// The statement is legal. It does not test for if n is between 1 and 10. When n is 5,
// the expression inside the if  becomes 5 == -9 which evaluates to 0 so nothing is printed.
