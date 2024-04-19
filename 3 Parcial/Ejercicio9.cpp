#include <iostream>
using namespace std;

int main(){
	int n = 1;
	cout<<"N\t 10*N\t 100*N\t 1000*N"<<endl;
	while (n<=5){
		cout<<n<<"\t"<<10*n<<"\t"<<100*n<<"\t"<<1000*n<<endl;
		n++;
	}
	return 0;
}
