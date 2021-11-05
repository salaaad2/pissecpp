#include "Human.hpp"

Human::Human() :_brainRef(this->_brain){
   std::cout << "New human was created\n" << std::endl;
   this->_brainRef.setIq(85);
}

Human::~Human() {
}

std::string
Human::identify() {
    return (this->_brainRef.identify());
}

Brain&
Human::getBrain() {
    return (this->_brainRef);
}
