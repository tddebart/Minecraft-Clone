#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Text.StringBuilder>
struct Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6;
// Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Object>
struct ConcurrentObjectPool_1_t23EC4F59F91D9B5D151FA2EA922B6F5706AA6587;
// Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Text.StringBuilder>
struct ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Text.StringBuilder>
struct Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool>
struct HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333;
// System.Collections.Generic.IEqualityComparer`1<Baracuda.Pooling.Abstractions.ObjectPool>
struct IEqualityComparer_1_t22A8C34A17287F89950EFC121A7214B06BCFA5FD;
// Baracuda.Pooling.Interface.IObjectPool`1<System.Object>
struct IObjectPool_1_tF56993B9E6ECCC30AB656CDB8397B63100E4ACA8;
// Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>
struct IObjectPool_1_t1757130186370AE7DF7D2E6ECB288C726BAC1DA6;
// System.Collections.Generic.IReadOnlyCollection`1<Baracuda.Pooling.Abstractions.ObjectPool>
struct IReadOnlyCollection_1_t3C28DE877FEB0F4C33A724028560E56AD289D2DF;
// Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Object>
struct ObjectPoolT_1_t157809A06EE363D3C911B6C70FE0EA919F556DFD;
// Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Text.StringBuilder>
struct ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F;
// Baracuda.Pooling.Abstractions.ObjectPool`1<System.Object>
struct ObjectPool_1_t8B1D8AAC49051E9BE802AFAA7ADEDE8AD6B32C32;
// Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>
struct ObjectPool_1_t34170BA6B031165F4B5AA46EFDF45A5476C8A96D;
// System.Collections.Generic.Stack`1<System.Text.StringBuilder>
struct Stack_1_tEA590DB5019422456D6036EAE57B873452A21025;
// System.Collections.Generic.HashSet`1/Slot<Baracuda.Pooling.Abstractions.ObjectPool>[]
struct SlotU5BU5D_t7BEBBFB1E5AADF76A53D6F6F95B286202A7F819F;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Baracuda.Pooling.Abstractions.ObjectPool
struct ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c
struct U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284;
// Baracuda.Pooling.Concretions.StringBuilderPool/<>c
struct U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObjectPool_1_t1757130186370AE7DF7D2E6ECB288C726BAC1DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentObjectPool_1__ctor_mD0C7511B6A0EFB48308678A1AA064C3AC2EADE3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mFE4F0154DB5D39B87A2965A2FEE11F2BD342A408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m25BBB69938DEB7D515F32E529AA956CD3D734F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPoolT_1__ctor_mECED48223CC76F90D39C90B25EDF4DC60D0D440B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_GetDisposable_m8BC711CDBE79D5A057E3326ADABA47882626012F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_0_m52C1F27F03BF2754A1062698E528FFB8A8439B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_0_m838D5B978048D9B9975AF3B7885C8C1B7E8FE7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_1_m76EE7B6E519D30E40E62A0C9370F8742F7794A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_1_m877083A57C2B3DD161B74F49D33B177E78A4732E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72AD85D5B1B2E33E1DB38169251676C2435F9D6C 
{
};

// System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool>
struct HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t7BEBBFB1E5AADF76A53D6F6F95B286202A7F819F* ____slots_8;
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tC9B7601719FB99A7A0DEB9D8DA9281542869C250  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool
struct ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53  : public RuntimeObject
{
};

struct ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_StaticFields
{
	// Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Text.StringBuilder> Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::pool
	ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B* ___pool_0;
};

// Baracuda.Pooling.Abstractions.ObjectPool
struct ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41  : public RuntimeObject
{
};

