#include <stdio.h>

main() {
  char account_type;
  account_type = 'z';
  float account_balance;
  char response;
  float threshold=500;
  
  printf ("Please enter the account type (s for savings; c for checking):\n");
  scanf (" %c", &account_type);
  printf ("Please enter the account balance: \n");
  scanf (" %f", &account_balance);

  if(account_type == 's') {
    if(account_balance < 1000) {
      printf("charge a minimum balance\n");
      printf ("Do you want to know the minimum balance thresholds: \n");
      scanf (" %c", &response);
      if(response=='y') {
        printf("1000\n");
      }
    } else {
      printf("don't charge a minimum balance\n");
    }
  } else {
    if(account_type == 'c') {
      if(account_balance < 500) {
        printf ("Do you want to know the minimum balance thresholds: \n");
        scanf (" %c", &response);
        printf("charge a minimum balance\n");
        if(response=='y') {
          printf("%d\n", threshold);
        }
      } else {
        printf("don't charge a minimum balance\n");
      }
      
    }
  }
}

/*
check if the account is a saving account
  check if the account balance is less than $1,000
    display a message to tell the teller to charge a minimum balance
  otherwise
    display a message to tell the teller to not charge a minimum balance
otherwise
  check if the account is a checking account
    check if the account balance is less than $500 for checking account
      display a message to tell the teller to charge a minimum balance
    otherwise
      display a message to tell the teller to not charge a minimum balance    









check if the account is a saving account
  check if the account balance is less than $1,000
    display a message to tell the teller to charge a minimum balance
  otherwise
    display a message to tell the teller to not charge a minimum balance
otherwise
  check if the account is a checking account
    check if the account balance is less than $500 for checking account
      display a message to tell the teller to charge a minimum balance
    otherwise
      display a message to tell the teller to not charge a minimum balance    
*/