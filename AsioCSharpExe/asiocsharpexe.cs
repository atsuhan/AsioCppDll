using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace AsioCSharpExe
{
    class asiocsharpexe
    {

        static void Main()
        {
            int DriverNum = AsioCSharpDll.asiocsharpdll.ASIODriverNumber();
            Console.Write("{0}\n", DriverNum);
        }
    }
}