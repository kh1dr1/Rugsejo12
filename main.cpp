#include <iostream>
#include <string>

using namespace std;

int sum_of_digits(int n)
{
    if (n < 10)
        return n; // Base case: single-digit number
    else
    {
        int last_digit = n % 10;
        int remaining_number = n / 10; // floor division
        return last_digit + sum_of_digits(remaining_number);
    }
}

int main()
{
    // Uzduotis #1: Studentas
    /*string vardas = "Ilia";
    string pavarde = "Khidri";
    int amzius = 19;
    string grupe = "PI24";
    int kursas = 1;
    string studiju_programa = "Programu sistemos";

    cout << "Studento informacija: " << '\n';
    cout << "Vardas: " << vardas << '\n';
    cout << "Pavarde: " << pavarde << '\n';
    cout << "Amzius: " << amzius << '\n';
    cout << "Grupe: " << grupe << '\n';
    cout << "Kursas: " << kursas << '\n';
    cout << "Studiju programa: " << studiju_programa << '\n';*/

    // Uzduotis #2: Sporto klubas
    /*string klubo_pavadinimas = "Real Madrid";
    int ikurimo_metai = 1902;
    string vadovas = "Karlas Ancelotis";
    string arena_stadionas = "\"Santiago Bernabeu\" stadionas";
    int arenos_vietu_skaicius = 85000;

    cout << "Sporto klubo informacija: " << '\n';
    cout << "Pavadinimas: " << klubo_pavadinimas << '\n';
    cout << "Ikurimo metai: " << ikurimo_metai << '\n';
    cout << "Vadovas: " << vadovas << '\n';
    cout << "Arena / Stadionas: " << arena_stadionas << '\n';
    cout << "Arenos / Stadiono vietu skaicius: " << arenos_vietu_skaicius << '\n';*/

    // Uzduotis #3: Automobilis
    /*string marke = "Opel";
    string modelis = "Zafira";
    int metai = 2010;
    float litrazas = 2.0;
    string spalva = "sidabrine";

    cout << "Automobilis " << marke << " " << modelis
    << " buvo pagamintas " << metai << " metais. Jo motoras "
    << litrazas << " litru litrazo. Automobilio spalva: " << spalva << "." << endl;*/

    // Uzduotis #4: Matematika...
    /*int a = 13;
    int b = 5;
    float c = 17.5;

    cout << "a + b - c = " << a + b - c << endl;
    cout << "15 / 2 + c = " << 15 / 2 + c << endl;
    cout << "a / static_cast<double>(b) + 2 * c = " << a / static_cast<double>(b) + 2 * c << endl;
    cout << "14 % 3 + 6.3 + b / a = " << 14 % 3 + 6.3 + b / a << endl;
    cout << "static_cast<int>(c) % 5 + a - b = " << static_cast<int>(c) % 5 + a - b << endl;
    cout << "13.5 / 2 + 4.0 * 3.5 + 18 = " << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;*/

    // Uzduotis #5: Skaiciu vidurkis
    /*float a, b, c, d, e;
    cout << "Iveskite 5 skaicius atskirtus tarpais:";
    cin >> a >> b >> c >> d >> e;

    cout << "Skaiciu vidurkis yra:";
    cout << (a + b + c + d + e) / 5 << endl;*/

    // Uzduotis #6: Skaicio skaitmenu suma
    int num;

    cout << "Iveskite skaiciu:";
    cin >> num;

    // algoritmas (rekursinis)
    cout << "Skaicio skaitmenu suma:" << sum_of_digits(num) << endl;

    return 0;
}
