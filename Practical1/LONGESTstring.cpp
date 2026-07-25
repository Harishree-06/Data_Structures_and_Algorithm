#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, word, longest;
    getline(cin, str);
    str = str + " ";
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            word = word + str[i];
        }
        else{
            if(word.length() > longest.length())
                longest = word;
                word = "";
        }
    }
    cout << longest << endl;
    cout << longest.length();
    return 0;
}