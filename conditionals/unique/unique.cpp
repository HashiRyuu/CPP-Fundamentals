/**
 *  Given three integers (a, b, and c), 
 *  return the number of unique values among the three. 
 */
int unique(int a, int b, int c)
{
    int result;

    if (a != b && b != c && a != c) {
        result = 3;
    } else if (a == b && b == c) {
        result = 1;
    } else {
        result = 2;
    }
   return result;
}
