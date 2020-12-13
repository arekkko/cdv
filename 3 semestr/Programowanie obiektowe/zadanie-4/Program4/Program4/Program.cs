using System;

namespace Program4
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee[] employees = new Employee[3];
            employees[0] = new Director("Jan", "Kowalski");
            employees[1] = new Accountant("Anna", "Nowak");
            employees[2] = new Technician("Adam", "Kowalewski");

            foreach (Employee element in employees)
            {
                Console.WriteLine("---------------");
                element.Info();
                element.SalaryInfo();
                Console.WriteLine("---------------");
            }

            Console.WriteLine("\nDIRECTOR 0 BASE SALARY HAS BEEN CHANGED!\n");

            employees[0].BaseSalary = 5000;

            foreach (Employee element in employees)
            {
                Console.WriteLine("---------------");
                element.Info();
                element.SalaryInfo();
                Console.WriteLine("---------------");
            }

            Console.Write("\n");
            Console.WriteLine("Director 0 country is " + employees[0].Country + "\n");
            

        }
    }

    class Employee
    {
        private string country;
        public double baseSalary;

        public Employee(string _country = "Poland", double _baseSalary = 2000)
        {
            country = _country;
            baseSalary = _baseSalary;
        }

        public virtual void Info()
        {
            Console.WriteLine("Employee");
        }

        public virtual void SalaryInfo()
        {
            Console.WriteLine("Salary is 0");
        }

        public string Country
        {
            get { return country; }
            set { country = value; }
        }
        public double BaseSalary
        {
            get { return baseSalary; }
            set { baseSalary = value; }
        }
    }

    class Director:Employee
    {
        public string name, surname;

        public Director(string _name = "Name", string _surname = "Surname")
        {
            name = _name;
            surname = _surname;
        }

        public override void Info()
        {
            Console.WriteLine("Employee is a director. Name is " + this.Name + " " + this.Surname);
        }
        public override void SalaryInfo()
        {
            double employeeSalary = base.baseSalary + 2000;
            Console.WriteLine("Salary is: " + employeeSalary);
        }

        public string Name
        {
            get { return name; }
        }
        public string Surname
        {
            get { return surname; }
        }
    }

    class Accountant : Employee
    {
        public string name, surname;

        public Accountant(string _name = "Name", string _surname = "Surname")
        {
            name = _name;
            surname = _surname;
        }

        public override void Info()
        {
            Console.WriteLine("Employee is a accountant. Name is " + this.Name + " " + this.Surname);
        }
        public override void SalaryInfo()
        {
            double employeeSalary = base.baseSalary + 700;
            Console.WriteLine("Salary is: " + employeeSalary);
        }

        public string Name
        {
            get { return name; }
        }
        public string Surname
        {
            get { return surname; }
        }
    }

    class Technician : Employee
    {
        public string name, surname;

        public Technician(string _name = "Name", string _surname = "Surname")
        {
            name = _name;
            surname = _surname;
        }

        public override void Info()
        {
            Console.WriteLine("Employee is a technician. Name is " + this.Name + " " + this.Surname);
        }
        public override void SalaryInfo()
        {
            double employeeSalary = base.baseSalary + 400;
            Console.WriteLine("Salary is: " + employeeSalary);
        }

        public string Name
        {
            get { return name; }
        }
        public string Surname
        {
            get { return surname; }
        }
    }
}
