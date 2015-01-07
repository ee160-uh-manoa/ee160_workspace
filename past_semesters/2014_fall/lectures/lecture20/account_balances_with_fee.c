/*   File:  refactored_net_balance.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#include "magic_numbers.h"
#include "helper_functions.h"
#include "helper_functions.c"

// This program allows a teller to enter in account details and the program will calculate account information for the teller
int main() {
  float account_balance;
  char account_type;
  char exit_program_flag = CONTINUE_PROGRAM;
  int total_number_of_accounts = 0;
  float total_amount_in_accounts = 0;
  int minimum_balance_fee = 35;
  int total_minimum_balance_fees = 0;
  int total_accounts_with_minimum_balance_fees = 0;
  int minimum_balance_fee_charged_flag = 0;
  float account_balances[MAX_NUMBER_OF_ACCOUNTS];
  float account_balance_fees[MAX_NUMBER_OF_ACCOUNTS];
  
  while (exit_program_flag == CONTINUE_PROGRAM) {
    account_balance = get_account_balance();
    account_type = get_account_type();

    if (account_type == 's') {
      minimum_balance_fee_charged_flag = is_account_below_minimum_balance(account_balance, SAVINGS_ACCOUNT_MINIMUM_BALANCE);
    } else {
      minimum_balance_fee_charged_flag = is_account_below_minimum_balance(account_balance, CHECKING_ACCOUNT_MINIMUM_BALANCE);
    }  
    
    update_account_summary_information(&total_number_of_accounts, &total_amount_in_accounts, account_balance);
    
    // Display account summary information
    if (minimum_balance_fee_charged_flag) {
      total_accounts_with_minimum_balance_fees++;
      total_minimum_balance_fees += minimum_balance_fee;
      printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", minimum_balance_fee / account_balance * PERCENT_CONVERSION_FACTOR);
      printf ("The new account balance is %.2f\n", net_balance(account_balance, minimum_balance_fee));
      account_balance_fees[total_number_of_accounts+ARRAY_OFFSET] = minimum_balance_fee; // storing account balance into array
    } else {
      printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", NO_MINIMUM_BALANCE / account_balance);
      printf ("The new account balance is $%.2f\n", net_balance(account_balance, NO_MINIMUM_BALANCE));
      account_balance_fees[total_number_of_accounts+ARRAY_OFFSET] = NO_MINIMUM_BALANCE; // storing account balance into array
    }
    
    account_balances[total_number_of_accounts+ARRAY_OFFSET] = account_balance; // storing account balance into array
    
    exit_program_flag = ask_to_exit();
  }
  
  // Display accounts summary information
  printf ("==== Accounts Summary ====\n");
  printf ("The total number of accounts: %d\n", total_number_of_accounts);
  printf ("The total amount in all accounts: $%.2f\n", total_amount_in_accounts);
  printf ("The percentage of the total minimum balance fees with respect to the total account balances: %.1f%%\n", total_minimum_balance_fees / total_amount_in_accounts * PERCENT_CONVERSION_FACTOR);
  printf ("The percentage of accounts that were charged a minimum balance fee: %.1f%%\n", PERCENT_CONVERSION_FACTOR * total_accounts_with_minimum_balance_fees / total_number_of_accounts);
  
  // print out all balances entered by the teller
  displaying_account_balances(account_balances, account_balance_fees, total_number_of_accounts);

  return 0;
}