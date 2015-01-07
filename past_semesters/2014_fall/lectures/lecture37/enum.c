/*   File:  enum.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program demonstrates using enum (enumeration)
int main () {
  enum colors { black, blue, green, red };
                //0     1      2     3
  
  enum colors foreground = blue;
  enum colors background = red;
  
  printf("%d\n", foreground);
  printf("%d\n", background);
  
  return 0;
}