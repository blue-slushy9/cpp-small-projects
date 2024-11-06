#include <iostream>
using namespace std;

int enter_number() {
	int num;
	cin >> num;
	return num;
}

int add_numbers(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum+=i;
    }
    return sum;
}

int main() {
    int number = enter_number();
    int sum = add_numbers(number);
    cout << sum;
}
