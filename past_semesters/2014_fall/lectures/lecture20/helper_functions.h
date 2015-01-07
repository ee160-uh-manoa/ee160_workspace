float net_balance(float account_balance, float minimum_balance_fee);
float get_account_balance();
char get_account_type();
int is_account_below_minimum_balance(float account_balance, float minimum_balance);
int ask_to_exit();
void update_account_summary_information(int *total_number_of_accounts, float *total_amount_in_accounts, float account_balance);
void displaying_account_balances(float account_balances[], float account_balance_fees[], int total_number_of_accounts);