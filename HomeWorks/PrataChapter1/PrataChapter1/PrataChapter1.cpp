#include <iostream>

using namespace std;

void blindmice();
void theyrun();
void celcium_to_farengight(int temperature);
void light_years_to_ae(double years);
void show_time(int hours, int minutes);

void main()
{
    setlocale(LC_ALL, "Rus");

    cout << "==================== Task 1 ====================\n\n";

    cout << "Меня зовут Кыс Пушист, я живу по адресу: г. КысоГрад, Водочная ул., д.33\n\n";

    cout << "==================== Task 2 ====================\n\n";

    int farlongs;

    cout << "Введите значение расстояния в фарлонгах: ";
    cin >> farlongs;
    cout << "Расстояния в ярдах составит: " << farlongs * 220 << " ярдов.\n\n";

    cout << "==================== Task 3 ====================\n\n";

    blindmice();
    blindmice();
    theyrun();
    theyrun();

    cout << "==================== Task 4 ====================\n\n";

    int age;

    cout << "Введите возраст в годах: ";
    cin >> age;
    cout << "Ваш возраст в месяцах составляет: " << age * 12 << "\n\n";

    cout << "==================== Task 5 ====================\n\n";

    int temperature;

    cout << "Введите значение температуры в градусах Цельсия: ";
    cin >> temperature;
    celcium_to_farengight(temperature);
    cout << endl;

    cout << "==================== Task 6 ====================\n\n";

    double light_years;

    cout << "Введите значение расстояния в световых годах: ";
    cin >> light_years;
    light_years_to_ae(light_years);
    cout << endl;

    cout << "==================== Task 7 ====================\n\n";

    int hours, minutes;

    cout << "Введите часы: ";
    cin >> hours;
    cout << "Введите минуты: ";
    cin >> minutes;
    show_time(hours, minutes);
}

void blindmice()
{
    cout << "Three blind mice" << endl;
}

void theyrun()
{
    cout << "See how they run" << endl;
}

void celcium_to_farengight(int temperature)
{
    cout << "Температура по Фаренгейту составит: " << 1.8 * temperature + 32 << endl;
}

void light_years_to_ae(double years)
{
    cout << "Расстояние в астрономических еденицах составит: " << (int)(years * 63240) << endl;
}

void show_time(int hours, int minutes)
{
    cout << "Текущее время " << hours << ":" << minutes << endl;
}
