// Лр-16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>

class Magazine {
public:
    std::string title;
    std::string publisher;
    int year;
    int pageCount;

    Magazine(std::string t, std::string p, int y, int pc)
        : title(t), publisher(p), year(y), pageCount(pc) {}
};

void printMagazinesByPublisher(const std::vector<Magazine>& magazines, const std::string& publisher) {
    std::cout << "Magazines published by " << publisher << ":\n";
    for (const auto& mag : magazines) {
        if (mag.publisher == publisher) {
            std::cout << "Title: " << mag.title << ", Year: " << mag.year << ", Pages: " << mag.pageCount << '\n';
        }
    }
}

void printMagazinesAfterYear(const std::vector<Magazine>& magazines, int year) {
    std::cout << "Magazines published after " << year << ":\n";
    for (const auto& mag : magazines) {
        if (mag.year > year) {
            std::cout << "Title: " << mag.title << ", Publisher: " << mag.publisher << ", Pages: " << mag.pageCount << '\n';
        }
    }
}

int main() {
    std::vector<Magazine> magazines = {
        Magazine("Science Today", "Nature Publishing", 2020, 50),
        Magazine("Tech World", "Tech Publications", 2019, 60),
        Magazine("Health Monthly", "Health Publications", 2021, 45),
        Magazine("Science Today", "Nature Publishing", 2022, 55),
        Magazine("Tech World", "Tech Publications", 2023, 65)
    };

    std::string publisher = "Nature Publishing";
    int year = 2020;

    printMagazinesByPublisher(magazines, publisher);
    std::cout << std::endl;
    printMagazinesAfterYear(magazines, year);

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
