#include <stdio.h>

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n'; // got lucky

  printf("DEBUG: %c\n", exit_program_flag);
  //while(exit_program_flag == 'n') { // change this line
  while(exit_program_flag != 'y') { // change this line
    
    printf ("Please enter the account balance: ");
    scanf ("%f", &account_balance);
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
    
    if (account_type == 's') {
      if (account_balance < 1000) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    }
    
    printf("Do you want to exit?\n");
    printf("Enter 'y' to exit; Enter any other character to continue\n");
    scanf(" %c", &exit_program_flag);
  }
}