#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    float creditHours, grade, totalCredits = 0, totalGradePoints = 0;

    cout<<"Enter the number of Courses : ";
    cin>> numCourses;

    cout << fixed << setprecision(2);

    for (int i = 1; i<=numCourses ; ++i) {

        cout<<"Enter the Credit Hours: ";
        cin>>creditHours;
        cout<<"Enter the Grade (on a scale of 4.0): ";
        cin>>grade;

        totalCredits += creditHours;
        totalGradePoints += grade;

        cout<<"The total Grade points for this course :  "<<(grade * creditHours)<<endl;


    }
    float cgpa = totalGradePoints/totalCredits;

    cout<<"____________________________________________"<<endl;
    cout<<"The Credit Hours are : "<<totalCredits<<endl;
    cout<<"The Total Grade : "<<totalGradePoints<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
    cout<<"_____________________________________________"<<endl;

    return 0;
}