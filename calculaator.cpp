#include <iostream> 
using namespace std;

void calculator()
{   
    int iterations = 0;
    float result = 0;
    char operation;
    char continuechoice;
    cout << "Welcome to the Calculator!" << endl;
    cout << "The following functions can be performed in it: ";
    cout << "\n 1. Addition (+)";
    cout << "\n 2. Subtraction (-)";
    cout << "\n 3. Multiplication (*)";
    cout << "\n 4. Division (/)";
    cout << "\n 5. Other";
    do{
    cout << "\nEnter the operation to be performed (+, -, *, /): ";
    cin >> operation;
    iterations++;
    switch (operation)
    {
    case '+':
    {
        int n;
        // double sum = 0;

        cout << "How many numbers do you want to add? ";
        cin >> n;

        if (n < 1)
        {
            cout << "You need at least one numbers to perform addition." << endl;
            return;
        }

        cout << "Enter the numbers one by one:" << endl;
        for (int i = 0; i < n; i++)
        {
            double num;
            cout << "Number " << i + 1 << ": ";
            cin >> num;
            result += num;
        }
        cout << "The total sum is: " << result << endl;
        break;
    }
    case '-':
    {
        int n;
        // double difference;

        cout << "How many numbers do you want to subtract? ";
        cin >> n;

        if (n < 1)
        {
            cout << "You need at least one numbers to perform subtraction." << endl;
            return;
        }

        cout << "Enter the numbers one by one:" << endl;


        for (int i = 0; i < n; i++)
        {
            double num;
            cout << "Number " << i + 1 << ": ";
            cin >> num;
            result -= num;
        }

        cout << "The total difference is: " << result << endl;
        break;
    }
    case '*':
    {
        int n;
        

        cout << "How many numbers do you want to multiply? ";
        cin >> n;

        if (n < 1)
        {
            cout << "You need at least one numbers to perform multiplication." << endl;
            return;
        }

        cout << "Enter the numbers one by one:" << endl;
        for (int i = 0; i < n; i++)
        {
            double num;
            cout << "Number " << i + 1 << ": ";
            if (iterations == 1){
                cin>>result;}
            else{
            cin >> num;}
            result *= num;
        }

        cout << "The result of multiplication is: " << result << endl;
        break;
    }
    case '/':
    {
        int n;
        

        cout << "How many numbers do you want to divide? ";
        cin >> n;

        if (n < 1)
        {
            cout << "You need at least two numbers to perform division." << endl;
            return;
        }

        cout << "Enter the numbers one by one:" << endl;

        if (iterations == 1){
            cout<<"Number 1:";
            cin>>result;
            n--;
        }
        for (int i = 0; i < n; i++)
        {
            double num;
            cout << "Number " << i + 1 << ": ";
            cin >> num;

            if (num == 0)
            {
                cout << "Error: Division by zero is not allowed!" << endl;
                return;
            }

            result /= num;
        }

        cout << "The result of division is: " << result << endl;
        break;
    }
    default:
        cout << "Invalid operator! Please use +, -, *, or /." << endl;
    } cout<<"Do you want to continue operation? (y/n)?";
      cin>> continuechoice;
    }while(continuechoice =='y');
}

int main()
{
    calculator();
    return 0;
}
