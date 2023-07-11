#pragma once
#include <iostream>

class Contact {
private:
    std::string name;
    std::string phoneNumber;
    std::string nickname;
    bool bookmark;

public:
    Contact(const std::string& name, const std::string& phoneNumber, const std::string& nickname)
        : name(name), phoneNumber(phoneNumber), nickname(nickname), bookmark(false) {}

    std::string getName() const {
        return name;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }

    std::string getNickname() const {
        return nickname;
    }

    bool isBookmarked() const {
        return bookmark;
    }

    void setBookmark(bool value) {
        bookmark = value;
    }
};
