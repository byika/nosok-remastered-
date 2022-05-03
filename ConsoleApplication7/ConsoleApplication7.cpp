// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    ///1. Программа показывает на экране календарь текущего месяца.

    std::cout << "\t\t\t April 2022 \n Mo \t Tu \t We \t Th \t Fr \t Sa \t Su \n";
    std::cout << " 1 \t 2 \t 3 \t 4 \t 5 \t 6 \t 7 \n 8 \t 9 \t 10 \t 11 \t 12 \t 13 \t 14 \n";
    std::cout << " 15 \t 16 \t 17 \t 18 \t 19 \t 20 \t 21 \n 22 \t 23 \t 24 \t 25 \t 26 \t 27 \t 28 \n 29 \t 30 ";
    std::cout << "                                                                           ";
    std::cout << "                                                                           ";

    ///2. Используя оператор cout << вывести на экран свое генеалогическое дерево. Например так:
    
    std::cout << "                           me                                                ";
    std::cout << "                       *       *                                             ";
    std::cout << "                    *               *                                        ";
    std::cout << "            my mom                    my dad                                 ";
    std::cout << "         *       *                    *      *                               ";
    std::cout << "      *             *               *           *                            ";
    std::cout << " my grandmother       *        my gandmother     *                           ";
    std::cout << "     *          my grandfather           *       my grandfather              ";
    std::cout << "  *     *                *            *      *         *                     ";
    std::cout << " ...   ...         *        *      ...      ...     *     *                  ";
    std::cout << "                  ...       ...                    ...     ...               ";
    std::cout << "                                  *                                          ";
    std::cout << "                               *    *                                        ";
    std::cout << "                            *          *                                     ";
    std::cout << "                       Adam            Eve                                   ";
    std::cout << "                                                                           ";
    std::cout << "                                                                           ";

    ///3. Вывести свое имя на экран в виде символов. Например, звездочками. Образец (будет в телеге)

    std::cout << "                                                                       ***     \n";
    std::cout << "    ********    ***      ***     ******     ********    *********  ***      ***\n";
    std::cout << "   ***    ***   ***      ***     **  **     ***    ***  ***        ***    * ***\n";
    std::cout << "  ***      ***  ***      ***     **  **     ***    ***  ***        ***   *  ***\n";
    std::cout << "  ************  ************  ************  *********   *********  ***  *   ***\n";
    std::cout << "  ***      ***  ***      ***  ***      ***  ***         ***        *** *    ***\n";
    std::cout << "  ***      ***  ***      ***  ***      ***  ***         *********  ***      ***\n";

    ///4. Напечатать на экране консоли своё резюме.

    std::cout << "                       Resume                                           \n";
    std::cout << "    Imya: Andrey                                                              \n";
    std::cout << "    Familiya: Kostin                                                              \n";
    std::cout << "    Otchestvo: Igorevich                                                              \n";
    std::cout << "    Data rozdeniya: 19/12/2005                                                              \n";
    std::cout << "    Gorod: Odessa                                                              \n";
    std::cout << "    Obrazovanue: Zakonchil sadik s zolotoy menalyu                                                              \n";
    std::cout << "    Opit raboti: Rabotal nad napisaniem soobsheniy v kievstar                                                              \n";
    std::cout << "    Yaziki: translit                                                              \n";
    std::cout << "    Naviki:                                                              \n";
    std::cout << "         - Mogu lezat' ves' den' na divane                                                         \n";
    std::cout << "                                                                  \n";
    std::cout << "         - Mogu spat' bol'she 12 chasov                                                        \n";
    std::cout << "                                                                  \n";
    std::cout << "         - Mogu nichego ne delat' dolgoe vremya i napisat' vso za odin den'                                                        \n";
    std::cout << "                                                                  \n";

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
