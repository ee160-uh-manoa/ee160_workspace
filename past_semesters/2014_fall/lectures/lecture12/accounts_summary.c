#include <stdio.h>

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  int total_number_of_accounts = 0;
  double cumulative_balance = 0;
  double number_of_accounts_in_good_standing = 0;
  //int tracking_variable = 0;
  
  //update the program to report the number of accounts with balances above the minimum balance (e.g. the number of accounts in good standing)  
  while (exit_program_flag == 'n') {
    printf ("Please enter the account balance: ");
    scanf ("%f", &account_balance); //each loop this data is different
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
    
    //update data before if/else statements
    total_number_of_accounts = total_number_of_accounts + 1; // each loop iteration we are adding one to total_number_of_accounts
    cumulative_balance = cumulative_balance + account_balance; //each loop iteration we are adding to cumalive_balance the account_balance
      
    if (account_type == 's') {
      if (account_balance < 1000) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        // savings account; above minimum balance
        printf ("A minimum balance fee does not need to be charged to this account.\n");
        number_of_accounts_in_good_standing = number_of_accounts_in_good_standing + 1;
      }
    } else {
      if (account_balance < 500) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        // checking account; above minimum balance
        printf ("A minimum balance fee does not need to be charged to this account.\n");
        number_of_accounts_in_good_standing = number_of_accounts_in_good_standing + 1;
      }
    }  
    
    printf ("\n");
    printf ("Are you finished checking all your accounts?:\n");
    printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
    scanf (" %c", &exit_program_flag);
    
    //tracking_variable = tracking_variable + 1;
  }
  //total_number_of_accounts = tracking_variable;
  // print out summary after loop
  printf("total_number_of_accounts: %d\n", total_number_of_accounts);
  printf("cumulative_balance: %.2lf\n", cumulative_balance);
  printf("number_of_accounts_in_good_standing: %.2lf\n", number_of_accounts_in_good_standing);
}