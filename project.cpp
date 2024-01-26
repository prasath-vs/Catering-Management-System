#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>
using namespace std;
class catering
{
	public:
		void service()
		{
			string NameOfEvent, CustomerName;
			double NumberOfGuests;
			int NumberOfMinutes;
			int NumberOfServers, Cost1;
			double CostForOneServer,Test, TotalFoodCost, AverageCost, Cost2, DepositAmount,TotalCost;
			
			cout<<"Enter the name of the event "<<endl;
			cin>>NameOfEvent;
			cout<<"Enter the customer name: "<<endl;
			cin>>CustomerName;
			cout<<"Enter the number of guests "<<endl;
			cin>>NumberOfGuests;
			cout<<"Enter the number of minutes in the event "<<endl;
			cin>>NumberOfMinutes;
			
			cout<<"\n\tCATERING SERVICE"<<endl;
			cout<<"\t----------------"<<endl;
			cout<<"\nEvent estimate for "<<CustomerName<<endl;
			

			const double CostPerHour = 50.50;
			const double CostPerMinute = 5.40;
			const double CostOfDinner = 70.70;
			
			Test = NumberOfGuests / 20;
			NumberOfServers = ceil(Test);
			
			Cost1 = (NumberOfMinutes / 60) * CostPerHour;
			Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
			CostForOneServer = Cost1 + Cost2;
			
			TotalFoodCost = NumberOfGuests * CostOfDinner;
			AverageCost = TotalFoodCost / NumberOfGuests;
			TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);
			DepositAmount = TotalCost * .25;
			
			cout<< "\nNumber Of Server: "<<NumberOfServers<<endl;
			cout<< "\nThe Cost per Server: "<<CostForOneServer<<endl;
			cout<< "\nThe Cost for Food is: "<<TotalFoodCost<<endl;
			cout<< "\nAverage Cost Per Person: "<<AverageCost<<endl;
			cout<< "\n\nTotal cost is: "<<TotalCost<<endl;
			cout<< "\nFood Avaliable: Veg starters, Veg Meals, drinks etc..."<<endl;
			cout<< "\nPlease deposite a 25% deposit to reserve the event"<< endl;
			cout<< "The deposit needed is: "<<DepositAmount<< endl;
			cout<<"\n\n\tTHANK YOU!!";
		}
		void food()
		{
			cout<<"\n\t---------";
			cout<<"\n\tBREAKFAST";
			cout<<"\n\t---------";
			cout<<"\n\n 1. Idli";
			cout<<"\n 2. Dosa (and its varieties)";
			cout<<"\n 3. Appam";
			cout<<"\n 4. Pongal (and its varieties)";
			cout<<"\n 5. Medu Vada";
			cout<<"\n 6. Upma";
			cout<<"\n 7. Idiyappam";
			cout<<"\n 8. Puttu";
			cout<<"\n 9. Poori";
			cout<<"\n 10. Adai";

			cout<<"\n\n\t-----";
			cout<<"\n\tLUNCH";
			cout<<"\n\t-----";
			cout<<"\n1. Sambar (Mixed veg sambar/Radish sambar/Drumstick sambar/Onion sambar)";
			cout<<"\n2. Rasam";
			cout<<"\n3. Curry (Potato curry, Brinjal curry, Raw banana curry)";
			cout<<"\n4. Poriyal (Vendakkai poriyal, Mixed veg poriyal, Cabbage poriyal)";
			cout<<"\n5. Kootu (Keerai kootu, cabbage kootu, Avial, Mixed veg kootu)";
			cout<<"\n6. Pachadi (Gooseberry pachadi or simple carrot pachadi)";
			cout<<"\n7. Pickle (Raw mango pickle,Gooseberry pickle)";
			cout<<"\n8. Payasam";
			cout<<"\n9. Vada (Urad dal vada, Masala vada)";
			cout<<"\n10. Ice cream";

			cout<<"\n\n\t------";
			cout<<"\n\tDINNER";
			cout<<"\n\t------";
			cout<<"\n1. Idli";
			cout<<"\n2. Dosa (and its varieties)";
			cout<<"\n3. Poori with chickpea curry";
			cout<<"\n4. Porotta";
			cout<<"\n5. Naan with panner curry";
			cout<<"\n6. Payasam";
			cout<<"\n7. Ice cream";
		}
};
int main()
{
	int n;
	catering c;
	string eid,pass,ch;
	cout<<"\n\t\tLogin System";
	cout<<"\n\t\t------------";
	cout<<"\n Email id : ";
	cin>>eid;
	cout<<" Password : ";
	for(int i=1;i<=6;i++)
	{
		ch= getch();
		pass +=ch;
		cout<<"*";
	}
	if(eid == "catering@gmail.com" && pass == "123456")
	{
		system("cls");
	do{
		cout<<"\n\n\t\t\t\t--------------------------";
		cout<<"\n\t\t\t\tCATERING MANAGEMENT SYSTEM";
		cout<<"\n\t\t\t\t--------------------------";
		cout<<"\n\t\t\t\t         PURE VEG";
		cout<<"\n\t\t\t\t--------------------------";
		cout<<"\n\t\t\t\t1. Book Catering Service";
		cout<<"\n\t\t\t\t2. Available Food";
		cout<<"\n\t\t\t\t3. Exit";
		cout<<"\n\n\t\t\t\tEnter your option: ";
		cin>>n;
	switch(n)
	{
		case 1:
			{
				c.service();
				break;
			}
		case 2:
			{
				c.food();
				break;
			}
	}
	}
	while(n!=3);
	}
	else
	{
		cout<<"\n ----Invalid Email id & Password----";
	}
	return 0;
}
