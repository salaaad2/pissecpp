#include <iostream>

class Base {public : virtual ~Base(void) {}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

void
identify_from_reference(Base & p) {
    A * a    = dynamic_cast<A*>(&p);
    B * b    = dynamic_cast<B*>(&p);
    C * c    = dynamic_cast<C*>(&p);
    Base * d = dynamic_cast<Base*>(&p);

    if (a != NULL)
        std::cout << "this class is of type A" << std::endl;
    else if (b != NULL)
        std::cout << "this class is of type B" << std::endl;
    else if (c != NULL)
        std::cout << "this class is of type C" << std::endl;
    else if (d != NULL)
        std::cout << "this class is of type Base" << std::endl;
    else
        std::cout << "couldn't find class type" << std::endl;
}

void
identify_from_pointer(Base * p) {
    A * a = dynamic_cast<A*>(p);
    B * b = dynamic_cast<B*>(p);
    C * c = dynamic_cast<C*>(p);
    Base * d = dynamic_cast<Base*>(p);

    if (a != NULL)
        std::cout << "this class is of type A" << std::endl;
    else if (b != NULL)
        std::cout << "this class is of type B" << std::endl;
    else if (c != NULL)
        std::cout << "this class is of type C" << std::endl;
    else if (d != NULL)
        std::cout << "this class is of type Base" << std::endl;
    else
        std::cout << "couldn't find class type" << std::endl;
}

int main(void) {
    Base	*	baseptr = NULL;
    A			a;
    B			b;
    C			c;
    Base		base;
    Base	&	Baseref = base;
    Base	&	Abaseref = a;
    Base	&	Bbaseref = b;
    Base	&	Cbaseref = c;

    std::cout << "---- try to identify null pointer----\n";
    identify_from_pointer(baseptr);
    std::cout << "---- identify pointer & reference to base----\n";
    baseptr = &base;
    identify_from_pointer(baseptr);
    identify_from_reference(Baseref);
    std::cout << "---- identify pointer & reference to a----\n";
    baseptr = &a;
    identify_from_pointer(baseptr);
    identify_from_reference(Abaseref);
    std::cout << "---- identify pointer & reference to b----\n";
    baseptr = &b;
    identify_from_pointer(baseptr);
    identify_from_reference(Bbaseref);
    std::cout << "---- identify pointer & reference to c----\n";
    baseptr = &c;
    identify_from_pointer(baseptr);
    identify_from_reference(Cbaseref);
    return (0);
}
