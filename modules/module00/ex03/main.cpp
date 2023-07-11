#include "PhoneBook.hpp"

int main() {
    Phonebook phonebook;
    std::string command;

    std::cout << "========================== This is PhoneBook App ==========================" << std::endl;
    std::cout << "1. [ADD]: Add new contact in phonebook" << std::endl;
    std::cout << "2. [SEARCH]: Search contact in phonebook" << std::endl;
    std::cout << "3. [REMOVE]: Remove a contact with an index or a phone number" << std::endl;
    std::cout << "4. [BOOKMARK]: List up the bookmarked contact" << std::endl;
    std::cout << "5. [EXIT]: Shut down the program" << std::endl;
    std::cout << "\n";

    while (true) {

        std::getline(std::cin, command);

        if (command == "ADD") {
            std::string name, phoneNumber, nickname;
            std::cout << "Enter the name: ";
            std::getline(std::cin, name);
            std::cout << "Enter the phone number: ";
            std::getline(std::cin, phoneNumber);
            std::cout << "Enter the nickname: ";
            std::getline(std::cin, nickname);

            phonebook.addContact(name, phoneNumber, nickname);
        } else if (command == "SEARCH") {
            phonebook.displayContacts();
            std::cout << "Enter 1 to display contact details, 2 to bookmark a contact, or 0 to cancel: ";
            int choice;
            std::cin >> choice;

            if (choice == 0) {
                getchar();
                // Cancel the operation
            } else if (choice == 1) {
                std::cout << "Enter the index of the contact to display details: ";
                int index;
                std::cin >> index;
                getchar();
                phonebook.displayContactDetails(index);
            } else if (choice == 2) {
                std::cout << "Enter the index of the contact to toggle the bookmark: ";
                int index;
                std::cin >> index;
                getchar();
                phonebook.bookmarkContact(index);
            } else {
                std::cout << "Invalid choice!" << std::endl;
            }
        } else if (command == "REMOVE") {
            phonebook.displayContacts();
            std::cout << "Enter the index of the contact to remove (or 0 to cancel): ";
            int index;
            std::cin >> index;
            getchar();
            if (index != 0) {
                phonebook.removeContact(index);
            }
        } else if (command == "BOOKMARK") {
            phonebook.displayBookmarks();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command!" << std::endl;
        }
        std::cout << "\n";
    }

    return 0;
}