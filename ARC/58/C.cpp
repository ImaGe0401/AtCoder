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
    LL N,K;
    cin >> N >> K;
    LL D[K];
    REP(i,K) cin >> D[i];
    LL num[10];
    for(int i=0;i<=9;++i){
        num[i]=i;
    }
    sort(D,D+K);
    LL count[10]={0};
    pair<int,int> res[10];
    for(int i=0;i<K;++i){
        ++count[D[i]];
    }
        for(int i=0;i<=9;++i){
        res[i]=make_pair(num[i],count[i]);
    }
        int num_zero=0;
              for(int i=0;i<=9;++i){
                  if(res[i].second==0){
                      ++num_zero;
                  }
    }
    LL kakuho[num_zero];
    LL pos=0;
    for(int i=0;i<=9;++i){
                  if(res[i].second==0){
                      kakuho[pos]=res[i].first;
                      ++pos;
                  }
    }

    int min=N;
    int insu=0;
    int tmp_1=0;
    int ans=0;
    bool exist=false;
    for(int i=min;i<=999999;++i){
        exist=false;
        insu=i;
        ans=insu;
        while(insu>0){
            exist=false;
            tmp_1=insu%10;
            insu=insu/10;
        for(int j=0;j<num_zero;++j){
            if(tmp_1==kakuho[j]){
                exist=true;
                continue;
            }
        }
        if(exist==false){
            break;
        }
    }
    if(exist==true){
        break;
    }
    else{
        continue;
    }
    }
    cout << ans;
    }