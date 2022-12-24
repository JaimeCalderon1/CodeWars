#include <string>
#include <iostream>


// upload to GIT or Review code cus its not passing kata

std::string disemvowel(const std::string& str)
{
    // index through string
    // remove vowels
    std::string disemvowel = str;
    
    for (int i = 0; i < disemvowel.size(); ++i)
    {
        if (disemvowel[i] == 97 || disemvowel[i] == 101 || disemvowel[i] == 105 || disemvowel[i] == 111 || disemvowel[i] == 117
            || disemvowel[i] == 79 || disemvowel[i] == 65 || disemvowel[i] == 69 || disemvowel[i] == 73 || disemvowel[i] == 85)
        {
            disemvowel[i] = 0;
        }
    }
    return disemvowel;
}

int main()
{
   std::cout<< disemvowel("This website is for losers LOL!");
}