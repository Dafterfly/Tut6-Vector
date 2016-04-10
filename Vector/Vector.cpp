#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <ctime>
using namespace std;

int main() {
	vector <int> vect; // create an arbitrary sized vector

	int i;

	int randomNo;
	// Generate array
	srand(time(NULL)); // seed randomizer
	for (i = 0; i < 20; i++) {
		randomNo = rand() * 99 + 1; // randomize numbers across an arbitrary range
		vect.push_back(randomNo);
	}

	// Print Generated array
	cout << "Generated array:" << endl;
	for (i = 0; i < 20; i++) {
		cout << vect.at(i) << endl;
	}
	cout << endl;

	// Sort array - sort() sorts in ascending order
	sort(vect.begin(), vect.end());
	reverse(vect.begin(), vect.end()); // reverse to get in descending order

	// Print Sorted array
	cout << "Sorted array:" << endl;
	for (i = 0; i < 20; i++) {
		cout << vect.at(i) << endl;
	}

	return 0;
}