
// RandomInRange.java

// Written by: Nawapoom Lohajarernvanich, CoE Student ID: 4110181
// Revised by Andrew Davison, April 2005, ad@fivedots.coe.psu.ac.th

/* The object is seeded with a range number n.
   Then each time getNumber() is called, a number from
   the sequence 0-(n-1) will be randomly chosen and returned.
   A number is only returned once.

   For example, a seed of 4, will allow repeated calls to
   getNumber() to return:
      2, 1, 3, 0
   or 1, 2, 3, 0
   or 3, 2, 0, 1  etc.

   After the range is exhausted, further calls to getNumber()
   will return -1.
*/

import java.util.Random;

public class RandomInRange 
{
  private boolean nums[];
  private int range;

  public RandomInRange(int n) 
  {
    range = n;
    nums = new boolean[range];
    for(int i=0; i<range; i++)
      nums[i] = true;
  } // end of RandomInRange()


  public int getNumber()
  {
    int index = (int)Math.floor(Math.random()*range);
    for(int i=0; i<range; i++){
      if(nums[index]){
        nums[index] = false;
        return index;
      }
      index = (index+1)%range;
    }
    return -1;
  } // end of getNumber()


  // --------------------- main() ---------------------------

  public static void main(String args[])
  {
    int num = 4; // default
    try {
      num = Integer.parseInt(args[0]); 
    }
    catch (Exception ex){ 
      System.out.println("Usage: java RandomInRange <num>");
      System.out.println("Using num==4"); 
    } 

    RandomInRange rr = new RandomInRange(num);
    for(int i=0; i<num+5; i++)  // add a few extra tests
      System.out.println("Test " + i + ": " + rr.getNumber());
  } // end of main()


} // end of RandomInRange class
