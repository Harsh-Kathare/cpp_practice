#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cout << "Enter the decimal you want to convert into binary:";
	cin >> n;
	int temp = n;
	int rem,pow =1,ans =0;
	while(n > 0){
		rem = n % 2;
		n /= 2;
		ans += rem * pow;
		pow *= 10;
	}
	cout <<temp <<" in binary is: " << ans;
}