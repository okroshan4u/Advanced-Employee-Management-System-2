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
    A([🚀 Start Program]):::start --> B[📋 Display Menu]:::menu
    B --> C{🤔 User Choice}:::choice

    C -->|➕ Add Employee| D[📝 Input Employee Details]:::input
    D --> E[💾 Save to File]:::file
    E --> B

    C -->|👀 View Employees| F[📂 Read Data from File]:::file
    F --> G[📊 Display Records]:::display
    G --> B

    C -->|🔍 Search Employee| H[🆔 Enter Employee ID]:::input
    H --> I[🔎 Search in File]:::process
    I --> J[📄 Display Result]:::display
    J --> B

    C -->|✏️ Update Employee| K[🆔 Enter Employee ID]:::input
    K --> L[🛠 Modify Record]:::process
    L --> M[💾 Update File]:::file
    M --> B

    C -->|🗑 Delete Employee| N[🆔 Enter Employee ID]:::input
    N --> O[❌ Remove Record]:::process
    O --> P[💾 Update File]:::file
    P --> B

    C -->|🚪 Exit| Q([🏁 End Program]):::end

    %% Styles
    classDef start fill:#00c853,color:#fff,stroke:#2e7d32,stroke-width:2px
    classDef end fill:#d50000,color:#fff,stroke:#b71c1c,stroke-width:2px
    classDef menu fill:#2962ff,color:#fff,stroke:#0d47a1,stroke-width:2px
    classDef choice fill:#ffd600,color:#000,stroke:#f9a825,stroke-width:2px
    classDef input fill:#00bcd4,color:#000,stroke:#00838f,stroke-width:2px
    classDef file fill:#8e24aa,color:#fff,stroke:#4a148c,stroke-width:2px
    classDef process fill:#ff7043,color:#000,stroke:#e64a19,stroke-width:2px
    classDef display fill:#66bb6a,color:#000,stroke:#2e7d32,stroke-width:2px

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
