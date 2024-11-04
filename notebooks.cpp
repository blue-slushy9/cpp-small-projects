// One of the small SoloLearn exercises

#include <iostream>
using namespace std;

int calc_notebooks(auto b, auto p) {
    int notebooks = (b / p);
    return notebooks;
}

double calc_balance(auto b, auto p, int n) {
    // new_balance = (balance - (price * notebooks)
    double new_balance = (b - (p * n));
    return new_balance;
}

int main() {
    // your account's balance
    auto balance = 2452.4;
    // price for each notebook
    auto price = 259.99;

    // Calculate the number of notebooks you can afford and output it
    int notebooks = calc_notebooks(balance, price);
    cout << notebooks << endl;
    
    // Calculate the amount left over on your account after the purchase and output it on a new line
    double new_balance = calc_balance(balance, price, notebooks);
    cout << new_balance << endl;
}
