#ifndef ITER_H
#define ITER_H

template<typename A>
void
iter(A  arr[], int  size, void (*fun)(A const &)) {
    int i;

    i = 0;
    while (i < size)
    {
        fun(arr[i]);
        i++;
    }
}

template<typename A>
void
iter(A const  arr[], int  size, void (*fun)(A&)) {
    int i;

    i = 0;
    while (i < size)
    {
        fun(arr[i]);
        i++;
    }
}

#endif // ITER_H
