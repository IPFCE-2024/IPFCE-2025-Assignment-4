#include <stdio.h>
#include <math.h>

int main()
{
    double loanAmount;   // Loan principal amount
    double interestRate; // Annual interest rate (as a decimal)
    int loanDuration;    // Loan duration in months

    // Get user input
    printf("Enter the loan amount: ");
    scanf("%lf", &loanAmount);

    printf("Enter the annual interest rate (as a decimal): ");
    scanf("%lf", &interestRate);

    printf("Enter the loan duration in months: ");
    scanf("%d", &loanDuration);

    // Calculate monthly interest rate
    double monthlyInterestRate = interestRate / 12;

    // Calculate monthly payment
    double monthlyPayment = loanAmount * (monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -loanDuration)));

    // Display repayment plan
    printf("\nRepayment Plan:\n");
    printf("Month\tPrincipal\tInterest\tTotal Payment\n");

    double remainingBalance = loanAmount;
    int month = 1;

    while (1)
    {
        double interestPayment = remainingBalance * monthlyInterestRate;
        double principalPayment = monthlyPayment - interestPayment;

        remainingBalance -= principalPayment;

        printf("%d\t%.2lf\t\t%.2lf\t\t%.2lf\n", month, principalPayment, interestPayment, monthlyPayment);

        if (++month > loanDuration || remainingBalance <= 0.0)
        {
            // Break the loop when the loan is paid off or the loan term is exceeded
            break;
        }
    }
    return 0;
}