/**
 *  Given an integer as input, representing a month 
 *  (1 for January, 2 for February, and so on), return
 *  the number of days in that month in a non-leap-year 
 *  (that February always has 28 days). 
 */
int days_in_month(int month)
{
    int result;

   switch(month){
      case 1: result = 31; break;
      case 2: result = 28; break;
      case 3: result = 31; break;
      case 4: result = 30; break;
      case 5: result = 31; break;
      case 6: result = 30; break;
      case 7: result = 31; break;
      case 8: result = 31; break;
      case 9: result = 30; break;
      case 10: result = 31; break;
      case 11: result = 30; break;
      case 12: result = 31; break;
      default: result = 0; break;
   }
   return result;
}
