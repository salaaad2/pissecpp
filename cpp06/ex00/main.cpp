#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <limits.h>
#include <float.h>
#include <float.h>

bool
cv_isChar(std::string str, char *numptr)
{
    long double test;
    int i;

    i = -1;
    if (str[0] == '+')
        return (0);
    if (str[0] == '-')
        return (0);
    while (std::isdigit(str[++i]));
    if (str[i])
        return (0);
    test = strtod(numptr, NULL);
    if (test < 0 || test > 255 || test == 0)
        return (0);
    return (1);
}

bool
cv_isInt(std::string str, char *numptr)
{
    long double test;
    int i;

    i = -1;
    if (str[0] == '+')
        return (0);
    if (str[0] == '-')
        i++;
    while (std::isdigit(str[++i]));
    if (str[i])
        return (0);
    test = strtod(numptr, NULL);
    if (test > INT_MAX || test < INT_MIN)
        return (0);
    return (1);
}

bool
cv_isDouble(std::string str, char *numptr)
{
    long double test;
    int i;

    i = 0;
    if(str[i] == '+')
        return (0);
    if (str[i] == '-')
        i++;
    if (!std::isdigit(str[i]))
        return (0);
    while (std::isdigit(str[++i]));
    if (str[i++] != '.')
        return (0);
    if (!std::isdigit(str[i]))
        return (0);
    while (std::isdigit(str[++i]));
    if (str[i])
        return (0);
    test = strtod(numptr, NULL);
    if ((test > DBL_MAX || test < -DBL_MAX) && test != 0)
        return (0);
    return (1);
}

bool
cv_isFloat(std::string str, char *numptr)
{
    long double test;
    int i;

    i = 0;
    if(str[i] == '+')
        return (0);
    if (str[i] == '-')
        i++;
    if (!std::isdigit(str[i]))
        return (0);
    while (std::isdigit(str[++i]));
    if (str[i++] != '.')
        return (0);
    while (std::isdigit(str[++i]));
    if (str[i++] != 'f')
        return (0);
    if (str[i++])
        return (0);
    test = strtod(numptr, NULL);
    if ((test > FLT_MAX || test < -FLT_MAX) && test != 0)
        return (0);
    return (1);
}

int
convert (std::string str, char *numptr) {
    long double ptrtod;
    float		floatv;
    bool		ischar = false;
    bool		isint = false;
    bool		isfloat = false;
    bool		isinf = false;
    bool		isNinf = false;
    bool		isdouble = false;
    bool		isnan = false;
    int		intv;

    if (str == "nan" || str == "nanf") 	isnan = true;
    if (str == "+inf" || str == "+inff") 	isinf = true;
    if (str == "-inf" || str == "-inff") 	isNinf = true;
    if (cv_isChar(str, numptr))			ischar = true;
    if (cv_isInt(str, numptr)) 			isint = true;
    if (cv_isFloat(str, numptr))
    {
        isfloat = true;
    }
    else if (cv_isDouble(str, numptr))
    {
        isdouble = true;
    }

    if (isprint(numptr[0]) && strlen(numptr) == 1 && !isdigit(numptr[0]))
    {
        std::cout << "char   : " << numptr << std::endl;
        std::cout << "int    : impossible" << std::endl;
        std::cout << "float  : impossible" << std::endl;
        std::cout << "double : impossible" << std::endl;
        return (0);
    }
    if (!isnan   &&
		!isinf   &&
		!isNinf  &&
		!ischar  &&
		!isint   &&
		!isfloat &&
		!isdouble) {
        std::cout << "invalid argument" << std::endl;
        return (0);
    }


    ptrtod = strtod(numptr, NULL);
    intv = static_cast<int>(ptrtod);
    floatv = static_cast<double>(ptrtod);

    // Char ----------------------------
    if (isnan)
        std::cout << "char   : impossible" << std::endl;
    else if (isinf || isNinf)
        std::cout << "char   : impossible" << std::endl;
    else if (intv > 32 && intv < 127)
        std::cout << "char   : '" << static_cast<char>(intv) << "'" << std::endl;
    else
    {
        std::cout << "char   : not printable" << std::endl;
    }

    // INT ----------------------------
    if (isnan)
        std::cout << "int    : impossible" << std::endl;
    else if (isinf || isNinf)
        std::cout << "int    : impossible" << std::endl;
    else
        std::cout << "int    : " << intv << std::endl;

    // float/double ----------------------------
    if (isint ||
        isfloat ||
        isdouble) {
        std::cout << "float  : " << std::fixed << std::setprecision(1) << floatv << "f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(1) << floatv << std::endl;
    }
    else if (isnan) {
        std::cout << "float  : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else if (isinf) {
        std::cout << "float  : +inff" << std::endl;
        std::cout << "double : +inf" << std::endl;
    }
    else if (isNinf) {
        std::cout << "float  : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
    }
    else
    {
        std::cout << "float  : 0.0f" << std::endl;
        std::cout << "double : 0.0" << std::endl;
    }
    return (0);
}

int main(int ac, char *av[]) {
    if (ac == 2)
        convert(av[1], av[1]); // cheeky upcast
    else {
        std::cout << "usage : ./convert [STR]" << std::endl;
        return (1);
    }
    return (0);
}
