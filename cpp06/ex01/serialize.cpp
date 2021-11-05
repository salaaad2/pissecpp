#include <iostream>
#include <iomanip>
#include <unistd.h>
#include "serialize.hpp"

Data
init(Data * d) {
    const char chars[] = "abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVXYZ0123456789";

    std::srand(time(0));
    for (int i = 0; i < 8; i++) {
        d->s1 += chars[static_cast<int>(std::rand() % 60)];
        d->s2 += chars[static_cast<int>(std::rand() % 60)];
    }
    d->n = static_cast<int>(std::rand() % INT32_MAX);
    std::cout << "=====create data :=====\n";
    std::cout << d->s1 << "\n";
    std::cout << d->n << "\n";
    std::cout << d->s2 << std::endl;
    return (*d);
}

Data *
deserialize(void * raw) {
    return (reinterpret_cast<Data *>(raw));
}

void *
serialize(void) {
    Data * data = new Data;

    init(data);
    return (static_cast<void*>(data));
}
