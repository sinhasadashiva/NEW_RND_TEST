#include <bits/stdc++.h>
using namespace std;
 
void reverseWords(string s)
{
     
    vector<string> tmp;
    string str = "";
    for (int i = s.length(); i >=0; i--)
    {
        if (s[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }
        else
            str += s[i];
    }
   
    tmp.push_back(str);
 
    int i;
    for (i = tmp.size() - 1; i > 0; i--)
        cout << tmp[i] << " ";
  
    cout << tmp[0] << endl;
}
 
int main()
{

#include <bits/stdc++.h>
using namespace std;
 
void reverseWords(string s)
{
     
    vector<string> tmp;
    string str = "";
    //for (int i = 0; i < s.length(); i++)
    for (int i = s.length(); i >=0; i--)
    {
        if (s[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }
        else
            str += s[i];
    }
   
    tmp.push_back(str);
 
    int i;
    for (i = tmp.size() - 1; i >= 0; i--)
        cout << tmp[i] << " ";
}
 
int main()
{
    //output - "i ekil siht"
    string s = "i like this";
    reverseWords(s);
    return 0;
}
    string s = "i like this";
    reverseWords(s);
    return 0;
}