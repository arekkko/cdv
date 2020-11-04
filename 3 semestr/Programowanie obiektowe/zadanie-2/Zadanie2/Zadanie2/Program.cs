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
                Console.WriteLine("Wybierz typ funkcji\n0. Koniec programu\n1. f(x)=x^2+b\n2. f(x)=3x^2+b");

                choice = getDigitFromUser();

                switch (choice)
                {
                    case 1:
                        Integrate integrate = new Integrate(choice);

                        if (!integrate.calculate())
                            Console.WriteLine("BLAD");

                        Console.WriteLine("WYNIK: " + integrate.getResult());
                        break;
                    default:
                        break;
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
