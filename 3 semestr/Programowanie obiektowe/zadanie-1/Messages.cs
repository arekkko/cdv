using System;

namespace zadanie_1
{
    public class Message
    {
        public Message()
        {

        }

        public static void Info(string text)
        {
            Console.WriteLine(text);
        }

        public static void Error(string text)
        {
            Console.WriteLine("Błąd: " + text);
        }

        public static void Pause()
{
            Console.Write("Naciśnij klawisz aby kontynuować . . . ");

            Console.ReadKey(true);
        }

    }
}
