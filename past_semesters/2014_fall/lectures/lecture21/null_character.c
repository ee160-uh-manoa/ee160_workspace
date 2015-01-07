#include <stdio.h>

main () {
  char word1[10];
  word1[0] = 'c';
  word1[1] = 'a';
  word1[2] = 'r';
  word1[3] = 's';
  word1[9] = '\0';
  
  char word2[4];
  word2[0] = 'c';
  word2[1] = '\0';
  word2[2] = 'r';
  word2[3] = '\0';
  
  printf("%s\n", word1);
  printf("%s\n", word2);
}