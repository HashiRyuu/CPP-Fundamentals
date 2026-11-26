   // Write your function here
void gcd(int a, int b, int& n){
   
   int max = 0;
   int min = 0;
   
   if(a > b){
      max += a;
      min += b;
   }else{
      max += b;
      min += a;
   }
   
   if(a != 0 || b != b){
      n = max % min;
   }else{
      if(a != 0){
         n = a;
      }
      
      if(b != 0){
         n = b;
      }
   }
   
   
   if(n == 0){
      n = 1;
   }
}



