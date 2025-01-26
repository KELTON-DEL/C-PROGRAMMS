#include<iostream>
using namespace std;

//fuction decalration;

float calculate_simpleintrest(float rate,float principle,float time);

//code excution
int main(){
	float rate,principle,time,simpleintrest;
	
	// prompt the user to enter required fields
	cout<<"CODE TO CALCULATE SIMPLE INTREST"<<endl;
	
	cout<<"INPUT PRICIPLE"<<endl;
	cin>>principle;
	 
		cout<<"INPUT RATE"<<endl;
	cin>>rate;
	
		cout<<"INPUT TIME"<<endl;
	cin>>time;
	//perfom the calculatiuon
	simpleintrest=calculate_simpleintrest( rate,principle,time);

	cout<<"SIMPLE INTREST="<<simpleintrest;
	
	return 0;
}
	// function definition
	
	float calculate_simpleintrest(float rate,float principle,float time){
		return(rate*principle*time)/100;
	};

	