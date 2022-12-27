#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	// convert float to string class object
	float f = 1.75;
	string s =  to_string(f);
	cout << s << endl;

	// convert string object to char array
	const char *carr = s.c_str();
	cout << carr << endl;
	return 0;
}
