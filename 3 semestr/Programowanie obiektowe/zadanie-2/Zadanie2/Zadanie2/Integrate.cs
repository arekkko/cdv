using System;
using System.Collections.Generic;
using System.Text;

namespace Zadanie2
{
    class Integrate
    {
        //Properties gets from obejct initiation
        private int functionType = 0;
        private int intervalStart = 0;
        private int intervalStop = 0;
        
        //Working properties
        private double widthOfPart = 1;
        private double result = 0;

        public Integrate(int _functionType)
        {
            functionType = _functionType;
            intervalStart = establishIntervalStart();
            intervalStop = establishIntervalStop();
        }

        //The Core method
        public bool calculate()
        {

            double result = 0;

            switch(this.FunctionType)
            {
                case 1:
                    {
                        Console.WriteLine("Podaj wartość potęgi");
                        int power = Program.getDigitFromUser();

                        Console.WriteLine("Podaj wartość wyrazu wolnego b");
                        int b = Program.getDigitFromUser();

                        for (double i = 1; i <= b; i += this.WidthOfPart)
                        {
                            result += this.calculateUserFunctionType1(this.IntervalStart + i, power, b) * this.WidthOfPart;
                        }
                    }
                    break;
                case 2:
                    {
                        Console.WriteLine("Podaj współczynnik kierunkowy prostej a");
                        int a = Program.getDigitFromUser();

                        Console.WriteLine("Podaj wartośc wyrazu wolnego b");
                        int b = Program.getDigitFromUser();

                        for (double i = 1; i <= b; i += this.WidthOfPart)
                        {
                            result += this.calculateUserFunctionType2(this.WidthOfPart + i, a, b);
                        }
                    }
                    break;
                default:
                    break;
            }

            this.Result = result; 

            return true; 
        }

        private double calculateUserFunctionType1(double x, int power, int b)
        {
            return Math.Pow(x, power) + b;
        }

        private double calculateUserFunctionType2(double x, int a, int b)
        {
            return a*x+b;
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

        //Getters and setters section
        public double Result
        {
            private set { result = value; }
            get { return result; }
        }

        private double WidthOfPart
        {
            get { return widthOfPart; }
        }
        private int FunctionType
        {
            get { return functionType; }
        }
        private int IntervalStart
        {
            get { return intervalStart; }
        }
        private int IntervalStop
        {
            get { return intervalStop; }
        }
    }
}
