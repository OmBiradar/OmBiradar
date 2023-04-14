#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        int count=0; // This counts the number of times the number can be devided by two
        while(n){    // This while loop checks if the number is devisible by 2 and how many times
            if(n%2==0){
                count++;
                n=n/2;
            }
            else break;  // This is the exit condition when the number is reduced to a odd number
        }
        if(count%2) cout << "OFF" << endl;  // This checks the net effect the different monkeys have on this bulb
        else cout << "ON" << endl;
    }
    return 0;
}
