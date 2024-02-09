#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
// Designed By an Electrical Engineer :- Ehap Raafat Said 
using namespace std;

struct passenger
{
	int choice, back ;
    string first_name, second_name , gender;
	int age , phoneNo;
	string add;
	 int id;
	 float charges;

};
// Object of struct passenger
passenger customer;

struct details 
{
		
	void information()
	{
		cout<<"Enter the customer ID: ";
		cin>>customer.id;
		cout<<"Enter the First Name: ";
		cin>>customer.first_name;
		cout<<"Enter the Second Name: ";
		cin>>customer.second_name;
		cout<<"Enter the Age: ";
		cin>>customer.age;
		cout<<"Enter the Address: ";
		cin>>customer.add;
		cout<<"Enter the Gender: ";
		cin>>customer.gender;
		cout<<"Your Details are saved with us"<<endl;
	
	}
};
// Object of struct details
details detail;

void MainMenu(); 

struct Registration 
{
	int lchoice,nchoice;
	
	void flights()
	{
		string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
		for(int i=0;i<6;i++)
		{
			cout<<(i+1)<<".flight to "<<flightN[i]<<endl;
		}
		cout<<" Welcome to AirLine!"<<endl;
		cout<<"Press the number of the country of which you want to book the flight: ";
		cin>>lchoice;
		
		switch(lchoice)
		{
			case 1:
				{
					cout<<setw(5)<<"____________Welcome to Dubai Emirates______________"<<endl;
					
					cout<<setw(5)<<"__Your comfort is our priority. Enjoy the journey!__"<<endl;
					
					cout<<setw(5)<<"_________________Following the flights______________"<<endl;
					
					cout<<"1. DUB - 498"<<endl;
					cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
					cout<<"2. DUB - 658"<<endl;
					cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
					cout<<"3. DUB - 856"<<endl;
					cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
					
					cout<<setw(5)<<"Enter the flight you want to book: ";
					cin>>nchoice;
					
					if(nchoice==1)
					{
						cout<<"You have successfully book to 1.DUB - 498"<<endl;
						cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==2)
					{
						cout<<"You have successfully book to 2.DUB - 658"<<endl;
						cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==3)
					{
						cout<<"You have successfully book to 3.DUB - 856"<<endl;
						cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , Shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu: ";
					cin>>customer.back;
					
					if(customer.back==1)
					MainMenu();
					
					else
					MainMenu();
					break;
				}
				
			case 2:
				{
					cout<<setw(5)<<"____________Welcome to Canadian Airlines______________"<<endl;
					
					cout<<setw(5)<<"__Your comfort is our priority. Enjoy the journey!__"<<endl;
					
					cout<<setw(5)<<"_________________Following the flights______________"<<endl;
					
					cout<<"1. CA - 498"<<endl;
					cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
					cout<<"2. CA - 658"<<endl;
					cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
					cout<<"3. CA - 856"<<endl;
					cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
					
					cout<<setw(5)<<"Enter the flight you want to book: ";
					cin>>nchoice;
					
					if(nchoice==1)
					{
						cout<<"You have successfully book to 1.CA - 498"<<endl;
						cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==2)
					{
						cout<<"You have successfully book to 2.CA - 658"<<endl;
						cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==3)
					{
						cout<<"You have successfully book to 3.CA - 856"<<endl;
						cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , Shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu: ";
					cin>>customer.back;
					
					if(customer.back==1)
					MainMenu();
					
					else
					MainMenu();
					break;
				}
				
			case 3:
				{
					cout<<setw(5)<<"____________Welcome to UK Airlines______________"<<endl;
					
					cout<<setw(5)<<"__Your comfort is our priority. Enjoy the journey!__"<<endl;
					
					cout<<setw(5)<<"_________________Following the flights______________"<<endl;
					
					cout<<"1. UK - 498"<<endl;
					cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
					cout<<"2. UK - 658"<<endl;
					cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
					cout<<"3. UK - 856"<<endl;
					cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
					
					cout<<setw(5)<<"Enter the flight you want to book: ";
					cin>>nchoice;
					
					if(nchoice==1)
					{
						cout<<"You have successfully book to 1.UK - 498"<<endl;
						cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==2)
					{
						cout<<"You have successfully book to 2.UK - 658"<<endl;
						cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==3)
					{
						cout<<"You have successfully book to 3.UK - 856"<<endl;
						cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , Shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu: ";
					cin>>customer.back;
					
					if(customer.back==1)
					MainMenu();
					
					else
					MainMenu();
					break;
				}
					
			case 4:
				{
					cout<<setw(5)<<"____________Welcome to USA Airlines______________"<<endl;
					
					cout<<setw(5)<<"__Your comfort is our priority. Enjoy the journey!__"<<endl;
					
					cout<<setw(5)<<"_________________Following the flights______________"<<endl;
					
					cout<<"1. USA - 498"<<endl;
					cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
					cout<<"2. USA - 658"<<endl;
					cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
					cout<<"3. USA - 856"<<endl;
					cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
					
					cout<<setw(5)<<"Enter the flight you want to book: ";
					cin>>nchoice;
					
					if(nchoice==1)
					{
						cout<<"You have successfully book to 1.USA - 498"<<endl;
						cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==2)
					{
						cout<<"You have successfully book to 2.USA - 658"<<endl;
						cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==3)
					{
						cout<<"You have successfully book to 3.USA - 856"<<endl;
						cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , Shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu: ";
					cin>>customer.back;
					
					if(customer.back==1)
					MainMenu();
					
					else
					MainMenu();
					break;
				}
					
			case 5:
				{
					cout<<setw(5)<<"____________Welcome to Australian Airlines______________"<<endl;
					
					cout<<setw(5)<<"__Your comfort is our priority. Enjoy the journey!__"<<endl;
					
					cout<<setw(5)<<"_________________Following the flights______________"<<endl;
					
					cout<<"1. AUS - 498"<<endl;
					cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
					cout<<"2. AUS - 658"<<endl;
					cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
					cout<<"3. AUS - 856"<<endl;
					cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
					
					cout<<setw(5)<<"Enter the flight you want to book: ";
					cin>>nchoice;
					
					if(nchoice==1)
					{
						cout<<"You have successfully book to 1.AUS - 498"<<endl;
						cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==2)
					{
						cout<<"You have successfully book to 2.AUS - 658"<<endl;
						cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==3)
					{
						cout<<"You have successfully book to 3.AUS - 856"<<endl;
						cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , Shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu: ";
					cin>>customer.back;
					
					if(customer.back==1)
					MainMenu();
					
					else
					MainMenu();
					break;
				}
					
			case 6:
				{
					cout<<setw(5)<<"____________Welcome to European Airlines______________"<<endl;
					
					cout<<setw(5)<<"__Your comfort is our priority. Enjoy the journey!__"<<endl;
					
					cout<<setw(5)<<"_________________Following the flights______________"<<endl;
					
					cout<<"1. EUR - 498"<<endl;
					cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
					cout<<"2. EUR - 658"<<endl;
					cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
					cout<<"3. EUR - 856"<<endl;
					cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
					
					cout<<setw(5)<<"Enter the flight you want to book: ";
					cin>>nchoice;
					
					if(nchoice==1)
					{
						cout<<"You have successfully book to 1.EUR - 498"<<endl;
						cout<<"08-01-2022  8:00AM  10hrs  Rs.14000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==2)
					{
						cout<<"You have successfully book to 2.EUR - 658"<<endl;
						cout<<"09-01-2022  4:00PM  12hrs  Rs.10000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else if(nchoice==3)
					{
						cout<<"You have successfully book to 3.EUR - 856"<<endl;
						cout<<"11-01-2022  5:00AM  4hrs  Rs.25000$"<<endl;
						cout<<"you can go to the menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , Shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu: ";
					cin>>customer.back;
					
					if(customer.back==1)
					MainMenu();
					
					else
					MainMenu();
					break;
				}
				
			default :
				{
					cout<<"Invalid input , Shifting you to the main menu! "<<endl;
					MainMenu();
					break;
				}
					
		    }
	    }
	
    };
    
    //Object of struct Registration
    Registration registration;
    
    struct Ticket
    {
    	
    	char arr[100];
    	void Create()
    	{
    		string destination="";
    		ofstream out("records.txt");
    		{
    			out<<setw(5)<<"____________Sohag Airport____________"<<endl;
    			out<<setw(5)<<"_______________Ticket________________"<<endl;
    			out<<setw(5)<<"_____________________________________"<<endl;
    			
    			out<<"Customer ID: "<<customer.id<<endl;
    			out<<"Customer First Name: "<<customer.first_name<<endl;
    			out<<"Customer Second Name: "<<customer.second_name<<endl;
    			out<<"Customer Gender: "<<customer.gender<<endl;
    			out<<"Customer Address: "<<customer.add<<endl;
    			out<<"Customer Age: "<<customer.age<<endl;
    			
    			out<<setw(5)<<"Description of the journey"<<endl;
    			
    			if(registration.lchoice==1)
    			{
    				destination="Dubai";
				}
				else if(registration.lchoice==2)
				{
						destination="Canada";
				}
				else if(registration.lchoice==3)
				{
						destination="UK";
				}
				else if(registration.lchoice==4)
				{
						destination="USA";
				}
				else if(registration.lchoice==5)
				{
					destination="Australia";
				}
				else if(registration.lchoice==6)
				{
						destination="Europe";
				}
				out<<"	Destination      "<<destination<<endl;
    			
			}
			out.close();
    		
		}
		
		void Open()
		{
			ifstream in("records.txt");
			{
				if(!in)
				cout<<"File error!"<<endl;
				while(!in.eof())
				{
					in.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			in.close();
		}
    	
	};
	
	//Object of struct ticket
	Ticket ticket;
    
void MainMenu()
{
	cout<<setw(5)<<"___________Sohag Airport_____________"<<setw(5)<<endl;
	cout<<setw(5)<<"_____________Main Menu_____________"<<setw(5)<<endl;
	
	cout<<setw(5)<<"__________________________________________________"<<setw(5)<<endl;
	cout<<setw(5)<<"|"<<setw(43)<<"|"<<endl;
	cout<<setw(5)<<"|"<<"___press 1 to add the passenger Details___"<<"|"<<endl;
	cout<<setw(5)<<"|"<<"___press 2 for Flight Registration________"<<"|"<<endl;
	cout<<setw(5)<<"|"<<"___press 3 for Ticket and Charges_________"<<"|"<<endl;
	cout<<setw(5)<<"|"<<"___press 4 to Exit________________________"<<"|"<<endl;
	cout<<setw(5)<<"|"<<setw(43)<<"|"<<endl;
	cout<<setw(5)<<"__________________________________________________"<<setw(5)<<endl;
	
	cout<<"Enter the Choice: ";
	cin>>customer.choice;
	
	switch(customer.choice)
	{
		
		case 1:
			{
				cout<<setw(5)<<"__________Passenger________________"<<endl;
				detail.information();
				cout<<"Press any key to go back to Main menu: ";
				cin>>customer.back;
				
				if(customer.back==1)
				MainMenu();
				else
				MainMenu();
				break;
			}
		case 2:
		    {
		    	cout<<setw(5)<<"_________Book a flight using the system____________"<<endl;
		    	 registration.flights();
		    	 break;
		    	
			}
		case 3:
			{
				cout<<setw(5)<<"________________Get Your Ticket____________________"<<endl;
				ticket.Create();
				
				cout<<setw(5)<<"____Your Ticket is printed , you can collect it____"<<endl;
				cout<<setw(5)<<"Press 1 to display your ticket ";
				cin>>customer.back;
				
				if(customer.back==1)
				{
					ticket.Open();
					cout<<"Press any key to go back to Main menu: ";
					cin>>customer.back;
					if(customer.back==1)
					MainMenu();
					else 
					MainMenu();
					
				}
				else
				MainMenu();
			    break;	
			}
		case 4:
			{
				cout<<setw(5)<<"_______________Thank you_____________"<<endl;
				break;
			}
			default :
			{
				cout<<"Invalid input , Please Try again!"<<endl;
				MainMenu();
			}
				
	}
	
	
	
}
int main()
{
	
	
     MainMenu();
     
     system("pause");
	
	return 0;
}
