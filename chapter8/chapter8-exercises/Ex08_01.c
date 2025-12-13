// We discussed using the expression sizeof(a) / sizeof(a[0])
// to calculate the number of elements in an array. The expression sizeof(a) / sizeof(t),
// where t is the type of a’s elements, would also work, but it’s considered an inferior technique. Why?

// when using sizeof(a) / sizeof(t), if the type of the array is change t needs to be manually updated where as in
// sizeof(a[0]) automatically takes the sizeof the type of element in the array.