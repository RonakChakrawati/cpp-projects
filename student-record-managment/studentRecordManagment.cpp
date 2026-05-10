#include <iostream>
using namespace std;

const int MAX_STUDENTS = 100;

struct student{
    int roll;
    char name[50];
    float marks;
};

student students[MAX_STUDENTS];
int studentCount = 0;

void selectMenu(int i){
    if(i == 1){
        cout << "ADD STUDENT " << endl;
        if (studentCount >= MAX_STUDENTS) {
            cout << "Maximum student limit reached." << endl;
            return;
        }
        cout << "Enter roll number: ";
        cin >> students[studentCount].roll;
        cout << "Enter name: ";
        cin >> students[studentCount].name;
        cout << "Enter marks: ";
        cin >> students[studentCount].marks;
        studentCount++;
        cout <<endl;
    }
    else if(i == 2){
        cout << "DISPLAY STUDENTS " << endl;
        if (studentCount == 0) {
            cout << "No records found." << endl;
        } else {
            for (int j = 0; j < studentCount; j++) {
                cout << "ROLL NUMBER : " << students[j].roll << "| ";
                cout << "NAME : " << students[j].name << "| ";
                cout << "MARKS : " << students[j].marks << endl;
            }
        }
    }
    else if(i == 3){
        int roll;
        cout << "SEARCH STUDENT" << endl;
        cout << "Enter roll number: ";
        cin >> roll;
        bool found = false;
        for (int j = 0; j < studentCount; j++) {
            if (students[j].roll == roll) {
                cout << "ROLL NUMBER : " << students[j].roll << "| ";
                cout << "NAME : " << students[j].name << "| ";
                cout << "MARKS : " << students[j].marks << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << "Student not found." << endl;
    }
    else if(i == 4){
        int roll;
        cout << "MODIFY STUDENT" << endl;
        cout << "Enter roll number to modify: ";
        cin >> roll;
        bool found = false;
        for (int j = 0; j < studentCount; j++) {
            if (students[j].roll == roll) {
                cout << "Enter new name: ";
                cin >> students[j].name;
                cout << "Enter new marks: ";
                cin >> students[j].marks;
                found = true;
                cout << "Record updated." << endl;
                break;
            }
        }
        if (!found) cout << "Student not found." << endl;
    }
    else if(i == 5){
        int roll;
        cout << "DELETE STUDENT" << endl;
        cout << "Enter roll number to delete: ";
        cin >> roll;
        bool found = false;
        for (int j = 0; j < studentCount; j++) {
            if (students[j].roll == roll) {
                for (int k = j; k < studentCount - 1; k++) {
                    students[k] = students[k + 1];
                }
                studentCount--;
                found = true;
                cout << "Record deleted." << endl;
                break;
            }
        }
        if (!found) cout << "Student not found." << endl;
    }
};

int main(){
    int choice;
    do {
        cout << "\nSTUDENT RECORD MANAGEMENT SYSTEM" << endl;
        cout << "=================================" << endl;
        cout << "1.  ADD STUDENT" << endl;
        cout << "2.  DISPLAY STUDENT" << endl;
        cout << "3.  SEARCH STUDENT" << endl;
        cout << "4.  MODIFY STUDENT" << endl;
        cout << "5.  DELETE STUDENT" << endl;
        cout << "6.  EXIT" << endl;
        cout << "=================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice != 6) {
            selectMenu(choice);
        }
    } while (choice != 6);
    
    return 0;
}