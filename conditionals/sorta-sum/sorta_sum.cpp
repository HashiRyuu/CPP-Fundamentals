/**
 *  Given 2 ints, a and b, print their sum. 
 *  However, sums in the range 10..19 inclusive, 
 *  are forbidden, so in that case just print 20. 
 */
int sorta_sum(int a, int b)
{
    int result = 0;

   if(!(a + b >= 10 && a + b <= 19)){
      result += a + b;
   } else {
      result += 20;
   }
   return result;
}
