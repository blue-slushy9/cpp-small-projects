// One of the small SoloLearn exercises

#include <iostream>
using namespace std;

// FUNCTION DECLARATIONS

// Calculate number of notebooks you can afford to buy
// b = balance, p = price
int calc_notebooks(float b, float p);

// Calculate remaining balance after purchasing notebooks
// n = number of notebooks
void calc_balance(float b, float p, int n);

int main() {
    // Starting account balance
    float balance = 2452.4f;
    // Price for each notebook
    float price = 259.99f;

    // Calculate the number of notebooks you can afford and output result
    int notebooks = calc_notebooks(balance, price);
    
    // Calculate the amount left over on your account after the purchase
    // and output it on a new line
    calc_balance(balance, price, notebooks);
}

// FUNCTION DEFINITIONS

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