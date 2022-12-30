#include <iostream>
#include <string>
using namespace std;

/*
*  Input a string and reverse it as output
* 
* 'world'  =>  'dlrow'
* 'word'   =>  'drow'
* 
* 
* 
* 
* 
*/

string reverseString(string str)
{
	string reverse;
	for (string::reverse_iterator it = str.rbegin(); it != str.rend(); ++it)
		reverse = reverse + *it;
	return reverse;
	
	
}



int main()
{
	cout<<reverseString("word");
}