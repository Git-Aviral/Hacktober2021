// contributed by Ankit Kumar Srivastava for Hacktoberfest 2021



/* Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the count of possible binary trees which are balanced.
This number can be huge, so return output modulus 10^9 + 7.
Write a simple recursive solution.
Input Format :
Integer h
Output Format :
Count % 10^9 + 7
Input Constraints :
1 <= h <= 40
Sample Input 1:
3
Sample Output 1:
15
Sample Input 2:
4
Sample Output 2:
315 */

#include<iostream>
using namespace std;
typedef long long int ll;
ll m=1000000000+7;
ll balancedBTs(ll h) {

    if(h==0||h==1)
	{
		return 1;
	}
	ll x = balancedBTs(h - 1);
	ll y = balancedBTs(h - 2);
	ll ans= (x*x) + 2 * (x * y);
	return ans % m;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    cout << balancedBTs(n)%m << "\n";
    return 0;
}
