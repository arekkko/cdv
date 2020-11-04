using System;
using System.Collections.Generic;
using System.Text;

namespace Zadanie2
{
    class Integrate
    {
        //Properties gets from obejct initiation
        private int _functionType = 0;
        private int _intervalStart = 0;
        private int _intervalStop = 0;
        
        //Working properties
        private double _widthOfPart = 0;
        public double _result = 0;

        public Integrate(int functionType)
        {
            _functionType = functionType;
            _intervalStart = establishIntervalStart();
            _intervalStop = establishIntervalStop();
        }

        //The Core method
        public bool calculate()
        {

            calculateWidthOfPart();

            double result = 0;

            switch(getFunctionType())
            {
                case 1:
                    Console.WriteLine("Podaj wartość potęgi");
                    int power = Program.getDigitFromUser();

                    Console.WriteLine("Podaj wartość wyrazu wolnego b");
                    int b = Program.getDigitFromUser();

                    for (int i = 1; i <= 3; i++)
                    {
                        result += calculateUserFunctionType1(getIntervalStart() + i * getWidthOfPart(), power, b);

                    }
                    break;
                default:
                    break;
            }

            result = getWidthOfPart() * result; 

            setResult(result); 

            return true; 
        }

        private bool calculateWidthOfPart()
        {

            double calculatedWidthOfPart = (getIntervalStop() - getIntervalStart()) / 3;

            setWidthOfPart(calculatedWidthOfPart);

            return true; 

        }

        private double calculateUserFunctionType1(double x, int power, int b)
        {
            return Math.Pow(x, power) + b;
        }

        private int getFunctionType()
        {
            return _functionType;
        }

        private int getIntervalStart()
        {
            return _intervalStart;
        }

        private int getIntervalStop()
        {
            return _intervalStop;
        }

        public double getResult()
        {
            return _result;
        }
        private double getWidthOfPart()
        {
            return _widthOfPart;
        }

        private int establishIntervalStart()
        {
            Console.WriteLine("Podaj początek zakresu całkowania");
            return Program.getDigitFromUser();
        }

        private int establishIntervalStop()
        {
            Console.WriteLine("Podaj koniec zakresu całkowania");
            return Program.getDigitFromUser();
        }

        private void setWidthOfPart(double widthOfPart)
        {
            _widthOfPart = widthOfPart;
        }

        private void setResult(double result)
        {
            _result = result;
        }
    }
}
