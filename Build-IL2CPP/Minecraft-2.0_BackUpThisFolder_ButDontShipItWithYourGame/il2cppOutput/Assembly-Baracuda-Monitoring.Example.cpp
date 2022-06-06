#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// Baracuda.Monitoring.MonitoredSingleton`1<Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor>
struct MonitoredSingleton_1_tC505704F8886BC7891BF314EDD2E92CADBFD50BB;
// Baracuda.Monitoring.MonitoredSingleton`1<System.Object>
struct MonitoredSingleton_1_t6C12B01086D39458DBCE833C3ECB6B217F74483B;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>
struct Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA;
// Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>
struct ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Baracuda.Monitoring.Example.Scripts.Projectile[]
struct ProjectileU5BU5D_tB6AFB56D4C71F465D2A34594A51D7F88776A2FE4;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Baracuda.Monitoring.Example.Scripts.AmmunitionPack
struct AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor
struct FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Baracuda.Monitoring.Example.Scripts.GenericsExample
struct GenericsExample_t562CE46CC316EC63FC11918C8B39388B737EE5AD;
// Baracuda.Monitoring.Example.Scripts.HitBox
struct HitBox_t482D682C08B9D173302AE71E9ABE5786B222475D;
// Baracuda.Monitoring.Example.Scripts.IDamageable
struct IDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Baracuda.Monitoring.Example.Scripts.IPlayerInput
struct IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A;
// Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput
struct LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Baracuda.Monitoring.Example.Scripts.MonitorInput
struct MonitorInput_t42DB2EC14D5F565F1882BC134007992DF7EC1FA5;
// Baracuda.Monitoring.MonitoredBehaviour
struct MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Baracuda.Monitoring.Example.Scripts.PlayerMovement
struct PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D;
// Baracuda.Monitoring.Example.Scripts.PlayerWeapon
struct PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6;
// Baracuda.Monitoring.Example.Scripts.Projectile
struct Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D;
// Baracuda.Monitoring.Example.Scripts.ProjectilePool
struct ProjectilePool_tE1FA2CC85E82D6F7FA477801EA57E09AD91648FD;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Baracuda.Monitoring.Example.Scripts.ShootingTarget
struct ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5
struct U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject
struct IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6;
// Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c
struct U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B;
// Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39
struct U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440;
// Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6
struct U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527;
// Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11
struct U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0837041AD0EE0643F6824EDD39A94236A4C64E77;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral228AB9E61C52401E2BCC03F161ECA5B69A14DC54;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2782E60458C315FD9CCA88FAAA60C80198F1751C;
IL2CPP_EXTERN_C String_t* _stringLiteral32B3E6D6F1633A27671CD1FFEC132F2C3B158F79;
IL2CPP_EXTERN_C String_t* _stringLiteral41F34472FD1EC18AB899F5BD0C1EA11201795341;
IL2CPP_EXTERN_C String_t* _stringLiteral4C8E53BB00CB458F66CD314AADF58285ABC31E61;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0483570A78643AE1FD9C1B5E0DE2FBC10DF38F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteralACBF7A4CD422476FEB006274145662AE739D5833;
IL2CPP_EXTERN_C String_t* _stringLiteralBA0318C58431FE2137800A0147599057929A2F71;
IL2CPP_EXTERN_C String_t* _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203;
IL2CPP_EXTERN_C String_t* _stringLiteralC66FB6A39237C31222C78DEDB1295C5BD1F974B4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_mF41C214E4F9783AB8DE32DAAB0EA0BD69D73FEFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_mA5E6D21FEF197BEF5D54825A8B8643B8A859D9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisPlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6_mB4596BE70A718A8DF769380B36C4075994D49F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2_mB75EF90AEC8D074AC1F1BC896DFC2FFAEBE2B279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitoredSingleton_1__ctor_mF75C340682D2F93C49F1C11AB1F87A4F0ED68DB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisProjectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_mB0A5FB2CF0AB64927468D7E2DFE2DB34490671D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m48DF9C55B00B8523A2D29B350570B757A5E9B970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m04E066DE0767AD71976BF6205E49F5785BF083C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m956416EC0FAE260C7A7E01A8BF6FA294542745C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCooldownCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_mEB7EEF7446B09372740834C505CC8CF935F7CBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCooldownCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m33032966A6E9E9C74D8B0B61864CD95D2567CF2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSecondForceU3Ed__6_System_Collections_IEnumerator_Reset_mA0D146EC512688429C86AB4C08454617F039A3AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__39_System_Collections_IEnumerator_Reset_m62F1A4706B8D579077A8950830A0D72F6C2C4A0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__38_0_mF485C7278B67CFCB01AD4D7153F5BBFCC049ADF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueObject_1__ctor_m1C7A03EA21F276F1F24D3C0F848D7C90DBA4E61D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueObject_1_set_Value_mCF9881F3E6E5EE135709AA4F9A1BC485FDF008DB_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD6EE5F6B967C8A0C6A4CDAA17EB9C479433A5592 
{
};

// System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>
struct Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ProjectileU5BU5D_tB6AFB56D4C71F465D2A34594A51D7F88776A2FE4* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// Baracuda.Monitoring.MonitoredObject
struct MonitoredObject_t0CF9CF4B82D8F2BF4687B17BA5C72A0CFD6F2621  : public RuntimeObject
{
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5
struct U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A  : public RuntimeObject
{
	// System.Int32 Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Baracuda.Monitoring.Example.Scripts.AmmunitionPack Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::<>4__this
	AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* ___U3CU3E4__this_2;
};

// Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c
struct U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B  : public RuntimeObject
{
};

struct U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_StaticFields
{
	// Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c::<>9
	U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B* ___U3CU3E9_0;
	// System.Action Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c::<>9__38_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__38_0_1;
};

// Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39
struct U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440  : public RuntimeObject
{
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Baracuda.Monitoring.Example.Scripts.PlayerMovement Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::<>4__this
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* ___U3CU3E4__this_2;
	// UnityEngine.Transform Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::<self>5__1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CselfU3E5__1_3;
};

// Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11
struct U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF  : public RuntimeObject
{
	// System.Int32 Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Baracuda.Monitoring.Example.Scripts.ShootingTarget Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::<>4__this
	ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* ___U3CU3E4__this_2;
};

// Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>
struct ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A  : public MonitoredObject_t0CF9CF4B82D8F2BF4687B17BA5C72A0CFD6F2621
{
	// T Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1::<Value>k__BackingField
	int32_t ___U3CValueU3Ek__BackingField_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject
struct IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6  : public ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A
{
};

// Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6
struct U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527  : public RuntimeObject
{
	// System.Int32 Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Vector3 Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::force
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force_2;
	// Baracuda.Monitoring.Example.Scripts.Projectile Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::<>4__this
	Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* ___U3CU3E4__this_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Baracuda.Monitoring.Internal.Utilities.MonoSingleton`1<Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor>
struct MonoSingleton_1_t34A56DF4F7D36E2C0B646E38B3C26245904044F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Baracuda.Monitoring.Internal.Utilities.MonoSingleton`1::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_4;
	// System.Boolean Baracuda.Monitoring.Internal.Utilities.MonoSingleton`1::hideInHierarchy
	bool ___hideInHierarchy_5;
};

struct MonoSingleton_1_t34A56DF4F7D36E2C0B646E38B3C26245904044F1_StaticFields
{
	// T Baracuda.Monitoring.Internal.Utilities.MonoSingleton`1::<Current>k__BackingField
	FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3* ___U3CCurrentU3Ek__BackingField_6;
};

// Baracuda.Monitoring.Example.Scripts.GenericsExample
struct GenericsExample_t562CE46CC316EC63FC11918C8B39388B737EE5AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject Baracuda.Monitoring.Example.Scripts.GenericsExample::_valueObject
	IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6* ____valueObject_4;
};

// Baracuda.Monitoring.Example.Scripts.HitBox
struct HitBox_t482D682C08B9D173302AE71E9ABE5786B222475D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Baracuda.Monitoring.Example.Scripts.HitBox::damageMultiplier
	float ___damageMultiplier_4;
	// Baracuda.Monitoring.Example.Scripts.ShootingTarget Baracuda.Monitoring.Example.Scripts.HitBox::_shootingTarget
	ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* ____shootingTarget_5;
};

// Baracuda.Monitoring.Example.Scripts.MonitorInput
struct MonitorInput_t42DB2EC14D5F565F1882BC134007992DF7EC1FA5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.MonitorInput::toggleKey
	int32_t ___toggleKey_4;
};

// Baracuda.Monitoring.MonitoredBehaviour
struct MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Baracuda.Monitoring.Example.Scripts.Projectile
struct Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Baracuda.Monitoring.Example.Scripts.Projectile::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_4;
	// System.Single Baracuda.Monitoring.Example.Scripts.Projectile::_damage
	float ____damage_5;
	// UnityEngine.Transform Baracuda.Monitoring.Example.Scripts.Projectile::_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____transform_6;
};

struct Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_StaticFields
{
	// UnityEngine.WaitForSeconds Baracuda.Monitoring.Example.Scripts.Projectile::waitForSeconds
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___waitForSeconds_7;
};

// Baracuda.Monitoring.Example.Scripts.ProjectilePool
struct ProjectilePool_tE1FA2CC85E82D6F7FA477801EA57E09AD91648FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Baracuda.Monitoring.Example.Scripts.Projectile Baracuda.Monitoring.Example.Scripts.ProjectilePool::projectilePrefab
	Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* ___projectilePrefab_4;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.ProjectilePool::projectileCount
	int32_t ___projectileCount_5;
	// System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile> Baracuda.Monitoring.Example.Scripts.ProjectilePool::_projectilePool
	Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA* ____projectilePool_6;
};

// Baracuda.Monitoring.MonitoredSingleton`1<Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor>
struct MonitoredSingleton_1_tC505704F8886BC7891BF314EDD2E92CADBFD50BB  : public MonoSingleton_1_t34A56DF4F7D36E2C0B646E38B3C26245904044F1
{
};

// Baracuda.Monitoring.Example.Scripts.AmmunitionPack
struct AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655  : public MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0
{
	// System.Single Baracuda.Monitoring.Example.Scripts.AmmunitionPack::cooldown
	float ___cooldown_4;
	// UnityEngine.GameObject Baracuda.Monitoring.Example.Scripts.AmmunitionPack::ammunitionMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ammunitionMesh_5;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.AmmunitionPack::_isActive
	bool ____isActive_6;
	// System.Single Baracuda.Monitoring.Example.Scripts.AmmunitionPack::_cooldown
	float ____cooldown_7;
};

// Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput
struct LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD  : public MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0
{
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::jumpKey
	int32_t ___jumpKey_4;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::primaryFireKey
	int32_t ___primaryFireKey_5;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::secondaryFireKey
	int32_t ___secondaryFireKey_6;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::dashKey
	int32_t ___dashKey_7;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::toggleCursorKey
	int32_t ___toggleCursorKey_8;
	// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<Vertical>k__BackingField
	float ___U3CVerticalU3Ek__BackingField_9;
	// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<Horizontal>k__BackingField
	float ___U3CHorizontalU3Ek__BackingField_10;
	// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<MouseX>k__BackingField
	float ___U3CMouseXU3Ek__BackingField_11;
	// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<MouseY>k__BackingField
	float ___U3CMouseYU3Ek__BackingField_12;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<JumpPressed>k__BackingField
	bool ___U3CJumpPressedU3Ek__BackingField_13;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<PrimaryFirePressed>k__BackingField
	bool ___U3CPrimaryFirePressedU3Ek__BackingField_14;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<SecondaryFirePressed>k__BackingField
	bool ___U3CSecondaryFirePressedU3Ek__BackingField_15;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<DashPressed>k__BackingField
	bool ___U3CDashPressedU3Ek__BackingField_16;
	// System.Action Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::ToggleCursor
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ToggleCursor_17;
};

// Baracuda.Monitoring.Example.Scripts.PlayerMovement
struct PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D  : public MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0
{
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::movementSpeed
	float ___movementSpeed_4;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::jumpForce
	float ___jumpForce_5;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::gravityForce
	float ___gravityForce_6;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::mouseSensitivity
	float ___mouseSensitivity_7;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::airMovementSharpness
	float ___airMovementSharpness_8;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::inputSharpness
	float ___inputSharpness_9;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement::jumps
	int32_t ___jumps_10;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashForce
	float ___dashForce_11;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashDuration
	float ___dashDuration_12;
	// UnityEngine.AnimationCurve Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___dashCurve_13;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashAmount
	int32_t ___dashAmount_14;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::minTimeBetweenDash
	float ___minTimeBetweenDash_15;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashRechargeGrounded
	float ___dashRechargeGrounded_16;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashRechargeAirborne
	float ___dashRechargeAirborne_17;
	// UnityEngine.LayerMask Baracuda.Monitoring.Example.Scripts.PlayerMovement::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_18;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::groundCheckRadius
	float ___groundCheckRadius_19;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::killHeight
	float ___killHeight_20;
	// UnityEngine.CharacterController Baracuda.Monitoring.Example.Scripts.PlayerMovement::_characterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____characterController_21;
	// UnityEngine.Transform Baracuda.Monitoring.Example.Scripts.PlayerMovement::_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____transform_22;
	// UnityEngine.Camera Baracuda.Monitoring.Example.Scripts.PlayerMovement::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_23;
	// Baracuda.Monitoring.Example.Scripts.IPlayerInput Baracuda.Monitoring.Example.Scripts.PlayerMovement::_input
	RuntimeObject* ____input_24;
	// UnityEngine.Vector3 Baracuda.Monitoring.Example.Scripts.PlayerMovement::_spawnPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____spawnPosition_25;
	// UnityEngine.Quaternion Baracuda.Monitoring.Example.Scripts.PlayerMovement::_spawnRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____spawnRotation_26;
	// UnityEngine.Vector2 Baracuda.Monitoring.Example.Scripts.PlayerMovement::_processedInputDir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____processedInputDir_27;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_rotationX
	float ____rotationX_28;
	// UnityEngine.Vector3 Baracuda.Monitoring.Example.Scripts.PlayerMovement::_velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____velocity_29;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::_isJumping
	bool ____isJumping_30;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::_isFalling
	bool ____isFalling_31;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_lastJumpTime
	float ____lastJumpTime_32;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement::_jumpsLeft
	int32_t ____jumpsLeft_33;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_dashEnergy
	float ____dashEnergy_34;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::_isDashing
	bool ____isDashing_35;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_lastDashTime
	float ____lastDashTime_36;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_dashStartTime
	float ____dashStartTime_37;
	// Baracuda.Monitoring.Example.Scripts.GroundStatus Baracuda.Monitoring.Example.Scripts.PlayerMovement::_lastGroundCheck
	int32_t ____lastGroundCheck_38;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_lastGroundedTime
	float ____lastGroundedTime_40;
	// UnityEngine.Collider[] Baracuda.Monitoring.Example.Scripts.PlayerMovement::_raycastHits
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____raycastHits_41;
};

