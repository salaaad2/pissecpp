#ifndef ARRAY_T_H
#define ARRAY_T_H

#include <iostream>

template<typename T>
class Array {
    private :
        unsigned int _size;
        T * _arr;
    public :
        Array() {
            std::cout << "Default constructor, with no arguments. Create empty array " << std::endl;
            this->_arr = new T[0];
            this->_size = 0;
            this->_arr[0] = T();
        }

        Array(unsigned int & size) {
            std::cout << "unsigned int " << size << " specialized constructor" << std::endl;
            this->_size = size;
            this->_arr = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++) {
                this->_arr[i] = T();
            }
        }

        Array(Array const & src) :
            _arr(NULL) {
            *this = src;
        }

        class OutOfBoundsException : public std::exception {
            public :
                virtual const char * outOfBounds() const throw() {
                    return ("You tried to access an element out of current array's bounds");
                }
        };

        T const & operator[](unsigned int pos) const {
            if (pos >= this->_size) {
                throw OutOfBoundsException();
            }
            return (this->_arr[pos]);
        }

        T & operator[](unsigned int pos) {
            if (pos >= this->_size) {
                throw OutOfBoundsException();
            }
            return (this->_arr[pos]);
        }

        ~Array() {
            delete [] this->_arr;
        }

        unsigned int size() const {
            return (this->_size);
        }

        Array & operator=(Array const &rhs) {
            if (this->_arr) {
                delete [] this->_arr;
            }
            this->_size = rhs.size();
            this->_arr = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++) {
                this->_arr[i] = T();
            }
            return (*this);
        }
};

template <typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs) {
    o << "this is an array of size [" << rhs.size() << "]";
    return (o);
}

#endif // ARRAY_T_H
