#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Function declarations
void login(string user = "", string pass = "", string username = "", string password = "");
void message(string username , string password);
void main_menu();
void basic_programs();
void loops();
void conditional_statements();
void functions();
void arrays();

int main()
{
    // Default admin credentials
    string username = "admin";
    string password = "admin";
    string user, pass;

    // Prompt user for username and password
    cout << "Enter username : ";
    cin >> user;
    cout << "Enter password : ";
    cin >> pass;

    // Call login function to validate credentials
    login(user, pass, username, password);
    
    return 0;
}

// Function to handle user login
void login(string user, string pass, string username, string password)
{
    // Check if entered credentials match the default admin credentials
    if (user == username && pass == password)
    {
        cout << "Login successful" << endl;
        main_menu(); // Proceed to main menu
    }
    else
    {
        // If credentials are invalid, prompt user to enter again
        cout << "Invalid username or password" << endl;
        cout << "Enter username : ";
        cin >> user;
        cout << "Enter password : ";
        cin >> pass;
        login(user, pass, username, password); // Recursive call to login function
    }
}

// Function to display a welcome message
void message(string username, string password)
{
    // Display user id and password in a formatted box
    cout << "*****************************************" << endl;
    cout << "* Welcome to Learning Management System *" << endl;
    cout << "* Select the topic you want to learn    *" << endl;
    cout << "*                                       *" << endl;
    cout << "*      Username : " << username << "                 *" << endl;
    cout << "*      Password : " << password << "                 *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
}

// Function to display the main menu
void main_menu()
{
    system("cls"); // Clear the console screen
    message("admin", "admin"); // Display welcome message

    // Display menu options
    cout << "1. Basic Programs" << endl;
    cout << "2. Loops" << endl;
    cout << "3. Conditional Statements" << endl;
    cout << "4. Functions" << endl;
    cout << "5. Arrays" << endl;
    cout << "6. Exit" << endl;

    int choice;
    cout << "Enter your choice : ";
    cin >> choice;

    // Switch case to handle user choice
    switch (choice)
    {
    case 1:
        basic_programs();
        break;
    case 2:
        loops();
        break;
    case 3:
        conditional_statements();
        break;
    case 4:
        functions();
        break;
    case 5:
        arrays();
        break;
    case 6:
        exit(0); // Exit the program
        break;
    default:
        cout << "Invalid choice" << endl;
        main_menu(); // Display main menu again for invalid choice
    }
}
// Function to display basic programs menu
void basic_programs()
{
    system("cls"); // Clear the console screen
    message("admin", "admin"); // Display welcome message

    // Display menu options for basic programs
    cout << "1. Hello World" << endl;
    cout << "2. Sum of two numbers" << endl;
    cout << "3. Swap two numbers" << endl;
    cout << "4. Check whether a number is even or odd" << endl;
    cout << "5. Check whether a number is positive or negative" << endl;
    cout << "6. Go back to main menu ." << endl;
    cout << "0. To Exit  ." << endl;
    cout << " Enter your choice : ";
    int choice;
    cin >> choice;

    // Switch case to handle user choice
    switch (choice)
    {
    case 1:
    {   
        // Hello World
        system("cls"); // Clear the console screen
        message("admin", "admin"); // Display welcome message
        cout << "Hello World" << endl; // Print Hello World
        break;
    }
    case 2:
    {   
        // Sum of two numbers
        system("cls"); // Clear the console screen
        message("admin", "admin"); // Display welcome message
        int a, b;
        cout << "Sum Of Two Numbers/n" << endl;
        cout << "Enter two numbers : ";
        cin >> a >> b;
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl; // Calculate and print sum
        break;
    }
    case 3:
    {   
        // Swap two numbers
        system("cls"); // Clear the console screen
        message("admin", "admin"); // Display welcome message
        int x, y,z;
        cout << "Swap Two Numbers/n" << endl;
        cout << "Enter two numbers : ";
        cin >> x >> y;
        cout << "Before swapping : x = " << x << " y = " << y << endl;
        z=x;
        x=y;
        y=z;
        cout << "After swapping : x = " << x << " y = " << y << endl; // Swap and print the numbers
        break;
    }
    case 4:
    {   
        // Check whether a number is even or odd
        system("cls"); // Clear the console screen
        message("admin", "admin"); // Display welcome message
        int num;
        cout << "Check Whether A Number Is Even Or Odd/n" << endl;
        cout << "Enter a number : ";
        cin >> num;
        if (num % 2 == 0)
        {
            cout << num << " is even" << endl; // Check and print if the number is even
        }
        else
        {
            cout << num << " is odd" << endl; // Check and print if the number is odd
        }
        break;
    }
    case 5:
    {   
        // Check whether a number is positive or negative
        system("cls"); // Clear the console screen
        message("admin", "admin"); // Display welcome message
        int n;
        cout << "Check Whether A Number Is Positive Or Negative/n" << endl;
        cout << "Enter a number : ";
        cin >> n;
        if (n > 0)
        {
            cout << n << " is positive" << endl; // Check and print if the number is positive
        }
        else if (n < 0)
        {
            cout << n << " is negative" << endl; // Check and print if the number is negative
        }
        else
        {
            cout << n << " is zero" << endl; // Check and print if the number is zero
        }
        break;
    }
    case 6:
        main_menu(); // Go back to main menu
        break;
    case 0:
        exit(0); // Exit the program
        break;
    default:
        cout << "Invalid choice" << endl;
        basic_programs(); // Display basic programs menu again for invalid choice
    }
}

