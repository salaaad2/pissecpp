#include "Worker.hpp"

Worker::Worker(const char * filename, std::string s1, std::string s2) :
	_filename(filename), _s1(s1), _s2(s2) {
    std::cout << "Worker was spawned, he's going to replace ["  << this->_s1 << "] with ["  << this->_s2 << "] in (" << this->_filename << ")" << std::endl;
}

Worker::~Worker() {}

std::string
Worker::toCaps(const char *s) {
    std::string result;
    std::string str(s);
    int i;
    int j;

    i = str.find_first_not_of(' ');
    j = str.find_last_not_of(' ') + 1;
    while (str[i] && i < j) {
        if (str[i] >= 97 && str[i] <= 123) {
            result += (str[i] - 32);
        }
        else {
            result += str[i];
        }
        i++;
    }
    return (result);
}

int
Worker::parseReplace() {
    std::ifstream ifs(this->_filename);
    std::ofstream ofs;
    std::string read;
    std::string fname(this->_filename);
    size_t cpos;

    fname = toCaps(fname.c_str());
    fname += ".replace";
    ofs.open(fname.c_str());
    while (getline(ifs, read, '\n'))
    {
        cpos = read.find(this->_s1);
        if (cpos == std::string::npos) {
            ofs << read << "\n";
        }
        else {
            while (cpos != std::string::npos)
            {
                read.replace(cpos, this->_s1.size(), this->_s2);
                cpos = read.find(this->_s1, cpos + this->_s2.size());
            }
            ofs << read << "\n";
        }
    }
    return (0);
}

std::string
Worker::getS1() const {
    return (this->_s1);
}

void
Worker::setS1(std::string s1) {
    this->_s1 = s1;
}

std::string
Worker::getS2() const {
    return (this->_s2);
}

void
Worker::setS2(std::string s2) {
    this->_s2 = s2;
}
