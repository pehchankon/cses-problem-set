#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << "1";
        return 0;
    }
    if(n<4)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }
    for(int i=n%2?n:n-1; i>=1; i-=2)
    {
        cout << i << " "; 
    }
    for(int i=n%2?n-1:n; i>=2; i-=2)
    {
cout << i << " ";
    }
    cout << endl;
}