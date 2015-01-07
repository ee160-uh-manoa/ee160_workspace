#include <stdio.h>

main () {
  char word[] = "car"; //null character is implied
  
  /* another way of initializing a string
  char word[4] = "car";
  */
  
  /* another way of initializing a string
  char word[4];
  word[0] = 'c';
  word[1] = 'a';
  word[2] = 'r';
  word[3] = '\0';
  */
  
  printf("display the letters:\n");
  printf("word[0]: %c\n", word[0]);
  printf("word[1]: %c\n", word[1]);
  printf("word[2]: %c\n", word[2]);
  printf("word[3]: %c\n", word[3]);
  
  printf("display the word using characters\n");
  printf("%c", word[0]);
  printf("%c", word[1]);
  printf("%c", word[2]);
  printf("%c", word[3]);
  
  printf("\ndisplay the word using a string\n");
  printf("%s\n", word);
}