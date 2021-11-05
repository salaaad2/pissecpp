#ifndef  SERIALIZE_H
#define  SERIALIZE_H

struct Data {
    std::string s1;
    int n;
    std::string s2;
};


Data		init(Data * d);
Data	*	deserialize(void * raw);
void	*	serialize(void);

#endif //  SERIALIZE_H
