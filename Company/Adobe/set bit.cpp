#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<__builtin_popcount(n)<<endl;
	}
	return 0;
}
