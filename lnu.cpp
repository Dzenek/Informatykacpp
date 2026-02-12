#include <iostream>
using namespace std;
unsigned int lipsticks_per_month( unsigned short lipsticks_per_day[] )
{
    int sum = 0;
    
    for(int i = 0; i<31; i++) {
        sum += lipsticks_per_day[i];
    }
    return sum;
}
void array_size ( int results [10] )
{
   int results_copy[10];

   // kopiujemy tablicę results do results_copy
   for ( int i = 0; i < 10; i++ )
       results_copy[i] = results[i];

   // wyświetlamy rozmiary tablic results oraz results_copy
   std::cout << "Rozmiar sizeof() tablicy results = " << sizeof(results) << std::endl;
   std::cout << "Rozmiar sizeof() tablicy results_copy = " << sizeof(results_copy) << std::endl;

   //Liczba elementów tablicy results
   std::cout << "Liczba elementów tablicy results = " << sizeof(results) / sizeof(results[0]) << std::endl;

   //Liczba elementów tablicy results_copy
   std::cout << "Liczba elementów tablicy results_copy = " << sizeof(results_copy) / sizeof(results_copy[0]) << std::endl;
}

int set_angle( unsigned short int counter )
{
    switch (counter) {
        case 1: return 5;
        case 2: return 12;
        case 3: return 20;
        case 4: return 30;
        case 5: return 45;
        case 6: return 60;
        case 7: return 72;
        case 8: return 83;
        case 9: return 90;
        default: return 0;
    }
   
}

int Abs( int value )
{
    if (value < 0)
        return -value;
    else 
        return value;
    return value;
}

double calc_gdp_change( double greece_gdp_2025  )
{
    greece_gdp_2025 = greece_gdp_2025 + greece_gdp_2025 * 0.057;
    greece_gdp_2025 = greece_gdp_2025 + greece_gdp_2025 * 0.033;
    greece_gdp_2025 = greece_gdp_2025 - greece_gdp_2025 * 0.003;
    greece_gdp_2025 = greece_gdp_2025 -  greece_gdp_2025 * 0.043;
    greece_gdp_2025 = greece_gdp_2025 - greece_gdp_2025 *  0.055;
    greece_gdp_2025 = greece_gdp_2025 - greece_gdp_2025 * 0.091;
    greece_gdp_2025 = greece_gdp_2025 - greece_gdp_2025 * 0.073;
    greece_gdp_2025 = greece_gdp_2025 - greece_gdp_2025 * 0.032;
    greece_gdp_2025 = greece_gdp_2025 +  greece_gdp_2025 * 0.007;
    greece_gdp_2025 = greece_gdp_2025 - greece_gdp_2025 * 0.002;
    
    return greece_gdp_2025;
}

int quality_report(bool quality_check[1000])
{
    int defective = 0;

    for (int i = 0; i < 1000; i++)
    {
        if (quality_check[i] == false)
        {
            defective++;
        }
    }

    return defective;
}



