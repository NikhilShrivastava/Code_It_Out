//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define full INT_MAX
#define VL vector<ll>
#define VS vector<string>
#define LL list<ll> 
#define SL set<ll>
#define SC set<char>
#define USL unordered_set<ll>
#define USC unordered_set<char>
#define MSL multiset<ll>
#define MSC multiset<char>
#define MLL map<ll,ll>
#define MCL map<char,ll>
#define UMLL unordered_map<ll,ll>
#define UMCL unordered_map<char,ll>
#define MMLL multimap<ll,ll> 
#define MMCL multimap<char,ll>
#define SS stringstream
#define mkp make_pair
#define mkt make_tupple
#define er equal_range
#define bs binary_search
#define np next_permutation
#define ln length()
#define DO greater<ll>()
#define pb push_back
#define in insert
#define pop pop_back()
#define bg begin()
#define ed end()
#define F first
#define S second 
#define stf shrink_to_fit()
#define ig cin.ignore(1,'\n');
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define fm(s) for(auto [x,y] : s)
#define it(u) ::iterator E=u.bg
#define AI(a,n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(a,n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
#define TC cerr<<"\nTime elapsed: "<<1000*clock() /CLOCKS_PER_SEC <<"ms\n";

int main(){
    
/*  #ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
    #endif      */
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    T{
        string s;
        cin>>s;
        ll p=s.ln-1,x,y;
        ll q=s.ln/2;
        ll ans=0,r=0;
        MCL m;
        cin>>x>>y;
        m['a']=x;
        m['b']=y;
        m['/']=0;

        ll k=min(m['a'],m['b']);
        f(i,0,q){
        if(s[i]!=s[p-i]){
         if(s[i]=='/'||s[p-i]=='/'){
          ans=ans+m[s[i]]+m[s[p-i]];
         }
         else{
             cout<<-1<<"\n";
             r=1;
             break;
         }
        }
        else{
            if(s[i]==s[p-i]&&s[p-i]=='/')
            ans=ans+(2*k);
            
        }
        }
        if(r==0)
        cout<<ans<<"\n";
    }
}
