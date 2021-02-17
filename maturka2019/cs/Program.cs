using System;
using System.Text;

namespace cs
{
    class Program
    {

        static int factorial(int param)
        {
            int fact = 1;
            for (int i = 1; i <= param; i++)
            {
                fact = fact * i;
            }

            return fact;
        }

        static int checkForFactorialMatch(int integer)
        {
            char[] importantCharArray = integer.ToString().ToCharArray();

            int sumOfFactorials = 0;
            for (int i = 0; i < importantCharArray.Length; i++)
            {
                sumOfFactorials = factorial(importantCharArray[i] - '0');
            }

            if (sumOfFactorials == integer)
            {
                return integer;
            }

            return 0;
        }
        static void Main(string[] args)
        {
            string path = @"C:\Programming\C++\maturka2019\liczby.txt";
            string singleLine;
            System.IO.StreamReader sr = new System.IO.StreamReader(path);

            while ((singleLine = sr.ReadLine()) != null)
            {
                int tempVar = int.Parse(singleLine);
                
                if (checkForFactorialMatch(tempVar) != 0)
                {
                    Console.WriteLine(checkForFactorialMatch(tempVar));
                }
            }
        }
    }
}
