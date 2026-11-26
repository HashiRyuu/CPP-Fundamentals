// Write your function here
int makeChange(double cost, double amount, int& quarters, int& dimes, int& pennies) {
    // Calculate the change
    double change = amount - cost;
      int dollars = 0;
      
      
    // Convert change to cents
      int changeInCents = change * 100;

		 dollars += changeInCents / 100;
		 changeInCents = changeInCents % 100;
		
		 quarters = changeInCents/25;
		 changeInCents = changeInCents % 25;
		
		 dimes = changeInCents/10;
		 changeInCents = changeInCents % 10;
		
		 pennies = changeInCents / 1;
		 changeInCents = changeInCents % 1;

    return dollars;
}



