// the remaining balance on a loan after the first,
// second, and third monthly payments

#include <stdio.h>

int main(void)
{
  float loan, interest_rate, monthly_installment, balance_after_1_payment,
      balance_after_2_payment, balance_after_3_payment, balance;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly installment: ");
  scanf("%f", &monthly_installment);

  interest_rate = interest_rate / 100 / 12;
  balance = loan;

  balance = balance + (balance * interest_rate) - monthly_installment;
  balance_after_1_payment = balance;

  balance = balance + (balance * interest_rate) - monthly_installment;
  balance_after_2_payment = balance;

  balance = balance + (balance * interest_rate) - monthly_installment;
  balance_after_3_payment = balance;

  printf("Balance remaining after first payment: $%.2f\n", balance_after_1_payment);
  printf("Balance remaining after second payment: $%.2f\n", balance_after_2_payment);
  printf("Balance remaining after third payment: $%.2f\n", balance_after_3_payment);

  return 0;
}