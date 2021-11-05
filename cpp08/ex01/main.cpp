
#include "span.hpp"

int main(void) {
    std::cout << "add with range" << std::endl;
    Span span = Span(91);

    try
    {
        span.addNumber(0, 90);
    }
    catch (Span::SpanFullException & sfe) {
        std::cout << sfe.what() << std::endl;
    }
    std::cout << "longest span"  << std::endl;
    std::cout << span.longestSpan() << std::endl;
    std::cout << "shortest span"  << std::endl;
    std::cout << span.shortestSpan() << std::endl;

    std::cout << "add manually" << std::endl;

    Span qwe = Span(10);
    qwe.addNumber(1);
    qwe.addNumber(1);
    qwe.addNumber(1);
    qwe.addNumber(1);
    qwe.addNumber(1);
    qwe.addNumber(1);
    qwe.addNumber(1);
    qwe.addNumber(1);
    qwe.addNumber(1);
    qwe.addNumber(1);
    std::cout << "longest span"  << std::endl;
    std::cout << qwe.longestSpan() << std::endl;
    std::cout << "shortest span"  << std::endl;
    std::cout << qwe.shortestSpan() << std::endl;

    std::cout << "====== throw invalid exception =====" << std::endl;
    Span badspan = Span(1);
    badspan.addNumber(12);
    try {
        badspan.longestSpan();
    }
    catch (Span::SpanFullException & fe) {
        std::cout << fe.what() << std::endl;
    }
    catch (Span::InvalidSpanException & ie) {
        std::cout << ie.what() << std::endl;
    }
    std::cout << "====== throw fullspan exception =====" << std::endl;
    try {
        badspan.addNumber(99);
    }
    catch (Span::SpanFullException & fe) {
        std::cout << fe.what() << std::endl;
    }
    catch (Span::InvalidSpanException & ie) {
        std::cout << ie.what() << std::endl;
    }
    return 0;
}
