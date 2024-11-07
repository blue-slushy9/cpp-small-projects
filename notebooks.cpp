/* 
One of the small SoloLearn exercises, it's a simple program that calculates
how many notebooks the user can afford to buy, as well as their remaining
bank balance after doing so 
*/

#include <iostream>
using namespace std;

// FUNCTION DECLARATIONS

// Declare function that prompts user for their balance
float get_balance();

// Declare function that prompts user for how much they want to pay
float get_price();

// Calculate number of notebooks you can afford to buy
// b = balance, p = price
int calc_notebooks(float b, float p);

// Calculate remaining balance after purchasing notebooks
// n = number of notebooks
void calc_balance(float b, float p, int n);

int main() {
    // Call function that prompts user for current balance
    float balance = get_balance();
    // Price for each notebook
    float price = get_price();

    // Calculate the number of notebooks you can afford and output result
    int notebooks = calc_notebooks(balance, price);
    
    // Calculate the amount left over on your account after the purchase
    // and output it on a new line
    calc_balance(balance, price, notebooks);
}

// FUNCTION DEFINITIONS

// Define function that prompts user for their balance
float get_balance() {
    float num;
    cout << ("Please enter your current balance: ");
    cin >> num;
    return num;
}

// Declare function that prompts user for how much they want to pay
float get_price() {
    float num;
    cout << ("Please enter the price you are looking to pay: ");
    cin >> num;
    return num;
}

// Calculate number of notebooks you can afford to buy
int calc_notebooks(float b, float p) {
    // Number of notebooks = (balance / price)
    int notebooks = (b / p);
    // Define message that will print number of notebooks bought
    string message = ("You bought " + notebooks + "notebooks.");
    cout << message << endl;
    // Return number of notebooks so calc_balance() can use it
    return notebooks;
}

// Calculate remaining balance after purchasing notebooks
void calc_balance(float b, float p, int n) {
    // new_balance = (balance - (price * notebooks))
    float new_balance = (b - (p * n));
    // Define message that will print new balance
    string message = ("Your new balance is " + new_balance);
    cout << message << endl;
}