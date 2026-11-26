/**
 *  Given a pair of real numbers representing 
 *  an (x, y) point, print the quadrant number for 
 *  that point. Recall that quadrants are numbered as integers 
 *  from 1 to 4 with the upper-right quadrant numbered 1 and 
 *  the subsequent quadrants numbered in a counter-clockwise fashion.
 *  Notice that the quadrant is determined by whether the x 
 *  and y coordinates are positive or negative numbers. If 
 *  a point falls on the x-axis or the y-axis, then quadrant is 0. 
 */
int quadrant(double x, double y)
{
    int result = 0;

   if(x > 0 && y > 0){
      result = 1;
   }else if(x < 0 && y > 0){
      result = 2;
   }else if(x < 0 && y < 0){
      result = 3;
   } else if(x > 0 && y < 0){
      result = 4;
   }else {
      result = 0;
   }
   return result;
}
