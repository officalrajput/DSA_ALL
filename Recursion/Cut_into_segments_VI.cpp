#include <iostream>
#include <climits>
using namespace std;
int cutSegment(int n, int &x, int &y, int &z)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }

    // Check for cases where a cut of x, y, or z can be made

    int a = cutSegment(n - x, x, y, z) + 1;

    int b = cutSegment(n - y, x, y, z) + 1;

    int c = cutSegment(n - z, x, y, z) + 1;

    // Return the maximum of a, b, c

    
    int ans = max(a, max(b, c));

    
    return ans;


}
int main()
{
    int x = 5;
    int y = 2;
    int z = 2;
    int n = 7;

    int ans = cutSegment(n, x, y, z);
    //ans me se two anser aye ga ek invalid or ek valid to ahme invlid to zero bana na hai to 
    //fir to hamara maximimum ho ga vo hi return ho ga invlid condition egnore ho jye gi
    if(ans<0)
    {
        ans=0;
    }

    //or we use this also 
    //   int maxi=max(ans,0);
    cout << ans << " ";
}