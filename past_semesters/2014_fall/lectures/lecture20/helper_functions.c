float net_balance(float account_balance, float minimum_balance_fee) {
  return(account_balance - minimum_balance_fee);
}

float get_account_balance() {
  float account_balance;  
  printf ("Please enter the account balance: ");
  scanf ("%f", &account_balance);
  return(account_balance);
}

char get_account_type() {
  char account_type;
  printf ("c = checking, s = saving\n");
  printf ("Please enter the account type:\n");
  scanf (" %c", &account_type);
  return(account_type);
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

int ask_to_exit() {
  char exit_program_flag;
  printf ("\n");
  printf ("Are you finished checking all your accounts?:\n");
  printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
  scanf (" %c", &exit_program_flag);
  return(exit_program_flag);
}

void update_account_summary_information(int *total_number_of_accounts, float *total_amount_in_accounts, float account_balance) {
  (*total_number_of_accounts)++;
  *total_amount_in_accounts += account_balance;
}


void displaying_account_balances(float account_balances[], float account_balance_fees[], int total_number_of_accounts) {
  int display_balances_counter = 1;
  printf ("==== List of Account Balances ====\n");
  while(display_balances_counter <= total_number_of_accounts) {
    printf("%3d: $%8.2f\n", display_balances_counter, account_balances[display_balances_counter+ARRAY_OFFSET]);
    printf("minimum balance fee: $%8.2f\n", account_balance_fees[display_balances_counter+ARRAY_OFFSET]);
    display_balances_counter++;
  }
}