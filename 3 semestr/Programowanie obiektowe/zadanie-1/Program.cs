using System;

namespace zadanie_1
{
    class Program
    {
        static void Main(string[] args)
        {
            do
            {
                Message.Info("Kalkulator - Dostępne funkcje zaprezentowane są poniżej\n");
                Message.Info("0 - zakończ");
                Message.Info("1 - dodawanie");
                Message.Info("2 - odejmowanie");
                Message.Info("3 - mnożenie");
                Message.Info("4 - dzielenie");
                Message.Info("5 - potęgowanie");
                
                //Choose operation to proceed
                int control = getDigitFromUser(); 

                //Validate is operation in menu, if not try again
                while(control <0 || control >5)
                {
                    Message.Error("Nie ma takiej operacji. Wybierz operację sposórd dostępnych.");
                    control = getDigitFromUser(); 
                }

                //If user choosed 0 then exit program
                if(control==0)
                {
                    break;
                }

                //Get digits from users
                Message.Info("Wprowadź liczby 1 oraz 2 zatwierdzając enterem");

                float firstNumber = getDigitFromUser();
                float secondNumber = getDigitFromUser();

                //Create object Calculator
                var calculator = new Calculator(firstNumber, secondNumber);

                switch(control)
                {
                    case 1:
                        calculator.OperationAddition();
                        break;
                    case 2:
                        calculator.OperationSubtraction();
                        break;
                    case 3: 
                        calculator.OperationMultiplication();
                        break;
                    case 4:
                        calculator.OperationDivision();
                        break;
                    case 5: 
                        calculator.OperationPower();
                        break;
                    default:
                        break;

                }
            }while(true); 

            Message.Info("Koniec programu");

        }

        public static int getDigitFromUser()
        {
            int digit = 0; 

            while(!int.TryParse(Console.ReadLine(), out digit))
            {
                Message.Error("Niepoprawną wartość. Podaj liczbe");
            }

            return digit; 
        }

    }
}
