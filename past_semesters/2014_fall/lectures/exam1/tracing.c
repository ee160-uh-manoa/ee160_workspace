#include <stdio.h>

int main () {
  int variable = 0;
  int naother_variable = 10;
  while (variable < 5) {
    if (variable != 3) {
      printf("variable: %d\n", variable);
    }
    variable++;
  }
  return 0;
}

/* answer:
variable: 0
variable: 1
variable: 2
variable: 4
*/

/* showing working:
variable: 0, another_variable: 10
variable: 1, another_variable: 10
variable: 2, another_variable: 10
variable: 3, another_variable: 10
variable: 4, another_variable: 10
variable: 5, another_variable: 10
*/