// Function to handle loops menu
void loops()
{
    system("cls"); // Clear the console screen
    message("admin", "admin"); // Display welcome message

    // Display menu options for loops
    cout << "1. for loop" << endl;
    cout << "2. while loop" << endl;
    cout << "3. do while loop" << endl;
    cout << "0. To Exit" << endl;
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;

    // Switch case to handle user choice
    switch (choice)
    {
    case 1:
    {
        // for loop
        system("cls"); // Clear the console screen
        message("admin", "admin"); // Display welcome message

        // Display menu options for for loop
        cout << "Basic 5 Programs Of FOR Loops/n" << endl;
        cout << "1. Print numbers from 1 to n" << endl;
        cout << "2. Print numbers from n to 1" << endl;
        cout << "3. Print even numbers from 1 to n" << endl;
        cout << "4. Print odd numbers from 1 to n" << endl;
        cout << "5. Print sum of numbers from 1 to n" << endl;
        cout << "6. Go back to Main Menu" << endl;
        cout << "0. To Exit" << endl;
        cout << "Enter your choice : ";
        int ch;
        cin >> ch;

        // Switch case to handle user choice for for loop
        switch (ch)
        {
        case 1:
        {   
            // Print numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int n;
            cout << "Print Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                cout << i << " "; // Print numbers from 1 to n
            }
            cout << endl;
            break;
        }
        case 2:
        {   
            // Print numbers from n to 1
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int num;
            cout << "Print Numbers From N To 1/n" << endl;
            cout << "Enter a number : ";
            cin >> num;
            for (int i = num; i >= 1; i--)
            {
                cout << i << " "; // Print numbers from n to 1
            }
            cout << endl;
            break;
        }
        case 3:
        {   
            // Print even numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int x;
            cout << "Print Even Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> x;
            for (int i = 1; i <= x; i++)
            {
                if (i % 2 == 0)
                {
                    cout << i << " "; // Print even numbers from 1 to n
                }
            }
            cout << endl;
            break;
        }
        case 4:
        {   
            // Print odd numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int y;
            cout << "Print Odd Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> y;
            for (int i = 1; i <= y; i++)
            {
                if (i % 2 != 0)
                {
                    cout << i << " "; // Print odd numbers from 1 to n
                }
            }
            cout << endl;
            break;
        }
        case 5:
        {   
            // Print sum of numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int z;
            cout << "Print Sum Of Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> z;
            int sum = 0;
            for (int i = 1; i <= z; i++)
            {
                sum += i; // Calculate sum of numbers from 1 to n
            }
            cout << "Sum of numbers from 1 to " << z << " is " << sum << endl;
            break;
        }
        case 6:
            main_menu(); // Go back to Main Menu
            break;
        case 0:
            exit(0); // Exit the program
            break;
        default:
            cout << "Invalid choice" << endl;
            loops(); // Display loops menu again for invalid choice
        }
        break;
    }
    case 2:
    {   
        // while loop
        system("cls"); // Clear the console screen
        message("admin", "admin"); // Display welcome message

        // Display menu options for while loop
        cout << "Basic 5 Programs Of WHILE Loops/n" << endl;
        cout << "1. Print numbers from 1 to n" << endl;
        cout << "2. Print numbers from n to 1" << endl;
        cout << "3. Print even numbers from 1 to n" << endl;
        cout << "4. Print odd numbers from 1 to n" << endl;
        cout << "5. Print sum of numbers from 1 to n" << endl;
        cout << "6. Go back to Main Menu" << endl;
        cout << "0. To Exit" << endl;
        cout << "Enter your choice : ";
        int ch;
        cin >> ch;

        // Switch case to handle user choice for while loop
        switch (ch)
        {
        case 1:
        {   
            // Print numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int n;
            cout << "Print Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> n;
            int i = 1;
            while (i <= n)
            {
                cout << i << " "; // Print numbers from 1 to n
                i++;
            }
            cout << endl;
            break;
        }
        case 2:
        {   
            // Print numbers from n to 1
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int num;
            cout << "Print Numbers From N To 1/n" << endl;
            cout << "Enter a number : ";
            cin >> num;
            while (num >= 1)
            {
                cout << num << " "; // Print numbers from n to 1
                num--;
            }
            cout << endl;
            break;
        }
        case 3:
        {   
            // Print even numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int x;
            cout << "Print Even Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> x;
            int i = 1;
            while (i <= x)
            {
                if (i % 2 == 0)
                {
                    cout << i << " "; // Print even numbers from 1 to n
                }
                i++;
            }
            cout << endl;
            break;
        }
        case 4:
        {   
            // Print odd numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int y;
            cout << "Print Odd Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> y;
            int i = 1;
            while (i <= y)
            {
                if (i % 2 != 0)
                {
                    cout << i << " "; // Print odd numbers from 1 to n
                }
                i++;
            }
            cout << endl;
            break;
        }
        case 5:
        {   
            // Print sum of numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int z;
            cout << "Print Sum Of Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> z;
            int sum = 0;
            int i = 1;
            while (i <= z)
            {
                sum += i; // Calculate sum of numbers from 1 to n
                i++;
            }
            cout << "Sum of numbers from 1 to " << z << " is " << sum << endl;
            break;
        }
        case 6:
            main_menu(); // Go back to Main Menu
            break;
        case 0:
            exit(0); // Exit the program
            break;
        default:
            cout << "Invalid choice" << endl;
            loops(); // Display loops menu again for invalid choice
        }
        break;
    }
    case 3:
    {   
        // do while loop
        system("cls"); // Clear the console screen
        message("admin", "admin"); // Display welcome message

        // Display menu options for do while loop
        cout << "Basic 5 Programs Of DO WHILE Loops/n" << endl;
        cout << "1. Print numbers from 1 to n" << endl;
        cout << "2. Print numbers from n to 1" << endl;
        cout << "3. Print even numbers from 1 to n" << endl;
        cout << "4. Print odd numbers from 1 to n" << endl;
        cout << "5. Print sum of numbers from 1 to n" << endl;
        cout << "6. Go back to Main Menu" << endl;
        cout << "0. To Exit" << endl;
        cout << "Enter your choice : ";
        int ch;
        cin >> ch;

        // Switch case to handle user choice for do while loop
        switch (ch)
        {
        case 1:
        {   
            // Print numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int n;
            cout << "Print Numbers From 1 To N" << endl;
            cout << "Enter a number : ";
            cin >> n;
            int i = 1;
            do
            {
                cout << i << " "; // Print numbers from 1 to n
                i++;
            } while (i <= n);
            cout << endl;
            break;
        }
        case 2:
        {   
            // Print numbers from n to 1
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int num;
            cout << "Print Numbers From N To 1/n" << endl;
            cout << "Enter a number : ";
            cin >> num;
            do
            {
                cout << num << " "; // Print numbers from n to 1
                num--;
            } while (num >= 1);
            cout << endl;
            break;
        }
        case 3:
        {   
            // Print even numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int x;
            cout << "Print Even Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> x;
            int i = 1;
            do
            {
                if (i % 2 == 0)
                {
                    cout << i << " "; // Print even numbers from 1 to n
                }
                i++;
            } while (i <= x);
            cout << endl;
            break;
        }
        case 4:
        {   
            // Print odd numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int y;
            cout << "Print Odd Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> y;
            int i = 1;
            do
            {
                if (i % 2 != 0)
                {
                    cout << i << " "; // Print odd numbers from 1 to n
                }
                i++;
            } while (i <= y);
            cout << endl;
            break;
        }
        case 5:
        {   
            // Print sum of numbers from 1 to n
            system("cls"); // Clear the console screen
            message("admin", "admin"); // Display welcome message
            int z;
            cout << "Print Sum Of Numbers From 1 To N/n" << endl;
            cout << "Enter a number : ";
            cin >> z;
            int sum = 0;
            int i = 1;
            do
            {
                sum += i; // Calculate sum of numbers from 1 to n
                i++;
            } while (i <= z);
            cout << "Sum of numbers from 1 to " << z << " is " << sum << endl;
            break;
        }
        case 6:
            main_menu(); // Go back to Main Menu
            break;
        case 0:
            exit(0); // Exit the program
            break;
        default:
            cout << "Invalid choice" << endl;
            loops(); // Display loops menu again for invalid choice
        }
        break;
    }
    case 6:
        main_menu(); // Go back to Main Menu
        break;
    case 0:
        exit(0); // Exit the program
        break;
    default:
        cout << "Invalid choice" << endl;
        loops(); // Display loops menu again for invalid choice
    }
}
// Function to handle conditional statements menu
void conditional_statements()
{
    system("cls"); // Clear the console screen
    message("admin", "admin"); // Display welcome message

    // Display menu options for conditional statements
    cout << "Conditional Statements/n" << endl;
    cout << "1. Check whether a number is positive or negative" << endl;
    cout << "2. Check whether a number is even or odd" << endl;
    cout << "3. Check whether a year is leap year or not" << endl;
    cout << "4. Find the largest number among three numbers" << endl;
    cout << "5. Find the smallest number among three numbers" << endl;
    cout << "6. Go back to Main Menu" << endl;
    cout << "0. To Exit" << endl;
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;

    // Switch case to handle user choice
    switch (choice)
    {
    case 1:
    {
        system("cls");
        message("admin", "admin");
        // Check whether a number is positive or negative
        cout << "Check Whether A Number Is Positive Or Negative/n" << endl;
        int num;
        cout << "Enter a number : ";
        cin >> num;
        if (num > 0)
        {
            cout << num << " is positive" << endl;
        }
        else if (num < 0)
        {
            cout << num << " is negative" << endl;
        }
        else
        {
            cout << num << " is zero" << endl;
        }
        break;
    }
    case 2:
    {
        system("cls");
        message("admin", "admin");
        // Check whether a number is even or odd
        cout << "Check Whether A Number Is Even Or Odd/n" << endl;
        int n;
        cout << "Enter a number : ";
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n << " is even" << endl;
        }
        else
        {
            cout << n << " is odd" << endl;
        }
        break;
    }
    case 3:
    {
        system("cls");
        message("admin", "admin");
        // Check whether a year is leap year or not
        cout << "Check Whether A Year Is Leap Year Or Not/n" << endl;
        int year;
        cout << "Enter a year : ";
        cin >> year;
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    cout << year << " is a leap year" << endl;
                }
                else
                {
                    cout << year << " is not a leap year" << endl;
                }
            }
            else
            {
                cout << year << " is a leap year" << endl;
            }
        }
        else
        {
            cout << year << " is not a leap year" << endl;
        }
        break;
    }
    case 4:
    {
        system("cls");
        message("admin", "admin");
        // Find the largest number among three numbers
        cout << "Find The Largest Number Among Three Numbers/n" << endl;
        int a, b, c;
        cout << "Enter three numbers : ";
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            cout << a << " is the largest number" << endl;
        }
        else if (b > a && b > c)
        {
            cout << b << " is the largest number" << endl;
        }
        else
        {
            cout << c << " is the largest number" << endl;
        }
        break;
    }
    case 5:
    {
        system("cls");
        message("admin", "admin");
        // Find the smallest number among three numbers
        cout << "Find The Smallest Number Among Three Numbers/n" << endl;
        int x, y, z;
        cout << "Enter three numbers : ";
        cin >> x >> y >> z;
        if (x < y && x < z)
        {
            cout << x << " is the smallest number" << endl;
        }
        else if (y < x && y < z)
        {
            cout << y << " is the smallest number" << endl;
        }
        else
        {
            cout << z << " is the smallest number" << endl;
        }
        break;
    }
    case 6:
        // Go back to Main Menu
        main_menu();
        break;
    case 0:
        // Exit
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;
        conditional_statements();
    }
}

