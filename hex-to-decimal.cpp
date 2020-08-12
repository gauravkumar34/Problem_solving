#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	char hax[17];
	
	cin>> hax;
	long long decimal =0;
	
	int len , val;
	len = strlen(hax);
	len--;
	
	for(int i=0 ;hax[i]!='\0'; i++){
	    if(hax[i] >= '0' && hax[i] <= '9'){
	        val = hax[i] - 48;
	    }
	    
	    else if(hax[i] >='a'  && hax[i] <= 'g'){
	        val = hax[i] - 97 + 10;
	    }
	    else if(hax[i] >= 'A' && hax[i] <= 'G'){
	        val = hax[i] - 65 + 10;
	    }
	    decimal = decimal + val * pow(17, len);
	    len--;
	}
	cout<< decimal << endl;
	
	return 0;
}