struct ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_StaticFields
{
	// System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool> Baracuda.Pooling.Abstractions.ObjectPool::activePools
	HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333* ___activePools_0;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Baracuda.Pooling.Concretions.StringBuilderPool
struct StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44  : public RuntimeObject
{
};

struct StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_StaticFields
{
	// Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Text.StringBuilder> Baracuda.Pooling.Concretions.StringBuilderPool::pool
	ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F* ___pool_0;
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

// Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c
struct U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284  : public RuntimeObject
{
};

struct U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_StaticFields
{
	// Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::<>9
	U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284* ___U3CU3E9_0;
};

// Baracuda.Pooling.Concretions.StringBuilderPool/<>c
struct U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B  : public RuntimeObject
{
};

struct U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_StaticFields
{
	// Baracuda.Pooling.Concretions.StringBuilderPool/<>c Baracuda.Pooling.Concretions.StringBuilderPool/<>c::<>9
	U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B* ___U3CU3E9_0;
};

// Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>
struct ObjectPool_1_t34170BA6B031165F4B5AA46EFDF45A5476C8A96D  : public ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41
{
	// System.Int32 Baracuda.Pooling.Abstractions.ObjectPool`1::<CountAll>k__BackingField
	int32_t ___U3CCountAllU3Ek__BackingField_1;
	// System.Collections.Generic.Stack`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<Stack>k__BackingField
	Stack_1_tEA590DB5019422456D6036EAE57B873452A21025* ___U3CStackU3Ek__BackingField_2;
	// System.Func`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<CreateFunc>k__BackingField
	Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C* ___U3CCreateFuncU3Ek__BackingField_3;
	// System.Action`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<ActionOnGet>k__BackingField
	Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___U3CActionOnGetU3Ek__BackingField_4;
	// System.Action`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<ActionOnRelease>k__BackingField
	Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___U3CActionOnReleaseU3Ek__BackingField_5;
	// System.Action`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<ActionOnDestroy>k__BackingField
	Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___U3CActionOnDestroyU3Ek__BackingField_6;
	// System.Int32 Baracuda.Pooling.Abstractions.ObjectPool`1::<MaxSize>k__BackingField
	int32_t ___U3CMaxSizeU3Ek__BackingField_7;
	// System.Boolean Baracuda.Pooling.Abstractions.ObjectPool`1::<CollectionCheck>k__BackingField
	bool ___U3CCollectionCheckU3Ek__BackingField_8;
};

struct ObjectPool_1_t34170BA6B031165F4B5AA46EFDF45A5476C8A96D_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Baracuda.Pooling.Abstractions.ObjectPool`1::typeCache
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* ___typeCache_9;
};

// Baracuda.Pooling.Utils.PooledObject`1<System.Object>
struct PooledObject_1_t531FE91EBFE9F70D99958758175566217CCA8DD6 
{
	// T Baracuda.Pooling.Utils.PooledObject`1::Value
	RuntimeObject* ___Value_0;
	// Baracuda.Pooling.Interface.IObjectPool`1<T> Baracuda.Pooling.Utils.PooledObject`1::_pool
	RuntimeObject* ____pool_1;
};

// Baracuda.Pooling.Utils.PooledObject`1<System.Text.StringBuilder>
struct PooledObject_1_t06E1C1518D8DB8F62D9B331D98742F1C41BBA551 
{
	// T Baracuda.Pooling.Utils.PooledObject`1::Value
	StringBuilder_t* ___Value_0;
	// Baracuda.Pooling.Interface.IObjectPool`1<T> Baracuda.Pooling.Utils.PooledObject`1::_pool
	RuntimeObject* ____pool_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Baracuda.Pooling.Concretions.PooledStringBuilder
struct PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868 
{
	// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Value
	StringBuilder_t* ___Value_0;
	// Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder> Baracuda.Pooling.Concretions.PooledStringBuilder::_pool
	RuntimeObject* ____pool_1;
};
// Native definition for P/Invoke marshalling of Baracuda.Pooling.Concretions.PooledStringBuilder
struct PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshaled_pinvoke
{
	char* ___Value_0;
	RuntimeObject* ____pool_1;
};
// Native definition for COM marshalling of Baracuda.Pooling.Concretions.PooledStringBuilder
struct PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshaled_com
{
	Il2CppChar* ___Value_0;
	RuntimeObject* ____pool_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Text.StringBuilder>
struct ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B  : public ObjectPool_1_t34170BA6B031165F4B5AA46EFDF45A5476C8A96D
{
};

// Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Text.StringBuilder>
struct ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F  : public ObjectPool_1_t34170BA6B031165F4B5AA46EFDF45A5476C8A96D
{
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

// System.Action`1<System.Text.StringBuilder>
struct Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6  : public MulticastDelegate_t
{
};

// System.Func`1<System.Text.StringBuilder>
struct Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Object>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentObjectPool_1__ctor_m213C8738881FFA0174EF9C214F3983BA5115AE4E_gshared (ConcurrentObjectPool_1_t23EC4F59F91D9B5D151FA2EA922B6F5706AA6587* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___createFunc0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnGet1, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnRelease2, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method) ;
// Baracuda.Pooling.Utils.PooledObject`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1<System.Object>::GetDisposable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_t531FE91EBFE9F70D99958758175566217CCA8DD6 ObjectPool_1_GetDisposable_m3F94954D2FCE97FBEA0F16BF0945CC6F57AA81F9_gshared (ObjectPool_1_t8B1D8AAC49051E9BE802AFAA7ADEDE8AD6B32C32* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Object>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoolT_1__ctor_m40705D00DFB75ED5FCDD65E8C19E7DFC4E64805F_gshared (ObjectPoolT_1_t157809A06EE363D3C911B6C70FE0EA919F556DFD* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___createFunc0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnGet1, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnRelease2, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;

// System.Void Baracuda.Pooling.Concretions.PooledStringBuilder::.ctor(Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledStringBuilder__ctor_mB07D3FC2099A02F6161408775923CE6E475F6101 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, RuntimeObject* ___pool0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Text.StringBuilder>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mD927C23DE447A096B2B1F7D75ECDFE610DD39F2A (Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Text.StringBuilder>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1540C8C2516AEA9F0AEE87470E2815CA36C560C7 (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Text.StringBuilder>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
inline void ConcurrentObjectPool_1__ctor_mD0C7511B6A0EFB48308678A1AA064C3AC2EADE3A (ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B* __this, Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C* ___createFunc0, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___actionOnGet1, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___actionOnRelease2, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B*, Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C*, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*, bool, int32_t, int32_t, const RuntimeMethod*))ConcurrentObjectPool_1__ctor_m213C8738881FFA0174EF9C214F3983BA5115AE4E_gshared)(__this, ___createFunc0, ___actionOnGet1, ___actionOnRelease2, ___actionOnDestroy3, ___collectionCheck4, ___defaultCapacity5, ___maxSize6, method);
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0D2E0D9E4FDCD7C6DB4E277DC29D3F4B75F7C0E0 (U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Pooling.Concretions.PooledStringBuilder::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledStringBuilder_System_IDisposable_Dispose_m87ECB717F5B9EBAE80B052214661FD8DCFFA5EE1 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, const RuntimeMethod* method) ;
// System.String Baracuda.Pooling.Concretions.PooledStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PooledStringBuilder_ToString_m759AA97BF9564C176082AC9B2CD836244C8CCF0A (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m9452C953E5A4EE9E556F7126740628361F4F7E80_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m0919A5E3A1BA3578CB6438BBB24DDF58975DCC26_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m0734368B84F6E7A1CDD5F389D9811D69D99C306C_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m96C171781A822EB57832608B8161B3DED7D8F335_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA152B3B96490FC049694CA6A06B4CFD6ABB23300_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA11D6C840DCF610728FAD8928F7B29C7D3C2B4E2_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8 (StringBuilder_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mC28132E03B0148C28DA399F25F7F7A45ACCF9AD6_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mB7B835535BC8D4AA23B48D32240A411DCCFFE51E (StringBuilder_t* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA7A3160DF41CA75448896489EDC7C5FD40D806B2_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m2AE3195218B68BDDF01EF85928C76D6B596ED18D (StringBuilder_t* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m5D7FDC5F9A94BEDBAD47DD4F8307187129702F87_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E (StringBuilder_t* __this, float ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mCB9B3B46F519AC3CA92FFCA76484101BF303B3D5_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, float ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0 (StringBuilder_t* __this, double ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m12E51607904C1DAE368FAD4AD3AF2A71B397937D_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, double ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m6EB1E55B6DE8FF6C2BB05CE6F2CB896CAA1DFC07 (StringBuilder_t* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mD5A32DABBD23CCFBAE14F57DC76AA4C46D41ECAB_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// Baracuda.Pooling.Utils.PooledObject`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::GetDisposable()
inline PooledObject_1_t06E1C1518D8DB8F62D9B331D98742F1C41BBA551 ObjectPool_1_GetDisposable_m8BC711CDBE79D5A057E3326ADABA47882626012F (ObjectPool_1_t34170BA6B031165F4B5AA46EFDF45A5476C8A96D* __this, const RuntimeMethod* method)
{
	return ((  PooledObject_1_t06E1C1518D8DB8F62D9B331D98742F1C41BBA551 (*) (ObjectPool_1_t34170BA6B031165F4B5AA46EFDF45A5476C8A96D*, const RuntimeMethod*))ObjectPool_1_GetDisposable_m3F94954D2FCE97FBEA0F16BF0945CC6F57AA81F9_gshared)(__this, method);
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Text.StringBuilder>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
inline void ObjectPoolT_1__ctor_mECED48223CC76F90D39C90B25EDF4DC60D0D440B (ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F* __this, Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C* ___createFunc0, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___actionOnGet1, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___actionOnRelease2, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method)
{
	((  void (*) (ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F*, Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C*, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*, Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPoolT_1__ctor_m40705D00DFB75ED5FCDD65E8C19E7DFC4E64805F_gshared)(__this, ___createFunc0, ___actionOnGet1, ___actionOnRelease2, ___actionOnDestroy3, ___collectionCheck4, ___defaultCapacity5, ___maxSize6, method);
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3882A19BD49FF6E36775CBFCD94C9073B91485C0 (U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool>::Add(T)
inline bool HashSet_1_Add_mFE4F0154DB5D39B87A2965A2FEE11F2BD342A408 (HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333* __this, ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333*, ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::ReleaseUnmanagedResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_ReleaseUnmanagedResources_mBDC35936D59FB332779DD5A050CDA5A574ECB204 (ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool>::.ctor()
inline void HashSet_1__ctor_m25BBB69938DEB7D515F32E529AA956CD3D734F3F (HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
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
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentStringBuilderPool_Init_mA6ADAF6EC381A084C4B7E816DCAF48533BC831BF (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* ConcurrentStringBuilderPool_Get_m6B10A9173739DD76594D9DAD6F692B59705CFC09 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// return pool.Get();
		il2cpp_codegen_runtime_class_init_inline(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B* L_0 = ((ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var))->___pool_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = VirtualFuncInvoker0< StringBuilder_t* >::Invoke(12 /* T Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Get() */, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		StringBuilder_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::ReleaseStringBuilder(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentStringBuilderPool_ReleaseStringBuilder_m0D4129F202050131ECED857AA75B914014D7FFB5 (StringBuilder_t* ___toRelease0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool.Release(toRelease);
		il2cpp_codegen_runtime_class_init_inline(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B* L_0 = ((ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var))->___pool_0;
		StringBuilder_t* L_1 = ___toRelease0;
		NullCheck(L_0);
		VirtualActionInvoker1< StringBuilder_t* >::Invoke(13 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Release(T) */, L_0, L_1);
		// }
		return;
	}
}
// System.String Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConcurrentStringBuilderPool_Release_m9C87AC7EEF433ECF19A7106CC3A83B6DD4669F91 (StringBuilder_t* ___toRelease0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var str = toRelease.ToString();
		StringBuilder_t* L_0 = ___toRelease0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		// pool.Release(toRelease);
		il2cpp_codegen_runtime_class_init_inline(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B* L_2 = ((ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var))->___pool_0;
		StringBuilder_t* L_3 = ___toRelease0;
		NullCheck(L_2);
		VirtualActionInvoker1< StringBuilder_t* >::Invoke(13 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Release(T) */, L_2, L_3);
		// return str;
		String_t* L_4 = V_0;
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// Baracuda.Pooling.Concretions.PooledStringBuilder Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::GetDisposable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868 ConcurrentStringBuilderPool_GetDisposable_mA9B829B5A311E3FEF95584EF74D318234430F441 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new PooledStringBuilder(pool);
		il2cpp_codegen_runtime_class_init_inline(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B* L_0 = ((ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var))->___pool_0;
		PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PooledStringBuilder__ctor_mB07D3FC2099A02F6161408775923CE6E475F6101((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868 L_2 = V_0;
		return L_2;
	}
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentStringBuilderPool__cctor_m895A89D78E9F2472A0E1A20FED0FB0A50B462626 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentObjectPool_1__ctor_mD0C7511B6A0EFB48308678A1AA064C3AC2EADE3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_0_m52C1F27F03BF2754A1062698E528FFB8A8439B8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_1_m76EE7B6E519D30E40E62A0C9370F8742F7794A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ConcurrentObjectPool<StringBuilder> pool =
		//     new ConcurrentObjectPool<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var);
		U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284* L_0 = ((U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C* L_1 = (Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C*)il2cpp_codegen_object_new(Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mD927C23DE447A096B2B1F7D75ECDFE610DD39F2A(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__6_0_m52C1F27F03BF2754A1062698E528FFB8A8439B8C_RuntimeMethod_var), NULL);
		U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284* L_2 = ((U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* L_3 = (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*)il2cpp_codegen_object_new(Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m1540C8C2516AEA9F0AEE87470E2815CA36C560C7(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__6_1_m76EE7B6E519D30E40E62A0C9370F8742F7794A1E_RuntimeMethod_var), NULL);
		ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B* L_4 = (ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B*)il2cpp_codegen_object_new(ConcurrentObjectPool_1_tE11AF133D1D081756FEA663BA192CE70D05CDF7B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ConcurrentObjectPool_1__ctor_mD0C7511B6A0EFB48308678A1AA064C3AC2EADE3A(L_4, L_1, (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*)NULL, L_3, (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*)NULL, (bool)1, 1, ((int32_t)10000), ConcurrentObjectPool_1__ctor_mD0C7511B6A0EFB48308678A1AA064C3AC2EADE3A_RuntimeMethod_var);
		((ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var))->___pool_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t07E864C510A2BD883AC62A57A1C7DF4D429F4D53_il2cpp_TypeInfo_var))->___pool_0), (void*)L_4);
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
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA2F3921D4C80F5732D3C4A954C0AD1B2A8ADAE04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284* L_0 = (U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284*)il2cpp_codegen_object_new(U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0D2E0D9E4FDCD7C6DB4E277DC29D3F4B75F7C0E0(L_0, NULL);
		((U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0D2E0D9E4FDCD7C6DB4E277DC29D3F4B75F7C0E0 (U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::<.cctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* U3CU3Ec_U3C_cctorU3Eb__6_0_m52C1F27F03BF2754A1062698E528FFB8A8439B8C (U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new ConcurrentObjectPool<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)100), NULL);
		return L_0;
	}
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::<.cctor>b__6_1(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_1_m76EE7B6E519D30E40E62A0C9370F8742F7794A1E (U3CU3Ec_t66FE995C2B1897A3B8566AA696387205C1397284* __this, StringBuilder_t* ___builder0, const RuntimeMethod* method) 
{
	{
		// new ConcurrentObjectPool<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_0, NULL);
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
// Conversion methods for marshalling of: Baracuda.Pooling.Concretions.PooledStringBuilder
IL2CPP_EXTERN_C void PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshal_pinvoke(const PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868& unmarshaled, PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshaled_pinvoke& marshaled)
{
	Exception_t* ____pool_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pool' of type 'PooledStringBuilder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pool_1Exception, NULL);
}
IL2CPP_EXTERN_C void PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshal_pinvoke_back(const PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshaled_pinvoke& marshaled, PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868& unmarshaled)
{
	Exception_t* ____pool_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pool' of type 'PooledStringBuilder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pool_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Baracuda.Pooling.Concretions.PooledStringBuilder
IL2CPP_EXTERN_C void PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshal_pinvoke_cleanup(PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Baracuda.Pooling.Concretions.PooledStringBuilder
IL2CPP_EXTERN_C void PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshal_com(const PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868& unmarshaled, PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshaled_com& marshaled)
{
	Exception_t* ____pool_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pool' of type 'PooledStringBuilder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pool_1Exception, NULL);
}
IL2CPP_EXTERN_C void PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshal_com_back(const PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshaled_com& marshaled, PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868& unmarshaled)
{
	Exception_t* ____pool_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pool' of type 'PooledStringBuilder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pool_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Baracuda.Pooling.Concretions.PooledStringBuilder
IL2CPP_EXTERN_C void PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshal_com_cleanup(PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868_marshaled_com& marshaled)
{
}
// System.Void Baracuda.Pooling.Concretions.PooledStringBuilder::.ctor(Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledStringBuilder__ctor_mB07D3FC2099A02F6161408775923CE6E475F6101 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, RuntimeObject* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectPool_1_t1757130186370AE7DF7D2E6ECB288C726BAC1DA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = pool.Get();
		RuntimeObject* L_0 = ___pool0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = InterfaceFuncInvoker0< StringBuilder_t* >::Invoke(1 /* T Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>::Get() */, IObjectPool_1_t1757130186370AE7DF7D2E6ECB288C726BAC1DA6_il2cpp_TypeInfo_var, L_0);
		__this->___Value_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_0), (void*)L_1);
		// _pool = pool;
		RuntimeObject* L_2 = ___pool0;
		__this->____pool_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool_1), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PooledStringBuilder__ctor_mB07D3FC2099A02F6161408775923CE6E475F6101_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___pool0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	PooledStringBuilder__ctor_mB07D3FC2099A02F6161408775923CE6E475F6101(_thisAdjusted, ___pool0, method);
}
// System.Void Baracuda.Pooling.Concretions.PooledStringBuilder::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledStringBuilder_System_IDisposable_Dispose_m87ECB717F5B9EBAE80B052214661FD8DCFFA5EE1 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectPool_1_t1757130186370AE7DF7D2E6ECB288C726BAC1DA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pool.Release(Value);
		RuntimeObject* L_0 = __this->____pool_1;
		StringBuilder_t* L_1 = __this->___Value_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< StringBuilder_t* >::Invoke(3 /* System.Void Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>::Release(T) */, IObjectPool_1_t1757130186370AE7DF7D2E6ECB288C726BAC1DA6_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PooledStringBuilder_System_IDisposable_Dispose_m87ECB717F5B9EBAE80B052214661FD8DCFFA5EE1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	PooledStringBuilder_System_IDisposable_Dispose_m87ECB717F5B9EBAE80B052214661FD8DCFFA5EE1(_thisAdjusted, method);
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::op_Implicit(Baracuda.Pooling.Concretions.PooledStringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_op_Implicit_m5A456B75E732B677126405640958A9A00E27B658 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868 ___pooledObject0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return pooledObject.Value;
		PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868 L_0 = ___pooledObject0;
		StringBuilder_t* L_1 = L_0.___Value_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		StringBuilder_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Baracuda.Pooling.Concretions.PooledStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PooledStringBuilder_ToString_m759AA97BF9564C176082AC9B2CD836244C8CCF0A (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return Value.ToString();
		StringBuilder_t* L_0 = __this->___Value_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* PooledStringBuilder_ToString_m759AA97BF9564C176082AC9B2CD836244C8CCF0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PooledStringBuilder_ToString_m759AA97BF9564C176082AC9B2CD836244C8CCF0A(_thisAdjusted, method);
	return _returnValue;
}
// System.String Baracuda.Pooling.Concretions.PooledStringBuilder::op_Implicit(Baracuda.Pooling.Concretions.PooledStringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PooledStringBuilder_op_Implicit_m48A8E0BD1D93E43B826C4117A6C9F55250BCD4FA (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868 ___current0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return current.ToString();
		String_t* L_0;
		L_0 = PooledStringBuilder_ToString_m759AA97BF9564C176082AC9B2CD836244C8CCF0A((&___current0), NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m9452C953E5A4EE9E556F7126740628361F4F7E80 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		Il2CppChar L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_m9452C953E5A4EE9E556F7126740628361F4F7E80_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_m9452C953E5A4EE9E556F7126740628361F4F7E80_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m0919A5E3A1BA3578CB6438BBB24DDF58975DCC26 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value, repeatCount);
		StringBuilder_t* L_0 = __this->___Value_0;
		Il2CppChar L_1 = ___value0;
		int32_t L_2 = ___repeatCount1;
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		StringBuilder_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_m0919A5E3A1BA3578CB6438BBB24DDF58975DCC26_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_m0919A5E3A1BA3578CB6438BBB24DDF58975DCC26_inline(_thisAdjusted, ___value0, ___repeatCount1, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m0734368B84F6E7A1CDD5F389D9811D69D99C306C (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_m0734368B84F6E7A1CDD5F389D9811D69D99C306C_AdjustorThunk (RuntimeObject* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_m0734368B84F6E7A1CDD5F389D9811D69D99C306C_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m96C171781A822EB57832608B8161B3DED7D8F335 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value, startIndex, charCount);
		StringBuilder_t* L_0 = __this->___Value_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___value0;
		int32_t L_2 = ___startIndex1;
		int32_t L_3 = ___charCount2;
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		StringBuilder_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_m96C171781A822EB57832608B8161B3DED7D8F335_AdjustorThunk (RuntimeObject* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_m96C171781A822EB57832608B8161B3DED7D8F335_inline(_thisAdjusted, ___value0, ___startIndex1, ___charCount2, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA152B3B96490FC049694CA6A06B4CFD6ABB23300 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_mA152B3B96490FC049694CA6A06B4CFD6ABB23300_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_mA152B3B96490FC049694CA6A06B4CFD6ABB23300_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA11D6C840DCF610728FAD8928F7B29C7D3C2B4E2 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_mA11D6C840DCF610728FAD8928F7B29C7D3C2B4E2_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_mA11D6C840DCF610728FAD8928F7B29C7D3C2B4E2_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mC28132E03B0148C28DA399F25F7F7A45ACCF9AD6 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_mC28132E03B0148C28DA399F25F7F7A45ACCF9AD6_AdjustorThunk (RuntimeObject* __this, int64_t ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_mC28132E03B0148C28DA399F25F7F7A45ACCF9AD6_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA7A3160DF41CA75448896489EDC7C5FD40D806B2 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		int16_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_mB7B835535BC8D4AA23B48D32240A411DCCFFE51E(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_mA7A3160DF41CA75448896489EDC7C5FD40D806B2_AdjustorThunk (RuntimeObject* __this, int16_t ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_mA7A3160DF41CA75448896489EDC7C5FD40D806B2_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m5D7FDC5F9A94BEDBAD47DD4F8307187129702F87 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m2AE3195218B68BDDF01EF85928C76D6B596ED18D(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_m5D7FDC5F9A94BEDBAD47DD4F8307187129702F87_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_m5D7FDC5F9A94BEDBAD47DD4F8307187129702F87_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mCB9B3B46F519AC3CA92FFCA76484101BF303B3D5 (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, float ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		float L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_mCB9B3B46F519AC3CA92FFCA76484101BF303B3D5_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_mCB9B3B46F519AC3CA92FFCA76484101BF303B3D5_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m12E51607904C1DAE368FAD4AD3AF2A71B397937D (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, double ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		double L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_m12E51607904C1DAE368FAD4AD3AF2A71B397937D_AdjustorThunk (RuntimeObject* __this, double ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_m12E51607904C1DAE368FAD4AD3AF2A71B397937D_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mD5A32DABBD23CCFBAE14F57DC76AA4C46D41ECAB (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m6EB1E55B6DE8FF6C2BB05CE6F2CB896CAA1DFC07(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t* PooledStringBuilder_Append_mD5A32DABBD23CCFBAE14F57DC76AA4C46D41ECAB_AdjustorThunk (RuntimeObject* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method)
{
	PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868*>(__this + _offset);
	StringBuilder_t* _returnValue;
	_returnValue = PooledStringBuilder_Append_mD5A32DABBD23CCFBAE14F57DC76AA4C46D41ECAB_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderPool_Init_mF1640A5ACE7BAE9E32CBE132DCEBA4EAE6E4436F (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.StringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderPool_Get_mE2FD5487D8243565C5AB4A9CA5975E2B9614A40D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// return pool.Get();
		il2cpp_codegen_runtime_class_init_inline(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F* L_0 = ((StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var))->___pool_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = VirtualFuncInvoker0< StringBuilder_t* >::Invoke(12 /* T Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Get() */, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		StringBuilder_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool::ReleaseStringBuilder(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderPool_ReleaseStringBuilder_m90C1286A874D16BD8F67C2687542AAE0CBEACC19 (StringBuilder_t* ___toRelease0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool.Release(toRelease);
		il2cpp_codegen_runtime_class_init_inline(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F* L_0 = ((StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var))->___pool_0;
		StringBuilder_t* L_1 = ___toRelease0;
		NullCheck(L_0);
		VirtualActionInvoker1< StringBuilder_t* >::Invoke(13 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Release(T) */, L_0, L_1);
		// }
		return;
	}
}
// System.String Baracuda.Pooling.Concretions.StringBuilderPool::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderPool_Release_m4139C0B52C9E249F699F5C45B2AB0A56E263DC97 (StringBuilder_t* ___toRelease0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var str = toRelease.ToString();
		StringBuilder_t* L_0 = ___toRelease0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		// pool.Release(toRelease);
		il2cpp_codegen_runtime_class_init_inline(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F* L_2 = ((StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var))->___pool_0;
		StringBuilder_t* L_3 = ___toRelease0;
		NullCheck(L_2);
		VirtualActionInvoker1< StringBuilder_t* >::Invoke(13 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Release(T) */, L_2, L_3);
		// return str;
		String_t* L_4 = V_0;
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// Baracuda.Pooling.Utils.PooledObject`1<System.Text.StringBuilder> Baracuda.Pooling.Concretions.StringBuilderPool::GetDisposable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_t06E1C1518D8DB8F62D9B331D98742F1C41BBA551 StringBuilderPool_GetDisposable_mCC068C0A8C85BA41225A409434947C64515DD8E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_GetDisposable_m8BC711CDBE79D5A057E3326ADABA47882626012F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PooledObject_1_t06E1C1518D8DB8F62D9B331D98742F1C41BBA551 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return pool.GetDisposable();
		il2cpp_codegen_runtime_class_init_inline(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F* L_0 = ((StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var))->___pool_0;
		NullCheck(L_0);
		PooledObject_1_t06E1C1518D8DB8F62D9B331D98742F1C41BBA551 L_1;
		L_1 = ObjectPool_1_GetDisposable_m8BC711CDBE79D5A057E3326ADABA47882626012F(L_0, ObjectPool_1_GetDisposable_m8BC711CDBE79D5A057E3326ADABA47882626012F_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		PooledObject_1_t06E1C1518D8DB8F62D9B331D98742F1C41BBA551 L_2 = V_0;
		return L_2;
	}
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderPool__cctor_m37984AD70CC834B739E6F7A68433E1187AF1326C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoolT_1__ctor_mECED48223CC76F90D39C90B25EDF4DC60D0D440B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_0_m838D5B978048D9B9975AF3B7885C8C1B7E8FE7D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_1_m877083A57C2B3DD161B74F49D33B177E78A4732E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ObjectPoolT<StringBuilder> pool =
		//     new ObjectPoolT<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var);
		U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B* L_0 = ((U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C* L_1 = (Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C*)il2cpp_codegen_object_new(Func_1_t067EFEB6C5607DEFF52B09F0A11295959E292D7C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mD927C23DE447A096B2B1F7D75ECDFE610DD39F2A(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__6_0_m838D5B978048D9B9975AF3B7885C8C1B7E8FE7D2_RuntimeMethod_var), NULL);
		U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B* L_2 = ((U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* L_3 = (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*)il2cpp_codegen_object_new(Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m1540C8C2516AEA9F0AEE87470E2815CA36C560C7(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__6_1_m877083A57C2B3DD161B74F49D33B177E78A4732E_RuntimeMethod_var), NULL);
		ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F* L_4 = (ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F*)il2cpp_codegen_object_new(ObjectPoolT_1_tA340AD7D26A8907315E3389E3ACF1C0CF35EDA6F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ObjectPoolT_1__ctor_mECED48223CC76F90D39C90B25EDF4DC60D0D440B(L_4, L_1, (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*)NULL, L_3, (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*)NULL, (bool)1, 1, ((int32_t)10000), ObjectPoolT_1__ctor_mECED48223CC76F90D39C90B25EDF4DC60D0D440B_RuntimeMethod_var);
		((StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var))->___pool_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var))->___pool_0), (void*)L_4);
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
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA2C822E37B5E96411892D26DBF9532E0774AA53A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B* L_0 = (U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B*)il2cpp_codegen_object_new(U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3882A19BD49FF6E36775CBFCD94C9073B91485C0(L_0, NULL);
		((U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3882A19BD49FF6E36775CBFCD94C9073B91485C0 (U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.StringBuilderPool/<>c::<.cctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* U3CU3Ec_U3C_cctorU3Eb__6_0_m838D5B978048D9B9975AF3B7885C8C1B7E8FE7D2 (U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new ObjectPoolT<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)100), NULL);
		return L_0;
	}
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool/<>c::<.cctor>b__6_1(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_1_m877083A57C2B3DD161B74F49D33B177E78A4732E (U3CU3Ec_tD0D2348E5B7DE2DB3933242BDAE9A7008F16670B* __this, StringBuilder_t* ___builder0, const RuntimeMethod* method) 
{
	{
		// new ObjectPoolT<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_0, NULL);
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
// System.Collections.Generic.IReadOnlyCollection`1<Baracuda.Pooling.Abstractions.ObjectPool> Baracuda.Pooling.Abstractions.ObjectPool::get_ActivePools()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_get_ActivePools_m14632E5BD65FE18F6AEA4FD785863F32F89CE6F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IReadOnlyCollection<ObjectPool> ActivePools => activePools;
		il2cpp_codegen_runtime_class_init_inline(ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var);
		HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333* L_0 = ((ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var))->___activePools_0;
		return L_0;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__ctor_mF7D90B5561779B9DD2AD9CDF85AD36547076078A (ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mFE4F0154DB5D39B87A2965A2FEE11F2BD342A408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ObjectPool()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// activePools.Add(this);
		il2cpp_codegen_runtime_class_init_inline(ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var);
		HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333* L_0 = ((ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var))->___activePools_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = HashSet_1_Add_mFE4F0154DB5D39B87A2965A2FEE11F2BD342A408(L_0, __this, HashSet_1_Add_mFE4F0154DB5D39B87A2965A2FEE11F2BD342A408_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::ReleaseUnmanagedResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_ReleaseUnmanagedResources_mBDC35936D59FB332779DD5A050CDA5A574ECB204 (ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41* __this, const RuntimeMethod* method) 
{
	{
		// Clear();
		VirtualActionInvoker0::Invoke(5 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool::Clear() */, __this);
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Dispose_m4B3A1891B898EB2ECCE7FAAF8DF8BEED8C57DBDB (ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// ReleaseUnmanagedResources();
		ObjectPool_ReleaseUnmanagedResources_mBDC35936D59FB332779DD5A050CDA5A574ECB204(__this, NULL);
		// if (disposing)
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Dispose_mF47045C44CC51D7C26AAF4797C8019314C96AECD (ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtualActionInvoker1< bool >::Invoke(6 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Finalize_mCB1794A50782F33B17F32C0954FADD881E682314 (ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose(false);
			VirtualActionInvoker1< bool >::Invoke(6 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__cctor_m150A8D2BA65730F3EDC163D58CBD12B4A684A6C5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m25BBB69938DEB7D515F32E529AA956CD3D734F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HashSet<ObjectPool> activePools = new HashSet<ObjectPool>();
		HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333* L_0 = (HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333*)il2cpp_codegen_object_new(HashSet_1_tF61807D08D31A4D6CC29C84C4ADB3851A67A5333_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m25BBB69938DEB7D515F32E529AA956CD3D734F3F(L_0, HashSet_1__ctor_m25BBB69938DEB7D515F32E529AA956CD3D734F3F_RuntimeMethod_var);
		((ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var))->___activePools_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t074FCF820A776627C7EB6F7F51B8F27D194CED41_il2cpp_TypeInfo_var))->___activePools_0), (void*)L_0);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3D605AB86AC0345228F977DE6621DC55C3A3D5D9 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m9452C953E5A4EE9E556F7126740628361F4F7E80_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		Il2CppChar L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m0919A5E3A1BA3578CB6438BBB24DDF58975DCC26_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value, repeatCount);
		StringBuilder_t* L_0 = __this->___Value_0;
		Il2CppChar L_1 = ___value0;
		int32_t L_2 = ___repeatCount1;
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		StringBuilder_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m0734368B84F6E7A1CDD5F389D9811D69D99C306C_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m96C171781A822EB57832608B8161B3DED7D8F335_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value, startIndex, charCount);
		StringBuilder_t* L_0 = __this->___Value_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___value0;
		int32_t L_2 = ___startIndex1;
		int32_t L_3 = ___charCount2;
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		StringBuilder_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA152B3B96490FC049694CA6A06B4CFD6ABB23300_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA11D6C840DCF610728FAD8928F7B29C7D3C2B4E2_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mC28132E03B0148C28DA399F25F7F7A45ACCF9AD6_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mA7A3160DF41CA75448896489EDC7C5FD40D806B2_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		int16_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_mB7B835535BC8D4AA23B48D32240A411DCCFFE51E(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m5D7FDC5F9A94BEDBAD47DD4F8307187129702F87_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m2AE3195218B68BDDF01EF85928C76D6B596ED18D(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mCB9B3B46F519AC3CA92FFCA76484101BF303B3D5_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, float ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		float L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_m12E51607904C1DAE368FAD4AD3AF2A71B397937D_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, double ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		double L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* PooledStringBuilder_Append_mD5A32DABBD23CCFBAE14F57DC76AA4C46D41ECAB_inline (PooledStringBuilder_t635172062F3DA5570AE93960FC002A86850BE868* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	StringBuilder_t* V_0 = NULL;
	{
		// return Value.Append(value);
		StringBuilder_t* L_0 = __this->___Value_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m6EB1E55B6DE8FF6C2BB05CE6F2CB896CAA1DFC07(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		StringBuilder_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
