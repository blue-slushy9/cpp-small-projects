// One of the small SoloLearn exercises

#include <iostream>
using namespace std;

int calc_notebooks(float b, float p) {
    // number of notebooks = (balance / price)
    int notebooks = (b / p);
    return notebooks;
}

float calc_balance(float b, float p, int n) {
    // new_balance = (balance - (price * notebooks))
    float new_balance = (b - (p * n));
    return new_balance;
}

int main() {
    // your account's balance
    float balance = 2452.4f;
    // price for each notebook
    float price = 259.99f;

    // Calculate the number of notebooks you can afford and output it
    int notebooks = calc_notebooks(balance, price);
    cout << notebooks << endl;
    
    // Calculate the amount left over on your account after the purchase 
    // and output it on a new line
    double new_balance = calc_balance(balance, price, notebooks);
    cout << new_balance << endl;
}