#include <iostream>
#include <vector>
using namespace std;

double sum();
void equality(int a);
std::vector<double> vals;
int main() {
	bool sentry = true;
	int x;
	while (sentry = true) {
		std::cout << "Please select grade" << std::endl;
		std::cout << "1.)A\n2.)A-\n3.)B+\n4.)B\n5.)B-\n6.)C+\n7.)C\n8.)C-\n9.)D+\n10.)D\n11.)D-\n12.)F\n13.)ALL GRADES INPUTTED" << std::endl;
		std::cin >> x;
		if (x == 13) {
			sentry == false;
			break;
		}
		equality(x);
	}
	std::cout << "Your gpa is " << sum() << std::endl;
}
void equality(int a) {
	if (a == 1) {
		vals.push_back(4.0);
	}
	else if (a == 2) {
		vals.push_back(3.7);
	}
	else if (a == 3) {
		vals.push_back(3.3);
	}
	else if (a == 4) {
		vals.push_back(3.0);
	}
	else if (a == 5) {
		vals.push_back(2.7);
	}
	else if (a == 6) {
		vals.push_back(2.3);
	}
	else if (a == 7) {
		vals.push_back(2.0);
	}
	else if (a == 8) {
		vals.push_back(1.7);
	}
	else if (a == 9) {
		vals.push_back(1.3);
	}
	else if (a == 10) {
		vals.push_back(1.0);
	}
	else if (a == 11) {
		vals.push_back(0.7);
	}
	else if (a == 12) {
		vals.push_back(0.3);
	}
}

double sum() {
	double gpa = 0.0;
	for (int i = 0; i < vals.size(); i++) {
		gpa = gpa + vals.at(i);
	}
	gpa = gpa / vals.size();
	return gpa;
}