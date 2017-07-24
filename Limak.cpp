#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


int main(){
	int time, n, r, l, m;
	
	cin >> n;
	cin >> time;
	
	vector <int> t(n);
	
	time = 240 - time;
	
	for(int i = 1; i <= n; ++i){
		t[i] = i * 5;
		if(i > 1){
		    t[i] += t[i-1];
		}
	}
	
	l = 0;
	r = n + 1;
	
	while(r - l > 1){
		m = (r + l) / 2;
		if(t[m] > time){
			r = m;
		}else{
			l = m;
		}
	}
	cout << l <<endl;
	return 0;
}
