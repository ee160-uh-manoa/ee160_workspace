float net_balance(float account_balance, float minimum_balance_fee);
float get_account_balance();
char get_account_type();
int is_account_below_minimum_balance(float account_balance, float minimum_balance);
int ask_to_exit();
void update_account_summary_information(int *total_number_of_accounts, float *total_amount_in_accounts, float account_balance);
void output_account_summary_to_file(
  int total_number_of_accounts,
  float total_minimum_balance_fees,
  float total_amount_in_accounts, 
  int total_accounts_with_minimum_balance_fees);