#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference>
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.WeakReference>
struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6;
// System.Collections.Concurrent.ConcurrentDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF;
// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09;
// System.Func`2<System.IntPtr,System.WeakReference>
struct Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,System.WeakReference>
struct Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2;
// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB;
// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<Niantic.ARDK.AR._CppAddressAndScale>
struct IEqualityComparer_1_tF58A69557E0D2F470FB6BB7472A27C75A9E0DEE6;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,System.WeakReference>
struct Tables_t42AB4320DE03FD7CEE177527CC262BFEABC743BC;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Object,System.WeakReference>
struct Tables_tF448708F8EDE9C6AEE075168D8367BE3A8CD94DD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Tables_tE6309B2F7A104447D3ED850DE83CE8374863B712;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>
struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_t205DF3BBFB4CED8E853CC2E7782DA16622A244A9;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_tF42853335CF1E1AE76B2047A4DDAD5C92789662A;
// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_tA01BFEDEE4FD00FF218224C8930D9BE9DCF0DC1A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.IntPtr,System.Object>
struct U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09  : public RuntimeObject
{
};

struct U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.Object,System.Object>
struct U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16  : public RuntimeObject
{
};

struct U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2  : public RuntimeObject
{
};

struct U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2* ___U3CU3E9_0;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference>
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t42AB4320DE03FD7CEE177527CC262BFEABC743BC* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t205DF3BBFB4CED8E853CC2E7782DA16622A244A9* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.WeakReference>
struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tF448708F8EDE9C6AEE075168D8367BE3A8CD94DD* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tF42853335CF1E1AE76B2047A4DDAD5C92789662A* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tE6309B2F7A104447D3ED850DE83CE8374863B712* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tA01BFEDEE4FD00FF218224C8930D9BE9DCF0DC1A* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* ____createWeakReference_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>
struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* ____createWeakReference_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* ____createWeakReference_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>
struct KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>
struct KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Niantic.ARDK.AR._CppAddressAndScale
struct _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 
{
	// System.IntPtr Niantic.ARDK.AR._CppAddressAndScale::_cppAddress
	intptr_t ____cppAddress_0;
	// System.Single Niantic.ARDK.AR._CppAddressAndScale::_scale
	float ____scale_1;
};

// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,System.WeakReference>
struct Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.WeakReference>
struct Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2  : public MulticastDelegate_t
{
};

// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB  : public MulticastDelegate_t
{
};

// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._GcObserver::add__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._GcObserver::remove__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m6630CFE2DE42450FD9ED20CA31E2FC7CF071A019_inline (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9*, const RuntimeMethod*))KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Key()
inline intptr_t KeyValuePair_2_get_Key_m8E539ABF7EFC4F70F6967EC7BBE8EE41954693F3_inline (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m3BBF9C349091BDE161556E679D926964F8B0231E_inline (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m5DE7A90A3EEF7EEA3B19CD617E7B6A83230CEB1D_inline (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m11BB92612764F88ED91E292B82EC399D8167A06D_inline (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>::get_Key()
inline _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_mDE079F1D9DD769047A440648F1359C0542017E48_inline (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE* __this, const RuntimeMethod* method)
{
	return ((  _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 (*) (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m675BEDDDA063F89DA36E0F1C73B0806580A56807_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_mC66F5B04626B1DA359517178F991EE729B64705B_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m47ABFCA22E44B20981ED43EB241F064DA1814E41_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mEBD1A7C2B576B029889C0AC92AFE568CAF40E674_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m2686F8589A793F5FF59D6EE1DE09B68DD595FB43_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m6630CFE2DE42450FD9ED20CA31E2FC7CF071A019_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_15 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
						intptr_t L_16;
						L_16 = KeyValuePair_2_get_Key_m8E539ABF7EFC4F70F6967EC7BBE8EE41954693F3_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_4 = ((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_16 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_21 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_4 = ((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_18 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_25 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* L_29 = ___createValue1;
				intptr_t L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mA8638BD86DAF869BBDD5BDDAA72E63F9367FDE2D_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09* L_0 = ((U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9_0;
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_1 = (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		NullCheck(L_1);
		((  void (*) (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m4BDAC7514FDA165F95ECC205992F0A621CAD0A0B_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m269CFBFFA403967BEABA96FF8E7FE9C19881E6E0_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m6185A17A3347B159D1EFDE95912E68EE6D0AA0BE_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m4DEE27F7677694A5799195ECE2F32339F74AA3DC_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mE9B55552496CD5CEE9397C91B2ACA2E709FE29DB_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m3BBF9C349091BDE161556E679D926964F8B0231E_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_15 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
						RuntimeObject* L_16;
						L_16 = KeyValuePair_2_get_Key_m5DE7A90A3EEF7EEA3B19CD617E7B6A83230CEB1D_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_4 = ((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_16 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_21 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_4 = ((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_18 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_25 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_29 = ___createValue1;
				RuntimeObject* L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mEC4A500428B40F46FC8293633B5C8D74B0A647F0_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16* L_0 = ((U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9_0;
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_1 = (Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		NullCheck(L_1);
		((  void (*) (Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m46492AC8EAD3CE625B1B47E4977D6D7A97A82DD5_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m01146FC022A14ACF4258D99B7141DD941C1022A9_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_mB9B8FE29FA130C19B725CE28E43B5048ABE440A0_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m3FCF7DBD4AC4FD7E5EC3748CDF907102743D7428_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mFFEB7FC4B57870050CBA30420CCD4956C534C1B6_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m11BB92612764F88ED91E292B82EC399D8167A06D_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_15 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
						_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_16;
						L_16 = KeyValuePair_2_get_Key_mDE079F1D9DD769047A440648F1359C0542017E48_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_4 = ((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_16 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_21 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_4 = ((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_18 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_25 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* L_29 = ___createValue1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mDEA561E0F5F3C0E824A3FAB7BE3C44BB5585196B_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2* L_0 = ((U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9_0;
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_1 = (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		NullCheck(L_1);
		((  void (*) (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = (intptr_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) 
{
	{
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_0 = (_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003)__this->___key_0;
		return L_0;
	}
}
