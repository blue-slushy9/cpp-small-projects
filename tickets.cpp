// One of the small SoloLearn projects

#include <iostream>
using namespace std;

int take_input() {
	int num;
	cin >> num;
	return num;
}

void check_age(int num) {
	if (num >= 0 && num <= 3) {
		cout << "Free";
	}
	else if (num >= 4 && num <= 6) {
		cout << "Discounted";
	}
	else if (num >= 7) {
		cout << "Normal";
	}
	else {
		cout << "Invalid number, please enter a real age";
	}
}

int main() {
    int age = take_input();
    check_age(age);
}
