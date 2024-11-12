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
	// check_age() returns the price tier based on the age that is entered
    string price = check_age(age);
    confirm_ticket();
}

// Define function that takes age as input and capture it in a variable
int enter_age() {
	int num;
	cout << ("Please enter your age now: ");
	cin >> num;
	return num;
}

// Define function that encapsulates enter_age and 

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
		cout << ("Invalid number, let's try again.") << endl;
		// Call previous function recursively until a valid age is entered
		int correct_age = enter_age();
		// Call this function recursively to process the new age entered above
		check_age(correct_age);
	}
}

void confirm_ticket(int num, string ) {
	cout << "Okay, since the age of the person is " + age + \", your ticket will be " + num "!" \
	        "Is this correct? [Y/n] ";
    char y_n;
	cin >> y_n;
	if (y_n == "y") {

	}
	else if (y_n == "n") {

	}
    else {
		cout << "Please enter a valid response." << endl;
		confirm_ticket()
	}
}