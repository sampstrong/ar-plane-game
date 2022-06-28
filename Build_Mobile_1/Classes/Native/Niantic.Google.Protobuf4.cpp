#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.DescriptorProto>
struct EqualityComparer_1_tBC281AC0D20FA6B771D9C200D2D3B16E4E81DF62;
// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct EqualityComparer_1_tB03840C90BE4F7B7FA6926E51611E7D1F634E4DF;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct EqualityComparer_1_tF451D8858ACF791B601F5A116162114BF9B59F31;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct EqualityComparer_1_tEED32E7A74D9CC1BD43F3FAB4996B3600BEF189F;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct EqualityComparer_1_t412E7B930A56516A2C74C18A3205E9DB569B4964;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct EqualityComparer_1_t9307B334BFD7D4D3F50ECB8C3DEE51C7D845D197;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>
struct ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>
struct ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA;
// Google.Protobuf.ExtensionSet`1<System.Object>
struct ExtensionSet_1_t418209FE573CFF1C92387191095EBEECA1904C31;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>
struct ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>
struct ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto>
struct FieldCodec_1_t69ED03EBD77CD245E3DCD319A3223DA6802F27CF;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct FieldCodec_1_t78E15E7206221C2EE278DF820B8BBAA08CCBA4F8;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct FieldCodec_1_tB80DCC5ED8B475D63E397D69AC98202981482A71;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct FieldCodec_1_t8A6F0473514E1AA66AA8A331551EC9043DC73090;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct FieldCodec_1_t88C924349B243F55A69D191F70DA31DFD425437D;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct FieldCodec_1_tE6F4B17A9CBAE506F3E51F34D34874CADEB40242;
// Google.Protobuf.FieldCodec`1<System.String>
struct FieldCodec_1_t32964B033A84FE54C7607E6FB354CE02273C6297;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption>
struct FieldCodec_1_tED6CCB8D70769914B70CC14AF4DD81469F7C4221;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct FieldCodec_1_tEA50F19956BEF0254C6ED4324B7DE0CEDAAA416E;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange>
struct FieldCodec_1_tE24AD0BBAEACC2908959D16A393672060E1D07F2;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange>
struct FieldCodec_1_t9D42D468FD58B645B4A2239C99B8B4890736A4B7;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t6B16E310C12743E3CC6C1CDCDCB2DB7C7A6A10EA;
// System.Func`2<Google.Protobuf.Extension,System.Boolean>
struct Func_2_t77887A818C394A733AE3309981BD7654370D785C;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension>
struct Func_2_t9105316D0546BED59361380E484B9659F940DBB5;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>
struct Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7;
// System.Func`2<Google.Protobuf.Reflection.FileDescriptor,System.String>
struct Func_2_tFE6913B659056A3834DC059FD8D3F9E0F868E6D8;
// System.Func`2<Google.Protobuf.Reflection.GeneratedClrTypeInfo,System.Boolean>
struct Func_2_tFF4BC3C8C8CB2ADD2EEEFD854F485950A718F3CF;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean>
struct Func_2_tA2EE063C789FC68882F4C9E821082F043939B622;
// System.Func`2<Google.Protobuf.IMessage,System.Int32>
struct Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0;
// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t785BD751BA3D84313491F6396FF210AC08198B2A;
// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<Google.Protobuf.Reflection.FileDescriptor>
struct HashSet_1_t0822F05CEA8EE5A834305FBD98088203956612D6;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.EnumValueDescriptor>
struct IDictionary_2_t045591BEA516EF389C4030C09624DAA5EA2FDE35;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_t7CFBE32798B6CB4FC22D58AD9DFE58AE06C71285;
// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct IDictionary_2_tD715C2FE9D25E2E6280083B174F3549588A918A9;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>>
struct IDictionary_2_tAB9B7065DB1FDDCB57828C592D62091B9C062BED;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_t3AC8EDAA3534EAD575A781DBE8DA0EE613092041;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.IDescriptor>
struct IDictionary_2_tE1CA316B1DA9455D3FB312A75E118998044233A5;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IEnumerable_1_t530F4ABCC61B9EAED7FA1A166C837D4098FE31ED;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct IEnumerable_1_t7F6C0A967677FC30A8F4E5893406B27ADEFD59CF;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>
struct IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.DescriptorProto>
struct IList_1_t21C707B2F248251493D1FFBFD7FA317236BD8D3A;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t84C8A49192C28AB437FEED7702F93A88C4E5CB82;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct IList_1_t4B5A30EA105F122120B17BF396D43337B33829AD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor>
struct IList_1_tF4CBE5D0A396079508FAC4F2A206623E3E50E295;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tCE6AA5DEDB905A2700425D6966094A8CF99A95F0;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct IList_1_t2FEE1DADC91C502796ABCA6024545167BB8486F7;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t0214714A2E9C634FC012B6BFCEC97457898A3EEA;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_t55A30289941AF367820CD58D6C2D671C0B44551A;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor>
struct IList_1_tD5216A34435C3F49F8F5DCEE0D33D584BFF907C2;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct IList_1_tC69C9481C5249403AF952CD8E180D695C298850B;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t70BFB880195CB2BE07E0E2ED1D520BD2D60C2360;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct IList_1_t19E609FE5D7F7418BAF56F13F8A573F9B269A747;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t02D79538F803F63949CCCF3EB1C14E50D5E28B6E;
// System.Linq.IOrderedEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IOrderedEnumerable_1_tE9F88DDFA383A21C6158F1F3BCD072942E038158;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase>
struct IReadOnlyList_1_tA68C4C598B82FDA44515C1167011383AD9193AB2;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>
struct IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>
struct IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>
struct IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>
struct IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<System.Object,System.Object>
struct IndexedConverter_2_t0DF76C7B43E70D6E1F87C2373973FD20062045B2;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>
struct IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Google.Protobuf.IExtensionValue>
struct KeyCollection_tBD17261CDA727FBBCB6175DA169D1E947137A9EE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct KeyCollection_t24B2114725FB85B514D164854CB22860AD0A5A5E;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct KeyCollection_t796F1F1166F3A4A51449E10478F1ADBEDD67C3B1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct KeyCollection_tC3C0FA62091C0E1CEAB752AEF78A9CA519128049;
// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>>
struct Lazy_1_tD8AF1165E395AC7D0357F159CB5C037D9D7CCC10;
// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>
struct List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.DescriptorProto>
struct MessageParser_1_t5FA6F892898D0A9760E63D75B580538B9B1AB6E6;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct MessageParser_1_t9CA24575A071F099B32C452637ED4A461AE02525;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct MessageParser_1_t969EB4B2E6D66C5E7EE07CC4D74697D756D5D927;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MessageOptions>
struct MessageParser_1_t112832657DC1670E8BCE3F2DF07C3DF9082B1695;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct MessageParser_1_tBC234CF2FD62C40A99B0414B937DC3AFDDCC3ED2;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodOptions>
struct MessageParser_1_tFA16943B54136843BD5DA3E49410D17EC2BFE234;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct MessageParser_1_tEF86B3CC68FAB1E6F1A199075934867448AE7116;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofOptions>
struct MessageParser_1_tC478EED547932DE4663B1EDFFCAF1BEAFC587A79;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct MessageParser_1_t53D39F0BA5D22AF6A98DBD7729D0A7A92DE3DD5A;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceOptions>
struct MessageParser_1_tD176E66F44690B9E2E7527A71DE9DB0BC8537970;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_tA5E205F3BBEB6B67DBCA3C316E87352486DFF1C2;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto>
struct RepeatedField_1_tF209BB319A301B92F3E31BA7A80A39A58D23C0A7;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct RepeatedField_1_t00A32F8CDF0FA07C86031BDC491EC850A03D3202;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct RepeatedField_1_tD1B494BE660D8FEE01E1CB30611021982A4069ED;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct RepeatedField_1_tC71BBCB23642B3126ADFDD7AAD03AE3F31B9D191;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t5E1EB72F85000EFBD87680B0BDAD112A08F820BF;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct RepeatedField_1_tF287D0133CB00422E32F7C0FC98D7FDDB3355C29;
// Google.Protobuf.Collections.RepeatedField`1<System.String>
struct RepeatedField_1_t963BBFCD175C5A89CE2BA88CB13C78A3A975B30C;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption>
struct RepeatedField_1_tDBFBF8B042E7E5466A1916F3CDFE673F0394887C;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange>
struct RepeatedField_1_tB139D86D35F1E3D396D17C818A0B34356C3CA4C3;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange>
struct RepeatedField_1_t8A4EBE6AEC71E5AB6D466CEB78FDE52E485FFC8E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Google.Protobuf.IExtensionValue>
struct ValueCollection_t68CD5DAEFA8F93F289BCB769ED51816797558FD2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ValueCollection_t1B52743869BE339002AB03A57BDEBD50CD4A9AFE;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ValueCollection_t46059A2E02991D6FC6F93576F12A06C0FA1BD714;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct ValueCollection_tB253B8AC8A6BEA2DAEA28578041BC3D3BE37D298;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Google.Protobuf.IExtensionValue>[]
struct EntryU5BU5D_t5CEBF048443D11FB757415F3F8253EB2652CD7DD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.FieldDescriptor>[]
struct EntryU5BU5D_t1A185014622732657215999FB73F49ACAD4FABD4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.MessageDescriptor>[]
struct EntryU5BU5D_t29C5FE1F993F8927990B9BA0903479FF16433032;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.Reflection.DescriptorProto[]
struct DescriptorProtoU5BU5D_t7CE62C669D5405D88C0E2FBB0F2A993382FD09B8;
// Google.Protobuf.Reflection.EnumDescriptorProto[]
struct EnumDescriptorProtoU5BU5D_t6917FF8D3BC578A046E53706D9F4AA8C12C64724;
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD;
// Google.Protobuf.Reflection.FieldDescriptor[]
struct FieldDescriptorU5BU5D_tB51FB7EE15A94B1E2082AA10AD4C5D048B805999;
// Google.Protobuf.Reflection.FieldDescriptorProto[]
struct FieldDescriptorProtoU5BU5D_t1EA8FAC9BCE8021C617756D83DCB2D9F45B2447C;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B;
// Google.Protobuf.Reflection.MethodDescriptorProto[]
struct MethodDescriptorProtoU5BU5D_tD7BCC323C2852F9898D3D678465A31944B7D9859;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Google.Protobuf.Reflection.OneofDescriptorProto[]
struct OneofDescriptorProtoU5BU5D_tD122C7DAACE73733359926403F79B922077CDCB6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange[]
struct ExtensionRangeU5BU5D_t449E15FF46A78CABCB0A9E3D4BDC287255FFA76F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Google.Protobuf.ByteString
struct ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9;
// Google.Protobuf.Reflection.CustomOptions
struct CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE;
// Google.Protobuf.Reflection.DescriptorValidationException
struct DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F;
// Google.Protobuf.Reflection.EnumDescriptor
struct EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F;
// Google.Protobuf.Reflection.EnumDescriptorProto
struct EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1;
// Google.Protobuf.Reflection.EnumOptions
struct EnumOptions_tDB2FACEB2EDB36D6E9BC9144FE6A47439158BA6D;
// Google.Protobuf.Extension
struct Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E;
// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_t61FF36E268D47D66D371DB4A40014D55AF9F2B83;
// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE;
// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA;
// Google.Protobuf.Reflection.FieldDescriptorProto
struct FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7;
// Google.Protobuf.Reflection.FieldOptions
struct FieldOptions_t898A213BF0DF06EBC457E221CA6E1789327A59D9;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_tB1E0CB59DF507DF5A27982B5707E6B5FA1D3ABDC;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Google.Protobuf.Reflection.IDescriptor
struct IDescriptor_tA5467774A8DF9EB47455C7BC4119BC60764F6C8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Google.Protobuf.Reflection.IFieldAccessor
struct IFieldAccessor_t8E9765666D2BF5663858BA23769714BFBF94D346;
// Google.Protobuf.IMessage
struct IMessage_t900533804F0866E5187D751ACBBBF2B8B6E83497;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
// Google.Protobuf.Reflection.MapFieldAccessor
struct MapFieldAccessor_t74970120369F2E74AE07328AF2F890BEBBC7A39C;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7;
// Google.Protobuf.Reflection.MessageOptions
struct MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA;
// Google.Protobuf.MessageParser
struct MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE;
// System.Reflection.MethodBase
struct MethodBase_t;
// Google.Protobuf.Reflection.MethodDescriptor
struct MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2;
// Google.Protobuf.Reflection.MethodDescriptorProto
struct MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Google.Protobuf.Reflection.MethodOptions
struct MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045;
// Google.Protobuf.Reflection.OneofAccessor
struct OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96;
// Google.Protobuf.Reflection.OneofDescriptor
struct OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C;
// Google.Protobuf.Reflection.OneofDescriptorProto
struct OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59;
// Google.Protobuf.Reflection.OneofOptions
struct OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4;
// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6;
// Google.Protobuf.Reflection.PackageDescriptor
struct PackageDescriptor_tFB3A45AF2F30CCCFBF120560E6BABC4009BC5DCC;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Google.Protobuf.Reflection.RepeatedFieldAccessor
struct RepeatedFieldAccessor_t92A84CE33826C08ADD4115FAFC4FCAFB989EC065;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150;
// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A;
// Google.Protobuf.Reflection.ServiceOptions
struct ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897;
// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Protobuf.Reflection.FileDescriptor/<>c
struct U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8;
// Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD51D17497E1120CEB50EB6E5239849ED5F2C3E96;
// Google.Protobuf.Reflection.MessageDescriptor/<>c
struct U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59;
// Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43;
// Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C;
// Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl
struct BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl
struct BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl
struct BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl
struct BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4;
// Google.Protobuf.Reflection.ReflectionUtil/IExtensionReflectionHelper
struct IExtensionReflectionHelper_tFD445490847160159BE2050F08834D98F9DDC7D7;
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper
struct IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A;
// Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c
struct U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2
struct U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8;
// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF;
// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA2EE063C789FC68882F4C9E821082F043939B622_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t36E3DDE778C5DAEF044F434B8618ADCEE249E345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t530F4ABCC61B9EAED7FA1A166C837D4098FE31ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t79BC63EA9AB9572BF81C957118A733ADB9A7E5D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8C15FC48A0322CCD2675A169B9DB11CA347C6D8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t65A31ECDF74FB98A863A85E9B7BCFED5A7E51129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6B7AAE753D527C5705F86F664E650F87637E6DD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCD48A4FDB55FCBB6BA058258F2D0312DFAC3EE59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExtensionReflectionHelper_tFD445490847160159BE2050F08834D98F9DDC7D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExtensionSetReflector_t71459EAD4F5A5E0B6BC7469322A1ACA8B9EA9FB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFieldAccessor_t8E9765666D2BF5663858BA23769714BFBF94D346_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tCE6AA5DEDB905A2700425D6966094A8CF99A95F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tA68C4C598B82FDA44515C1167011383AD9193AB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09353E39448C302F003639F3B4C81D6B132357DE;
IL2CPP_EXTERN_C String_t* _stringLiteral12FC0BF60BCE54234CA58CFD037BD8E5ADE3F2FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90;
IL2CPP_EXTERN_C String_t* _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA;
IL2CPP_EXTERN_C String_t* _stringLiteral352DC1AD46B06976FE1F09D69AD2AE07BA1C912F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B;
IL2CPP_EXTERN_C String_t* _stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3;
IL2CPP_EXTERN_C String_t* _stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793;
IL2CPP_EXTERN_C String_t* _stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F6EBD2865CE2FCCB1136CB39B9E6777A5F4777C;
IL2CPP_EXTERN_C String_t* _stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3;
IL2CPP_EXTERN_C String_t* _stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78;
IL2CPP_EXTERN_C String_t* _stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565;
IL2CPP_EXTERN_C String_t* _stringLiteralA598F7A018FBD9BE6B63FDAFF829654652603EEB;
IL2CPP_EXTERN_C String_t* _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA9233D8C418C04829410724511B59AEC0EF627BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAA2199D3FAB3E9A0592694D9E1A42317C06006B4;
IL2CPP_EXTERN_C String_t* _stringLiteralB7012EBD7A52FFE2177DD7A499A4226405016ACB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC735ABBBA0A4054E66CE20DF45D76FB73FAFF691;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8;
IL2CPP_EXTERN_C String_t* _stringLiteralD25853350172E0B01427BE241CD73C9EA8AD7200;
IL2CPP_EXTERN_C String_t* _stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A;
IL2CPP_EXTERN_C String_t* _stringLiteralD47CF5D6FE76B6693D0F4ADFBC7B1D127FBC8366;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A7B98FBAE659C1B887B207BDC5507066DBC057;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AB46C8C5CCDCA487773A386E008015AD2FB899;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m7430AB9F712873898A4FB5E96168511EDC5617AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_mDFD273FEC4DC52BC822EE25FFE225118D95C2475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_m22B4F33FF04FAB42478A81FD12C68A11648056F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1_TisEnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_m0976EBC18331C412F8C66734963071FDF97B96CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m2F849B49A46AA775E949CA9B84969ED9913A7106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_m58B48DE3EB44ADF87A3610AC95AEFAE038B082BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59_TisOneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C_m17521AD6CB366ED9BB03C7185201BC6BECA384EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3635981B5DF287B3653F883D7773C887714EBD9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD2B059033566AE1FA3C88BABABABF721A6D3F2C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_m23D147E06E9F4D5BF82FFD65A82D25D393DCC3D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m14DB8134F5FD9077592FB974A4CC384FBA337884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_m3CF8AF6C1290ED984BCE6F1EF304C56CA3A9F5AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m092DF0DAC1ED1EF9AB55A21B76308B1EAF27A1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_m138B67156210A111A7D2A6F69F98883417203488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_m5B58A7B346088BDEDF7260D80B37C63E8D5C88CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_mE6AF24960FAEFA67957A634F102D0CA7914A6FD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_mED55393806CEDEA243FAE11DE177584F0078C07C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCollection_get_Item_m0C482F6999CACAD2D12688FFFDDAA1EA883D9E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCollection_get_Item_mE5015EA902353F777072F3E0F731FCA9DDF4566A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m71824B3EEE5B25E3FCE5B1DF40C6DEE66324C292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m96006D302E1523071908B261B9B6EC56B80F725E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapFieldAccessor_HasValue_m5E7B60D1992C908AED1FB12B0B9B15270C93571A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapFieldAccessor_SetValue_m78C3AE9A31AF68BB0AEA4D54005DB795110D2E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageDescriptor__ctor_mA7BBE1F5C4E3EFC10FAA3BAA2247D1D8FFCF774A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodDescriptor_CrossLink_m446B2FEBFAD05BB9D9B16D0725FC59E28E3B3BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneofDescriptor_CreateAccessor_m90C16A1A2D57206F178F01F487F78A2CFB63D183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_m7F7F71DBD9A4D13AF632B7D88F9E3814D662AFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m3C2D1B32A9135BDEA14B7D1EE4D024AE99E6F75F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisString_t_mD0EA4534FC262B782CD7AB66C1763CBDA60D3AC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_m8A5D75400BF356B09A1A98A65AFB190540B457AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m051A72BDFA52662434668C9A560BE709EC21277E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD861A25B270D5A4D4B40BC4628325D166A5511FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAE63C2CE6181EC1D574229EEAB434C90F000402A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34C472C904B4130714367720101F6D3D8DDEE60A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDEE358EF9748B7400732EC2B173AF58B24575506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m1984E7D21EA05A037FD10A5A49CCE7CE2C8EAFB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mC9B1A97904B8269F01830BAF4D04D5C968F76C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mFB0BD62BBC79647D97DE60F653AB81596EEF17D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mC3A4F9EF72A275B8CD8A89EF88BC221DF3756156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2AF7576C557A94559D8245CE45FC3F55809A2607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_m721D251AA6FB5CB6A729695C6F7F6A1E85115CBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA80609F51D877AE255E0A2EB2AA8B70196D3AFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisSampleEnum_t6A9540C415F3C8D504A46CBA3CFCE8DD55D8D968_m6C200B16A03C8CE2763FE68EC7D8E7905EF12493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8571185C2A8895AE12CEF05633A270FEDBF6EE1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisString_t_m1A8DDF66AABECC7AE0ED58E521EED6B20D48ED17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC12AEA11FD90055CF63EA23EA672CC6BDCF408F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5C258402CEA38F96938B34CB7848772BBA1CECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedFieldAccessor_HasValue_m916D8E6D4C2E7A97FAF15AA5C756FFF8462A635A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedFieldAccessor_SetValue_mB2481D9FC7EA13CC44D661072A3EEA7F84F39782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Count_m996C20735872A4AB37AEE60F8DC614E2DCFC343D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleFieldAccessor__ctor_m9A9162971519261FA361F9531DA42F400FF98043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFromMessagesU3Eb__9_0_m4FD7D15DA46916627C40437264BFD4E4D6B5BA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_4_m5AB7485E6EF89B24309FAD0E6485BC765387A7F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_4_mD5ECCDE19E33EFF665B90C169CDA19D9E6313064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m6D47F0876CE1EDA5AE29F153841C78874DC03F04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m115E84D7D6CC48B17255B4DE173B39E3ABB9B3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m120DA13DFE42D2519D9EE81018045ED80399BFA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_m2902DF4C53BFDBDD319EBCD7FE41047A1C7458E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m954EBABEEEB16E53320F2F0E8937D9AA30CDA775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m30058344DC0A32172695A1B508F9F9AED62AF35C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_m954F7FA5FE36A6A9DF89B2FF6DDBDBC06F0530C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_mBD7F5251BD07AB83DEFEC91E31DBBCF8808789A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mACCC1F13A04398127B21FCE0382BD06D52873AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m8C721D5784EE2343EB962F1D81EBC85FAB6F74E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_m680581E922FDD92F204F6B6EB84A11B2F1F40688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_m5B8A4FC7AE2F5EE2CC9606F81D25FCD794DD75ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m7AD1726DB9DC585C6480DDD4532DD51D38281A3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionReflectionHelper_2_tA72A3B5FDB9CF1686A279CF221D3A15700C44319_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionSetReflector_1_t71ECC5928D51A9C384BF3FBC7704AFE281613553_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectionHelper_2_tA07EDF772DDCEA85866F4C6CB6B403F15D215B64_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD;
struct FieldDescriptorU5BU5D_tB51FB7EE15A94B1E2082AA10AD4C5D048B805999;
struct FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE;
struct GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F;
struct MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5CEBF048443D11FB757415F3F8253EB2652CD7DD* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tBD17261CDA727FBBCB6175DA169D1E947137A9EE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t68CD5DAEFA8F93F289BCB769ED51816797558FD2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1A185014622732657215999FB73F49ACAD4FABD4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t24B2114725FB85B514D164854CB22860AD0A5A5E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1B52743869BE339002AB03A57BDEBD50CD4A9AFE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t29C5FE1F993F8927990B9BA0903479FF16433032* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC3C0FA62091C0E1CEAB752AEF78A9CA519128049* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB253B8AC8A6BEA2DAEA28578041BC3D3BE37D298* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694  : public RuntimeObject
{
};

struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203  : public RuntimeObject
{
};

struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB  : public RuntimeObject
{
};

struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};

struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>
struct ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>
struct ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<System.Object>
struct ExtensionSet_1_t418209FE573CFF1C92387191095EBEECA1904C31  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>
struct ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>
struct ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>
struct List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FieldDescriptorU5BU5D_tB51FB7EE15A94B1E2082AA10AD4C5D048B805999* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FieldDescriptorU5BU5D_tB51FB7EE15A94B1E2082AA10AD4C5D048B805999* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_t796F1F1166F3A4A51449E10478F1ADBEDD67C3B1* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_t46059A2E02991D6FC6F93576F12A06C0FA1BD714* ____values_3;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto>
struct RepeatedField_1_tF209BB319A301B92F3E31BA7A80A39A58D23C0A7  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	DescriptorProtoU5BU5D_t7CE62C669D5405D88C0E2FBB0F2A993382FD09B8* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tF209BB319A301B92F3E31BA7A80A39A58D23C0A7_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tBC281AC0D20FA6B771D9C200D2D3B16E4E81DF62* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	DescriptorProtoU5BU5D_t7CE62C669D5405D88C0E2FBB0F2A993382FD09B8* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct RepeatedField_1_t00A32F8CDF0FA07C86031BDC491EC850A03D3202  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	EnumDescriptorProtoU5BU5D_t6917FF8D3BC578A046E53706D9F4AA8C12C64724* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t00A32F8CDF0FA07C86031BDC491EC850A03D3202_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tB03840C90BE4F7B7FA6926E51611E7D1F634E4DF* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	EnumDescriptorProtoU5BU5D_t6917FF8D3BC578A046E53706D9F4AA8C12C64724* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	FieldDescriptorProtoU5BU5D_t1EA8FAC9BCE8021C617756D83DCB2D9F45B2447C* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tF451D8858ACF791B601F5A116162114BF9B59F31* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	FieldDescriptorProtoU5BU5D_t1EA8FAC9BCE8021C617756D83DCB2D9F45B2447C* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct RepeatedField_1_tC71BBCB23642B3126ADFDD7AAD03AE3F31B9D191  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	MethodDescriptorProtoU5BU5D_tD7BCC323C2852F9898D3D678465A31944B7D9859* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tC71BBCB23642B3126ADFDD7AAD03AE3F31B9D191_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tEED32E7A74D9CC1BD43F3FAB4996B3600BEF189F* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	MethodDescriptorProtoU5BU5D_tD7BCC323C2852F9898D3D678465A31944B7D9859* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t5E1EB72F85000EFBD87680B0BDAD112A08F820BF  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t5E1EB72F85000EFBD87680B0BDAD112A08F820BF_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct RepeatedField_1_tF287D0133CB00422E32F7C0FC98D7FDDB3355C29  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	OneofDescriptorProtoU5BU5D_tD122C7DAACE73733359926403F79B922077CDCB6* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tF287D0133CB00422E32F7C0FC98D7FDDB3355C29_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t412E7B930A56516A2C74C18A3205E9DB569B4964* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	OneofDescriptorProtoU5BU5D_tD122C7DAACE73733359926403F79B922077CDCB6* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ExtensionRangeU5BU5D_t449E15FF46A78CABCB0A9E3D4BDC287255FFA76F* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t9307B334BFD7D4D3F50ECB8C3DEE51C7D845D197* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ExtensionRangeU5BU5D_t449E15FF46A78CABCB0A9E3D4BDC287255FFA76F* ___EmptyArray_1;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.CustomOptions
struct CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.Reflection.CustomOptions::values
	RuntimeObject* ___values_1;
};

struct CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_StaticFields
{
	// System.Object[] Google.Protobuf.Reflection.CustomOptions::EmptyParameters
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyParameters_0;
};

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::<File>k__BackingField
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___U3CFileU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.IDescriptor> Google.Protobuf.Reflection.DescriptorPool::descriptorsByName
	RuntimeObject* ___descriptorsByName_0;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.DescriptorPool::fieldsByNumber
	RuntimeObject* ___fieldsByNumber_1;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.DescriptorPool::enumValuesByNumber
	RuntimeObject* ___enumValuesByNumber_2;
	// System.Collections.Generic.HashSet`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.DescriptorPool::dependencies
	HashSet_1_t0822F05CEA8EE5A834305FBD98088203956612D6* ___dependencies_3;
};

struct DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0_StaticFields
{
	// System.Text.RegularExpressions.Regex Google.Protobuf.Reflection.DescriptorPool::ValidationRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___ValidationRegex_4;
};

// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.DescriptorProto::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.DescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::field_
	RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5* ___field__7;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::extension_
	RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5* ___extension__10;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::nestedType_
	RepeatedField_1_tF209BB319A301B92F3E31BA7A80A39A58D23C0A7* ___nestedType__13;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::enumType_
	RepeatedField_1_t00A32F8CDF0FA07C86031BDC491EC850A03D3202* ___enumType__16;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::extensionRange_
	RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5* ___extensionRange__19;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::oneofDecl_
	RepeatedField_1_tF287D0133CB00422E32F7C0FC98D7FDDB3355C29* ___oneofDecl__22;
	// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.DescriptorProto::options_
	MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* ___options__24;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange> Google.Protobuf.Reflection.DescriptorProto::reservedRange_
	RepeatedField_1_tB139D86D35F1E3D396D17C818A0B34356C3CA4C3* ___reservedRange__27;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.DescriptorProto::reservedName_
	RepeatedField_1_t963BBFCD175C5A89CE2BA88CB13C78A3A975B30C* ___reservedName__30;
};

