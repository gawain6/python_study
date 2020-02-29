#include <iostream>
using namespace std;

// 5로 나눔. 5로 떨어지면 몫이 ans.
// 5로 떨어지지 않으면 n<5*(ans+1)
// n<5*(ans+1) 이면 5*(ans+1)-2
// n>5*(ans+1) 이면 5*(ans+1)+3

int main() {
    int i, n, ans, total;
    cin >> n;
    if(n==1||n==2||n==4||n==7) ans=-1;
    else if(n>=5&&n%5==0) ans=n/5;
    else {
        ans=(n/5)+1;
        total=5*ans;
        while(1) {
            if(n==total) break;
            else if(n<total) total-=2;
            else if(n>total) {
                total+=3;
                ans++;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

// 1, 2, 4, 7, 

// 3 = 1 // 3
// 5 = 1 // 5
// 6 = 2 // 3 3
// 8 = 2 // 3 5
// 9 = 3 // 3 3 3
// 10 = 2 // 5 5
// 11 = 3 // 3 3 5
// 12 = 4 // 3 3 3 3 v
// 13 = 3 // 3 5 5
// 14 = 4 // 3 3 3 5 v
// 15 = 3 // 5 5 5
// 16 = 4 // 3 3 5 5 v
// 17 = 5 // 3 3 3 3 5
// 18 = 4 // 3 5 5 5 v
// 19 = 5 // 3 3 3 5 5
// 20 = 4 // 5 5 5 5 v
// 21 = 5 // 3 3 5 5 5
// 22 = // 3 3 3 3 5 5 v
// 23 = // 3 5 5 5 5
// 24 = // 3 3 3 5 5 5
// 25 = // 5 5 5 5 5
// 32 = 8 // 5 5 5 5 3 3 3 3
// 33 = 7 // 5 5 5 5 5 5 3
// 49 = 11 // 5 5 5 5 5 5 5 5 5 5
// 98 = // 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
// 97