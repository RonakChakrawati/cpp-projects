
# Student Record Management System

A terminal-based C++ application for managing student records using a clean menu-driven interface.  
Simple project on the surface. Underneath, it teaches the exact habits beginners avoid: structured logic, data handling, and making programs actually useful instead of printing `"Hello World"` for the 47th time.

---

## Overview

This project allows users to:

- Add student records
- Display all students
- Search students by roll number
- Modify existing records
- Delete records

Built as a beginner-friendly CRUD-style application using basic C++ concepts and a struct-based data model.

---

## Features

### Core Functionalities

| Feature | Description |
|---|---|
| Add Student | Store student roll number, name, and marks |
| Display Students | View all records in formatted output |
| Search Student | Find a student using roll number |
| Modify Student | Update student details |
| Delete Student | Remove student records |
| Menu System | Easy CLI navigation |

---

### System Highlights

- Menu-driven interface
- Struct-based data storage
- In-memory student management
- Beginner-friendly code structure
- Simple and readable logic flow

Because eventually every programmer builds some variation of “record management system.” Ancient engineering tradition. Right beside reinventing to-do apps and weather dashboards.

---

## Concepts Practiced

This project helps strengthen understanding of:

- Structures (`struct`)
- Arrays
- Functions
- Loops
- Conditional Statements
- Searching Algorithms
- Basic CRUD Operations
- User Input Handling
- Program Flow Design

---

## Tech Stack

- **Language:** C++
- **Compiler:** g++
- **Libraries Used:** `iostream`, `cstring`
- **Platform:** Terminal / Command Line

---

## Project Structure

```text
student-record-management/
├── studentRecordManagement.cpp
└── README.md
```

---

## How to Run

### 1. Compile the Program

```bash
g++ studentRecordManagement.cpp -o studentRecordManagement
```

### 2. Run the Executable

#### Linux / macOS

```bash
./studentRecordManagement
```

#### Windows

```bash
studentRecordManagement.exe
```

---

## Sample Menu

```text
=================================
 STUDENT RECORD MANAGEMENT SYSTEM
=================================

1. ADD STUDENT
2. DISPLAY STUDENTS
3. SEARCH STUDENT
4. MODIFY STUDENT
5. DELETE STUDENT
6. EXIT

=================================
Enter Choice:
```

---

## Data Model

```cpp
struct Student {
    int roll;
    char name[50];
    float marks;
};
```

Maximum storage capacity: `100 students`

Data is currently stored in-memory, meaning records disappear once the program closes. Computers remain deeply committed to temporary chaos unless explicitly told otherwise.

---

## Limitations

Current limitations of the project:

- No file handling (data is not permanently saved)
- No duplicate roll number checking
- Fixed-size storage
- Limited input validation
- Console-only interface

Normal beginner-stage limitations. Better to build something imperfect than spend six months “planning architecture” for an app nobody uses.

---

## Future Improvements

Planned upgrades:

- File handling for permanent storage
- Duplicate roll number validation
- Better input validation
- Sorting functionality
- Search by name
- Grade calculation system
- Object-Oriented Programming version
- Database integration
- GUI version using Qt or Web Frontend

---

## What I Learned

While building this project, I practiced:

- Designing menu-driven applications
- Managing structured data
- Writing cleaner modular functions
- Handling CRUD operations
- Improving debugging and logical thinking
- Understanding how data flows inside programs

This is the type of project that quietly builds real fundamentals.  
Not flashy. Extremely valuable. Like learning proper footwork before trying bicycle kicks.

---

## Author

**Ronak Chakrawati**

B.Tech student exploring:
- C++
- DSA
- Software Development
- Problem Solving

Building systems one bug at a time.

---

## License

This project is open source and available for educational purposes.
