// Monthly Payments
 #include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;

 int main()
 {
   double loan_amount, 
          rate, 
          monthly_payment, 
          amount_paid_back, 
          interest_paid;

   int num_payments, Rate;

   cout << "Enter the loan amount: ";
   cin >> loan_amount;
   cout << "Enter the interest rate: ";
   cin >> rate;
   Rate = rate;
   rate /= 100;

   cout << "Enter the number of payments: ";
   cin >> num_payments;

   monthly_payment = ((rate * pow(1+rate, num_payments)) / (pow(1+rate, num_payments) - 1)) * loan_amount;
   amount_paid_back = monthly_payment * num_payments;
   interest_paid = amount_paid_back - loan_amount;

   cout << fixed << setprecision(2);
   cout << left << setw(25) << "Loan Amount:" << right << "$"  << setw(9) << loan_amount << endl;
   cout << left << setw(25) << "Monthly Interest Rate:" << right  << setw(9) << Rate << "%" << endl;
   cout << left << setw(25) << "Number of Payments:" << right << setw(10) << num_payments << endl;
   cout << left << setw(25) << "Monthly Payment:" << right << "$" << setw(9) << monthly_payment << endl;
   cout << left << setw(25) << "Amount Paid Back:" << right << "$" << setw(9) << amount_paid_back << endl;
   cout << left << setw(25) << "Interest Paid:" << right << "$" << setw(9) << interest_paid << endl;
   return 0;
 }