#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <ctime>

using namespace std;

int main() 
{
	vector <int> vect; // create an arbitrary sized vector
	
	int i;
	
	int randomNo;
	// Generate vector
	srand(time(NULL)); // seed randomizer
	for (i = 0; i < 20; i++) 
	{
		randomNo = rand() % 99 + 1; // randomize numbers across an arbitrary range
		vect.push_back(randomNo);
	}
	
	// Print Generated vector
	cout << "Generated vector:" << endl;
	for (i = 0; i < 20; i++) 
	{
		cout << vect.at(i) << endl;
	}
	cout << endl;
	
	// Sort vector - sort() sorts in ascending order
	sort(vect.begin(), vect.end());
	reverse(vect.begin(), vect.end()); // reverse to get in descending order
	
	// Print Sorted vector
	cout << "Sorted vector:" << endl;
	for (i = 0; i < 20; i++) 
	{
		cout << vect.at(i) << endl;
	}
	
	return 0;
}