   // Write your function here
int factorCount(int a, int& fcount){
   int result = 1;
   fcount = 1;
   int i = 1;
   
   while (i < a){
      if (a % i == 0) {
            fcount++;
            result = i;
        }
        i++;
   }
   

   if (fcount == 0 || result == 1) {
       fcount = 2; // Only two factors (1 and the number itself)
        return -1;
    }
    
   return result;
}



