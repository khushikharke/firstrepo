// table of nth number upto 10
// n read and print table
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	for (int i=1;i<=10;i++){
		cout<<n<<"X"<<i<<"="<<i*n<<endl;
	}
	return 0;
}