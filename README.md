# credit_card_validator
This code uses Luhn algorithm to validate the 16 digit credit card numbers

Manual calculation of credit card validation of card numbers.

input = 2221008215093687

last number = 7 

multiple by 1 in odd position and 2 in even position 

sum= (2 * 1)+(2*2)+(2*1)+(1*2)+(0*1)+(0*2)+(8*1)+(2*2)+(1*1)+(5*2)+(0*1)+(9*2)+(3*1)+(6*2)+(8*1)

if mulitplied number exceeds 9 then substract the number with 9

sum= 2 + 4 + 2 + 2 + 0 + 0 + 8 + 4 + 1 + ( (10)-9 ) + 0 + ((18)-9) + 3+ ((12)-9)+ 8

sum = 47

then perform modulo operation 

final output = sum%10;

final output = 7 

if final ouput and  last number is equal .
 
 then it is valid credit card
