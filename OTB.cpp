#include<bits/stdc++.h>
using namespace std;
#define Total_Seat 36
struct Ticket{
    string name;
    int seatnum;
};
struct Ticket seats[Total_Seat];
int bookedSeat;
string n1,n2,p1,p2;
void ticketBooking()
{
    if(bookedSeat<Total_Seat)
    {
        cout << "\nEnter your name:";
        cin >> seats[bookedSeat].name;
        seats[bookedSeat].seatnum=bookedSeat+1;
        cout << "Ticket is booked successfully. Your seat number is " << seats[bookedSeat].seatnum << endl;
        bookedSeat++;
    }
}
int price()
{   int destination,origin;
    cout << "Our route list:\n1.Dhaka\n2.Chittagong\n3.Khulna\n4.Rajshahi5.Rangpur\n6.Sylhet\n7.Barisal\n8.Mymensingh\n";
    cout << "Enter your Origin City from the list:";
    cin >> origin;
    cout << "Enter your Destination from the list:";
    cin >> destination;
    if((origin==1 && destination==2) || (origin==2 && destination==1))
    {
        cout << "Ticket Price is 850.";
    }
    else if((origin==1 && destination==3) || (origin==3 && destination==1))
    {
        cout << "Ticket Price is 750.";
    }
    else if((origin==1 && destination==4) || (origin==4 && destination==1))
    {
        cout << "Ticket Price is 710.";
    }
    else if((origin==1 && destination==5) || (origin==5 && destination==1))
    {
        cout << "Ticket Price is 800.";
    }
    else if((origin==1 && destination==6) || (origin==6 && destination==1))
    {
        cout << "Ticket Price is 700.";
    }
    else if((origin==1 && destination==7) || (origin==7 && destination==1))
    {
        cout << "Ticket Price is 650.";
    }
    else if((origin==1 && destination==8) || (origin==8 && destination==1))
    {
        cout << "Ticket Price is 590.";
    }
    else
    {
        cout << "Invalid Choice";
    }
}
void cancelTicket()
{
    int destination,origin;
    string name;
    cout << "Our route list:\n1.Dhaka\n2.Chittagong\n3.Khulna\n4.Rajshahi5.Rangpur\n6.Sylhet\n7.Barisal\n8.Mymensingh\n";
    cout << "Enter your Origin City from the list:";
    cin >> origin;
    cout << "Enter your Destination from the list:";
    cin >> destination;
    cout << "Enter your name:";
    cin >> name;
    bookedSeat--;
    cout << "Your ticket is cenceled.\n";

}
void system()
{
    int choice;
    cout << "1. Book a Ticket\n2. Cancel Ticket\n4. Exit\n";
    while(1)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                price();
                ticketBooking();
                break;
            case 2:
                cancelTicket();
                break;
            case 3:
                exit(1);
            default:
                cout << "Invalid choice. Please try again.";
        }
    }
}
void Login()
{   cout << "Please log in :" << endl;
    cout << "Enter your name:";
    cin >> n2;
    cout << "Enter your Password :";
    cin >> p2;
    if(n==n2 && p1==p2)
    {
        cout << "Logged in successfully." << endl;
        system();
    }
    else
    {
        cout << "Logged in unsuccessful. Please try again." << endl;
        Login();
    }
}
void Signup()
{
    cout << "Please sign up:"<< endl;
    cout << "Enter your name:";
    cin >> n1;
    cout << "Enter your password:";
    cin >> p1;
    cout << "Signed up successfully." << endl;
    Login();
}

int main()
{
    
    while(1)
    {
        int choice;
        cout << "1. Sign up\n2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                Signup();
                break;
            case 2:
                exit(1);
            default:
                cout << "Invalid choice. Please try again.";
        }
    }
}