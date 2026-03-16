#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.h"


// pointers.
	// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = NULL;
	// registers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::generate_Program()
	{
		std::cout << "entered OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::generate_Program()" << std::endl;
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
		std::cout << "entered OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::generate_Program()" << std::endl;
		return (void*)stat_get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::terminate_Program()
	{
		delete _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION;
		while (stat_get_ptr_Framework() != NULL) {}
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::write_End(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_OBJ_get_ClassOf(obj), coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::write_Start(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_OBJ_get_ClassOf(obj), coreId);
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
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::stat_create_Framework()
	{
		_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = new WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework();
		while (stat_get_ptr_Framework() == NULL) {}
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION;
	}
		// set.