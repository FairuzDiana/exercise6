#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string name;
	
    cout << "please enter your name"<< endl;
    getline(cin,name);
    reverse(name.begin(),name.end());
    cout << name << endl; 
}
