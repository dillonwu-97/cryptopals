/*

*/

#include <openssl/ssl.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	// reading file
	string lines = "";
	auto filename = "file.txt";
	ifstream ifs (filename, std::ifstream::in);
	while (ifs.good()) {
		// cout << ifs.get() << endl;
		string line;
		ifs >> line;
		// cout << line << endl;
		lines += line;
	}
	cout << lines;

	

}