struct PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_StaticFields
{
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement::hitCount
	int32_t ___hitCount_39;
};

// Baracuda.Monitoring.Example.Scripts.PlayerWeapon
struct PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6  : public MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0
{
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::damage
	float ___damage_4;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerWeapon::fullAutomatic
	bool ___fullAutomatic_5;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::shotsPerSecond
	float ___shotsPerSecond_6;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerWeapon::bulletsPerShot
	int32_t ___bulletsPerShot_7;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::bulletSpread
	float ___bulletSpread_8;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::bulletForce
	float ___bulletForce_9;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerWeapon::ammunition
	int32_t ___ammunition_10;
	// UnityEngine.LayerMask Baracuda.Monitoring.Example.Scripts.PlayerWeapon::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_11;
	// UnityEngine.Transform Baracuda.Monitoring.Example.Scripts.PlayerWeapon::projectileSpawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___projectileSpawnPosition_12;
	// Baracuda.Monitoring.Example.Scripts.ProjectilePool Baracuda.Monitoring.Example.Scripts.PlayerWeapon::projectilePool
	ProjectilePool_tE1FA2CC85E82D6F7FA477801EA57E09AD91648FD* ___projectilePool_13;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::defaultFOV
	float ___defaultFOV_14;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::zoomFOV
	float ___zoomFOV_15;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::fovSharpness
	float ___fovSharpness_16;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_currentAmmunition
	int32_t ____currentAmmunition_17;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_lastFireTime
	float ____lastFireTime_18;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_targetFOV
	float ____targetFOV_19;
	// Baracuda.Monitoring.Example.Scripts.IPlayerInput Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_input
	RuntimeObject* ____input_20;
	// UnityEngine.Camera Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_21;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_canFireSemiAutomatic
	bool ____canFireSemiAutomatic_22;
};

// Baracuda.Monitoring.Example.Scripts.ShootingTarget
struct ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0  : public MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0
{
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::health
	float ___health_4;
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::recoverCooldownMin
	float ___recoverCooldownMin_5;
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::recoverCooldownMax
	float ___recoverCooldownMax_6;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.ShootingTarget::_isAlive
	bool ____isAlive_7;
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::_currentHealth
	float ____currentHealth_8;
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::_cooldown
	float ____cooldown_9;
	// UnityEngine.Animator Baracuda.Monitoring.Example.Scripts.ShootingTarget::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_10;
};

struct ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_StaticFields
{
	// System.Int32 Baracuda.Monitoring.Example.Scripts.ShootingTarget::knockdown
	int32_t ___knockdown_11;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.ShootingTarget::recover
	int32_t ___recover_12;
};

// Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor
struct FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3  : public MonitoredSingleton_1_tC505704F8886BC7891BF314EDD2E92CADBFD50BB
{
	// System.Single Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::_fps
	float ____fps_18;
	// System.Int64 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::_totalFrameCount
	int64_t ____totalFrameCount_19;
	// System.Int64 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::_fixedUpdateCount
	int64_t ____fixedUpdateCount_20;
};

