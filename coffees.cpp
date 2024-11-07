// One of the small SoloLearn exercises

#include <iostream>
#include <map>
using namespace std;

// Declare function that creates map of the different coffees
map<int, string> create_map();

// Declare switch function for selecting a coffee
void switch_coffee(int num, map<int, string> coffees);

// Declare function that prompts user for their choice in coffee
void choose_coffee();

int main() {
    map<int, string> coffees = create_map();
	int choice = choose_coffee();
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

// Define function that prompts user for their choice in coffee
void choose_coffee() {
	cout << ("Here are the menu items: ") << endl;
	// Iterate over contents of coffees map and print menu,
	// 'const auto& pair' automatically detects the key-value types
	for (const auto& pair : coffees) {
		// 'pair.first' prints key, 'pair.second' prints value
		cout << pair.first << ". " << pair.second << endl;
	}
	cout << ("Please enter the number of the coffee you want now: ");
	int order;
	cin >> order;
	// Call switch_coffees function
	string coffee = switch_coffee(order, map<int, string> coffees);
	// Confirm the order
	cout << "You chose a " + coffee + ", sounds delicious! Enjoy." << endl;
}