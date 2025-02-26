#include <iostream>
#include <string>

using namespace std;

class Person {  // Base class Person
protected:
    string Name;

public:
    void setName(string n) {
        Name = n;
    }
    string getName() {
        return Name;
    }
};

// Derived class LibraryMember that inherits from Person
class LibraryMember : public Person {
private:
    int memberId;
    int BooksBorrowed;

public:
    // Constructor should be public
    LibraryMember(string Name, int MemberId, int BooksBorrowed) {
        this->Name = Name; // Assign base class Name
        this->memberId = MemberId; // Assign memberId correctly
        this->BooksBorrowed = BooksBorrowed; // Assign BooksBorrowed correctly
    }

    int getMemberId() {
        return memberId;
    }

    int getBooksBorrowed() {
        return BooksBorrowed;
    }
};

// Derived class MembershipFee from LibraryMember
class MembershipFee : public LibraryMember {
private:
    double membershipFee; // Fixed variable name to lowercase

public:
    // Constructor
    MembershipFee(string Name, int MemberId, int BooksBorrowed, double Fee)
        : LibraryMember(Name, MemberId, BooksBorrowed) {
        membershipFee = Fee;
    }

    // Getter function for MembershipFee
    double getMembershipFee() {
        return membershipFee;
    }
};

// Main function to test the code
int main() {
    MembershipFee member("KELTO NASITS", 101, 5, 50.0);

    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberId() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << member.getMembershipFee() << endl;

    return 0;
}
