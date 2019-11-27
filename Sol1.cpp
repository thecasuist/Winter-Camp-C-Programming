#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, sum, temp, count = 0;
	cin >> n;
	while(n--){
		sum = 0;
		for(int i = 0; i < 3; i++){
			cin >> temp;
			sum+= temp;
		}
		if(sum >= 2){
			count++;
		}
	}
	cout << count;
	return 0;
}
