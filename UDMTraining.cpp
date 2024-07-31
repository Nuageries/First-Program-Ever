#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	bool running = true;
	char choice{};
	int adding_number{};
	vector <int> playlist{15, 34,80, 84};
	
	do {
		cout << endl;
	    cout << " P - Print numbers  " << endl;
		cout << " A - Add a number " << endl;
		cout << " M - Display mean of the numbers " << endl;
		cout << " S - Display the smallest number " << endl;
		cout << " L - Display the largest number " << endl;
		cout << " Q - Quit " << endl;
		cout << " \nEnter your choice: ";
		
		// User Input
		cin >> choice;

		if (choice == 'P' || (choice == 'p')) {
			if (!playlist.empty()) {
				cout << "[ ";
				for (int i{}; i < playlist.size(); ++i) {
					cout << playlist[i] << " ";
				}
				cout << "] ";
			}
			else
				cout << "[] - the list is empty ";
		}
		else if (choice == 'A' || (choice == 'a')) {
			cout << "Enter an integer to add to the list: ";
			cin >> adding_number;
			playlist.push_back(adding_number);
			cout << adding_number << " was added " << endl;

		}
		else if (choice == 'M' || (choice == 'm')) {
			if (!playlist.empty()) {
				int total{};


				for (auto num : playlist)
					total += num;

				cout << "The mean is: " << static_cast<double> (total) / playlist.size();

			}
			else
				cout << " Unable to calculate the mean - no data ";
		}
		else if (choice == 'S' || (choice == 's')) {
			if (!playlist.empty()) {
				auto minElement = min_element(playlist.begin(), playlist.end());
				cout << "The smallest element in the list is " << *minElement << endl;;
			}
			else
				cout << "Unable to determine the smallest number - list is empty ";
		}
		else if (choice == 'L' || (choice == 'l')) {
			if (!playlist.empty()) {
				auto maxElement = max_element(playlist.begin(), playlist.end());
				cout << " The largest number is " << *maxElement << endl;
			}
			else
				cout << "Unable to determine the largest number - list is empty ";
		}
		else if (choice == 'Q' || (choice == 'q')) {
			cout << " GoodBye! ";
			running = false;
		}
		else
			cout << "Unknown selection, please try again " << endl;


	} while (running);
	
	

	
	





	return 0;
}

