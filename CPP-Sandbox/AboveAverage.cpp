#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;
//Kattis problem can be found here: https://open.kattis.com/problems/aboveaverage
void main() {
	int C;
	string dataSet;
	string cont;	//Container
	cout << "enter a the number of data sets: ";
	cin >> C;
	double** aboveaverage = new double*[C];
	cout << "Enter the number of students followed by their scores (separated by spaces): ";
	getline(cin, dataSet);
	istringstream iss(dataSet);
	//copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter<string>(cont));
}