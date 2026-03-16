#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.h"


// pointers.
	// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = NULL;
	// registers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::generate_Program()
	{
		std::cout << "entered OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::generate_Program()" << std::endl;
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
		std::cout << "entered OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::generate_Program()" << std::endl;
		return (void*)stat_get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::terminate_Program()
	{
		delete _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE;
		while (stat_get_ptr_Framework() != NULL) {}
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::write_End(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(obj), coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::write_Start(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(obj), coreId);
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
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_create_Framework()
	{
		_ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = new WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework();
		while (stat_get_ptr_Framework() == NULL) {}
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE;
	}
		// set.