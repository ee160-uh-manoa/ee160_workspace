/*
while there are more accounts to be checked
  //before the if/else statemtents
  check if the account is a saving account
    when yes, then
      //inside true block
      check if the account balance is less than $1000
        when yes, then
          //
          tell the teller to charge the minimum balance fee
          //
        otherwise
          tell the teller to not charge the minimum balance fee
  otherwise (assume) the account is a checking account
    //inside false block
    check if the account balance is less than $500
      when yes, then
        tell the teller to charge the minimum balance fee
      otherwise
        //
        tell the teller to not charge the minimum balance fee
  ask the user if there are more accounts to be checked
  
print out summary
*/