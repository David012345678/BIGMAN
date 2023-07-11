
#include <iostream>
using namespace std;

int main() {
    int pin, attempts = 0;
    double balance;
    
    // Welcoming message
    cout << "Welcome to our banking application" << endl;
    
    // Requesting for pin
    do {
        cout << "Please enter your pin: ";
        cin >> pin;
        
        if (pin != 1234) {
            cout << "Wrong pin. ";
            attempts++;
            if (attempts == 3) {
                cout << "You have exceeded the maximum number of attempts. Good bye." << endl;
                return 0;
            }
            cout << "You have " << 3 - attempts << " attempts left." << endl;
        }
    } while (pin != 1234 && attempts < 3);
    
    // Requesting for balance
    cout << "Please enter your account balance: ";
    cin >> balance;
    
    // Prompting with menu
    int option;
    do {
        cout << "\nWhat would you like to do?\n"
             << "1. Transfer cash\n"
             << "2. Deposit cash\n"
             << "3. Buy airtime\n"
             << "4. Check balance\n"
             << "Enter option: ";
        cin >> option;
        
        double amount, transactionCharges, airtimeAmount;
        string phoneNumber;
        
        switch(option) {
            case 1:
                // Transfer cash
                cout << "Enter amount to transfer: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "You do not have sufficient funds." << endl;
                    break;
                }
                transactionCharges = amount * 0.05; // 5% transaction charges
                balance -= (amount + transactionCharges);
                cout << "You have transferred " << amount << " with transaction charges of " << transactionCharges
                     << ". Your working balance is " << balance << "." << endl;
                break;
                
            case 2:
                // Deposit cash
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "You have deposited " << amount << ". Your working balance is " << balance << "." << endl;
                break;
                
            case 3:
                // Buy airtime
                cout << "Enter amount to allocate on airtime: ";
                cin >> airtimeAmount;
                if (airtimeAmount > balance) {
                    cout << "You do not have sufficient funds." << endl;
                    break;
                }
                cout << "Enter phone number: ";
                cin >> phoneNumber;
                balance -= airtimeAmount;
                cout << "You have credited airtime of " << airtimeAmount << " to " << phoneNumber
                     << ". Your working balance is " << balance << "." << endl;
                break;
                
            case 4:
                // Check balance
                cout << "Your account balance is " << balance << "." << endl;
                break;
                
            default:
                cout << "Wrong input. ";
                attempts++;
                if (attempts == 3) {
                    cout << "You have exceeded the maximum number of attempts. Good bye." << endl;
                    return 0;
                }
                cout << "You have " << 3 - attempts << " attempts left." << endl;
                break;
        }
    } while (attempts < 3);
    
    // Exit message
    cout << "Thank you for using our banking application. Good bye." << endl;
    
    return 0;
}