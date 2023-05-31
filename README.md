# bank-mangement-system
library used:
   
1. fstream
• This library is responsible for any file management.
2. Iostream
• One of the fundamentals libraries, must be included for printing anything on the screen. Whatever, it is taken from the user or printed by the developer.
3. string
• This library for any operate done on strings.
 
Interface: 
 
-The First thing will face the user is the interface. This project’s main menu have Four choices:
 
1. First thing it will pop up a welcome message then it will ask if you are a new client.
2. Secondly it will show up if you already registered.  
3. Thirdly are the admin accesses.
4. Lastly is the exist to close the program.
 
If you press number One (New Client) :
1. It will ask you for your name.
2. Then your id.
3. Then comes your password.
4. Then your balance.
5. If you want to convert your currency enter yes
6. Then it converts the American dollar to 5 different currencies (Indian(rupees), British(pound),  French(euro), German(Deutschmark), Japan(yen).
7. If you want to continue press yes.
 
If you press number Two (Already registered) :
 
  Will also contain all the information that the user entered before without the id. Plus 5 more options.
 
1. If you want to deposit to your balance please enter 1.
2. If you want to withdraw from your balance please enter 2.
3. If you want to check your balance please enter 3.
4. if you want to convert your currency enter 4.
5. if you want to transfer money to another account enter 5.
 
If you press number Three (Admin access ) :
 
  Will also contain all the information that the user entered before without the id. Plus 2 options.
 
1. If you want to search for a client enter yes.
2. Then it asks to enter the name that your searching for.
 
If you press number Four (exist) :
✓ It will just end the program.
 
                                              Classes
 
1.Person class:
    This class contains Nine functions:
    - Set Id
   This function its data type is Void it consists of one parameter(int id) this function all it does it takes the id that the user will type and save it in the variable called id.
 
-Set name
This function its data type is Void it consists of one parameter(string name) this function all it does it takes the name that the user will type and save it in the variable called name. 
 
-Set password
This function its data type is Void it consists of one parameter(string password) this function all it does it takes the password that the user will type and save it in the variable called password.
 
-Set balance
This function its data type is Void it consists of one parameter(double balance) this function all it does it takes the balance that the user will type and save it in the variable called balance.
 
-Get id
This function its data type is int it consists of one parameter(int id) this function all it does it just return the id.
 
-Get name
This function its data type is String it consists of one parameter(string name) this function all it does it just return the name.
 
-Get password
This function its data type is String it consists of one parameter(string password) this function all it does it just return the password.
 
-Get balance
This function its data type is double it consists of one parameter(double price) this function all it does it just return the price.
 
 
-Display
This function its data type is Void it consists of zero parameter this function all it does it just print the (id, name, password, balance).
 
 
2.Client class:
This class is inherited from class person
    This class contains Six extra functions:
 
-Make withdraw
 
This function its data type is Void it consists of one parameter(double withdraw) this function takes your current balance and the amount of withdraw and if the balance is greater or equal the withdraw amount that you enter it will subtract the balance from the withdraw and display it else it will display message saying ("Sorry, Insufficient balance").
 
-Transferto
 
This function its data type is Void it consists of Two parameter(double amount, Client &recipient) this function check if the balance is greater than or equal the amount and subtract the balance from the amount  I want to transfer and transfer it to other client and print the balance.
 
-Deposit
This function its data type is Void it consists of one parameter(double deposit) this
Function all it does is take the balance and add the balance.
 
-Check balance
This function its data type is Void it consists of zero parameter this function just display your balance.
 
-Display
This function its data type is double it consists of zero parameter this function just return the balance.
 
-Convert
This function its data type is Void it consists of zero parameter this function just multiply your balance to the currency I have (Indian, British, French, German, Japan) and then your balance with these currencies.
 
3.Admin class:
This class is inherited from class client but admin class is the same as person class except it have one extra thing 
 
This class contains one extra functions: 
 
-Search
This function its data type is double it consists of one parameter(string search)
This function all it does is searching for a client by his name.
 
 
 
 
File used:
 
We have Two files :
 
Client file:
In this file we will insert the name and id and balance. 
 
Admin file:
In this file we will insert only the name and id.
 
So these files basically just saves the information’s
