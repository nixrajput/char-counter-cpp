#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int i, vowels, consonants, digits;

    vowels = consonants = digits = 0;

    cout << "\n\t\t Enter a string (without spaces): ";
    cin >> str;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }

        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }

        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
    }

    cout << "\n\n\t\t Results" << endl;
    cout << "\t\t----------------------" << endl;
    cout << "\t\t Vowels: " << vowels << endl;
    cout << "\t\t Consonants: " << consonants << endl;
    cout << "\t\t Digits: " << digits << endl;
    cout << "\n\n";
    system("pause");

    return 0;
}
