/**
 *  You have a green lottery ticket, 
 *  with ints a, b, and c on it. If the numbers are 
 *  all different from each other, the result is 0. 
 *  If all of the numbers are the same, the result 
 *  is 20. If two of the numbers are the same, 
 *  the result is 10. 
 */
int green_ticket(int a, int b, int c)
{
    int result;
    if(a == b && b == c && c == a){
       result = 20;
       
    } else if(a == b || b == c || c == a){
       result = 10;
    } else{
       result = 0;
    }
    return result;
}
