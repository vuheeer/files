#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
	ofstream out{"abc.txt"};
	if (out) {
		out << a << endl;
		out << b << endl;
		out << c;
	}
	else {
		cout << "Could not write";
	}
	cout<<endl<<endl;
 
   return 0;
}
