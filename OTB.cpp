#include<bits/stdc++.h>
using namespace std;
#define Total_Seat 36
struct node{
    int seat;
    char path[50];
    char time[10];
    struct node* next;
};
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

struct node* Head;
void fromDhaka(int destination);
void fromChittagong(int destination);
void fromKhulna(int destination);
void fromRajshahi(int destination);
void fromRangpur(int destination);
void fromSylhet(int destination);
void fromBarisal(int destination);
void fromMymensingh(int destination);
void insert(int s,char p[],char t[])
{
    struct node* temp;
    temp= Head;
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->seat=s;
    strcpy(newnode->path,p);
    strcpy(newnode->time,t);
    newnode->next=NULL;
    if(Head==NULL)
    {
        Head=newnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void viewbookedticket()
{
    struct node* temp;
    temp= Head;
    int a=1;
    if(Head==NULL)
    {
        cout << "No booked ticket\n";
    }
    else{
    while(temp!=NULL)
    {
        cout << a << ".Route : " << temp->path << endl;
        cout << " Seat No : " << temp->seat << endl;
        cout << " Time : " << temp->time << endl << endl;
        temp=temp->next;
        a++;
    }
    }
}
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
void fromDhaka(int destination)
{
    char x;
    if(destination==2)
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
            insert(i,"Dhaka-Chittagong","8.00");
            payment();
            cout << "Your time is 8.00.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==1)
    {
        cout << "Origin and destination couldn't be same.\n"<< endl;
    }
    else if(destination==3)
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
            insert(i,"Dhaka-Khulna","8.30");
            payment();
            cout << "Your time is 8.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==4)
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
            insert(i,"Dhaka-Rajshahi","7.00");
            payment();
            cout << "Your time is 7.00.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==5)
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
            insert(i,"Dhaka-Rangpur","16.20");
            payment();
            cout << "Your time is 16.20.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==6)
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
            insert(i,"Dhaka-Sylhet","13.00");
            payment();
            cout << "Your time is 13.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==7)
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
            insert(i,"Dhaka-Barisal","15.00");
            payment();
            cout << "Your time is 15.00.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==8)
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
            insert(i,"Dhaka-Mymensingh","11.30");
            payment();
            cout << "Your time is 11.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    
}
void fromChittagong(int destination)
{
    char x;
    if(destination==1)
    {
        cout << "Ticket Price is 850.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(CtgDh[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            CtgDh[i]=1;
            insert(i,"Chittagong-Dhaka","11.00");
            payment();
            cout << "Your time is 11.00.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==2)
    {
        cout << "Origin and destination couldn't be same.\n"<< endl;
    }
    else if(destination==3)
    {
        cout << "Ticket Price is 1400.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(CtgKhl[i]=1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            CtgKhl[i]=1;
            insert(i,"Chittagong-Khulna","11.20");
            payment();
            cout << "Your time is 11.20.\nYour seat number is " << i << ".Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==4)
    {
        cout << "Ticket Price is 1200.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(CtgRaj[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            CtgRaj[i]=1;
            insert(i,"Chittagong-Rajshahi","13.30");
            payment();
            cout << "Your time is 13.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==5)
    {
        cout << "Ticket Price is 1330.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(CtgRng[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            DhRng[i]=1;
            insert(i,"Chittagong-Rangpur","8.20");
            payment();
            cout << "Your time is 8.20.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==6)
    {
        cout << "Ticket Price is 550.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(CtgSyl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            CtgSyl[i]=1;
            insert(i,"Chittagong-Sylhet","11.50");
            payment();
            cout << "Your time is 11.50\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==7)
    {
        cout << "Ticket Price is 1130.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(CtgBar[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            CtgBar[i]=1;
            insert(i,"Chittagong-Barisal","7.00");
            payment();
            cout << "Your time is 7.00.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==8)
    {
        cout << "Ticket Price is 900.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(CtgMy[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            CtgMy[i]=1;
            insert(i,"Chittagong-Mymensingh","12.30");
            payment();
            cout << "Your time is 12.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
}
void fromKhulna(int destination)
{
    char x;
    if(destination==1)
    {
        cout << "Ticket Price is 790.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(KhlDh[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            KhlDh[i]=1;
            insert(i,"Khulna-Dhaka","11.55");
            payment();
            cout << "Your time is 11.55.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==2)
    {
        cout << "Ticket Price is 1400.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(KhlCtg[i]=1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            KhlCtg[i]=1;
            insert(i,"Khulna-Chittagong","10.30");
            payment();
            cout << "Your time is 10.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==3)
    {
        cout << "Origin and destination couldn't be same.\n"<< endl;
    }
    else if(destination==4)
    {
        cout << "Ticket Price is 1150.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(KhlRaj[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            KhlRaj[i]=1;
            insert(i,"Khulna-Rajshahi","8.30");
            payment();
            cout << "Your time is 8.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==5)
    {
        cout << "Ticket Price is 1200.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(KhlRng[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            KhlRng[i]=1;
            insert(i,"Khulna-Rangpur","12.00");
            payment();
            cout << "Your time is 12.00.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==6)
    {
        cout << "Ticket Price is 750.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(KhlSyl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            KhlSyl[i]=1;
            insert(i,"Khulna-Sylhet","9.50");
            payment();
            cout << "Your time is 9.50\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==7)
    {
        cout << "Ticket Price is 490.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(KhlBar[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            KhlBar[i]=1;
            insert(i,"Khulna-Barisal","18.00");
            payment();
            cout << "Your time is 18.00.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==8)
    {
        cout << "Ticket Price is 950.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(KhlMy[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            KhlMy[i]=1;
            insert(i,"Khulna-Mymensingh","12.30");
            payment();
            cout << "Your time is 12.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
}
void fromRajshahi(int destination)
{
    char x;
    if(destination==1)
    {
        cout << "Ticket Price is 710.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RajDh[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RajDh[i]=1;
            insert(i,"Rajshahi-Dhaka","10.50");
            payment();
            cout << "Your time is 10.50.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==2)
    {
        cout << "Ticket Price is 1290.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RajCtg[i]=1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RajCtg[i]=1;
            insert(i,"Rajshahi-Chittagong","14.30");
            payment();
            cout << "Your time is 14.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==3)
    {
        cout << "Ticket Price is 1150.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RajKhl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RajKhl[i]=1;
            insert(i,"Rajshahi-Khulna","9.45");
            payment();
            cout << "Your time is 9.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==4)
    {
        cout << "Origin and destination couldn't be same.\n"<< endl;
    }
    else if(destination==5)
    {
        cout << "Ticket Price is 400.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RajRng[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RajRng[i]=1;
            insert(i,"Rajshahi-Rangpur","13.45");
            payment();
            cout << "Your time is 13.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==6)
    {
        cout << "Ticket Price is 1650.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RajSyl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RajSyl[i]=1;
            insert(i,"Rajshahi-Sylhet","6.50");
            payment();
            cout << "Your time is 6.50\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==7)
    {
        cout << "Ticket Price is 1080.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RajBar[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RajBar[i]=1;
            insert(i,"Rajshahi-Barisal","8.00");
            payment();
            cout << "Your time is 8.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==8)
    {
        cout << "Ticket Price is 500.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RajMy[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RajMy[i]=1;
            insert(i,"Rajshahi-Mymensingh","13.00");
            payment();
            cout << "Your time is 13.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
}
void fromRangpur(int destination)
{
    char x;
    if(destination==1)
    {
        cout << "Ticket Price is 790.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RngDh[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RngDh[i]=1;
            insert(i,"Rangpur-Dhaka","10.50");
            payment();
            cout << "Your time is 10.50.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==2)
    {
        cout << "Ticket Price is 1300.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RngCtg[i]=1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RngCtg[i]=1;
            insert(i,"Rangpur-Chittagong","7.30");
            payment();
            cout << "Your time is 7.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==3)
    {
        cout << "Ticket Price is 1500.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RngKhl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RngKhl[i]=1;
            insert(i,"Rangpur-Khulna","7.45");
            payment();
            cout << "Your time is 7.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==4)
    {
        cout << "Ticket Price is 410.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RngRaj[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RngRaj[i]=1;
            insert(i,"Rangpur-Rajshahi","10.45");
            payment();
            cout << "Your time is 10.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==5)
    {
        cout << "Origin and destination couldn't be same.\n"<< endl;
    }
    else if(destination==6)
    {
        cout << "Ticket Price is 1650.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RngSyl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RngSyl[i]=1;
            insert(i,"Rangpur-Sylhet","8.50");
            payment();
            cout << "Your time is 8.50\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==7)
    {
        cout << "Ticket Price is 1100.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RngBar[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RngBar[i]=1;
            insert(i,"Rangpur-Barisal","8.00");
            payment();
            cout << "Your time is 8.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==8)
    {
        cout << "Ticket Price is 510.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(RngMy[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            RngMy[i]=1;
            insert(i,"Rangpur-Mymensingh","13.00");
            payment();
            cout << "Your time is 13.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
    }
}
void fromSylhet(int destination)
{
    char x;
    if(destination==1)
    {
        cout << "Ticket Price is 700.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(SylDh[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            SylDh[i]=1;
            insert(i,"Sylhet-Dhaka","10.50");
            payment();
            cout << "Your time is 10.50.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==2)
    {
        cout << "Ticket Price is 650.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(SylCtg[i]=1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            SylCtg[i]=1;
            insert(i,"Sylhet-Chittagong","8.30");
            payment();
            cout << "Your time is 8.30\nYour seat number is " << i << ".Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==3)
    {
        cout << "Ticket Price is 710.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(SylKhl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            SylKhl[i]=1;
            insert(i,"Sylhet-Khulna","7.45");
            payment();
            cout << "Your time is 7.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==4)
    {
        cout << "Ticket Price is 1080.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(SylRaj[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            SylRaj[i]=1;
            insert(i,"Sylhet-Rajshahi","10.45");
            payment();
            cout << "Your time is 10.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==5)
    {
        cout << "Ticket Price is 1400.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(SylRng[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            SylRng[i]=1;
            insert(i,"Sylhet-Rangpur","8.50");
            payment();
            cout << "Your time is 8.50\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==6)
    {
        cout << "Origin and destination couldn't be same.\n"<< endl;
    }
    else if(destination==7)
    {
        cout << "Ticket Price is 1100.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(SylBar[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            SylBar[i]=1;
            insert(i,"Sylhet-Barisal","9.00");
            payment();
            cout << "Your time is 9.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==8)
    {
        cout << "Ticket Price is 850.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(SylMy[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            SylMy[i]=1;
            insert(i,"Sylhet-Mymensingh","12.00");
            payment();
            cout << "Your time is 12.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
}
void fromBarisal(int destination)
{
    char x;
    if(destination==1)
    {
        cout << "Ticket Price is 700.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(BarDh[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            BarDh[i]=1;
            insert(i,"Barisal-Dhaka","10.50");
            payment();
            cout << "Your time is 10.50.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==2)
    {
        cout << "Ticket Price is 1300.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(BarCtg[i]=1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            BarCtg[i]=1;
            insert(i,"Barisal-Chittagong","7.30");
            payment();
            cout << "Your time is 7.30.\nYour seat number is " << i << ".Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==3)
    {
        cout << "Ticket Price is 450.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(BarKhl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            BarKhl[i]=1;
            insert(i,"Barisal-Khulna","7.45");
            payment();
            cout << "Your time is 7.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==4)
    {
        cout << "Ticket Price is 1210.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(BarRaj[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            BarRaj[i]=1;
            insert(i,"Barisal-Rajshahi","10.45");
            payment();
            cout << "Your time is 10.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==5)
    {
        cout << "Ticket Price is 1650.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(BarRng[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            BarRng[i]=1;
            insert(i,"Barisal-Rangpur","8.50");
            payment();
            cout << "Your time is 8.50\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==6)
    {
        cout << "Ticket Price is 1000.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(BarSyl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            BarSyl[i]=1;
            insert(i,"Barisal-Sylhet","8.00");
            payment();
            cout << "Your time is 8.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==7)
    {
        cout << "Origin and destination couldn't be same.\n"<< endl;
    }
    else if(destination==8)
    {
        cout << "Ticket Price is 950.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(BarMy[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            BarMy[i]=1;
            insert(i,"Barisal-Mymensingh","13.00");
            payment();
            cout << "Your time is 13.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
    }
}
void fromMymensingh(int destination)
{
    char x;
    if (destination==1)
    {
        cout << "Ticket Price is 500.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(MyDh[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            MyDh[i]=1;
            insert(i,"Mymensingh-Dhaka","10.50");
            payment();
            cout << "Your time is 10.50.\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==2)
    {
        cout << "Ticket Price is 1050.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(MyCtg[i]=1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            MyCtg[i]=1;
            insert(i,"Mymensingh-Chittagong","7.30");
            payment();
            cout << "Your time is 7.30\nYour seat number is " << i << ".Thank you" << endl;
            }
    }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==3)
    {
        cout << "Ticket Price is 1060.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(MyKhl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            MyKhl[i]=1;
            insert(i,"Mymensingh-Khulna","7.45");
            payment();
            cout << "Your time is 7.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==4)
    {
        cout << "Ticket Price is 480.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(MyRaj[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            MyRaj[i]=1;
            insert(i,"Mymensingh-Rajshahi","10.45");
            payment();
            cout << "Your time is 10.45\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==5)
    {
        cout << "Ticket Price is 490.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(MyRng[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            MyRng[i]=1;
            insert(i,"Mymensingh-Rangpur","8.50");
            payment();
            cout << "Your time is 8.50\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==6)
    {
        cout << "Ticket Price is 1020.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(MySyl[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            MySyl[i]=1;
            insert(i,"Mymensingh-Sylhet","9.00");
            payment();
            cout << "Your time is 9.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==7)
    {
        cout << "Ticket Price is 850.";
        cout<< "Sure to book the ticket? Press y/n" << endl;
        cin >> x;
        if(x=='Y'||x=='y')
        {
            cout << "Which seat do you want to choose?(1-36)" << endl;
            int i;
            cin >> i;
            if(MyBar[i]==1)
            {
                cout << "This ticket is already booked. Try again." << endl;
            }
            else{
            MyBar[i]=1;
            insert(i,"Mymensingh-Barisal","12.00");
            payment();
            cout << "Your time is 12.00\nYour seat number is " << i << ".Thank you" << endl;
            }
        }
        else if(x=='N'||x=='n')
        {
            cout << "Ticket is not booked." << endl;
        }
    }
    else if(destination==8)
    {
        cout << "Origin and destination couldn't be same.\n"<< endl;
    }
}
int ticketbooking()
{   int destination,origin;
    cout << "Our route list:\n1.Dhaka\n2.Chittagong\n3.Khulna\n4.Rajshahi\n5.Rangpur\n6.Sylhet\n7.Barisal\n8.Mymensingh\n";
    cout << "Enter your Origin City from the list:";
    cin >> origin;
    cout << "Enter your Destination from the list:";
    cin >> destination;
    if(origin>8 || destination>8 || origin<1 || destination<1)
    {
        cout << "Invalid choice. Please try again.\n";
    }
    else
    {
        switch(origin)
        {
            case 1:
            fromDhaka(destination);
            break;
            case 2:
            fromChittagong(destination);
            break;
            case 3:
            fromKhulna(destination);
            break;
            case 4:
            fromRajshahi(destination);
            break;
            case 5:
            fromRangpur(destination);
            break;
            case 6:
            fromRangpur(destination);
            break;
            case 7:
            fromBarisal(destination);
            break;
            case 8:
            fromMymensingh(destination);
            break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
void cancelTicket()
{
    if(Head==NULL)
    {
        cout << "\nNo tickets for cancel.\n";
    }
    else{
    cout << "\nYour booked tickets are \n";
    viewbookedticket();
    cout << "Which ticket do you want to cancel?";
    int b;
    cin >> b;
    struct node* temp=Head;
    if(b==1)
    {
        Head=Head->next;
    }
    else{
    for(int i=1;i<b-1;i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    }
    cout << "Ticket cancel is successful\n";
    }
}
void system()
{
    int choice;
    while(3)
    {
        cout << "\n1. Book a Ticket\n2. View your booked ticket\n3. Cancel Ticket\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                ticketbooking();
                break;
            case 2:
                viewbookedticket();
                break;
            case 3:
                cancelTicket();
                break;
            case 4:
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