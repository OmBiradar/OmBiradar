#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n<=1199) cout << "GREY" << endl;
        else if(n<=1399) cout << "GREEN" << endl;
        else if(n<=1599) cout << "CYAN" << endl;
        else if(n<=1899) cout << "BLUE" << endl;
        else if(n<=2099) cout << "PURPLE" << endl;
        else if(n<=2299) cout << "YELLOW" << endl;
        else if(n<=2399) cout << "ORANGE" << endl;
        else cout << "RED" << endl;
    }
    return 0;
}
