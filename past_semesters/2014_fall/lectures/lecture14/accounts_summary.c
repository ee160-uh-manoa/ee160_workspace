#include <stdio.h>

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  int total_number_of_accounts = 0; //total number of accounts
  float total_amount_in_accounts = 0;  // the total amount in all accounts
  float cumulative_minimum_balance_fees = 0;
  int total_number_of_accounts_charged = 0;
  int minimum_balance_fee = 35;
  int minimum_balance_fee_charged = 0;
  /*
  the percentage of minimum balance fees relative to the total amount in all accounts
  cumulative_minimum_balance_fees / tota_amount_in_accounts * 100
  the percentage of accounts that were charged a minimum balance fee
  total_number_of_accounts_charged / total_number_of_accounts * 100
  */
  
  while (exit_program_flag == 'n') {
    printf ("Please enter the account balance: ");
    scanf ("%f", &account_balance);
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
      
    if (account_type == 's') {
      if (account_balance < 1000) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
        minimum_balance_fee_charged = 1;
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
        minimum_balance_fee_charged = 1;
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    }  
    
    //if (minimum_balance_fee_charged == 1) {
    if (minimum_balance_fee_charged) {
      cumulative_minimum_balance_fees = cumulative_minimum_balance_fees + minimum_balance_fee; 
      total_number_of_accounts_charged = total_number_of_accounts_charged + 1;
      printf("minimum_balance_fee / account_balance: %.2f%%\n", 100 * minimum_balance_fee / account_balance);
    }
    
    // Update account summary information
    total_number_of_accounts++;
    total_amount_in_accounts += account_balance;
    
    printf ("\n");
    printf ("Are you finished checking all your accounts?:\n");
    printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
    scanf (" %c", &exit_program_flag);
    
    // reset our flag
    minimum_balance_fee_charged = 0;
  }
  
  // Display accounts summary information
  printf ("==== Accounts Summary ====\n");
  printf ("The total number of accounts: %d\n", total_number_of_accounts);
  printf ("The total amount in all accounts: $%.2f\n", total_amount_in_accounts);
  printf("cumulative_minimum_balance_fees / total_amount_in_accounts * 100: %.2f%%\n", cumulative_minimum_balance_fees / total_amount_in_accounts * 100);
  printf("total_number_of_accounts_charged / total_number_of_accounts * 100: %.2f%%\n", 100 * (float) total_number_of_accounts_charged / total_number_of_accounts);
  printf("total_number_of_accounts_charged / total_number_of_accounts * 100: %.2f%%\n", 100.0 * total_number_of_accounts_charged / total_number_of_accounts);
  printf("total_number_of_accounts_charged / total_number_of_accounts * 100: %.2f%%\n", total_number_of_accounts_charged / total_number_of_accounts * 100.0);
  
  /*
  the percentage of minimum balance fees relative to the total amount in all accounts
  cumulative_minimum_balance_fees / tota_amount_in_accounts * 100
  the percentage of accounts that were charged a minimum balance fee
  total_number_of_accounts_charged / total_number_of_accounts * 100
  */
}