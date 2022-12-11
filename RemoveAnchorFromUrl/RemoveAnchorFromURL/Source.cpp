#include <iostream>
#include <string>


std::string replaceAll(std::string str)
{
	// index thru string 
	// if (#) and add /0 
	// index through string
	for (int i = 0; i<str.length(); i++)
	{
		// loop through string until anchor #
		if (str[i] == 35)
		{
			str[i] = 0;
			for (int j = i;j<str.length();j++)
			{
				str[j] = 0;
			}
		} 
			
	}
	
	return str;
}

int main()
{
	std::cout << replaceAll("www.codewars.com?page=1");

}