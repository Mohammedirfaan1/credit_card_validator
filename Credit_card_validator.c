#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
 long long credit_card_number;
 printf("ENTER THE CREDIT CARD NUMBER FOR VALIDATION: ");
 scanf("%lld",&credit_card_number); 
 int sum_credit_card=0;
 int last_digit_credit=credit_card_number%10;
 int length_credit_card=(log10(credit_card_number)+1);
 if(length_credit_card!=16)
 {
   printf("THE CREDIT CARD NUMBER DOES NOT MATCHES WITH LENGTH 16");
   exit(0);
 }
 int credit_card[length_credit_card];
 for (int i=0;i<length_credit_card;i++)
 {
   credit_card[i]=credit_card_number%10;
   credit_card_number=credit_card_number/10;  
 }
 int credit_card_even[length_credit_card];
 for(int i=1;i<length_credit_card;i++)
 {
   credit_card_even[i]=credit_card[i];
 }
 for(int i=2;i<length_credit_card;i=i+2)
 {
   credit_card_even[i]=credit_card_even[i]*2;
   if(credit_card_even[i]>9)
   {
      credit_card_even[i]=credit_card_even[i]-9;
   }
 }
 for(int i=1;i<length_credit_card;i++)
 {
   sum_credit_card=sum_credit_card+credit_card_even[i];
 }
 int resultant_last_digit=sum_credit_card%10;
 if (resultant_last_digit==last_digit_credit)
 {
        printf("THE GIVEN CREDIT CARD NUMBER IS VALID NUMBER");
        exit(0);
 }
 else
 {
   printf("THE GIVEN CREDIT CARD IS NOT VALID NUMBER");
 }

}
