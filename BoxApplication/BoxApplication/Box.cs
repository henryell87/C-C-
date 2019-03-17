using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BoxApplication
{
    class Box
    {
        public double length; //Length of box
        public double breadth; //Breadth of box
        public double height; //Height of box

        static void Main(string[] args)
        {
            Box Box1 = new Box(); // Declare Box1 of type Box
            Box Box2 = new Box(); // Declare Box1 of type Box
            double volume = 0.0; // Store the volume of the Bo here

            // Box1 specification
            Box1.height = 5.0;
            Box1.breadth = 6.0;
            Box1.length = 7.0;

            // Box2 specification
            Box2.height = 10.0;
            Box2.breadth = 14.0;
            Box2.length = 15.0;

            // Volume of Box1 
            volume = Box1.height * Box1.breadth * Box1.length;
            Console.WriteLine("Volume of Box1 : {0}", volume);

            volume = Box2.height * Box2.breadth * Box2.length;
            Console.WriteLine("Volume of Box2 : {0}", volume);
            Console.ReadKey();

        }
    }
}
 