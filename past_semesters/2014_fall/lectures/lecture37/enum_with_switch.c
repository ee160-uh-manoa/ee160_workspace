/*   File:  enum_with_switch.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/
#include <stdio.h>

// This program demonstrates using enum with switch
int main () {
  enum colors { black, blue, green, red };
  
  enum colors foreground = blue;
  enum colors background = red;
  
  switch (background) {
    case black:
      printf("The background is black\n");
      break;
    case blue:
      printf("The background is blue\n");
      break;
    case green:
      printf("The background is green\n");
      break;
    case red:
      printf("The background is red\n");
      break;
    default:
      printf("Unknown background color\n");
      break;
  }
  return 0;
}

