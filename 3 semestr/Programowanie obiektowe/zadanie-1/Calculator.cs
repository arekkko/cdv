using System;

namespace zadanie_1
{
    public class Calculator
    {
        private float _firstNumber; 
        private float _secondNumber; 
        
        public Calculator(float firstNumber, float secondNumber)
        {
            _firstNumber = firstNumber;
            _secondNumber = secondNumber;
        }
        public void OperationAddition()
        {
            //Display info
            Message.Info("Wynik dodawania:");

            //Calculate and return results
            Message.Info(CalcAddition().ToString());

            //Pause
            Message.Pause();
        }
        public float CalcAddition()
        {
            return FirstNumber + SecondNumber; 
        }

        public void OperationSubtraction()
        {
            //Display info
            Message.Info("Wynik odejmowania:");

            //Calculate and return results
            Message.Info(CalcSubtraction().ToString());

            //Pause
            Message.Pause();
        }

        public float CalcSubtraction()
        {
            return FirstNumber - SecondNumber; 
        }

        public void OperationMultiplication()
        {
             //Display info
            Message.Info("Wynik mnożenia:");

            //Calculate and return results
            Message.Info(CalcMultiplication().ToString());

            //Pause
            Message.Pause();
        }
        public float CalcMultiplication()
        {
            float sum = 0; 

            for(int i =0; i < SecondNumber; i++)
                sum+=FirstNumber;

            return sum;
        }

        public bool OperationDivision()
        {
            if(SecondNumber == 0)
            {
                Message.Error("Nie można dzielić przez 0.");
                return false;
            }

             //Display info
            Message.Info("Wynik dzielenia:");

            //Calculate and return results
            Message.Info(CalcDivision().ToString());

            //Pause
            Message.Pause();

            return true;
        }

        public string CalcDivision()
        {
            float temp = FirstNumber; 
            int counter = 0; 
            bool exit = false; 

            while(!exit)
            {
                if(temp>=SecondNumber)
                {
                    temp -= SecondNumber;
                    counter++;
                }else
                {
                    exit = true; 
                }
            }

            return counter + " reszta " + temp; 
        }

        public void OperationPower()
        {
             //Display info
            Message.Info("Wynik potęgowania:");

            //Calculate and return results
            Message.Info(CalcPower().ToString());

            //Pause
            Message.Pause();
        }

        public float CalcPower()
        {
            float temp = 1; 

            for(int i =0; i<SecondNumber; i++)
            {
                var calculator = new Calculator(FirstNumber, temp); 

                temp = calculator.CalcMultiplication();
            }

            return temp;    
        }
        
        public float FirstNumber => _firstNumber; 
        
        public float SecondNumber => _secondNumber; 

    }
}
