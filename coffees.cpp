// One of the small SoloLearn exercises

#include <iostream> 
using namespace std;
#include <map>

std::map<int, std::string> create_map() {
	std::map<int, std::string> coffees;

    coffees[1] = "Espresso";
    coffees[2] = "Americano";
    coffees[3] = "Cappuccino";
    coffees[4] = "Latte";
    // Curious whether the below would work...
	//string coffees_prefix = "std::map<int, std::string> ";
    return coffees;//, coffees_prefix;
}

/*
print_selection(coffees) {
	cout 
}
*/

void switch_coffee(int num, std::map<int, std::string> coffees) {
	switch(num) {
		case 1:
		    cout << coffees[1];
		    break;
		case 2: 
		    cout << coffees[2];
		    break;
		case 3:
		    cout << coffees[3];
		    break;
		case 4: 
		    cout << coffees[4];
		    break;
		default:
		    cout << "Invalid entry, please enter an integer between 1 - 4.";
	}
}

int main() {
    int choice;
    cin >> choice;
    std::map<int, std::string> coffees = create_map();
    switch_coffee(choice, coffees);

}
