#pragma once
#include "Contact.hpp"
#include <map>

class Phonebook {
private:
    std::map<std::string, Contact> contacts;

public:
    void addContact(const std::string& name, const std::string& phoneNumber, const std::string& nickname) {
        auto it = contacts.find(phoneNumber);
        if (it == contacts.end()) {
            contacts.insert(std::make_pair(phoneNumber, Contact(name, phoneNumber, nickname)));
            std::cout << "Contact added successfully!" << std::endl;
        } else {
            std::cout << "Contact with the same phone number already exists!" << std::endl;
        }
    }

    void displayContacts() {
        std::cout << "Contacts:" << std::endl;
        int index = 1;
        for (const auto& contact : contacts) {
            std::cout << index++ << ". " << contact.second.getName() << std::endl;
        }
    }

    void displayContactDetails(int index) {
        if (index >= 1 && index <= contacts.size()) {
            auto it = contacts.begin();
            std::advance(it, index - 1);
            const Contact& contact = it->second;
            std::cout << "Name: " << contact.getName() << std::endl;
            std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
            std::cout << "Nickname: " << contact.getNickname() << std::endl;
        } else {
            std::cout << "Invalid index!" << std::endl;
        }
    }

    void removeContact(int index) {
        if (index >= 1 && index <= contacts.size()) {
            auto it = contacts.begin();
            std::advance(it, index - 1);
            contacts.erase(it);
            std::cout << "Contact removed successfully!" << std::endl;
        } else {
            std::cout << "Invalid index!" << std::endl;
        }
    }

    void removeContactByPhoneNumber(const std::string& phoneNumber) {
        auto it = contacts.find(phoneNumber);
        if (it != contacts.end()) {
            contacts.erase(it);
            std::cout << "Contact removed successfully!" << std::endl;
        } else {
            std::cout << "Contact not found!" << std::endl;
        }
    }

    void bookmarkContact(int index) {
        if (index >= 1 && index <= contacts.size()) {
            auto it = contacts.begin();
            std::advance(it, index - 1);
            Contact& contact = it->second;
            bool bookmarked = contact.isBookmarked();
            contact.setBookmark(!bookmarked);
            std::cout << "Contact bookmarked successfully!" << std::endl;
        } else {
            std::cout << "Invalid index!" << std::endl;
        }
    }

    void displayBookmarks() {
        std::cout << "Bookmarked Contacts:" << std::endl;
        int index = 0;
        for (const auto& contact : contacts) {
            index++;
            if (contact.second.isBookmarked()) {
                std::cout << index << ". " << contact.second.getName() << std::endl;
            }
        }
    }
};
