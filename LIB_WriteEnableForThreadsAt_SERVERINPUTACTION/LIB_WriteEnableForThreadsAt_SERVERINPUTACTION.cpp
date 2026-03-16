#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.h"


// pointers.
	// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION = NULL;
	// registers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program()
	{
		std::cout << "entered OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program()" << std::endl;
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
		std::cout << "entered OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program()" << std::endl;
		return (void*)stat_get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::terminate_Program()
	{
		delete _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION;
		while (stat_get_ptr_Framework() != NULL) {}
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_End(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global::stat_OBJ_get_ClassOf(obj), coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global::stat_OBJ_get_ClassOf(obj), coreId);
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
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::stat_create_Framework()
	{
		_ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION = new WriteEnableForThreadsAt_SERVERINPUTACTION_Framework();
		while (stat_get_ptr_Framework() == NULL) {}
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION;
	}
		// set.