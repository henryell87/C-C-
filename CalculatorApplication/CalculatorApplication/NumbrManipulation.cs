using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalculatorApplication
{
    class NumbrManipulation
    {
        public int FindMax(int num1, int num2)
        {
            /*initial result */
            int result;
            if (num1 > num2)
                result = num1;
            else
                result = num2;
            return result;
        }
        static void Main(string[] args)
        { 
            /*loca variable definition*/
            int a = 100;
            int b = 99;
            int ret;
        NumbrManipulation n = new NumbrManipulation();
            ret = n.FindMax(a, b);
            Console.WriteLine("Maximum Number is: {0}", ret);
            Console.ReadLine();

        }
    }
}
