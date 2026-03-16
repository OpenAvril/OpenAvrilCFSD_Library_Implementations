# LIBRARY Template(s) for OpenAvrilConcurrent and OpenAvrilCFSD - Concurrent Full Stack Development.
## C# .NET Console.

## Using Windows 11 Home.
Edition: Windows 11 Home OEM System Builder

Version: 24H2

## Using Microsoft Visual Studio Professional 2022.

Version 17.13.4.
 

## Copendencies.
- Avril OpenCFSD Server Shell Assembly.
- Avril OpenCFSD Client Shell Assembly.

## Dependencies.
### Server Library.
 - https://github.com/AvrilOpenCFSD/LIB_Concurrent_IO_Server

### WriteEnableForThreadsAtStacks.
 - https://github.com/AvrilOpenCFSD/LIB_WriteEnableForThreadsAt_STACK
   
### LaunchEnableForConcurrentThreadsAtEnds
 - https://github.com/AvrilOpenCFSD/LIB_LaunchEnableForConcurrentThreadsAt_END
#### Similar Repositiry.
 - https://github.com/cameron314/concurrentqueue

### .Net.
Version: .Net 8.0

## How To.
#### LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h
````
#ifdef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
	class LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
	{
	public:
		// constructor.
		CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE();

		// destructor.

		// public.
			// dynamic.
		//static void* generate_Program();//ToDO: uncomment for C#.
		static OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* generate_Program();//ToDO: uncomment for C++.
		static void write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		// get.
		static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* get_ptr_Framework();
		// set.
	// static.
		// get.
		// set.

	private:
		// private.
			// dynamic.
				// get.
				// set.
			// static.
		static void stat_create_Framework();
		// get.
		static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* stat_get_ptr_Framework();
		// set.
		static void stat_set_ptr_Framework(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* newPtr);
		// pointers.
			// classes.
			// registers.
	};
}
````

### C#
#### IMPORT_LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.cs
````
﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class WriteEnableForThreadsAtCLIENTINPUTACTION
    {
        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?create_Program@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAPAXXZ")]
        public static extern IntPtr create_Program();

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?write_End@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAXPAVWriteEnableForThreadsAt_CLIENTINPUTACTION_Framework@2@E@Z")]
        public static extern void write_End(IntPtr obj, byte coreId);

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?write_Start@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAXPAVWriteEnableForThreadsAt_CLIENTINPUTACTION_Framework@2@E@Z")]
        public static extern void write_Start(IntPtr obj, byte coreId);
    }
}
````

#### IMPORT_LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.cs
````
﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class WriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
    {
        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?create_Program@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAPAXXZ")]
        public static extern IntPtr create_Program();

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?write_End@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAXPAVWriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework@2@E@Z")]
        public static extern void write_End(IntPtr obj, byte coreId);

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?write_Start@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAXPAVWriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework@2@E@Z")]
        public static extern void write_Start(IntPtr obj, byte coreId);
    }
}
````

## TestBench(s) in C#.
 - https://github.com/OpenAvril/TESTBENCH_OpenAvril

## Development History.
