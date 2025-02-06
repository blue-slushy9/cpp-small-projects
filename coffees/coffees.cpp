// One of the small SoloLearn exercises, this is a simple program that prints
// the coffee menu and allows the user to place an order

#include <iostream>
#include <map>
using namespace std;

// Declare function that creates map of the different coffees
map<int, string> create_map();

// Declare switch function for selecting a coffee
void switch_coffee(int num, map<int, string> coffees);

// Declare function that prints coffee menu by iterating over the map
void print_menu(map<int, string> coffees);

// Declare function that prompts user for their choice in coffee
void choose_coffee(map<int, string> coffees);

int main() {
	// Create map of the different coffees, capture in variable
    map<int, string> coffees = create_map();
	print_menu(coffees);
	// Enter selection and print it to terminal
	choose_coffee(coffees);
}

// Define function that creates map of the different coffees
map<int, string> create_map() {
	// Key is int, Value is string
	map<int, string> coffees;
    (
    coffees[1] = "Espresso";
    coffees[2] = "Americano";
    coffees[3] = "Cappuccino";
    coffees[4] = "Latte";
	)
    return coffees;
}

// Define switch function for selecting a coffee
string switch_coffee(int num, map<int, string> coffees) {
	switch(num) {
		case 1:
		    return coffees[1];
		case 2: 
		    return coffees[2];
		case 3:
		    return coffees[3];
		case 4: 
		    return coffees[4];
		default:
		    cout << ("Invalid entry, please enter an integer between 1 - 4.");
			// Call function recursively until valid entry is submitted
			switch_coffee(num, coffees);
	}
}

// Define function that prints coffee menu by iterating over the map
void print_menu(map<int, string> coffees) {
    cout << ("Here are the menu items: ") << endl;
	// Iterate over contents of coffees map and print menu,
	// 'const auto& pair' automatically detects the key-value types
	for (const auto& pair : coffees) {
		// 'pair.first' prints key, 'pair.second' prints value
		cout << pair.first << ". " << pair.second << endl;
	}
}

// Define function that prompts user for their choice in coffee
void choose_coffee(map<int, string> coffees) {
	int order;
	cout << ("Please enter the number of the coffee you want now: ");
	cin >> order;
	// Call switch_coffees function
	string coffee = switch_coffee(order, coffees);
	// Confirm the order
	cout << "You chose a " + coffee + ", sounds delicious! Enjoy." << endl;
}