// One of the small SoloLearn projects, this is a simple program that issues
// a different type of ticket based on the user's age

#include <iostream>
// cctype includes the tolower() method
#include <cctype>
using namespace std;

// Declare function that takes age as input and capture it in a variable
int enter_age();

// Declare function that prints ticket type based on the age entered
string check_age(int num);

// Declare function that prints ticket type to terminal and prompts user for confirmation 
void confirm_ticket();

// Declare function that will contain the other functions in this program,
// to be used in case user makes a mistake and needs to backtrack
void all_functions();

int main() {
	// This function encapsulates all of the other functions in this program,
	// so it's the only one I need and the sub-functions can be re-run if needed
	all_functions();
}

/* Don't think I need this anymore, but keeping it for now just in case
int main() {
    int age = enter_age();
    // check_age() returns the price tier based on the age that is entered
    string price = check_age(age);
    confirm_ticket(age, price);
}
*/

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
		cout << ("Invalid number, let's try again.") << endl;
		// Call previous function recursively until a valid age is entered
		int correct_age = enter_age();
		// Call this function recursively to process the new age entered above
		check_age(correct_age);
	}
}

// Define function that prints ticket type to terminal and prompts user for confirmation
void confirm_ticket(int num, string type) {
	string message = "Okay, since the age of the person is " + age + ", your\n"
	                 "ticket will be " + type + ". Is this correct? [Y/n] ";
	// Print above message to terminal
	cout << message;
	// Declare variable that will store user's Yes or No response
	char y_n;
	cin >> y_n;
	// Convert the input to lower-case for easier processing
    y_n = tolower(y_n);
	if (y_n == "y") {
        cout << "Great! Here is your " + type + " ticket." << endl;
	}
	else if (y_n == "n") {
        cout << "Restarting program, please enter the correct age this time." << endl;
		// This essentially restarts the program so they can re-enter the age
		all_functions();
	}
    else {
		cout << "Please enter a valid response." << endl;
		// Call function recursively until a valid response is entered
		confirm_ticket(num, type);
	}
}

// Define function that will contain the other functions in this program,
// to be used in case user makes a mistake and needs to backtrack
void all_functions() {
    int age = enter_age();
    // check_age() returns the price tier based on the age that is entered
    string price = check_age(age);
    confirm_ticket(age, price);
}