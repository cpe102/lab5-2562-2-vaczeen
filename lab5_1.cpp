#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	int i=0;
	while(i<N){

    cout << "Name of student " << i+1 <<  " = " ;
	cin>>name[N];
	i++;
	cout << "Age of student "<< i+1 << " = " ;
    cin>>age[N];
	i++;
	}

	
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	

	
	cout << "--------------------------------------\n";
	
	return 0;
}
