#include <sstream>

#include "Brain.hpp"

Brain::Brain() {
}

Brain::~Brain() {}

std::string
Brain::identify()
{
    std::ostringstream oss;
    oss << (void*)this;
    std::string s(oss.str());
    return (s);
}

void
Brain::setIq(int iq)
{
    this->_iq = iq;
}

int
Brain::getIq(void) const
{                                               \
    return (this->_iq);
}
