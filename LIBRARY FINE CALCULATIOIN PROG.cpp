#include <iostream>
#include <iomanip> // For formatting output
#include <string>
#include <ctime>
using namespace std;

// Function to calculate the number of days between two dates
int calculateDaysOverdue(const string& dueDate, const string& returnDate) {
    struct tm due = {0}, ret = {0};

    // Parse dueDate (format: YYYY-MM-DD)
    sscanf(dueDate.c_str(), "%d-%d-%d", &due.tm_year, &due.tm_mon, &due.tm_mday);
    due.tm_year -= 1900; // tm_year is years since 1900
    due.tm_mon -= 1;     // tm_mon is zero-based

    // Parse returnDate (format: YYYY-MM-DD)
    sscanf(returnDate.c_str(), "%d-%d-%d", &ret.tm_year, &ret.tm_mon, &ret.tm_mday);
    ret.tm_year -= 1900;
    ret.tm_mon -= 1;

    // Convert to time_t
    time_t dueTime = mktime(&due);
    time_t retTime = mktime(&ret);

    // Calculate difference in days
    double difference = difftime(retTime, dueTime) / (60 * 60 * 24);
    return static_cast<int>(difference);
}

int main() {
    string bookID, dueDate, returnDate;

    // Get inputs from the user
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (YYYY-MM-DD): ";
    cin >> dueDate;
    cout << "Enter Return Date (YYYY-MM-DD): ";
    cin >> returnDate;

    // Calculate days overdue
    int daysOverdue = calculateDaysOverdue(dueDate, returnDate);

    // Determine the fine
    int fine = 0;
    if (daysOverdue > 0) {
        if (daysOverdue >= 7) {
            fine = daysOverdue * 20;
        } else if (daysOverdue <= 14) {
            fine = daysOverdue * 50;
        } else {
            fine = daysOverdue * 100;
        }
    }

    // Display the results
    cout << "\n--- Library Fine Details ---\n";
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << (daysOverdue > 0 ? daysOverdue : 0) << endl;
    cout << "Fine: Ksh. " << fine << endl;

    return 0;
}
