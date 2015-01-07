#include <stdio.h>

#define MAX 11
#define ARRAY_OFFSET -1

int main () {
  char word[MAX];
  printf("Please enter in your word:\n");
  scanf ("%s", word);
  printf("%s\n", word);
  
  int index_to_compare = 1;
  while (index_to_compare <= MAX) { // looping over position
    printf("DEBUG: sorting for %d position\n", index_to_compare);
    int index_compared_against = index_to_compare + 1;  
    printf("letter being compared: %c\n", word[index_to_compare + ARRAY_OFFSET]);
    while (index_compared_against <= MAX ) { // looping over remaining letters
      printf("comparing %c to %c\n", word[index_compared_against+ARRAY_OFFSET], word[index_to_compare+ARRAY_OFFSET]);
      ///// SWAP
      if (word[index_compared_against+ARRAY_OFFSET] >= 97) {
        if (word[index_compared_against+ARRAY_OFFSET] <= 122) {
          if (word[index_to_compare+ARRAY_OFFSET] >= word[index_compared_against+ARRAY_OFFSET]) {
            char temp = word[index_to_compare+ARRAY_OFFSET];
            word[index_to_compare+ARRAY_OFFSET] = word[index_compared_against+ARRAY_OFFSET];
            word[index_compared_against+ARRAY_OFFSET] = temp;
          }
        }
      }
      /////
      printf("DEBUG: %s\n", word);
      index_compared_against++;
    }
    
    index_to_compare++;
  }
  
  printf("result: %s\n", word);
  return 0;
}


/* update:
https://docs.google.com/spreadsheets/d/1G0aJsIdNm_SBsTgpaEE2gYUxAoKPP2Y70yFOjadWPhQ/edit?usp=sharing


=====================
#include <stdio.h>

#define MAX 10

main() {
    
    char string [MAX];
    int index = 0;
    int index2 = 0;
    int filler = 0;

printf ("type a word with letters less then 10: ");
scanf ("%s", string);
printf ("input: %s\n", string);

while (index<=MAX){ //red: finding closest to 'a' for a particular position
    index2 = index+1;
    while (index2<=MAX) { //blue: remaining letters to compare
        if (string[index2]>=92 && string[index2]<=122){
            if (string[index]>string[index2]) {
                filler = string[index];
                string[index] = string[index2];
                string[index2] = filler;
            }
        }
        index2++;
    }
index++; // index = index+1;
}
printf ("output: %s\n", string);
}
*/