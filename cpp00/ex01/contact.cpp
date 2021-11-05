#include "contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::add_new(int count) {
    std::string input;

    while (std::cin.good())
    {
        std::cout << "ADDING A CONTACT" << std::endl;
        this->id = (count + 1);
        std::cout << "enter the contact's first name :" << std::endl;
        getline(std::cin, this->first_name, '\n');
        std::cout << "enter the contact's last name :" << std::endl;
        getline(std::cin, this->last_name, '\n');
        std::cout << "enter the contact's nick :" << std::endl;
        getline(std::cin, this->nick_name, '\n');
        std::cout << "enter the contact's login name :" << std::endl;
        getline(std::cin, this->login_name, '\n');
        std::cout << "enter the contact's address :" << std::endl;
        getline(std::cin, this->postal_addr, '\n');
        std::cout << "enter the contact's email address :" << std::endl;
        getline(std::cin, this->email_addr, '\n');
        std::cout << "enter the contact's favorite meal :" << std::endl;
        getline(std::cin, this->favorite_meal, '\n');
        std::cout << "enter the contact's underwear color :" << std::endl;
        getline(std::cin, underwear_color, '\n');
        std::cout << "enter the contact's phone number :" << std::endl;
        input = "0";
        while (!(std::stol(input) > 600000000 && std::stol(input) < 800000000) && std::cin.good()) {
            getline(std::cin, input, '\n');
            if (!(isdigit(input[0])) ||
                (!(std::stol(input) > 600000000 && std::stol(input) < 800000000))) {
                std::cout << "not a phone number" << std::endl;
                input = "0";
            }
        }
        this->phone_number = std::stol(input);
        std::cout << "enter the contact's darkest_secret :" << std::endl;
        getline(std::cin, darkest_secret, '\n');
        std::cout << "enter the contact's birthdate using the DDMMAAAA format :" << std::endl;
        getline(std::cin, this->birthday, '\n');
        return ;
    }
}

void Contact::print_column(std::string content, int length) const {
    std::string result;
    int i;

    i = 0;
    if (length == 8) {
        result = content;
    }
    else if (length < 8) {
        while (i < (8 - length)) {
            result.append(" ");
            i++;
        }
        result.append(content);
    }
    else if (length > 8) {
        while (i< 7){
            result += content[i++];
        }
        result.append(".");
    }
    std::cout << result << "|";
}

int Contact::print_info(Contact * contact, int count) const {
    int i = -1;
    if (count >= 1)
    {
        while (++i < count)
        {
            std::cout << "|       " << contact[i].id << "|";
            print_column(contact[i].first_name, contact[i].first_name.length());
            print_column(contact[i].last_name, contact[i].last_name.length());
            print_column(contact[i].nick_name, contact[i].nick_name.length());
            std::cout << std::endl;
        }
        return (1);
    }
    else
    {
        std::cout << "You must first add contacts to this phonebook" << std::endl;
        return (0);
    }
}

void Contact::print_detail() const {
    std::cout << "first_name      : " << this->first_name << "\n"
              << "last_name       : " << this->last_name << "\n"
              << "nick_name       : " << this->nick_name << "\n"
              << "login_name      : " << this->login_name << "\n"
              << "postal_addr     : " << this->postal_addr << "\n"
              << "email_addr      : " << this->email_addr << "\n"
              << "favorite_meal   : " << this->favorite_meal << "\n"
              << "underwear_color : " << this->underwear_color << "\n"
              << "phone_number    : " << this->phone_number << "\n"
              << "birthday        : " << this->birthday << "\n"
              << "darkest_secret  : " << this->darkest_secret << std::endl;
}
