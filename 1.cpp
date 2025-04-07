#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));

	int numnotes, freq, dur;
	cout << "Enter number";
	cin >> numnotes;
	

	ofstream outfile("notes.txt");
	 
	if (!outfile) {
		cout << "Error: Could not create notes.txt" << endl;
		return 1;
	}
	for (int i = 0; i < numnotes; ++i) {
		freq = rand() % 500 + 200;
		dur = rand() % 500 + 200;
		outfile << freq << " " << dur << endl;
}

cout << "notes.txt has been created with " << numnotes << " random notes." << endl;
outfile.close();

return 0;
}
   
