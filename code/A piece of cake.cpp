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
        int parallel=0, perpendicular=0;
        if(n%2==1){
            cout << n-1 << endl;
        }else{
            n=n/2;
            int close_sqrt = sqrt(n);
            parallel = close_sqrt;
            while(n%parallel!=0){
                parallel--;
            }
            perpendicular = n/parallel -1;
            cout << perpendicular + parallel << endl;
        }
    }
    return 0;
}
