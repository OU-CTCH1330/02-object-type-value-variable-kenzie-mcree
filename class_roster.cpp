#include "std_lib_facilities.h"

int main()
{
    int class_size = 25;
    double average_age = 23.3;

    cout << "Please enter student data\n";

    string first_name;
    string last_name;
    int age;

    cout << "Please enter first name:\n";
    cin >> first_name;

    cout << "Please enter last name:\n";
    cin >> last_name;

    cout << "Please enter age:\n";
    cin >> age;

    ++class_size;

    cout << "\nStudent data collected.\n";

    cout << first_name + " " + last_name + " of age: " << age << "\n";
    cout << "New class size is " << class_size << "\n";

    average_age =
        (class_size - 1) * average_age / class_size
        + age / class_size;

    cout << "New class average is " << average_age << "\n";

    return 0;
}