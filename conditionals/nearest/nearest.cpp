/**
 *  You have been dealt two cards, a and b. 
 *  Each card has a value 0-100. Set the variable 
 *  nearest to whichever value is nearest to 21 
 *  without going over. Return 0 if both cards go over.
 */
int nearest(int a, int b)
{
    int nearest = 0;

if(a <= 21 && b <= 21){
   if(a == 21){
      nearest = a;
   } else if(b == 21){
      nearest = b;
   }
}else{
   if(a <= 21){
      nearest = a;
   }
   
   if(b <= 21){
      nearest = b;
   }
}
   
   return nearest;
}
