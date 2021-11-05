#include <iostream>

#include "Worker.hpp"

int
main(int ac, char *av[]) {
    if (ac != 4 ||
        av[1] == NULL ||
        av[2] == NULL ||
        av[3] == NULL) {
        return (1);
    }
    else {
        Worker * worker = new Worker(av[1], av[2], av[3]);
        worker->parseReplace();
    }
    return (0);
}
