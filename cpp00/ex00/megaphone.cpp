#include <iostream>

void
c_to_caps(char *s) {
    std::string result;
    std::string string(s);
    int i;
    int j;

    i = string.find_first_not_of(' ');
    j = string.find_last_not_of(' ') + 1;
    while (string[i] && i < j) {
        if (string[i] >= 97 && string[i] <= 123) {
            result += (string[i] - 32);
        }
        else {
            result += string[i];
        }
        i++;
    }
    std::cout << result << " ";
}

int
main(int ac, char *av[]) {
    int i;

    i = 1;
    if (ac == 1) {
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
       return (0);
    }
    while (i < ac) {
        c_to_caps(av[i]);
        i++;
    }
    std::cout << std::endl;
    return (0);
}
