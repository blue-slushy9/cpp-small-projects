// One of the small SoloLearn projects, this is a simple program that issues
// a different type of ticket based on the user's age

#include <iostream>
using namespace std;

// Declare function that takes age as input and capture it in a variable
int enter_age();

// Declare function that prints ticket type based on the age entered
void check_age(int num);

int main() {
    int age = enter_age();
    string price = check_age(age);
    
}

// Define function that takes age as input and capture it in a variable
int enter_age() {
	int num;
	cout << ("Please enter your age now: ");
	cin >> num;
	return num;
}

// Define function that prints ticket type based on the age entered
string check_age(int num) {
	if (num >= 0 && num <= 3) {
		string price = "Free";
	}
	else if (num >= 4 && num <= 6) {
		string price = "Discounted";
	}
	else if (num >= 7) {
		string price = "Normal";
	}
	else {
		cout << ("Invalid number, please enter a real age: ") << endl;
		// Call function recursively until valid age is entered
		check_age(num);
	}
}

void print_confirmation(int num, string ) {
	cout << "Okay, since the age of the person is " + age + \", your ticket will be " + num "!";
}