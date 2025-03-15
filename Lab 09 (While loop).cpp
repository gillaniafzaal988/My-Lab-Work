#include<iostream>
using namespace std;
int main()
/*{
	int N;
	cout<<"Enter the number:";
	cin>>N;
	int count=1;
	while(count!=N+1)
	{
		
		cout<<count++;
		cout<<endl;
	}
	return 0;
	
}*/
//******************************************multiplication table***************************//
/*
{
	int table,no=1;
	cout<<"Enter table you want to see:";
	cin>>table;
	while (no!=11){
		cout<<table<<"*"<<no<<"="<<table*no<<endl;
		no++;
		
	}
	return 0;
	
}*/
//************************************positive no checker***************************************//

/*{
   int no;
   cout<<"enter your no:";
   cin>>no;
   while(no<=0)	{
   	cout<<"Error!Enter again:";
   cin>>no;
   }
   	return 0;
}*/
//*************************************banking system**********************************//	
/*
{
    int balance=1000,choice,amount;

    while (choice!=4) {
        cout<<"\n===== Banking System =====\n";
        cout<<"1. Check Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"Your current balance is: $"<<balance<<endl;
                break;
            case 2:
                cout<<"Enter amount to deposit: $";
                cin>>amount;
                if (amount>0) {
                    balance+=amount;
                    cout<<"Deposit successful! New balance: $"<<balance<<endl;
                } else {
                    cout<<"Invalid amount!\n";
                }
                break;
            case 3:
                cout<<"Enter amount to withdraw: $";
                cin>>amount;
                if (amount>0 && amount<=balance) {
                    balance-=amount;
                    cout<<"Withdrawal successful! New balance: $" <<balance<< endl;
                } else {
                    cout<<"Insufficient balance or invalid amount!\n";
                }
                break;
            case 4:
                cout<<"Thank you for using the Banking System.\n";
                break;
            default:
                cout<<"Invalid choice! Try again.\n";
        }
    }

    return 0;
}
*/
//***********************sum************************************************//
/*
{
int a=1,sum=0;
while(a<=5){
	sum+=a;
	a++;
}
cout<<sum;
}*/
