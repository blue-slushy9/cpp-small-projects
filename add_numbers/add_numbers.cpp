#include <iostream>
#include <string>
#include <format>
using namespace std;

// Declare the function that takes the base number as input, then returns it
int enter_number();

// Declare the function that performs the addition, then returns the sum
int add_numbers(int n);

// Declare the function that will print the final value to the terminal
string final_value(int num);

int main() {
    int number = enter_number();
    int sum = add_numbers(number);
    string final = final_value(sum);
    cout << final << endl;
}

// Define the function that takes the base number as input, then returns it
int enter_number() {
	int num;
    cout << "Please enter your base integer on which the addition calculations "
         << "will be performed: ";
	cin >> num;
	return num;
}

// Define the function that performs the addition, then returns the sum
int add_numbers(int n) {
    // Initialize sum at 0
    int sum = 0;
    // We start by adding 1 to the sum, and end by adding n to the sum
    for (int i=1; i<=n; i++) {
        sum+=i;
    }
    return sum;
}

// Define the function that will print the final value to the terminal
string final_value(int num) {
    string message = format("Final value: {}", num);
    return message;
}