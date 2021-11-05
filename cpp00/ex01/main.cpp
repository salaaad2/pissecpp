#include <iostream>
#include <cstdlib>
#include "contact.hpp"

int main(void) {
    int count;
    int i;
    std::string searchstr;
    Contact contacts[8];

    count = 0;
    while (count != -1 && std::cin.good())
    {
        std::string input;
        std::cout << "WHAT DO YOU WANT TO DO ?" << std::endl;
        getline(std::cin, input, '\n');
        if (input.compare("EXIT") == 0)
        {
            count = -1;
        }
        else if (input.compare("SEARCH") == 0)
        {
            std::cout << "--------ALL CONTACTS------------" << std::endl;
            searchstr = "0";
            if (contacts[0].print_info(contacts, count))
            {
                std::cout << "\n--------ENTER DESIRED ID------------" << std::endl;
                getline(std::cin, searchstr, '\n');
                if (!(isdigit(searchstr[0])))
                {
                    std::cout << INVALIDINPUT << std::endl;
                    searchstr = "0";
                }
                else
                {
                    i = std::stol(searchstr);
                    if (i > 0 && i <= count)
                    {
                        contacts[i - 1].print_detail();
                    }
                    else
                    {
                        std::cout << INVALIDINPUT << std::endl;
                    }
                }
            }
        }
        else if (count == 8)
        {
            std::cout << FULLBOOK << std::endl;
        }
        else if (input.compare("ADD") == 0)
        {
            contacts[count].add_new(count);
            count++;
        }
    }
    return (0);
}
