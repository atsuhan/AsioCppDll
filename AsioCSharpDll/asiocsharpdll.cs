using System;
using System.Runtime.InteropServices;
using System.Text;

namespace AsioCSharpDll
{
    public class asiocsharpdll
    {
        // From c++ Dll (unmanaged)
        [DllImport("AsioCppDll")]
        public static extern int ASIODriverNumber();

        [DllImport("AsioCppDll")]
        public static extern IntPtr ASIODriverNames(int j);

        [DllImport("AsioCppDll")]
        public static extern void ASIODriverSelect(int k);

        [DllImport("AsioCppDll")]
        public static extern void SetMicSetting(int sampleRate, int samplingLength);

        [DllImport("AsioCppDll")]
        public static extern void MainStart();

        [DllImport("AsioCppDll")]
        public static extern void MainCalled(IntPtr tempMem0, IntPtr tempMem1, IntPtr tempMem2, IntPtr tempMem3);

        [DllImport("AsioCppDll")]
        public static extern void MainStop();
    }
}
