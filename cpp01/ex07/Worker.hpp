#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <fstream>
#include <sstream>

class Worker {
    const char * _filename;
    std::string _s1;
    std::string _s2;
    public:
        Worker(const char * filename, std::string s1, std::string s2);
        ~Worker();
        void setS1(std::string s1);
        std::string getS1() const ;
        void setS2(std::string s2);
        std::string getS2() const ;
        int parseReplace();
        std::string toCaps(const char *s);
};

#endif // WORKER_H