struct DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_parser
	MessageParser_1_t5FA6F892898D0A9760E63D75B580538B9B1AB6E6* ____parser_0;
	// System.String Google.Protobuf.Reflection.DescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_field_codec
	FieldCodec_1_t8A6F0473514E1AA66AA8A331551EC9043DC73090* ____repeated_field_codec_6;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_extension_codec
	FieldCodec_1_t8A6F0473514E1AA66AA8A331551EC9043DC73090* ____repeated_extension_codec_9;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_nestedType_codec
	FieldCodec_1_t69ED03EBD77CD245E3DCD319A3223DA6802F27CF* ____repeated_nestedType_codec_12;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_enumType_codec
	FieldCodec_1_t78E15E7206221C2EE278DF820B8BBAA08CCBA4F8* ____repeated_enumType_codec_15;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::_repeated_extensionRange_codec
	FieldCodec_1_tEA50F19956BEF0254C6ED4324B7DE0CEDAAA416E* ____repeated_extensionRange_codec_18;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_oneofDecl_codec
	FieldCodec_1_tE6F4B17A9CBAE506F3E51F34D34874CADEB40242* ____repeated_oneofDecl_codec_21;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange> Google.Protobuf.Reflection.DescriptorProto::_repeated_reservedRange_codec
	FieldCodec_1_tE24AD0BBAEACC2908959D16A393672060E1D07F2* ____repeated_reservedRange_codec_26;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.DescriptorProto::_repeated_reservedName_codec
	FieldCodec_1_t32964B033A84FE54C7607E6FB354CE02273C6297* ____repeated_reservedName_codec_29;
};

// Google.Protobuf.Reflection.EnumDescriptorProto
struct EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.EnumDescriptorProto::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.EnumDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::value_
	RepeatedField_1_tD1B494BE660D8FEE01E1CB30611021982A4069ED* ___value__7;
	// Google.Protobuf.Reflection.EnumOptions Google.Protobuf.Reflection.EnumDescriptorProto::options_
	EnumOptions_tDB2FACEB2EDB36D6E9BC9144FE6A47439158BA6D* ___options__9;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange> Google.Protobuf.Reflection.EnumDescriptorProto::reservedRange_
	RepeatedField_1_t8A4EBE6AEC71E5AB6D466CEB78FDE52E485FFC8E* ___reservedRange__12;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.EnumDescriptorProto::reservedName_
	RepeatedField_1_t963BBFCD175C5A89CE2BA88CB13C78A3A975B30C* ___reservedName__15;
};

struct EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::_parser
	MessageParser_1_t9CA24575A071F099B32C452637ED4A461AE02525* ____parser_0;
	// System.String Google.Protobuf.Reflection.EnumDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_value_codec
	FieldCodec_1_tB80DCC5ED8B475D63E397D69AC98202981482A71* ____repeated_value_codec_6;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_reservedRange_codec
	FieldCodec_1_t9D42D468FD58B645B4A2239C99B8B4890736A4B7* ____repeated_reservedRange_codec_11;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_reservedName_codec
	FieldCodec_1_t32964B033A84FE54C7607E6FB354CE02273C6297* ____repeated_reservedName_codec_14;
};

// Google.Protobuf.Extension
struct Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Extension::<FieldNumber>k__BackingField
	int32_t ___U3CFieldNumberU3Ek__BackingField_0;
};

// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>> Google.Protobuf.Reflection.ExtensionCollection::extensionsByTypeInDeclarationOrder
	RuntimeObject* ___extensionsByTypeInDeclarationOrder_0;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>> Google.Protobuf.Reflection.ExtensionCollection::extensionsByTypeInNumberOrder
	RuntimeObject* ___extensionsByTypeInNumberOrder_1;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.ExtensionCollection::<UnorderedExtensions>k__BackingField
	RuntimeObject* ___U3CUnorderedExtensionsU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.FieldAccessorBase::getValueDelegate
	Func_2_t785BD751BA3D84313491F6396FF210AC08198B2A* ___getValueDelegate_0;
	// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.FieldAccessorBase::descriptor
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___descriptor_1;
};

// Google.Protobuf.Reflection.FieldDescriptorProto
struct FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.FieldDescriptorProto::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::_hasBits0
	int32_t ____hasBits0_2;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::name_
	String_t* ___name__5;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::number_
	int32_t ___number__8;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Label Google.Protobuf.Reflection.FieldDescriptorProto::label_
	int32_t ___label__11;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type Google.Protobuf.Reflection.FieldDescriptorProto::type_
	int32_t ___type__14;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::typeName_
	String_t* ___typeName__17;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::extendee_
	String_t* ___extendee__20;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::defaultValue_
	String_t* ___defaultValue__23;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::oneofIndex_
	int32_t ___oneofIndex__26;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::jsonName_
	String_t* ___jsonName__29;
	// Google.Protobuf.Reflection.FieldOptions Google.Protobuf.Reflection.FieldDescriptorProto::options_
	FieldOptions_t898A213BF0DF06EBC457E221CA6E1789327A59D9* ___options__31;
	// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::proto3Optional_
	bool ___proto3Optional__34;
};

struct FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.FieldDescriptorProto::_parser
	MessageParser_1_t969EB4B2E6D66C5E7EE07CC4D74697D756D5D927* ____parser_0;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_4;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::NumberDefaultValue
	int32_t ___NumberDefaultValue_7;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Label Google.Protobuf.Reflection.FieldDescriptorProto::LabelDefaultValue
	int32_t ___LabelDefaultValue_10;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type Google.Protobuf.Reflection.FieldDescriptorProto::TypeDefaultValue
	int32_t ___TypeDefaultValue_13;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::TypeNameDefaultValue
	String_t* ___TypeNameDefaultValue_16;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::ExtendeeDefaultValue
	String_t* ___ExtendeeDefaultValue_19;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::DefaultValueDefaultValue
	String_t* ___DefaultValueDefaultValue_22;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::OneofIndexDefaultValue
	int32_t ___OneofIndexDefaultValue_25;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::JsonNameDefaultValue
	String_t* ___JsonNameDefaultValue_28;
	// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::Proto3OptionalDefaultValue
	bool ___Proto3OptionalDefaultValue_33;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE  : public RuntimeObject
{
	// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>> Google.Protobuf.Reflection.FileDescriptor::declarations
	Lazy_1_tD8AF1165E395AC7D0357F159CB5C037D9D7CCC10* ___declarations_0;
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_tB1E0CB59DF507DF5A27982B5707E6B5FA1D3ABDC* ___U3CProtoU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.Syntax Google.Protobuf.Reflection.FileDescriptor::<Syntax>k__BackingField
	int32_t ___U3CSyntaxU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_5;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.FileDescriptor::<Extensions>k__BackingField
	ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* ___U3CExtensionsU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_7;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_8;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9* ___U3CSerializedDataU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* ___U3CDescriptorPoolU3Ek__BackingField_10;
};

// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089  : public RuntimeObject
{
	// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_3;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Parser>k__BackingField
	MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* ___U3CParserU3Ek__BackingField_4;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<PropertyNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CPropertyNamesU3Ek__BackingField_5;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Extensions>k__BackingField
	ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* ___U3CExtensionsU3Ek__BackingField_6;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<OneofNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COneofNamesU3Ek__BackingField_7;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedTypes>k__BackingField
	GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* ___U3CNestedTypesU3Ek__BackingField_8;
	// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedEnums>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CNestedEnumsU3Ek__BackingField_9;
};

struct GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields
{
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyNames_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyCodeInfo
	GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* ___EmptyCodeInfo_1;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyExtensions
	ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* ___EmptyExtensions_2;
};

// Google.Protobuf.Collections.Lists
struct Lists_t8ABD3B3EE12EBA0BEA8272D007AA9C4DC1C88483  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.MessageOptions
struct MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MessageOptions::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions> Google.Protobuf.Reflection.MessageOptions::_extensions
	ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.MessageOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::messageSetWireFormat_
	bool ___messageSetWireFormat__6;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::noStandardDescriptorAccessor_
	bool ___noStandardDescriptorAccessor__9;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::deprecated_
	bool ___deprecated__12;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::mapEntry_
	bool ___mapEntry__15;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MessageOptions::uninterpretedOption_
	RepeatedField_1_tDBFBF8B042E7E5466A1916F3CDFE673F0394887C* ___uninterpretedOption__18;
};

struct MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MessageOptions> Google.Protobuf.Reflection.MessageOptions::_parser
	MessageParser_1_t112832657DC1670E8BCE3F2DF07C3DF9082B1695* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::MessageSetWireFormatDefaultValue
	bool ___MessageSetWireFormatDefaultValue_5;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::NoStandardDescriptorAccessorDefaultValue
	bool ___NoStandardDescriptorAccessorDefaultValue_8;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_11;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::MapEntryDefaultValue
	bool ___MapEntryDefaultValue_14;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MessageOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_tED6CCB8D70769914B70CC14AF4DD81469F7C4221* ____repeated_uninterpretedOption_codec_17;
};

// Google.Protobuf.MessageParser
struct MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE  : public RuntimeObject
{
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t6B16E310C12743E3CC6C1CDCDCB2DB7C7A6A10EA* ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.MessageParser::<Extensions>k__BackingField
	ExtensionRegistry_t61FF36E268D47D66D371DB4A40014D55AF9F2B83* ___U3CExtensionsU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.MethodDescriptorProto
struct MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MethodDescriptorProto::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// System.Int32 Google.Protobuf.Reflection.MethodDescriptorProto::_hasBits0
	int32_t ____hasBits0_2;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::name_
	String_t* ___name__5;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::inputType_
	String_t* ___inputType__8;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::outputType_
	String_t* ___outputType__11;
	// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptorProto::options_
	MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* ___options__13;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::clientStreaming_
	bool ___clientStreaming__16;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::serverStreaming_
	bool ___serverStreaming__19;
};

struct MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.MethodDescriptorProto::_parser
	MessageParser_1_tBC234CF2FD62C40A99B0414B937DC3AFDDCC3ED2* ____parser_0;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_4;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::InputTypeDefaultValue
	String_t* ___InputTypeDefaultValue_7;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::OutputTypeDefaultValue
	String_t* ___OutputTypeDefaultValue_10;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::ClientStreamingDefaultValue
	bool ___ClientStreamingDefaultValue_15;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::ServerStreamingDefaultValue
	bool ___ServerStreamingDefaultValue_18;
};

// Google.Protobuf.Reflection.MethodOptions
struct MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MethodOptions::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions> Google.Protobuf.Reflection.MethodOptions::_extensions
	ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.MethodOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.MethodOptions::deprecated_
	bool ___deprecated__6;
	// Google.Protobuf.Reflection.MethodOptions/Types/IdempotencyLevel Google.Protobuf.Reflection.MethodOptions::idempotencyLevel_
	int32_t ___idempotencyLevel__9;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MethodOptions::uninterpretedOption_
	RepeatedField_1_tDBFBF8B042E7E5466A1916F3CDFE673F0394887C* ___uninterpretedOption__12;
};

struct MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodOptions> Google.Protobuf.Reflection.MethodOptions::_parser
	MessageParser_1_tFA16943B54136843BD5DA3E49410D17EC2BFE234* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.MethodOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_5;
	// Google.Protobuf.Reflection.MethodOptions/Types/IdempotencyLevel Google.Protobuf.Reflection.MethodOptions::IdempotencyLevelDefaultValue
	int32_t ___IdempotencyLevelDefaultValue_8;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MethodOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_tED6CCB8D70769914B70CC14AF4DD81469F7C4221* ____repeated_uninterpretedOption_codec_11;
};

// Google.Protobuf.Reflection.OneofAccessor
struct OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.OneofAccessor::caseDelegate
	Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* ___caseDelegate_0;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.OneofAccessor::clearDelegate
	Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* ___clearDelegate_1;
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::<Descriptor>k__BackingField
	OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___U3CDescriptorU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.OneofDescriptorProto
struct OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.OneofDescriptorProto::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.OneofDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptorProto::options_
	OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* ___options__6;
};

struct OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.OneofDescriptorProto::_parser
	MessageParser_1_tEF86B3CC68FAB1E6F1A199075934867448AE7116* ____parser_0;
	// System.String Google.Protobuf.Reflection.OneofDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
};

// Google.Protobuf.Reflection.OneofOptions
struct OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.OneofOptions::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions> Google.Protobuf.Reflection.OneofOptions::_extensions
	ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD* ____extensions_2;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.OneofOptions::uninterpretedOption_
	RepeatedField_1_tDBFBF8B042E7E5466A1916F3CDFE673F0394887C* ___uninterpretedOption__5;
};

struct OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofOptions> Google.Protobuf.Reflection.OneofOptions::_parser
	MessageParser_1_tC478EED547932DE4663B1EDFFCAF1BEAFC587A79* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.OneofOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_tED6CCB8D70769914B70CC14AF4DD81469F7C4221* ____repeated_uninterpretedOption_codec_4;
};

// Google.Protobuf.Reflection.PackageDescriptor
struct PackageDescriptor_tFB3A45AF2F30CCCFBF120560E6BABC4009BC5DCC  : public RuntimeObject
{
	// System.String Google.Protobuf.Reflection.PackageDescriptor::name
	String_t* ___name_0;
	// System.String Google.Protobuf.Reflection.PackageDescriptor::fullName
	String_t* ___fullName_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.PackageDescriptor::file
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file_2;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Google.Protobuf.Compatibility.PropertyInfoExtensions
struct PropertyInfoExtensions_t8A5F3820E41FA6B2CDACD20B4972DBEB93122BC1  : public RuntimeObject
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers
struct ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C  : public RuntimeObject
{
};

struct ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
	// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
};

// Google.Protobuf.Reflection.ReflectionUtil
struct ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7  : public RuntimeObject
{
};

struct ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_StaticFields
{
	// System.Type[] Google.Protobuf.Reflection.ReflectionUtil::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::<CanConvertEnumFuncToInt32Func>k__BackingField
	bool ___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1;
};

// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.ServiceDescriptorProto::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::method_
	RepeatedField_1_tC71BBCB23642B3126ADFDD7AAD03AE3F31B9D191* ___method__7;
	// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptorProto::options_
	ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* ___options__9;
};

struct ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::_parser
	MessageParser_1_t53D39F0BA5D22AF6A98DBD7729D0A7A92DE3DD5A* ____parser_0;
	// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::_repeated_method_codec
	FieldCodec_1_t88C924349B243F55A69D191F70DA31DFD425437D* ____repeated_method_codec_6;
};

// Google.Protobuf.Reflection.ServiceOptions
struct ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.ServiceOptions::_unknownFields
	UnknownFieldSet_tED9A7C46881B7BE51FD8BFFBCB6869869F175726* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions> Google.Protobuf.Reflection.ServiceOptions::_extensions
	ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.ServiceOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.ServiceOptions::deprecated_
	bool ___deprecated__6;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.ServiceOptions::uninterpretedOption_
	RepeatedField_1_tDBFBF8B042E7E5466A1916F3CDFE673F0394887C* ___uninterpretedOption__9;
};

struct ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceOptions> Google.Protobuf.Reflection.ServiceOptions::_parser
	MessageParser_1_tD176E66F44690B9E2E7527A71DE9DB0BC8537970* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.ServiceOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_5;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.ServiceOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_tED6CCB8D70769914B70CC14AF4DD81469F7C4221* ____repeated_uninterpretedOption_codec_8;
};

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

// Google.Protobuf.Compatibility.TypeExtensions
struct TypeExtensions_tFB73851601FF70AD61E458C4682130E2F1CE5B86  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry::fullNameToMessageMap
	Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* ___fullNameToMessageMap_1;
};

struct TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::<Empty>k__BackingField
	TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* ___U3CEmptyU3Ek__BackingField_0;
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

// Google.Protobuf.Reflection.FileDescriptor/<>c
struct U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8  : public RuntimeObject
{
};

struct U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor/<>c Google.Protobuf.Reflection.FileDescriptor/<>c::<>9
	U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.FileDescriptor,System.String> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__9_0
	Func_2_tFE6913B659056A3834DC059FD8D3F9E0F868E6D8* ___U3CU3E9__9_0_1;
	// System.Func`2<Google.Protobuf.Reflection.GeneratedClrTypeInfo,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__53_0
	Func_2_tFF4BC3C8C8CB2ADD2EEEFD854F485950A718F3CF* ___U3CU3E9__53_0_2;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__54_0
	Func_2_t9105316D0546BED59361380E484B9659F940DBB5* ___U3CU3E9__54_0_3;
	// System.Func`2<Google.Protobuf.Extension,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__54_1
	Func_2_t77887A818C394A733AE3309981BD7654370D785C* ___U3CU3E9__54_1_4;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__55_0
	Func_2_t9105316D0546BED59361380E484B9659F940DBB5* ___U3CU3E9__55_0_5;
	// System.Func`2<Google.Protobuf.Extension,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__55_1
	Func_2_t77887A818C394A733AE3309981BD7654370D785C* ___U3CU3E9__55_1_6;
};

// Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD51D17497E1120CEB50EB6E5239849ED5F2C3E96  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<>4__this
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___U3CU3E4__this_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::generatedCodeInfo
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* ___generatedCodeInfo_1;
};

// Google.Protobuf.Reflection.MessageDescriptor/<>c
struct U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59  : public RuntimeObject
{
};

struct U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_StaticFields
{
	// Google.Protobuf.Reflection.MessageDescriptor/<>c Google.Protobuf.Reflection.MessageDescriptor/<>c::<>9
	U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32> Google.Protobuf.Reflection.MessageDescriptor/<>c::<>9__5_4
	Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* ___U3CU3E9__5_4_1;
};

// Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::file
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file_0;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<>4__this
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___U3CU3E4__this_1;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::generatedCodeInfo
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* ___generatedCodeInfo_2;
};

// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43  : public RuntimeObject
{
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::messageDescriptor
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageDescriptor_0;
};

// Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C  : public RuntimeObject
{
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::descriptor
	OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___descriptor_0;
};

// Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::index
	int32_t ___index_0;
};

// Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::file
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file_0;
	// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::<>4__this
	ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* ___U3CU3E4__this_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c
struct U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9  : public RuntimeObject
{
};

