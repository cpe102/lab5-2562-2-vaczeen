#include<iostream>
#include<string>
using namespace std;
string mixText(string a,string b)
{
	int i=0;
	int L=a.size();
	int o=b.size();
	string x="";
	
	if(L==o){	
	while(i<L)
	{
	x=x+a[i]+b[i];
		i++;
	}
	return x;	
}else{
		return "E";
	}


}
int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
