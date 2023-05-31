#include <iostream>
#include<string>
#include <fstream>
using namespace std;
class Person{
protected:
    int id;
    string name;
    string password;
    double balance;
public:
    void setId(int id) {
        this->id=id;
    }
    void setName(string name) {
     this->name=name;
    }
    void setPassword(string password) {
        this->password=password;
    }
    void setBalance(double balance){
        this->balance=balance;
        }
    int getId() {
        return id;
    }
    string getName() {
        return name;
    }
    string getPassword() {
        return password;
    }
    double getBalance()
    {
        return balance;
    }
    void display() {
        cout << "the name is :" << name << endl;
        cout << "the password is :" << password << endl;
        cout << "the id is :" << id << endl;
    }
};
class Client : public Person {
public:
    float British_pound=(1/1.487);
    float French_Francs=(1/0.172);
    float German_Schillings=(1/0.584);
    float Japanese_Yen=(1/0.00955);
    float Indian_Rupees=(1/0.13);
    void makeDeposit(double deposit){
        balance += deposit;
    }
    void makeWithdraw(double withdraw){

        if(balance >= withdraw){
            balance -= withdraw;
            cout << "Your new balance is: " << balance << endl;
        }
        else
        {
            cout << "Sorry, Insufficient balance";
        }
    }
    void transferTo (double amount, Client recipient){
        if(balance >= amount){
            balance -= amount;
            recipient.makeDeposit(amount);
            cout << "Your new balance is: " << balance << endl;
        }
        else
        {
            cout << "Sorry, Insufficient balance";
        }
    }
    void checkBalance(){
        cout << "Your Balance is: " << balance;
    }
    double display(){
        return balance;
    }
    void convert(){
     cout<<"American dollars are equal to "<<(Indian_Rupees*balance)<<" Indian Rupees"<<endl;
     cout<<"American dollars are equal to "<<(British_pound*balance)<<" British Pound"<<endl;
     cout<<"American dollars are equal to "<<(French_Francs*balance)<<" French france"<<endl;
     cout<<"American dollars are equal to "<<(German_Schillings*balance)<<" German Deutschmark"<<endl;


    }
};

class Admin : public Person {
public:

    void search(string name, Client c) {



            if (name == c.getName()) {
                cout << "Client is found" << endl;

            } else {
                cout << "Client is not found" << endl;
            }

    }


};

int main()
{
    Person p;
    Client c,carr[2];
    Admin a;
    int x,id,y;
    double balance;
    string name,pass,s;
do {
    cout << "Welcome" << endl;
    cout << "If you are a new client please enter 1" << endl;
    cout << "If you are already registered please enter 2" << endl;
    cout << "If you are an admin please enter 3" << endl;
    cout << "if you want to exit enter 4" << endl;
    cin >> x;
    carr[0].setName("yara");
    carr[0].setPassword("yara123");
    carr[0].setId(121);
    carr[0].setBalance(1000.1);
    carr[1].setName("Ahmed");
    carr[1].setPassword("ahmed123");
    carr[1].setId(211);
    carr[1].setBalance(2000.1);

    switch (x) {
        case 1: {

            cout << "please enter your name" << endl;
            cin >> name;
            cout << "please enter your id" << endl;
            cin >> id;
            cout << "please enter your password" << endl;
            cin >> pass;
            cout << "please enter your balance " << endl;
            cin >> balance;
            c.setPassword(pass);
            c.setName(name);
            c.setId(id);
            c.setBalance(balance);

            cout << "if you want to convert your currency enter yes" << endl;
            cin >> s;
            if (s == "yes") {
                c.convert();
            }
            break;
        }
        case 2: {
            cout << "please enter your name" << endl;
            cin >> name;
            cout << "please enter your password" << endl;
            cin >> pass;

if((name==carr[0].getName() || name==carr[1].getName()) && (pass==carr[0].getPassword()|| pass==carr[1].getPassword())) {
    cout << "If you want to deposit to your balance please enter 1" << endl;
    cout << "If you want to withdraw from your balance please enter 2" << endl;
    cout << "If you want to check your balance please enter 3" << endl;
    cout << "if you want to convert your currency enter 4" << endl;
    cout << "if yu want to transfer money to another account enter 5" << endl;
    cin >> y;

    switch (y) {
        case 1: {
            double depo;
            cout << "please enter the amount that you want to deposit " << endl;
            cin >> depo;
            if (name == carr[0].getName()) {
                carr[0].makeDeposit(depo);
                cout << carr[0].display();
            } else if (name == carr[1].getName()) {
                carr[1].makeDeposit(depo);
                cout << carr[1].display();
            }
            break;
        }
        case 2: {
            double with;
            cout << "please enter the amount that you want to withdraw " << endl;
            cin >> with;
            if (name == carr[0].getName()) {
                cout<<"your current balance is "<<carr[0].getBalance()<<endl;
                carr[0].makeWithdraw(with);

            } else if (name == carr[1].getName()) {
                cout<<"your current balance is "<<carr[1].getBalance()<<endl;
                carr[1].makeWithdraw(with);

            }

            break;
        }
        case 3: {
            if (name == carr[0].getName()) {
                carr[0].checkBalance();

            } else if (name == carr[1].getName()) {
                carr[1].checkBalance();

            }

            break;
        }
        case 4: {
            if (name == carr[0].getName()) {
                carr[0].convert();

            } else if (name == carr[1].getName()) {
                carr[1].convert();
            }

            break;
        }
        case 5: {
            int z;

            string s2;
            cout << "Enter the amount that you want to transfer and the account you want to transfer to"
                 << endl;
            cin >> z >> s2;

            if (name == carr[0].getName() && s2 == carr[1].getName()) {

                carr[0].transferTo(z, carr[1]);

            } else if (name == carr[1].getName() && s2 == carr[0].getName()) {
                carr[1].transferTo(z, carr[0]);
            }

            break;
        }


    }
}else{
    cout<<"username or password is incorrect"<<endl;
}
            break;
        }
        case 3: {
            cout << "please enter your name" << endl;
            cin >> name;
            cout << "please enter your password" << endl;
            cin >> pass;
            cout << "please enter your id" << endl;
            cin >> id;
            a.setPassword(pass);
            a.setName(name);
            a.setId(id);

            cout << "If you want to search for a client enter yes" << endl;
            cin >> s;

            if (s == "yes") {
                string n;
                cout << "please enter name \n";
                cin >> n;
                a.search(n,c);
            }
            break;
        }

        default: {
            break;
        }
    }
    cout<<"if you want to continue enter yes"<<endl;cin>>s;

}while(s=="yes");
ofstream client;
ofstream admin;
 client.open("client.txt");
admin.open("admin.txt");

client<<c.getName()<<" "<<c.getId()<<" "<<c.getBalance()<<endl;
admin<<a.getName()<<" "<<a.getId()<<endl;

client.close();
admin.close();
    return 0;
}
