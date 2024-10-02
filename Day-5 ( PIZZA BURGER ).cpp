#include <iostream>
using namespace std;

int main() {
	int T, X, Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    if (X >= Y){
	    	
	    cout<<"Pizza"<<endl;
	    }
	    else if (X>=Z){
	    cout<<"Burger"<<endl;
	    }
	    else
	    {
	    cout<<"Nothing"<<endl;
	    }
	}
	return 0;

}