struct U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_StaticFields
{
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<>9
	U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<>9__3_4
	Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* ___U3CU3E9__3_4_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37  : public RuntimeObject
{
	// Google.Protobuf.Reflection.SingleFieldAccessor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<>4__this
	SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* ___U3CU3E4__this_0;
	// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::descriptor
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___descriptor_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13  : public RuntimeObject
{
	// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::oneofAccessor
	OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* ___oneofAccessor_0;
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0 Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* ___CSU24U3CU3E8__locals1_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2
struct U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8  : public RuntimeObject
{
	// System.Object Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::defaultValue
	RuntimeObject* ___defaultValue_0;
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0 Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* ___CSU24U3CU3E8__locals2_1;
};

// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF  : public RuntimeObject
{
};

struct U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry/<>c Google.Protobuf.Reflection.TypeRegistry/<>c::<>9
	U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.TypeRegistry/<>c::<>9__9_0
	Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* ___U3CU3E9__9_0_1;
};

// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry/Builder::types
	Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* ___types_0;
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.TypeRegistry/Builder::fileDescriptorNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___fileDescriptorNames_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t7CFFB2DC95166766D08FA60AF956FE0DB3068E41 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t84FF8D0E1F7819719F5EC631CAFE186B8074F613_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t84FF8D0E1F7819719F5EC631CAFE186B8074F613_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t84FF8D0E1F7819719F5EC631CAFE186B8074F613_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t84FF8D0E1F7819719F5EC631CAFE186B8074F613_marshaled_com_define
#define ReadOnlyMemory_1_t84FF8D0E1F7819719F5EC631CAFE186B8074F613_marshaled_com_define
struct ReadOnlyMemory_1_t84FF8D0E1F7819719F5EC631CAFE186B8074F613_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Google.Protobuf.Reflection.EnumDescriptor
struct EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F  : public DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA
{
	// Google.Protobuf.Reflection.EnumDescriptorProto Google.Protobuf.Reflection.EnumDescriptor::proto
	EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* ___proto_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.EnumDescriptor::containingType
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___containingType_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.EnumDescriptor::values
	RuntimeObject* ___values_5;
	// System.Type Google.Protobuf.Reflection.EnumDescriptor::clrType
	Type_t* ___clrType_6;
};

// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA  : public DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA
{
	// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FieldDescriptor::enumType
	EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F* ___enumType_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::extendeeType
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___extendeeType_4;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::messageType
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageType_5;
	// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::fieldType
	int32_t ___fieldType_6;
	// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::accessor
	RuntimeObject* ___accessor_7;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___U3CContainingTypeU3Ek__BackingField_8;
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::<ContainingOneof>k__BackingField
	OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___U3CContainingOneofU3Ek__BackingField_9;
	// System.String Google.Protobuf.Reflection.FieldDescriptor::<JsonName>k__BackingField
	String_t* ___U3CJsonNameU3Ek__BackingField_10;
	// System.String Google.Protobuf.Reflection.FieldDescriptor::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::<Proto>k__BackingField
	FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* ___U3CProtoU3Ek__BackingField_12;
	// Google.Protobuf.Extension Google.Protobuf.Reflection.FieldDescriptor::<Extension>k__BackingField
	Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* ___U3CExtensionU3Ek__BackingField_13;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Google.Protobuf.Reflection.MapFieldAccessor
struct MapFieldAccessor_t74970120369F2E74AE07328AF2F890BEBBC7A39C  : public FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE
{
};

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7  : public DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.MessageDescriptor::extensionSetIsInitialized
	Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* ___extensionSetIsInitialized_7;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* ___U3CProtoU3Ek__BackingField_8;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_9;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* ___U3CParserU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___U3CContainingTypeU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* ___U3CFieldsU3Ek__BackingField_12;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::<Extensions>k__BackingField
	ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* ___U3CExtensionsU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_15;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_16;
	// System.Int32 Google.Protobuf.Reflection.MessageDescriptor::<RealOneofCount>k__BackingField
	int32_t ___U3CRealOneofCountU3Ek__BackingField_17;
};

struct MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.MethodDescriptor
struct MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2  : public DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA
{
	// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::proto
	MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* ___proto_3;
	// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.MethodDescriptor::service
	ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* ___service_4;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::inputType
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___inputType_5;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::outputType
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___outputType_6;
};

// Google.Protobuf.Reflection.OneofDescriptor
struct OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C  : public DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA
{
	// Google.Protobuf.Reflection.OneofDescriptorProto Google.Protobuf.Reflection.OneofDescriptor::proto
	OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* ___proto_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::containingType
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___containingType_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::fields
	RuntimeObject* ___fields_5;
	// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::accessor
	OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* ___accessor_6;
	// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::<IsSynthetic>k__BackingField
	bool ___U3CIsSyntheticU3Ek__BackingField_7;
};

// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Google.Protobuf.Reflection.OriginalNameAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::<PreferredAlias>k__BackingField
	bool ___U3CPreferredAliasU3Ek__BackingField_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.RepeatedFieldAccessor
struct RepeatedFieldAccessor_t92A84CE33826C08ADD4115FAFC4FCAFB989EC065  : public FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE
{
};

// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150  : public DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA
{
	// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::proto
	ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* ___proto_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::methods
	RuntimeObject* ___methods_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA  : public FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE
{
	// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.SingleFieldAccessor::setValueDelegate
	Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2* ___setValueDelegate_2;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.SingleFieldAccessor::clearDelegate
	Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* ___clearDelegate_3;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.SingleFieldAccessor::hasDelegate
	Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* ___hasDelegate_4;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_tE751EAE5DE75366B1D7948FE11EC39804BFA95DA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tE751EAE5DE75366B1D7948FE11EC39804BFA95DA__padding[44];
	};
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl
struct BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D  : public EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl
struct BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0  : public EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl
struct BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59  : public EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl
struct BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4  : public EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF4AD1452FF29CE9241494F9FD7103CF3AFAE3426  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF4AD1452FF29CE9241494F9FD7103CF3AFAE3426_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::1EFF1891409D680B30DE202BD7A16F945ED09F02601C0E7B90FD917BE1162300
	__StaticArrayInitTypeSizeU3D44_tE751EAE5DE75366B1D7948FE11EC39804BFA95DA ___1EFF1891409D680B30DE202BD7A16F945ED09F02601C0E7B90FD917BE1162300_0;
};

// Google.Protobuf.ByteString
struct ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9  : public RuntimeObject
{
	// System.ReadOnlyMemory`1<System.Byte> Google.Protobuf.ByteString::bytes
	ReadOnlyMemory_1_t7CFFB2DC95166766D08FA60AF956FE0DB3068E41 ___bytes_1;
};

struct ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_StaticFields
{
	// Google.Protobuf.ByteString Google.Protobuf.ByteString::empty
	ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9* ___empty_0;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.Protobuf.Reflection.DescriptorValidationException
struct DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F  : public Exception_t
{
	// System.String Google.Protobuf.Reflection.DescriptorValidationException::name
	String_t* ___name_18;
	// System.String Google.Protobuf.Reflection.DescriptorValidationException::description
	String_t* ___description_19;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>
struct Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Boolean>
struct Func_2_tA2EE063C789FC68882F4C9E821082F043939B622  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Int32>
struct Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t785BD751BA3D84313491F6396FF210AC08198B2A  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>
struct IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>
struct IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>
struct IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>
struct IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>
struct IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F  : public RuntimeArray
{
	ALIGN_FIELD (8) GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* m_Items[1];

	inline GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD  : public RuntimeArray
{
	ALIGN_FIELD (8) Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* m_Items[1];

	inline Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.FieldDescriptor[]
struct FieldDescriptorU5BU5D_tB51FB7EE15A94B1E2082AA10AD4C5D048B805999  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* m_Items[1];

	inline FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE  : public RuntimeArray
{
	ALIGN_FIELD (8) FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* m_Items[1];

	inline FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B  : public RuntimeArray
{
	ALIGN_FIELD (8) MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* m_Items[1];

	inline MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedConverter_2__ctor_m78557495F2F807EE82ACD5F6B67F4E08423E1FA0_gshared (IndexedConverter_2_t0DF76C7B43E70D6E1F87C2373973FD20062045B2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<System.Object,System.Object>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m93A2D97093B394848FBCCBEF9ECA0B47C1E39838_gshared (RuntimeObject* ___input0, IndexedConverter_2_t0DF76C7B43E70D6E1F87C2373973FD20062045B2* ___converter1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___keySelector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m96973475803B2B44481AF891D0B2AB063B5D4CDA_gshared (ReadOnlyDictionary_2_tA5E205F3BBEB6B67DBCA3C316E87352486DFF1C2* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m2A023123A5F1A9B9A60A91E11441D15531AFE59E_gshared_inline (RepeatedField_1_t5E1EB72F85000EFBD87680B0BDAD112A08F820BF* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorPool_FindSymbol_TisRuntimeObject_mDCE1DA126DDA0DC487452C5FAE416C33EC4AFCAA_gshared (DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* __this, String_t* ___fullName0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<System.Object>::get_ValuesByNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ExtensionSet_1_get_ValuesByNumber_mD45E6E78F59C43612756A04B5304EAA04B2D0D06_gshared_inline (ExtensionSet_1_t418209FE573CFF1C92387191095EBEECA1904C31* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoPreconditions_CheckNotNull_TisRuntimeObject_m0CEB053ABBB3904E65F89A374BA27D443A3743F2_gshared (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisRuntimeObject_m3B834BA6DC59723CD54864C56DE76296E5832F3B_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34C472C904B4130714367720101F6D3D8DDEE60A_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDEE358EF9748B7400732EC2B173AF58B24575506_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC12AEA11FD90055CF63EA23EA672CC6BDCF408F5_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5C258402CEA38F96938B34CB7848772BBA1CECD_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8571185C2A8895AE12CEF05633A270FEDBF6EE1C_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Double>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAE63C2CE6181EC1D574229EEAB434C90F000402A_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD861A25B270D5A4D4B40BC4628325D166A5511FC_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2AF7576C557A94559D8245CE45FC3F55809A2607_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m1984E7D21EA05A037FD10A5A49CCE7CE2C8EAFB7_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_m721D251AA6FB5CB6A729695C6F7F6A1E85115CBD_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA80609F51D877AE255E0A2EB2AA8B70196D3AFAC_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mC9B1A97904B8269F01830BAF4D04D5C968F76C82_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Double>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mFB0BD62BBC79647D97DE60F653AB81596EEF17D0_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Boolean>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mC3A4F9EF72A275B8CD8A89EF88BC221DF3756156_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m10A14B5AD76DF5EAEA890778D6FD62325B076A36_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_gshared (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_gshared (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* GeneratedClrTypeInfo_get_NestedTypes_mEAA1B0965ECC35A10EB59BB7B846C7762624A54A_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.ctor(Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__ctor_mA7BBE1F5C4E3EFC10FAA3BAA2247D1D8FFCF774A (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___parent2, int32_t ___typeIndex3, GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* ___generatedCodeInfo4, const RuntimeMethod* method) ;
// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedEnums()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mF617D606C0482D67F62FF3439F65D19EE492995B_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.EnumDescriptor::.ctor(Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumDescriptor__ctor_m6E8306614E5BAD1C545EDEA4B3609B390EBB2D32 (EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F* __this, EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___parent2, int32_t ___index3, Type_t* ___clrType4, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::.ctor(Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m757DB0E03CF2C6BBF11E35669F8C1E17A80F0880 (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m21FD0FDA53C5DE312932D82C727A3D476E63AE8E (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Name_m2F4F4DA47CD49256D7D89B1A38CCA603E980BAED (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Extension Google.Protobuf.Reflection.FieldDescriptor::get_Extension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* FieldDescriptor_get_Extension_m2DE8F4106521D0B7D56F12B7986647643E0D14F5_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::set_ClrType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m46FD53A0242D57938395049E1FBCAB5D13C4FB3C_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mE3C25B862B8C93EE18056638F4AB11A0C75FF5D5 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, Type_t* ___clrType0, MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* ___extensions5, GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* ___nestedTypes6, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mC27E3B9E2B4B4E51B0C3C208C48428F60ED79E48 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, Type_t* ___clrType0, MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* ___nestedTypes5, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldAccessorBase::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldAccessorBase__ctor_m7DB378293BBD3D02938F8C65EF2AE5D4F494FCA7 (FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE* __this, PropertyInfo_t* ___property0, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___descriptor1, const RuntimeMethod* method) ;
// System.Object Google.Protobuf.Reflection.FieldAccessorBase::GetValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldAccessorBase_GetValue_m68EB618FFF7E0F5D82CEDF61FE189E2AA2F2F2ED (FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m99AB077EB72D816D2771E5BF1E3F52792297196E (U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.DescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptorProto_get_Name_m83321B9790668DBDD9D61C47135029205BD273D4 (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::ComputeFullName(Google.Protobuf.Reflection.MessageDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_ComputeFullName_mFF8D5D9FDCE3A8A1B822DAE448206BD316DD4E59 (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___parent0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorBase::.ctor(Google.Protobuf.Reflection.FileDescriptor,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorBase__ctor_m50E6EE956FBF41B860838D3A7990D8D9973BE6BB (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file0, String_t* ___fullName1, int32_t ___index2, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* GeneratedClrTypeInfo_get_Parser_mE7F916BAC268F60F771E7FC246C17AF302759F32_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) ;
// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_ClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m085C15ABD5E9BA7EC3D12018B1F756477D5D82C3_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_OneofDecl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tF287D0133CB00422E32F7C0FC98D7FDDB3355C29* DescriptorProto_get_OneofDecl_m2523293B939B786975C994259A4D86073A538142_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m2F02D437CE09DA57B3D1BB6D493C82C2306A8589 (IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m78557495F2F807EE82ACD5F6B67F4E08423E1FA0_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59_TisOneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C_m17521AD6CB366ED9BB03C7185201BC6BECA384EC (RuntimeObject* ___input0, IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m93A2D97093B394848FBCCBEF9ECA0B47C1E39838_gshared)(___input0, ___converter1, method);
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_Oneofs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_mB16A9A23DA6631CA3CEADDCB2BD16F8E2D4E5CA8_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::get_IsSynthetic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_mF41242B22BDA563D27858560A7EA7A5B455FA408_inline (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_NestedType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tF209BB319A301B92F3E31BA7A80A39A58D23C0A7* DescriptorProto_get_NestedType_mBD2768EE2D93EDDBF948D0C63CE9D3E14995CF2E_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m4F4AF7E331904C45D47BC1A1E1E6DF8DEE2BD5C8 (IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m78557495F2F807EE82ACD5F6B67F4E08423E1FA0_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_m22B4F33FF04FAB42478A81FD12C68A11648056F4 (RuntimeObject* ___input0, IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m93A2D97093B394848FBCCBEF9ECA0B47C1E39838_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_EnumType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t00A32F8CDF0FA07C86031BDC491EC850A03D3202* DescriptorProto_get_EnumType_mB67D0691CCAF37E007516CBB2A1ADA27116CD8AC_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m90D3DCB28F4C1DC1CF13414EB14D00C1333ABC0E (IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m78557495F2F807EE82ACD5F6B67F4E08423E1FA0_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1_TisEnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_m0976EBC18331C412F8C66734963071FDF97B96CB (RuntimeObject* ___input0, IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m93A2D97093B394848FBCCBEF9ECA0B47C1E39838_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Extensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* GeneratedClrTypeInfo_get_Extensions_mBCC7C6FB0E6607288206E83304DA57F59042817C_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ExtensionCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Extension[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionCollection__ctor_mECC3C651D77AB1AA352C03C5C9D3CFA688F132F3 (ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___message0, ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* ___extensions1, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_Field()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5* DescriptorProto_get_Field_m9BAE0C869C27DA89F4D1DD5FCE9F446A9240EEE8_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m31A001FF2F4F787EB8A0186F27EF8D502EDAA521 (IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m78557495F2F807EE82ACD5F6B67F4E08423E1FA0_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m2F849B49A46AA775E949CA9B84969ED9913A7106 (RuntimeObject* ___input0, IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m93A2D97093B394848FBCCBEF9ECA0B47C1E39838_gshared)(___input0, ___converter1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB70FD26CB06228A0C28FD37D462137482CD0EEBB (Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m14DB8134F5FD9077592FB974A4CC384FBA337884 (RuntimeObject* ___source0, Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared)(___source0, ___keySelector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Google.Protobuf.Reflection.FieldDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>)
inline FieldDescriptorU5BU5D_tB51FB7EE15A94B1E2082AA10AD4C5D048B805999* Enumerable_ToArray_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m092DF0DAC1ED1EF9AB55A21B76308B1EAF27A1FB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  FieldDescriptorU5BU5D_tB51FB7EE15A94B1E2082AA10AD4C5D048B805999* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m8A5D75400BF356B09A1A98A65AFB190540B457AA (ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___list0, method);
}
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::CreateJsonFieldMap(System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248* MessageDescriptor_CreateJsonFieldMap_m9B130E57649E70D3B6023CC4C5A967C175E01C44 (RuntimeObject* ___fields0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::get_DescriptorPool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorPool::AddSymbol(Google.Protobuf.Reflection.IDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorPool_AddSymbol_m65899A264C9802C168B3467A39E9CE739E54AED4 (DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* __this, RuntimeObject* ___descriptor0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldCollection__ctor_m78B836EFA4E9E25DD277F86105A39C985827D9D8 (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::.ctor()
inline void Dictionary_2__ctor_m3635981B5DF287B3653F883D7773C887714EBD9F (Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD2B059033566AE1FA3C88BABABABF721A6D3F2C4 (Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515* __this, String_t* ___key0, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515*, String_t*, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String Google.Protobuf.Reflection.FieldDescriptor::get_JsonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_mF42F803F807761B4010F1E4F87D58D35F1F9AFB3_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m051A72BDFA52662434668C9A560BE709EC21277E (ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m96973475803B2B44481AF891D0B2AB063B5D4CDA_gshared)(__this, ___dictionary0, method);
}
// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* MessageDescriptor_get_Proto_m779C4673C5386BCCACCB9A316D5BA640BE2ED9AC_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_EnumTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_m2CBC54657E71C6AD89AFC580DEDE4A8AE99AE7CD_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::get_ExtensionRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5* DescriptorProto_get_ExtensionRange_m5E54458AF9FDFBD7D3B8E436F52CFA2920D17D87_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>::get_Count()
inline int32_t RepeatedField_1_get_Count_m996C20735872A4AB37AEE60F8DC614E2DCFC343D_inline (RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5*, const RuntimeMethod*))RepeatedField_1_get_Count_m2A023123A5F1A9B9A60A91E11441D15531AFE59E_gshared_inline)(__this, method);
}
// System.Type Google.Protobuf.Reflection.MessageDescriptor::get_ClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateIsInitializedCaller(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* ReflectionUtil_CreateIsInitializedCaller_mBAA937D90926232F7991625F93D6A049AE62A543 (Type_t* ___msg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Google.Protobuf.IMessage,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m87A231CCC5E61EB0DC4EE13E05F2870275C33ED1_inline (Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tA2EE063C789FC68882F4C9E821082F043939B622*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::get_File()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Package()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Package_mEB4B502CDF7B14525E91D1C925E1095C725C3613 (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.String Google.Protobuf.Reflection.DescriptorBase::get_FullName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.FieldDescriptor>(System.String)
inline FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* DescriptorPool_FindSymbol_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m7430AB9F712873898A4FB5E96168511EDC5617AE (DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* (*) (DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_mDCE1DA126DDA0DC487452C5FAE416C33EC4AFCAA_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.DescriptorPool::FindFieldByNumber(Google.Protobuf.Reflection.MessageDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* DescriptorPool_FindFieldByNumber_m8F739D215D83CB42CEF1F5CB01D8A76A8980E5C1 (DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageDescriptor0, int32_t ___number1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.DescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* DescriptorProto_get_Options_m95317D9A7FBB580C45BCF35B64BE133AB0F0FE7A_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>::get_ValuesByNumber()
inline Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ExtensionSet_1_get_ValuesByNumber_m5B58A7B346088BDEDF7260D80B37C63E8D5C88CC_inline (ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* (*) (ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_mD45E6E78F59C43612756A04B5304EAA04B2D0D06_gshared_inline)(__this, method);
}
// System.Void Google.Protobuf.Reflection.CustomOptions::.ctor(System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomOptions__ctor_m74D934C4D6222CE076344A99716ED295856984F6 (CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* __this, RuntimeObject* ___values0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.MessageOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* MessageOptions_Clone_m2514F727652D1791C0AD08EDFF168856B2364900 (MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor_CrossLink_m1F876353B847FEB4DE1E08A398095F7152C839C1 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor_CrossLink_m5D422D9713A22EFFDEEDE1B64EFE0B1F4E9BFC26 (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor_CrossLink_m7387A8BDAEDF932A86DD73FAF63C6AD9C043C6FC (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::get_Extensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* MessageDescriptor_get_Extensions_m1B1B0638B9170EBEFAC0F8D47F80A60A851B8534_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ExtensionCollection::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionCollection_CrossLink_m157A007C3574C57B085FB292D769AC9B3115F4A7 (ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* MessageDescriptor_FindFieldByNumber_mAD2978F829E16C698460EBEDB98F967B3A11C343 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* MessageDescriptor_FindFieldByName_m3ABC5B428BC78FCF4CE3C6F16F5D90D13381D177 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_OneofNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_m01124F21B145BCB887B12BCB3B777F9DD4235136_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor::.ctor(Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor__ctor_mBF9F3A561FEF1426043E9553C84922DB3897379F (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___parent2, int32_t ___index3, String_t* ___clrName4, const RuntimeMethod* method) ;
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_PropertyNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m0A171A055701463503A3E71A12A5AC6F9D7C7905_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldDescriptor::.ctor(Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String,Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor__ctor_m23379FC95B9E5CE96A3A8679F0930B54BC4C5F40 (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___parent2, int32_t ___index3, String_t* ___propertyName4, Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* ___extension5, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0AC648C0EA3DC2C3A2A36E006E91EBDFAF212737 (U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptor::get_FieldNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldNumber_m28F562DCEA5E9D9BBC6FE025DD14CFDC9AF929D2 (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::get_ClientStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptorProto_get_ClientStreaming_m00910C9E9CBACB35BA25E852634E66E44986FDA2 (MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::get_ServerStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptorProto_get_ServerStreaming_mE0CF5F1887A746CAEDD42CEC36A56D7055F84741 (MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D_inline (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* MethodDescriptorProto_get_Options_m7FC17F749CD5902F60B849DF799B467801D7FCAF_inline (MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>::get_ValuesByNumber()
inline Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ExtensionSet_1_get_ValuesByNumber_m138B67156210A111A7D2A6F69F98883417203488_inline (ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* (*) (ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_mD45E6E78F59C43612756A04B5304EAA04B2D0D06_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* MethodOptions_Clone_m830D5835156E465D3F407B2D9C5A3F75FD6D5DB6 (MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_Name_mDEDC55A12F8C32625EE56D015089EB626B36EB83 (MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_InputType_mF54DC0A01F334AA05815DF0B91368B775ACBCF4B (MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.IDescriptor Google.Protobuf.Reflection.DescriptorPool::LookupSymbol(System.String,Google.Protobuf.Reflection.IDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorPool_LookupSymbol_mFEA397123107975080225FA100AA4E376334DC18 (DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* __this, String_t* ___name0, RuntimeObject* ___relativeTo1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorValidationException::.ctor(Google.Protobuf.Reflection.IDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorValidationException__ctor_mDE72DEF92A96D18B5943DC20067F0E4F5FDA5FFC (DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F* __this, RuntimeObject* ___problemDescriptor0, String_t* ___description1, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_OutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_OutputType_m030B2CA752DECA9B8C660845448F938E1587FEBB (MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageInt32(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* ReflectionUtil_CreateFuncIMessageInt32_m5C257ECCBAA68093D516AA5E03B62AF53359E02F (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessage(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* ReflectionUtil_CreateActionIMessage_mB94A9057512CE58287B5CDF566E0763D8F3D30A0 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor::.ctor(Google.Protobuf.Reflection.OneofDescriptor,System.Func`2<Google.Protobuf.IMessage,System.Int32>,System.Action`1<Google.Protobuf.IMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor__ctor_mA48B83D961339C993F02BCB115483308CDEFC72C (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___descriptor0, Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* ___caseDelegate1, Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* ___clearDelegate2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m2CD9B9792301FEF2BE8FA4342CB9E4FFC1D5C330 (U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.IMessage,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m987A493E33435BFDF6E82EF97194AA90F0E1A5AB (Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<Google.Protobuf.IMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m496AD5EEDB96484BDBE697F2ACB302B3C4D399A2 (Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<Google.Protobuf.IMessage>::Invoke(T)
inline void Action_1_Invoke_mB9DEBD04AE7D255A4BE44E0B97D52F502E8362DA_inline (Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// TResult System.Func`2<Google.Protobuf.IMessage,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m04B87794947FB010157C0417E339B80E65286A97_inline (Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___arg0, method);
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::get_Descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* OneofAccessor_get_Descriptor_mFD6C7DEAEB781D21086FDD3AEA6C4E36F9D234FA_inline (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::get_ContainingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* OneofDescriptor_get_ContainingType_mEC839ED1E8839D10E689A7C7E83F405791BC001A_inline (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::get_Fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_m85369DB89C3F648BD60712088482BEE7F4F14757_inline (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::get_Accessor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_get_Accessor_mC6951F6A450F65DC83D3C00C4C624973CD665DE9_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m856F4854B5D69FE2A94E9807FEBFDFC7A37DEBE4 (U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.OneofDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneofDescriptorProto_get_Name_mC9DC927D3A39199D1DC33833314CD47C7A6055A0 (OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m61AC8D6E3F050B04BE93477F39769A5A8FA58CB1 (Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<Google.Protobuf.Reflection.FieldDescriptorProto>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* Enumerable_FirstOrDefault_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_m23D147E06E9F4D5BF82FFD65A82D25D393DCC3D5 (RuntimeObject* ___source0, Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7* ___predicate1, const RuntimeMethod* method)
{
	return ((  FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* (*) (RuntimeObject*, Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::get_Proto3Optional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptorProto_get_Proto3Optional_mF03CAEDFB509408D266EE7CC51CD8DE22CC69044 (FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::CreateAccessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofDescriptor_CreateAccessor_m90C16A1A2D57206F178F01F487F78A2CFB63D183 (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, String_t* ___clrName0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* OneofDescriptorProto_get_Options_mAE42F8445D3082BBF07FED914E8955E6FD9E821F_inline (OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>::get_ValuesByNumber()
inline Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ExtensionSet_1_get_ValuesByNumber_mED55393806CEDEA243FAE11DE177584F0078C07C_inline (ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* (*) (ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_mD45E6E78F59C43612756A04B5304EAA04B2D0D06_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* OneofOptions_Clone_m7072ACBD8281FED355881FBDA6167A77DBF5D5CC (OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>::.ctor()
inline void List_1__ctor_m96006D302E1523071908B261B9B6EC56B80F725E (List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::get_Fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* MessageDescriptor_get_Fields_m4D22A285B857FA236321E054082857868E7152D0_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InDeclarationOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InDeclarationOrder_mF4FE1B78F895AD4D6053E8F2FB181811A67334F5 (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_ContainingOneof()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* FieldDescriptor_get_ContainingOneof_m09F61680A1EA3A6C3A6E07AB4BCB837A70DDF2AD_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>::Add(T)
inline void List_1_Add_m71824B3EEE5B25E3FCE5B1DF40C6DEE66324C292_inline (List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B* __this, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B*, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForSyntheticOneof(Google.Protobuf.Reflection.OneofDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofAccessor_ForSyntheticOneof_m5B776A233E7E7DE8D949630DB2141E954FF78DBB (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___descriptor0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_mD077C524E99EF7A3C977705217D3A88AB4DE5C13 (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForRegularOneof(Google.Protobuf.Reflection.OneofDescriptor,System.Reflection.PropertyInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofAccessor_ForRegularOneof_m2EE0C8B5E24B2F888ECD0BF742A10412100613D0 (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___descriptor0, PropertyInfo_t* ___caseProperty1, MethodInfo_t* ___clearMethod2, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::get_HasOneofIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptorProto_get_HasOneofIndex_m91E658AA5360C8EB63BD76EDF650388E9928426B (FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::get_OneofIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptorProto_get_OneofIndex_m497600A639B16746586CEB8EB664C1804060654A (FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.String>(T,System.String)
inline String_t* ProtoPreconditions_CheckNotNull_TisString_t_mD0EA4534FC262B782CD7AB66C1763CBDA60D3AC1 (String_t* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m0CEB053ABBB3904E65F89A374BA27D443A3743F2_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m4F6221B51D8A6F9A7ACD78A6FD6AB77C4EE4E1E1_inline (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_PreferredAlias(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m354F22F66E277B678216259D9E4E325D71C8291D_inline (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::CheckCanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_mFFB84B0A61F7F83CA7553B8DAB80AE36DAC35716 (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.String>()
inline void ReflectionUtil_ForceInitialize_TisString_t_m1A8DDF66AABECC7AE0ED58E521EED6B20D48ED17 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisRuntimeObject_m3B834BA6DC59723CD54864C56DE76296E5832F3B_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32>()
inline void ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34C472C904B4130714367720101F6D3D8DDEE60A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34C472C904B4130714367720101F6D3D8DDEE60A_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int64>()
inline void ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDEE358EF9748B7400732EC2B173AF58B24575506 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDEE358EF9748B7400732EC2B173AF58B24575506_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt32>()
inline void ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC12AEA11FD90055CF63EA23EA672CC6BDCF408F5 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC12AEA11FD90055CF63EA23EA672CC6BDCF408F5_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt64>()
inline void ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5C258402CEA38F96938B34CB7848772BBA1CECD (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5C258402CEA38F96938B34CB7848772BBA1CECD_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Single>()
inline void ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8571185C2A8895AE12CEF05633A270FEDBF6EE1C (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8571185C2A8895AE12CEF05633A270FEDBF6EE1C_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Double>()
inline void ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAE63C2CE6181EC1D574229EEAB434C90F000402A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAE63C2CE6181EC1D574229EEAB434C90F000402A_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Boolean>()
inline void ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD861A25B270D5A4D4B40BC4628325D166A5511FC (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD861A25B270D5A4D4B40BC4628325D166A5511FC_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int32>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2AF7576C557A94559D8245CE45FC3F55809A2607 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2AF7576C557A94559D8245CE45FC3F55809A2607_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int64>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m1984E7D21EA05A037FD10A5A49CCE7CE2C8EAFB7 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m1984E7D21EA05A037FD10A5A49CCE7CE2C8EAFB7_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt32>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_m721D251AA6FB5CB6A729695C6F7F6A1E85115CBD (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_m721D251AA6FB5CB6A729695C6F7F6A1E85115CBD_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt64>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA80609F51D877AE255E0A2EB2AA8B70196D3AFAC (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA80609F51D877AE255E0A2EB2AA8B70196D3AFAC_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Single>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mC9B1A97904B8269F01830BAF4D04D5C968F76C82 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mC9B1A97904B8269F01830BAF4D04D5C968F76C82_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Double>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mFB0BD62BBC79647D97DE60F653AB81596EEF17D0 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mFB0BD62BBC79647D97DE60F653AB81596EEF17D0_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Boolean>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mC3A4F9EF72A275B8CD8A89EF88BC221DF3756156 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mC3A4F9EF72A275B8CD8A89EF88BC221DF3756156_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<Google.Protobuf.Reflection.ReflectionUtil/SampleEnum>()
inline void ReflectionUtil_ForceInitialize_TisSampleEnum_t6A9540C415F3C8D504A46CBA3CFCE8DD55D8D968_m6C200B16A03C8CE2763FE68EC7D8E7905EF12493 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m10A14B5AD76DF5EAEA890778D6FD62325B076A36_gshared)(method);
}
// Google.Protobuf.Reflection.ReflectionUtil/SampleEnum Google.Protobuf.Reflection.ReflectionUtil::SampleEnumMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionUtil_SampleEnumMethod_m80EA32D3DC64CE83204245B2620A3A7B360F0A98 (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::GetReflectionHelper(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_GetReflectionHelper_m2706955D1B1108FDDBACDA1166D77FD6CCE7C906 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m978D6F745618B691D632E5D6E4AB8840541FC858 (Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m527D22236ABFF3A7246C72C7E0526B2838E38BE0 (U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptorProto_get_Name_mF439401AB593E352517CEE2884E025262DEA2058 (ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tC71BBCB23642B3126ADFDD7AAD03AE3F31B9D191* ServiceDescriptorProto_get_Method_m88B64CDC59201D684734EAFCEF03E4C06F44D2E4_inline (ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m375CFDDFC0F2D76FFE6E49200A74E2A54F60E930 (IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m78557495F2F807EE82ACD5F6B67F4E08423E1FA0_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_m58B48DE3EB44ADF87A3610AC95AEFAE038B082BF (RuntimeObject* ___input0, IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m93A2D97093B394848FBCCBEF9ECA0B47C1E39838_gshared)(___input0, ___converter1, method);
}
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.MethodDescriptor>(System.String)
inline MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* DescriptorPool_FindSymbol_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_mDFD273FEC4DC52BC822EE25FFE225118D95C2475 (DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* (*) (DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_mDCE1DA126DDA0DC487452C5FAE416C33EC4AFCAA_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* ServiceDescriptor_get_Proto_m5896896C9E7D11EAD3ABB9A4AE3F3E6700F57E95_inline (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* ServiceDescriptorProto_get_Options_m8EFF0ED3AFFDD887273969A22405C9A5CC3BB86F_inline (ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>::get_ValuesByNumber()
inline Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ExtensionSet_1_get_ValuesByNumber_mE6AF24960FAEFA67957A634F102D0CA7914A6FD3_inline (ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* (*) (ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_mD45E6E78F59C43612756A04B5304EAA04B2D0D06_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* ServiceOptions_Clone_m175CBCB8F2FD52817332EA2FB5E5791ADE6063D2 (ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MethodDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor_CrossLink_m446B2FEBFAD05BB9D9B16D0725FC59E28E3B3BC9 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MethodDescriptor::.ctor(Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.ServiceDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor__ctor_mA2ED5A1EB21CF65F3CBD3269D942D2FD53D46CA7 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* ___parent2, int32_t ___index3, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m731B12B9055973D225255651A8DCC2E5DA357B97 (U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2* ReflectionUtil_CreateActionIMessageObject_mA2F8141CA84E49459F0BADF97018211CA058E3AD (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::get_FieldType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mDCA85D900026448BCB79FF2527D5FDE0AA4D0F10_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.IMessage,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m893EB8F63690DAC58442EBF4DE011D53F94EDA11 (Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA2EE063C789FC68882F4C9E821082F043939B622*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_RealContainingOneof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* FieldDescriptor_get_RealContainingOneof_m1883F3E3B63AA57DEB92A5950DE915A25BFE35F6 (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m2A2642ACB68A56B4453A148453C3172B42DE478E (U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::get_Accessor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofDescriptor_get_Accessor_m95C38301E140CFAD53B6E521D0848FB3A7E0F13E_inline (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.Syntax Google.Protobuf.Reflection.FileDescriptor::get_Syntax()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FileDescriptor_get_Syntax_mF8CF977593E3229956B1C8DA8DBEE3195EB53B22_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* FieldDescriptor_get_Proto_m4EAE2A1329BED65E941509CC6C3D90C2A72A4103_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Reflection.RuntimeReflectionExtensions::GetRuntimeProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* RuntimeReflectionExtensions_GetRuntimeProperty_m8B8DEA120CC82BEDC0298B1DBFA4980AFEFB6625 (Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageBool(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* ReflectionUtil_CreateFuncIMessageBool_mDFFC1CA0EB062EB1434B99FCF442DC43FDD41F24 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.RuntimeReflectionExtensions::GetRuntimeMethod(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* RuntimeReflectionExtensions_GetRuntimeMethod_mC91D0D6D5A70AB4B5201F67718E3C5E276454C51 (Type_t* ___type0, String_t* ___name1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_mE6EA66F8719AAF6120E4774697E66619ED048CDF (U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// Google.Protobuf.ByteString Google.Protobuf.ByteString::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9* ByteString_get_Empty_m9016C16C682028C452D775AD56A157999DEFDEC7_inline (const RuntimeMethod* method) ;
// System.Void System.Action`2<Google.Protobuf.IMessage,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_mEA5EB487B5B803422964FCC7899CF6AA5BA0CC99_inline (Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.OneofAccessor::GetCaseFieldDescriptor(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* OneofAccessor_GetCaseFieldDescriptor_m5673B212FE85FD3908936C97DCBF25C54CFF01F1 (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor_Clear_m84A12243AF775FEEDDEBDC98DE997ADAC6A0E7E0 (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m023EF5166278FA4CEA18043EB6B544159D067A9A (U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* __this, String_t* ___key0, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*, String_t*, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromFiles_m489C9D4C212DF24CDC05834F37D308FBFA0BB084 (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_m7F7F71DBD9A4D13AF632B7D88F9E3814D662AFFF (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m0CEB053ABBB3904E65F89A374BA27D443A3743F2_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m7165B754797FC65E699CFD4F4B777D45D2BAEB17 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_mADCCE3975DF455013A6A7E7D5ABCEB1E29D00929 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___fileDescriptor0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* Builder_Build_m96CC4C57E23687C7D9042F1C92C6A440C43D2D54 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromMessages_m0A18409F69A12AEE0E833F21744BD687A8B49810 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m3C2D1B32A9135BDEA14B7D1EE4D024AE99E6F75F (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m0CEB053ABBB3904E65F89A374BA27D443A3743F2_gshared)(___value0, ___name1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m49855A789BB529C4C47361A2114B8C28F9F5BAFB (Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_m3CF8AF6C1290ED984BCE6F1EF304C56CA3A9F5AD (RuntimeObject* ___source0, Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::.ctor()
inline void Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3 (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_m3DEB8D11E04868E6C87FBD93E9A3CCF175BB253E (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* __this, Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* ___fullNameToMessageMap0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Dependencies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_m8F571581AE1B9FF48742D22B123C2AA7E5A9070C_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m9F4E1F38494136104D840DA82C5D7DBA5F95C2C2_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_m6A84E14AB68E7EA71A1DE49F083C2CFBC3B6B539 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36 (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* __this, String_t* ___key0, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*, String_t*, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC4EBCE714174204D9848246FEA77D6EB8D044DA (U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_m5DA1C329CB63868255C466876EC2452B40E418A9 (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseDoubleEqualityComparerImpl__ctor_m7DC95A2BDA81AE5E0F1F6A3C948673EE819AEE13 (BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseSingleEqualityComparerImpl__ctor_m27A6665B4C3C480B290B003DC58C0E83B7F75518 (BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableDoubleEqualityComparerImpl__ctor_m1146628AE9722D95D2AE3D1FF3B4B2FE04CB6098 (BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableSingleEqualityComparerImpl__ctor_m729B8F535F43E894D56BCB7302A7CB56418DCA7C (BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59* __this, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Double>::.ctor()
inline void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6 (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB*, const RuntimeMethod*))EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
inline void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3 (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499*, const RuntimeMethod*))EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_m83E8C826F518A07B2EAD0EE9B01DF7B9647FD702_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>::.ctor()
inline void EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694*, const RuntimeMethod*))EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m4836BCE0A2C56D62613A6FAF7A0D3C0EF762FF84_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>::.ctor()
inline void EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203*, const RuntimeMethod*))EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5DA587F62923D59B41D837B7713B5668F8625B31 (U3CU3Ec__DisplayClass2_0_tD51D17497E1120CEB50EB6E5239849ED5F2C3E96* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.Reflection.DescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mA71E45B5A2D9376DA6BB05A7D8C139FF3E30C809 (U3CU3Ec__DisplayClass2_0_tD51D17497E1120CEB50EB6E5239849ED5F2C3E96* __this, DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* ___message0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	RuntimeObject* G_B2_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B2_3 = NULL;
	DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	RuntimeObject* G_B1_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B1_3 = NULL;
	DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* G_B1_4 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B3_3 = NULL;
	DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* G_B3_4 = NULL;
	{
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_0 = ___message0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_3 = __this->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = NULL;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = NULL;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_001d;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_5;
		L_5 = GeneratedClrTypeInfo_get_NestedTypes_mEAA1B0965ECC35A10EB59BB7B846C7762624A54A_inline(G_B2_0, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_001d:
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_9 = (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)il2cpp_codegen_object_new(MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MessageDescriptor__ctor_mA7BBE1F5C4E3EFC10FAA3BAA2247D1D8FFCF774A(L_9, G_B3_4, G_B3_3, (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__1(Google.Protobuf.Reflection.EnumDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__1_m32951B91EFBB2515304EB4000F5B0CB94EDC427C (U3CU3Ec__DisplayClass2_0_tD51D17497E1120CEB50EB6E5239849ED5F2C3E96* __this, EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* ___enumType0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	RuntimeObject* G_B2_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B2_3 = NULL;
	EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	RuntimeObject* G_B1_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B1_3 = NULL;
	EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* G_B1_4 = NULL;
	Type_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B3_3 = NULL;
	EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* G_B3_4 = NULL;
	{
		EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* L_0 = ___enumType0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_3 = __this->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = NULL;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = NULL;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((Type_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_001d;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5;
		L_5 = GeneratedClrTypeInfo_get_NestedEnums_mF617D606C0482D67F62FF3439F65D19EE492995B_inline(G_B2_0, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Type_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_001d:
	{
		EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F* L_9 = (EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F*)il2cpp_codegen_object_new(EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EnumDescriptor__ctor_m6E8306614E5BAD1C545EDEA4B3609B390EBB2D32(L_9, G_B3_4, G_B3_3, (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__2(Google.Protobuf.Reflection.ServiceDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__2_mDC91A6DE035DB73D044BC37444AF4044B08BBEC1 (U3CU3Ec__DisplayClass2_0_tD51D17497E1120CEB50EB6E5239849ED5F2C3E96* __this, ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* ___service0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_0 = ___service0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* L_3 = (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150*)il2cpp_codegen_object_new(ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ServiceDescriptor__ctor_m757DB0E03CF2C6BBF11E35669F8C1E17A80F0880(L_3, L_0, L_1, L_2, NULL);
		return L_3;
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
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8BC0DF58D196B465E9E77318AA216E537BC84DE4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* L_0 = (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8*)il2cpp_codegen_object_new(U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m21FD0FDA53C5DE312932D82C727A3D476E63AE8E(L_0, NULL);
		((U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m21FD0FDA53C5DE312932D82C727A3D476E63AE8E (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Google.Protobuf.Reflection.FileDescriptor/<>c::<DeterminePublicDependencies>b__9_0(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CDeterminePublicDependenciesU3Eb__9_0_mD8513D86710CFE27FBE9760498E5F1423887E4D4 (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* __this, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file0, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0 = ___file0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Name_m2F4F4DA47CD49256D7D89B1A38CCA603E980BAED(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllGeneratedExtensions>b__53_0(Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllGeneratedExtensionsU3Eb__53_0_mF74B6FF4118EE5DCB813436C966FB5ED251C5405 (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* __this, GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* ___t0, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_0 = ___t0;
		return (bool)((!(((RuntimeObject*)(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Google.Protobuf.Extension Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensions>b__54_0(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* U3CU3Ec_U3CGetAllDependedExtensionsU3Eb__54_0_mFD38A7DD40AFDA2C7C97F3CA0720850E0BD91EB8 (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* __this, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___s0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_0 = ___s0;
		NullCheck(L_0);
		Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* L_1;
		L_1 = FieldDescriptor_get_Extension_m2DE8F4106521D0B7D56F12B7986647643E0D14F5_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensions>b__54_1(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllDependedExtensionsU3Eb__54_1_mE240AB96F5FC45D12CC80B3F34F8FD2E2AFA984A (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* __this, Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* ___e0, const RuntimeMethod* method) 
{
	{
		Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* L_0 = ___e0;
		return (bool)((!(((RuntimeObject*)(Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Google.Protobuf.Extension Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensionsFromMessage>b__55_0(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* U3CU3Ec_U3CGetAllDependedExtensionsFromMessageU3Eb__55_0_m7D202F4115B0AE01FDC5A675BD9BEA53CD1D2AB0 (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* __this, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___s0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_0 = ___s0;
		NullCheck(L_0);
		Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* L_1;
		L_1 = FieldDescriptor_get_Extension_m2DE8F4106521D0B7D56F12B7986647643E0D14F5_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensionsFromMessage>b__55_1(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllDependedExtensionsFromMessageU3Eb__55_1_mD99803551A9F71F48B91BC957333C0FFD53D1F6D (U3CU3Ec_t792F6C74DC4BC2FB25CC025A5689206BAAEECFA8* __this, Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* ___e0, const RuntimeMethod* method) 
{
	{
		Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* L_0 = ___e0;
		return (bool)((!(((RuntimeObject*)(Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m085C15ABD5E9BA7EC3D12018B1F756477D5D82C3 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::set_ClrType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m46FD53A0242D57938395049E1FBCAB5D13C4FB3C (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CClrTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClrTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* GeneratedClrTypeInfo_get_Parser_mE7F916BAC268F60F771E7FC246C17AF302759F32 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* L_0 = __this->___U3CParserU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_PropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m0A171A055701463503A3E71A12A5AC6F9D7C7905 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CPropertyNamesU3Ek__BackingField_5;
		return L_0;
	}
}
// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* GeneratedClrTypeInfo_get_Extensions_mBCC7C6FB0E6607288206E83304DA57F59042817C (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* L_0 = __this->___U3CExtensionsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_OneofNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_m01124F21B145BCB887B12BCB3B777F9DD4235136 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COneofNamesU3Ek__BackingField_7;
		return L_0;
	}
}
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* GeneratedClrTypeInfo_get_NestedTypes_mEAA1B0965ECC35A10EB59BB7B846C7762624A54A (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedEnums()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mF617D606C0482D67F62FF3439F65D19EE492995B (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CNestedEnumsU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mE3C25B862B8C93EE18056638F4AB11A0C75FF5D5 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, Type_t* ___clrType0, MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* ___extensions5, GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* ___nestedTypes6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* G_B2_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B2_1 = NULL;
	GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* G_B1_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B1_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B4_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B4_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B3_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B3_1 = NULL;
	ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* G_B6_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B6_1 = NULL;
	ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* G_B5_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B5_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B8_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B7_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_0 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B9_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_0 = ___nestedTypes6;
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_2 = ((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0012:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CNestedTypesU3Ek__BackingField_8 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CNestedTypesU3Ek__BackingField_8), (void*)G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = ___nestedEnums4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ((ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var))->___EmptyTypes_0;
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___U3CNestedEnumsU3Ek__BackingField_9 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3CNestedEnumsU3Ek__BackingField_9), (void*)G_B4_0);
		Type_t* L_6 = ___clrType0;
		GeneratedClrTypeInfo_set_ClrType_m46FD53A0242D57938395049E1FBCAB5D13C4FB3C_inline(__this, L_6, NULL);
		ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* L_7 = ___extensions5;
		ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* L_8 = L_7;
		G_B5_0 = L_8;
		G_B5_1 = __this;
		if (L_8)
		{
			G_B6_0 = L_8;
			G_B6_1 = __this;
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var);
		ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* L_9 = ((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyExtensions_2;
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_003b:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CExtensionsU3Ek__BackingField_6 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CExtensionsU3Ek__BackingField_6), (void*)G_B6_0);
		MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* L_10 = ___parser1;
		__this->___U3CParserU3Ek__BackingField_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParserU3Ek__BackingField_4), (void*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___propertyNames2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		G_B7_0 = L_12;
		G_B7_1 = __this;
		if (L_12)
		{
			G_B8_0 = L_12;
			G_B8_1 = __this;
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyNames_0;
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
	}

IL_0052:
	{
		NullCheck(G_B8_1);
		G_B8_1->___U3CPropertyNamesU3Ek__BackingField_5 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___U3CPropertyNamesU3Ek__BackingField_5), (void*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___oneofNames3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		G_B9_0 = L_15;
		G_B9_1 = __this;
		if (L_15)
		{
			G_B10_0 = L_15;
			G_B10_1 = __this;
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyNames_0;
		G_B10_0 = L_16;
		G_B10_1 = G_B9_1;
	}

IL_0063:
	{
		NullCheck(G_B10_1);
		G_B10_1->___U3COneofNamesU3Ek__BackingField_7 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___U3COneofNamesU3Ek__BackingField_7), (void*)G_B10_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mC27E3B9E2B4B4E51B0C3C208C48428F60ED79E48 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, Type_t* ___clrType0, MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* ___nestedTypes5, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___clrType0;
		MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* L_1 = ___parser1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___propertyNames2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___oneofNames3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = ___nestedEnums4;
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_5 = ___nestedTypes5;
		GeneratedClrTypeInfo__ctor_mE3C25B862B8C93EE18056638F4AB11A0C75FF5D5(__this, L_0, L_1, L_2, L_3, L_4, (ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD*)NULL, L_5, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m7D1A5B54C110B7BB44086453504FB1F7F65C555A (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* ___extensions1, GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* ___nestedTypes2, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___nestedEnums0;
		ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* L_1 = ___extensions1;
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_2 = ___nestedTypes2;
		GeneratedClrTypeInfo__ctor_mE3C25B862B8C93EE18056638F4AB11A0C75FF5D5(__this, (Type_t*)NULL, (MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m74A2D7A93CB8E727F9CFB2C62FC17F5CEA68BE26 (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* ___nestedTypes1, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___nestedEnums0;
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_1 = ___nestedTypes1;
		GeneratedClrTypeInfo__ctor_mC27E3B9E2B4B4E51B0C3C208C48428F60ED79E48(__this, (Type_t*)NULL, (MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__cctor_m96C4CBB82FB1FCB277819234D6A531741A6BCF6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyNames_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyNames_0), (void*)L_0);
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_1 = (GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F*)(GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1), (void*)L_1);
		ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* L_2 = (ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD*)(ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD*)SZArrayNew(ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyExtensions_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089_il2cpp_TypeInfo_var))->___EmptyExtensions_2), (void*)L_2);
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
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor__ctor_m6F3D124F0E9E69F4F3BFCD7CE3C92BB2122C2B77 (MapFieldAccessor_t74970120369F2E74AE07328AF2F890BEBBC7A39C* __this, PropertyInfo_t* ___property0, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___descriptor1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_m7DB378293BBD3D02938F8C65EF2AE5D4F494FCA7(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor_Clear_m0D817B585846B8AB03364A98EFCA0731FA8339BC (MapFieldAccessor_t74970120369F2E74AE07328AF2F890BEBBC7A39C* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		RuntimeObject* L_1;
		L_1 = FieldAccessorBase_GetValue_m68EB618FFF7E0F5D82CEDF61FE189E2AA2F2F2ED(__this, L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.MapFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapFieldAccessor_HasValue_m5E7B60D1992C908AED1FB12B0B9B15270C93571A (MapFieldAccessor_t74970120369F2E74AE07328AF2F890BEBBC7A39C* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8AB46C8C5CCDCA487773A386E008015AD2FB899)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapFieldAccessor_HasValue_m5E7B60D1992C908AED1FB12B0B9B15270C93571A_RuntimeMethod_var)));
	}
}
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor_SetValue_m78C3AE9A31AF68BB0AEA4D54005DB795110D2E00 (MapFieldAccessor_t74970120369F2E74AE07328AF2F890BEBBC7A39C* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA2199D3FAB3E9A0592694D9E1A42317C06006B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapFieldAccessor_SetValue_m78C3AE9A31AF68BB0AEA4D54005DB795110D2E00_RuntimeMethod_var)));
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.ctor(Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__ctor_mA7BBE1F5C4E3EFC10FAA3BAA2247D1D8FFCF774A (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___parent2, int32_t ___typeIndex3, GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* ___generatedCodeInfo4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_m22B4F33FF04FAB42478A81FD12C68A11648056F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1_TisEnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_m0976EBC18331C412F8C66734963071FDF97B96CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m2F849B49A46AA775E949CA9B84969ED9913A7106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59_TisOneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C_m17521AD6CB366ED9BB03C7185201BC6BECA384EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m14DB8134F5FD9077592FB974A4CC384FBA337884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m092DF0DAC1ED1EF9AB55A21B76308B1EAF27A1FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t36E3DDE778C5DAEF044F434B8618ADCEE249E345_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t79BC63EA9AB9572BF81C957118A733ADB9A7E5D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6B7AAE753D527C5705F86F664E650F87637E6DD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m8A5D75400BF356B09A1A98A65AFB190540B457AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_4_mD5ECCDE19E33EFF665B90C169CDA19D9E6313064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m8C721D5784EE2343EB962F1D81EBC85FAB6F74E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_m680581E922FDD92F204F6B6EB84A11B2F1F40688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_m5B8A4FC7AE2F5EE2CC9606F81D25FCD794DD75ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m7AD1726DB9DC585C6480DDD4532DD51D38281A3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B2_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B2_1 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B1_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B1_1 = NULL;
	MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* G_B3_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B3_1 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B5_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B5_1 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B4_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B4_1 = NULL;
	Type_t* G_B6_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B6_1 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B19_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B19_1 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B19_2 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B18_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B18_1 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B18_2 = NULL;
	ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* G_B20_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B20_1 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B20_2 = NULL;
	Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* G_B22_0 = NULL;
	RuntimeObject* G_B22_1 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B22_2 = NULL;
	Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* G_B21_0 = NULL;
	RuntimeObject* G_B21_1 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B21_2 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_0 = (U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m99AB077EB72D816D2771E5BF1E3F52792297196E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_1 = V_0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_3 = V_0;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_4 = ___generatedCodeInfo4;
		NullCheck(L_3);
		L_3->___generatedCodeInfo_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___generatedCodeInfo_2), (void*)L_4);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_6 = L_5->___file_0;
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_7 = V_0;
		NullCheck(L_7);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_8 = L_7->___file_0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_9 = ___parent2;
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_10 = ___proto0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = DescriptorProto_get_Name_m83321B9790668DBDD9D61C47135029205BD273D4(L_10, NULL);
		NullCheck(L_8);
		String_t* L_12;
		L_12 = FileDescriptor_ComputeFullName_mFF8D5D9FDCE3A8A1B822DAE448206BD316DD4E59(L_8, L_9, L_11, NULL);
		int32_t L_13 = ___typeIndex3;
		DescriptorBase__ctor_m50E6EE956FBF41B860838D3A7990D8D9973BE6BB(__this, L_6, L_12, L_13, NULL);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_14 = V_0;
		NullCheck(L_14);
		L_14->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___U3CU3E4__this_1), (void*)__this);
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_15 = ___proto0;
		__this->___U3CProtoU3Ek__BackingField_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtoU3Ek__BackingField_8), (void*)L_15);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_16 = V_0;
		NullCheck(L_16);
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_17 = L_16->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_18 = L_17;
		G_B1_0 = L_18;
		G_B1_1 = __this;
		if (L_18)
		{
			G_B2_0 = L_18;
			G_B2_1 = __this;
			goto IL_0051;
		}
	}
	{
		G_B3_0 = ((MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0056;
	}

IL_0051:
	{
		NullCheck(G_B2_0);
		MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* L_19;
		L_19 = GeneratedClrTypeInfo_get_Parser_mE7F916BAC268F60F771E7FC246C17AF302759F32_inline(G_B2_0, NULL);
		G_B3_0 = L_19;
		G_B3_1 = G_B2_1;
	}

IL_0056:
	{
		NullCheck(G_B3_1);
		G_B3_1->___U3CParserU3Ek__BackingField_10 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___U3CParserU3Ek__BackingField_10), (void*)G_B3_0);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_20 = V_0;
		NullCheck(L_20);
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_21 = L_20->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_22 = L_21;
		G_B4_0 = L_22;
		G_B4_1 = __this;
		if (L_22)
		{
			G_B5_0 = L_22;
			G_B5_1 = __this;
			goto IL_0069;
		}
	}
	{
		G_B6_0 = ((Type_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_006e;
	}

IL_0069:
	{
		NullCheck(G_B5_0);
		Type_t* L_23;
		L_23 = GeneratedClrTypeInfo_get_ClrType_m085C15ABD5E9BA7EC3D12018B1F756477D5D82C3_inline(G_B5_0, NULL);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
	}

IL_006e:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CClrTypeU3Ek__BackingField_9 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CClrTypeU3Ek__BackingField_9), (void*)G_B6_0);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_24 = ___parent2;
		__this->___U3CContainingTypeU3Ek__BackingField_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContainingTypeU3Ek__BackingField_11), (void*)L_24);
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_25 = ___proto0;
		NullCheck(L_25);
		RepeatedField_1_tF287D0133CB00422E32F7C0FC98D7FDDB3355C29* L_26;
		L_26 = DescriptorProto_get_OneofDecl_m2523293B939B786975C994259A4D86073A538142_inline(L_25, NULL);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_27 = V_0;
		IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E* L_28 = (IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E*)il2cpp_codegen_object_new(IndexedConverter_2_tCE7BC930629ACF2BBC9E9552E87DDCD2FBF2700E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		IndexedConverter_2__ctor_m2F02D437CE09DA57B3D1BB6D493C82C2306A8589(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m8C721D5784EE2343EB962F1D81EBC85FAB6F74E3_RuntimeMethod_var), NULL);
		RuntimeObject* L_29;
		L_29 = DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59_TisOneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C_m17521AD6CB366ED9BB03C7185201BC6BECA384EC(L_26, L_28, DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59_TisOneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C_m17521AD6CB366ED9BB03C7185201BC6BECA384EC_RuntimeMethod_var);
		__this->___U3COneofsU3Ek__BackingField_16 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COneofsU3Ek__BackingField_16), (void*)L_29);
		V_1 = 0;
		RuntimeObject* L_30;
		L_30 = MessageDescriptor_get_Oneofs_mB16A9A23DA6631CA3CEADDCB2BD16F8E2D4E5CA8_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.OneofDescriptor>::GetEnumerator() */, IEnumerable_1_t79BC63EA9AB9572BF81C957118A733ADB9A7E5D0_il2cpp_TypeInfo_var, L_30);
		V_2 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_32 = V_2;
					if (!L_32)
					{
						goto IL_00db;
					}
				}
				{
					RuntimeObject* L_33 = V_2;
					NullCheck(L_33);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_33);
				}

IL_00db:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c8_1;
			}

IL_00a7_1:
			{
				RuntimeObject* L_34 = V_2;
				NullCheck(L_34);
				OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_35;
				L_35 = InterfaceFuncInvoker0< OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Current() */, IEnumerator_1_t6B7AAE753D527C5705F86F664E650F87637E6DD2_il2cpp_TypeInfo_var, L_34);
				NullCheck(L_35);
				bool L_36;
				L_36 = OneofDescriptor_get_IsSynthetic_mF41242B22BDA563D27858560A7EA7A5B455FA408_inline(L_35, NULL);
				if (!L_36)
				{
					goto IL_00ba_1;
				}
			}
			{
				int32_t L_37 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
				goto IL_00c8_1;
			}

IL_00ba_1:
			{
				int32_t L_38 = V_1;
				if (!L_38)
				{
					goto IL_00c8_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				NullCheck(L_39);
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA598F7A018FBD9BE6B63FDAFF829654652603EEB)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessageDescriptor__ctor_mA7BBE1F5C4E3EFC10FAA3BAA2247D1D8FFCF774A_RuntimeMethod_var)));
			}

IL_00c8_1:
			{
				RuntimeObject* L_40 = V_2;
				NullCheck(L_40);
				bool L_41;
				L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
				if (L_41)
				{
					goto IL_00a7_1;
				}
			}
			{
				goto IL_00dc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dc:
	{
		RuntimeObject* L_42;
		L_42 = MessageDescriptor_get_Oneofs_mB16A9A23DA6631CA3CEADDCB2BD16F8E2D4E5CA8_inline(__this, NULL);
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Count() */, ICollection_1_t36E3DDE778C5DAEF044F434B8618ADCEE249E345_il2cpp_TypeInfo_var, L_42);
		int32_t L_44 = V_1;
		__this->___U3CRealOneofCountU3Ek__BackingField_17 = ((int32_t)il2cpp_codegen_subtract(L_43, L_44));
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_45 = ___proto0;
		NullCheck(L_45);
		RepeatedField_1_tF209BB319A301B92F3E31BA7A80A39A58D23C0A7* L_46;
		L_46 = DescriptorProto_get_NestedType_mBD2768EE2D93EDDBF948D0C63CE9D3E14995CF2E_inline(L_45, NULL);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_47 = V_0;
		IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD* L_48 = (IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD*)il2cpp_codegen_object_new(IndexedConverter_2_tC63705300858BA9C3C7EC486992A58C9E593EFBD_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		IndexedConverter_2__ctor_m4F4AF7E331904C45D47BC1A1E1E6DF8DEE2BD5C8(L_48, L_47, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_m680581E922FDD92F204F6B6EB84A11B2F1F40688_RuntimeMethod_var), NULL);
		RuntimeObject* L_49;
		L_49 = DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_m22B4F33FF04FAB42478A81FD12C68A11648056F4(L_46, L_48, DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_m22B4F33FF04FAB42478A81FD12C68A11648056F4_RuntimeMethod_var);
		__this->___U3CNestedTypesU3Ek__BackingField_14 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNestedTypesU3Ek__BackingField_14), (void*)L_49);
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_50 = ___proto0;
		NullCheck(L_50);
		RepeatedField_1_t00A32F8CDF0FA07C86031BDC491EC850A03D3202* L_51;
		L_51 = DescriptorProto_get_EnumType_mB67D0691CCAF37E007516CBB2A1ADA27116CD8AC_inline(L_50, NULL);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_52 = V_0;
		IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB* L_53 = (IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB*)il2cpp_codegen_object_new(IndexedConverter_2_tE75203BB43AE78F87C4C7D7A5D84C24CF58A62BB_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		IndexedConverter_2__ctor_m90D3DCB28F4C1DC1CF13414EB14D00C1333ABC0E(L_53, L_52, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_m5B8A4FC7AE2F5EE2CC9606F81D25FCD794DD75ED_RuntimeMethod_var), NULL);
		RuntimeObject* L_54;
		L_54 = DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1_TisEnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_m0976EBC18331C412F8C66734963071FDF97B96CB(L_51, L_53, DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1_TisEnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_m0976EBC18331C412F8C66734963071FDF97B96CB_RuntimeMethod_var);
		__this->___U3CEnumTypesU3Ek__BackingField_15 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnumTypesU3Ek__BackingField_15), (void*)L_54);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_55 = V_0;
		NullCheck(L_55);
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_56 = L_55->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_57 = L_56;
		G_B18_0 = L_57;
		G_B18_1 = __this;
		G_B18_2 = __this;
		if (L_57)
		{
			G_B19_0 = L_57;
			G_B19_1 = __this;
			G_B19_2 = __this;
			goto IL_0138;
		}
	}
	{
		G_B20_0 = ((ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		goto IL_013d;
	}

IL_0138:
	{
		NullCheck(G_B19_0);
		ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* L_58;
		L_58 = GeneratedClrTypeInfo_get_Extensions_mBCC7C6FB0E6607288206E83304DA57F59042817C_inline(G_B19_0, NULL);
		G_B20_0 = L_58;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_013d:
	{
		ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* L_59 = (ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08*)il2cpp_codegen_object_new(ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		ExtensionCollection__ctor_mECC3C651D77AB1AA352C03C5C9D3CFA688F132F3(L_59, G_B20_1, G_B20_0, NULL);
		NullCheck(G_B20_2);
		G_B20_2->___U3CExtensionsU3Ek__BackingField_13 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&G_B20_2->___U3CExtensionsU3Ek__BackingField_13), (void*)L_59);
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_60 = ___proto0;
		NullCheck(L_60);
		RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5* L_61;
		L_61 = DescriptorProto_get_Field_m9BAE0C869C27DA89F4D1DD5FCE9F446A9240EEE8_inline(L_60, NULL);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_62 = V_0;
		IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D* L_63 = (IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D*)il2cpp_codegen_object_new(IndexedConverter_2_t05EB614FF60553C155305BD69B08C9F708DB201D_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		IndexedConverter_2__ctor_m31A001FF2F4F787EB8A0186F27EF8D502EDAA521(L_63, L_62, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m7AD1726DB9DC585C6480DDD4532DD51D38281A3A_RuntimeMethod_var), NULL);
		RuntimeObject* L_64;
		L_64 = DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m2F849B49A46AA775E949CA9B84969ED9913A7106(L_61, L_63, DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m2F849B49A46AA775E949CA9B84969ED9913A7106_RuntimeMethod_var);
		__this->___fieldsInDeclarationOrder_4 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fieldsInDeclarationOrder_4), (void*)L_64);
		RuntimeObject* L_65 = __this->___fieldsInDeclarationOrder_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var);
		Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* L_66 = ((U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1;
		Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* L_67 = L_66;
		G_B21_0 = L_67;
		G_B21_1 = L_65;
		G_B21_2 = __this;
		if (L_67)
		{
			G_B22_0 = L_67;
			G_B22_1 = L_65;
			G_B22_2 = __this;
			goto IL_018a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var);
		U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59* L_68 = ((U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* L_69 = (Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4*)il2cpp_codegen_object_new(Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		Func_2__ctor_mB70FD26CB06228A0C28FD37D462137482CD0EEBB(L_69, L_68, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__5_4_mD5ECCDE19E33EFF665B90C169CDA19D9E6313064_RuntimeMethod_var), NULL);
		Func_2_t00940B3B02417B27DC3ECE27ED8B546D451C10C4* L_70 = L_69;
		((U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1), (void*)L_70);
		G_B22_0 = L_70;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
	}

IL_018a:
	{
		RuntimeObject* L_71;
		L_71 = Enumerable_OrderBy_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m14DB8134F5FD9077592FB974A4CC384FBA337884(G_B22_1, G_B22_0, Enumerable_OrderBy_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m14DB8134F5FD9077592FB974A4CC384FBA337884_RuntimeMethod_var);
		FieldDescriptorU5BU5D_tB51FB7EE15A94B1E2082AA10AD4C5D048B805999* L_72;
		L_72 = Enumerable_ToArray_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m092DF0DAC1ED1EF9AB55A21B76308B1EAF27A1FB(L_71, Enumerable_ToArray_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m092DF0DAC1ED1EF9AB55A21B76308B1EAF27A1FB_RuntimeMethod_var);
		ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A* L_73 = (ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		ReadOnlyCollection_1__ctor_m8A5D75400BF356B09A1A98A65AFB190540B457AA(L_73, (RuntimeObject*)L_72, ReadOnlyCollection_1__ctor_m8A5D75400BF356B09A1A98A65AFB190540B457AA_RuntimeMethod_var);
		NullCheck(G_B22_2);
		G_B22_2->___fieldsInNumberOrder_5 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_2->___fieldsInNumberOrder_5), (void*)L_73);
		RuntimeObject* L_74 = __this->___fieldsInNumberOrder_5;
		il2cpp_codegen_runtime_class_init_inline(MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248* L_75;
		L_75 = MessageDescriptor_CreateJsonFieldMap_m9B130E57649E70D3B6023CC4C5A967C175E01C44(L_74, NULL);
		__this->___jsonFieldMap_6 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonFieldMap_6), (void*)L_75);
		U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* L_76 = V_0;
		NullCheck(L_76);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_77 = L_76->___file_0;
		NullCheck(L_77);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_78;
		L_78 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_77, NULL);
		NullCheck(L_78);
		DescriptorPool_AddSymbol_m65899A264C9802C168B3467A39E9CE739E54AED4(L_78, __this, NULL);
		FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* L_79 = (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43*)il2cpp_codegen_object_new(FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		FieldCollection__ctor_m78B836EFA4E9E25DD277F86105A39C985827D9D8(L_79, __this, NULL);
		__this->___U3CFieldsU3Ek__BackingField_12 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFieldsU3Ek__BackingField_12), (void*)L_79);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::CreateJsonFieldMap(System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248* MessageDescriptor_CreateJsonFieldMap_m9B130E57649E70D3B6023CC4C5A967C175E01C44 (RuntimeObject* ___fields0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3635981B5DF287B3653F883D7773C887714EBD9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD2B059033566AE1FA3C88BABABABF721A6D3F2C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t530F4ABCC61B9EAED7FA1A166C837D4098FE31ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t65A31ECDF74FB98A863A85E9B7BCFED5A7E51129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m051A72BDFA52662434668C9A560BE709EC21277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* V_2 = NULL;
	{
		Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515* L_0 = (Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515*)il2cpp_codegen_object_new(Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3635981B5DF287B3653F883D7773C887714EBD9F(L_0, Dictionary_2__ctor_m3635981B5DF287B3653F883D7773C887714EBD9F_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___fields0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_t530F4ABCC61B9EAED7FA1A166C837D4098FE31ED_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_6;
				L_6 = InterfaceFuncInvoker0< FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_t65A31ECDF74FB98A863A85E9B7BCFED5A7E51129_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515* L_7 = V_0;
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String Google.Protobuf.Reflection.DescriptorBase::get_Name() */, L_8);
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_10 = V_2;
				NullCheck(L_7);
				Dictionary_2_set_Item_mD2B059033566AE1FA3C88BABABABF721A6D3F2C4(L_7, L_9, L_10, Dictionary_2_set_Item_mD2B059033566AE1FA3C88BABABABF721A6D3F2C4_RuntimeMethod_var);
				Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515* L_11 = V_0;
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_12 = V_2;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = FieldDescriptor_get_JsonName_mF42F803F807761B4010F1E4F87D58D35F1F9AFB3_inline(L_12, NULL);
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_14 = V_2;
				NullCheck(L_11);
				Dictionary_2_set_Item_mD2B059033566AE1FA3C88BABABABF721A6D3F2C4(L_11, L_13, L_14, Dictionary_2_set_Item_mD2B059033566AE1FA3C88BABABABF721A6D3F2C4_RuntimeMethod_var);
			}

IL_0030_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		Dictionary_2_tA17200837D99CCCB958410431D44DB2E92FFB515* L_17 = V_0;
		ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248* L_18 = (ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t1328CE68610475E77EF51B325419AE21A9940248_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ReadOnlyDictionary_2__ctor_m051A72BDFA52662434668C9A560BE709EC21277E(L_18, L_17, ReadOnlyDictionary_2__ctor_m051A72BDFA52662434668C9A560BE709EC21277E_RuntimeMethod_var);
		return L_18;
	}
}
// System.String Google.Protobuf.Reflection.MessageDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageDescriptor_get_Name_m3C2C24AFAB96CC40F99E2B516033BEA5F82FB1DE (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_0;
		L_0 = MessageDescriptor_get_Proto_m779C4673C5386BCCACCB9A316D5BA640BE2ED9AC_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = DescriptorProto_get_Name_m83321B9790668DBDD9D61C47135029205BD273D4(L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase> Google.Protobuf.Reflection.MessageDescriptor::GetNestedDescriptorListForField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_GetNestedDescriptorListForField_m2D5A79CD95C56C5318237D9EB498F98BA85E664E (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, int32_t ___fieldNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tA68C4C598B82FDA44515C1167011383AD9193AB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 2)))
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0016:
	{
		RuntimeObject* L_1 = __this->___fieldsInDeclarationOrder_4;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IReadOnlyList_1_tA68C4C598B82FDA44515C1167011383AD9193AB2_il2cpp_TypeInfo_var));
	}

IL_0022:
	{
		RuntimeObject* L_2;
		L_2 = MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IReadOnlyList_1_tA68C4C598B82FDA44515C1167011383AD9193AB2_il2cpp_TypeInfo_var));
	}

IL_002e:
	{
		RuntimeObject* L_3;
		L_3 = MessageDescriptor_get_EnumTypes_m2CBC54657E71C6AD89AFC580DEDE4A8AE99AE7CD_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IReadOnlyList_1_tA68C4C598B82FDA44515C1167011383AD9193AB2_il2cpp_TypeInfo_var));
	}

IL_003a:
	{
		return (RuntimeObject*)NULL;
	}
}
// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* MessageDescriptor_get_Proto_m779C4673C5386BCCACCB9A316D5BA640BE2ED9AC (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_0 = __this->___U3CProtoU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::IsExtensionsInitialized(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_IsExtensionsInitialized_m7566D6A7362451BD56F6D130E8CCB1F45415E6AB (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_m996C20735872A4AB37AEE60F8DC614E2DCFC343D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_0;
		L_0 = MessageDescriptor_get_Proto_m779C4673C5386BCCACCB9A316D5BA640BE2ED9AC_inline(__this, NULL);
		NullCheck(L_0);
		RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5* L_1;
		L_1 = DescriptorProto_get_ExtensionRange_m5E54458AF9FDFBD7D3B8E436F52CFA2920D17D87_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RepeatedField_1_get_Count_m996C20735872A4AB37AEE60F8DC614E2DCFC343D_inline(L_1, RepeatedField_1_get_Count_m996C20735872A4AB37AEE60F8DC614E2DCFC343D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_3 = __this->___extensionSetIsInitialized_7;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Type_t* L_4;
		L_4 = MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_5;
		L_5 = ReflectionUtil_CreateIsInitializedCaller_mBAA937D90926232F7991625F93D6A049AE62A543(L_4, NULL);
		__this->___extensionSetIsInitialized_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensionSetIsInitialized_7), (void*)L_5);
	}

IL_002d:
	{
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_6 = __this->___extensionSetIsInitialized_7;
		RuntimeObject* L_7 = ___message0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Func_2_Invoke_m87A231CCC5E61EB0DC4EE13E05F2870275C33ED1_inline(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Type Google.Protobuf.Reflection.MessageDescriptor::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_9;
		return L_0;
	}
}
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* MessageDescriptor_get_Parser_m0AB1F744DFEE19392E672272B755D4292400240E (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* L_0 = __this->___U3CParserU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::get_IsWellKnownType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_get_IsWellKnownType_m3EA11BF24AA05722212929162702EB20B90A7402 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0;
		L_0 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Package_mEB4B502CDF7B14525E91D1C925E1095C725C3613(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = ((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_4;
		L_4 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = FileDescriptor_get_Name_m2F4F4DA47CD49256D7D89B1A38CCA603E980BAED(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_3, L_5, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		return L_6;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::get_IsWrapperType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_get_IsWrapperType_m70FAFE542D646699BB1BA38DEB372CBD5FDE9253 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0;
		L_0 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Package_mEB4B502CDF7B14525E91D1C925E1095C725C3613(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_3;
		L_3 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FileDescriptor_get_Name_m2F4F4DA47CD49256D7D89B1A38CCA603E980BAED(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC, NULL);
		return L_5;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* MessageDescriptor_get_ContainingType_m0DB818C712A8783D2DEF042392F1B9A47F6BECC7 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___U3CContainingTypeU3Ek__BackingField_11;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* MessageDescriptor_get_Fields_m4D22A285B857FA236321E054082857868E7152D0 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* L_0 = __this->___U3CFieldsU3Ek__BackingField_12;
		return L_0;
	}
}
// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* MessageDescriptor_get_Extensions_m1B1B0638B9170EBEFAC0F8D47F80A60A851B8534 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* L_0 = __this->___U3CExtensionsU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_EnumTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_m2CBC54657E71C6AD89AFC580DEDE4A8AE99AE7CD (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEnumTypesU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_Oneofs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_mB16A9A23DA6631CA3CEADDCB2BD16F8E2D4E5CA8 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3COneofsU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Int32 Google.Protobuf.Reflection.MessageDescriptor::get_RealOneofCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageDescriptor_get_RealOneofCount_mD6E302AADBDB0A6666CF574587DE04639D5409C9 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRealOneofCountU3Ek__BackingField_17;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* MessageDescriptor_FindFieldByName_m3ABC5B428BC78FCF4CE3C6F16F5D90D13381D177 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m7430AB9F712873898A4FB5E96168511EDC5617AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0;
		L_0 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_5;
		L_5 = DescriptorPool_FindSymbol_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m7430AB9F712873898A4FB5E96168511EDC5617AE(L_1, L_4, DescriptorPool_FindSymbol_TisFieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_m7430AB9F712873898A4FB5E96168511EDC5617AE_RuntimeMethod_var);
		return L_5;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* MessageDescriptor_FindFieldByNumber_mAD2978F829E16C698460EBEDB98F967B3A11C343 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0;
		L_0 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_0, NULL);
		int32_t L_2 = ___number0;
		NullCheck(L_1);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_3;
		L_3 = DescriptorPool_FindFieldByNumber_m8F739D215D83CB42CEF1F5CB01D8A76A8980E5C1(L_1, __this, L_2, NULL);
		return L_3;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MessageDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* MessageDescriptor_get_CustomOptions_m25DA6094F3C5C424C57803D6FFFDE977D9AC7D35 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_m5B58A7B346088BDEDF7260D80B37C63E8D5C88CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* G_B2_0 = NULL;
	MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* G_B1_0 = NULL;
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* G_B5_0 = NULL;
	ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93* G_B4_0 = NULL;
	ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93* G_B3_0 = NULL;
	{
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_0;
		L_0 = MessageDescriptor_get_Proto_m779C4673C5386BCCACCB9A316D5BA640BE2ED9AC_inline(__this, NULL);
		NullCheck(L_0);
		MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* L_1;
		L_1 = DescriptorProto_get_Options_m95317D9A7FBB580C45BCF35B64BE133AB0F0FE7A_inline(L_0, NULL);
		MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_tB3229FCC2C00AADF1827194169AA4936D0B6CB93* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_m5B58A7B346088BDEDF7260D80B37C63E8D5C88CC_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_m5B58A7B346088BDEDF7260D80B37C63E8D5C88CC_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* L_6 = (CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8*)il2cpp_codegen_object_new(CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_m74D934C4D6222CE076344A99716ED295856984F6(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.MessageDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* MessageDescriptor_GetOptions_mBC8E5A9E4771AA729A834BCD2AD1F41365DFD82B (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* G_B2_0 = NULL;
	MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* G_B1_0 = NULL;
	{
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_0;
		L_0 = MessageDescriptor_get_Proto_m779C4673C5386BCCACCB9A316D5BA640BE2ED9AC_inline(__this, NULL);
		NullCheck(L_0);
		MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* L_1;
		L_1 = DescriptorProto_get_Options_m95317D9A7FBB580C45BCF35B64BE133AB0F0FE7A_inline(L_0, NULL);
		MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* L_3;
		L_3 = MessageOptions_Clone_m2514F727652D1791C0AD08EDFF168856B2364900(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor_CrossLink_m1F876353B847FEB4DE1E08A398095F7152C839C1 (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t530F4ABCC61B9EAED7FA1A166C837D4098FE31ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t79BC63EA9AB9572BF81C957118A733ADB9A7E5D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t65A31ECDF74FB98A863A85E9B7BCFED5A7E51129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6B7AAE753D527C5705F86F664E650F87637E6DD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_5;
				L_5 = InterfaceFuncInvoker0< MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var, L_4);
				NullCheck(L_5);
				MessageDescriptor_CrossLink_m1F876353B847FEB4DE1E08A398095F7152C839C1(L_5, NULL);
			}

IL_0019_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		RuntimeObject* L_8 = __this->___fieldsInDeclarationOrder_4;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_t530F4ABCC61B9EAED7FA1A166C837D4098FE31ED_il2cpp_TypeInfo_var, L_8);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_1;
					if (!L_10)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0059:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_13;
				L_13 = InterfaceFuncInvoker0< FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_t65A31ECDF74FB98A863A85E9B7BCFED5A7E51129_il2cpp_TypeInfo_var, L_12);
				NullCheck(L_13);
				FieldDescriptor_CrossLink_m5D422D9713A22EFFDEEDE1B64EFE0B1F4E9BFC26(L_13, NULL);
			}

IL_0046_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		RuntimeObject* L_16;
		L_16 = MessageDescriptor_get_Oneofs_mB16A9A23DA6631CA3CEADDCB2BD16F8E2D4E5CA8_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.OneofDescriptor>::GetEnumerator() */, IEnumerable_1_t79BC63EA9AB9572BF81C957118A733ADB9A7E5D0_il2cpp_TypeInfo_var, L_16);
		V_2 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_2;
					if (!L_18)
					{
						goto IL_0086;
					}
				}
				{
					RuntimeObject* L_19 = V_2;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
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
				goto IL_0073_1;
			}

IL_0068_1:
			{
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_21;
				L_21 = InterfaceFuncInvoker0< OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Current() */, IEnumerator_1_t6B7AAE753D527C5705F86F664E650F87637E6DD2_il2cpp_TypeInfo_var, L_20);
				NullCheck(L_21);
				OneofDescriptor_CrossLink_m7387A8BDAEDF932A86DD73FAF63C6AD9C043C6FC(L_21, NULL);
			}

IL_0073_1:
			{
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0068_1;
				}
			}
			{
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
		ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* L_24;
		L_24 = MessageDescriptor_get_Extensions_m1B1B0638B9170EBEFAC0F8D47F80A60A851B8534_inline(__this, NULL);
		NullCheck(L_24);
		ExtensionCollection_CrossLink_m157A007C3574C57B085FB292D769AC9B3115F4A7(L_24, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__cctor_mC595349B7AD733AC0B262AD594FA7C6260FCF11E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = L_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_1, _stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = L_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_3, _stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = L_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_5, _stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_7 = L_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_7, _stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_9 = L_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_9, _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_11 = L_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_11, _stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_13 = L_11;
		NullCheck(L_13);
		bool L_14;
		L_14 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_13, _stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_15 = L_13;
		NullCheck(L_15);
		bool L_16;
		L_16 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_15, _stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_17 = L_15;
		NullCheck(L_17);
		bool L_18;
		L_18 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_17, _stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_19 = L_17;
		NullCheck(L_19);
		bool L_20;
		L_20 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_19, _stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3), (void*)L_19);
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldCollection__ctor_m78B836EFA4E9E25DD277F86105A39C985827D9D8 (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageDescriptor0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = ___messageDescriptor0;
		__this->___messageDescriptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageDescriptor_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InDeclarationOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InDeclarationOrder_mF4FE1B78F895AD4D6053E8F2FB181811A67334F5 (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___fieldsInDeclarationOrder_4;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InFieldNumberOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InFieldNumberOrder_mE5E199C689A489617250BC4B9F67249B26FB0C61 (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___fieldsInNumberOrder_5;
		return L_1;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::ByJsonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_ByJsonName_mDFDDF5EA31A2634D2C97E352285A7203F25BEB01 (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___jsonFieldMap_6;
		return L_1;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* FieldCollection_get_Item_m0C482F6999CACAD2D12688FFFDDAA1EA883D9E06 (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* G_B2_0 = NULL;
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* G_B1_0 = NULL;
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___messageDescriptor_0;
		int32_t L_1 = ___number0;
		NullCheck(L_0);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_2;
		L_2 = MessageDescriptor_FindFieldByNumber_mAD2978F829E16C698460EBEDB98F967B3A11C343(L_0, L_1, NULL);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001a;
		}
	}
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_4 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7012EBD7A52FFE2177DD7A499A4226405016ACB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldCollection_get_Item_m0C482F6999CACAD2D12688FFFDDAA1EA883D9E06_RuntimeMethod_var)));
	}

IL_001a:
	{
		return G_B2_0;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* FieldCollection_get_Item_mE5015EA902353F777072F3E0F731FCA9DDF4566A (FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* G_B2_0 = NULL;
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* G_B1_0 = NULL;
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___messageDescriptor_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_2;
		L_2 = MessageDescriptor_FindFieldByName_m3ABC5B428BC78FCF4CE3C6F16F5D90D13381D177(L_0, L_1, NULL);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001a;
		}
	}
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_4 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9233D8C418C04829410724511B59AEC0EF627BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldCollection_get_Item_mE5015EA902353F777072F3E0F731FCA9DDF4566A_RuntimeMethod_var)));
	}

IL_001a:
	{
		return G_B2_0;
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m99AB077EB72D816D2771E5BF1E3F52792297196E (U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__0(Google.Protobuf.Reflection.OneofDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m8C721D5784EE2343EB962F1D81EBC85FAB6F74E3 (U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* __this, OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* ___oneof0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B2_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B2_3 = NULL;
	OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B1_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B1_3 = NULL;
	OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B3_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B3_3 = NULL;
	OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* G_B3_4 = NULL;
	{
		OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* L_0 = ___oneof0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = __this->___file_0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = GeneratedClrTypeInfo_get_OneofNames_m01124F21B145BCB887B12BCB3B777F9DD4235136_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_10 = (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C*)il2cpp_codegen_object_new(OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OneofDescriptor__ctor_mBF9F3A561FEF1426043E9553C84922DB3897379F(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__1(Google.Protobuf.Reflection.DescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_m680581E922FDD92F204F6B6EB84A11B2F1F40688 (U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* __this, DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* ___type0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B2_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B2_3 = NULL;
	DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B1_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B1_3 = NULL;
	DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* G_B1_4 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B3_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B3_3 = NULL;
	DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* G_B3_4 = NULL;
	{
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_0 = ___type0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = __this->___file_0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_6;
		L_6 = GeneratedClrTypeInfo_get_NestedTypes_mEAA1B0965ECC35A10EB59BB7B846C7762624A54A_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_10 = (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)il2cpp_codegen_object_new(MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		MessageDescriptor__ctor_mA7BBE1F5C4E3EFC10FAA3BAA2247D1D8FFCF774A(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__2(Google.Protobuf.Reflection.EnumDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_m5B8A4FC7AE2F5EE2CC9606F81D25FCD794DD75ED (U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* __this, EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* ___type0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B2_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B2_3 = NULL;
	EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B1_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B1_3 = NULL;
	EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* G_B1_4 = NULL;
	Type_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B3_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B3_3 = NULL;
	EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* G_B3_4 = NULL;
	{
		EnumDescriptorProto_tE4726EED72F3F58DDE5B65653C460DBB7E1831A1* L_0 = ___type0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = __this->___file_0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((Type_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6;
		L_6 = GeneratedClrTypeInfo_get_NestedEnums_mF617D606C0482D67F62FF3439F65D19EE492995B_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Type_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F* L_10 = (EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F*)il2cpp_codegen_object_new(EnumDescriptor_t7C4C5FA7F27E5D07BC8337DDA4DF6AC7C5C89C2F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EnumDescriptor__ctor_m6E8306614E5BAD1C545EDEA4B3609B390EBB2D32(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__3(Google.Protobuf.Reflection.FieldDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m7AD1726DB9DC585C6480DDD4532DD51D38281A3A (U3CU3Ec__DisplayClass5_0_t6AF28F94D0100734E57456BBB09080A986A4B538* __this, FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* ___field0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B2_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B2_3 = NULL;
	FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B1_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B1_3 = NULL;
	FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* G_B3_2 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* G_B3_3 = NULL;
	FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* G_B3_4 = NULL;
	{
		FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* L_0 = ___field0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = __this->___file_0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = GeneratedClrTypeInfo_get_PropertyNames_m0A171A055701463503A3E71A12A5AC6F9D7C7905_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_10 = (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*)il2cpp_codegen_object_new(FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		FieldDescriptor__ctor_m23379FC95B9E5CE96A3A8679F0930B54BC4C5F40(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, (Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E*)NULL, NULL);
		return L_10;
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m74B5392097AE6079B6E9E240954E10B35AF3162A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59* L_0 = (U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59*)il2cpp_codegen_object_new(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0AC648C0EA3DC2C3A2A36E006E91EBDFAF212737(L_0, NULL);
		((U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0AC648C0EA3DC2C3A2A36E006E91EBDFAF212737 (U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.Protobuf.Reflection.MessageDescriptor/<>c::<.ctor>b__5_4(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__5_4_mD5ECCDE19E33EFF665B90C169CDA19D9E6313064 (U3CU3Ec_tB959395812478DEF8012C64CFE4A846570BA2C59* __this, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___field0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_0 = ___field0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FieldDescriptor_get_FieldNumber_m28F562DCEA5E9D9BBC6FE025DD14CFDC9AF929D2(L_0, NULL);
		return L_1;
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
// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* MethodDescriptor_get_Service_m28B2FC184DDD38D8959CD77B0FFF51D71F0EB756 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* L_0 = __this->___service_4;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* MethodDescriptor_get_InputType_m850DA5959B7B56B676EFE2BDA80B72291D0C0860 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___inputType_5;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_OutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* MethodDescriptor_get_OutputType_m185BFB186ED6947CE9EBAC7713D5B91569575AEE (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___outputType_6;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MethodDescriptor::get_IsClientStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptor_get_IsClientStreaming_m737E136988DA0222572D572278380556356944E5 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_0 = __this->___proto_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDescriptorProto_get_ClientStreaming_m00910C9E9CBACB35BA25E852634E66E44986FDA2(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.MethodDescriptor::get_IsServerStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptor_get_IsServerStreaming_mFB404F387A36B59F9D50172A8081EC7EE5683050 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_0 = __this->___proto_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDescriptorProto_get_ServerStreaming_mE0CF5F1887A746CAEDD42CEC36A56D7055F84741(L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MethodDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* MethodDescriptor_get_CustomOptions_m0D3D88DAB8637836334D9A278E7DF70E7DACE3C0 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_m138B67156210A111A7D2A6F69F98883417203488_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* G_B2_0 = NULL;
	MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* G_B1_0 = NULL;
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* G_B5_0 = NULL;
	ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA* G_B4_0 = NULL;
	ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA* G_B3_0 = NULL;
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_0;
		L_0 = MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D_inline(__this, NULL);
		NullCheck(L_0);
		MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* L_1;
		L_1 = MethodDescriptorProto_get_Options_m7FC17F749CD5902F60B849DF799B467801D7FCAF_inline(L_0, NULL);
		MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t4779DF5F557E1FAB8757C823D210C08736E535BA* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_m138B67156210A111A7D2A6F69F98883417203488_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_m138B67156210A111A7D2A6F69F98883417203488_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* L_6 = (CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8*)il2cpp_codegen_object_new(CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_m74D934C4D6222CE076344A99716ED295856984F6(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* MethodDescriptor_GetOptions_m0516E1E899647C094EE445F94AB796E39EEE9FAE (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* G_B2_0 = NULL;
	MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* G_B1_0 = NULL;
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_0;
		L_0 = MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D_inline(__this, NULL);
		NullCheck(L_0);
		MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* L_1;
		L_1 = MethodDescriptorProto_get_Options_m7FC17F749CD5902F60B849DF799B467801D7FCAF_inline(L_0, NULL);
		MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* L_3;
		L_3 = MethodOptions_Clone_m830D5835156E465D3F407B2D9C5A3F75FD6D5DB6(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.MethodDescriptor::.ctor(Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.ServiceDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor__ctor_mA2ED5A1EB21CF65F3CBD3269D942D2FD53D46CA7 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* ___parent2, int32_t ___index3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0 = ___file1;
		ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* L_1 = ___parent2;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline(L_1, NULL);
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_3 = ___proto0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = MethodDescriptorProto_get_Name_mDEDC55A12F8C32625EE56D015089EB626B36EB83(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_4, NULL);
		int32_t L_6 = ___index3;
		DescriptorBase__ctor_m50E6EE956FBF41B860838D3A7990D8D9973BE6BB(__this, L_0, L_5, L_6, NULL);
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_7 = ___proto0;
		__this->___proto_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_7);
		ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* L_8 = ___parent2;
		__this->___service_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___service_4), (void*)L_8);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_9 = ___file1;
		NullCheck(L_9);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_10;
		L_10 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_9, NULL);
		NullCheck(L_10);
		DescriptorPool_AddSymbol_m65899A264C9802C168B3467A39E9CE739E54AED4(L_10, __this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_0 = __this->___proto_3;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.MethodDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptor_get_Name_mC26B068C31FBF7170B6FEDD399D111C7C8D10DE8 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MethodDescriptorProto_get_Name_mDEDC55A12F8C32625EE56D015089EB626B36EB83(L_0, NULL);
		return L_1;
	}
}
// System.Void Google.Protobuf.Reflection.MethodDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor_CrossLink_m446B2FEBFAD05BB9D9B16D0725FC59E28E3B3BC9 (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0;
		L_0 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_0, NULL);
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_2;
		L_2 = MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = MethodDescriptorProto_get_InputType_mF54DC0A01F334AA05815DF0B91368B775ACBCF4B(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = DescriptorPool_LookupSymbol_mFEA397123107975080225FA100AA4E376334DC18(L_1, L_3, __this, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		if (((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)IsInstSealed((RuntimeObject*)L_5, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_6;
		L_6 = MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D_inline(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = MethodDescriptorProto_get_InputType_mF54DC0A01F334AA05815DF0B91368B775ACBCF4B(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A)), NULL);
		DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F* L_9 = (DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		DescriptorValidationException__ctor_mDE72DEF92A96D18B5943DC20067F0E4F5FDA5FFC(L_9, __this, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodDescriptor_CrossLink_m446B2FEBFAD05BB9D9B16D0725FC59E28E3B3BC9_RuntimeMethod_var)));
	}

IL_0046:
	{
		RuntimeObject* L_10 = V_0;
		__this->___inputType_5 = ((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)CastclassSealed((RuntimeObject*)L_10, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputType_5), (void*)((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)CastclassSealed((RuntimeObject*)L_10, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var)));
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_11;
		L_11 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_11);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_12;
		L_12 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_11, NULL);
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_13;
		L_13 = MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = MethodDescriptorProto_get_OutputType_m030B2CA752DECA9B8C660845448F938E1587FEBB(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = DescriptorPool_LookupSymbol_mFEA397123107975080225FA100AA4E376334DC18(L_12, L_14, __this, NULL);
		V_0 = L_15;
		RuntimeObject* L_16 = V_0;
		if (((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)IsInstSealed((RuntimeObject*)L_16, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var)))
		{
			goto IL_0098;
		}
	}
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_17;
		L_17 = MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D_inline(__this, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = MethodDescriptorProto_get_OutputType_m030B2CA752DECA9B8C660845448F938E1587FEBB(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A)), NULL);
		DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F* L_20 = (DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		DescriptorValidationException__ctor_mDE72DEF92A96D18B5943DC20067F0E4F5FDA5FFC(L_20, __this, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodDescriptor_CrossLink_m446B2FEBFAD05BB9D9B16D0725FC59E28E3B3BC9_RuntimeMethod_var)));
	}

IL_0098:
	{
		RuntimeObject* L_21 = V_0;
		__this->___outputType_6 = ((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)CastclassSealed((RuntimeObject*)L_21, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputType_6), (void*)((MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)CastclassSealed((RuntimeObject*)L_21, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_il2cpp_TypeInfo_var)));
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
// System.Void Google.Protobuf.Reflection.OneofAccessor::.ctor(Google.Protobuf.Reflection.OneofDescriptor,System.Func`2<Google.Protobuf.IMessage,System.Int32>,System.Action`1<Google.Protobuf.IMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor__ctor_mA48B83D961339C993F02BCB115483308CDEFC72C (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___descriptor0, Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* ___caseDelegate1, Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* ___clearDelegate2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_0 = ___descriptor0;
		__this->___U3CDescriptorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptorU3Ek__BackingField_2), (void*)L_0);
		Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* L_1 = ___caseDelegate1;
		__this->___caseDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caseDelegate_0), (void*)L_1);
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_2 = ___clearDelegate2;
		__this->___clearDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_1), (void*)L_2);
		return;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForRegularOneof(Google.Protobuf.Reflection.OneofDescriptor,System.Reflection.PropertyInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofAccessor_ForRegularOneof_m2EE0C8B5E24B2F888ECD0BF742A10412100613D0 (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___descriptor0, PropertyInfo_t* ___caseProperty1, MethodInfo_t* ___clearMethod2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_0 = ___descriptor0;
		PropertyInfo_t* L_1 = ___caseProperty1;
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* L_3;
		L_3 = ReflectionUtil_CreateFuncIMessageInt32_m5C257ECCBAA68093D516AA5E03B62AF53359E02F(L_2, NULL);
		MethodInfo_t* L_4 = ___clearMethod2;
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_5;
		L_5 = ReflectionUtil_CreateActionIMessage_mB94A9057512CE58287B5CDF566E0763D8F3D30A0(L_4, NULL);
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_6 = (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96*)il2cpp_codegen_object_new(OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		OneofAccessor__ctor_mA48B83D961339C993F02BCB115483308CDEFC72C(L_6, L_0, L_3, L_5, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForSyntheticOneof(Google.Protobuf.Reflection.OneofDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofAccessor_ForSyntheticOneof_m5B776A233E7E7DE8D949630DB2141E954FF78DBB (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* ___descriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_m954F7FA5FE36A6A9DF89B2FF6DDBDBC06F0530C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_mBD7F5251BD07AB83DEFEC91E31DBBCF8808789A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* L_0 = (U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m2CD9B9792301FEF2BE8FA4342CB9E4FFC1D5C330(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* L_1 = V_0;
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_2 = ___descriptor0;
		NullCheck(L_1);
		L_1->___descriptor_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___descriptor_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* L_3 = V_0;
		NullCheck(L_3);
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_4 = L_3->___descriptor_0;
		U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* L_5 = V_0;
		Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* L_6 = (Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0*)il2cpp_codegen_object_new(Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m987A493E33435BFDF6E82EF97194AA90F0E1A5AB(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_m954F7FA5FE36A6A9DF89B2FF6DDBDBC06F0530C2_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* L_7 = V_0;
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_8 = (Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3*)il2cpp_codegen_object_new(Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m496AD5EEDB96484BDBE697F2ACB302B3C4D399A2(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_mBD7F5251BD07AB83DEFEC91E31DBBCF8808789A9_RuntimeMethod_var), NULL);
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_9 = (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96*)il2cpp_codegen_object_new(OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		OneofAccessor__ctor_mA48B83D961339C993F02BCB115483308CDEFC72C(L_9, L_4, L_6, L_8, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* OneofAccessor_get_Descriptor_mFD6C7DEAEB781D21086FDD3AEA6C4E36F9D234FA (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_0 = __this->___U3CDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OneofAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor_Clear_m84A12243AF775FEEDDEBDC98DE997ADAC6A0E7E0 (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_0 = __this->___clearDelegate_1;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_mB9DEBD04AE7D255A4BE44E0B97D52F502E8362DA_inline(L_0, L_1, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.OneofAccessor::GetCaseFieldDescriptor(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* OneofAccessor_GetCaseFieldDescriptor_m5673B212FE85FD3908936C97DCBF25C54CFF01F1 (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* L_0 = __this->___caseDelegate_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Func_2_Invoke_m04B87794947FB010157C0417E339B80E65286A97_inline(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*)NULL;
	}

IL_0013:
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_4;
		L_4 = OneofAccessor_get_Descriptor_mFD6C7DEAEB781D21086FDD3AEA6C4E36F9D234FA_inline(__this, NULL);
		NullCheck(L_4);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_5;
		L_5 = OneofDescriptor_get_ContainingType_mEC839ED1E8839D10E689A7C7E83F405791BC001A_inline(L_4, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_7;
		L_7 = MessageDescriptor_FindFieldByNumber_mAD2978F829E16C698460EBEDB98F967B3A11C343(L_5, L_6, NULL);
		return L_7;
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
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m2CD9B9792301FEF2BE8FA4342CB9E4FFC1D5C330 (U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::<ForSyntheticOneof>b__0(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_m954F7FA5FE36A6A9DF89B2FF6DDBDBC06F0530C2 (U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFieldAccessor_t8E9765666D2BF5663858BA23769714BFBF94D346_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE6AA5DEDB905A2700425D6966094A8CF99A95F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_0 = __this->___descriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = OneofDescriptor_get_Fields_m85369DB89C3F648BD60712088482BEE7F4F14757_inline(L_0, NULL);
		NullCheck(L_1);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_2;
		L_2 = InterfaceFuncInvoker1< FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_tCE6AA5DEDB905A2700425D6966094A8CF99A95F0_il2cpp_TypeInfo_var, L_1, 0);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldDescriptor_get_Accessor_mC6951F6A450F65DC83D3C00C4C624973CD665DE9_inline(L_2, NULL);
		RuntimeObject* L_4 = ___message0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean Google.Protobuf.Reflection.IFieldAccessor::HasValue(Google.Protobuf.IMessage) */, IFieldAccessor_t8E9765666D2BF5663858BA23769714BFBF94D346_il2cpp_TypeInfo_var, L_3, L_4);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_6 = __this->___descriptor_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = OneofDescriptor_get_Fields_m85369DB89C3F648BD60712088482BEE7F4F14757_inline(L_6, NULL);
		NullCheck(L_7);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_8;
		L_8 = InterfaceFuncInvoker1< FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_tCE6AA5DEDB905A2700425D6966094A8CF99A95F0_il2cpp_TypeInfo_var, L_7, 0);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = FieldDescriptor_get_FieldNumber_m28F562DCEA5E9D9BBC6FE025DD14CFDC9AF929D2(L_8, NULL);
		return L_9;
	}
}
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::<ForSyntheticOneof>b__1(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_mBD7F5251BD07AB83DEFEC91E31DBBCF8808789A9 (U3CU3Ec__DisplayClass4_0_t466BDEDF268279262E82FBD0EF71E52E4EDE376C* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFieldAccessor_t8E9765666D2BF5663858BA23769714BFBF94D346_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE6AA5DEDB905A2700425D6966094A8CF99A95F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_0 = __this->___descriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = OneofDescriptor_get_Fields_m85369DB89C3F648BD60712088482BEE7F4F14757_inline(L_0, NULL);
		NullCheck(L_1);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_2;
		L_2 = InterfaceFuncInvoker1< FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_tCE6AA5DEDB905A2700425D6966094A8CF99A95F0_il2cpp_TypeInfo_var, L_1, 0);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldDescriptor_get_Accessor_mC6951F6A450F65DC83D3C00C4C624973CD665DE9_inline(L_2, NULL);
		RuntimeObject* L_4 = ___message0;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Google.Protobuf.Reflection.IFieldAccessor::Clear(Google.Protobuf.IMessage) */, IFieldAccessor_t8E9765666D2BF5663858BA23769714BFBF94D346_il2cpp_TypeInfo_var, L_3, L_4);
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
// System.Void Google.Protobuf.Reflection.OneofDescriptor::.ctor(Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor__ctor_mBF9F3A561FEF1426043E9553C84922DB3897379F (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___parent2, int32_t ___index3, String_t* ___clrName4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_m23D147E06E9F4D5BF82FFD65A82D25D393DCC3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mACCC1F13A04398127B21FCE0382BD06D52873AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9* V_0 = NULL;
	FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* V_1 = NULL;
	OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* G_B2_0 = NULL;
	OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9* L_0 = (U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m856F4854B5D69FE2A94E9807FEBFDFC7A37DEBE4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9* L_1 = V_0;
		int32_t L_2 = ___index3;
		NullCheck(L_1);
		L_1->___index_0 = L_2;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_3 = ___file1;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_4 = ___file1;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_5 = ___parent2;
		OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* L_6 = ___proto0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = OneofDescriptorProto_get_Name_mC9DC927D3A39199D1DC33833314CD47C7A6055A0(L_6, NULL);
		NullCheck(L_4);
		String_t* L_8;
		L_8 = FileDescriptor_ComputeFullName_mFF8D5D9FDCE3A8A1B822DAE448206BD316DD4E59(L_4, L_5, L_7, NULL);
		U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___index_0;
		DescriptorBase__ctor_m50E6EE956FBF41B860838D3A7990D8D9973BE6BB(__this, L_3, L_8, L_10, NULL);
		OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* L_11 = ___proto0;
		__this->___proto_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_11);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_12 = ___parent2;
		__this->___containingType_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___containingType_4), (void*)L_12);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_13 = ___file1;
		NullCheck(L_13);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_14;
		L_14 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_13, NULL);
		NullCheck(L_14);
		DescriptorPool_AddSymbol_m65899A264C9802C168B3467A39E9CE739E54AED4(L_14, __this, NULL);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_15 = ___parent2;
		NullCheck(L_15);
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_16;
		L_16 = MessageDescriptor_get_Proto_m779C4673C5386BCCACCB9A316D5BA640BE2ED9AC_inline(L_15, NULL);
		NullCheck(L_16);
		RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5* L_17;
		L_17 = DescriptorProto_get_Field_m9BAE0C869C27DA89F4D1DD5FCE9F446A9240EEE8_inline(L_16, NULL);
		U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9* L_18 = V_0;
		Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7* L_19 = (Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7*)il2cpp_codegen_object_new(Func_2_t19F02A1CCE455DB0CA10DF1B672BF2E3EEBB30D7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_m61AC8D6E3F050B04BE93477F39769A5A8FA58CB1(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mACCC1F13A04398127B21FCE0382BD06D52873AD1_RuntimeMethod_var), NULL);
		FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* L_20;
		L_20 = Enumerable_FirstOrDefault_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_m23D147E06E9F4D5BF82FFD65A82D25D393DCC3D5(L_17, L_19, Enumerable_FirstOrDefault_TisFieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7_m23D147E06E9F4D5BF82FFD65A82D25D393DCC3D5_RuntimeMethod_var);
		V_1 = L_20;
		FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* L_21 = V_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_0066;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_006c;
	}

IL_0066:
	{
		FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* L_22 = V_1;
		NullCheck(L_22);
		bool L_23;
		L_23 = FieldDescriptorProto_get_Proto3Optional_mF03CAEDFB509408D266EE7CC51CD8DE22CC69044(L_22, NULL);
		G_B3_0 = ((int32_t)(L_23));
		G_B3_1 = G_B2_0;
	}

IL_006c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___U3CIsSyntheticU3Ek__BackingField_7 = (bool)G_B3_0;
		String_t* L_24 = ___clrName4;
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_25;
		L_25 = OneofDescriptor_CreateAccessor_m90C16A1A2D57206F178F01F487F78A2CFB63D183(__this, L_24, NULL);
		__this->___accessor_6 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessor_6), (void*)L_25);
		return;
	}
}
// System.String Google.Protobuf.Reflection.OneofDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneofDescriptor_get_Name_m784CD9FCCD5543689BE4B5AC609EB2EDE208749A (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = OneofDescriptorProto_get_Name_mC9DC927D3A39199D1DC33833314CD47C7A6055A0(L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* OneofDescriptor_get_ContainingType_mEC839ED1E8839D10E689A7C7E83F405791BC001A (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___containingType_4;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_m85369DB89C3F648BD60712088482BEE7F4F14757 (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___fields_5;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::get_IsSynthetic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_mF41242B22BDA563D27858560A7EA7A5B455FA408 (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsSyntheticU3Ek__BackingField_7;
		return L_0;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::get_Accessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofDescriptor_get_Accessor_m95C38301E140CFAD53B6E521D0848FB3A7E0F13E (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_0 = __this->___accessor_6;
		return L_0;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.OneofDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* OneofDescriptor_get_CustomOptions_m595AF6A3CA57ABE17BD7BD52D8009FDFD98751CC (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_mED55393806CEDEA243FAE11DE177584F0078C07C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* G_B2_0 = NULL;
	OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* G_B1_0 = NULL;
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* G_B5_0 = NULL;
	ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD* G_B4_0 = NULL;
	ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD* G_B3_0 = NULL;
	{
		OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* L_0 = __this->___proto_3;
		NullCheck(L_0);
		OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* L_1;
		L_1 = OneofDescriptorProto_get_Options_mAE42F8445D3082BBF07FED914E8955E6FD9E821F_inline(L_0, NULL);
		OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t1A803EE3FF57E8B1E300EB6DB33916D9C1579EBD* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_mED55393806CEDEA243FAE11DE177584F0078C07C_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_mED55393806CEDEA243FAE11DE177584F0078C07C_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* L_6 = (CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8*)il2cpp_codegen_object_new(CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_m74D934C4D6222CE076344A99716ED295856984F6(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* OneofDescriptor_GetOptions_mEC15461F1B28231F9A05226A1B65B5589255008C (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* G_B2_0 = NULL;
	OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* G_B1_0 = NULL;
	{
		OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* L_0 = __this->___proto_3;
		NullCheck(L_0);
		OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* L_1;
		L_1 = OneofDescriptorProto_get_Options_mAE42F8445D3082BBF07FED914E8955E6FD9E821F_inline(L_0, NULL);
		OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* L_3;
		L_3 = OneofOptions_Clone_m7072ACBD8281FED355881FBDA6167A77DBF5D5CC(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.OneofDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor_CrossLink_m7387A8BDAEDF932A86DD73FAF63C6AD9C043C6FC (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t530F4ABCC61B9EAED7FA1A166C837D4098FE31ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t65A31ECDF74FB98A863A85E9B7BCFED5A7E51129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m71824B3EEE5B25E3FCE5B1DF40C6DEE66324C292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m96006D302E1523071908B261B9B6EC56B80F725E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m8A5D75400BF356B09A1A98A65AFB190540B457AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* V_2 = NULL;
	{
		List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B* L_0 = (List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B*)il2cpp_codegen_object_new(List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m96006D302E1523071908B261B9B6EC56B80F725E(L_0, List_1__ctor_m96006D302E1523071908B261B9B6EC56B80F725E_RuntimeMethod_var);
		V_0 = L_0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_1;
		L_1 = OneofDescriptor_get_ContainingType_mEC839ED1E8839D10E689A7C7E83F405791BC001A_inline(__this, NULL);
		NullCheck(L_1);
		FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* L_2;
		L_2 = MessageDescriptor_get_Fields_m4D22A285B857FA236321E054082857868E7152D0_inline(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldCollection_InDeclarationOrder_mF4FE1B78F895AD4D6053E8F2FB181811A67334F5(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_t530F4ABCC61B9EAED7FA1A166C837D4098FE31ED_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_001e_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_8;
				L_8 = InterfaceFuncInvoker0< FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_t65A31ECDF74FB98A863A85E9B7BCFED5A7E51129_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_9 = V_2;
				NullCheck(L_9);
				OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_10;
				L_10 = FieldDescriptor_get_ContainingOneof_m09F61680A1EA3A6C3A6E07AB4BCB837A70DDF2AD_inline(L_9, NULL);
				if ((!(((RuntimeObject*)(OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C*)L_10) == ((RuntimeObject*)(OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C*)__this))))
				{
					goto IL_0035_1;
				}
			}
			{
				List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B* L_11 = V_0;
				FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_12 = V_2;
				NullCheck(L_11);
				List_1_Add_m71824B3EEE5B25E3FCE5B1DF40C6DEE66324C292_inline(L_11, L_12, List_1_Add_m71824B3EEE5B25E3FCE5B1DF40C6DEE66324C292_RuntimeMethod_var);
			}

IL_0035_1:
			{
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_tB4ED1ED03F352AA60948CB3C1AD3496A79C6854B* L_15 = V_0;
		ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A* L_16 = (ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t841CFD209049927725F74E006BD66BFAD8E3434A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReadOnlyCollection_1__ctor_m8A5D75400BF356B09A1A98A65AFB190540B457AA(L_16, L_15, ReadOnlyCollection_1__ctor_m8A5D75400BF356B09A1A98A65AFB190540B457AA_RuntimeMethod_var);
		__this->___fields_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fields_5), (void*)L_16);
		return;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::CreateAccessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofDescriptor_CreateAccessor_m90C16A1A2D57206F178F01F487F78A2CFB63D183 (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, String_t* ___clrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		String_t* L_0 = ___clrName0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96*)NULL;
	}

IL_0005:
	{
		bool L_1;
		L_1 = OneofDescriptor_get_IsSynthetic_mF41242B22BDA563D27858560A7EA7A5B455FA408_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_2;
		L_2 = OneofAccessor_ForSyntheticOneof_m5B776A233E7E7DE8D949630DB2141E954FF78DBB(__this, NULL);
		return L_2;
	}

IL_0014:
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_3 = __this->___containingType_4;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65_inline(L_3, NULL);
		String_t* L_5 = ___clrName0;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, _stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8, NULL);
		NullCheck(L_4);
		PropertyInfo_t* L_7;
		L_7 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_4, L_6, NULL);
		V_0 = L_7;
		PropertyInfo_t* L_8 = V_0;
		bool L_9;
		L_9 = PropertyInfo_op_Equality_mD077C524E99EF7A3C977705217D3A88AB4DE5C13(L_8, (PropertyInfo_t*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_10 = ___clrName0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_11 = __this->___containingType_4;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65_inline(L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC735ABBBA0A4054E66CE20DF45D76FB73FAFF691)), L_10, L_12, NULL);
		DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F* L_14 = (DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		DescriptorValidationException__ctor_mDE72DEF92A96D18B5943DC20067F0E4F5FDA5FFC(L_14, __this, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_m90C16A1A2D57206F178F01F487F78A2CFB63D183_RuntimeMethod_var)));
	}

IL_0056:
	{
		PropertyInfo_t* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_15);
		if (L_16)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_17 = ___clrName0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_18 = __this->___containingType_4;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65_inline(L_18, NULL);
		String_t* L_20;
		L_20 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD47CF5D6FE76B6693D0F4ADFBC7B1D127FBC8366)), L_17, L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_m90C16A1A2D57206F178F01F487F78A2CFB63D183_RuntimeMethod_var)));
	}

IL_007a:
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_22 = __this->___containingType_4;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65_inline(L_22, NULL);
		String_t* L_24 = ___clrName0;
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, L_24, NULL);
		NullCheck(L_23);
		MethodInfo_t* L_26;
		L_26 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_23, L_25, NULL);
		V_1 = L_26;
		MethodInfo_t* L_27 = V_1;
		bool L_28;
		L_28 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_27, (MethodInfo_t*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_29 = ___clrName0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_30 = __this->___containingType_4;
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65_inline(L_30, NULL);
		String_t* L_32;
		L_32 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F6EBD2865CE2FCCB1136CB39B9E6777A5F4777C)), L_29, L_31, NULL);
		DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F* L_33 = (DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t78835D5B4DC6206ADC1E5E95213185501070485F_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		DescriptorValidationException__ctor_mDE72DEF92A96D18B5943DC20067F0E4F5FDA5FFC(L_33, __this, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_m90C16A1A2D57206F178F01F487F78A2CFB63D183_RuntimeMethod_var)));
	}

IL_00bc:
	{
		PropertyInfo_t* L_34 = V_0;
		MethodInfo_t* L_35 = V_1;
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_36;
		L_36 = OneofAccessor_ForRegularOneof_m2EE0C8B5E24B2F888ECD0BF742A10412100613D0(__this, L_34, L_35, NULL);
		return L_36;
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
// System.Void Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m856F4854B5D69FE2A94E9807FEBFDFC7A37DEBE4 (U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::<.ctor>b__0(Google.Protobuf.Reflection.FieldDescriptorProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mACCC1F13A04398127B21FCE0382BD06D52873AD1 (U3CU3Ec__DisplayClass4_0_t2BB685933BECAA3080A566879EF41509159E95A9* __this, FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* ___fieldProto0, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* L_0 = ___fieldProto0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldDescriptorProto_get_HasOneofIndex_m91E658AA5360C8EB63BD76EDF650388E9928426B(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* L_2 = ___fieldProto0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FieldDescriptorProto_get_OneofIndex_m497600A639B16746586CEB8EB664C1804060654A(L_2, NULL);
		int32_t L_4 = __this->___index_0;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
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
// System.String Google.Protobuf.Reflection.OriginalNameAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OriginalNameAttribute_get_Name_mA1709533F2379407DDC33DE1228BEB173DA2ABD2 (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m4F6221B51D8A6F9A7ACD78A6FD6AB77C4EE4E1E1 (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::get_PreferredAlias()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OriginalNameAttribute_get_PreferredAlias_mFA8E547EA27009672A01083AC9B22A4B2D0EB667 (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CPreferredAliasU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_PreferredAlias(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m354F22F66E277B678216259D9E4E325D71C8291D (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPreferredAliasU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute__ctor_m2A8F1C0A8C01E6B2D8F4335AB6E836CC1CF341AE (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisString_t_mD0EA4534FC262B782CD7AB66C1763CBDA60D3AC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		String_t* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisString_t_mD0EA4534FC262B782CD7AB66C1763CBDA60D3AC1(L_0, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, ProtoPreconditions_CheckNotNull_TisString_t_mD0EA4534FC262B782CD7AB66C1763CBDA60D3AC1_RuntimeMethod_var);
		OriginalNameAttribute_set_Name_m4F6221B51D8A6F9A7ACD78A6FD6AB77C4EE4E1E1_inline(__this, L_1, NULL);
		OriginalNameAttribute_set_PreferredAlias_m354F22F66E277B678216259D9E4E325D71C8291D_inline(__this, (bool)1, NULL);
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
// System.Void Google.Protobuf.Reflection.PackageDescriptor::.ctor(System.String,System.String,Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageDescriptor__ctor_m10591D6C6D7870A0A203274628BEE70223C9B491 (PackageDescriptor_tFB3A45AF2F30CCCFBF120560E6BABC4009BC5DCC* __this, String_t* ___name0, String_t* ___fullName1, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0 = ___file2;
		__this->___file_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___file_2), (void*)L_0);
		String_t* L_1 = ___fullName1;
		__this->___fullName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullName_1), (void*)L_1);
		String_t* L_2 = ___name0;
		__this->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_2);
		return;
	}
}
// System.String Google.Protobuf.Reflection.PackageDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PackageDescriptor_get_Name_m8097768D9459DA6239C1200A53F4627FDD3FF2D1 (PackageDescriptor_tFB3A45AF2F30CCCFBF120560E6BABC4009BC5DCC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.PackageDescriptor::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PackageDescriptor_get_FullName_m619322B67E62B5CF7ECD4A745BF213C2213F9015 (PackageDescriptor_tFB3A45AF2F30CCCFBF120560E6BABC4009BC5DCC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___fullName_1;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.PackageDescriptor::get_File()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* PackageDescriptor_get_File_mABC5080C95053BC1CE0CFA7D607A2975781046C5 (PackageDescriptor_tFB3A45AF2F30CCCFBF120560E6BABC4009BC5DCC* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0 = __this->___file_2;
		return L_0;
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
// System.Void Google.Protobuf.Reflection.ReflectionUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil__cctor_mDA28BA4F90B859254B7185E0FD7C2069606BEC65 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD861A25B270D5A4D4B40BC4628325D166A5511FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAE63C2CE6181EC1D574229EEAB434C90F000402A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34C472C904B4130714367720101F6D3D8DDEE60A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDEE358EF9748B7400732EC2B173AF58B24575506_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m1984E7D21EA05A037FD10A5A49CCE7CE2C8EAFB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mC9B1A97904B8269F01830BAF4D04D5C968F76C82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mFB0BD62BBC79647D97DE60F653AB81596EEF17D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mC3A4F9EF72A275B8CD8A89EF88BC221DF3756156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2AF7576C557A94559D8245CE45FC3F55809A2607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_m721D251AA6FB5CB6A729695C6F7F6A1E85115CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA80609F51D877AE255E0A2EB2AA8B70196D3AFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisSampleEnum_t6A9540C415F3C8D504A46CBA3CFCE8DD55D8D968_m6C200B16A03C8CE2763FE68EC7D8E7905EF12493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8571185C2A8895AE12CEF05633A270FEDBF6EE1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisString_t_m1A8DDF66AABECC7AE0ED58E521EED6B20D48ED17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC12AEA11FD90055CF63EA23EA672CC6BDCF408F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5C258402CEA38F96938B34CB7848772BBA1CECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		((ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var))->___EmptyTypes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var))->___EmptyTypes_0), (void*)L_0);
		bool L_1;
		L_1 = ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_mFFB84B0A61F7F83CA7553B8DAB80AE36DAC35716(NULL);
		((ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var))->___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1 = L_1;
		ReflectionUtil_ForceInitialize_TisString_t_m1A8DDF66AABECC7AE0ED58E521EED6B20D48ED17(ReflectionUtil_ForceInitialize_TisString_t_m1A8DDF66AABECC7AE0ED58E521EED6B20D48ED17_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34C472C904B4130714367720101F6D3D8DDEE60A(ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34C472C904B4130714367720101F6D3D8DDEE60A_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDEE358EF9748B7400732EC2B173AF58B24575506(ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDEE358EF9748B7400732EC2B173AF58B24575506_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC12AEA11FD90055CF63EA23EA672CC6BDCF408F5(ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC12AEA11FD90055CF63EA23EA672CC6BDCF408F5_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5C258402CEA38F96938B34CB7848772BBA1CECD(ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5C258402CEA38F96938B34CB7848772BBA1CECD_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8571185C2A8895AE12CEF05633A270FEDBF6EE1C(ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8571185C2A8895AE12CEF05633A270FEDBF6EE1C_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAE63C2CE6181EC1D574229EEAB434C90F000402A(ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAE63C2CE6181EC1D574229EEAB434C90F000402A_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD861A25B270D5A4D4B40BC4628325D166A5511FC(ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD861A25B270D5A4D4B40BC4628325D166A5511FC_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2AF7576C557A94559D8245CE45FC3F55809A2607(ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2AF7576C557A94559D8245CE45FC3F55809A2607_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m1984E7D21EA05A037FD10A5A49CCE7CE2C8EAFB7(ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m1984E7D21EA05A037FD10A5A49CCE7CE2C8EAFB7_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_m721D251AA6FB5CB6A729695C6F7F6A1E85115CBD(ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_m721D251AA6FB5CB6A729695C6F7F6A1E85115CBD_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA80609F51D877AE255E0A2EB2AA8B70196D3AFAC(ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA80609F51D877AE255E0A2EB2AA8B70196D3AFAC_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mC9B1A97904B8269F01830BAF4D04D5C968F76C82(ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mC9B1A97904B8269F01830BAF4D04D5C968F76C82_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mFB0BD62BBC79647D97DE60F653AB81596EEF17D0(ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_mFB0BD62BBC79647D97DE60F653AB81596EEF17D0_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mC3A4F9EF72A275B8CD8A89EF88BC221DF3756156(ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mC3A4F9EF72A275B8CD8A89EF88BC221DF3756156_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisSampleEnum_t6A9540C415F3C8D504A46CBA3CFCE8DD55D8D968_m6C200B16A03C8CE2763FE68EC7D8E7905EF12493(ReflectionUtil_ForceInitialize_TisSampleEnum_t6A9540C415F3C8D504A46CBA3CFCE8DD55D8D968_m6C200B16A03C8CE2763FE68EC7D8E7905EF12493_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReflectionUtil_SampleEnumMethod_m80EA32D3DC64CE83204245B2620A3A7B360F0A98(NULL);
		return;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t785BD751BA3D84313491F6396FF210AC08198B2A* ReflectionUtil_CreateFuncIMessageObject_m2CCB05E20CA58D5E0DB1C9E83C5ED9A469C93C89 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(41 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_m2706955D1B1108FDDBACDA1166D77FD6CCE7C906(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_t785BD751BA3D84313491F6396FF210AC08198B2A* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_t785BD751BA3D84313491F6396FF210AC08198B2A*, MethodInfo_t* >::Invoke(2 /* System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageObject(System.Reflection.MethodInfo) */, IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageInt32(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* ReflectionUtil_CreateFuncIMessageInt32_m5C257ECCBAA68093D516AA5E03B62AF53359E02F (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(41 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_m2706955D1B1108FDDBACDA1166D77FD6CCE7C906(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_tAD886E8776AC865DA9A0F3FFD92230527A088BF0*, MethodInfo_t* >::Invoke(0 /* System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageInt32(System.Reflection.MethodInfo) */, IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2* ReflectionUtil_CreateActionIMessageObject_mA2F8141CA84E49459F0BADF97018211CA058E3AD (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		NullCheck(L_3);
		int32_t L_4 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_5);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ReflectionUtil_GetReflectionHelper_m2706955D1B1108FDDBACDA1166D77FD6CCE7C906(L_1, L_6, NULL);
		MethodInfo_t* L_8 = ___method0;
		NullCheck(L_7);
		Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2* L_9;
		L_9 = InterfaceFuncInvoker1< Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2*, MethodInfo_t* >::Invoke(3 /* System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateActionIMessageObject(System.Reflection.MethodInfo) */, IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var, L_7, L_8);
		return L_9;
	}
}
// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessage(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* ReflectionUtil_CreateActionIMessage_mB94A9057512CE58287B5CDF566E0763D8F3D30A0 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_m2706955D1B1108FDDBACDA1166D77FD6CCE7C906(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_6;
		L_6 = InterfaceFuncInvoker1< Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3*, MethodInfo_t* >::Invoke(1 /* System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateActionIMessage(System.Reflection.MethodInfo) */, IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageBool(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* ReflectionUtil_CreateFuncIMessageBool_mDFFC1CA0EB062EB1434B99FCF442DC43FDD41F24 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(41 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_m2706955D1B1108FDDBACDA1166D77FD6CCE7C906(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_tA2EE063C789FC68882F4C9E821082F043939B622*, MethodInfo_t* >::Invoke(4 /* System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageBool(System.Reflection.MethodInfo) */, IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateIsInitializedCaller(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* ReflectionUtil_CreateIsInitializedCaller_mBAA937D90926232F7991625F93D6A049AE62A543 (Type_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSetReflector_1_t71ECC5928D51A9C384BF3FBC7704AFE281613553_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExtensionSetReflector_t71459EAD4F5A5E0B6BC7469322A1ACA8B9EA9FB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ExtensionSetReflector_1_t71ECC5928D51A9C384BF3FBC7704AFE281613553_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___msg0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		NullCheck(L_1);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_3);
		RuntimeObject* L_6;
		L_6 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_5, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IExtensionSetReflector_t71459EAD4F5A5E0B6BC7469322A1ACA8B9EA9FB2_il2cpp_TypeInfo_var)));
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_7;
		L_7 = InterfaceFuncInvoker0< Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* >::Invoke(0 /* System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil/IExtensionSetReflector::CreateIsInitializedCaller() */, IExtensionSetReflector_t71459EAD4F5A5E0B6BC7469322A1ACA8B9EA9FB2_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IExtensionSetReflector_t71459EAD4F5A5E0B6BC7469322A1ACA8B9EA9FB2_il2cpp_TypeInfo_var)));
		return L_7;
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/IExtensionReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::CreateExtensionHelper(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_CreateExtensionHelper_m6EC3455104C7CE2785847E164F732A2DF9BC1B9F (Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionReflectionHelper_2_tA72A3B5FDB9CF1686A279CF221D3A15700C44319_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExtensionReflectionHelper_tFD445490847160159BE2050F08834D98F9DDC7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ExtensionReflectionHelper_2_tA72A3B5FDB9CF1686A279CF221D3A15700C44319_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* L_4 = ___extension0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type Google.Protobuf.Extension::get_TargetType() */, L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* L_7 = ___extension0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		NullCheck(L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9;
		L_9 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(48 /* System.Type[] System.Type::get_GenericTypeArguments() */, L_8);
		NullCheck(L_9);
		int32_t L_10 = 1;
		Type_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_11);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_11);
		NullCheck(L_1);
		Type_t* L_12;
		L_12 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* L_15 = ___extension0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		RuntimeObject* L_16;
		L_16 = Activator_CreateInstance_m978D6F745618B691D632E5D6E4AB8840541FC858(L_12, L_14, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IExtensionReflectionHelper_tFD445490847160159BE2050F08834D98F9DDC7D7_il2cpp_TypeInfo_var));
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::GetReflectionHelper(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_GetReflectionHelper_m2706955D1B1108FDDBACDA1166D77FD6CCE7C906 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_2_tA07EDF772DDCEA85866F4C6CB6B403F15D215B64_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ReflectionHelper_2_tA07EDF772DDCEA85866F4C6CB6B403F15D215B64_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___t10;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = L_3;
		Type_t* L_6 = ___t21;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_6);
		NullCheck(L_1);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_5);
		RuntimeObject* L_8;
		L_8 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_7, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IReflectionHelper_t4739AB09D7EB185EB24794BCD97B64EF85B3DC4A_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::get_CanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_get_CanConvertEnumFuncToInt32Func_m014DA8F13DEC0246921E9238C62F6E0D79375154 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		bool L_0 = ((ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var))->___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::CheckCanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_mFFB84B0A61F7F83CA7553B8DAB80AE36DAC35716 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		NullCheck(L_2);
		Delegate_t* L_5;
		L_5 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(44 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_2, L_4);
		V_0 = (bool)1;
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.ArgumentException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002d;
	}// end catch (depth: 1)

IL_002d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/SampleEnum Google.Protobuf.Reflection.ReflectionUtil::SampleEnumMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionUtil_SampleEnumMethod_m80EA32D3DC64CE83204245B2620A3A7B360F0A98 (const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
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
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor__ctor_mDA6B54CA3D03CB5F59E1D1ACA3D5494115FD0CDB (RepeatedFieldAccessor_t92A84CE33826C08ADD4115FAFC4FCAFB989EC065* __this, PropertyInfo_t* ___property0, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___descriptor1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_m7DB378293BBD3D02938F8C65EF2AE5D4F494FCA7(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor_Clear_m4A4097C98DE42CA974FF62D8D28CDE477E66207E (RepeatedFieldAccessor_t92A84CE33826C08ADD4115FAFC4FCAFB989EC065* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		RuntimeObject* L_1;
		L_1 = FieldAccessorBase_GetValue_m68EB618FFF7E0F5D82CEDF61FE189E2AA2F2F2ED(__this, L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.RepeatedFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RepeatedFieldAccessor_HasValue_m916D8E6D4C2E7A97FAF15AA5C756FFF8462A635A (RepeatedFieldAccessor_t92A84CE33826C08ADD4115FAFC4FCAFB989EC065* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD25853350172E0B01427BE241CD73C9EA8AD7200)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RepeatedFieldAccessor_HasValue_m916D8E6D4C2E7A97FAF15AA5C756FFF8462A635A_RuntimeMethod_var)));
	}
}
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor_SetValue_mB2481D9FC7EA13CC44D661072A3EEA7F84F39782 (RepeatedFieldAccessor_t92A84CE33826C08ADD4115FAFC4FCAFB989EC065* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral352DC1AD46B06976FE1F09D69AD2AE07BA1C912F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RepeatedFieldAccessor_SetValue_mB2481D9FC7EA13CC44D661072A3EEA7F84F39782_RuntimeMethod_var)));
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
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::.ctor(Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m757DB0E03CF2C6BBF11E35669F8C1E17A80F0880 (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* ___proto0, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file1, int32_t ___index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_m58B48DE3EB44ADF87A3610AC95AEFAE038B082BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m6D47F0876CE1EDA5AE29F153841C78874DC03F04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* L_0 = (U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m527D22236ABFF3A7246C72C7E0526B2838E38BE0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* L_1 = V_0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* L_3 = V_0;
		NullCheck(L_3);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_4 = L_3->___file_0;
		U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_6 = L_5->___file_0;
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_7 = ___proto0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ServiceDescriptorProto_get_Name_mF439401AB593E352517CEE2884E025262DEA2058(L_7, NULL);
		NullCheck(L_6);
		String_t* L_9;
		L_9 = FileDescriptor_ComputeFullName_mFF8D5D9FDCE3A8A1B822DAE448206BD316DD4E59(L_6, (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*)NULL, L_8, NULL);
		int32_t L_10 = ___index2;
		DescriptorBase__ctor_m50E6EE956FBF41B860838D3A7990D8D9973BE6BB(__this, L_4, L_9, L_10, NULL);
		U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* L_11 = V_0;
		NullCheck(L_11);
		L_11->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___U3CU3E4__this_1), (void*)__this);
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_12 = ___proto0;
		__this->___proto_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_12);
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_13 = ___proto0;
		NullCheck(L_13);
		RepeatedField_1_tC71BBCB23642B3126ADFDD7AAD03AE3F31B9D191* L_14;
		L_14 = ServiceDescriptorProto_get_Method_m88B64CDC59201D684734EAFCEF03E4C06F44D2E4_inline(L_13, NULL);
		U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* L_15 = V_0;
		IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D* L_16 = (IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D*)il2cpp_codegen_object_new(IndexedConverter_2_tE14909D526A3710C3F4F35954C6476F6AE44276D_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		IndexedConverter_2__ctor_m375CFDDFC0F2D76FFE6E49200A74E2A54F60E930(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m6D47F0876CE1EDA5AE29F153841C78874DC03F04_RuntimeMethod_var), NULL);
		RuntimeObject* L_17;
		L_17 = DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_m58B48DE3EB44ADF87A3610AC95AEFAE038B082BF(L_14, L_16, DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_m58B48DE3EB44ADF87A3610AC95AEFAE038B082BF_RuntimeMethod_var);
		__this->___methods_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methods_4), (void*)L_17);
		U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* L_18 = V_0;
		NullCheck(L_18);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_19 = L_18->___file_0;
		NullCheck(L_19);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_20;
		L_20 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_19, NULL);
		NullCheck(L_20);
		DescriptorPool_AddSymbol_m65899A264C9802C168B3467A39E9CE739E54AED4(L_20, __this, NULL);
		return;
	}
}
// System.String Google.Protobuf.Reflection.ServiceDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptor_get_Name_mFC23049611FAE40F8668C11F88466011358B4373 (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ServiceDescriptorProto_get_Name_mF439401AB593E352517CEE2884E025262DEA2058(L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase> Google.Protobuf.Reflection.ServiceDescriptor::GetNestedDescriptorListForField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_GetNestedDescriptorListForField_mCFBA4F46E617016C842641BA1BD4E4D0FF0A3BF3 (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, int32_t ___fieldNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tA68C4C598B82FDA44515C1167011383AD9193AB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_1 = __this->___methods_4;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IReadOnlyList_1_tA68C4C598B82FDA44515C1167011383AD9193AB2_il2cpp_TypeInfo_var));
	}

IL_0010:
	{
		return (RuntimeObject*)NULL;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* ServiceDescriptor_get_Proto_m5896896C9E7D11EAD3ABB9A4AE3F3E6700F57E95 (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_0 = __this->___proto_3;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::get_Methods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_get_Methods_m37EC284E4D982B636A67936E9D37032F991E09E1 (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___methods_4;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MethodDescriptor Google.Protobuf.Reflection.ServiceDescriptor::FindMethodByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* ServiceDescriptor_FindMethodByName_mED4DCE247710AF41FDEE5D9C7AB5F8B11C5FE38C (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_mDFD273FEC4DC52BC822EE25FFE225118D95C2475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0;
		L_0 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* L_5;
		L_5 = DescriptorPool_FindSymbol_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_mDFD273FEC4DC52BC822EE25FFE225118D95C2475(L_1, L_4, DescriptorPool_FindSymbol_TisMethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_mDFD273FEC4DC52BC822EE25FFE225118D95C2475_RuntimeMethod_var);
		return L_5;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.ServiceDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* ServiceDescriptor_get_CustomOptions_m93463054F091A106A1868B6F6D3C0F074A2A724C (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_mE6AF24960FAEFA67957A634F102D0CA7914A6FD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* G_B2_0 = NULL;
	ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* G_B1_0 = NULL;
	Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* G_B5_0 = NULL;
	ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1* G_B4_0 = NULL;
	ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1* G_B3_0 = NULL;
	{
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_0;
		L_0 = ServiceDescriptor_get_Proto_m5896896C9E7D11EAD3ABB9A4AE3F3E6700F57E95_inline(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* L_1;
		L_1 = ServiceDescriptorProto_get_Options_m8EFF0ED3AFFDD887273969A22405C9A5CC3BB86F_inline(L_0, NULL);
		ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t2291EC82B62E18110F1CA274F5C368BC95A41FF1* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_mE6AF24960FAEFA67957A634F102D0CA7914A6FD3_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_mE6AF24960FAEFA67957A634F102D0CA7914A6FD3_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8* L_6 = (CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8*)il2cpp_codegen_object_new(CustomOptions_t1401AA7848E581DB16F5975BC4BADBBF266B73F8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_m74D934C4D6222CE076344A99716ED295856984F6(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* ServiceDescriptor_GetOptions_m9E435D5178CF544C5BE094CE2618EFE4A5A66FFE (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, const RuntimeMethod* method) 
{
	ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* G_B2_0 = NULL;
	ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* G_B1_0 = NULL;
	{
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_0;
		L_0 = ServiceDescriptor_get_Proto_m5896896C9E7D11EAD3ABB9A4AE3F3E6700F57E95_inline(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* L_1;
		L_1 = ServiceDescriptorProto_get_Options_m8EFF0ED3AFFDD887273969A22405C9A5CC3BB86F_inline(L_0, NULL);
		ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* L_3;
		L_3 = ServiceOptions_Clone_m175CBCB8F2FD52817332EA2FB5E5791ADE6063D2(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor_CrossLink_mB5FCEA85968969F54F50184A18B6BEF4E89496C8 (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8C15FC48A0322CCD2675A169B9DB11CA347C6D8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCD48A4FDB55FCBB6BA058258F2D0312DFAC3EE59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___methods_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MethodDescriptor>::GetEnumerator() */, IEnumerable_1_t8C15FC48A0322CCD2675A169B9DB11CA347C6D8B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* L_5;
				L_5 = InterfaceFuncInvoker0< MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MethodDescriptor>::get_Current() */, IEnumerator_1_tCD48A4FDB55FCBB6BA058258F2D0312DFAC3EE59_il2cpp_TypeInfo_var, L_4);
				NullCheck(L_5);
				MethodDescriptor_CrossLink_m446B2FEBFAD05BB9D9B16D0725FC59E28E3B3BC9(L_5, NULL);
			}

IL_0019_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
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
// System.Void Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m527D22236ABFF3A7246C72C7E0526B2838E38BE0 (U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MethodDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.Reflection.MethodDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m6D47F0876CE1EDA5AE29F153841C78874DC03F04 (U3CU3Ec__DisplayClass2_0_t7DD625C9DD844E0557B568CDFF6112819E3A9C91* __this, MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* ___method0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_0 = ___method0;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = __this->___file_0;
		ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___i1;
		MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* L_4 = (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2*)il2cpp_codegen_object_new(MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MethodDescriptor__ctor_mA2ED5A1EB21CF65F3CBD3269D942D2FD53D46CA7(L_4, L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor__ctor_m9A9162971519261FA361F9531DA42F400FF98043 (SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* __this, PropertyInfo_t* ___property0, FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___descriptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA2EE063C789FC68882F4C9E821082F043939B622_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_4_m5AB7485E6EF89B24309FAD0E6485BC765387A7F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m115E84D7D6CC48B17255B4DE173B39E3ABB9B3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m120DA13DFE42D2519D9EE81018045ED80399BFA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_m2902DF4C53BFDBDD319EBCD7FE41047A1C7458E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m954EBABEEEB16E53320F2F0E8937D9AA30CDA775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m30058344DC0A32172695A1B508F9F9AED62AF35C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* V_0 = NULL;
	U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* V_4 = NULL;
	Type_t* V_5 = NULL;
	Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* G_B15_0 = NULL;
	SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* G_B15_1 = NULL;
	Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* G_B14_0 = NULL;
	SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* G_B14_1 = NULL;
	U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* G_B19_0 = NULL;
	U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* G_B16_0 = NULL;
	U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* G_B18_0 = NULL;
	U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* G_B17_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* G_B20_1 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_0 = (U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m731B12B9055973D225255651A8DCC2E5DA357B97(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_1 = V_0;
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_2 = ___descriptor1;
		NullCheck(L_1);
		L_1->___descriptor_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___descriptor_1), (void*)L_2);
		PropertyInfo_t* L_3 = ___property0;
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_4 = V_0;
		NullCheck(L_4);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_5 = L_4->___descriptor_1;
		FieldAccessorBase__ctor_m7DB378293BBD3D02938F8C65EF2AE5D4F494FCA7(__this, L_3, L_5, NULL);
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___U3CU3E4__this_0), (void*)__this);
		PropertyInfo_t* L_7 = ___property0;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_7);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12FC0BF60BCE54234CA58CFD037BD8E5ADE3F2FB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m9A9162971519261FA361F9531DA42F400FF98043_RuntimeMethod_var)));
	}

IL_0034:
	{
		PropertyInfo_t* L_10 = ___property0;
		NullCheck(L_10);
		MethodInfo_t* L_11;
		L_11 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2* L_12;
		L_12 = ReflectionUtil_CreateActionIMessageObject_mA2F8141CA84E49459F0BADF97018211CA058E3AD(L_11, NULL);
		__this->___setValueDelegate_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setValueDelegate_2), (void*)L_12);
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_13 = V_0;
		NullCheck(L_13);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_14 = L_13->___descriptor_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FieldDescriptor_get_FieldType_mDCA85D900026448BCB79FF2527D5FDE0AA4D0F10_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0079;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_16 = V_0;
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_17 = (Func_2_tA2EE063C789FC68882F4C9E821082F043939B622*)il2cpp_codegen_object_new(Func_2_tA2EE063C789FC68882F4C9E821082F043939B622_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m893EB8F63690DAC58442EBF4DE011D53F94EDA11(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m115E84D7D6CC48B17255B4DE173B39E3ABB9B3B6_RuntimeMethod_var), NULL);
		__this->___hasDelegate_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_17);
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_18 = V_0;
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_19 = (Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3*)il2cpp_codegen_object_new(Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_m496AD5EEDB96484BDBE697F2ACB302B3C4D399A2(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m120DA13DFE42D2519D9EE81018045ED80399BFA7_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_19);
		return;
	}

IL_0079:
	{
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_20 = V_0;
		NullCheck(L_20);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_21 = L_20->___descriptor_1;
		NullCheck(L_21);
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_22;
		L_22 = FieldDescriptor_get_RealContainingOneof_m1883F3E3B63AA57DEB92A5950DE915A25BFE35F6(L_21, NULL);
		if (!L_22)
		{
			goto IL_00d3;
		}
	}
	{
		U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* L_23 = (U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		U3CU3Ec__DisplayClass3_1__ctor_m2A2642ACB68A56B4453A148453C3172B42DE478E(L_23, NULL);
		V_1 = L_23;
		U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* L_24 = V_1;
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_25 = V_0;
		NullCheck(L_24);
		L_24->___CSU24U3CU3E8__locals1_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___CSU24U3CU3E8__locals1_1), (void*)L_25);
		U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* L_26 = V_1;
		U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* L_27 = V_1;
		NullCheck(L_27);
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_28 = L_27->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_28);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_29 = L_28->___descriptor_1;
		NullCheck(L_29);
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_30;
		L_30 = FieldDescriptor_get_RealContainingOneof_m1883F3E3B63AA57DEB92A5950DE915A25BFE35F6(L_29, NULL);
		NullCheck(L_30);
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_31;
		L_31 = OneofDescriptor_get_Accessor_m95C38301E140CFAD53B6E521D0848FB3A7E0F13E_inline(L_30, NULL);
		NullCheck(L_26);
		L_26->___oneofAccessor_0 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___oneofAccessor_0), (void*)L_31);
		U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* L_32 = V_1;
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_33 = (Func_2_tA2EE063C789FC68882F4C9E821082F043939B622*)il2cpp_codegen_object_new(Func_2_tA2EE063C789FC68882F4C9E821082F043939B622_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m893EB8F63690DAC58442EBF4DE011D53F94EDA11(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_m2902DF4C53BFDBDD319EBCD7FE41047A1C7458E1_RuntimeMethod_var), NULL);
		__this->___hasDelegate_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_33);
		U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* L_34 = V_1;
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_35 = (Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3*)il2cpp_codegen_object_new(Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_m496AD5EEDB96484BDBE697F2ACB302B3C4D399A2(L_35, L_34, (intptr_t)((void*)U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m954EBABEEEB16E53320F2F0E8937D9AA30CDA775_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_35);
		return;
	}

IL_00d3:
	{
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_36 = V_0;
		NullCheck(L_36);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_37 = L_36->___descriptor_1;
		NullCheck(L_37);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_38;
		L_38 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(L_37, NULL);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = FileDescriptor_get_Syntax_mF8CF977593E3229956B1C8DA8DBEE3195EB53B22_inline(L_38, NULL);
		if (!L_39)
		{
			goto IL_00fa;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_40 = V_0;
		NullCheck(L_40);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_41 = L_40->___descriptor_1;
		NullCheck(L_41);
		FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* L_42;
		L_42 = FieldDescriptor_get_Proto_m4EAE2A1329BED65E941509CC6C3D90C2A72A4103_inline(L_41, NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = FieldDescriptorProto_get_Proto3Optional_mF03CAEDFB509408D266EE7CC51CD8DE22CC69044(L_42, NULL);
		if (!L_43)
		{
			goto IL_017d;
		}
	}

IL_00fa:
	{
		PropertyInfo_t* L_44 = ___property0;
		NullCheck(L_44);
		Type_t* L_45;
		L_45 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_44);
		PropertyInfo_t* L_46 = ___property0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		String_t* L_48;
		L_48 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD, L_47, NULL);
		PropertyInfo_t* L_49;
		L_49 = RuntimeReflectionExtensions_GetRuntimeProperty_m8B8DEA120CC82BEDC0298B1DBFA4980AFEFB6625(L_45, L_48, NULL);
		NullCheck(L_49);
		MethodInfo_t* L_50;
		L_50 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_49);
		V_2 = L_50;
		MethodInfo_t* L_51 = V_2;
		bool L_52;
		L_52 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_51, (MethodInfo_t*)NULL, NULL);
		if (!L_52)
		{
			goto IL_012f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_53 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_53);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09353E39448C302F003639F3B4C81D6B132357DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m9A9162971519261FA361F9531DA42F400FF98043_RuntimeMethod_var)));
	}

IL_012f:
	{
		MethodInfo_t* L_54 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_55;
		L_55 = ReflectionUtil_CreateFuncIMessageBool_mDFFC1CA0EB062EB1434B99FCF442DC43FDD41F24(L_54, NULL);
		__this->___hasDelegate_4 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_55);
		PropertyInfo_t* L_56 = ___property0;
		NullCheck(L_56);
		Type_t* L_57;
		L_57 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_56);
		PropertyInfo_t* L_58 = ___property0;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_58);
		String_t* L_60;
		L_60 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, L_59, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_61 = ((ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var))->___EmptyTypes_0;
		MethodInfo_t* L_62;
		L_62 = RuntimeReflectionExtensions_GetRuntimeMethod_mC91D0D6D5A70AB4B5201F67718E3C5E276454C51(L_57, L_60, L_61, NULL);
		V_3 = L_62;
		MethodInfo_t* L_63 = V_3;
		bool L_64;
		L_64 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_63, (MethodInfo_t*)NULL, NULL);
		if (!L_64)
		{
			goto IL_0170;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_65 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_65, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09353E39448C302F003639F3B4C81D6B132357DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m9A9162971519261FA361F9531DA42F400FF98043_RuntimeMethod_var)));
	}

IL_0170:
	{
		MethodInfo_t* L_66 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t0FD9F4590707FE5D8206E1844E879013E301D0E7_il2cpp_TypeInfo_var);
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_67;
		L_67 = ReflectionUtil_CreateActionIMessage_mB94A9057512CE58287B5CDF566E0763D8F3D30A0(L_66, NULL);
		__this->___clearDelegate_3 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_67);
		return;
	}

IL_017d:
	{
		U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* L_68 = (U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		U3CU3Ec__DisplayClass3_2__ctor_mE6EA66F8719AAF6120E4774697E66619ED048CDF(L_68, NULL);
		V_4 = L_68;
		U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* L_69 = V_4;
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_70 = V_0;
		NullCheck(L_69);
		L_69->___CSU24U3CU3E8__locals2_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___CSU24U3CU3E8__locals2_1), (void*)L_70);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var);
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_71 = ((U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1;
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_72 = L_71;
		G_B14_0 = L_72;
		G_B14_1 = __this;
		if (L_72)
		{
			G_B15_0 = L_72;
			G_B15_1 = __this;
			goto IL_01ac;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var);
		U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9* L_73 = ((U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_74 = (Func_2_tA2EE063C789FC68882F4C9E821082F043939B622*)il2cpp_codegen_object_new(Func_2_tA2EE063C789FC68882F4C9E821082F043939B622_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		Func_2__ctor_m893EB8F63690DAC58442EBF4DE011D53F94EDA11(L_74, L_73, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_4_m5AB7485E6EF89B24309FAD0E6485BC765387A7F5_RuntimeMethod_var), NULL);
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_75 = L_74;
		((U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1), (void*)L_75);
		G_B15_0 = L_75;
		G_B15_1 = G_B14_1;
	}

IL_01ac:
	{
		NullCheck(G_B15_1);
		G_B15_1->___hasDelegate_4 = G_B15_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___hasDelegate_4), (void*)G_B15_0);
		PropertyInfo_t* L_76 = ___property0;
		NullCheck(L_76);
		Type_t* L_77;
		L_77 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_76);
		V_5 = L_77;
		U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* L_78 = V_4;
		Type_t* L_79 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_80, NULL);
		bool L_82;
		L_82 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_79, L_81, NULL);
		G_B16_0 = L_78;
		if (L_82)
		{
			G_B19_0 = L_78;
			goto IL_01f1;
		}
	}
	{
		Type_t* L_83 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_84, NULL);
		bool L_86;
		L_86 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_83, L_85, NULL);
		G_B17_0 = G_B16_0;
		if (L_86)
		{
			G_B18_0 = G_B16_0;
			goto IL_01ea;
		}
	}
	{
		Type_t* L_87 = V_5;
		RuntimeObject* L_88;
		L_88 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_87, NULL);
		G_B20_0 = L_88;
		G_B20_1 = G_B17_0;
		goto IL_01f6;
	}

IL_01ea:
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_il2cpp_TypeInfo_var);
		ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9* L_89;
		L_89 = ByteString_get_Empty_m9016C16C682028C452D775AD56A157999DEFDEC7_inline(NULL);
		G_B20_0 = ((RuntimeObject*)(L_89));
		G_B20_1 = G_B18_0;
		goto IL_01f6;
	}

IL_01f1:
	{
		G_B20_0 = ((RuntimeObject*)(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		G_B20_1 = G_B19_0;
	}

IL_01f6:
	{
		NullCheck(G_B20_1);
		G_B20_1->___defaultValue_0 = G_B20_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B20_1->___defaultValue_0), (void*)G_B20_0);
		U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* L_90 = V_4;
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_91 = (Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3*)il2cpp_codegen_object_new(Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		Action_1__ctor_m496AD5EEDB96484BDBE697F2ACB302B3C4D399A2(L_91, L_90, (intptr_t)((void*)U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m30058344DC0A32172695A1B508F9F9AED62AF35C_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_91);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor_Clear_m44F26FBE0303F42119220A4BBBDF3E564FEAA11A (SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* L_0 = __this->___clearDelegate_3;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_mB9DEBD04AE7D255A4BE44E0B97D52F502E8362DA_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SingleFieldAccessor_HasValue_m983C07F38741757C353064EBADD441AE057FA36D (SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Func_2_tA2EE063C789FC68882F4C9E821082F043939B622* L_0 = __this->___hasDelegate_4;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Func_2_Invoke_m87A231CCC5E61EB0DC4EE13E05F2870275C33ED1_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor_SetValue_mAD56E979C211A07A95A50015E73C7BD037336164 (SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2* L_0 = __this->___setValueDelegate_2;
		RuntimeObject* L_1 = ___message0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		Action_2_Invoke_mEA5EB487B5B803422964FCC7899CF6AA5BA0CC99_inline(L_0, L_1, L_2, NULL);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m731B12B9055973D225255651A8DCC2E5DA357B97 (U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<.ctor>b__0(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m115E84D7D6CC48B17255B4DE173B39E3ABB9B3B6 (U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = FieldAccessorBase_GetValue_m68EB618FFF7E0F5D82CEDF61FE189E2AA2F2F2ED(L_0, L_1, NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<.ctor>b__1(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m120DA13DFE42D2519D9EE81018045ED80399BFA7 (U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(11 /* System.Void Google.Protobuf.Reflection.FieldAccessorBase::SetValue(Google.Protobuf.IMessage,System.Object) */, L_0, L_1, NULL);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m2A2642ACB68A56B4453A148453C3172B42DE478E (U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::<.ctor>b__2(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_m2902DF4C53BFDBDD319EBCD7FE41047A1C7458E1 (U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_0 = __this->___oneofAccessor_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_2;
		L_2 = OneofAccessor_GetCaseFieldDescriptor_m5673B212FE85FD3908936C97DCBF25C54CFF01F1(L_0, L_1, NULL);
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_4 = L_3->___descriptor_1;
		return (bool)((((RuntimeObject*)(FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*)L_2) == ((RuntimeObject*)(FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*)L_4))? 1 : 0);
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::<.ctor>b__3(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m954EBABEEEB16E53320F2F0E8937D9AA30CDA775 (U3CU3Ec__DisplayClass3_1_tC4B0DEE97AA04410A99E99A4BEE9D4B535869D13* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_0 = __this->___oneofAccessor_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_2;
		L_2 = OneofAccessor_GetCaseFieldDescriptor_m5673B212FE85FD3908936C97DCBF25C54CFF01F1(L_0, L_1, NULL);
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* L_4 = L_3->___descriptor_1;
		if ((!(((RuntimeObject*)(FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*)L_2) == ((RuntimeObject*)(FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA*)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_5 = __this->___oneofAccessor_0;
		RuntimeObject* L_6 = ___message0;
		NullCheck(L_5);
		OneofAccessor_Clear_m84A12243AF775FEEDDEBDC98DE997ADAC6A0E7E0(L_5, L_6, NULL);
	}

IL_0025:
	{
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_mE6EA66F8719AAF6120E4774697E66619ED048CDF (U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::<.ctor>b__5(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m30058344DC0A32172695A1B508F9F9AED62AF35C (U3CU3Ec__DisplayClass3_2_tCF4BF7BBBE29D65E82572FC08EDF1CB99C1176F8* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass3_0_t117936323F7FCDB9A568A954AD831069CAEEEB37* L_0 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_0);
		SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* L_1 = L_0->___U3CU3E4__this_0;
		RuntimeObject* L_2 = ___message0;
		RuntimeObject* L_3 = __this->___defaultValue_0;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(11 /* System.Void Google.Protobuf.Reflection.FieldAccessorBase::SetValue(Google.Protobuf.IMessage,System.Object) */, L_1, L_2, L_3);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m83BCDB16B40C2C0FF3DB30047FBBB2429B284F51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9* L_0 = (U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9*)il2cpp_codegen_object_new(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m023EF5166278FA4CEA18043EB6B544159D067A9A(L_0, NULL);
		((U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m023EF5166278FA4CEA18043EB6B544159D067A9A (U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<.ctor>b__3_4(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__3_4_m5AB7485E6EF89B24309FAD0E6485BC765387A7F5 (U3CU3Ec_t3A8CE9C372B3EE9B4F65F8E48C3F6154088FD2E9* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7A7B98FBAE659C1B887B207BDC5507066DBC057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_4_m5AB7485E6EF89B24309FAD0E6485BC765387A7F5_RuntimeMethod_var)));
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
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_get_Empty_m61CD8E7F3D1C339156A7318F30234A9E1C152121 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_0 = ((TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_m3DEB8D11E04868E6C87FBD93E9A3CCF175BB253E (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* __this, Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* ___fullNameToMessageMap0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = ___fullNameToMessageMap0;
		__this->___fullNameToMessageMap_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullNameToMessageMap_1), (void*)L_0);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.TypeRegistry::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* TypeRegistry_Find_m434D19CDAE5EDF3BA1FA1088950991FA7CEB6135 (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* __this, String_t* ___fullName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* V_0 = NULL;
	{
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = __this->___fullNameToMessageMap_1;
		String_t* L_1 = ___fullName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB_RuntimeMethod_var);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(Google.Protobuf.Reflection.FileDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromFiles_m16D1FA0010CCBDB08FDBC87944497CD583AED50A (FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE* L_0 = ___fileDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_1;
		L_1 = TypeRegistry_FromFiles_m489C9D4C212DF24CDC05834F37D308FBFA0BB084((RuntimeObject*)L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromFiles_m489C9D4C212DF24CDC05834F37D308FBFA0BB084 (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_m7F7F71DBD9A4D13AF632B7D88F9E3814D662AFFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565);
		s_Il2CppMethodInitialized = true;
	}
	Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___fileDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_m7F7F71DBD9A4D13AF632B7D88F9E3814D662AFFF(L_0, _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_m7F7F71DBD9A4D13AF632B7D88F9E3814D662AFFF_RuntimeMethod_var);
		Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* L_2 = (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B*)il2cpp_codegen_object_new(Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m7165B754797FC65E699CFD4F4B777D45D2BAEB17(L_2, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___fileDescriptors0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_001b_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_8;
				L_8 = InterfaceFuncInvoker0< FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* L_9 = V_0;
				FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_10 = V_2;
				NullCheck(L_9);
				Builder_AddFile_mADCCE3975DF455013A6A7E7D5ABCEB1E29D00929(L_9, L_10, NULL);
			}

IL_0029_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* L_13 = V_0;
		NullCheck(L_13);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_14;
		L_14 = Builder_Build_m96CC4C57E23687C7D9042F1C92C6A440C43D2D54(L_13, NULL);
		return L_14;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(Google.Protobuf.Reflection.MessageDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromMessages_m94B58C596E9DBCF2A6DC0813C1401F678BE6AB97 (MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B* L_0 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_1;
		L_1 = TypeRegistry_FromMessages_m0A18409F69A12AEE0E833F21744BD687A8B49810((RuntimeObject*)L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromMessages_m0A18409F69A12AEE0E833F21744BD687A8B49810 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_m3CF8AF6C1290ED984BCE6F1EF304C56CA3A9F5AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m3C2D1B32A9135BDEA14B7D1EE4D024AE99E6F75F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFromMessagesU3Eb__9_0_m4FD7D15DA46916627C40437264BFD4E4D6B5BA6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___messageDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m3C2D1B32A9135BDEA14B7D1EE4D024AE99E6F75F(L_0, _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m3C2D1B32A9135BDEA14B7D1EE4D024AE99E6F75F_RuntimeMethod_var);
		RuntimeObject* L_2 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* L_3 = ((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* L_5 = ((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* L_6 = (Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B*)il2cpp_codegen_object_new(Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m49855A789BB529C4C47361A2114B8C28F9F5BAFB(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CFromMessagesU3Eb__9_0_m4FD7D15DA46916627C40437264BFD4E4D6B5BA6F_RuntimeMethod_var), NULL);
		Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* L_7 = L_6;
		((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_m3CF8AF6C1290ED984BCE6F1EF304C56CA3A9F5AD(G_B2_1, G_B2_0, Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_m3CF8AF6C1290ED984BCE6F1EF304C56CA3A9F5AD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_9;
		L_9 = TypeRegistry_FromFiles_m489C9D4C212DF24CDC05834F37D308FBFA0BB084(L_8, NULL);
		return L_9;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__cctor_m0C83FEB11E8E7CBA3F68C09ED35D92F1F0CB2704 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*)il2cpp_codegen_object_new(Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3(L_0, Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_1 = (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A*)il2cpp_codegen_object_new(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_m3DEB8D11E04868E6C87FBD93E9A3CCF175BB253E(L_1, L_0, NULL);
		((TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0), (void*)L_1);
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m7165B754797FC65E699CFD4F4B777D45D2BAEB17 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*)il2cpp_codegen_object_new(Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3(L_0, Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var);
		__this->___types_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___types_0), (void*)L_0);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_1, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___fileDescriptorNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileDescriptorNames_1), (void*)L_1);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_mADCCE3975DF455013A6A7E7D5ABCEB1E29D00929 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___fileDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* V_3 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->___fileDescriptorNames_1;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = ___fileDescriptor0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FileDescriptor_get_Name_m2F4F4DA47CD49256D7D89B1A38CCA603E980BAED(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_0, L_2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_4 = ___fileDescriptor0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = FileDescriptor_get_Dependencies_m8F571581AE1B9FF48742D22B123C2AA7E5A9070C_inline(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0022_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_10;
				L_10 = InterfaceFuncInvoker0< FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_11 = V_1;
				Builder_AddFile_mADCCE3975DF455013A6A7E7D5ABCEB1E29D00929(__this, L_11, NULL);
			}

IL_0030_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_14 = ___fileDescriptor0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = FileDescriptor_get_MessageTypes_m9F4E1F38494136104D840DA82C5D7DBA5F95C2C2_inline(L_14, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_17 = V_2;
					if (!L_17)
					{
						goto IL_0073;
					}
				}
				{
					RuntimeObject* L_18 = V_2;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0052_1:
			{
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_20;
				L_20 = InterfaceFuncInvoker0< MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var, L_19);
				V_3 = L_20;
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_21 = V_3;
				Builder_AddMessage_m6A84E14AB68E7EA71A1DE49F083C2CFBC3B6B539(__this, L_21, NULL);
			}

IL_0060_1:
			{
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_m6A84E14AB68E7EA71A1DE49F083C2CFBC3B6B539 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* V_1 = NULL;
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = ___messageDescriptor0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_6;
				L_6 = InterfaceFuncInvoker0< MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_7 = V_1;
				Builder_AddMessage_m6A84E14AB68E7EA71A1DE49F083C2CFBC3B6B539(__this, L_7, NULL);
			}

IL_001c_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0030;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_10 = __this->___types_0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_11 = ___messageDescriptor0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline(L_11, NULL);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_13 = ___messageDescriptor0;
		NullCheck(L_10);
		Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36(L_10, L_12, L_13, Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36_RuntimeMethod_var);
		return;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* Builder_Build_m96CC4C57E23687C7D9042F1C92C6A440C43D2D54 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = __this->___types_0;
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_1 = (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A*)il2cpp_codegen_object_new(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_m3DEB8D11E04868E6C87FBD93E9A3CCF175BB253E(L_1, L_0, NULL);
		return L_1;
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB57B29DFCF820B4147718E55CDB152B9FE43914D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* L_0 = (U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF*)il2cpp_codegen_object_new(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFC4EBCE714174204D9848246FEA77D6EB8D044DA(L_0, NULL);
		((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC4EBCE714174204D9848246FEA77D6EB8D044DA (U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.TypeRegistry/<>c::<FromMessages>b__9_0(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* U3CU3Ec_U3CFromMessagesU3Eb__9_0_m4FD7D15DA46916627C40437264BFD4E4D6B5BA6F (U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___md0, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = ___md0;
		NullCheck(L_0);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1;
		L_1 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(L_0, NULL);
		return L_1;
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
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetGetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetGetMethod_mE3E6F5300FEECD59E0EAB5F0087E07760B78561E (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_0);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		MethodInfo_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (MethodInfo_t*)NULL;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_0;
		return L_6;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetSetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetSetMethod_mD44361319DB1E9B9ED3D2B8A54596268CB870496 (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_0);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		MethodInfo_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (MethodInfo_t*)NULL;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_0;
		return L_6;
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
// System.Boolean Google.Protobuf.Compatibility.TypeExtensions::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsAssignableFrom_m381B19D7322451270926C81A2CF14B7950A4A03F (Type_t* ___target0, Type_t* ___c1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_0, NULL);
		Type_t* L_2 = ___c1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_3;
		L_3 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* >::Invoke(128 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_1, L_3);
		return L_4;
	}
}
// System.Reflection.PropertyInfo Google.Protobuf.Compatibility.TypeExtensions::GetProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* TypeExtensions_GetProperty_m79A7CAAC04B3B4D0508E5C1EEB2A722D3F15202D (Type_t* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	{
		goto IL_004e;
	}

IL_0002:
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_0, NULL);
		V_0 = L_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2 = V_0;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		PropertyInfo_t* L_4;
		L_4 = VirtualFuncInvoker1< PropertyInfo_t*, String_t* >::Invoke(126 /* System.Reflection.PropertyInfo System.Reflection.TypeInfo::GetDeclaredProperty(System.String) */, L_2, L_3);
		V_1 = L_4;
		PropertyInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = PropertyInfo_op_Inequality_m5DA1C329CB63868255C466876EC2452B40E418A9(L_5, (PropertyInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		PropertyInfo_t* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_7);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		PropertyInfo_t* L_9 = V_1;
		NullCheck(L_9);
		MethodInfo_t* L_10;
		L_10 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_9);
		NullCheck(L_10);
		bool L_11;
		L_11 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_10, NULL);
		if (L_11)
		{
			goto IL_0044;
		}
	}

IL_002f:
	{
		PropertyInfo_t* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_12);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		PropertyInfo_t* L_14 = V_1;
		NullCheck(L_14);
		MethodInfo_t* L_15;
		L_15 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_14);
		NullCheck(L_15);
		bool L_16;
		L_16 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_15, NULL);
		if (!L_16)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
		PropertyInfo_t* L_17 = V_1;
		return L_17;
	}

IL_0046:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_18 = V_0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(106 /* System.Type System.Type::get_BaseType() */, L_18);
		___target0 = L_19;
	}

IL_004e:
	{
		Type_t* L_20 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_20, (Type_t*)NULL, NULL);
		if (L_21)
		{
			goto IL_0002;
		}
	}
	{
		return (PropertyInfo_t*)NULL;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.TypeExtensions::GetMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetMethod_m4E57BB7674FEBA49E43E490F0B247B64F4124E42 (Type_t* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		goto IL_002c;
	}

IL_0002:
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_0, NULL);
		V_0 = L_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2 = V_0;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		MethodInfo_t* L_4;
		L_4 = VirtualFuncInvoker1< MethodInfo_t*, String_t* >::Invoke(125 /* System.Reflection.MethodInfo System.Reflection.TypeInfo::GetDeclaredMethod(System.String) */, L_2, L_3);
		V_1 = L_4;
		MethodInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_5, (MethodInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		MethodInfo_t* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		MethodInfo_t* L_9 = V_1;
		return L_9;
	}

IL_0024:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_10 = V_0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(106 /* System.Type System.Type::get_BaseType() */, L_10);
		___target0 = L_11;
	}

IL_002c:
	{
		Type_t* L_12 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_12, (Type_t*)NULL, NULL);
		if (L_13)
		{
			goto IL_0002;
		}
	}
	{
		return (MethodInfo_t*)NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_m83E8C826F518A07B2EAD0EE9B01DF7B9647FD702 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m4836BCE0A2C56D62613A6FAF7A0D3C0EF762FF84 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseNullableDoubleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ProtobufEqualityComparers_get_BitwiseNullableDoubleEqualityComparer_mF4FE710542613595B4ADD78AA0924BD06039EB7A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_0 = ((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseNullableSingleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ProtobufEqualityComparers_get_BitwiseNullableSingleEqualityComparer_m144DFD584C6421D15750F6480507F31856FC32B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_0 = ((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtobufEqualityComparers__cctor_m3D659EF72CEABAAAD55382A28B49548B34D7EA83 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D* L_0 = (BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D*)il2cpp_codegen_object_new(BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BitwiseDoubleEqualityComparerImpl__ctor_m7DC95A2BDA81AE5E0F1F6A3C948673EE819AEE13(L_0, NULL);
		((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0), (void*)L_0);
		BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4* L_1 = (BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4*)il2cpp_codegen_object_new(BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BitwiseSingleEqualityComparerImpl__ctor_m27A6665B4C3C480B290B003DC58C0E83B7F75518(L_1, NULL);
		((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1), (void*)L_1);
		BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0* L_2 = (BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0*)il2cpp_codegen_object_new(BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BitwiseNullableDoubleEqualityComparerImpl__ctor_m1146628AE9722D95D2AE3D1FF3B4B2FE04CB6098(L_2, NULL);
		((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2), (void*)L_2);
		BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59* L_3 = (BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59*)il2cpp_codegen_object_new(BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BitwiseNullableSingleEqualityComparerImpl__ctor_m729B8F535F43E894D56BCB7302A7CB56418DCA7C(L_3, NULL);
		((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3), (void*)L_3);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::Equals(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseDoubleEqualityComparerImpl_Equals_m1EAF2A6E048E2E41C114CCA78864C48960A96373 (BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D* __this, double ___x0, double ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		double L_2 = ___y1;
		int64_t L_3;
		L_3 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_2, NULL);
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::GetHashCode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseDoubleEqualityComparerImpl_GetHashCode_m0450461EAD734332BC489250B1845B9C6BEDA041 (BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D* __this, double ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseDoubleEqualityComparerImpl__ctor_m7DC95A2BDA81AE5E0F1F6A3C948673EE819AEE13 (BitwiseDoubleEqualityComparerImpl_t04DD5689481B49F79B917EFAD7D1D146E19A436D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6(__this, EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::Equals(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseSingleEqualityComparerImpl_Equals_m00260517C77C2067FD3D5E90B4FC9A2C512B67A2 (BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_0), NULL);
		float L_2 = ___y1;
		int64_t L_3;
		L_3 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_2), NULL);
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::GetHashCode(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseSingleEqualityComparerImpl_GetHashCode_mFC0E8654F3023EC32C78F871609438A9ED7821BC (BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4* __this, float ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		float L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_0), NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseSingleEqualityComparerImpl__ctor_m27A6665B4C3C480B290B003DC58C0E83B7F75518 (BitwiseSingleEqualityComparerImpl_t9B413333B0C585D854F80635AE684BD8839DDCC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3(__this, EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::Equals(System.Nullable`1<System.Double>,System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseNullableDoubleEqualityComparerImpl_Equals_m31D120A7D79A9DC86728F2FEFBC8A705ABF91EB3 (BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___x0, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___x0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___y1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003f;
		}
	}

IL_0012:
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___x0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___y1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_m83E8C826F518A07B2EAD0EE9B01DF7B9647FD702_inline(NULL);
		double L_5;
		L_5 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___x0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		double L_6;
		L_6 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___y1), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, double, double >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Double>::Equals(T,T) */, L_4, L_5, L_6);
		return L_7;
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::GetHashCode(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseNullableDoubleEqualityComparerImpl_GetHashCode_m6F30C1ACCD266AB0CC969A7CD2D1CE79A25FACF7 (BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___obj0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_1;
		L_1 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_m83E8C826F518A07B2EAD0EE9B01DF7B9647FD702_inline(NULL);
		double L_2;
		L_2 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___obj0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, double >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Double>::GetHashCode(T) */, L_1, L_2);
		return L_3;
	}

IL_001b:
	{
		return ((int32_t)293864);
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableDoubleEqualityComparerImpl__ctor_m1146628AE9722D95D2AE3D1FF3B4B2FE04CB6098 (BitwiseNullableDoubleEqualityComparerImpl_tE9B18378765F88DD4315722D134A499A45BCD4C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB(__this, EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::Equals(System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseNullableSingleEqualityComparerImpl_Equals_m4B921BAABB5F8825173F68457D8DA41F98BD96C5 (BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___x0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___x0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___y1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003f;
		}
	}

IL_0012:
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___x0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___y1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m4836BCE0A2C56D62613A6FAF7A0D3C0EF762FF84_inline(NULL);
		float L_5;
		L_5 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___x0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_6;
		L_6 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___y1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, L_4, L_5, L_6);
		return L_7;
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::GetHashCode(System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseNullableSingleEqualityComparerImpl_GetHashCode_mB8F8D726722B077530BED56C25EF3610A5533FEF (BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___obj0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1;
		L_1 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m4836BCE0A2C56D62613A6FAF7A0D3C0EF762FF84_inline(NULL);
		float L_2;
		L_2 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___obj0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, float >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, L_1, L_2);
		return L_3;
	}

IL_001b:
	{
		return ((int32_t)293864);
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableSingleEqualityComparerImpl__ctor_m729B8F535F43E894D56BCB7302A7CB56418DCA7C (BitwiseNullableSingleEqualityComparerImpl_t59562E5B3104FA1BCB2F25D4C0C7BE180F0E6B59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E(__this, EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* GeneratedClrTypeInfo_get_NestedTypes_mEAA1B0965ECC35A10EB59BB7B846C7762624A54A_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfoU5BU5D_tA40DAAE14619CC05386E71A9B6926C00B3FCCF7F* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mF617D606C0482D67F62FF3439F65D19EE492995B_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CNestedEnumsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* FieldDescriptor_get_Extension_m2DE8F4106521D0B7D56F12B7986647643E0D14F5_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) 
{
	{
		Extension_t7CE3BEA03AF0EDA9DD087D50589575A237E2B53E* L_0 = __this->___U3CExtensionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m46FD53A0242D57938395049E1FBCAB5D13C4FB3C_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CClrTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClrTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* GeneratedClrTypeInfo_get_Parser_mE7F916BAC268F60F771E7FC246C17AF302759F32_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* L_0 = __this->___U3CParserU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m085C15ABD5E9BA7EC3D12018B1F756477D5D82C3_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tF287D0133CB00422E32F7C0FC98D7FDDB3355C29* DescriptorProto_get_OneofDecl_m2523293B939B786975C994259A4D86073A538142_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tF287D0133CB00422E32F7C0FC98D7FDDB3355C29* L_0 = __this->___oneofDecl__22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_mB16A9A23DA6631CA3CEADDCB2BD16F8E2D4E5CA8_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3COneofsU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_mF41242B22BDA563D27858560A7EA7A5B455FA408_inline (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsSyntheticU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tF209BB319A301B92F3E31BA7A80A39A58D23C0A7* DescriptorProto_get_NestedType_mBD2768EE2D93EDDBF948D0C63CE9D3E14995CF2E_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tF209BB319A301B92F3E31BA7A80A39A58D23C0A7* L_0 = __this->___nestedType__13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t00A32F8CDF0FA07C86031BDC491EC850A03D3202* DescriptorProto_get_EnumType_mB67D0691CCAF37E007516CBB2A1ADA27116CD8AC_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t00A32F8CDF0FA07C86031BDC491EC850A03D3202* L_0 = __this->___enumType__16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* GeneratedClrTypeInfo_get_Extensions_mBCC7C6FB0E6607288206E83304DA57F59042817C_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		ExtensionU5BU5D_t941DC6C8C7D3A73E336824927D1E3CF3B119FDCD* L_0 = __this->___U3CExtensionsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5* DescriptorProto_get_Field_m9BAE0C869C27DA89F4D1DD5FCE9F446A9240EEE8_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tA043303898DEB940CAC13C327C129E871EC7CDE5* L_0 = __this->___field__7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* FileDescriptor_get_DescriptorPool_m2FEBC38D03299C99B4F9DC0B554ABF3B2CE4BED5_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) 
{
	{
		DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* L_0 = __this->___U3CDescriptorPoolU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_mF42F803F807761B4010F1E4F87D58D35F1F9AFB3_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CJsonNameU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* MessageDescriptor_get_Proto_m779C4673C5386BCCACCB9A316D5BA640BE2ED9AC_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* L_0 = __this->___U3CProtoU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_m2CBC54657E71C6AD89AFC580DEDE4A8AE99AE7CD_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEnumTypesU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5* DescriptorProto_get_ExtensionRange_m5E54458AF9FDFBD7D3B8E436F52CFA2920D17D87_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tA9C5B8B17B69F534C0E321CDEE1E41DB118D94D5* L_0 = __this->___extensionRange__19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mCE583B06802B0D4048B530E7AFDCBEE638D40F65_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0 = __this->___U3CFileU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFullNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* DescriptorProto_get_Options_m95317D9A7FBB580C45BCF35B64BE133AB0F0FE7A_inline (DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* __this, const RuntimeMethod* method) 
{
	{
		MessageOptions_t70E099640C7CE90D1E1500A061BB6A7B6AB876DA* L_0 = __this->___options__24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* MessageDescriptor_get_Extensions_m1B1B0638B9170EBEFAC0F8D47F80A60A851B8534_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		ExtensionCollection_t0AD33FEFE15CC5A1C4DD2F0835397226B5FB1D08* L_0 = __this->___U3CExtensionsU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_m01124F21B145BCB887B12BCB3B777F9DD4235136_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COneofNamesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m0A171A055701463503A3E71A12A5AC6F9D7C7905_inline (GeneratedClrTypeInfo_tF5FEA3BEC6E20DB9556C64C37DDF78371D8FF089* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CPropertyNamesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* MethodDescriptor_get_Proto_m1E7F063B4E609F0ECCA13290571690B031FE088D_inline (MethodDescriptor_t64E19A52C2729121C68546720A7351697764A2A2* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* L_0 = __this->___proto_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* MethodDescriptorProto_get_Options_m7FC17F749CD5902F60B849DF799B467801D7FCAF_inline (MethodDescriptorProto_t739D7F202A4B07A472D1744370CC9B6F76AD6094* __this, const RuntimeMethod* method) 
{
	{
		MethodOptions_t062BA1D63E3FA3FC97AEF5E3024FE759F2F1D045* L_0 = __this->___options__13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* OneofAccessor_get_Descriptor_mFD6C7DEAEB781D21086FDD3AEA6C4E36F9D234FA_inline (OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_0 = __this->___U3CDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* OneofDescriptor_get_ContainingType_mEC839ED1E8839D10E689A7C7E83F405791BC001A_inline (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = __this->___containingType_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_m85369DB89C3F648BD60712088482BEE7F4F14757_inline (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___fields_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_get_Accessor_mC6951F6A450F65DC83D3C00C4C624973CD665DE9_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___accessor_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* OneofDescriptorProto_get_Options_mAE42F8445D3082BBF07FED914E8955E6FD9E821F_inline (OneofDescriptorProto_tFC7F56C86E644CA714ADA020BBA427840ACECA59* __this, const RuntimeMethod* method) 
{
	{
		OneofOptions_t4C5808BCA68073C76EB24857AF02F3D98D7867C4* L_0 = __this->___options__6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* MessageDescriptor_get_Fields_m4D22A285B857FA236321E054082857868E7152D0_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* L_0 = __this->___U3CFieldsU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* FieldDescriptor_get_ContainingOneof_m09F61680A1EA3A6C3A6E07AB4BCB837A70DDF2AD_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* L_0 = __this->___U3CContainingOneofU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m4F6221B51D8A6F9A7ACD78A6FD6AB77C4EE4E1E1_inline (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m354F22F66E277B678216259D9E4E325D71C8291D_inline (OriginalNameAttribute_t3A7CF9A3EFDA84EB3093C7AA3EF9F5B7634080C6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPreferredAliasU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tC71BBCB23642B3126ADFDD7AAD03AE3F31B9D191* ServiceDescriptorProto_get_Method_m88B64CDC59201D684734EAFCEF03E4C06F44D2E4_inline (ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tC71BBCB23642B3126ADFDD7AAD03AE3F31B9D191* L_0 = __this->___method__7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* ServiceDescriptor_get_Proto_m5896896C9E7D11EAD3ABB9A4AE3F3E6700F57E95_inline (ServiceDescriptor_t77007B2CC3852107A3E9EC7E5E606B3FEF44B150* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* L_0 = __this->___proto_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* ServiceDescriptorProto_get_Options_m8EFF0ED3AFFDD887273969A22405C9A5CC3BB86F_inline (ServiceDescriptorProto_tFA9EDEF8C79E5B1F3719BDE1566712B728BD4D0A* __this, const RuntimeMethod* method) 
{
	{
		ServiceOptions_tC4BADF245A8EA42C4BFDFE9935A0FE09089C4897* L_0 = __this->___options__9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mDCA85D900026448BCB79FF2527D5FDE0AA4D0F10_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fieldType_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* OneofDescriptor_get_Accessor_m95C38301E140CFAD53B6E521D0848FB3A7E0F13E_inline (OneofDescriptor_tC7B399F0D75B53826B2CBF549E635CFE49EBFA4C* __this, const RuntimeMethod* method) 
{
	{
		OneofAccessor_tF9D88903FCC893FCE8601B168F439B34D060BA96* L_0 = __this->___accessor_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FileDescriptor_get_Syntax_mF8CF977593E3229956B1C8DA8DBEE3195EB53B22_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSyntaxU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* FieldDescriptor_get_Proto_m4EAE2A1329BED65E941509CC6C3D90C2A72A4103_inline (FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* __this, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t8B8243BE455C3302F150FB2833A4B6FE7A03ADA7* L_0 = __this->___U3CProtoU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9* ByteString_get_Empty_m9016C16C682028C452D775AD56A157999DEFDEC7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_il2cpp_TypeInfo_var);
		ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9* L_0 = ((ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_StaticFields*)il2cpp_codegen_static_fields_for(ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9_il2cpp_TypeInfo_var))->___empty_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_m8F571581AE1B9FF48742D22B123C2AA7E5A9070C_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDependenciesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m9F4E1F38494136104D840DA82C5D7DBA5F95C2C2_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_m83E8C826F518A07B2EAD0EE9B01DF7B9647FD702_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m4836BCE0A2C56D62613A6FAF7A0D3C0EF762FF84_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t4EB288CE04CA52C009A7AF6630A34C57A9C6DB4C_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m2A023123A5F1A9B9A60A91E11441D15531AFE59E_gshared_inline (RepeatedField_1_t5E1EB72F85000EFBD87680B0BDAD112A08F820BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* ExtensionSet_1_get_ValuesByNumber_mD45E6E78F59C43612756A04B5304EAA04B2D0D06_gshared_inline (ExtensionSet_1_t418209FE573CFF1C92387191095EBEECA1904C31* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60* L_0 = (Dictionary_2_t2167427F4F9CDB51FED71ADB1786B62B125BBD60*)__this->___U3CValuesByNumberU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
