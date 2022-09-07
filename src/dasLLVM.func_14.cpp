// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasLLVM.h"
#include "need_dasLLVM.h"
namespace das {
#include "dasLLVM.func.aot.decl.inc"
void Module_dasLLVM::initFunctions_14() {
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAIntToPtrInst >(*this,lib,"LLVMIsAIntToPtrInst",SideEffects::worstDefault,"LLVMIsAIntToPtrInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAPtrToIntInst >(*this,lib,"LLVMIsAPtrToIntInst",SideEffects::worstDefault,"LLVMIsAPtrToIntInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsASExtInst >(*this,lib,"LLVMIsASExtInst",SideEffects::worstDefault,"LLVMIsASExtInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsASIToFPInst >(*this,lib,"LLVMIsASIToFPInst",SideEffects::worstDefault,"LLVMIsASIToFPInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsATruncInst >(*this,lib,"LLVMIsATruncInst",SideEffects::worstDefault,"LLVMIsATruncInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAUIToFPInst >(*this,lib,"LLVMIsAUIToFPInst",SideEffects::worstDefault,"LLVMIsAUIToFPInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAZExtInst >(*this,lib,"LLVMIsAZExtInst",SideEffects::worstDefault,"LLVMIsAZExtInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAExtractValueInst >(*this,lib,"LLVMIsAExtractValueInst",SideEffects::worstDefault,"LLVMIsAExtractValueInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsALoadInst >(*this,lib,"LLVMIsALoadInst",SideEffects::worstDefault,"LLVMIsALoadInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAVAArgInst >(*this,lib,"LLVMIsAVAArgInst",SideEffects::worstDefault,"LLVMIsAVAArgInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAFreezeInst >(*this,lib,"LLVMIsAFreezeInst",SideEffects::worstDefault,"LLVMIsAFreezeInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAAtomicCmpXchgInst >(*this,lib,"LLVMIsAAtomicCmpXchgInst",SideEffects::worstDefault,"LLVMIsAAtomicCmpXchgInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAAtomicRMWInst >(*this,lib,"LLVMIsAAtomicRMWInst",SideEffects::worstDefault,"LLVMIsAAtomicRMWInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1740:30
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAFenceInst >(*this,lib,"LLVMIsAFenceInst",SideEffects::worstDefault,"LLVMIsAFenceInst")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1742:14
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAMDNode >(*this,lib,"LLVMIsAMDNode",SideEffects::worstDefault,"LLVMIsAMDNode")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1743:14
	addExtern< LLVMOpaqueValue * (*)(LLVMOpaqueValue *) , LLVMIsAMDString >(*this,lib,"LLVMIsAMDString",SideEffects::worstDefault,"LLVMIsAMDString")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1746:13
	addExtern< const char * (*)(LLVMOpaqueValue *) , LLVMGetValueName >(*this,lib,"LLVMGetValueName",SideEffects::worstDefault,"LLVMGetValueName")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1748:6
	addExtern< void (*)(LLVMOpaqueValue *,const char *) , LLVMSetValueName >(*this,lib,"LLVMSetValueName",SideEffects::worstDefault,"LLVMSetValueName")
		->args({"Val","Name"});
// from D:\Work\libclang\include\llvm-c/Core.h:1777:12
	addExtern< LLVMOpaqueUse * (*)(LLVMOpaqueValue *) , LLVMGetFirstUse >(*this,lib,"LLVMGetFirstUse",SideEffects::worstDefault,"LLVMGetFirstUse")
		->args({"Val"});
// from D:\Work\libclang\include\llvm-c/Core.h:1785:12
	addExtern< LLVMOpaqueUse * (*)(LLVMOpaqueUse *) , LLVMGetNextUse >(*this,lib,"LLVMGetNextUse",SideEffects::worstDefault,"LLVMGetNextUse")
		->args({"U"});
}
}

