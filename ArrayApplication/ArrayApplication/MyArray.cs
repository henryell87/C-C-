using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArrayApplication
{
    class MyArray
    {
        static void Main(string[] args)
        {
            int [] n = new int[10]; /*n is an array of ten intgers*/
            int i,j;
            /*Initial elements of array n*/
            for (i = 0; i < 10; i++)
            {
                n[i] = i + 100;
            }
            /* output each array element*/
            for (j = 0; j < 10; j++)
            {
               Console.WriteLine("Element[{0}] = {1}", j, n[j]);
            }
               Console.ReadKey();
            
        }
    }
}
