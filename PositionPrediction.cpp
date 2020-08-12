// Position prediction

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x=0, y=0, distance = 10;

    char c = 'R';

    while(n){
        switch(c){
            case 'R':
                x += distance;
                c = 'U';
                distance += 10;
                break;
            case 'U':
                y += distance;
                c = 'L';
                distance +=10;
                break;
            case 'L':
                x -= distance;
                c = 'D';
                distance += 10;
                break;
            case 'D':
                y -= distance;
                c = 'A';
                distance += 10;
                break;
            case 'A':
                x += distance;
                c = 'R';
                distance += 10;
                break;
        }
        n--;
    }

    cout<< x << " " << y ;
    return 0;
}
