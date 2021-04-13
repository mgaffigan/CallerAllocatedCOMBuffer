using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace InProcTargetTest
{
    [ComVisible(true), Guid("E559D616-4C46-4434-9DF7-E9D7C91F3BA5"), InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IStuff
    {
        void GetShortTest(int i, [MarshalAs(UnmanagedType.Bool)] bool b, IntPtr shortText);
    }

    [ComVisible(true), ProgId("InProcTargetTest.Class1"), Guid("BA5088D4-7F6A-4C76-983C-EC7F1BA51CAA"), ClassInterface(ClassInterfaceType.None)]
    public class Class1 : IStuff
    {
        public void GetShortTest(int i, bool b, IntPtr shortText)
        {
            var data = Encoding.Unicode.GetBytes("Hello");
            Marshal.Copy(data, 0, shortText, data.Length);
        }
    }
}
