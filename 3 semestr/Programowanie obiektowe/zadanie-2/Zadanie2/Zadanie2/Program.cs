using System;

namespace Zadanie2
{
    class Program
    {
        static void Main(string[] args)
        {
            int choice = 0;

            do
            {
                Console.WriteLine("Wybierz działanie\n0. Koniec programu\n1. oblicz np. f(x)=x^2+b\n2. np. f(x)=x+4");

                choice = getDigitFromUser();

                //Calculate only if user choose  properly function
                if (choice > 0 && choice <=2)
                {
                    Integrate integrate = new Integrate(choice);

                    if (!integrate.calculate())
                        Console.WriteLine("BLAD");

                    Console.WriteLine("WYNIK: " + integrate.Result + "\n");
                }
            } while (choice != 0);
        }

        public static int getDigitFromUser()
        {
            int digit = 0;

            while (!int.TryParse(Console.ReadLine(), out digit))
            {
                Console.WriteLine("Niepoprawną wartość. Podaj liczbe");
            }

            return digit;
        }
    }
}
