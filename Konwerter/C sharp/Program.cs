//Autor: Henryk Wołek

using System;

namespace C_sharp
{
    class Program
    {
        //Metoda która zamienia liczby na system dziesiętny, bierze 2 argumenty.
        static int naSystemDziesietny(string wartoscWejsciowa, int systemLiczbowy)
        {
            //Inicjacja pustej tablicy znaków (char), która następnie jest odwracana.
            char[] tablica = wartoscWejsciowa.ToCharArray();
            Array.Reverse(tablica);

            //Inicjacja zmiennej sumaLiczb oraz i pozwoli przejść przez pętle
            //określoną ilość razy i otrzymać poprawny wynik.
            int sumaLiczb = 0;
            int i = 0;

            while (i < tablica.Length)
            {
                //Jeżeli podana liczba wynosci np. 586 a podstawa systemu 2, to funkcja kończy się w tym momencie.
                if (int.Parse(tablica[i].ToString()) >= systemLiczbowy)
                {
                    Console.WriteLine("Wystąpił błąd. Cyfry we wprowadzonej liczbie są większę lub równe od systemu liczbowego.\n");
                    return 0;
                }

                //Jeżeli wystąpi błąd przy formatowaniu znaków z tablicy char do liczby całkowitej, zostanie wyświetlona wiadomość.
                try
                {
                    sumaLiczb = sumaLiczb + int.Parse(tablica[i].ToString()) * int.Parse(Math.Pow(systemLiczbowy, i).ToString());
                    i = i + 1;
                }
                catch (FormatException)
                {
                    //Wyświetlenie wiadomości i zakończenie funkji.
                    Console.WriteLine("Wystąpił błąd. Czy na pewno wprowadzono liczbę całkowitą?\n");
                    return 0;
                }
            }

            //Jeżeli formatowanie odbyło się bezbłędnie, mechanizm w bloku try zamienił liczbę binarną na dziesiętną.
            //Ta linia kodu zwraca wartość dziesiętną.
            return sumaLiczb;
        }

        //Główna metoda
        static void Main(string[] args)
        {
            //Zebranie danych od użytkownika(Liczba jako string, system jako int)
            Console.WriteLine("Podaj liczbę, która zostanie zamieniona na system dziesiętny!: ");
            string liczbaUzytkownika = Console.ReadLine();

            Console.WriteLine("Podaj system liczbowy tej liczby: ");
            string systemUzytkownika = Console.ReadLine();

            //Jeżeli wystąpią błędy przy formatowaniu w tej funkcji, zostanie wyświetlona wiadomość.
            try
            {
                Console.WriteLine(naSystemDziesietny(liczbaUzytkownika, int.Parse(systemUzytkownika)));
            }
            catch (FormatException)
            {

                Console.WriteLine("Wystąpił błąd przy formatowaniu.");
            }

            //Linia kodu zapobiegająca zamknięciu się konsoli po wykonanym kodzie.
            Console.ReadLine();
        }
    }
}