﻿// Lab1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Задания 2

//1.  Создайте переменную типа int со значением 150
//2.  Создайте переменную типа float со значением 15, 933
//3.  Создайте переменную со значением 250 того типа, который будет
//отнимать минимум оперативной памяти, и при этом данное значение он будет поддерживать
//4.  Выведите все переменные в консоль в формате : «ИМЯ ПЕРЕМЕННОЙ
//= ЗНАЧЕНИЕ».
//5.  Создайте три переменных, куда поместите свой день рождения, месяц
//(в виде строки) и год, подобрав правильные типы
//6.  Выведите переменные из предыдущего задания в формате «Моя дата
//рождения : ДЕНЬ МЕСЯЦ ГОД года»
//7.  Создайте две константы подходящего типа, куда запишите число 2, 3 и строку
//WINDOWS соответственно
//8.  Выведите  в консоль значения констант через пробел



#include <iostream>

int main()
{
    int a = 150;
    float b = 15.933;
    short c = 250;

    setlocale(LC_ALL, "Russian"); 

    std::cout << "a = "  << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";

    short d = 28;
    std::string m = "декабря";
    short g = 2005;

    std::cout << "Моя дата рождения: " << d << " " << m << " " << g << " года" "\n";

    const float x { 2.3 };
    const std::string y { "WINDOWS"};

    std::cout << x << " " << y;


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