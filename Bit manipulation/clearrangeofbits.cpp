#include<bits/stdc++.h>
using namespace std;

int clearlastIbits(int n, int i){
	int mask = (-1<<i);

	return (n&mask);
}

int clearrangeofbits(int n, int i, int j){
	int mask = (-1<<j+1);
	int temp = ~(-1<<i);
	mask = mask|temp;

	return (n & mask);
}

int main(){
	int n = 15;
	int i = 1, j = 3;
	cout<<clearrangeofbits(n, i, j);

	return 0;
}