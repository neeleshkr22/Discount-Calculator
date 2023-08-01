#include<iostream>
using namespace std;

int main(){
	int bill;
	float discount , final_amt;
	cout<<"Enter the bill for discount:";
	cin>>bill;
	
	if(bill < 0){
		cout<<"We don't discount on only drinking water";
		exit(0);
		
	}
	else if(bill > 0 && bill < 100){
		cout<<"You got no discount";
		exit(0);
	}
	else if(bill > 100 && bill < 500){
		float discount = 0.1 * bill;
		cout<<"You got 10% discount: "<<discount<<endl;
		float final_amt = bill - discount;
		cout<<"The final amount is:"<<bill<<"-"<<discount<<"="<<final_amt<<endl;
		cout<<"Thank you for visiting";
		
		
	}else{
		float discount = 0.2 * bill;
		cout<<"You got 20% discount: "<<discount<<endl;
		float final_amt = bill - discount;
		cout<<"The final amount is: "<<bill<<"-"<<discount<<"="<<final_amt<<endl;
		cout<<"Thank you for visiting";
	}
	return 0;
}
