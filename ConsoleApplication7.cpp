// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int A_B, B_C, weight;
    cin >> A_B >> B_C >> weight;
    cout << "\n";
    int fuelout = 0;
    weight = abs(weight);
    int fuel_km = 0;
    int needfuel = 0;

    if (weight <= 500) fuel_km = 1;
    if ((500 < weight) and (weight <= 1000)) fuel_km = 4;
    if ((1000 < weight) and (weight <= 1500)) fuel_km = 7;
    if ((1500 < weight) and (weight <= 2000)) fuel_km = 9;
    if (weight > 2000)
    {
        cout << "No fly, very heavy";
    }
    else
    {
        if ((A_B * fuel_km <= 300) and (B_C * fuel_km <= 300))
        {
            needfuel = 300 - A_B * fuel_km - B_C * fuel_km;
            if (needfuel < 0)
            {
                cout << "Fuel need add: " << abs(needfuel) << " l";
            }
            else
            {
                cout << "Not need add fuel";
            }
        }
        else
        {
            cout << "No fly, not enough fuel";
        }
    }
}

/*
Пример 1
A_B = 10 км
B_C = 10 км
вес = 1400 кг
результат: не надо доливать

Пример 2
A_B = 400 км
B_C = 100 км
вес = 100 кг
результат: не долетит

Пример 3
A_B = 100 км
B_C = 100 км
вес = 3000 кг
результат: тяжёлый

Пример 4
A_B = 100 км
B_C = 250 км
вес = 200 кг
результат: надо долить: х литров

*/