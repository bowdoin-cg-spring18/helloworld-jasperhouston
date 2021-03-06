#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char** argv) {
	if (argc > 2) {
		cout << "Too many arguments. Try:" << endl;
		cout << "To print -Hello World from Jasper!- type ./hello" << endl;
		cout << "To print -Hello World!- x times, type ./hello x, where x is an integer > 0" << endl;
		return 0;
	}
	if (argc == 2) {
		int x;

		try {
			x = stoi(argv[1]);
		}
		catch(std::invalid_argument& e) {
			cout << "Invalid argument: not an integer" << endl;
			return EXIT_FAILURE;
		}

		if (x > 0) {
			for (int i = 0; i < x; i++) {
				cout << "Hello World!" << endl;
			}
			return 0;
		} else {
			cout << "Cannot print a negative number of phrases." << endl;
			return 0;
		}

	}

	cout << "Hello World from Jasper!" << endl;
	return 0;
}
