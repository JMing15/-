#include<sstream>
using namespace std;

string reverseWords(string s) {
        istringstream istream(s);
        string temp = "";
        istream >> s;
        while (istream >> temp)
            s = temp + " " + s;
        if(s[0] == ' ')
            return "";
        return s;
    }

int main()
{

}