// Function to handle functions menu
void functions()
{
    system("cls"); // Clear the console screen
    message("admin", "admin"); // Display welcome message

    // Display menu options for functions
    cout << "Functions/n" << endl;
    cout << "1. Add two numbers" << endl;
    cout << "2. Subtract two numbers" << endl;
    cout << "3. Multiply two numbers" << endl;
    cout << "4. Divide two numbers" << endl;
    cout << "5. Go back to Main Menu" << endl;
    cout << "0. To Exit" << endl;
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;

    // Switch case to handle user choice
    switch (choice)
    {
    case 1:
    {
        system("cls");
        message("admin", "admin");
        // Add two numbers
        cout << "Add Two Numbers/n" << endl;
        int a, b;
        cout << "Enter two numbers : ";
        cin >> a >> b;
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
        break;
    }
    case 2:
    {
        system("cls");
        message("admin", "admin");
        // Subtract two numbers
        cout << "Subtract Two Numbers/n" << endl;
        int x, y;
        cout << "Enter two numbers : ";
        cin >> x >> y;
        cout << "Difference of " << x << " and " << y << " is " << x - y << endl;
        break;
    }
    case 3:
    {
        system("cls");
        message("admin", "admin");
        // Multiply two numbers
        cout << "Multiply Two Numbers/n" << endl;
        int m, n;
        cout << "Enter two numbers : ";
        cin >> m >> n;
        cout << "Product of " << m << " and " << n << " is " << m * n << endl;
        break;
    }
    case 4:
    {
        system("cls");
        message("admin", "admin");
        // Divide two numbers
        cout << "Divide Two Numbers/n" << endl;
        int p, q;
        cout << "Enter two numbers : ";
        cin >> p >> q;
        cout << "Division of " << p << " by " << q << " is " << p / q << endl;
        break;
    }
    case 5:
        // Go back to Main Menu
        main_menu();
        break;
    case 0:
        // Exit
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;
        functions();
    }
}

