#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"


// pointers.
	// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE = NULL;
	// registers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program()
	{
		std::cout << "entered OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program()" << std::endl;
		stat_create_Framework();
		stat_get_ptr_Framework()->dyn_initialise(stat_get_ptr_Framework());
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|        MIT Write Que .dll         |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		std::cout << "entered OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program()" << std::endl;
		return (void*)stat_get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::terminate_Program()
	{
		delete _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE;
		while (stat_get_ptr_Framework() != NULL) {}
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_End(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(obj), coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_Start(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(obj), coreId);
	}
		// get.
		// set.
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::stat_create_Framework()
	{
		_ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE = new WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework();
		while (stat_get_ptr_Framework() == NULL) {}
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE;
	}
		// set.