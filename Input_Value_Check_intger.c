#include <iostream>

using namespace std;

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}

int main()
{
    string a,b;
    bool a1,a2;
    cout<<"enter the value>> ";
    cin>>a>>b;
    
    a1 = isNumber(a);
    a2 = isNumber(b);
    
    if(a1 == true && a2 == true)
    {
        int aa,bb;
        aa = stoi(a);
        
        bb = stoi(b);
        
        int z =(aa+bb)*100; 
        cout<<"final value::>> "<<z;
    }
    else
    {
            cout<<"invalid input";
    }
    
    

    return 0;
}
