#include <iostream>
const int strsize = 20;
struct bop
{
    char fullname[strsize];     // real name
    char title[strsize];        // job title
    char bopname[strsize];      // secret BOP name
    int preference;             // 0 = full name, 1= title, 2 = bopname
};
int main()
{
    std::cout << "Benevolent Order of Programmers Report\n"
            << "a. display by name       b. display by title\n"
            << "c. display by bopname    d. display by preference\n"
            << "q.quit\n";
    bop Bopname[5]= 
    {
        {
            "Wimp Macho",
            "Title",
            "Bopname",
            0
        },
        {
            "Raki Rhodes",
            "Junior Programmer",
            "Bopname",
            1
        },
        {
            "Celia Laiter",
            "Title",
            "MIPS",
            2
        },
        {
            "Joppy Hipman",
            "Analyst Trainee",
            "Bopname",
            1
        },
        {
            "Pat Hand",
            "Title",
            "LOOPY",
            2
        }
    };
    char ch;
    std::cout << "Enter your choice: ";
    std::cin >> ch;

    while (ch != 'q')
    {
        switch(ch)
        {
            case 'a' : for (int i = 0; i < 5; ++i)
                            std::cout << Bopname[i].fullname << std::endl;
                        break;
            case 'b' : for (int i = 0; i < 5; ++i)
                            std::cout << Bopname[i].title << std::endl;
                        break;
            case 'c' : for (int i = 0; i < 5; ++i)
                            std::cout << Bopname[i].bopname << std::endl;
                        break;
            case 'd' : for (int i = 0; i < 5; ++i)
                            switch (Bopname[i].preference)
                            {
                                case 0 : std::cout << Bopname[i].fullname << std::endl;
                                            break;
                                case 1 : std::cout << Bopname[i].title << std::endl;
                                            break;
                                case 2 : std::cout << Bopname[i].bopname << std::endl;
                                            break;
                            }
        }
        std::cout << "Next choice: ";
        std::cin >> ch;
    }
    std::cout << "Bye!";
    return 0;
}