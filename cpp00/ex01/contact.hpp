#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

#define FULLBOOK "THIS COOL PHONEBOOK IS FULL, USE THE APPROPRIATE COMMAND TO SEARCH OR EXIT"
#define INVALIDINPUT "INPUT IS NOT A VALID ID"

class Contact {
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string login_name;
    std::string postal_addr;
    std::string email_addr;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
    long phone_number;
    std::string birthday;
    int id;
    public:
        Contact();
        ~Contact();
        void add_new(int count);
        int  print_info(Contact * contact, int count) const ;
        void print_detail() const ;
        void print_column(std::string content, int len) const ;
};

#endif
