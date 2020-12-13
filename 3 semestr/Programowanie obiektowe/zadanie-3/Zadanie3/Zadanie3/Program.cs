using System;

namespace Zadanie3
{
    class Program
    {
        static void Main(string[] args)
        {
            //Tworzenie macierzy z pliku
            Console.WriteLine("Macierz 1: ");
            Matrix macierz1 = new Matrix(@"...\data.txt");
            macierz1.print();

            Console.WriteLine("\nMacierz 2: ");
            Matrix macierz2 = new Matrix(@"...\data2.txt");
            macierz2.print();

            //Dodawanie
            Console.WriteLine("\nDodawanie macierzy 1 i 2: ");
            Matrix macierz3 = macierz1 + macierz2;
            macierz3.print();

            //Odejmowanie
            Console.WriteLine("\nOdejmowanie macierzy 1 i 2: ");
            Matrix macierz4 = macierz1 - macierz2;
            macierz4.print();

            //Mnozenie
            Console.WriteLine("\nMnozenie macierzy 1 i 2: ");
            Matrix macierz5 = macierz1 * macierz2;
            macierz5.print();

            //Transpozycja
            macierz1.transposition();
            Console.WriteLine("\nMacierz 1 - transponowana: ");
            macierz1.print();

            macierz1.transposition();
            Console.WriteLine("\nMacierz 1 - ponownie transponowana: ");
            macierz1.print();

        }
    }
}
