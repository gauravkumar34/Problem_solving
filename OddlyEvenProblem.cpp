// <--- Case 1
//     Input: 4567
//     Expected Output: 2

// Explanation : Odd positions are 4 and 6 as they are pos: 1 and pos: 3,
// both have sum 10. Similarly, 5 and 7 are at even positions pos: 2 and pos: 4 with
// sum 12. Thus, difference is 12 – 10 = 2 --->

#include <bits/stdc++.h>
using namespace std;

int main(){

    char a[10] ;
    cin>> a;

    int even=0, odd=0,n,i=0;

    n = strlen(a);
    while(n>0){
        if(i==0){
            even += a[i] -48;
            n--;
            i=1;
        }
        else{
            odd += a[i] - 48;
            n--;
            i=0;
        }
    }
    cout<<abs(odd - even)<<endl;

    return 0;
}
