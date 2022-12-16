#include <bits/stdc++.h>
using namespace std;

string in;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(;;) {
        cin >> in;
        
             if(in == "CU") cout << "see you";
        else if(in == ":-)") cout << "I’m happy";
        else if(in == ":-(") cout << "I’m unhappy";
        else if(in == ";-)") cout << "wink";
        else if(in == ":-P") cout << "stick out my tongue";
        else if(in == "(~.~)") cout << "sleepy";
        else if(in == "TA") cout << "totally awesome";
        else if(in == "CCC") cout << "Canadian Computing Competition";
        else if(in == "CUZ") cout << "because";
        else if(in == "TY") cout << "thank-you";
        else if(in == "YW") cout << "you’re welcome";
        else if(in == "TTYL") {
            cout << "talk to you later";
            return 0;
        }
        
        else cout << in;
        
        cout << '\n';
    }
    
    return 0;
}
