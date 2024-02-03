#include <iostream> 
#include <string>

struct Contact 
{
    std::string name;
    std::string phone_Number;
};

void add(Contact*& arrCon, int& size)
{
    std::string name, phone_Number;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter phone number: ";
    std::cin >> phone_Number;
}

void Delete(Contact*& arrCon, int& size) 
{
    std::string name;
    std::cout << "Enter name of the contact to delete: ";
    std::cin >> name;
}

void Update(Contact*& arrCon, int& size) 
{
    std::string name, newPhone_Number;
    std::cout << "Enter name of the contact to update: ";
    std::cin >> name;
}

void Print(Contact*& arrCon, int& size) {

}

int main()
{
    Contact* arrCon = nullptr; 
    int size = 0;
    int choice;
    std::cout << "Phone Book" << std::endl;
    std::cout << "1. Add Contact" << "2. Delete Contact" << "3. Update Contact" << "4. Print Contacts" << "5. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    do {
        switch (choice) {
        case 1:
            add(arrCon, size);
            break; 
        case 2:
            Delete(arrCon, size);
            break;
        case 3:
            Update(arrCon, size);
            break;
        case 4:
            Print(arrCon, size);
            break;
        case 5:
            std::cout << "Exit" << std::endl;
        default:
            std::cout << "Please try again. Incorrect number." << std::endl;
        }
    }
        while (choice != 5);

    delete[] arrCon;

    return 0;
}