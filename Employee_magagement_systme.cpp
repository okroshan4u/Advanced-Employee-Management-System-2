#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <conio.h>
using namespace std;

struct emp
{
    string name, contact,id, address;
    int  salary;
};
emp e[100];
int total = 0;
void empdata()
{
    int choice;
    cout << "How many employees data do you want to enter?\n";
    cin >> choice;
    for (int i = total; i < total + choice; i++)
    {
        cout << "Enter data of employee" << i + 1 << endl;
        cout << "Employee Name: ";
        cin >> e[i].name;
        cout<<"ID: ";
        cin>>e[i].id;
        cout << "Address: ";
        cin >> e[i].address;
        cout << "contact: ";
        cin >> e[i].contact;
        cout << "salary: ";
        cin >> e[i].salary;
    }
    total = total + choice;
}

void show()
{
    if (total != 0)
    {
        for (int i = 0; i < total; i++)
        {
            cout << "Data of employee " << i + 1 << endl;
            cout << "Employee Name: " << e[i].name << endl;
            cout << "ID: " << e[i].id << endl;
            cout << "Address: " << e[i].address << endl;
            cout << "Salary: " << e[i].salary << endl;
            cout << "Contact: " << e[i].contact << endl;
        }
    }
    else
    {
        cout << "Your record is empty" << endl;
    }
}
void search()
{
    if (total != 0)
    {
        string id;
        cout << "Enter the id od the employee whome data you data you want to search" << endl;
        cin >> id;
        for (int i = 0; i < total; i++)
        {
            if (id == e[i].id)
            {
                cout << "Data of employee " << i + 1 << endl;
                cout << "Employee Name: " << e[i].name << endl;
                cout << "ID: " << e[i].id << endl;
                cout << "Address: " << e[i].address << endl;
                cout << "Salary: " << e[i].salary << endl;
                cout << "Contact: " << e[i].contact << endl;
                break;
            }
            if (i == total - 1)
            {
                cout << "Employee is not in the record" << endl;
            }
        }
    }
    else
    {
        cout << "Your record is empty" << endl;
    }
}
void update()
{
    if (total != 0)
    {
        string id;
        cout << "Enter trhe id of the employee of which you want to update the data";
        cin >> id;
        for (int i = 0; i < total; i++)
        {
            if (id == e[i].id)
            {
                cout << "Previous data\n";
                cout << "Data of employee " << i + 1 << endl;
                cout << "Employee Name: " << e[i].name << endl;
                cout << "ID: " << e[i].id << endl;
                cout << "Address: " << e[i].address << endl;
                cout << "Salary: " << e[i].salary << endl;
                cout << "Contact: " << e[i].contact << endl;

                cout << "Enter new data" << endl;
                cout << "Employee Name: ";
                cin >> e[i].name;
                cout << "Address: ";
                cin >> e[i].address;
                cout << "contact: ";
                cin >> e[i].contact;
                cout << "salary: ";
                cin >> e[i].salary;
                break;
            }
            if (i == total - 1)
            {
                cout << "Employee is not in the record" << endl;
            }
        }
    }
}
void del()
{
    if(total !=0){
        char user;
        cout<<"Press 1 to delete the full record\n";
        cout<<"Press 2 to delete a specific data\n";

        user = getch();
        if(user == '1'){
            total = 0;
            cout<<"All record is deleted ...!!";
        }
        if(user == '2'){
            string id;
            cout<<"Enter the id of the of employee whose data you want to delete: ";
            cin>>id;
            for(int i = 0;i<total ; i++){
                if(e[i].id == id){
                    for(int j = i ;j <total-1; j++){
                        e[j].name = e[j+1].name;
                        e[j].address = e[j+1].address;
                        e[j].contact = e[j+1].contact;
                        e[j].id = e[j+1].id;
                        total--;
                        break;
                    }
                    if(i == total - 1){
                        cout<<"No such id found";
                    }
                }
            }
        }

    }else{
        cout<<"Your record is empty"<<endl;
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

    for (int i = 0; i < 8; i++)
    {
        cout << ".";
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "\n\t\t Your id created successfully" << endl;

    system("CLS");
start:
    cout << "\n\n\t\tEmployee Management System" << endl;
    cout << "\n\n\t\tLogin" << endl;
    cout << "Username: ";
    cout << "Password: ";

    string username1, password1;
    cout << "Username: ";
    cin >> username1;
    cout << "Password: ";
    cin >> password1;

    if (username1 == username && password1 == password)
    {
        system("CLS");
        char user;
        while (1)
        {
            cout << "Press 1 to enter data" << endl;
            cout << "Press 2 to show data" << endl;
            cout << "Press 3 to search data" << endl;
            cout << "Press 4 to update data" << endl;
            cout << "Press 5 to delete data" << endl;
            cout << "Press 6 to logout" << endl;
            user = getch();
            switch (user)
            {
            case '1':
                empdata();
                break;
            case '2':
                show();
                break;
            case '3':
                search();
                break;
            case '4':
                update();
                break;
            case '5':
                del();
                break;
            case '6':
                goto start;
                break;
            default:
                cout << "\a Invalid input" << endl;
                break;
            }
        }
    }
    else if (username1 != username)
    {
        cout << "Your username is Incorrect";
        this_thread::sleep_for(chrono::seconds(3));
        goto start;
    }
    else if (password1 != password)
    {
        cout << "Your password is wrong";
        this_thread::sleep_for(chrono::seconds(3));
        goto start;
    }

    return 0;
}