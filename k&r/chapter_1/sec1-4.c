/* Section 1.4  Symbolic Constants
... It's bad practice to bury "magic numbers" like 300 and 20 in a program;
they convey little information to someone who might have to read the program later,
and they are hard to change in a systematic way.  One way to deal with magic
numbers is to give them meaningful names.  A #define line defines a *symbolic name*
or *symbolic constant* to be a particular string of characters. 

    #define    name    replacement text
    
Thereafter, any occurance of name (not in quotes and not part of another
name) will be replaced by the corresponding replacement text
*/

#include <stdio.h>

#define  LOWER 0     /* lower limit of table */
#define  UPPER 300   /* upper limit */
#define  STEP  20    /* step size */

/* print Fahrenheit-Celcius table */
main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

/* Output:
>ex1-5.exe
  0  -17.8
 20   -6.7
 40    4.4
 60   15.6
 80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9

*/
