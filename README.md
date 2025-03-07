Electricity Billing System (C) :
This is a simple command-line program written in C to calculate the electricity bill based on the number of units consumed. The billing system follows a tiered rate structure with fixed charges and a tax rate.

Features:
Calculates the electricity bill based on units consumed.
Includes a tiered pricing system with different rates for different ranges of units.
Adds fixed charges and tax to the total bill.
Outputs the final total bill after applying tax.
Pricing Structure
First 50 units: ₹0.50 per unit
Next 100 units (51 to 150): ₹0.75 per unit
Next 100 units (151 to 250): ₹1.20 per unit
Above 250 units: ₹1.50 per unit
Fixed Charges: ₹20.00
Tax: 18% of the bill after adding fixed charges.

Requirements:
C Compiler (e.g., GCC)
Basic understanding of compiling and running C programs

Installation:
Clone the repository:

bash
Copy
git clone https://github.com/your-username/electricity-bill-system.git
Navigate to the project directory:

bash
Copy
cd electricity-bill-system
Compile the program using GCC (or any other C compiler):

bash
Copy
gcc bill_calculator.c -o bill_calculator
Run the program:

bash
Copy
./bill_calculator

Usage:
Run the program and enter the number of electricity units consumed when prompted.
The program will calculate the total bill based on the tiered pricing system, including fixed charges and tax.
Example:
plaintext
Copy
Enter the number of units consumed: 320
Total electricity bill: 341.28

How it works:
The program first checks the number of units consumed.
Based on the tier system, it calculates the bill for each tier.
It then adds the fixed charge and applies the tax.
Finally, the total bill is displayed.
Contributing
Fork the repository.

Create a new branch for your feature or bugfix:

bash
Copy
git checkout -b feature-name
Make your changes and commit them:

bash
Copy
git commit -m "Add new feature"
Push to your forked repository:

bash
Copy
git push origin feature-name
Create a pull request to the original repository.

 

 Template of Electronic Bill:
*********************************
       Electronic Bill System    
*********************************

Enter customer name: John Doe
Enter customer address: 1234 Elm St, Springfield
Enter customer phone number: 123-456-7890
Enter the number of items purchased: 2
Enter item 1 details:
Item name: Laptop
Item price: 800.50
Item quantity: 1
Enter item 2 details:
Item name: Headphones
Item price: 120.75
Item quantity: 2

*********************************
       Electronic Bill System    
*********************************

Customer Name: John Doe
Address: 1234 Elm St, Springfield
Phone: 123-456-7890

Itemized Bill:
-------------------------------------------------
Item Name   Price   Quantity   Total
-------------------------------------------------
Laptop      800.50  1          800.50
Headphones  120.75  2          241.50
-------------------------------------------------
Total Amount: 1042.00
Thank you for shopping with us!
Contributing
Fork the repository.
 
 
