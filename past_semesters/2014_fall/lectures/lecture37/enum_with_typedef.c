/*   File:  enum_with_typedef.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program demonstrates using typedef with enum
// Using typedef with enum works and is shorter to type, but colors is now in the global namespace
int main () {
  typedef enum { black, blue, green, red } colors;
  // as opposed to:
  // enum colors { black, blue, green, red };
  
  colors foreground = blue;
  colors background = red;
  // as opposed to:
  // enum colors foreground = blue;
  // enum colors background = red;
  
  printf("%d\n", foreground);
  printf("%d\n", background);
  
  return 0;
}