struct FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields
{
	// System.Single Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::timer
	float ___timer_13;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::lastFPS
	int32_t ___lastFPS_14;
	// System.Single Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::lastMeasuredFps
	float ___lastMeasuredFps_15;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::frameCount
	int32_t ___frameCount_16;
	// System.Text.StringBuilder Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::stringBuilder
	StringBuilder_t* ___stringBuilder_17;
	// System.Action`1<System.Single> Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::FPSUpdated
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___FPSUpdated_21;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueObject_1__ctor_m1C7A03EA21F276F1F24D3C0F848D7C90DBA4E61D_gshared (ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>::set_Value(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueObject_1_set_Value_mCF9881F3E6E5EE135709AA4F9A1BC485FDF008DB_gshared_inline (ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.MonitoredSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoredSingleton_1__ctor_m6574E016F081F1DE9A6398CE6A203D27F3A9505B_gshared (MonitoredSingleton_1_t6C12B01086D39458DBCE833C3ECB6B217F74483B* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Component::TryGetComponent<Baracuda.Monitoring.Example.Scripts.PlayerWeapon>(T&)
inline bool Component_TryGetComponent_TisPlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6_mB4596BE70A718A8DF769380B36C4075994D49F0F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::ReplenishAmmunition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_ReplenishAmmunition_mF048E43CFE7F4258D93143BA45874DFF4D3C37C2 (PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.AmmunitionPack::CooldownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AmmunitionPack_CooldownCoroutine_m3F41C5368C9704D4DB9F9BF058C10DC81A66752A (AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__5__ctor_m40E1D571450006057F8B9DEDD6F35B94EB0F4154 (U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.MonitoredBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoredBehaviour__ctor_m55E1BE6E2D081A6DE67993B1262DD4A4883CE47F (MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntValueObject__ctor_mB714252B00BBCFAF17E1297646A5EF33E2DA896D (IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>::.ctor()
inline void ValueObject_1__ctor_m1C7A03EA21F276F1F24D3C0F848D7C90DBA4E61D (ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A* __this, const RuntimeMethod* method)
{
	((  void (*) (ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A*, const RuntimeMethod*))ValueObject_1__ctor_m1C7A03EA21F276F1F24D3C0F848D7C90DBA4E61D_gshared)(__this, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>::set_Value(T)
inline void ValueObject_1_set_Value_mCF9881F3E6E5EE135709AA4F9A1BC485FDF008DB_inline (ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A*, int32_t, const RuntimeMethod*))ValueObject_1_set_Value_mCF9881F3E6E5EE135709AA4F9A1BC485FDF008DB_gshared_inline)(__this, ___value0, method);
}
// T UnityEngine.Component::GetComponentInParent<Baracuda.Monitoring.Example.Scripts.ShootingTarget>()
inline ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* Component_GetComponentInParent_TisShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_mF41C214E4F9783AB8DE32DAAB0EA0BD69D73FEFF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget_TakeDamage_m616085065175456496D5CE88895601C1DFC98CEA (ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* __this, float ___damage0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_Vertical(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Vertical_m571A9DC549949DDCD63E78FD521A99B221E6EF72_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_Horizontal(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Horizontal_mFC0CC6134E820CBF9F3BBB4ED7234E7B59A7B5FC_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_MouseX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseX_mE71FEC6CB3CF32BCE59A2426251601C803F7BE21_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_MouseY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseY_mA7995F4C7F72B58F551F960D3BAE273058A57F91_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_JumpPressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_JumpPressed_m6621D2D43EC40443DC03F3B65C8CF0C20D28A169_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_PrimaryFirePressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_PrimaryFirePressed_m155E8F4AB2DDB25DD6CB193B00F2854C090B8ABE_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_SecondaryFirePressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_SecondaryFirePressed_mB1F6C5EAB90C0FE24D192205197044A1AF6A8B57_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_DashPressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_DashPressed_m772FC6489C8127CC13CCC07F9D312EAA334354A9_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean Baracuda.Monitoring.API.MonitoringUI::ToggleDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitoringUI_ToggleDisplay_m341FF395FAF712B677D5E2642AF4B3B39A34BF0A (const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.MonitoredBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoredBehaviour_Awake_mD81D956EBFE16D3AFC350371F98E570AE80A6ACE (MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Baracuda.Monitoring.Example.Scripts.IPlayerInput>()
inline RuntimeObject* Component_GetComponent_TisIPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_mA5E6D21FEF197BEF5D54825A8B8643B8A859D9C3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__39__ctor_m0CB3D1803E475149C72278B96E0EBE29888A80F3 (U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::PerformCharacterMovement(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_PerformCharacterMovement_m5E17EFB4210B3D61611610E20F6CFE9480BBD622 (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, float ___deltaTime0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// Baracuda.Monitoring.Example.Scripts.GroundStatus Baracuda.Monitoring.Example.Scripts.PlayerMovement::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerMovement_GroundCheck_m50FE86EA5034C3178D455E548B288CCBB60399BF (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::CanDash(System.Single,Baracuda.Monitoring.Example.Scripts.GroundStatus,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_CanDash_m097127AF1D2CB381EE233C3AC4A937233F49E48A (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, float ___time0, int32_t ___groundCheck1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rawInputDir2, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::BeginDash(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_BeginDash_mED78D99687C8F3C08EA1F186556CA57ECDA6913B (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::PerformDash(System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_PerformDash_m4F77D59CAEABE4030F652FCCC01366D9E09C4BD2 (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, float ___deltaTime0, float ___time1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___directionVector2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_m787ECDB9635D1FD075C69D11BAB111298BA78FAD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m39797B266D7C3988B450FFCA1F5C8D73EDEBDA26 (U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Cursor::get_visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cursor_get_visible_mC9926F373AB4B10F5376D37A6C278DBD85EF4871 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.StringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderPool_Get_mE2FD5487D8243565C5AB4A9CA5975E2B9614A40D (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Baracuda.Pooling.Concretions.StringBuilderPool::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderPool_Release_m4139C0B52C9E249F699F5C45B2AB0A56E263DC97 (StringBuilder_t* ___toRelease0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::PreformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_PreformRaycast_mF504E2C06CBA2659822ABA724636F316A0E8E397 (PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// Baracuda.Monitoring.Example.Scripts.Projectile Baracuda.Monitoring.Example.Scripts.ProjectilePool::GetProjectileFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* ProjectilePool_GetProjectileFromPool_mD80DD1A572354525D83C1BCD56AC8D97F6EE927F (ProjectilePool_tE1FA2CC85E82D6F7FA477801EA57E09AD91648FD* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::Setup(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Setup_m6C1FCFFEADF1E42C6B1A8F4D0A9D36B5F81D2123 (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___damage2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force3, float ___spread4, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.Projectile::SecondForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Projectile_SecondForce_m71D61BCAB0DD2EBBBB68D7FC14AE6EFA528B5565 (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSecondForceU3Ed__6__ctor_mF2024D4DC720935CE206A9F3FC063A7D22ED5C74 (U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Baracuda.Monitoring.Example.Scripts.IDamageable>()
inline RuntimeObject* GameObject_GetComponent_TisIDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2_mB75EF90AEC8D074AC1F1BC896DFC2FFAEBE2B279 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<Baracuda.Monitoring.Example.Scripts.Projectile>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* Object_Instantiate_TisProjectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_mB0A5FB2CF0AB64927468D7E2DFE2DB34490671D7 (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* (*) (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>::Enqueue(T)
inline void Queue_1_Enqueue_m04E066DE0767AD71976BF6205E49F5785BF083C7 (Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA* __this, Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA*, Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>::Dequeue()
inline Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* Queue_1_Dequeue_m48DF9C55B00B8523A2D29B350570B757A5E9B970 (Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA* __this, const RuntimeMethod* method)
{
	return ((  Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* (*) (Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>::.ctor()
inline void Queue_1__ctor_m956416EC0FAE260C7A7E01A8BF6FA294542745C1 (Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.ShootingTarget::CooldownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShootingTarget_CooldownCoroutine_mE0436A2C800F73D068120FD762D0D9E170ECF8C7 (ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__11__ctor_m41B52DD0A0B93A0839E5144A465A7D9118FA6103 (U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.Application::get_targetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_targetFrameRate_mB9877E89AFCF1CF0651D9471D5152490BF66BE5E (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.QualitySettings::get_vSyncCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_vSyncCount_m623B92EE9CBB51A7A96CA88022319CC46CC02F24 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.MonitoredSingleton`1<Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor>::.ctor()
inline void MonitoredSingleton_1__ctor_mF75C340682D2F93C49F1C11AB1F87A4F0ED68DB2 (MonitoredSingleton_1_tC505704F8886BC7891BF314EDD2E92CADBFD50BB* __this, const RuntimeMethod* method)
{
	((  void (*) (MonitoredSingleton_1_tC505704F8886BC7891BF314EDD2E92CADBFD50BB*, const RuntimeMethod*))MonitoredSingleton_1__ctor_m6574E016F081F1DE9A6398CE6A203D27F3A9505B_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
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
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmunitionPack_OnTriggerStay_m25BCDB73FA3A4CCDE4F3DBACD70E0F3B181DF3B9 (AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisPlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6_mB4596BE70A718A8DF769380B36C4075994D49F0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* V_1 = NULL;
	bool V_2 = false;
	{
		// if (_isActive)
		bool L_0 = __this->____isActive_6;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// if (other.TryGetComponent<PlayerWeapon>(out var playerWeapon))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Component_TryGetComponent_TisPlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6_mB4596BE70A718A8DF769380B36C4075994D49F0F(L_2, (&V_1), Component_TryGetComponent_TisPlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6_mB4596BE70A718A8DF769380B36C4075994D49F0F_RuntimeMethod_var);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// playerWeapon.ReplenishAmmunition();
		PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* L_5 = V_1;
		NullCheck(L_5);
		PlayerWeapon_ReplenishAmmunition_mF048E43CFE7F4258D93143BA45874DFF4D3C37C2(L_5, NULL);
		// StartCoroutine(CooldownCoroutine());
		RuntimeObject* L_6;
		L_6 = AmmunitionPack_CooldownCoroutine_m3F41C5368C9704D4DB9F9BF058C10DC81A66752A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_002e:
	{
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.AmmunitionPack::CooldownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AmmunitionPack_CooldownCoroutine_m3F41C5368C9704D4DB9F9BF058C10DC81A66752A (AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* L_0 = (U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A*)il2cpp_codegen_object_new(U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCooldownCoroutineU3Ed__5__ctor_m40E1D571450006057F8B9DEDD6F35B94EB0F4154(L_0, 0, NULL);
		U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmunitionPack_Update_m61DFD0DE3BFBE807045B2E9C61405330EA1628FB (AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* __this, const RuntimeMethod* method) 
{
	{
		// ammunitionMesh.transform.Rotate(new Vector3(0, 30, 0) * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ammunitionMesh_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (30.0f), (0.0f), /*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmunitionPack__ctor_m5B306675B819E39A46142F7F2EF2DFC0AF0749E7 (AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float cooldown = 10f;
		__this->___cooldown_4 = (10.0f);
		// private bool _isActive = true;
		__this->____isActive_6 = (bool)1;
		// private float _cooldown = 0;
		__this->____cooldown_7 = (0.0f);
		MonitoredBehaviour__ctor_m55E1BE6E2D081A6DE67993B1262DD4A4883CE47F(__this, NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__5__ctor_m40E1D571450006057F8B9DEDD6F35B94EB0F4154 (U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__5_System_IDisposable_Dispose_m02534BF7217CE5FA24371C965E94F341E67D8B0B (U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCooldownCoroutineU3Ed__5_MoveNext_m1A3BC37DC860C8FE356D4327A184FD18BE683E8D (U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0083;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isActive = false;
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->____isActive_6 = (bool)0;
		// ammunitionMesh.SetActive(false);
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___ammunitionMesh_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// _cooldown = cooldown;
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_6 = __this->___U3CU3E4__this_2;
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		float L_8 = L_7->___cooldown_4;
		NullCheck(L_6);
		L_6->____cooldown_7 = L_8;
		goto IL_008b;
	}

IL_0056:
	{
		// _cooldown -= Time.deltaTime;
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_9 = __this->___U3CU3E4__this_2;
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		float L_11 = L_10->____cooldown_7;
		float L_12;
		L_12 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_9);
		L_9->____cooldown_7 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0083:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008b:
	{
		// while (_cooldown > 0)
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		float L_14 = L_13->____cooldown_7;
		V_1 = (bool)((((float)L_14) > ((float)(0.0f)))? 1 : 0);
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		// _cooldown = 0;
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		L_16->____cooldown_7 = (0.0f);
		// ammunitionMesh.SetActive(true);
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___ammunitionMesh_5;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// _isActive = true;
		AmmunitionPack_tDE5B6DFEEC5DE9936DDB6ED586C6B19F5FB86655* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		L_19->____isActive_6 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCooldownCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB0D4B440AE82A02D88FE95DF80F0250C34B5569E (U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m33032966A6E9E9C74D8B0B61864CD95D2567CF2F (U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCooldownCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m33032966A6E9E9C74D8B0B61864CD95D2567CF2F_RuntimeMethod_var)));
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCooldownCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_m64B36C5A0885A192F0A3E0A896A6EF4CF63B3114 (U3CCooldownCoroutineU3Ed__5_t56212C3F8705D821C2D2CD2115EF78BFD6BB653A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericsExample_Awake_m8B1D5B9911C9C03EAC2A087D61F2074169E39245 (GenericsExample_t562CE46CC316EC63FC11918C8B39388B737EE5AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _valueObject = new IntValueObject(300);
		IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6* L_0 = (IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6*)il2cpp_codegen_object_new(IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IntValueObject__ctor_mB714252B00BBCFAF17E1297646A5EF33E2DA896D(L_0, ((int32_t)300), NULL);
		__this->____valueObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueObject_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericsExample__ctor_m0DE6868B0A8BB2FB5EA6F937F7E16DBAF8226AB1 (GenericsExample_t562CE46CC316EC63FC11918C8B39388B737EE5AD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntValueObject__ctor_mB714252B00BBCFAF17E1297646A5EF33E2DA896D (IntValueObject_tE07C86D75F43DD213DB4155D8F72EEC9BD1AD0A6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueObject_1__ctor_m1C7A03EA21F276F1F24D3C0F848D7C90DBA4E61D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueObject_1_set_Value_mCF9881F3E6E5EE135709AA4F9A1BC485FDF008DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IntValueObject(int value)
		ValueObject_1__ctor_m1C7A03EA21F276F1F24D3C0F848D7C90DBA4E61D(__this, ValueObject_1__ctor_m1C7A03EA21F276F1F24D3C0F848D7C90DBA4E61D_RuntimeMethod_var);
		// Value = value;
		int32_t L_0 = ___value0;
		ValueObject_1_set_Value_mCF9881F3E6E5EE135709AA4F9A1BC485FDF008DB_inline(__this, L_0, ValueObject_1_set_Value_mCF9881F3E6E5EE135709AA4F9A1BC485FDF008DB_RuntimeMethod_var);
		// }
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
// System.Void Baracuda.Monitoring.Example.Scripts.HitBox::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitBox_Awake_mD9307B9922B144C9F9F0128068B18231BCAE4D0D (HitBox_t482D682C08B9D173302AE71E9ABE5786B222475D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_mF41C214E4F9783AB8DE32DAAB0EA0BD69D73FEFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shootingTarget = GetComponentInParent<ShootingTarget>();
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_0;
		L_0 = Component_GetComponentInParent_TisShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_mF41C214E4F9783AB8DE32DAAB0EA0BD69D73FEFF(__this, Component_GetComponentInParent_TisShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_mF41C214E4F9783AB8DE32DAAB0EA0BD69D73FEFF_RuntimeMethod_var);
		__this->____shootingTarget_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____shootingTarget_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.HitBox::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitBox_TakeDamage_m1F718ACE852963818820F36DBAAEC8A54EAF8CD9 (HitBox_t482D682C08B9D173302AE71E9ABE5786B222475D* __this, float ___damage0, const RuntimeMethod* method) 
{
	{
		// _shootingTarget.TakeDamage(damage * damageMultiplier);
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_0 = __this->____shootingTarget_5;
		float L_1 = ___damage0;
		float L_2 = __this->___damageMultiplier_4;
		NullCheck(L_0);
		ShootingTarget_TakeDamage_m616085065175456496D5CE88895601C1DFC98CEA(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.HitBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitBox__ctor_m487876FACE2377F6E9A8510CEB7314E80026ED9E (HitBox_t482D682C08B9D173302AE71E9ABE5786B222475D* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float damageMultiplier = 1f;
		__this->___damageMultiplier_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacyPlayerInput_get_Vertical_m09236AC43B635A14931AF91740647513B17D73E6 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get; private set; }
		float L_0 = __this->___U3CVerticalU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_Vertical(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Vertical_m571A9DC549949DDCD63E78FD521A99B221E6EF72 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get; private set; }
		float L_0 = ___value0;
		__this->___U3CVerticalU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacyPlayerInput_get_Horizontal_m31CC279A6181E45DC7AA5BB4626032C61386498A (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get; private set; }
		float L_0 = __this->___U3CHorizontalU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_Horizontal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Horizontal_mFC0CC6134E820CBF9F3BBB4ED7234E7B59A7B5FC (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get; private set; }
		float L_0 = ___value0;
		__this->___U3CHorizontalU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_MouseX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacyPlayerInput_get_MouseX_mDBDD3268CBBEE2E2088E41AD367FB6C56CA34F35 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseX { get; private set; }
		float L_0 = __this->___U3CMouseXU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_MouseX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseX_mE71FEC6CB3CF32BCE59A2426251601C803F7BE21 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MouseX { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMouseXU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_MouseY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacyPlayerInput_get_MouseY_m133D08422EB1469BE2C7E16617290E8D2AB10409 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseY { get; private set; }
		float L_0 = __this->___U3CMouseYU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_MouseY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseY_mA7995F4C7F72B58F551F960D3BAE273058A57F91 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MouseY { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMouseYU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_JumpPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LegacyPlayerInput_get_JumpPressed_m26C7EC6EA634D3010EE944969CADE77835C6ACD5 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// public bool JumpPressed { get; private set; }
		bool L_0 = __this->___U3CJumpPressedU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_JumpPressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_JumpPressed_m6621D2D43EC40443DC03F3B65C8CF0C20D28A169 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool JumpPressed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CJumpPressedU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_PrimaryFirePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LegacyPlayerInput_get_PrimaryFirePressed_m1D7A8F236FB7D21410FC8DF3FEE284AEC651EBC7 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// public bool PrimaryFirePressed { get; private set; }
		bool L_0 = __this->___U3CPrimaryFirePressedU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_PrimaryFirePressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_PrimaryFirePressed_m155E8F4AB2DDB25DD6CB193B00F2854C090B8ABE (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool PrimaryFirePressed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CPrimaryFirePressedU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_SecondaryFirePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LegacyPlayerInput_get_SecondaryFirePressed_m77794A378FE0A13FCC8237B1F69C2085187E6372 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// public bool SecondaryFirePressed { get; private set; }
		bool L_0 = __this->___U3CSecondaryFirePressedU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_SecondaryFirePressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_SecondaryFirePressed_mB1F6C5EAB90C0FE24D192205197044A1AF6A8B57 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SecondaryFirePressed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSecondaryFirePressedU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_DashPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LegacyPlayerInput_get_DashPressed_m0CD1EDF805477A84D833B3BCDE7C7BA84D468553 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// public bool DashPressed { get; private set; }
		bool L_0 = __this->___U3CDashPressedU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_DashPressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_DashPressed_m772FC6489C8127CC13CCC07F9D312EAA334354A9 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool DashPressed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDashPressedU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::add_ToggleCursor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_add_ToggleCursor_m6361BE49F0AD7139A55F30A5CAC9AF249A7B78F5 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___ToggleCursor_17;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___ToggleCursor_17);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::remove_ToggleCursor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_remove_ToggleCursor_m9B3D5AC4284CC83BA1ED1CBA5836BB8350CC1285 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___ToggleCursor_17;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___ToggleCursor_17);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_Update_m0998A08450CB5CDC273B57C9DE4320C617072A7A (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		// Vertical = Input.GetAxisRaw("Vertical");
		float L_0;
		L_0 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		LegacyPlayerInput_set_Vertical_m571A9DC549949DDCD63E78FD521A99B221E6EF72_inline(__this, L_0, NULL);
		// Horizontal = Input.GetAxisRaw("Horizontal");
		float L_1;
		L_1 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		LegacyPlayerInput_set_Horizontal_mFC0CC6134E820CBF9F3BBB4ED7234E7B59A7B5FC_inline(__this, L_1, NULL);
		// MouseX = Input.GetAxis("Mouse X");
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		LegacyPlayerInput_set_MouseX_mE71FEC6CB3CF32BCE59A2426251601C803F7BE21_inline(__this, L_2, NULL);
		// MouseY = Input.GetAxis("Mouse Y");
		float L_3;
		L_3 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		LegacyPlayerInput_set_MouseY_mA7995F4C7F72B58F551F960D3BAE273058A57F91_inline(__this, L_3, NULL);
		// JumpPressed = Input.GetKey(jumpKey);
		int32_t L_4 = __this->___jumpKey_4;
		bool L_5;
		L_5 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_4, NULL);
		LegacyPlayerInput_set_JumpPressed_m6621D2D43EC40443DC03F3B65C8CF0C20D28A169_inline(__this, L_5, NULL);
		// PrimaryFirePressed = Input.GetKey(primaryFireKey);
		int32_t L_6 = __this->___primaryFireKey_5;
		bool L_7;
		L_7 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_6, NULL);
		LegacyPlayerInput_set_PrimaryFirePressed_m155E8F4AB2DDB25DD6CB193B00F2854C090B8ABE_inline(__this, L_7, NULL);
		// SecondaryFirePressed = Input.GetKey(secondaryFireKey);
		int32_t L_8 = __this->___secondaryFireKey_6;
		bool L_9;
		L_9 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_8, NULL);
		LegacyPlayerInput_set_SecondaryFirePressed_mB1F6C5EAB90C0FE24D192205197044A1AF6A8B57_inline(__this, L_9, NULL);
		// DashPressed = Input.GetKey(dashKey);
		int32_t L_10 = __this->___dashKey_7;
		bool L_11;
		L_11 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_10, NULL);
		LegacyPlayerInput_set_DashPressed_m772FC6489C8127CC13CCC07F9D312EAA334354A9_inline(__this, L_11, NULL);
		// if (Input.GetKey(toggleCursorKey))
		int32_t L_12 = __this->___toggleCursorKey_8;
		bool L_13;
		L_13 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_12, NULL);
		V_0 = L_13;
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_00b0;
		}
	}
	{
		// ToggleCursor?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = __this->___ToggleCursor_17;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = L_15;
		G_B2_0 = L_16;
		if (L_16)
		{
			G_B3_0 = L_16;
			goto IL_00a9;
		}
	}
	{
		goto IL_00af;
	}

IL_00a9:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
	}

IL_00af:
	{
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput__ctor_m13886394EA656326C01883864442217C827297E3 (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private KeyCode jumpKey = KeyCode.Space;
		__this->___jumpKey_4 = ((int32_t)32);
		// [SerializeField] private KeyCode primaryFireKey = KeyCode.Mouse0;
		__this->___primaryFireKey_5 = ((int32_t)323);
		// [SerializeField] private KeyCode secondaryFireKey = KeyCode.Mouse1;
		__this->___secondaryFireKey_6 = ((int32_t)324);
		// [SerializeField] private KeyCode dashKey = KeyCode.LeftShift;
		__this->___dashKey_7 = ((int32_t)304);
		// [SerializeField] private KeyCode toggleCursorKey = KeyCode.C;
		__this->___toggleCursorKey_8 = ((int32_t)99);
		MonitoredBehaviour__ctor_m55E1BE6E2D081A6DE67993B1262DD4A4883CE47F(__this, NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.MonitorInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorInput_Update_m0714BF54AABBC1656E7F80D37E5283AE040D3FBA (MonitorInput_t42DB2EC14D5F565F1882BC134007992DF7EC1FA5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Input.GetKeyDown(toggleKey))
		int32_t L_0 = __this->___toggleKey_4;
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// MonitoringUI.ToggleDisplay();
		bool L_3;
		L_3 = MonitoringUI_ToggleDisplay_m341FF395FAF712B677D5E2642AF4B3B39A34BF0A(NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.MonitorInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorInput__ctor_mF1E602D2C718E387C69E593DCC5C37FC70748932 (MonitorInput_t42DB2EC14D5F565F1882BC134007992DF7EC1FA5* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private KeyCode toggleKey = KeyCode.F3;
		__this->___toggleKey_4 = ((int32_t)284);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m8D71EB5997CDFC5DB9B308939BDDC0C1A153DD95 (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_mA5E6D21FEF197BEF5D54825A8B8643B8A859D9C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__38_0_mF485C7278B67CFCB01AD4D7153F5BBFCC049ADF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// base.Awake();
		MonitoredBehaviour_Awake_mD81D956EBFE16D3AFC350371F98E570AE80A6ACE(__this, NULL);
		// _transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____transform_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transform_22), (void*)L_0);
		// _input = GetComponent<IPlayerInput>();
		RuntimeObject* L_1;
		L_1 = Component_GetComponent_TisIPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_mA5E6D21FEF197BEF5D54825A8B8643B8A859D9C3(__this, Component_GetComponent_TisIPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_mA5E6D21FEF197BEF5D54825A8B8643B8A859D9C3_RuntimeMethod_var);
		__this->____input_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_24), (void*)L_1);
		// _characterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_2;
		L_2 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->____characterController_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____characterController_21), (void*)L_2);
		// _camera = GetComponentInChildren<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->____camera_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_23), (void*)L_3);
		// _dashEnergy = dashAmount;
		int32_t L_4 = __this->___dashAmount_14;
		__this->____dashEnergy_34 = ((float)L_4);
		// _jumpsLeft = jumps;
		int32_t L_5 = __this->___jumps_10;
		__this->____jumpsLeft_33 = L_5;
		// _input.ToggleCursor += () =>
		// {
		//     if (Cursor.visible)
		//     {
		//         Cursor.visible = false;
		//         Cursor.lockState = CursorLockMode.Locked;
		//     }
		//     else
		//     {
		//         Cursor.visible = true;
		//         Cursor.lockState = CursorLockMode.None;
		//     }
		// };
		RuntimeObject* L_6 = __this->____input_24;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ((U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			goto IL_0076;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var);
		U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B* L_9 = ((U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__38_0_mF485C7278B67CFCB01AD4D7153F5BBFCC049ADF3_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = L_10;
		((U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_1), (void*)L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
	}

IL_0076:
	{
		NullCheck(G_B2_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(8 /* System.Void Baracuda.Monitoring.Example.Scripts.IPlayerInput::add_ToggleCursor(System.Action) */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_Start_m1FA09A5F821D03B4AA3737906EF16CE1DC310493 (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* L_0 = (U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440*)il2cpp_codegen_object_new(U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__39__ctor_m0CB3D1803E475149C72278B96E0EBE29888A80F3(L_0, 0, NULL);
		U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mD89CD30604EABBA8FC0CB8645B166DD1EA465283 (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var deltaTime = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		// var time = Time.time;
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_1 = L_1;
		// PerformCharacterMovement(deltaTime, time);
		float L_2 = V_0;
		float L_3 = V_1;
		PlayerMovement_PerformCharacterMovement_m5E17EFB4210B3D61611610E20F6CFE9480BBD622(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_LateUpdate_m91CFF92A48B32FC608916B2F2058B24FDDCA6E47 (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_transform.position.y <= killHeight)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____transform_22;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		float L_3 = __this->___killHeight_20;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		// _transform.position = _spawnPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____transform_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____spawnPosition_25;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// _transform.rotation = _spawnRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____transform_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->____spawnRotation_26;
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_8, NULL);
		// _camera.transform.localRotation = Quaternion.identity;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->____camera_23;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_11, NULL);
		// _rotationX = 0;
		__this->____rotationX_28 = (0.0f);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::PerformCharacterMovement(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_PerformCharacterMovement_m5E17EFB4210B3D61611610E20F6CFE9480BBD622 (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, float ___deltaTime0, float ___time1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B2_0 = NULL;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B3_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B14_0 = 0;
	float G_B18_0 = 0.0f;
	float G_B18_1 = 0.0f;
	float* G_B18_2 = NULL;
	float G_B17_0 = 0.0f;
	float G_B17_1 = 0.0f;
	float* G_B17_2 = NULL;
	float G_B19_0 = 0.0f;
	float G_B19_1 = 0.0f;
	float G_B19_2 = 0.0f;
	float* G_B19_3 = NULL;
	int32_t G_B29_0 = 0;
	float G_B33_0 = 0.0f;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B33_1 = NULL;
	float G_B32_0 = 0.0f;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B32_1 = NULL;
	float G_B34_0 = 0.0f;
	float G_B34_1 = 0.0f;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B34_2 = NULL;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B36_0 = NULL;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B35_0 = NULL;
	int32_t G_B37_0 = 0;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B37_1 = NULL;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B39_0 = NULL;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B38_0 = NULL;
	float G_B40_0 = 0.0f;
	PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* G_B40_1 = NULL;
	{
		// var groundCheck = GroundCheck();
		int32_t L_0;
		L_0 = PlayerMovement_GroundCheck_m50FE86EA5034C3178D455E548B288CCBB60399BF(__this, NULL);
		V_0 = L_0;
		// var isGrounded = groundCheck != GroundStatus.NoGround;
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// var xInput = _input.Vertical;
		RuntimeObject* L_2 = __this->____input_24;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_Vertical() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
		// var yInput = _input.Horizontal;
		RuntimeObject* L_4 = __this->____input_24;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_Horizontal() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_4);
		V_3 = L_5;
		// var rawInputDir = new Vector2(xInput, yInput);
		float L_6 = V_2;
		float L_7 = V_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), L_6, L_7, NULL);
		// _processedInputDir = Vector2.Lerp(_processedInputDir,
		//     rawInputDir.normalized,
		//     deltaTime * inputSharpness);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->____processedInputDir_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_4), NULL);
		float L_10 = ___deltaTime0;
		float L_11 = __this->___inputSharpness_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		__this->____processedInputDir_27 = L_12;
		// var yMotion = _velocity.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->____velocity_29);
		float L_14 = L_13->___y_3;
		V_5 = L_14;
		// var directionVector = _transform.forward * _processedInputDir.x + _transform.right * _processedInputDir.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->____transform_22;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->____processedInputDir_27);
		float L_18 = L_17->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->____transform_22;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->____processedInputDir_27);
		float L_23 = L_22->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_24, NULL);
		V_6 = L_25;
		// var movementVelocity = directionVector * movementSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_6;
		float L_27 = __this->___movementSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_26, L_27, NULL);
		V_7 = L_28;
		// _velocity = groundCheck != GroundStatus.NoGround
		//     ? movementVelocity
		//     : Vector3.Lerp(_velocity, movementVelocity, deltaTime * airMovementSharpness);
		int32_t L_29 = V_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			G_B2_0 = __this;
			goto IL_00c6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->____velocity_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		float L_32 = ___deltaTime0;
		float L_33 = __this->___airMovementSharpness_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_30, L_31, ((float)il2cpp_codegen_multiply(L_32, L_33)), NULL);
		G_B3_0 = L_34;
		G_B3_1 = G_B1_0;
		goto IL_00c8;
	}

IL_00c6:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_7;
		G_B3_0 = L_35;
		G_B3_1 = G_B2_0;
	}

IL_00c8:
	{
		NullCheck(G_B3_1);
		G_B3_1->____velocity_29 = G_B3_0;
		// if (_input.JumpPressed && _jumpsLeft > 0 && time - _lastJumpTime > .4f)//!_isJumping && time - _lastGroundedTime < jumpBraceTime)
		RuntimeObject* L_36 = __this->____input_24;
		NullCheck(L_36);
		bool L_37;
		L_37 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_JumpPressed() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_36);
		if (!L_37)
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_38 = __this->____jumpsLeft_33;
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_00f4;
		}
	}
	{
		float L_39 = ___time1;
		float L_40 = __this->____lastJumpTime_32;
		G_B7_0 = ((((float)((float)il2cpp_codegen_subtract(L_39, L_40))) > ((float)(0.400000006f)))? 1 : 0);
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B7_0 = 0;
	}

IL_00f5:
	{
		V_9 = (bool)G_B7_0;
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_012c;
		}
	}
	{
		// _jumpsLeft--;
		int32_t L_42 = __this->____jumpsLeft_33;
		__this->____jumpsLeft_33 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		// _isJumping = true;
		__this->____isJumping_30 = (bool)1;
		// _velocity.y = jumpForce;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43 = (&__this->____velocity_29);
		float L_44 = __this->___jumpForce_5;
		L_43->___y_3 = L_44;
		// _lastJumpTime = time;
		float L_45 = ___time1;
		__this->____lastJumpTime_32 = L_45;
		goto IL_013b;
	}

IL_012c:
	{
		// _velocity.y = yMotion;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (&__this->____velocity_29);
		float L_47 = V_5;
		L_46->___y_3 = L_47;
	}

IL_013b:
	{
		// if (groundCheck == GroundStatus.NoGround)
		int32_t L_48 = V_0;
		V_10 = (bool)((((int32_t)L_48) == ((int32_t)2))? 1 : 0);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_01ae;
		}
	}
	{
		// if (_lastGroundCheck != GroundStatus.NoGround && _velocity.y <= 0f)
		int32_t L_50 = __this->____lastGroundCheck_38;
		if ((((int32_t)L_50) == ((int32_t)2)))
		{
			goto IL_0166;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = (&__this->____velocity_29);
		float L_52 = L_51->___y_3;
		G_B14_0 = ((((int32_t)((!(((float)L_52) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0167;
	}

IL_0166:
	{
		G_B14_0 = 0;
	}

IL_0167:
	{
		V_11 = (bool)G_B14_0;
		bool L_53 = V_11;
		if (!L_53)
		{
			goto IL_017f;
		}
	}
	{
		// _velocity.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = (&__this->____velocity_29);
		L_54->___y_3 = (0.0f);
	}

IL_017f:
	{
		// _velocity.y -= gravityForce * (_isFalling ? 1.5f : 1f) * deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_55 = (&__this->____velocity_29);
		float* L_56 = (&L_55->___y_3);
		float* L_57 = L_56;
		float L_58 = *((float*)L_57);
		float L_59 = __this->___gravityForce_6;
		bool L_60 = __this->____isFalling_31;
		G_B17_0 = L_59;
		G_B17_1 = L_58;
		G_B17_2 = L_57;
		if (L_60)
		{
			G_B18_0 = L_59;
			G_B18_1 = L_58;
			G_B18_2 = L_57;
			goto IL_01a1;
		}
	}
	{
		G_B19_0 = (1.0f);
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_01a6;
	}

IL_01a1:
	{
		G_B19_0 = (1.5f);
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_01a6:
	{
		float L_61 = ___deltaTime0;
		*((float*)G_B19_3) = (float)((float)il2cpp_codegen_subtract(G_B19_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(G_B19_1, G_B19_0)), L_61))));
		goto IL_01d5;
	}

IL_01ae:
	{
		// else if (time - _lastJumpTime > .1f)
		float L_62 = ___time1;
		float L_63 = __this->____lastJumpTime_32;
		V_12 = (bool)((((float)((float)il2cpp_codegen_subtract(L_62, L_63))) > ((float)(0.100000001f)))? 1 : 0);
		bool L_64 = V_12;
		if (!L_64)
		{
			goto IL_01d5;
		}
	}
	{
		// _velocity.y = -15f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = (&__this->____velocity_29);
		L_65->___y_3 = (-15.0f);
	}

IL_01d5:
	{
		// _characterController.Move(_velocity * deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_66 = __this->____characterController_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = __this->____velocity_29;
		float L_68 = ___deltaTime0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_67, L_68, NULL);
		NullCheck(L_66);
		int32_t L_70;
		L_70 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_66, L_69, NULL);
		// if (CanDash(time, groundCheck, rawInputDir))
		float L_71 = ___time1;
		int32_t L_72 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = V_4;
		bool L_74;
		L_74 = PlayerMovement_CanDash_m097127AF1D2CB381EE233C3AC4A937233F49E48A(__this, L_71, L_72, L_73, NULL);
		V_13 = L_74;
		bool L_75 = V_13;
		if (!L_75)
		{
			goto IL_0207;
		}
	}
	{
		// BeginDash(time);
		float L_76 = ___time1;
		PlayerMovement_BeginDash_mED78D99687C8F3C08EA1F186556CA57ECDA6913B(__this, L_76, NULL);
	}

IL_0207:
	{
		// if (_isDashing)
		bool L_77 = __this->____isDashing_35;
		V_14 = L_77;
		bool L_78 = V_14;
		if (!L_78)
		{
			goto IL_0220;
		}
	}
	{
		// PerformDash(deltaTime, time, directionVector);
		float L_79 = ___deltaTime0;
		float L_80 = ___time1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_6;
		PlayerMovement_PerformDash_m4F77D59CAEABE4030F652FCCC01366D9E09C4BD2(__this, L_79, L_80, L_81, NULL);
	}

IL_0220:
	{
		// _rotationX += -_input.MouseY * _camera.fieldOfView * mouseSensitivity  * .001f;
		float L_82 = __this->____rotationX_28;
		RuntimeObject* L_83 = __this->____input_24;
		NullCheck(L_83);
		float L_84;
		L_84 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_MouseY() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_83);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_85 = __this->____camera_23;
		NullCheck(L_85);
		float L_86;
		L_86 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_85, NULL);
		float L_87 = __this->___mouseSensitivity_7;
		__this->____rotationX_28 = ((float)il2cpp_codegen_add(L_82, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_84)), L_86)), L_87)), (0.00100000005f)))));
		// _rotationX = Mathf.Clamp(_rotationX, -90f, 90f);
		float L_88 = __this->____rotationX_28;
		float L_89;
		L_89 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_88, (-90.0f), (90.0f), NULL);
		__this->____rotationX_28 = L_89;
		// _camera.transform.localRotation = Quaternion.Euler(_rotationX, 0, 0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_90 = __this->____camera_23;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_90, NULL);
		float L_92 = __this->____rotationX_28;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_92, (0.0f), (0.0f), NULL);
		NullCheck(L_91);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_91, L_93, NULL);
		// var yRotation = _input.MouseX * _camera.fieldOfView * mouseSensitivity * .001f;
		RuntimeObject* L_94 = __this->____input_24;
		NullCheck(L_94);
		float L_95;
		L_95 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_MouseX() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_94);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_96 = __this->____camera_23;
		NullCheck(L_96);
		float L_97;
		L_97 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_96, NULL);
		float L_98 = __this->___mouseSensitivity_7;
		V_8 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_95, L_97)), L_98)), (0.00100000005f)));
		// transform.rotation *= Quaternion.Euler(0, yRotation, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100 = L_99;
		NullCheck(L_100);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_101;
		L_101 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_100, NULL);
		float L_102 = V_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_103;
		L_103 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_102, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_104;
		L_104 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_101, L_103, NULL);
		NullCheck(L_100);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_100, L_104, NULL);
		// if (_lastGroundCheck == GroundStatus.NoGround && groundCheck != GroundStatus.NoGround)
		int32_t L_105 = __this->____lastGroundCheck_38;
		if ((!(((uint32_t)L_105) == ((uint32_t)2))))
		{
			goto IL_02f3;
		}
	}
	{
		int32_t L_106 = V_0;
		G_B29_0 = ((((int32_t)((((int32_t)L_106) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_02f4;
	}

IL_02f3:
	{
		G_B29_0 = 0;
	}

IL_02f4:
	{
		V_15 = (bool)G_B29_0;
		bool L_107 = V_15;
		if (!L_107)
		{
			goto IL_030f;
		}
	}
	{
		// _isJumping = false;
		__this->____isJumping_30 = (bool)0;
		// _jumpsLeft = jumps;
		int32_t L_108 = __this->___jumps_10;
		__this->____jumpsLeft_33 = L_108;
	}

IL_030f:
	{
		// _dashEnergy = Mathf.Clamp(
		//     _dashEnergy +
		//     (isGrounded? dashRechargeGrounded : dashRechargeAirborne)
		//     * deltaTime, 0, dashAmount);
		float L_109 = __this->____dashEnergy_34;
		bool L_110 = V_1;
		G_B32_0 = L_109;
		G_B32_1 = __this;
		if (L_110)
		{
			G_B33_0 = L_109;
			G_B33_1 = __this;
			goto IL_0321;
		}
	}
	{
		float L_111 = __this->___dashRechargeAirborne_17;
		G_B34_0 = L_111;
		G_B34_1 = G_B32_0;
		G_B34_2 = G_B32_1;
		goto IL_0327;
	}

IL_0321:
	{
		float L_112 = __this->___dashRechargeGrounded_16;
		G_B34_0 = L_112;
		G_B34_1 = G_B33_0;
		G_B34_2 = G_B33_1;
	}

IL_0327:
	{
		float L_113 = ___deltaTime0;
		int32_t L_114 = __this->___dashAmount_14;
		float L_115;
		L_115 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_add(G_B34_1, ((float)il2cpp_codegen_multiply(G_B34_0, L_113)))), (0.0f), ((float)L_114), NULL);
		NullCheck(G_B34_2);
		G_B34_2->____dashEnergy_34 = L_115;
		// _isFalling = _isJumping && _velocity.y < 0f;
		bool L_116 = __this->____isJumping_30;
		G_B35_0 = __this;
		if (!L_116)
		{
			G_B36_0 = __this;
			goto IL_035d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_117 = (&__this->____velocity_29);
		float L_118 = L_117->___y_3;
		G_B37_0 = ((((float)L_118) < ((float)(0.0f)))? 1 : 0);
		G_B37_1 = G_B35_0;
		goto IL_035e;
	}

IL_035d:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
	}

IL_035e:
	{
		NullCheck(G_B37_1);
		G_B37_1->____isFalling_31 = (bool)G_B37_0;
		// _lastGroundCheck = groundCheck;
		int32_t L_119 = V_0;
		__this->____lastGroundCheck_38 = L_119;
		// _lastGroundedTime = groundCheck != GroundStatus.NoGround ? time : _lastGroundedTime;
		int32_t L_120 = V_0;
		G_B38_0 = __this;
		if ((!(((uint32_t)L_120) == ((uint32_t)2))))
		{
			G_B39_0 = __this;
			goto IL_0377;
		}
	}
	{
		float L_121 = __this->____lastGroundedTime_40;
		G_B40_0 = L_121;
		G_B40_1 = G_B38_0;
		goto IL_0378;
	}

IL_0377:
	{
		float L_122 = ___time1;
		G_B40_0 = L_122;
		G_B40_1 = G_B39_0;
	}

IL_0378:
	{
		NullCheck(G_B40_1);
		G_B40_1->____lastGroundedTime_40 = G_B40_0;
		// }
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::CanDash(System.Single,Baracuda.Monitoring.Example.Scripts.GroundStatus,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_CanDash_m097127AF1D2CB381EE233C3AC4A937233F49E48A (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, float ___time0, int32_t ___groundCheck1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rawInputDir2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		// return _input.DashPressed
		//        && !_isDashing
		//        && time - _lastDashTime > minTimeBetweenDash
		//        && _dashEnergy >= 1
		//        && groundCheck == GroundStatus.NoGround
		//        && rawInputDir.normalized.magnitude > .5f;
		RuntimeObject* L_0 = __this->____input_24;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_DashPressed() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		bool L_2 = __this->____isDashing_35;
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		float L_3 = ___time0;
		float L_4 = __this->____lastDashTime_36;
		float L_5 = __this->___minTimeBetweenDash_15;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_3, L_4))) > ((float)L_5))))
		{
			goto IL_004f;
		}
	}
	{
		float L_6 = __this->____dashEnergy_34;
		if ((!(((float)L_6) >= ((float)(1.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = ___groundCheck1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&___rawInputDir2), NULL);
		V_0 = L_8;
		float L_9;
		L_9 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		G_B7_0 = ((((float)L_9) > ((float)(0.5f)))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_1 = (bool)G_B7_0;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::BeginDash(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_BeginDash_mED78D99687C8F3C08EA1F186556CA57ECDA6913B (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, float ___time0, const RuntimeMethod* method) 
{
	{
		// _dashEnergy -= 1;
		float L_0 = __this->____dashEnergy_34;
		__this->____dashEnergy_34 = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		// _lastDashTime = time;
		float L_1 = ___time0;
		__this->____lastDashTime_36 = L_1;
		// _isDashing = true;
		__this->____isDashing_35 = (bool)1;
		// _dashStartTime = time;
		float L_2 = ___time0;
		__this->____dashStartTime_37 = L_2;
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::PerformDash(System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_PerformDash_m4F77D59CAEABE4030F652FCCC01366D9E09C4BD2 (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, float ___deltaTime0, float ___time1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___directionVector2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// var currentDashTimer = time - _dashStartTime;
		float L_0 = ___time1;
		float L_1 = __this->____dashStartTime_37;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// var progression = (time - _dashStartTime) / dashDuration;
		float L_2 = ___time1;
		float L_3 = __this->____dashStartTime_37;
		float L_4 = __this->___dashDuration_12;
		V_1 = ((float)(((float)il2cpp_codegen_subtract(L_2, L_3))/L_4));
		// var dashVector = directionVector *
		//                  dashForce *
		//                  dashCurve.Evaluate(progression) *
		//                  deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___directionVector2;
		float L_6 = __this->___dashForce_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___dashCurve_13;
		float L_9 = V_1;
		NullCheck(L_8);
		float L_10;
		L_10 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_10, NULL);
		float L_12 = ___deltaTime0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_11, L_12, NULL);
		V_2 = L_13;
		// _characterController.Move(dashVector);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_14 = __this->____characterController_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_14, L_15, NULL);
		// _velocity.y = Mathf.Clamp(_velocity.y, 2f, float.PositiveInfinity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->____velocity_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->____velocity_29);
		float L_19 = L_18->___y_3;
		float L_20;
		L_20 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_19, (2.0f), (std::numeric_limits<float>::infinity()), NULL);
		L_17->___y_3 = L_20;
		// if (currentDashTimer > dashDuration)
		float L_21 = V_0;
		float L_22 = __this->___dashDuration_12;
		V_3 = (bool)((((float)L_21) > ((float)L_22))? 1 : 0);
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0086;
		}
	}
	{
		// _isDashing = false;
		__this->____isDashing_35 = (bool)0;
	}

IL_0086:
	{
		// }
		return;
	}
}
// Baracuda.Monitoring.Example.Scripts.GroundStatus Baracuda.Monitoring.Example.Scripts.PlayerMovement::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerMovement_GroundCheck_m50FE86EA5034C3178D455E548B288CCBB60399BF (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		// var position = _transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____transform_22;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// var upDirection = _transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____transform_22;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_2, NULL);
		V_1 = L_3;
		// hitCount = Physics.OverlapSphereNonAlloc(position, groundCheckRadius, _raycastHits, groundMask,
		//     QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = __this->___groundCheckRadius_19;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = __this->____raycastHits_41;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7 = __this->___groundMask_18;
		int32_t L_8;
		L_8 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_7, NULL);
		int32_t L_9;
		L_9 = Physics_OverlapSphereNonAlloc_m787ECDB9635D1FD075C69D11BAB111298BA78FAD(L_4, L_5, L_6, L_8, 1, NULL);
		((PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_il2cpp_TypeInfo_var))->___hitCount_39 = L_9;
		// for (var i = 0; i < hitCount; i++)
		V_2 = 0;
		goto IL_0072;
	}

IL_0040:
	{
		// if (Vector3.Dot(_raycastHits[i].transform.up, upDirection) >= .95f)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_10 = __this->____raycastHits_41;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17;
		L_17 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_15, L_16, NULL);
		V_3 = (bool)((((int32_t)((!(((float)L_17) >= ((float)(0.949999988f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		// return GroundStatus.StableGround;
		V_4 = 0;
		goto IL_0090;
	}

IL_006d:
	{
		// for (var i = 0; i < hitCount; i++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0072:
	{
		// for (var i = 0; i < hitCount; i++)
		int32_t L_20 = V_2;
		int32_t L_21 = ((PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_il2cpp_TypeInfo_var))->___hitCount_39;
		V_5 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_0040;
		}
	}
	{
		// return hitCount > 0 ? GroundStatus.UnstableGround : GroundStatus.NoGround;
		int32_t L_23 = ((PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D_il2cpp_TypeInfo_var))->___hitCount_39;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		G_B8_0 = 2;
		goto IL_008c;
	}

IL_008b:
	{
		G_B8_0 = 1;
	}

IL_008c:
	{
		V_4 = G_B8_0;
		goto IL_0090;
	}

IL_0090:
	{
		// }
		int32_t L_24 = V_4;
		return L_24;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_m9931835C1C081660DC58DBD63B1EDF4BE313E31D (PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float movementSpeed = 16.5f;
		__this->___movementSpeed_4 = (16.5f);
		// [SerializeField] private float jumpForce = 8f;
		__this->___jumpForce_5 = (8.0f);
		// [SerializeField] private float gravityForce = 20f;
		__this->___gravityForce_6 = (20.0f);
		// [SerializeField] private float mouseSensitivity = 2f;
		__this->___mouseSensitivity_7 = (2.0f);
		// [SerializeField] private float airMovementSharpness = 1f;
		__this->___airMovementSharpness_8 = (1.0f);
		// [SerializeField] private float inputSharpness = 10f;
		__this->___inputSharpness_9 = (10.0f);
		// [SerializeField] private int jumps = 3;
		__this->___jumps_10 = 3;
		// [SerializeField] [Range(0, 100f)] private float dashForce = 22f;
		__this->___dashForce_11 = (22.0f);
		// [SerializeField] [Range(0, 1f)] private float dashDuration = 0.03f;
		__this->___dashDuration_12 = (0.0299999993f);
		// [SerializeField] private AnimationCurve dashCurve = default;
		__this->___dashCurve_13 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dashCurve_13), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		// [SerializeField] [Range(0, 10)] private int dashAmount = 3;
		__this->___dashAmount_14 = 3;
		// [SerializeField] [Range(0, .5f)] private float minTimeBetweenDash = .2f;
		__this->___minTimeBetweenDash_15 = (0.200000003f);
		// [SerializeField] [Range(0, 3f)] private float dashRechargeGrounded = 2f;
		__this->___dashRechargeGrounded_16 = (2.0f);
		// [SerializeField] [Range(0, 3f)] private float dashRechargeAirborne = .5f;
		__this->___dashRechargeAirborne_17 = (0.5f);
		// [SerializeField] private float groundCheckRadius = .4f;
		__this->___groundCheckRadius_19 = (0.400000006f);
		// [SerializeField] private float killHeight = -50f;
		__this->___killHeight_20 = (-50.0f);
		// private float _rotationX = 0;
		__this->____rotationX_28 = (0.0f);
		// private Vector3 _velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____velocity_29 = L_0;
		// private bool _isDashing = false;
		__this->____isDashing_35 = (bool)0;
		// private GroundStatus _lastGroundCheck = GroundStatus.StableGround;
		__this->____lastGroundCheck_38 = 0;
		// private readonly Collider[] _raycastHits = new Collider[4];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1 = (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)SZArrayNew(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____raycastHits_41 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____raycastHits_41), (void*)L_1);
		MonitoredBehaviour__ctor_m55E1BE6E2D081A6DE67993B1262DD4A4883CE47F(__this, NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA42CAC32A97ACC8ED6CD61E5347872E8DACF54EC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B* L_0 = (U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B*)il2cpp_codegen_object_new(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m39797B266D7C3988B450FFCA1F5C8D73EDEBDA26(L_0, NULL);
		((U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m39797B266D7C3988B450FFCA1F5C8D73EDEBDA26 (U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<>c::<Awake>b__38_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__38_0_mF485C7278B67CFCB01AD4D7153F5BBFCC049ADF3 (U3CU3Ec_tC8C38D33D9A3705C4426DACF59530EB0490F7D5B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Cursor.visible)
		bool L_0;
		L_0 = Cursor_get_visible_mC9926F373AB4B10F5376D37A6C278DBD85EF4871(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		goto IL_002c;
	}

IL_001c:
	{
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
	}

IL_002c:
	{
		// };
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
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__39__ctor_m0CB3D1803E475149C72278B96E0EBE29888A80F3 (U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__39_System_IDisposable_Dispose_m9B96D4110ABE0577D9DD05C70DA3F619A9B3554D (U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__39_MoveNext_m4AA8B030674BE35E3474EE7C3357893C1B3A5A42 (U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0030;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// var self = transform;
		PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		__this->___U3CselfU3E5__1_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CselfU3E5__1_3), (void*)L_4);
		// _spawnPosition = self.position;
		PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* L_5 = __this->___U3CU3E4__this_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___U3CselfU3E5__1_3;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_5);
		L_5->____spawnPosition_25 = L_7;
		// _spawnRotation = self.rotation;
		PlayerMovement_t82290740FB1C78C642A034F26291B323E4185E3D* L_8 = __this->___U3CU3E4__this_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___U3CselfU3E5__1_3;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		NullCheck(L_8);
		L_8->____spawnRotation_26 = L_10;
		// }
		return (bool)0;
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m405A97FC93784819AB490A9745AE13DC4278E72B (U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__39_System_Collections_IEnumerator_Reset_m62F1A4706B8D579077A8950830A0D72F6C2C4A0A (U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__39_System_Collections_IEnumerator_Reset_m62F1A4706B8D579077A8950830A0D72F6C2C4A0A_RuntimeMethod_var)));
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__39_System_Collections_IEnumerator_get_Current_mD666497D8C54352F36C2659B6E00CFC78E3671A4 (U3CStartU3Ed__39_t681E75E193DEC879866E78BDCCB39FADEC833440* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.String Baracuda.Monitoring.Example.Scripts.PlayerWeapon::CurrentAmmunitionProcessor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerWeapon_CurrentAmmunitionProcessor_mFEE540860AB7940B864B25A15ADD0A85F652917C (PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* __this, int32_t ___current0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32B3E6D6F1633A27671CD1FFEC132F2C3B158F79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var sb = StringBuilderPool.Get();
		il2cpp_codegen_runtime_class_init_inline(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0;
		L_0 = StringBuilderPool_Get_mE2FD5487D8243565C5AB4A9CA5975E2B9614A40D(NULL);
		V_0 = L_0;
		// sb.Append("Ammunition: ");
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral32B3E6D6F1633A27671CD1FFEC132F2C3B158F79, NULL);
		// sb.Append(current);
		StringBuilder_t* L_3 = V_0;
		int32_t L_4 = ___current0;
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_3, L_4, NULL);
		// sb.Append(" / ");
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, NULL);
		// sb.Append(ammunition);
		StringBuilder_t* L_8 = V_0;
		int32_t L_9 = __this->___ammunition_10;
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_8, L_9, NULL);
		// return StringBuilderPool.Release(sb);
		StringBuilder_t* L_11 = V_0;
		String_t* L_12;
		L_12 = StringBuilderPool_Release_m4139C0B52C9E249F699F5C45B2AB0A56E263DC97(L_11, NULL);
		V_1 = L_12;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		String_t* L_13 = V_1;
		return L_13;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_Awake_mBCC1EB04B69B689EF1A59E77DCA2D9BD7727CFFF (PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_mA5E6D21FEF197BEF5D54825A8B8643B8A859D9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		MonitoredBehaviour_Awake_mD81D956EBFE16D3AFC350371F98E570AE80A6ACE(__this, NULL);
		// _input = GetComponent<IPlayerInput>();
		RuntimeObject* L_0;
		L_0 = Component_GetComponent_TisIPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_mA5E6D21FEF197BEF5D54825A8B8643B8A859D9C3(__this, Component_GetComponent_TisIPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_mA5E6D21FEF197BEF5D54825A8B8643B8A859D9C3_RuntimeMethod_var);
		__this->____input_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_20), (void*)L_0);
		// _camera = GetComponentInChildren<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->____camera_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_21), (void*)L_1);
		// _currentAmmunition = ammunition;
		int32_t L_2 = __this->___ammunition_10;
		__this->____currentAmmunition_17 = L_2;
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_Update_m3725CAC67D6D6159A93A671234B7E19D21EECDAC (PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t V_3 = 0;
	Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* G_B2_0 = NULL;
	PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* G_B3_1 = NULL;
	int32_t G_B9_0 = 0;
	{
		// var deltaTime = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		// PreformRaycast();
		PlayerWeapon_PreformRaycast_mF504E2C06CBA2659822ABA724636F316A0E8E397(__this, NULL);
		// _targetFOV = _input.SecondaryFirePressed ? zoomFOV : defaultFOV;
		RuntimeObject* L_1 = __this->____input_20;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_SecondaryFirePressed() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_1);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		float L_3 = __this->___defaultFOV_14;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_0024:
	{
		float L_4 = __this->___zoomFOV_15;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->____targetFOV_19 = G_B3_0;
		// _camera.fieldOfView = Mathf.Lerp(_camera.fieldOfView, _targetFOV, fovSharpness * deltaTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____camera_21;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->____camera_21;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_6, NULL);
		float L_8 = __this->____targetFOV_19;
		float L_9 = __this->___fovSharpness_16;
		float L_10 = V_0;
		float L_11;
		L_11 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		NullCheck(L_5);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_5, L_11, NULL);
		// var time = Time.time;
		float L_12;
		L_12 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_1 = L_12;
		// if (_input.PrimaryFirePressed && (fullAutomatic || _canFireSemiAutomatic) && _currentAmmunition > 0 && time - _lastFireTime > 1 / shotsPerSecond)
		RuntimeObject* L_13 = __this->____input_20;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_PrimaryFirePressed() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_009d;
		}
	}
	{
		bool L_15 = __this->___fullAutomatic_5;
		if (L_15)
		{
			goto IL_007c;
		}
	}
	{
		bool L_16 = __this->____canFireSemiAutomatic_22;
		if (!L_16)
		{
			goto IL_009d;
		}
	}

IL_007c:
	{
		int32_t L_17 = __this->____currentAmmunition_17;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		float L_18 = V_1;
		float L_19 = __this->____lastFireTime_18;
		float L_20 = __this->___shotsPerSecond_6;
		G_B9_0 = ((((float)((float)il2cpp_codegen_subtract(L_18, L_19))) > ((float)((float)((1.0f)/L_20))))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B9_0 = 0;
	}

IL_009e:
	{
		V_2 = (bool)G_B9_0;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_0141;
		}
	}
	{
		// _canFireSemiAutomatic = false;
		__this->____canFireSemiAutomatic_22 = (bool)0;
		// _lastFireTime = time;
		float L_22 = V_1;
		__this->____lastFireTime_18 = L_22;
		// for (var i = 0; i < bulletsPerShot; i++)
		V_3 = 0;
		goto IL_012e;
	}

IL_00b8:
	{
		// _currentAmmunition--;
		int32_t L_23 = __this->____currentAmmunition_17;
		__this->____currentAmmunition_17 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		// var projectile = projectilePool.GetProjectileFromPool();
		ProjectilePool_tE1FA2CC85E82D6F7FA477801EA57E09AD91648FD* L_24 = __this->___projectilePool_13;
		NullCheck(L_24);
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_25;
		L_25 = ProjectilePool_GetProjectileFromPool_mD80DD1A572354525D83C1BCD56AC8D97F6EE927F(L_24, NULL);
		V_4 = L_25;
		// projectile.Setup(
		//     position: projectileSpawnPosition.position,
		//     rotation: projectileSpawnPosition.rotation,
		//     damage: damage,
		//     force: projectileSpawnPosition.forward * bulletForce,
		//     spread: bulletSpread);
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_26 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___projectileSpawnPosition_12;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___projectileSpawnPosition_12;
		NullCheck(L_29);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_29, NULL);
		float L_31 = __this->___damage_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___projectileSpawnPosition_12;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_32, NULL);
		float L_34 = __this->___bulletForce_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_33, L_34, NULL);
		float L_36 = __this->___bulletSpread_8;
		NullCheck(L_26);
		Projectile_Setup_m6C1FCFFEADF1E42C6B1A8F4D0A9D36B5F81D2123(L_26, L_28, L_30, L_31, L_35, L_36, NULL);
		// if (_currentAmmunition <= 0)
		int32_t L_37 = __this->____currentAmmunition_17;
		V_5 = (bool)((((int32_t)((((int32_t)L_37) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_0129;
		}
	}
	{
		// break;
		goto IL_0140;
	}

IL_0129:
	{
		// for (var i = 0; i < bulletsPerShot; i++)
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_012e:
	{
		// for (var i = 0; i < bulletsPerShot; i++)
		int32_t L_40 = V_3;
		int32_t L_41 = __this->___bulletsPerShot_7;
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_41))? 1 : 0);
		bool L_42 = V_6;
		if (L_42)
		{
			goto IL_00b8;
		}
	}

IL_0140:
	{
	}

IL_0141:
	{
		// if (!_input.PrimaryFirePressed)
		RuntimeObject* L_43 = __this->____input_20;
		NullCheck(L_43);
		bool L_44;
		L_44 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_PrimaryFirePressed() */, IPlayerInput_t1166C026710AA90710FA92C51F7B5B3768B8798A_il2cpp_TypeInfo_var, L_43);
		V_7 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_7;
		if (!L_45)
		{
			goto IL_015e;
		}
	}
	{
		// _canFireSemiAutomatic = true;
		__this->____canFireSemiAutomatic_22 = (bool)1;
	}

IL_015e:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::PreformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_PreformRaycast_mF504E2C06CBA2659822ABA724636F316A0E8E397 (PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* __this, const RuntimeMethod* method) 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// var ray = _camera.ViewportPointToRay(new Vector3(0.5F, 0.5F, 0));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4(L_0, L_1, NULL);
		V_0 = L_2;
		// if (Physics.Raycast(ray, out var hit, layerMask))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___layerMask_11;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_4, NULL);
		bool L_6;
		L_6 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_3, (&V_1), ((float)L_5), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// projectileSpawnPosition.LookAt(hit.point);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___projectileSpawnPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		NullCheck(L_8);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_8, L_9, NULL);
		goto IL_0063;
	}

IL_0050:
	{
		// projectileSpawnPosition.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___projectileSpawnPosition_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_11, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::ReplenishAmmunition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_ReplenishAmmunition_mF048E43CFE7F4258D93143BA45874DFF4D3C37C2 (PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* __this, const RuntimeMethod* method) 
{
	{
		// _currentAmmunition = ammunition;
		int32_t L_0 = __this->___ammunition_10;
		__this->____currentAmmunition_17 = L_0;
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon__ctor_m991A46263E8A8B589DD3DACA1E67AC98FE879A6D (PlayerWeapon_t029908F83097ABDEB9DB7DFDFF7BBCE83C79EFA6* __this, const RuntimeMethod* method) 
{
	{
		// [Header("Primary")] [SerializeField] private float damage = 100f;
		__this->___damage_4 = (100.0f);
		// [SerializeField] private bool fullAutomatic = true;
		__this->___fullAutomatic_5 = (bool)1;
		// [SerializeField] private float shotsPerSecond = 7.5f;
		__this->___shotsPerSecond_6 = (7.5f);
		// [SerializeField] private int bulletsPerShot = 3;
		__this->___bulletsPerShot_7 = 3;
		// [SerializeField] private float bulletSpread = 50f;
		__this->___bulletSpread_8 = (50.0f);
		// [SerializeField] private int ammunition = 15;
		__this->___ammunition_10 = ((int32_t)15);
		// [SerializeField] private float defaultFOV = 90f;
		__this->___defaultFOV_14 = (90.0f);
		// [SerializeField] private float zoomFOV = 40f;
		__this->___zoomFOV_15 = (40.0f);
		// [SerializeField] private float fovSharpness = 10f;
		__this->___fovSharpness_16 = (10.0f);
		// private bool _canFireSemiAutomatic = true;
		__this->____canFireSemiAutomatic_22 = (bool)1;
		MonitoredBehaviour__ctor_m55E1BE6E2D081A6DE67993B1262DD4A4883CE47F(__this, NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Awake_mF79D8B3274A4F4734CCD54D9D9B173EC2BE17FE8 (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rigidbody_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_4), (void*)L_0);
		// _transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____transform_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transform_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::Setup(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Setup_m6C1FCFFEADF1E42C6B1A8F4D0A9D36B5F81D2123 (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___damage2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force3, float ___spread4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____transform_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation1;
		NullCheck(L_1);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_1, L_2, NULL);
		// _transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____transform_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// _damage = damage;
		float L_5 = ___damage2;
		__this->____damage_5 = L_5;
		// _rigidbody.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->____rigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_7, NULL);
		// var randomX = Random.Range(-spread, spread);
		float L_8 = ___spread4;
		float L_9 = ___spread4;
		float L_10;
		L_10 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_8)), L_9, NULL);
		V_0 = L_10;
		// var randomY = Random.Range(-spread, spread);
		float L_11 = ___spread4;
		float L_12 = ___spread4;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_11)), L_12, NULL);
		V_1 = L_13;
		// var randomZ = Random.Range(-spread, spread);
		float L_14 = ___spread4;
		float L_15 = ___spread4;
		float L_16;
		L_16 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_14)), L_15, NULL);
		V_2 = L_16;
		// var randomVector = new Vector3(randomX, randomY, randomZ);
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_17, L_18, L_19, NULL);
		// _rigidbody.AddForce(force + randomVector);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->____rigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___force3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_21, L_22, NULL);
		NullCheck(L_20);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_20, L_23, NULL);
		// StartCoroutine(SecondForce(force));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___force3;
		RuntimeObject* L_25;
		L_25 = Projectile_SecondForce_m71D61BCAB0DD2EBBBB68D7FC14AE6EFA528B5565(__this, L_24, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_25, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.Projectile::SecondForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Projectile_SecondForce_m71D61BCAB0DD2EBBBB68D7FC14AE6EFA528B5565 (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* L_0 = (U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527*)il2cpp_codegen_object_new(U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSecondForceU3Ed__6__ctor_mF2024D4DC720935CE206A9F3FC063A7D22ED5C74(L_0, 0, NULL);
		U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___force0;
		NullCheck(L_2);
		L_2->___force_2 = L_3;
		return L_2;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnCollisionEnter_m8EE027A60499F937A50175E422E7CC2EAD5385B1 (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2_mB75EF90AEC8D074AC1F1BC896DFC2FFAEBE2B279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var component = collision.gameObject.GetComponent<IDamageable>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameObject_GetComponent_TisIDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2_mB75EF90AEC8D074AC1F1BC896DFC2FFAEBE2B279(L_1, GameObject_GetComponent_TisIDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2_mB75EF90AEC8D074AC1F1BC896DFC2FFAEBE2B279_RuntimeMethod_var);
		V_0 = L_2;
		// component?.TakeDamage(_damage);
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_001f;
	}

IL_0012:
	{
		RuntimeObject* L_4 = V_0;
		float L_5 = __this->____damage_5;
		NullCheck(L_4);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void Baracuda.Monitoring.Example.Scripts.IDamageable::TakeDamage(System.Single) */, IDamageable_tA498DEDB4A1FA747A5C48D722B79E5555DA36ED2_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_001f:
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_mDDCCABD532FE59E8BC9DAAA5233416D94DAB14E5 (Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__cctor_m6C8DAC5A549102B3665C2494C241688132112604 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly WaitForSeconds waitForSeconds = new WaitForSeconds(.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_0 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_0, (0.0500000007f), NULL);
		((Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_StaticFields*)il2cpp_codegen_static_fields_for(Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_il2cpp_TypeInfo_var))->___waitForSeconds_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_StaticFields*)il2cpp_codegen_static_fields_for(Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_il2cpp_TypeInfo_var))->___waitForSeconds_7), (void*)L_0);
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
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSecondForceU3Ed__6__ctor_mF2024D4DC720935CE206A9F3FC063A7D22ED5C74 (U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSecondForceU3Ed__6_System_IDisposable_Dispose_m07D2176DA2E21D5AE08B2B6E844BCC395F6968CE (U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSecondForceU3Ed__6_MoveNext_m63494F0A1CCD05B4B1D67E31567D6526E0235413 (U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0034;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return waitForSeconds;
		il2cpp_codegen_runtime_class_init_inline(Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_il2cpp_TypeInfo_var);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = ((Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_StaticFields*)il2cpp_codegen_static_fields_for(Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_il2cpp_TypeInfo_var))->___waitForSeconds_7;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _rigidbody.AddForce(force);
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_4 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = L_4->____rigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___force_2;
		NullCheck(L_5);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_5, L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSecondForceU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5E772CBD5300A02E0BA190D81A4E1152769A02D9 (U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSecondForceU3Ed__6_System_Collections_IEnumerator_Reset_mA0D146EC512688429C86AB4C08454617F039A3AC (U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSecondForceU3Ed__6_System_Collections_IEnumerator_Reset_mA0D146EC512688429C86AB4C08454617F039A3AC_RuntimeMethod_var)));
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSecondForceU3Ed__6_System_Collections_IEnumerator_get_Current_mF10AD4125772A566F52C129C841606F0162E87C4 (U3CSecondForceU3Ed__6_t774FB3157FB8248A6600A5640D7470FD2004D527* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Baracuda.Monitoring.Example.Scripts.ProjectilePool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectilePool_Awake_mC0B8217431409C30E357E18325CD50118D88E29C (ProjectilePool_tE1FA2CC85E82D6F7FA477801EA57E09AD91648FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisProjectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_mB0A5FB2CF0AB64927468D7E2DFE2DB34490671D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m04E066DE0767AD71976BF6205E49F5785BF083C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* V_1 = NULL;
	bool V_2 = false;
	{
		// for (var i = 0; i < projectileCount; i++)
		V_0 = 0;
		goto IL_003b;
	}

IL_0005:
	{
		// var projectile = Instantiate(projectilePrefab, Vector3.zero, Quaternion.identity);
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_0 = __this->___projectilePrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_3;
		L_3 = Object_Instantiate_TisProjectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_mB0A5FB2CF0AB64927468D7E2DFE2DB34490671D7(L_0, L_1, L_2, Object_Instantiate_TisProjectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D_mB0A5FB2CF0AB64927468D7E2DFE2DB34490671D7_RuntimeMethod_var);
		V_1 = L_3;
		// projectile.gameObject.SetActive(false);
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// _projectilePool.Enqueue(projectile);
		Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA* L_6 = __this->____projectilePool_6;
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_7 = V_1;
		NullCheck(L_6);
		Queue_1_Enqueue_m04E066DE0767AD71976BF6205E49F5785BF083C7(L_6, L_7, Queue_1_Enqueue_m04E066DE0767AD71976BF6205E49F5785BF083C7_RuntimeMethod_var);
		// for (var i = 0; i < projectileCount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		// for (var i = 0; i < projectileCount; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___projectileCount_5;
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// Baracuda.Monitoring.Example.Scripts.Projectile Baracuda.Monitoring.Example.Scripts.ProjectilePool::GetProjectileFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* ProjectilePool_GetProjectileFromPool_mD80DD1A572354525D83C1BCD56AC8D97F6EE927F (ProjectilePool_tE1FA2CC85E82D6F7FA477801EA57E09AD91648FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m48DF9C55B00B8523A2D29B350570B757A5E9B970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m04E066DE0767AD71976BF6205E49F5785BF083C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* V_0 = NULL;
	Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* V_1 = NULL;
	{
		// var projectile = _projectilePool.Dequeue();
		Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA* L_0 = __this->____projectilePool_6;
		NullCheck(L_0);
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_1;
		L_1 = Queue_1_Dequeue_m48DF9C55B00B8523A2D29B350570B757A5E9B970(L_0, Queue_1_Dequeue_m48DF9C55B00B8523A2D29B350570B757A5E9B970_RuntimeMethod_var);
		V_0 = L_1;
		// _projectilePool.Enqueue(projectile);
		Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA* L_2 = __this->____projectilePool_6;
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_3 = V_0;
		NullCheck(L_2);
		Queue_1_Enqueue_m04E066DE0767AD71976BF6205E49F5785BF083C7(L_2, L_3, Queue_1_Enqueue_m04E066DE0767AD71976BF6205E49F5785BF083C7_RuntimeMethod_var);
		// return projectile;
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_4 = V_0;
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		Projectile_t487A6CB2861C927C83D9194CD74437EE21CBE80D* L_5 = V_1;
		return L_5;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ProjectilePool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectilePool__ctor_mA470BD1099AC1DCE11B04D22282FAC02A6D83A64 (ProjectilePool_tE1FA2CC85E82D6F7FA477801EA57E09AD91648FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m956416EC0FAE260C7A7E01A8BF6FA294542745C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private int projectileCount = 100;
		__this->___projectileCount_5 = ((int32_t)100);
		// private readonly Queue<Projectile> _projectilePool = new Queue<Projectile>();
		Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA* L_0 = (Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA*)il2cpp_codegen_object_new(Queue_1_t9EC0E7A4ACD8E2788B9305DA09DA1BD3A9FCCEBA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m956416EC0FAE260C7A7E01A8BF6FA294542745C1(L_0, Queue_1__ctor_m956416EC0FAE260C7A7E01A8BF6FA294542745C1_RuntimeMethod_var);
		__this->____projectilePool_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projectilePool_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget_Start_m225C6F2A64454DE3BB5ABF1D30BE6FFB51CAD8FD (ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_10), (void*)L_0);
		// _currentHealth = health;
		float L_1 = __this->___health_4;
		__this->____currentHealth_8 = L_1;
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget_TakeDamage_m616085065175456496D5CE88895601C1DFC98CEA (ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* __this, float ___damage0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_isAlive)
		bool L_0 = __this->____isAlive_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// _currentHealth -= damage;
		float L_2 = __this->____currentHealth_8;
		float L_3 = ___damage0;
		__this->____currentHealth_8 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// if (_currentHealth > 0)
		float L_4 = __this->____currentHealth_8;
		V_1 = (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// return;
		goto IL_0047;
	}

IL_002e:
	{
		// _currentHealth = 0;
		__this->____currentHealth_8 = (0.0f);
		// StartCoroutine(CooldownCoroutine());
		RuntimeObject* L_6;
		L_6 = ShootingTarget_CooldownCoroutine_mE0436A2C800F73D068120FD762D0D9E170ECF8C7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.ShootingTarget::CooldownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShootingTarget_CooldownCoroutine_mE0436A2C800F73D068120FD762D0D9E170ECF8C7 (ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* L_0 = (U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF*)il2cpp_codegen_object_new(U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCooldownCoroutineU3Ed__11__ctor_m41B52DD0A0B93A0839E5144A465A7D9118FA6103(L_0, 0, NULL);
		U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget__ctor_mC103C5AC3A40D4FDCE6DF95EEE77D8828E8B6AA0 (ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float health = 200;
		__this->___health_4 = (200.0f);
		// [SerializeField] private float recoverCooldownMin = 1f;
		__this->___recoverCooldownMin_5 = (1.0f);
		// [SerializeField] private float recoverCooldownMax = 4f;
		__this->___recoverCooldownMax_6 = (4.0f);
		// private bool _isAlive = true;
		__this->____isAlive_7 = (bool)1;
		// private float _cooldown = 0f;
		__this->____cooldown_9 = (0.0f);
		MonitoredBehaviour__ctor_m55E1BE6E2D081A6DE67993B1262DD4A4883CE47F(__this, NULL);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget__cctor_mE037E31F5CF056D6107E4E3D4A265820FE676E97 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228AB9E61C52401E2BCC03F161ECA5B69A14DC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F34472FD1EC18AB899F5BD0C1EA11201795341);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int knockdown = Animator.StringToHash("knockdown");
		int32_t L_0;
		L_0 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral228AB9E61C52401E2BCC03F161ECA5B69A14DC54, NULL);
		((ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_StaticFields*)il2cpp_codegen_static_fields_for(ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var))->___knockdown_11 = L_0;
		// private static readonly int recover = Animator.StringToHash("recover");
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral41F34472FD1EC18AB899F5BD0C1EA11201795341, NULL);
		((ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_StaticFields*)il2cpp_codegen_static_fields_for(ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var))->___recover_12 = L_1;
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
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__11__ctor_m41B52DD0A0B93A0839E5144A465A7D9118FA6103 (U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__11_System_IDisposable_Dispose_m21EFC06C557D94FEAFFA3DCCC96AB8FC54822AAE (U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCooldownCoroutineU3Ed__11_MoveNext_mC1B75E06521A586D6A1612ABCA0F41E96451472B (U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_009a;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isAlive = false;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->____isAlive_7 = (bool)0;
		// _animator.SetTrigger(knockdown);
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->____animator_10;
		il2cpp_codegen_runtime_class_init_inline(ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var);
		int32_t L_6 = ((ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_StaticFields*)il2cpp_codegen_static_fields_for(ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var))->___knockdown_11;
		NullCheck(L_5);
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_5, L_6, NULL);
		// _cooldown = Random.Range(recoverCooldownMin, recoverCooldownMax);
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_7 = __this->___U3CU3E4__this_2;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		float L_9 = L_8->___recoverCooldownMin_5;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		float L_11 = L_10->___recoverCooldownMax_6;
		float L_12;
		L_12 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_9, L_11, NULL);
		NullCheck(L_7);
		L_7->____cooldown_9 = L_12;
		goto IL_00a2;
	}

IL_006d:
	{
		// _cooldown -= Time.deltaTime;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_13 = __this->___U3CU3E4__this_2;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		float L_15 = L_14->____cooldown_9;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_13);
		L_13->____cooldown_9 = ((float)il2cpp_codegen_subtract(L_15, L_16));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a2:
	{
		// while (_cooldown > 0)
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		float L_18 = L_17->____cooldown_9;
		V_1 = (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0);
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_006d;
		}
	}
	{
		// _cooldown = 0;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		L_20->____cooldown_9 = (0.0f);
		// _animator.SetTrigger(recover);
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = L_21->____animator_10;
		il2cpp_codegen_runtime_class_init_inline(ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var);
		int32_t L_23 = ((ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_StaticFields*)il2cpp_codegen_static_fields_for(ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0_il2cpp_TypeInfo_var))->___recover_12;
		NullCheck(L_22);
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_22, L_23, NULL);
		// _currentHealth = health;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_24 = __this->___U3CU3E4__this_2;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_25 = __this->___U3CU3E4__this_2;
		NullCheck(L_25);
		float L_26 = L_25->___health_4;
		NullCheck(L_24);
		L_24->____currentHealth_8 = L_26;
		// _isAlive = true;
		ShootingTarget_t14CA6A19711A09564246B993FAA183E997D046D0* L_27 = __this->___U3CU3E4__this_2;
		NullCheck(L_27);
		L_27->____isAlive_7 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCooldownCoroutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD6691CA1AA43DA2215B97F0B8AD0814B20681405 (U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_mEB7EEF7446B09372740834C505CC8CF935F7CBDC (U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCooldownCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_mEB7EEF7446B09372740834C505CC8CF935F7CBDC_RuntimeMethod_var)));
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCooldownCoroutineU3Ed__11_System_Collections_IEnumerator_get_Current_m27D15B3EDEABB0249EB0EFC3605EF14BCE36CF50 (U3CCooldownCoroutineU3Ed__11_t22DD5AC2E29D1F06F175BC924474F0689DD379CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::add_FPSUpdated(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor_add_FPSUpdated_m170EA422AAE16E622F52CBD1ADFF5A39DA502CF6 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___FPSUpdated_21;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_5 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>((&((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___FPSUpdated_21), L_5, L_6);
		V_0 = L_7;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_8) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::remove_FPSUpdated(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor_remove_FPSUpdated_mBE77A79DD4B147CF68FE1E9448349979ACC8DB71 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___FPSUpdated_21;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_5 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>((&((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___FPSUpdated_21), L_5, L_6);
		V_0 = L_7;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_8) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.String Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::FPSProcessor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FPSMonitor_FPSProcessor_m66A649550821E55498ECD2CFA5F8C0EE9E75BC22 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2782E60458C315FD9CCA88FAAA60C80198F1751C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0483570A78643AE1FD9C1B5E0DE2FBC10DF38F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC66FB6A39237C31222C78DEDB1295C5BD1F974B4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t* G_B5_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	StringBuilder_t* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	StringBuilder_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	StringBuilder_t* G_B6_1 = NULL;
	{
		// stringBuilder.Clear();
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___stringBuilder_17;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_0, NULL);
		// stringBuilder.Append('[');
		StringBuilder_t* L_2 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___stringBuilder_17;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_2, ((int32_t)91), NULL);
		// stringBuilder.Append(value >= THRESHOLD_TWO ? C_MAX : value >= THRESHOLD_ONE ? COLOR_MID_MARKUP : COLOR_MIN_MARKUP);
		StringBuilder_t* L_4 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___stringBuilder_17;
		float L_5 = ___value0;
		G_B1_0 = L_4;
		if ((((float)L_5) >= ((float)(60.0f))))
		{
			G_B5_0 = L_4;
			goto IL_003c;
		}
	}
	{
		float L_6 = ___value0;
		G_B2_0 = G_B1_0;
		if ((((float)L_6) >= ((float)(30.0f))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0035;
		}
	}
	{
		G_B4_0 = _stringLiteral6D0483570A78643AE1FD9C1B5E0DE2FBC10DF38F;
		G_B4_1 = G_B2_0;
		goto IL_003a;
	}

IL_0035:
	{
		G_B4_0 = _stringLiteral2782E60458C315FD9CCA88FAAA60C80198F1751C;
		G_B4_1 = G_B3_0;
	}

IL_003a:
	{
		G_B6_0 = G_B4_0;
		G_B6_1 = G_B4_1;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral6D0483570A78643AE1FD9C1B5E0DE2FBC10DF38F;
		G_B6_1 = G_B5_0;
	}

IL_0041:
	{
		NullCheck(G_B6_1);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B6_1, G_B6_0, NULL);
		// stringBuilder.Append(value.ToString("00.00"));
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		StringBuilder_t* L_8 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___stringBuilder_17;
		String_t* L_9;
		L_9 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___value0), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_9, NULL);
		// stringBuilder.Append("</color>]");
		StringBuilder_t* L_11 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___stringBuilder_17;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteralC66FB6A39237C31222C78DEDB1295C5BD1F974B4, NULL);
		// return stringBuilder.ToString();
		StringBuilder_t* L_13 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___stringBuilder_17;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_0 = L_14;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor_Update_mF8A84FC8EACF3083C7FAA4A01BF6811549FDC985 (FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B5_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B4_0 = NULL;
	{
		// frameCount++;
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___frameCount_16;
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___frameCount_16 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// _totalFrameCount++;
		int64_t L_1 = __this->____totalFrameCount_19;
		__this->____totalFrameCount_19 = ((int64_t)il2cpp_codegen_add(L_1, ((int64_t)1)));
		// timer += Time.deltaTime / Time.timeScale;
		float L_2 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___timer_13;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_4;
		L_4 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___timer_13 = ((float)il2cpp_codegen_add(L_2, ((float)(L_3/L_4))));
		// if (timer < MEASURE_PERIOD)
		float L_5 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___timer_13;
		V_1 = (bool)((((float)L_5) < ((float)(0.25f)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// return;
		goto IL_00b8;
	}

IL_0045:
	{
		// lastMeasuredFps = (frameCount / timer);
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		int32_t L_7 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___frameCount_16;
		float L_8 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___timer_13;
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___lastMeasuredFps_15 = ((float)(((float)L_7)/L_8));
		// if (Math.Abs(lastMeasuredFps - lastFPS) > .1f)
		float L_9 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___lastMeasuredFps_15;
		int32_t L_10 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___lastFPS_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_11;
		L_11 = fabsf(((float)il2cpp_codegen_subtract(L_9, ((float)L_10))));
		V_2 = (bool)((((float)L_11) > ((float)(0.100000001f)))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0096;
		}
	}
	{
		// _fps = lastMeasuredFps;
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		float L_13 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___lastMeasuredFps_15;
		__this->____fps_18 = L_13;
		// FPSUpdated?.Invoke(_fps);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_14 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___FPSUpdated_21;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_15 = L_14;
		G_B4_0 = L_15;
		if (L_15)
		{
			G_B5_0 = L_15;
			goto IL_0089;
		}
	}
	{
		goto IL_0095;
	}

IL_0089:
	{
		float L_16 = __this->____fps_18;
		NullCheck(G_B5_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B5_0, L_16, NULL);
	}

IL_0095:
	{
	}

IL_0096:
	{
		// lastFPS = frameCount;
		il2cpp_codegen_runtime_class_init_inline(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		int32_t L_17 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___frameCount_16;
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___lastFPS_14 = L_17;
		// frameCount = 0;
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___frameCount_16 = 0;
		// var rest = MEASURE_PERIOD - timer;
		float L_18 = ((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___timer_13;
		V_0 = ((float)il2cpp_codegen_subtract((0.25f), L_18));
		// timer = rest;
		float L_19 = V_0;
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___timer_13 = L_19;
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor_FixedUpdate_m185ECA6126C2DDAECF531E545ED848973E4B5BC7 (FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3* __this, const RuntimeMethod* method) 
{
	{
		// _fixedUpdateCount++;
		int64_t L_0 = __this->____fixedUpdateCount_20;
		__this->____fixedUpdateCount_20 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// }
		return;
	}
}
// System.Int32 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::get_TargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FPSMonitor_get_TargetFrameRate_m390E22216D235240ED327286AF25924D8805248A (FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3* __this, const RuntimeMethod* method) 
{
	{
		// private int TargetFrameRate => Application.targetFrameRate;
		int32_t L_0;
		L_0 = Application_get_targetFrameRate_mB9877E89AFCF1CF0651D9471D5152490BF66BE5E(NULL);
		return L_0;
	}
}
// System.String Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::ProcessorTargetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FPSMonitor_ProcessorTargetFrameRate_m108296449FA6DFC4DD9A103B07A4FCECC79FDAFC (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0837041AD0EE0643F6824EDD39A94236A4C64E77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBF7A4CD422476FEB006274145662AE739D5833);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// return $"Target Framerate: {(value > 0 ? value.ToString() : "Unlimited")}";
		int32_t L_0 = ___value0;
		G_B1_0 = _stringLiteral0837041AD0EE0643F6824EDD39A94236A4C64E77;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			G_B2_0 = _stringLiteral0837041AD0EE0643F6824EDD39A94236A4C64E77;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = _stringLiteralACBF7A4CD422476FEB006274145662AE739D5833;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0011:
	{
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___value0), NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		V_0 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::get_Vsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FPSMonitor_get_Vsync_m4558F5ADDFBF5CC1D6E592B5684D0FFF125F90BF (FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3* __this, const RuntimeMethod* method) 
{
	{
		// private int Vsync => QualitySettings.vSyncCount;
		int32_t L_0;
		L_0 = QualitySettings_get_vSyncCount_m623B92EE9CBB51A7A96CA88022319CC46CC02F24(NULL);
		return L_0;
	}
}
// System.String Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::ProcessorVsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FPSMonitor_ProcessorVsync_m25E7F4229FE4E059829371FD4F27C5B34C6EF6B2 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C8E53BB00CB458F66CD314AADF58285ABC31E61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA0318C58431FE2137800A0147599057929A2F71);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// return $"Vsync: {(value > 0 ? $"Vsync Count: {value}" : "Disabled")}";
		int32_t L_0 = ___value0;
		G_B1_0 = _stringLiteralBA0318C58431FE2137800A0147599057929A2F71;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			G_B2_0 = _stringLiteralBA0318C58431FE2137800A0147599057929A2F71;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = _stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_0011:
	{
		int32_t L_1 = ___value0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4C8E53BB00CB458F66CD314AADF58285ABC31E61, L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		V_0 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor__ctor_m0672CC1F21A070257D0B23E53B87DDC366800AAE (FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoredSingleton_1__ctor_mF75C340682D2F93C49F1C11AB1F87A4F0ED68DB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private long _totalFrameCount = 0;
		__this->____totalFrameCount_19 = ((int64_t)0);
		// private long _fixedUpdateCount = 0;
		__this->____fixedUpdateCount_20 = ((int64_t)0);
		MonitoredSingleton_1__ctor_mF75C340682D2F93C49F1C11AB1F87A4F0ED68DB2(__this, MonitoredSingleton_1__ctor_mF75C340682D2F93C49F1C11AB1F87A4F0ED68DB2_RuntimeMethod_var);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor__cctor_mACB8DB7B7CF8EC089157D2D36DE1FBC3755548D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float timer = 0;
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___timer_13 = (0.0f);
		// private static float lastMeasuredFps = 0;
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___lastMeasuredFps_15 = (0.0f);
		// private static int frameCount = 0;
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___frameCount_16 = 0;
		// private static readonly StringBuilder stringBuilder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___stringBuilder_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tB5B1905041157E7DE3BBD13CE2164462B8C9D2D3_il2cpp_TypeInfo_var))->___stringBuilder_17), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Vertical_m571A9DC549949DDCD63E78FD521A99B221E6EF72_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get; private set; }
		float L_0 = ___value0;
		__this->___U3CVerticalU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Horizontal_mFC0CC6134E820CBF9F3BBB4ED7234E7B59A7B5FC_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get; private set; }
		float L_0 = ___value0;
		__this->___U3CHorizontalU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseX_mE71FEC6CB3CF32BCE59A2426251601C803F7BE21_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MouseX { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMouseXU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseY_mA7995F4C7F72B58F551F960D3BAE273058A57F91_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MouseY { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMouseYU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_JumpPressed_m6621D2D43EC40443DC03F3B65C8CF0C20D28A169_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool JumpPressed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CJumpPressedU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_PrimaryFirePressed_m155E8F4AB2DDB25DD6CB193B00F2854C090B8ABE_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool PrimaryFirePressed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CPrimaryFirePressedU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_SecondaryFirePressed_mB1F6C5EAB90C0FE24D192205197044A1AF6A8B57_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SecondaryFirePressed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSecondaryFirePressedU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_DashPressed_m772FC6489C8127CC13CCC07F9D312EAA334354A9_inline (LegacyPlayerInput_t89045E7D15210919C6C5496FD13571C96A7545CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool DashPressed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDashPressedU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueObject_1_set_Value_mCF9881F3E6E5EE135709AA4F9A1BC485FDF008DB_gshared_inline (ValueObject_1_t5C76B7EF067E7DE5AB53303EE0AB29FF9FE9833A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public T Value { get; protected set; }
		int32_t L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
