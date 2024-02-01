#include<bits/stdc++.h>
using namespace std;
#define Total_Seat 36
struct node{
    int seat;
    string path;
    struct node* next;
};
struct node* Head;
struct node* temp;
void insert(int s,string p)
{
    temp= Head;
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->seat=s;
    newnode->path=p;
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
int DhCtg[Total_Seat]={0};
int DhKhl[Total_Seat]={0};
int DhRaj[Total_Seat]={0};
int DhRng[Total_Seat]={0};
int DhSyl[Total_Seat]={0};
int DhBar[Total_Seat]={0};
int DhMy[Total_Seat]={0};
int CtgDh[Total_Seat]={0};
int CtgKhl[Total_Seat]={0};
int CtgRaj[Total_Seat]={0};
int CtgRng[Total_Seat]={0};
int CtgSyl[Total_Seat]={0};
int CtgBar[Total_Seat]={0};
int CtgMy[Total_Seat]={0};
int KhlDh[Total_Seat]={0};
int KhlCtg[Total_Seat]={0};
int KhlRaj[Total_Seat]={0};
int KhlRng[Total_Seat]={0};
int KhlSyl[Total_Seat]={0};
int KhlBar[Total_Seat]={0};
int KhlMy[Total_Seat]={0};
int RajDh[Total_Seat]={0};
int RajCtg[Total_Seat]={0};
int RajKhl[Total_Seat]={0};
int RajRng[Total_Seat]={0};
int RajSyl[Total_Seat]={0};
int RajBar[Total_Seat]={0};
int RajMy[Total_Seat]={0};
int RngDh[Total_Seat]={0};
int RngCtg[Total_Seat]={0};
int RngKhl[Total_Seat]={0};
int RngRaj[Total_Seat]={0};
int RngSyl[Total_Seat]={0};
int RngBar[Total_Seat]={0};
int RngMy[Total_Seat]={0};
int SylDh[Total_Seat]={0};
int SylCtg[Total_Seat]={0};
int SylKhl[Total_Seat]={0};
int SylRaj[Total_Seat]={0};
int SylRng[Total_Seat]={0};
int SylBar[Total_Seat]={0};
int SylMy[Total_Seat]={0};
int BarDh[Total_Seat]={0};
int BarCtg[Total_Seat]={0};
int BarKhl[Total_Seat]={0};
int BarRaj[Total_Seat]={0};
int BarRng[Total_Seat]={0};
int BarSyl[Total_Seat]={0};
int BarMy[Total_Seat]={0};
int MyDh[Total_Seat]={0};
int MyCtg[Total_Seat]={0};
int MyKhl[Total_Seat]={0};
int MyRaj[Total_Seat]={0};
int MyRng[Total_Seat]={0};
int MySyl[Total_Seat]={0};
int MyBar[Total_Seat]={0};

string n1,n2,p1,p2;
void payment()
{
    cout << "Please make payment:" << endl;
            cout << "1.Card\n2.Cash";
            int j;
            cin >> j;
            if(j==1 || j==2)
                cout << "Ticket Booking Successful" << endl;
            else
            {
                cout << "Invalid choice. Please try again." << endl;
                payment();
            }
}
int ticketbooking()
{   int destination,origin;
    cout << "Our route list:\n1.Dhaka\n2.Chittagong\n3.Khulna\n4.Rajshahi5.Rangpur\n6.Sylhet\n7.Barisal\n8.Mymensingh\n";
    cout << "Enter your Origin City from the list:";
    cin >> origin;
    cout << "Enter your Destination from the list:";
    cin >> destination;
    char x;
    if(origin==1 && destination==2)
    {
        cout << "Ticket Price is 850.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(DhCtg[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            DhCtg[i]=1;
            insert(i,"Dhaka-Chittagong");
            payment();
            cout << "Your seat number is " << i << "Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(origin==1 && destination==3)
    {
        cout << "Ticket Price is 750.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(DhKhl[i]=1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            DhKhl[i]=1;
            insert(i,"Dhaka-Khulna");
            payment();
            cout << "Your seat number is " << i << "Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(origin==1 && destination==4)
    {
        cout << "Ticket Price is 710.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(DhRaj[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            DhRaj[i]=1;
            insert(i,"Dhaka-Rajshahi");
            payment();
            cout << "Your seat number is " << i << "Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(origin==1 && destination==5)
    {
        cout << "Ticket Price is 1100.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(DhRng[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            DhRng[i]=1;
            insert(i,"Dhaka-Rangpur");
            payment();
            cout << "Your seat number is " << i << "Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(origin==1 && destination==6)
    {
        cout << "Ticket Price is 680.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(DhSyl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            DhSyl[i]=1;
            insert(i,"Dhaka-Sylhet");
            payment();
            cout << "Your seat number is " << i << "Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(origin==1 && destination==7)
    {
        cout << "Ticket Price is 500.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(DhBar[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            DhBar[i]=1;
            insert(i,"Dhaka-Barisal");
            payment();
            cout << "Your seat number is " << i << "Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(origin==1 && destination==8)
    {
        cout << "Ticket Price is 450.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(DhMy[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            DhMy[i]=1;
            insert(i,"Dhaka-Mymensingh");
            payment();
            cout << "Your seat number is " << i << "Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    
    else
    {
        cout << "Invalid Choice";
    }
}

void system()
{
    int choice;
    cout << "1. Book a Ticket\n2. Cancel Ticket\n3. Exit\n";
    while(1)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                ticketbooking();
                break;
            //case 2:
                //cancelTicket();
                //break;
            case 3:
                exit(1);
            default:
                cout << "Invalid choice. Please try again.";
        }
    }
}
void forgot()
{
    cout << "Your user-name is " << n1 << endl;
    cout << "Your password is " << p1 << endl;

}
void Login()
{   cout << "Please log in :" << endl;
    cout << "Enter your name:";
    cin >> n2;
    cout << "Enter your Password :";
    cin >> p2;
    if(n1==n2 && p1==p2)
    {
        cout << "Logged in successfully." << endl;
        system();
    }
    else
    {
        cout << "Logged in unsuccessful." << endl;
        cout << "Do you forget your user-name or password. Press y/n." << endl;
        char x;
        cin >> x;
        if(x=='N' || x=='n')
        {
            Login();
        }
        else
        {
            forgot();
            Login();
        }
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
    return 0;
}