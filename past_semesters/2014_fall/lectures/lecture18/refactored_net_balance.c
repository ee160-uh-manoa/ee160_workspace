/*   File:  net_balance.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define MINIMUM_BALANCE_FEE_CHARGED 1
#define MINIMUM_BALANCE_FEE_NOT_CHARGED 0
#define SAVINGS_ACCOUNT_MINIMUM_BALANCE 1000
#define CHECKING_ACCOUNT_MINIMUM_BALANCE 500

float net_balance(float account_balance, float minimum_balance_fee);
float get_account_balance();
char get_account_type();
int is_account_below_minimum_balance(float account_balance, float minimum_balance);

// This program allows a teller to enter in account details and the program will calculate account information for the teller
int main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  int total_number_of_accounts = 0;
  float total_amount_in_accounts = 0;
  int minimum_balance_fee = 35;
  int total_minimum_balance_fees = 0;
  int total_accounts_with_minimum_balance_fees = 0;
  int minimum_balance_fee_charged_flag = 0;
  
  while (exit_program_flag == 'n') {
    account_balance = get_account_balance();
    account_type = get_account_type();
      
    if (account_type == 's') {
      minimum_balance_fee_charged_flag = is_account_below_minimum_balance(account_balance, SAVINGS_ACCOUNT_MINIMUM_BALANCE);
    } else {
      minimum_balance_fee_charged_flag = is_account_below_minimum_balance(account_balance, CHECKING_ACCOUNT_MINIMUM_BALANCE);
    }  
    
    // Display account summary information
    if (minimum_balance_fee_charged_flag) {
      total_accounts_with_minimum_balance_fees++;
      total_minimum_balance_fees += minimum_balance_fee;
      printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", minimum_balance_fee / account_balance * 100);
      printf ("The new account balance is %.2f\n", net_balance(account_balance, minimum_balance_fee));
    } else {
      printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", 0 / account_balance);
      printf ("The new account balance is $%.2f\n", net_balance(account_balance, 0)); // 0 for no minimum balance fee
    }
    
    // Update account summary information
    total_number_of_accounts++;
    total_amount_in_accounts += account_balance;
    
    printf ("\n");
    printf ("Are you finished checking all your accounts?:\n");
    printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
    scanf (" %c", &exit_program_flag);
  }
  
  // Display accounts summary information
  printf ("==== Accounts Summary ====\n");
  printf ("The total number of accounts: %d\n", total_number_of_accounts);
  printf ("The total amount in all accounts: $%.2f\n", total_amount_in_accounts);
  printf ("The percentage of the total minimum balance fees with respect to the total account balances: %.1f%%\n", total_minimum_balance_fees / total_amount_in_accounts * 100);
  printf ("The percentage of accounts that were charged a minimum balance fee: %.1f%%\n", 100.0 * total_accounts_with_minimum_balance_fees / total_number_of_accounts);
  
  return 0;
}

float net_balance(float account_balance, float minimum_balance_fee) {
  return(account_balance - minimum_balance_fee);
}

float get_account_balance() {
  float account_balance;
  printf ("Please enter the account balance: ");
  scanf ("%f", &account_balance);
  return account_balance;
}

char get_account_type() {
  char account_type;  
  printf ("c = checking, s = saving\n");
  printf ("Please enter the account type:\n");
  scanf (" %c", &account_type);
  return account_type;
}

int is_account_below_minimum_balance(float account_balance, float minimum_balance) {
  int minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_NOT_CHARGED;
  
  if (account_balance < minimum_balance) {
    minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_CHARGED;
    printf ("A minimum balance fee needs to be charged to this account.\n");
  } else {
    minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_NOT_CHARGED;
    printf ("A minimum balance fee does not need to be charged to this account.\n");
  }
  
  return(minimum_balance_fee_charged_flag);
}