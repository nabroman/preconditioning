#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>

using namespace std;

int f(long long x){
	if (x == 1){
		return 1;
	}else if (x == 0){
		return 0;
	}else if (x % 2 == 0){
		return f(ceil(x / 2));
	}else{
		return f(ceil(x / 2)) + f(ceil(x / 2) + 1);
	}
}

int main(){
	long long n;
	
	ifstream in;  
    in.open("input.txt");
	
	in >> n;
	
	in.close();
	ofstream out; 
	out.open("output.txt");
	
	out << f(n);
	return 0;
}

