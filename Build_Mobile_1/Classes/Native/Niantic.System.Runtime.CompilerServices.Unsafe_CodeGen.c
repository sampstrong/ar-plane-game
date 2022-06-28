#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::Read(System.Void*)
// 0x00000002 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Void*)
// 0x00000003 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000004 System.Void System.Runtime.CompilerServices.Unsafe::Write(System.Void*,T)
// 0x00000005 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Void*,T)
// 0x00000006 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000007 System.Void System.Runtime.CompilerServices.Unsafe::Copy(System.Void*,T&)
// 0x00000008 System.Void System.Runtime.CompilerServices.Unsafe::Copy(T&,System.Void*)
// 0x00000009 System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer(T&)
// 0x0000000A System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x0000000B System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlock_m836F827FD04AD0576F90804E6DAA2D1A9D570723 (void);
// 0x0000000C System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_m98011E1B32C2CFB2BE108B96AADFD66164610872 (void);
// 0x0000000D System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_mF971E82ACBA6473712338D897984FCE9FBB57B03 (void);
// 0x0000000E System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_m4FE7248C11D142F0FCE256D2191FBB2CAE98F481 (void);
// 0x0000000F System.Void System.Runtime.CompilerServices.Unsafe::InitBlock(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlock_m8D497BE708EC1E912617913421EB2062C7DF493E (void);
// 0x00000010 System.Void System.Runtime.CompilerServices.Unsafe::InitBlock(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlock_m7DE7C96248A96549219797BFBCCED1A77CF32AF1 (void);
// 0x00000011 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_mA14A5A0042F35DF8B7713D03D6D1F9E219F89ADF (void);
// 0x00000012 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m6033C0F4D7B79F90D553863D2521991D74FF680A (void);
// 0x00000013 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000014 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x00000015 T& System.Runtime.CompilerServices.Unsafe::AsRef(T&)
// 0x00000016 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000017 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000018 System.Void* System.Runtime.CompilerServices.Unsafe::Add(System.Void*,System.Int32)
// 0x00000019 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000001A T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000001B T& System.Runtime.CompilerServices.Unsafe::Subtract(T&,System.Int32)
// 0x0000001C System.Void* System.Runtime.CompilerServices.Unsafe::Subtract(System.Void*,System.Int32)
// 0x0000001D T& System.Runtime.CompilerServices.Unsafe::Subtract(T&,System.IntPtr)
// 0x0000001E T& System.Runtime.CompilerServices.Unsafe::SubtractByteOffset(T&,System.IntPtr)
// 0x0000001F System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x00000020 System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x00000021 System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressGreaterThan(T&,T&)
// 0x00000022 System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan(T&,T&)
// 0x00000023 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m5FED35A4C263D39D8FD5AEEBF3D62355B96DE3BF (void);
// 0x00000024 System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_mE79F44288AF364118B64CCA6B17949BD4718E5BF (void);
static Il2CppMethodPointer s_methodPointers[36] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_m836F827FD04AD0576F90804E6DAA2D1A9D570723,
	Unsafe_CopyBlock_m98011E1B32C2CFB2BE108B96AADFD66164610872,
	Unsafe_CopyBlockUnaligned_mF971E82ACBA6473712338D897984FCE9FBB57B03,
	Unsafe_CopyBlockUnaligned_m4FE7248C11D142F0FCE256D2191FBB2CAE98F481,
	Unsafe_InitBlock_m8D497BE708EC1E912617913421EB2062C7DF493E,
	Unsafe_InitBlock_m7DE7C96248A96549219797BFBCCED1A77CF32AF1,
	Unsafe_InitBlockUnaligned_mA14A5A0042F35DF8B7713D03D6D1F9E219F89ADF,
	Unsafe_InitBlockUnaligned_m6033C0F4D7B79F90D553863D2521991D74FF680A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m5FED35A4C263D39D8FD5AEEBF3D62355B96DE3BF,
	IsReadOnlyAttribute__ctor_mE79F44288AF364118B64CCA6B17949BD4718E5BF,
};
static const int32_t s_InvokerIndices[36] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9416,
	9416,
	9416,
	9416,
	9421,
	9421,
	9421,
	9421,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7243,
	7243,
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x0600000A, { 0, 1 } },
	{ 0x06000017, { 1, 1 } },
	{ 0x06000018, { 2, 1 } },
	{ 0x06000019, { 3, 1 } },
	{ 0x0600001B, { 4, 1 } },
	{ 0x0600001C, { 5, 1 } },
	{ 0x0600001D, { 6, 1 } },
};
extern const uint32_t g_rgctx_T_t66A75B68DAE373575238814A56A4449DEBE5A164;
extern const uint32_t g_rgctx_T_t2192DB7691656E645E33449C371DF39C60A2C038;
extern const uint32_t g_rgctx_T_t01F3BC225FFA8EE83F2C872B47D861254D5799FA;
extern const uint32_t g_rgctx_T_tC6AB4560070D1310CAB1BAAFC72610D7879390EB;
extern const uint32_t g_rgctx_T_t063A484DAE606EF1215A446C988256D9B2832DC7;
extern const uint32_t g_rgctx_T_tF538F4AD9313CF759447E18548C8EE136B1135AF;
extern const uint32_t g_rgctx_T_t0536352450C81D5FEE8E01D407451C872E5C37EF;
static const Il2CppRGCTXDefinition s_rgctxValues[7] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t66A75B68DAE373575238814A56A4449DEBE5A164 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2192DB7691656E645E33449C371DF39C60A2C038 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t01F3BC225FFA8EE83F2C872B47D861254D5799FA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tC6AB4560070D1310CAB1BAAFC72610D7879390EB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t063A484DAE606EF1215A446C988256D9B2832DC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF538F4AD9313CF759447E18548C8EE136B1135AF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t0536352450C81D5FEE8E01D407451C872E5C37EF },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Niantic_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_Niantic_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"Niantic.System.Runtime.CompilerServices.Unsafe.dll",
	36,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	7,
	s_rgctxIndices,
	7,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
