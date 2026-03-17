#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.h"
OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = NULL;
void* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::generate_Program()
{
	stat_create_Framework();
	stat_get_ptr_Framework()->app_initialise(stat_get_ptr_Framework());
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
	return (void*)stat_get_ptr_Framework();
}
void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::terminate_Program()
{
	delete _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION;
	while (stat_get_ptr_Framework() != NULL) {}
}
void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::write_End(void* obj, unsigned char* bytes)
{
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
}
void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::write_Start(void* obj, unsigned char* bytes)
{
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
}
void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::stat_create_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = new WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework();
	while (stat_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::stat_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION;
}