/**
 *  You are given 2 ints, a and b; return their sum. 
 *  However, "teen" values in the range 13..19 inclusive, 
 *  are extra lucky. So if either value is a teen, just return 19. 
 */
int teen_sum(int a, int b)
{
    int result;
   
if(a >= 13 && a <= 19 || b >= 13 && b <= 19){
   result = 19;
} else{
   result = a + b;
}

   return result;
}
