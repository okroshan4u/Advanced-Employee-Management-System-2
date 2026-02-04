#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <conio.h>
#include <vector>
using namespace std;

struct emp
{
    string name, contact, id, address;
    int salary;
};

vector<emp> e;

void empdata()
{
    int choice;
    cout << "How many employees do you want to enter? ";
    cin >> choice;

    for (int i = 0; i < choice; i++)
    {
        emp temp;
        cout << "\nEnter data of employee " << e.size() + 1 << endl;

        cout << "Name: ";
        cin >> temp.name;

        cout << "ID: ";
        cin >> temp.id;

        cout << "Address: ";
        cin >> temp.address;

        cout << "Contact: ";
        cin >> temp.contact;

        cout << "Salary: ";
        cin >> temp.salary;

        e.push_back(temp); // This adds the employee safely
    }
}

// void show()
// {
//     if (e.size() != 0)
//     {
//         for (int i = 0; i < e.size(); i++)
//         {
//             emp temp;
//             cout << "Data of employee " << i + 1 << endl;
//             cout << "Employee Name: " << temp.name << endl;
//             cout << "ID: " << temp.id << endl;
//             cout << "Address: " << temp.address << endl;
//             cout << "Salary: " << temp.salary << endl;
//             cout << "Contact: " << temp.contact << endl;

//             e.push_back(temp);
//         }
//     }
//     else
//     {
//         cout << "Your record is empty" << endl;
//     }
// }
void show()
{

    if (e.empty())
    {
        cout << "Your record is empty" << endl;
    }

    for (int i = 0; i < e.size(); i++)
    {

        cout << "\nData of employee " << i + 1 << endl;
        cout << "Employee Name: " << e[i].name << endl;
        cout << "ID: " << e[i].id << endl;
        cout << "Address: " << e[i].address << endl;
        cout << "Salary: " << e[i].salary << endl;
        cout << "Contact: " << e[i].contact << endl;
    }
}

void search()
{
    if (e.empty())
    {
        cout << "Your reord is empty" << endl;
        return;
    }

    string id;
    cout << "Enter the Employee ID to search" << endl;
    cin >> id;
    for (int i = 0; i < e.size(); i++)
    {

        if (id == e[i].id)
        {
            cout << "\nData of employee " << i + 1 << endl;
            cout << "Employee Name: " << e[i].name << endl;
            cout << "ID: " << e[i].id << endl;
            cout << "Address: " << e[i].address << endl;
            cout << "Salary: " << e[i].salary << endl;
            cout << "Contact: " << e[i].contact << endl;
            return;
        }
    }
}

void update()
{

    if (e.empty())
    {
        cout << "Your record is empty\n";
        return;
    }

    string id;
    cout << "Enter employee ID to update: ";
    cin >> id;
    for (int i = 0; i < e.size(); i++)
    {
        if (id == e[i].id)
        {
            cout << "\n Current data\n";
            cout << "Data of employee " << i + 1 << endl;
            cout << "Employee Name: " << e[i].name << endl;
            cout << "ID: " << e[i].id << endl;
            cout << "Address: " << e[i].address << endl;
            cout << "Salary: " << e[i].salary << endl;
            cout << "Contact: " << e[i].contact << endl;

            cout << "\nEnter new data\n"
                 << endl;
            cout << "Employee Name: ";
            cin >> e[i].name;
            cout << "Address: ";
            cin >> e[i].address;
            cout << "contact: ";
            cin >> e[i].contact;
            cout << "salary: ";
            cin >> e[i].salary;

            cout << "Employee updated successfully\n";
            return;
        }
    }
    cout << "Employee Not foud\n";
}

void del()
{
    if (e.empty())
    {
        cout << "Your record is empty\n";
        return;
    }

    char user;
    cout << "Press 1 to delete the full record\n";
    cout << "Press 2 to delete a specific data\n";

    user = getch();
    if (user == '1')
    {
        e.clear();
        cout << "All record is deleted ...!!\n";
        return;
    }
    if (user == '2')
    {
        string id;
        cout << "Enter employee ID to delete: ";
        cin >> id;
        for (int i = 0; i < e.size(); i++)
        {
            if (e[i].id == id)
            {
                e.erase(e.begin() + i);
                cout << "Employee deleted\n";
                return;
            }
        }
        cout << "No such ID found\n";
    }
}

int main()
{

    cout << "\n\n\t\t Employee Management System" << endl;
    cout << "\n\n\t\t Sign Up" << endl;

    string username, password;

    cout << "\n\n\t\t Enter username: ";
    cin >> username;

    cout << "\n\tEnter the password: ";
    cin >> password;

    cout << "\n\t\t Your id is creating please wait";

    for (int i = 0; i < 6; i++)
    {
        cout << ".";
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "\n\t\t Your id created successfully \n" << endl;
    this_thread::sleep_for(chrono::seconds(2));


     while (true)   // app runs forever
    {
        // LOGIN LOOP
        while (true)
        {
            system("CLS");
            cout << "\n\n\t\tEmployee Management System\n";
            cout << "\n\t\tLogin\n";

            string user, pass;
            cout << "Username: ";
            cin >> user;
            cout << "Password: ";
            cin >> pass;

            if (user == username && pass == password)
                break;

            cout << "Invalid login. Try again.\n";
            this_thread::sleep_for(chrono::seconds(2));
        }

        system("CLS");

        // MENU LOOP
        while (true)
        {
            cout << "\n1. Enter data";
            cout << "\n2. Show data";
            cout << "\n3. Search data";
            cout << "\n4. Update data";
            cout << "\n5. Delete data";
            cout << "\n6. Logout\n";

            char ch = getch();

            if (ch == '6')
                break;

            switch (ch)
            {
                case '1': empdata(); break;
                case '2': show(); break;
                case '3': search(); break;
                case '4': update(); break;
                case '5': del(); break;
            }
        }
    }
    return 0;
}