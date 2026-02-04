# Advanced Employee Management System (C++)

The **Advanced Employee Management System** is a console-based C++ application designed to manage employee records efficiently. It provides essential features such as adding, viewing, updating, searching, and deleting employee data while ensuring persistent storage using file handling.

This project demonstrates the practical use of structured programming concepts in C++.

---

## ✨ Features

- Add new employee records  
- View all employees  
- Search employees by ID  
- Update employee information  
- Delete employee records  
- Store data permanently using files  
- Menu-driven and user-friendly interface  

---
## 📊 System Diagram

```mermaid
flowchart TD
    A(Start Program) --> B(Display Menu)
    B --> C{User Choice}

    C -->|Add Employee| D(Input Employee Details)
    D --> E(Save to File)
    E --> B

    C -->|View Employees| F(Read Data from File)
    F --> G(Display Employee Records)
    G --> B

    C -->|Search Employee| H(Enter Employee ID)
    H --> I(Search in File)
    I --> J(Display Result)
    J --> B

    C -->|Update Employee| K(Enter Employee ID)
    K --> L(Modify Record)
    L --> M(Update File)
    M --> B

    C -->|Delete Employee| N(Enter Employee ID)
    N --> O(Remove Record)
    O --> P(Update File)
    P --> B

    C -->|Exit| Q(End Program)

    class A start;
    class Q endNode;
    class B menu;
    class C choice;
    class D,H,K,N input;
    class E,F,M,P file;
    class I,L,O process;
    class G,J display;

    classDef start fill:#00c853,color:#ffffff,stroke:#2e7d32,stroke-width:2px;
    classDef endNode fill:#d50000,color:#ffffff,stroke:#b71c1c,stroke-width:2px;
    classDef menu fill:#2962ff,color:#ffffff,stroke:#0d47a1,stroke-width:2px;
    classDef choice fill:#ffd600,color:#000000,stroke:#f9a825,stroke-width:2px;
    classDef input fill:#4dd0e1,color:#000000,stroke:#00838f,stroke-width:2px;
    classDef file fill:#8e24aa,color:#ffffff,stroke:#4a148c,stroke-width:2px;
    classDef process fill:#ff8a65,color:#000000,stroke:#e64a19,stroke-width:2px;
    classDef display fill:#81c784,color:#000000,stroke:#2e7d32,stroke-width:2px;
```

---

## 🛠 Technologies Used

**Programming Language**
- C++

**Core Concepts**
- Structures  
- File Handling  
- Functions  
- Loops and Conditional Statements  

---

## 📁 Project Structure
```
Advanced-Employee-Management-System-2/
│
├── Employee_magagement_systme.cpp
└── README.md
```


---

## ▶️ How to Run

### Compile the program
```bash
g++ Employee_magagement_systme.cpp -o employee
```
## Run the program
Linux / macOS
```
./employee
```
Windows
```
employee.exe
```
## 🎯 Purpose of the Project

This project was created to understand how employee information can be stored, managed, and retrieved in a real-world scenario using C++. It helps strengthen concepts of data handling, file operations, and program organization.

## 🚀 Future Enhancements
- Add login authentication (Admin/User)
- Implement salary and department modules
- Add sorting and filtering of records
- Integrate with a database system
- Build a graphical user interface (GUI)

## Author
Roshan Kumar Ram

GitHub: https://github.com/okroshan4u
