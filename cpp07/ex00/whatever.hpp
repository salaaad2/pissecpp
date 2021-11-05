#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void
swap(T const & x, T const & y) {
    static_cast<void>(x);
    static_cast<void>(y);
}

template<typename T>
void
swap(T & x, T & y) {
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template<typename T>
T
max(T const & x, T const & y) {
    return ((x >= y) ? x : y);
}

template<typename T>
T
min(T const & x, T const & y) {
    return ((x <= y) ? x : y);
}

#endif // WHATEVER_H
