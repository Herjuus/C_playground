#include <iostream>

struct struktur {
    int villagers;
    bool raided;
};

int main() {
    struktur struktur;
    struktur.tall = 1;
    struktur.enig = false;

    std::cout << struktur.tall << std::endl;
    std::cout << struktur.enig << std::endl;
    std::cout << sizeof struktur << std::endl;
}