// Function to handle arrays menu
void arrays()
{
    system("cls"); // Clear the console screen
    message("admin", "admin"); // Display welcome message

    // Display menu options for arrays
    cout << "Arrays/n" << endl;
    cout << "1. Print array elements" << endl;
    cout << "2. Find sum of array elements" << endl;
    cout << "3. Find largest element in an array" << endl;
    cout << "4. Find smallest element in an array" << endl;
    cout << "5. Go back to Main Menu" << endl;
    cout << "0. To Exit" << endl;
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;

    // Switch case to handle user choice
    switch (choice)
    {
    case 1:
    {
        system("cls");
        message("admin", "admin");
        // Print array elements
        cout << "Print Array Elements/n" << endl;
        int n;
        cout << "Enter the size of array : ";
        cin >> n;
        int arr[n];
        cout << "Enter the elements of array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Array elements are : ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        break;
    }
    case 2:
    {
        system("cls");
        message("admin", "admin");
        // Find sum of array elements
        cout << "Find Sum Of Array Elements/n" << endl;
        int size;
        cout << "Enter the size of array : ";
        cin >> size;
        int arr[size];
        cout << "Enter the elements of array : ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        cout << "Sum of array elements is " << sum << endl;
        break;
    }
    case 3:
    {
        system("cls");
        message("admin", "admin");
        // Find largest element in an array
        cout << "Find Largest Element In An Array/n" << endl;
        int s;
        cout << "Enter the size of array : ";
        cin >> s;
        int a[s];
        cout << "Enter the elements of array : ";
        for (int i = 0; i < s; i++)
        {
            cin >> a[i];
        }
        int max = a[0];
        for (int i = 1; i < s; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        cout << "Largest element in the array is " << max << endl;
        break;
    }
    case 4:
    {
        system("cls");
        message("admin", "admin");
        // Find smallest element in an array
        cout << "Find Smallest Element In An Array/n" << endl;
        int sz;
        cout << "Enter the size of array : ";
        cin >> sz;
        int ar[sz];
        cout << "Enter the elements of array : ";
        for (int i = 0; i < sz; i++)
        {
            cin >> ar[i];
        }
        int min = ar[0];
        for (int i = 1; i < sz; i++)
        {
            if (ar[i] < min)
            {
                min = ar[i];
            }
        }
        cout << "Smallest element in the array is " << min << endl;
        break;
    }
    case 5:
        // Go back to Main Menu
        main_menu();
        break;
    case 0:
        // Exit
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;
        arrays();
    }
}
