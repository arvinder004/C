//to get the ASCII 	value of alphabets.

#include<bits/stdc++.h>
using namespace std;
main()
{
	char arr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	cout<<"ASCII OF ALPHABETS ARE::"
	for(int i=0;i<=52;i++){
		cout<<arr[i]<<"|"<<(int)arr[i]<<endl;
	}
	
}
