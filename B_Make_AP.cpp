//Shashank Shekhar
//title: B_Make_AP.cpp
//date: 2023-06-03 16:15:25
//Path: ~/Desktop/lets code/B_Make_AP.cpp
//bool cmp (pair<string,int> &a, pair <string ,int> &b){return a.second<b.second;}
//int mx = *max_element(v.begin(), v.end())
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fi(n)        for(int i=0;i<n;i++)
#define el endl;
signed main() 
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int a, b, c;
    cin >> a >> b >> c;

    int new_a = b - (c - b);
    int new_b = a + (c - a)/2;
    int new_c = a + 2*(b - a);
    if(new_a >= a && new_a % a == 0 ) {
        cout << "YES\n";
        
    }
     else if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 ) {
        cout << "YES\n";
    }
    else if(new_c >= c && new_c % c == 0 ) {
        cout << "YES\n";
    }
    else{
    cout << "NO\n";
    }
    

}
}