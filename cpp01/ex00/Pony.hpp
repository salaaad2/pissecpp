class Pony {
    int _age;
    int _height;
    public:
        Pony(int age, int height);
        ~Pony();
        int get_age();
        void neigh(int times);
        void set_age(int newage);
        void print_age();
};
