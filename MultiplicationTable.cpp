// Preprocessor directives
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

	//Mulitiplication table 
	cout << setw(30) << "MULTIPLICATION TABLE" << endl;
	cout << "========================================" << endl << endl;

	cout << setw(5) << "n" << setw(10) << "10*n" << setw(10) << "100*n" << setw(10) << "1000*n" << endl
		<< "----------------------------------------" << endl;

	//For loop goes through 1 to 15 and sets i*n in the table
	for (int i = 1; i <= 15; i++) {
		cout << setw(5) << i << setw(10) << 10 * i << setw(10) << 100 * i << setw(10) << 1000 * i << endl;
	}
	return 0;
}
