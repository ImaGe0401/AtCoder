//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;
 
//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
 
//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}
 
//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
 
//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
 
//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define fore(i,a) for(auto &i:a)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
 
//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))
 
//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
 

LL gcd(LL a, LL b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

LL lcm(LL a, LL b){
    LL g = gcd(a,b);
    return a/g *b;
}

int main(){
    int N;
    cin >> N;
    int a[N];
    REP(i,N) cin >> a[i];
    sort(a,a+N);
    int num[8]={0};
    int act=0;
    int res=0;
    int nokori=0;
    int tmp=0;
    while(res<8){
        while(tmp<N && a[tmp]<=(res+1)*400-1 && a[tmp]>=res*400){
            num[res]=num[res]+1;
            ++tmp;
    }
    ++res;    
    }
    int color=0;
    REP(i,8){
        act+=num[i];
        if(num[i]>0){
            ++color;
        }
    }
    nokori=N-act;
    int num_max=0,num_min=0;
    if(color>0){
    num_min=color;
    num_max=color+nokori;
    }
    else{
        if(nokori>=0){
        num_min=1;
        num_max=nokori+color;
    }
    }
    cout << num_min << " " << num_max;
}