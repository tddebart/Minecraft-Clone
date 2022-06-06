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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement,System.Boolean>
struct Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>
struct IEnumerable_1_t6076B9AA40A75DAB68C0648DF0090175B82A132D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>
struct List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement[]
struct GUIElementU5BU5D_t17E2E9AEBA26F214A4C0E04F08D6397C44637396;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// Baracuda.Monitoring.Internal.Utilities.FormatData
struct FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// Baracuda.Monitoring.Interface.IMonitorUnit
struct IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer
struct MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19;
// Baracuda.Monitoring.MonitoringUIController
struct MonitoringUIController_t564AFD2A7135A75B9B1B916BACB737A7570686D4;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615;
// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement
struct GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral732E6DFF6A0E543BD26C1936B7AA5AA61DB76591;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3969D2C3B753EEA6472EAA0FAFE56A82655C9C;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIElement_Update_m0606176AE0E71A1C38965EB5ADC8E0D7DC5590F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__0_m1108F04A1A6A074B24E7BF2CB65534E32E19DD8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__1_mBFF1C05F8E0ADE403F3F9894C2BD4E56A62F41FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__2_m26C777DFCB42342C42C4D64AECE7CC45C9D261D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__3_m2A85C29B7D208351169DEEB9960D82EF8CAC6281_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFBD2AD7E42E0C0CA3BE5EC5D7CF7D0BBAE22F342 
{
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

// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>
struct List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GUIElementU5BU5D_t17E2E9AEBA26F214A4C0E04F08D6397C44637396* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GUIElementU5BU5D_t17E2E9AEBA26F214A4C0E04F08D6397C44637396* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Baracuda.Monitoring.Internal.Utilities.FormatData
struct FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D  : public RuntimeObject
{
	// System.String Baracuda.Monitoring.Internal.Utilities.FormatData::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;
	// System.Boolean Baracuda.Monitoring.Internal.Utilities.FormatData::<ShowIndexer>k__BackingField
	bool ___U3CShowIndexerU3Ek__BackingField_1;
	// System.String Baracuda.Monitoring.Internal.Utilities.FormatData::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_2;
	// System.Int32 Baracuda.Monitoring.Internal.Utilities.FormatData::<FontSize>k__BackingField
	int32_t ___U3CFontSizeU3Ek__BackingField_3;
	// Baracuda.Monitoring.UIPosition Baracuda.Monitoring.Internal.Utilities.FormatData::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_4;
	// System.Boolean Baracuda.Monitoring.Internal.Utilities.FormatData::<AllowGrouping>k__BackingField
	bool ___U3CAllowGroupingU3Ek__BackingField_5;
	// System.String Baracuda.Monitoring.Internal.Utilities.FormatData::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_6;
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
	// System.Action UnityEngine.GUIContent::OnTextChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTextChanged_3;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_6;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
	Il2CppMethodPointer ___OnTextChanged_3;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
	Il2CppMethodPointer ___OnTextChanged_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615  : public RuntimeObject
{
	// Baracuda.Monitoring.Interface.IMonitorUnit Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0::unit
	RuntimeObject* ___unit_0;
};

// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement
struct GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20  : public RuntimeObject
{
	// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_0;
	// System.String Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::<Content>k__BackingField
	String_t* ___U3CContentU3Ek__BackingField_1;
	// Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::<FormatData>k__BackingField
	FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* ___U3CFormatDataU3Ek__BackingField_2;
	// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::_size
	int32_t ____size_3;
	// System.String Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::_targetName
	String_t* ____targetName_4;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
struct Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D 
{
	// UnityEngine.GUIStyle Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context::style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style_0;
};
// Native definition for P/Invoke marshalling of Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
struct Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshaled_pinvoke
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___style_0;
};
// Native definition for COM marshalling of Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
struct Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshaled_com
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___style_0;
};

// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding
struct MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED 
{
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding::top
	float ___top_0;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding::bot
	float ___bot_1;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding::left
	float ___left_2;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding::right
	float ___right_3;
};

// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData
struct ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B 
{
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::Width
	float ___Width_0;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::Height
	float ___Height_1;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::HalfHeight
	float ___HalfHeight_2;
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

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Func`2<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement,System.Boolean>
struct Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Baracuda.Monitoring.MonitoredBehaviour
struct MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Baracuda.Monitoring.MonitoringUIController
struct MonitoringUIController_t564AFD2A7135A75B9B1B916BACB737A7570686D4  : public MonitoredBehaviour_t640F2D73A52B39CF533C82714ABADB2AE6134CA0
{
};

// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer
struct MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19  : public MonitoringUIController_t564AFD2A7135A75B9B1B916BACB737A7570686D4
{
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::elementSpacing
	float ___elementSpacing_4;
	// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::windowMargin
	MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED ___windowMargin_5;
	// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::elementPadding
	MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED ___elementPadding_6;
	// UnityEngine.Color Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_7;
	// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::logStartMessage
	bool ___logStartMessage_8;
	// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement> Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_unitsUpperLeft
	List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* ____unitsUpperLeft_9;
	// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement> Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_unitsUpperRight
	List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* ____unitsUpperRight_10;
	// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement> Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_unitsLowerLeft
	List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* ____unitsLowerLeft_11;
	// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement> Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_unitsLowerRight
	List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* ____unitsLowerRight_12;
	// UnityEngine.GUIContent Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_content
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ____content_13;
	// UnityEngine.Texture2D Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_backgroundTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____backgroundTexture_14;
};

struct MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields
{
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::lastLowerLeftHeight
	float ___lastLowerLeftHeight_15;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::lastLowerRightHeight
	float ___lastLowerRightHeight_16;
	// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::topLeftRows
	int32_t ___topLeftRows_17;
	// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::topRightRows
	int32_t ___topRightRows_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);

// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mDCD9412FC75B9AD866A2F08D50E259B920BFA6CC_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_m45580D311F3E8382DE8C351CFAB54C93C9D4270A (Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenData__ctor_m0F637473AEA06691357FC93D52ADFC6BC9FC7772 (ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B* __this, float ___width0, float ___height1, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawUpperLeft(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawUpperLeft_mC7FAA15A03E0046E3EAE64540A04DC306E32090D (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D ___ctx0, ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B ___screenData1, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawUpperRight(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawUpperRight_m99F2BB606F3602126AFDC3E163AD0FB087024363 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D ___ctx0, ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B ___screenData1, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawLowerLeft(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawLowerLeft_m109583CE881760123E022F2FC717B509A418DFCB (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D ___ctx0, ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B ___screenData1, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawLowerRight(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawLowerRight_m539587C2FEA225085FFBA7685E152E3247130384 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D ___ctx0, ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B ___screenData1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::get_Item(System.Int32)
inline GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* (*) (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GUIElement_get_Content_mEE3A12D1DDEAF36D385C7A420ECB2C50ADC5CA49_inline (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, const RuntimeMethod* method) ;
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawUpperLeft>g__ElementRect|21_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MonitoringGUIDrawer_U3CDrawUpperLeftU3Eg__ElementRectU7C21_0_mAB3B64799FB65CF52D3A10C4E64289469EF86857 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___textRect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, int32_t ___scaleMode2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::get_Count()
inline int32_t List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_inline (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawLowerLeft>g__ElementRect|22_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C22_0_m4E3DF54162B62F9AED84BBD8A2EB0EFBA7C70995 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___textRect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method) ;
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawUpperRight>g__ElementRect|23_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MonitoringGUIDrawer_U3CDrawUpperRightU3Eg__ElementRectU7C23_0_m417777F193560B7F5C5F1032905F11794C61CAAA (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___textRect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method) ;
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawLowerRight>g__ElementRect|24_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C24_0_mF1A347FE3EE3DAD981F2DC0843FDCFF1E703313F (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___textRect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitDisposedInternal(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitDisposedInternal_mC75E066FA5B86539B0EB6C8A518D83662CE8FE11_inline (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitCreatedInternal(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitCreatedInternal_m3CBABA2C76BF44D905B312C4B88B28E100803710_inline (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) ;
// Baracuda.Monitoring.UIPosition Baracuda.Monitoring.Internal.Utilities.FormatData::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormatData_get_Position_m17C0CAD89794FB67433837EE872D5E7A8955384C_inline (FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::.ctor(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31 (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::Add(T)
inline void List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* __this, GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*, GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m4196920AB71C35E768988689BA2001849519FF54 (U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::First<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F (RuntimeObject* ___source0, Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* ___predicate1, const RuntimeMethod* method)
{
	return ((  GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* (*) (RuntimeObject*, Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mDCD9412FC75B9AD866A2F08D50E259B920BFA6CC_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::Remove(T)
inline bool List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* __this, GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*, GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::.ctor(System.Int32)
inline void List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.MonitoringUIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringUIController__ctor_mAB38647FEA6271BE85157597D1911F8A34160F68 (MonitoringUIController_t564AFD2A7135A75B9B1B916BACB737A7570686D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_FormatData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* GUIElement_get_FormatData_m8CBACAAB3B39B186ECFE909F507C80E89F625C51_inline (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) ;
// System.Int32 Baracuda.Monitoring.Internal.Utilities.FormatData::get_FontSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormatData_get_FontSize_mE43E4485BF45C54FD1BC17325547D312AD5628FF_inline (FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement_Update_m0606176AE0E71A1C38965EB5ADC8E0D7DC5590F4 (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Baracuda.Pooling.Concretions.StringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderPool_Get_mE2FD5487D8243565C5AB4A9CA5975E2B9614A40D (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String Baracuda.Pooling.Concretions.StringBuilderPool::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderPool_Release_m4139C0B52C9E249F699F5C45B2AB0A56E263DC97 (StringBuilder_t* ___toRelease0, const RuntimeMethod* method) ;
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::set_Content(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIElement_set_Content_mB58DBBD9E84C6B3A74D2D06DDCBC67309914348F_inline (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GUIElement_get_ID_m7B31A86A6EBC9A7634908ED0139CB875E2A5EB9A_inline (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
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
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_Start_m39C84E2FA39623954B6B55159CF4256B43FB0085 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _backgroundTexture = new Texture2D(1, 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, 1, 1, NULL);
		__this->____backgroundTexture_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____backgroundTexture_14), (void*)L_0);
		// _backgroundTexture.SetPixel(0, 0, backgroundColor);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->____backgroundTexture_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___backgroundColor_7;
		NullCheck(L_1);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_1, 0, 0, L_2, NULL);
		// _backgroundTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->____backgroundTexture_14;
		NullCheck(L_3);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_3, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnGUI_mF4DC581F56637DD2CF2D25C908B247682CC54094 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var ctx = new Context(GUI.skin.label);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0;
		L_0 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		NullCheck(L_0);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_0, NULL);
		Context__ctor_m45580D311F3E8382DE8C351CFAB54C93C9D4270A((&V_0), L_1, NULL);
		// var screenData = new ScreenData(Screen.width, Screen.height);
		int32_t L_2;
		L_2 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		ScreenData__ctor_m0F637473AEA06691357FC93D52ADFC6BC9FC7772((&V_1), ((float)L_2), ((float)L_3), NULL);
		// DrawUpperLeft(ctx, screenData);
		Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D L_4 = V_0;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_5 = V_1;
		MonitoringGUIDrawer_DrawUpperLeft_mC7FAA15A03E0046E3EAE64540A04DC306E32090D(__this, L_4, L_5, NULL);
		// DrawUpperRight(ctx, screenData);
		Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D L_6 = V_0;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_7 = V_1;
		MonitoringGUIDrawer_DrawUpperRight_m99F2BB606F3602126AFDC3E163AD0FB087024363(__this, L_6, L_7, NULL);
		// DrawLowerLeft(ctx, screenData);
		Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D L_8 = V_0;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_9 = V_1;
		MonitoringGUIDrawer_DrawLowerLeft_m109583CE881760123E022F2FC717B509A418DFCB(__this, L_8, L_9, NULL);
		// DrawLowerRight(ctx, screenData);
		Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D L_10 = V_0;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_11 = V_1;
		MonitoringGUIDrawer_DrawLowerRight_m539587C2FEA225085FFBA7685E152E3247130384(__this, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawUpperLeft(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawUpperLeft_mC7FAA15A03E0046E3EAE64540A04DC306E32090D (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D ___ctx0, ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B ___screenData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* V_4 = NULL;
	String_t* V_5 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B4_0 = 0;
	{
		// var xPos = windowMargin.left;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_0 = (&__this->___windowMargin_5);
		float L_1 = L_0->___left_2;
		V_0 = L_1;
		// var yPos = windowMargin.top;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_2 = (&__this->___windowMargin_5);
		float L_3 = L_2->___top_0;
		V_1 = L_3;
		// var maxWidth = 0f;
		V_2 = (0.0f);
		// topLeftRows = 1;
		((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topLeftRows_17 = 1;
		// for (var i = 0; i < _unitsUpperLeft.Count; i++)
		V_3 = 0;
		goto IL_0126;
	}

IL_002c:
	{
		// var guiElement = _unitsUpperLeft[i];
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_4 = __this->____unitsUpperLeft_9;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_6;
		L_6 = List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E(L_4, L_5, List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var);
		V_4 = L_6;
		// var displayString = guiElement.Content;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = GUIElement_get_Content_mEE3A12D1DDEAF36D385C7A420ECB2C50ADC5CA49_inline(L_7, NULL);
		V_5 = L_8;
		// _content.text = displayString;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = __this->____content_13;
		String_t* L_10 = V_5;
		NullCheck(L_9);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_9, L_10, NULL);
		// var textRect = new Rect();
		il2cpp_codegen_initobj((&V_6), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// var textDimensions = ctx.style.CalcSize(_content);
		Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D L_11 = ___ctx0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = L_11.___style_0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_13 = __this->____content_13;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_12, L_13, NULL);
		V_7 = L_14;
		// var elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_7;
		float L_16 = V_0;
		float L_17 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18;
		L_18 = MonitoringGUIDrawer_U3CDrawUpperLeftU3Eg__ElementRectU7C21_0_mAB3B64799FB65CF52D3A10C4E64289469EF86857(__this, (&V_6), L_15, L_16, L_17, NULL);
		V_8 = L_18;
		// maxWidth = Mathf.Max(maxWidth, elementRect.width);
		float L_19 = V_2;
		float L_20;
		L_20 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_8), NULL);
		float L_21;
		L_21 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_19, L_20, NULL);
		V_2 = L_21;
		// if (elementRect.y + elementRect.height + lastLowerLeftHeight > screenData.Height && elementRect.height < screenData.Height)
		float L_22;
		L_22 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_8), NULL);
		float L_23;
		L_23 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_8), NULL);
		float L_24 = ((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___lastLowerLeftHeight_15;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_25 = ___screenData1;
		float L_26 = L_25.___Height_1;
		if ((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_22, L_23)), L_24))) > ((float)L_26))))
		{
			goto IL_00b7;
		}
	}
	{
		float L_27;
		L_27 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_8), NULL);
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_28 = ___screenData1;
		float L_29 = L_28.___Height_1;
		G_B4_0 = ((((float)L_27) < ((float)L_29))? 1 : 0);
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B4_0 = 0;
	}

IL_00b8:
	{
		V_9 = (bool)G_B4_0;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00f7;
		}
	}
	{
		// topLeftRows++;
		int32_t L_31 = ((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topLeftRows_17;
		((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topLeftRows_17 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// yPos = windowMargin.top;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_32 = (&__this->___windowMargin_5);
		float L_33 = L_32->___top_0;
		V_1 = L_33;
		// xPos += maxWidth + elementSpacing;
		float L_34 = V_0;
		float L_35 = V_2;
		float L_36 = __this->___elementSpacing_4;
		V_0 = ((float)il2cpp_codegen_add(L_34, ((float)il2cpp_codegen_add(L_35, L_36))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_7;
		float L_38 = V_0;
		float L_39 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_40;
		L_40 = MonitoringGUIDrawer_U3CDrawUpperLeftU3Eg__ElementRectU7C21_0_mAB3B64799FB65CF52D3A10C4E64289469EF86857(__this, (&V_6), L_37, L_38, L_39, NULL);
		V_8 = L_40;
	}

IL_00f7:
	{
		// GUI.DrawTexture(elementRect, _backgroundTexture, ScaleMode.StretchToFill);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = __this->____backgroundTexture_14;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898(L_41, L_42, 0, NULL);
		// GUI.Label(textRect, displayString);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_43 = V_6;
		String_t* L_44 = V_5;
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_43, L_44, NULL);
		// yPos += elementRect.height + elementSpacing;
		float L_45 = V_1;
		float L_46;
		L_46 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_8), NULL);
		float L_47 = __this->___elementSpacing_4;
		V_1 = ((float)il2cpp_codegen_add(L_45, ((float)il2cpp_codegen_add(L_46, L_47))));
		// for (var i = 0; i < _unitsUpperLeft.Count; i++)
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0126:
	{
		// for (var i = 0; i < _unitsUpperLeft.Count; i++)
		int32_t L_49 = V_3;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_50 = __this->____unitsUpperLeft_9;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_inline(L_50, List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_49) < ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_10;
		if (L_52)
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawLowerLeft(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawLowerLeft_m109583CE881760123E022F2FC717B509A418DFCB (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D ___ctx0, ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B ___screenData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* V_5 = NULL;
	String_t* V_6 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// var xPos = windowMargin.left;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_0 = (&__this->___windowMargin_5);
		float L_1 = L_0->___left_2;
		V_0 = L_1;
		// var yPos = screenData.Height - windowMargin.bot;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_2 = ___screenData1;
		float L_3 = L_2.___Height_1;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_4 = (&__this->___windowMargin_5);
		float L_5 = L_4->___bot_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_3, L_5));
		// var maxWidth = 0f;
		V_2 = (0.0f);
		// var maxHeight = 0f;
		V_3 = (0.0f);
		// for (var i = _unitsLowerLeft.Count - 1; i >= 0; i--)
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_6 = __this->____unitsLowerLeft_11;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_inline(L_6, List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_018a;
	}

IL_0040:
	{
		// var guiElement = _unitsLowerLeft[i];
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_8 = __this->____unitsLowerLeft_11;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_10;
		L_10 = List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E(L_8, L_9, List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var);
		V_5 = L_10;
		// var displayString = guiElement.Content;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_11 = V_5;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GUIElement_get_Content_mEE3A12D1DDEAF36D385C7A420ECB2C50ADC5CA49_inline(L_11, NULL);
		V_6 = L_12;
		// _content.text = displayString;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_13 = __this->____content_13;
		String_t* L_14 = V_6;
		NullCheck(L_13);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_13, L_14, NULL);
		// var textRect = new Rect();
		il2cpp_codegen_initobj((&V_7), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// var textDimensions = ctx.style.CalcSize(_content);
		Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D L_15 = ___ctx0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_16 = L_15.___style_0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_17 = __this->____content_13;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_16, L_17, NULL);
		V_8 = L_18;
		// var elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_8;
		float L_20 = V_0;
		float L_21 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		L_22 = MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C22_0_m4E3DF54162B62F9AED84BBD8A2EB0EFBA7C70995(__this, (&V_7), L_19, L_20, L_21, NULL);
		V_9 = L_22;
		// maxWidth = Mathf.Max(maxWidth, elementRect.width);
		float L_23 = V_2;
		float L_24;
		L_24 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_9), NULL);
		float L_25;
		L_25 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_23, L_24, NULL);
		V_2 = L_25;
		// if (topLeftRows > 1 && screenData.Height - yPos > screenData.HalfHeight)
		int32_t L_26 = ((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topLeftRows_17;
		if ((((int32_t)L_26) <= ((int32_t)1)))
		{
			goto IL_00b8;
		}
	}
	{
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_27 = ___screenData1;
		float L_28 = L_27.___Height_1;
		float L_29 = V_1;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_30 = ___screenData1;
		float L_31 = L_30.___HalfHeight_2;
		G_B4_0 = ((((float)((float)il2cpp_codegen_subtract(L_28, L_29))) > ((float)L_31))? 1 : 0);
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B4_0 = 0;
	}

IL_00b9:
	{
		V_10 = (bool)G_B4_0;
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00f5;
		}
	}
	{
		// yPos = screenData.Height - windowMargin.bot;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_33 = ___screenData1;
		float L_34 = L_33.___Height_1;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_35 = (&__this->___windowMargin_5);
		float L_36 = L_35->___bot_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_34, L_36));
		// xPos += maxWidth + elementSpacing;
		float L_37 = V_0;
		float L_38 = V_2;
		float L_39 = __this->___elementSpacing_4;
		V_0 = ((float)il2cpp_codegen_add(L_37, ((float)il2cpp_codegen_add(L_38, L_39))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_8;
		float L_41 = V_0;
		float L_42 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_43;
		L_43 = MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C22_0_m4E3DF54162B62F9AED84BBD8A2EB0EFBA7C70995(__this, (&V_7), L_40, L_41, L_42, NULL);
		V_9 = L_43;
		goto IL_014a;
	}

IL_00f5:
	{
		// else if (topLeftRows == 1 && screenData.Height - yPos > screenData.Height)
		int32_t L_44 = ((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topLeftRows_17;
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_010f;
		}
	}
	{
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_45 = ___screenData1;
		float L_46 = L_45.___Height_1;
		float L_47 = V_1;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_48 = ___screenData1;
		float L_49 = L_48.___Height_1;
		G_B9_0 = ((((float)((float)il2cpp_codegen_subtract(L_46, L_47))) > ((float)L_49))? 1 : 0);
		goto IL_0110;
	}

IL_010f:
	{
		G_B9_0 = 0;
	}

IL_0110:
	{
		V_11 = (bool)G_B9_0;
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_014a;
		}
	}
	{
		// yPos = screenData.Height - windowMargin.bot;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_51 = ___screenData1;
		float L_52 = L_51.___Height_1;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_53 = (&__this->___windowMargin_5);
		float L_54 = L_53->___bot_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_52, L_54));
		// xPos += maxWidth + elementSpacing;
		float L_55 = V_0;
		float L_56 = V_2;
		float L_57 = __this->___elementSpacing_4;
		V_0 = ((float)il2cpp_codegen_add(L_55, ((float)il2cpp_codegen_add(L_56, L_57))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_8;
		float L_59 = V_0;
		float L_60 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_61;
		L_61 = MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C22_0_m4E3DF54162B62F9AED84BBD8A2EB0EFBA7C70995(__this, (&V_7), L_58, L_59, L_60, NULL);
		V_9 = L_61;
	}

IL_014a:
	{
		// GUI.DrawTexture(elementRect, _backgroundTexture, ScaleMode.StretchToFill);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_62 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_63 = __this->____backgroundTexture_14;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898(L_62, L_63, 0, NULL);
		// GUI.Label(textRect, displayString);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_64 = V_7;
		String_t* L_65 = V_6;
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_64, L_65, NULL);
		// yPos -= elementRect.height + elementSpacing;
		float L_66 = V_1;
		float L_67;
		L_67 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_9), NULL);
		float L_68 = __this->___elementSpacing_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_66, ((float)il2cpp_codegen_add(L_67, L_68))));
		// maxHeight = Mathf.Max(screenData.Height - yPos, maxHeight);
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_69 = ___screenData1;
		float L_70 = L_69.___Height_1;
		float L_71 = V_1;
		float L_72 = V_3;
		float L_73;
		L_73 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_subtract(L_70, L_71)), L_72, NULL);
		V_3 = L_73;
		// for (var i = _unitsLowerLeft.Count - 1; i >= 0; i--)
		int32_t L_74 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_74, 1));
	}

IL_018a:
	{
		// for (var i = _unitsLowerLeft.Count - 1; i >= 0; i--)
		int32_t L_75 = V_4;
		V_12 = (bool)((((int32_t)((((int32_t)L_75) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_12;
		if (L_76)
		{
			goto IL_0040;
		}
	}
	{
		// lastLowerLeftHeight = maxHeight;
		float L_77 = V_3;
		((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___lastLowerLeftHeight_15 = L_77;
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawUpperRight(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawUpperRight_m99F2BB606F3602126AFDC3E163AD0FB087024363 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D ___ctx0, ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B ___screenData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* V_4 = NULL;
	String_t* V_5 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B4_0 = 0;
	{
		// var xPos = screenData.Width;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_0 = ___screenData1;
		float L_1 = L_0.___Width_0;
		V_0 = L_1;
		// var yPos = windowMargin.top;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_2 = (&__this->___windowMargin_5);
		float L_3 = L_2->___top_0;
		V_1 = L_3;
		// var maxWidth = 0f;
		V_2 = (0.0f);
		// topRightRows = 1;
		((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topRightRows_18 = 1;
		// for (var i = 0; i < _unitsUpperRight.Count; i++)
		V_3 = 0;
		goto IL_0121;
	}

IL_0027:
	{
		// var guiElement = _unitsUpperRight[i];
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_4 = __this->____unitsUpperRight_10;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_6;
		L_6 = List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E(L_4, L_5, List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var);
		V_4 = L_6;
		// var displayString = guiElement.Content;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = GUIElement_get_Content_mEE3A12D1DDEAF36D385C7A420ECB2C50ADC5CA49_inline(L_7, NULL);
		V_5 = L_8;
		// _content.text = displayString;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = __this->____content_13;
		String_t* L_10 = V_5;
		NullCheck(L_9);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_9, L_10, NULL);
		// var textRect = new Rect();
		il2cpp_codegen_initobj((&V_6), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// var textDimensions = ctx.style.CalcSize(_content);
		Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D L_11 = ___ctx0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = L_11.___style_0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_13 = __this->____content_13;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_12, L_13, NULL);
		V_7 = L_14;
		// var elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_7;
		float L_16 = V_0;
		float L_17 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18;
		L_18 = MonitoringGUIDrawer_U3CDrawUpperRightU3Eg__ElementRectU7C23_0_m417777F193560B7F5C5F1032905F11794C61CAAA(__this, (&V_6), L_15, L_16, L_17, NULL);
		V_8 = L_18;
		// maxWidth = Mathf.Max(maxWidth, elementRect.width);
		float L_19 = V_2;
		float L_20;
		L_20 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_8), NULL);
		float L_21;
		L_21 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_19, L_20, NULL);
		V_2 = L_21;
		// if (elementRect.y + elementRect.height + lastLowerRightHeight > screenData.Height && elementRect.height < screenData.Height)
		float L_22;
		L_22 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_8), NULL);
		float L_23;
		L_23 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_8), NULL);
		float L_24 = ((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___lastLowerRightHeight_16;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_25 = ___screenData1;
		float L_26 = L_25.___Height_1;
		if ((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_22, L_23)), L_24))) > ((float)L_26))))
		{
			goto IL_00b2;
		}
	}
	{
		float L_27;
		L_27 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_8), NULL);
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_28 = ___screenData1;
		float L_29 = L_28.___Height_1;
		G_B4_0 = ((((float)L_27) < ((float)L_29))? 1 : 0);
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B4_0 = 0;
	}

IL_00b3:
	{
		V_9 = (bool)G_B4_0;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		// topRightRows++;
		int32_t L_31 = ((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topRightRows_18;
		((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topRightRows_18 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// yPos = windowMargin.top;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_32 = (&__this->___windowMargin_5);
		float L_33 = L_32->___top_0;
		V_1 = L_33;
		// xPos -= (maxWidth + elementSpacing);
		float L_34 = V_0;
		float L_35 = V_2;
		float L_36 = __this->___elementSpacing_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_34, ((float)il2cpp_codegen_add(L_35, L_36))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_7;
		float L_38 = V_0;
		float L_39 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_40;
		L_40 = MonitoringGUIDrawer_U3CDrawUpperRightU3Eg__ElementRectU7C23_0_m417777F193560B7F5C5F1032905F11794C61CAAA(__this, (&V_6), L_37, L_38, L_39, NULL);
		V_8 = L_40;
	}

IL_00f2:
	{
		// GUI.DrawTexture(elementRect, _backgroundTexture, ScaleMode.StretchToFill);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = __this->____backgroundTexture_14;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898(L_41, L_42, 0, NULL);
		// GUI.Label(textRect, displayString);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_43 = V_6;
		String_t* L_44 = V_5;
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_43, L_44, NULL);
		// yPos += elementRect.height + elementSpacing;
		float L_45 = V_1;
		float L_46;
		L_46 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_8), NULL);
		float L_47 = __this->___elementSpacing_4;
		V_1 = ((float)il2cpp_codegen_add(L_45, ((float)il2cpp_codegen_add(L_46, L_47))));
		// for (var i = 0; i < _unitsUpperRight.Count; i++)
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0121:
	{
		// for (var i = 0; i < _unitsUpperRight.Count; i++)
		int32_t L_49 = V_3;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_50 = __this->____unitsUpperRight_10;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_inline(L_50, List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_49) < ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_10;
		if (L_52)
		{
			goto IL_0027;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawLowerRight(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawLowerRight_m539587C2FEA225085FFBA7685E152E3247130384 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D ___ctx0, ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B ___screenData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* V_5 = NULL;
	String_t* V_6 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// var xPos = screenData.Width;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_0 = ___screenData1;
		float L_1 = L_0.___Width_0;
		V_0 = L_1;
		// var yPos = screenData.Height - windowMargin.bot;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_2 = ___screenData1;
		float L_3 = L_2.___Height_1;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_4 = (&__this->___windowMargin_5);
		float L_5 = L_4->___bot_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_3, L_5));
		// var maxWidth = 0f;
		V_2 = (0.0f);
		// var maxHeight = 0f;
		V_3 = (0.0f);
		// for (var i = _unitsLowerRight.Count - 1; i >= 0; i--)
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_6 = __this->____unitsLowerRight_12;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_inline(L_6, List_1_get_Count_m13855E292568982A0C8E8A69E4EA744FB01110B6_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0185;
	}

IL_003b:
	{
		// var guiElement = _unitsLowerRight[i];
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_8 = __this->____unitsLowerRight_12;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_10;
		L_10 = List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E(L_8, L_9, List_1_get_Item_m48DFD675C5B098AB7F71B40F1F0571FC078A3F3E_RuntimeMethod_var);
		V_5 = L_10;
		// var displayString = guiElement.Content;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_11 = V_5;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GUIElement_get_Content_mEE3A12D1DDEAF36D385C7A420ECB2C50ADC5CA49_inline(L_11, NULL);
		V_6 = L_12;
		// _content.text = displayString;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_13 = __this->____content_13;
		String_t* L_14 = V_6;
		NullCheck(L_13);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_13, L_14, NULL);
		// var textRect = new Rect();
		il2cpp_codegen_initobj((&V_7), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// var textDimensions = ctx.style.CalcSize(_content);
		Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D L_15 = ___ctx0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_16 = L_15.___style_0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_17 = __this->____content_13;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_16, L_17, NULL);
		V_8 = L_18;
		// var elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_8;
		float L_20 = V_0;
		float L_21 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		L_22 = MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C24_0_mF1A347FE3EE3DAD981F2DC0843FDCFF1E703313F(__this, (&V_7), L_19, L_20, L_21, NULL);
		V_9 = L_22;
		// maxWidth = Mathf.Max(maxWidth, elementRect.width);
		float L_23 = V_2;
		float L_24;
		L_24 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_9), NULL);
		float L_25;
		L_25 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_23, L_24, NULL);
		V_2 = L_25;
		// if (topRightRows > 1 && screenData.Height - yPos > screenData.HalfHeight)
		int32_t L_26 = ((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topRightRows_18;
		if ((((int32_t)L_26) <= ((int32_t)1)))
		{
			goto IL_00b3;
		}
	}
	{
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_27 = ___screenData1;
		float L_28 = L_27.___Height_1;
		float L_29 = V_1;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_30 = ___screenData1;
		float L_31 = L_30.___HalfHeight_2;
		G_B4_0 = ((((float)((float)il2cpp_codegen_subtract(L_28, L_29))) > ((float)L_31))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B4_0 = 0;
	}

IL_00b4:
	{
		V_10 = (bool)G_B4_0;
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00f0;
		}
	}
	{
		// yPos = screenData.Height - windowMargin.bot;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_33 = ___screenData1;
		float L_34 = L_33.___Height_1;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_35 = (&__this->___windowMargin_5);
		float L_36 = L_35->___bot_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_34, L_36));
		// xPos -= maxWidth + elementSpacing;
		float L_37 = V_0;
		float L_38 = V_2;
		float L_39 = __this->___elementSpacing_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_37, ((float)il2cpp_codegen_add(L_38, L_39))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_8;
		float L_41 = V_0;
		float L_42 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_43;
		L_43 = MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C24_0_mF1A347FE3EE3DAD981F2DC0843FDCFF1E703313F(__this, (&V_7), L_40, L_41, L_42, NULL);
		V_9 = L_43;
		goto IL_0145;
	}

IL_00f0:
	{
		// else if (topRightRows == 1 && screenData.Height - yPos > screenData.Height)
		int32_t L_44 = ((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___topRightRows_18;
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_010a;
		}
	}
	{
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_45 = ___screenData1;
		float L_46 = L_45.___Height_1;
		float L_47 = V_1;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_48 = ___screenData1;
		float L_49 = L_48.___Height_1;
		G_B9_0 = ((((float)((float)il2cpp_codegen_subtract(L_46, L_47))) > ((float)L_49))? 1 : 0);
		goto IL_010b;
	}

IL_010a:
	{
		G_B9_0 = 0;
	}

IL_010b:
	{
		V_11 = (bool)G_B9_0;
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_0145;
		}
	}
	{
		// yPos = screenData.Height - windowMargin.bot;
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_51 = ___screenData1;
		float L_52 = L_51.___Height_1;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_53 = (&__this->___windowMargin_5);
		float L_54 = L_53->___bot_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_52, L_54));
		// xPos -= maxWidth + elementSpacing;
		float L_55 = V_0;
		float L_56 = V_2;
		float L_57 = __this->___elementSpacing_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_55, ((float)il2cpp_codegen_add(L_56, L_57))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_8;
		float L_59 = V_0;
		float L_60 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_61;
		L_61 = MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C24_0_mF1A347FE3EE3DAD981F2DC0843FDCFF1E703313F(__this, (&V_7), L_58, L_59, L_60, NULL);
		V_9 = L_61;
	}

IL_0145:
	{
		// GUI.DrawTexture(elementRect, _backgroundTexture, ScaleMode.StretchToFill);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_62 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_63 = __this->____backgroundTexture_14;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898(L_62, L_63, 0, NULL);
		// GUI.Label(textRect, displayString);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_64 = V_7;
		String_t* L_65 = V_6;
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_64, L_65, NULL);
		// yPos -= elementRect.height + elementSpacing;
		float L_66 = V_1;
		float L_67;
		L_67 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_9), NULL);
		float L_68 = __this->___elementSpacing_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_66, ((float)il2cpp_codegen_add(L_67, L_68))));
		// maxHeight = Mathf.Max(screenData.Height - yPos, maxHeight);
		ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B L_69 = ___screenData1;
		float L_70 = L_69.___Height_1;
		float L_71 = V_1;
		float L_72 = V_3;
		float L_73;
		L_73 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_subtract(L_70, L_71)), L_72, NULL);
		V_3 = L_73;
		// for (var i = _unitsLowerRight.Count - 1; i >= 0; i--)
		int32_t L_74 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_74, 1));
	}

IL_0185:
	{
		// for (var i = _unitsLowerRight.Count - 1; i >= 0; i--)
		int32_t L_75 = V_4;
		V_12 = (bool)((((int32_t)((((int32_t)L_75) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_12;
		if (L_76)
		{
			goto IL_003b;
		}
	}
	{
		// lastLowerRightHeight = maxHeight;
		float L_77 = V_3;
		((MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19_il2cpp_TypeInfo_var))->___lastLowerRightHeight_16 = L_77;
		// }
		return;
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitoringGUIDrawer_IsVisible_mC58AC5A4E967EFDED379989D097CA53BA6592416 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return enabled;
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::ShowMonitoringUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_ShowMonitoringUI_m3DF0D059B495DFD3EBDA4718851F31D41C81C4CC (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, const RuntimeMethod* method) 
{
	{
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::HideMonitoringUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_HideMonitoringUI_m582C60E2136545957A43679257433AFC94F7646A (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitDisposed(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitDisposed_m552A64C60A6515B46182DF8F2B0EDC9F0A7E51AF (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) 
{
	{
		// OnUnitDisposedInternal(unit);
		RuntimeObject* L_0 = ___unit0;
		MonitoringGUIDrawer_OnUnitDisposedInternal_mC75E066FA5B86539B0EB6C8A518D83662CE8FE11_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitCreated(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitCreated_mD205A9C330ECE6BDEDA83F29B7421E827C002E3D (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) 
{
	{
		// OnUnitCreatedInternal(unit);
		RuntimeObject* L_0 = ___unit0;
		MonitoringGUIDrawer_OnUnitCreatedInternal_m3CBABA2C76BF44D905B312C4B88B28E100803710_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitCreatedInternal(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitCreatedInternal_m3CBABA2C76BF44D905B312C4B88B28E100803710 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (unit.Profile.FormatData.Position)
		RuntimeObject* L_0 = ___unit0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* L_2;
		L_2 = InterfaceFuncInvoker0< FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* >::Invoke(7 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FormatData_get_Position_m17C0CAD89794FB67433837EE872D5E7A8955384C_inline(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_007c;
	}

IL_002c:
	{
		// _unitsUpperLeft.Add(new GUIElement(unit));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_6 = __this->____unitsUpperLeft_9;
		RuntimeObject* L_7 = ___unit0;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_8 = (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*)il2cpp_codegen_object_new(GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31(L_8, L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline(L_6, L_8, List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		// break;
		goto IL_007c;
	}

IL_0040:
	{
		// _unitsUpperRight.Add(new GUIElement(unit));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_9 = __this->____unitsUpperRight_10;
		RuntimeObject* L_10 = ___unit0;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_11 = (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*)il2cpp_codegen_object_new(GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31(L_11, L_10, NULL);
		NullCheck(L_9);
		List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline(L_9, L_11, List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		// break;
		goto IL_007c;
	}

IL_0054:
	{
		// _unitsLowerLeft.Add(new GUIElement(unit));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_12 = __this->____unitsLowerLeft_11;
		RuntimeObject* L_13 = ___unit0;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_14 = (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*)il2cpp_codegen_object_new(GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31(L_14, L_13, NULL);
		NullCheck(L_12);
		List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline(L_12, L_14, List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		// break;
		goto IL_007c;
	}

IL_0068:
	{
		// _unitsLowerRight.Add(new GUIElement(unit));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_15 = __this->____unitsLowerRight_12;
		RuntimeObject* L_16 = ___unit0;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_17 = (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*)il2cpp_codegen_object_new(GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31(L_17, L_16, NULL);
		NullCheck(L_15);
		List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline(L_15, L_17, List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		// break;
		goto IL_007c;
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitDisposedInternal(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitDisposedInternal_mC75E066FA5B86539B0EB6C8A518D83662CE8FE11 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__0_m1108F04A1A6A074B24E7BF2CB65534E32E19DD8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__1_mBFF1C05F8E0ADE403F3F9894C2BD4E56A62F41FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__2_m26C777DFCB42342C42C4D64AECE7CC45C9D261D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__3_m2A85C29B7D208351169DEEB9960D82EF8CAC6281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_0 = (U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_m4196920AB71C35E768988689BA2001849519FF54(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_1 = V_0;
		RuntimeObject* L_2 = ___unit0;
		NullCheck(L_1);
		L_1->___unit_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___unit_0), (void*)L_2);
		// switch (unit.Profile.FormatData.Position)
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___unit_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* L_6;
		L_6 = InterfaceFuncInvoker0< FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* >::Invoke(7 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FormatData_get_Position_m17C0CAD89794FB67433837EE872D5E7A8955384C_inline(L_6, NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		V_1 = L_8;
		int32_t L_9 = V_1;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_008b;
			}
			case 3:
			{
				goto IL_00b0;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0041:
	{
		// _unitsUpperLeft.Remove(_unitsUpperLeft.First(element => element.ID == unit.ID));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_10 = __this->____unitsUpperLeft_9;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_11 = __this->____unitsUpperLeft_9;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_12 = V_0;
		Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* L_13 = (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*)il2cpp_codegen_object_new(Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__0_m1108F04A1A6A074B24E7BF2CB65534E32E19DD8F_RuntimeMethod_var), NULL);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_14;
		L_14 = Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F(L_11, L_13, Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_15;
		L_15 = List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD(L_10, L_14, List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		// break;
		goto IL_00d5;
	}

IL_0066:
	{
		// _unitsUpperRight.Remove(_unitsUpperRight.First(element => element.ID == unit.ID));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_16 = __this->____unitsUpperRight_10;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_17 = __this->____unitsUpperRight_10;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_18 = V_0;
		Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* L_19 = (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*)il2cpp_codegen_object_new(Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__1_mBFF1C05F8E0ADE403F3F9894C2BD4E56A62F41FB_RuntimeMethod_var), NULL);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_20;
		L_20 = Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F(L_17, L_19, Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		NullCheck(L_16);
		bool L_21;
		L_21 = List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD(L_16, L_20, List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		// break;
		goto IL_00d5;
	}

IL_008b:
	{
		// _unitsLowerLeft.Remove(_unitsLowerLeft.First(element => element.ID == unit.ID));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_22 = __this->____unitsLowerLeft_11;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_23 = __this->____unitsLowerLeft_11;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_24 = V_0;
		Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* L_25 = (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*)il2cpp_codegen_object_new(Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__2_m26C777DFCB42342C42C4D64AECE7CC45C9D261D2_RuntimeMethod_var), NULL);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_26;
		L_26 = Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F(L_23, L_25, Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		NullCheck(L_22);
		bool L_27;
		L_27 = List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD(L_22, L_26, List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		// break;
		goto IL_00d5;
	}

IL_00b0:
	{
		// _unitsLowerRight.Remove(_unitsLowerRight.First(element => element.ID == unit.ID));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_28 = __this->____unitsLowerRight_12;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_29 = __this->____unitsLowerRight_12;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_30 = V_0;
		Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* L_31 = (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*)il2cpp_codegen_object_new(Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__3_m2A85C29B7D208351169DEEB9960D82EF8CAC6281_RuntimeMethod_var), NULL);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_32;
		L_32 = Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F(L_29, L_31, Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		NullCheck(L_28);
		bool L_33;
		L_33 = List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD(L_28, L_32, List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer__ctor_mDA714527094A0A8F16AC447D08D73DA47580B0B7 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float elementSpacing = 2f;
		__this->___elementSpacing_4 = (2.0f);
		// [SerializeField] private Color backgroundColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___backgroundColor_7 = L_0;
		// [SerializeField] private bool logStartMessage = true;
		__this->___logStartMessage_8 = (bool)1;
		// private readonly List<GUIElement> _unitsUpperLeft = new List<GUIElement>(100);
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_1 = (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*)il2cpp_codegen_object_new(List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E(L_1, ((int32_t)100), List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E_RuntimeMethod_var);
		__this->____unitsUpperLeft_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unitsUpperLeft_9), (void*)L_1);
		// private readonly List<GUIElement> _unitsUpperRight = new List<GUIElement>(100);
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_2 = (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*)il2cpp_codegen_object_new(List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E(L_2, ((int32_t)100), List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E_RuntimeMethod_var);
		__this->____unitsUpperRight_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unitsUpperRight_10), (void*)L_2);
		// private readonly List<GUIElement> _unitsLowerLeft = new List<GUIElement>(100);
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_3 = (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*)il2cpp_codegen_object_new(List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E(L_3, ((int32_t)100), List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E_RuntimeMethod_var);
		__this->____unitsLowerLeft_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unitsLowerLeft_11), (void*)L_3);
		// private readonly List<GUIElement> _unitsLowerRight = new List<GUIElement>(100);
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_4 = (List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7*)il2cpp_codegen_object_new(List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E(L_4, ((int32_t)100), List_1__ctor_m7552602E7077BDDC4A2F571F46A11E3E40FF9F2E_RuntimeMethod_var);
		__this->____unitsLowerRight_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unitsLowerRight_12), (void*)L_4);
		// private readonly GUIContent _content = new GUIContent();
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_5 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_5, NULL);
		__this->____content_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____content_13), (void*)L_5);
		MonitoringUIController__ctor_mAB38647FEA6271BE85157597D1911F8A34160F68(__this, NULL);
		return;
	}
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawUpperLeft>g__ElementRect|21_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MonitoringGUIDrawer_U3CDrawUpperLeftU3Eg__ElementRectU7C21_0_mAB3B64799FB65CF52D3A10C4E64289469EF86857 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___textRect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// textRect.width = textDimensions.x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___textRect0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___textDimensions1;
		float L_2 = L_1.___x_0;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_0, L_2, NULL);
		// textRect.height = textDimensions.y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = ___textRect0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___textDimensions1;
		float L_5 = L_4.___y_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_3, L_5, NULL);
		// textRect.x = x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = ___textRect0;
		float L_7 = ___x2;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_6, L_7, NULL);
		// textRect.y = y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = ___textRect0;
		float L_9 = ___y3;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_8, L_9, NULL);
		// var elementRect = new Rect(textRect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_10 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_10);
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&V_0), L_11, NULL);
		// elementRect.height += elementPadding.top + elementPadding.bot;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_12 = (&V_0);
		float L_13;
		L_13 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_12, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_14 = (&__this->___elementPadding_6);
		float L_15 = L_14->___top_0;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_16 = (&__this->___elementPadding_6);
		float L_17 = L_16->___bot_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_12, ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_add(L_15, L_17)))), NULL);
		// elementRect.width += elementPadding.right + elementPadding.left;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_18, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_20 = (&__this->___elementPadding_6);
		float L_21 = L_20->___right_3;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_22 = (&__this->___elementPadding_6);
		float L_23 = L_22->___left_2;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_18, ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_add(L_21, L_23)))), NULL);
		// textRect.x += elementPadding.left;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_24 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = L_24;
		float L_26;
		L_26 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_25, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_27 = (&__this->___elementPadding_6);
		float L_28 = L_27->___left_2;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_25, ((float)il2cpp_codegen_add(L_26, L_28)), NULL);
		// textRect.y += elementPadding.top;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_29 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_30 = L_29;
		float L_31;
		L_31 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_30, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_32 = (&__this->___elementPadding_6);
		float L_33 = L_32->___top_0;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_30, ((float)il2cpp_codegen_add(L_31, L_33)), NULL);
		// return elementRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_34 = V_0;
		V_1 = L_34;
		goto IL_00bb;
	}

IL_00bb:
	{
		// }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35 = V_1;
		return L_35;
	}
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawLowerLeft>g__ElementRect|22_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C22_0_m4E3DF54162B62F9AED84BBD8A2EB0EFBA7C70995 (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___textRect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// textRect.width = textDimensions.x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___textRect0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___textDimensions1;
		float L_2 = L_1.___x_0;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_0, L_2, NULL);
		// textRect.height = textDimensions.y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = ___textRect0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___textDimensions1;
		float L_5 = L_4.___y_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_3, L_5, NULL);
		// textRect.x = x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = ___textRect0;
		float L_7 = ___x2;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_6, L_7, NULL);
		// textRect.y = y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = ___textRect0;
		float L_9 = ___y3;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_8, L_9, NULL);
		// var elementRect = new Rect(textRect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_10 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_10);
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&V_0), L_11, NULL);
		// elementRect.height += elementPadding.top + elementPadding.bot;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_12 = (&V_0);
		float L_13;
		L_13 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_12, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_14 = (&__this->___elementPadding_6);
		float L_15 = L_14->___top_0;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_16 = (&__this->___elementPadding_6);
		float L_17 = L_16->___bot_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_12, ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_add(L_15, L_17)))), NULL);
		// elementRect.width += elementPadding.right + elementPadding.left;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_18, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_20 = (&__this->___elementPadding_6);
		float L_21 = L_20->___right_3;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_22 = (&__this->___elementPadding_6);
		float L_23 = L_22->___left_2;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_18, ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_add(L_21, L_23)))), NULL);
		// textRect.x += elementPadding.left;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_24 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = L_24;
		float L_26;
		L_26 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_25, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_27 = (&__this->___elementPadding_6);
		float L_28 = L_27->___left_2;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_25, ((float)il2cpp_codegen_add(L_26, L_28)), NULL);
		// textRect.y += elementPadding.top;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_29 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_30 = L_29;
		float L_31;
		L_31 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_30, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_32 = (&__this->___elementPadding_6);
		float L_33 = L_32->___top_0;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_30, ((float)il2cpp_codegen_add(L_31, L_33)), NULL);
		// textRect.y -= elementRect.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_34 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_35 = L_34;
		float L_36;
		L_36 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_35, NULL);
		float L_37;
		L_37 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_35, ((float)il2cpp_codegen_subtract(L_36, L_37)), NULL);
		// elementRect.y -= elementRect.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_38 = (&V_0);
		float L_39;
		L_39 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_38, NULL);
		float L_40;
		L_40 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_38, ((float)il2cpp_codegen_subtract(L_39, L_40)), NULL);
		// return elementRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41 = V_0;
		V_1 = L_41;
		goto IL_00e6;
	}

IL_00e6:
	{
		// }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_42 = V_1;
		return L_42;
	}
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawUpperRight>g__ElementRect|23_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MonitoringGUIDrawer_U3CDrawUpperRightU3Eg__ElementRectU7C23_0_m417777F193560B7F5C5F1032905F11794C61CAAA (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___textRect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// textRect.width = textDimensions.x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___textRect0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___textDimensions1;
		float L_2 = L_1.___x_0;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_0, L_2, NULL);
		// textRect.height = textDimensions.y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = ___textRect0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___textDimensions1;
		float L_5 = L_4.___y_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_3, L_5, NULL);
		// textRect.x = x - (textRect.width + windowMargin.right + elementPadding.right);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = ___textRect0;
		float L_7 = ___x2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = ___textRect0;
		float L_9;
		L_9 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_8, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_10 = (&__this->___windowMargin_5);
		float L_11 = L_10->___right_3;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_12 = (&__this->___elementPadding_6);
		float L_13 = L_12->___right_3;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_6, ((float)il2cpp_codegen_subtract(L_7, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_9, L_11)), L_13)))), NULL);
		// textRect.y = y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_14 = ___textRect0;
		float L_15 = ___y3;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_14, L_15, NULL);
		// var elementRect = new Rect(textRect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_16);
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&V_0), L_17, NULL);
		// elementRect.height += elementPadding.top + elementPadding.bot;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_18, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_20 = (&__this->___elementPadding_6);
		float L_21 = L_20->___top_0;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_22 = (&__this->___elementPadding_6);
		float L_23 = L_22->___bot_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_18, ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_add(L_21, L_23)))), NULL);
		// elementRect.width += elementPadding.right + elementPadding.left;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_24 = (&V_0);
		float L_25;
		L_25 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_24, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_26 = (&__this->___elementPadding_6);
		float L_27 = L_26->___right_3;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_28 = (&__this->___elementPadding_6);
		float L_29 = L_28->___left_2;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_24, ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_add(L_27, L_29)))), NULL);
		// elementRect.x -= elementPadding.left;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_30 = (&V_0);
		float L_31;
		L_31 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_30, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_32 = (&__this->___elementPadding_6);
		float L_33 = L_32->___left_2;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_30, ((float)il2cpp_codegen_subtract(L_31, L_33)), NULL);
		// textRect.y += elementPadding.top;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_34 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_35 = L_34;
		float L_36;
		L_36 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_35, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_37 = (&__this->___elementPadding_6);
		float L_38 = L_37->___top_0;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_35, ((float)il2cpp_codegen_add(L_36, L_38)), NULL);
		// return elementRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_39 = V_0;
		V_1 = L_39;
		goto IL_00db;
	}

IL_00db:
	{
		// }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_40 = V_1;
		return L_40;
	}
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawLowerRight>g__ElementRect|24_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C24_0_mF1A347FE3EE3DAD981F2DC0843FDCFF1E703313F (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___textRect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// textRect.width = textDimensions.x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___textRect0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___textDimensions1;
		float L_2 = L_1.___x_0;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_0, L_2, NULL);
		// textRect.height = textDimensions.y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = ___textRect0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___textDimensions1;
		float L_5 = L_4.___y_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_3, L_5, NULL);
		// textRect.x = x - (textRect.width + windowMargin.right + elementPadding.right);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = ___textRect0;
		float L_7 = ___x2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = ___textRect0;
		float L_9;
		L_9 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_8, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_10 = (&__this->___windowMargin_5);
		float L_11 = L_10->___right_3;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_12 = (&__this->___elementPadding_6);
		float L_13 = L_12->___right_3;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_6, ((float)il2cpp_codegen_subtract(L_7, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_9, L_11)), L_13)))), NULL);
		// textRect.y = y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_14 = ___textRect0;
		float L_15 = ___y3;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_14, L_15, NULL);
		// var elementRect = new Rect(textRect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_16);
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&V_0), L_17, NULL);
		// elementRect.height += elementPadding.top + elementPadding.bot;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_18, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_20 = (&__this->___elementPadding_6);
		float L_21 = L_20->___top_0;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_22 = (&__this->___elementPadding_6);
		float L_23 = L_22->___bot_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_18, ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_add(L_21, L_23)))), NULL);
		// elementRect.width += elementPadding.right + elementPadding.left;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_24 = (&V_0);
		float L_25;
		L_25 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_24, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_26 = (&__this->___elementPadding_6);
		float L_27 = L_26->___right_3;
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_28 = (&__this->___elementPadding_6);
		float L_29 = L_28->___left_2;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_24, ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_add(L_27, L_29)))), NULL);
		// elementRect.x -= elementPadding.left;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_30 = (&V_0);
		float L_31;
		L_31 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_30, NULL);
		MarginOrPadding_t7F3C61A6BE3DF56D8253FDFCB344139D8483B3ED* L_32 = (&__this->___elementPadding_6);
		float L_33 = L_32->___left_2;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_30, ((float)il2cpp_codegen_subtract(L_31, L_33)), NULL);
		// textRect.y -= elementRect.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_34 = ___textRect0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_35 = L_34;
		float L_36;
		L_36 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_35, NULL);
		float L_37;
		L_37 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_35, ((float)il2cpp_codegen_subtract(L_36, L_37)), NULL);
		// elementRect.y -= elementRect.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_38 = (&V_0);
		float L_39;
		L_39 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_38, NULL);
		float L_40;
		L_40 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_38, ((float)il2cpp_codegen_subtract(L_39, L_40)), NULL);
		// return elementRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41 = V_0;
		V_1 = L_41;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_42 = V_1;
		return L_42;
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
// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIElement_get_ID_m7B31A86A6EBC9A7634908ED0139CB875E2A5EB9A (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) 
{
	{
		// public int ID { get; }
		int32_t L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIElement_get_Content_mEE3A12D1DDEAF36D385C7A420ECB2C50ADC5CA49 (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) 
{
	{
		// public string Content { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; private set; }
		String_t* L_0 = __this->___U3CContentU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::set_Content(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement_set_Content_mB58DBBD9E84C6B3A74D2D06DDCBC67309914348F (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Content { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CContentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_FormatData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* GUIElement_get_FormatData_m8CBACAAB3B39B186ECFE909F507C80E89F625C51 (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) 
{
	{
		// public FormatData FormatData { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; }
		FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* L_0 = __this->___U3CFormatDataU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::.ctor(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31 (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIElement_Update_m0606176AE0E71A1C38965EB5ADC8E0D7DC5590F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GUIElement(IMonitorUnit unit)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// unit.ValueUpdated += Update;
		RuntimeObject* L_0 = ___unit0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)GUIElement_Update_m0606176AE0E71A1C38965EB5ADC8E0D7DC5590F4_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* >::Invoke(7 /* System.Void Baracuda.Monitoring.Interface.IMonitorUnit::add_ValueUpdated(System.Action`1<System.String>) */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_0, L_1);
		// FormatData = unit.Profile.FormatData;
		RuntimeObject* L_2 = ___unit0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* L_4;
		L_4 = InterfaceFuncInvoker0< FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* >::Invoke(7 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var, L_3);
		__this->___U3CFormatDataU3Ek__BackingField_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormatDataU3Ek__BackingField_2), (void*)L_4);
		// ID = unit.ID;
		RuntimeObject* L_5 = ___unit0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_ID() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_5);
		__this->___U3CIDU3Ek__BackingField_0 = L_6;
		// _targetName = unit.Profile.UnitTargetType.Name;
		RuntimeObject* L_7 = ___unit0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = InterfaceFuncInvoker0< Type_t* >::Invoke(4 /* System.Type Baracuda.Monitoring.Interface.IMonitorProfile::get_UnitTargetType() */, IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		__this->____targetName_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetName_4), (void*)L_10);
		// _size = Mathf.Max(FormatData.FontSize, 14);
		FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* L_11;
		L_11 = GUIElement_get_FormatData_m8CBACAAB3B39B186ECFE909F507C80E89F625C51_inline(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = FormatData_get_FontSize_mE43E4485BF45C54FD1BC17325547D312AD5628FF_inline(L_11, NULL);
		int32_t L_13;
		L_13 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_12, ((int32_t)14), NULL);
		__this->____size_3 = L_13;
		// Update(unit.GetStateFormatted);
		RuntimeObject* L_14 = ___unit0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Baracuda.Monitoring.Interface.IMonitorUnit::get_GetStateFormatted() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_14);
		GUIElement_Update_m0606176AE0E71A1C38965EB5ADC8E0D7DC5590F4(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement_Update_m0606176AE0E71A1C38965EB5ADC8E0D7DC5590F4 (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral732E6DFF6A0E543BD26C1936B7AA5AA61DB76591);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3969D2C3B753EEA6472EAA0FAFE56A82655C9C);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// var sb = StringBuilderPool.Get();
		il2cpp_codegen_runtime_class_init_inline(StringBuilderPool_tA41CDEE5FCFAC22144CAD973E47FB8873B27DF44_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0;
		L_0 = StringBuilderPool_Get_mE2FD5487D8243565C5AB4A9CA5975E2B9614A40D(NULL);
		V_0 = L_0;
		// sb.Append("<size=");
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral732E6DFF6A0E543BD26C1936B7AA5AA61DB76591, NULL);
		// sb.Append(_size);
		StringBuilder_t* L_3 = V_0;
		int32_t L_4 = __this->____size_3;
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_3, L_4, NULL);
		// sb.Append('>');
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)62), NULL);
		// sb.Append(text);
		StringBuilder_t* L_8 = V_0;
		String_t* L_9 = ___text0;
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_9, NULL);
		// sb.Append("</size>");
		StringBuilder_t* L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteralEB3969D2C3B753EEA6472EAA0FAFE56A82655C9C, NULL);
		// Content = StringBuilderPool.Release(sb);
		StringBuilder_t* L_13 = V_0;
		String_t* L_14;
		L_14 = StringBuilderPool_Release_m4139C0B52C9E249F699F5C45B2AB0A56E263DC97(L_13, NULL);
		GUIElement_set_Content_mB58DBBD9E84C6B3A74D2D06DDCBC67309914348F_inline(__this, L_14, NULL);
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
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenData__ctor_m0F637473AEA06691357FC93D52ADFC6BC9FC7772 (ScreenData_tA29927735C6A0E6F228E533BB09769DF28A7858B* __this, float ___width0, float ___height1, const RuntimeMethod* method) 
{
	{
		// this.Width = width;
		float L_0 = ___width0;
		__this->___Width_0 = L_0;
		// this.Height = height;
		float L_1 = ___height1;
		__this->___Height_1 = L_1;
		// HalfHeight = height * .5f;
		float L_2 = ___height1;
		__this->___HalfHeight_2 = ((float)il2cpp_codegen_multiply(L_2, (0.5f)));
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


// Conversion methods for marshalling of: Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
IL2CPP_EXTERN_C void Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshal_pinvoke(const Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D& unmarshaled, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___style_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'style' of type 'Context': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___style_0Exception, NULL);
}
IL2CPP_EXTERN_C void Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshal_pinvoke_back(const Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshaled_pinvoke& marshaled, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D& unmarshaled)
{
	Exception_t* ___style_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'style' of type 'Context': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___style_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
IL2CPP_EXTERN_C void Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshal_pinvoke_cleanup(Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
IL2CPP_EXTERN_C void Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshal_com(const Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D& unmarshaled, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshaled_com& marshaled)
{
	Exception_t* ___style_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'style' of type 'Context': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___style_0Exception, NULL);
}
IL2CPP_EXTERN_C void Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshal_com_back(const Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshaled_com& marshaled, Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D& unmarshaled)
{
	Exception_t* ___style_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'style' of type 'Context': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___style_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
IL2CPP_EXTERN_C void Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshal_com_cleanup(Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D_marshaled_com& marshaled)
{
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_m45580D311F3E8382DE8C351CFAB54C93C9D4270A (Context_t0E21F2C9EF4F8936ED6F40EA5333DA24E68F391D* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, const RuntimeMethod* method) 
{
	{
		// this.style = style;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___style0;
		__this->___style_0 = L_0;
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
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m4196920AB71C35E768988689BA2001849519FF54 (U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0::<OnUnitDisposedInternal>b__0(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__0_m1108F04A1A6A074B24E7BF2CB65534E32E19DD8F (U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* __this, GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unitsUpperLeft.Remove(_unitsUpperLeft.First(element => element.ID == unit.ID));
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_0 = ___element0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GUIElement_get_ID_m7B31A86A6EBC9A7634908ED0139CB875E2A5EB9A_inline(L_0, NULL);
		RuntimeObject* L_2 = __this->___unit_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_ID() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0::<OnUnitDisposedInternal>b__1(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__1_mBFF1C05F8E0ADE403F3F9894C2BD4E56A62F41FB (U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* __this, GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unitsUpperRight.Remove(_unitsUpperRight.First(element => element.ID == unit.ID));
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_0 = ___element0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GUIElement_get_ID_m7B31A86A6EBC9A7634908ED0139CB875E2A5EB9A_inline(L_0, NULL);
		RuntimeObject* L_2 = __this->___unit_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_ID() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0::<OnUnitDisposedInternal>b__2(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__2_m26C777DFCB42342C42C4D64AECE7CC45C9D261D2 (U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* __this, GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unitsLowerLeft.Remove(_unitsLowerLeft.First(element => element.ID == unit.ID));
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_0 = ___element0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GUIElement_get_ID_m7B31A86A6EBC9A7634908ED0139CB875E2A5EB9A_inline(L_0, NULL);
		RuntimeObject* L_2 = __this->___unit_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_ID() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass31_0::<OnUnitDisposedInternal>b__3(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__3_m2A85C29B7D208351169DEEB9960D82EF8CAC6281 (U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* __this, GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unitsLowerRight.Remove(_unitsLowerRight.First(element => element.ID == unit.ID));
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_0 = ___element0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GUIElement_get_ID_m7B31A86A6EBC9A7634908ED0139CB875E2A5EB9A_inline(L_0, NULL);
		RuntimeObject* L_2 = __this->___unit_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_ID() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GUIElement_get_Content_mEE3A12D1DDEAF36D385C7A420ECB2C50ADC5CA49_inline (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) 
{
	{
		// public string Content { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; private set; }
		String_t* L_0 = __this->___U3CContentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitDisposedInternal_mC75E066FA5B86539B0EB6C8A518D83662CE8FE11_inline (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__0_m1108F04A1A6A074B24E7BF2CB65534E32E19DD8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__1_mBFF1C05F8E0ADE403F3F9894C2BD4E56A62F41FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__2_m26C777DFCB42342C42C4D64AECE7CC45C9D261D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__3_m2A85C29B7D208351169DEEB9960D82EF8CAC6281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_0 = (U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_m4196920AB71C35E768988689BA2001849519FF54(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_1 = V_0;
		RuntimeObject* L_2 = ___unit0;
		NullCheck(L_1);
		L_1->___unit_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___unit_0), (void*)L_2);
		// switch (unit.Profile.FormatData.Position)
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___unit_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* L_6;
		L_6 = InterfaceFuncInvoker0< FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* >::Invoke(7 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FormatData_get_Position_m17C0CAD89794FB67433837EE872D5E7A8955384C_inline(L_6, NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		V_1 = L_8;
		int32_t L_9 = V_1;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_008b;
			}
			case 3:
			{
				goto IL_00b0;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0041:
	{
		// _unitsUpperLeft.Remove(_unitsUpperLeft.First(element => element.ID == unit.ID));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_10 = __this->____unitsUpperLeft_9;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_11 = __this->____unitsUpperLeft_9;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_12 = V_0;
		Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* L_13 = (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*)il2cpp_codegen_object_new(Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__0_m1108F04A1A6A074B24E7BF2CB65534E32E19DD8F_RuntimeMethod_var), NULL);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_14;
		L_14 = Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F(L_11, L_13, Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_15;
		L_15 = List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD(L_10, L_14, List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		// break;
		goto IL_00d5;
	}

IL_0066:
	{
		// _unitsUpperRight.Remove(_unitsUpperRight.First(element => element.ID == unit.ID));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_16 = __this->____unitsUpperRight_10;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_17 = __this->____unitsUpperRight_10;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_18 = V_0;
		Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* L_19 = (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*)il2cpp_codegen_object_new(Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__1_mBFF1C05F8E0ADE403F3F9894C2BD4E56A62F41FB_RuntimeMethod_var), NULL);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_20;
		L_20 = Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F(L_17, L_19, Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		NullCheck(L_16);
		bool L_21;
		L_21 = List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD(L_16, L_20, List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		// break;
		goto IL_00d5;
	}

IL_008b:
	{
		// _unitsLowerLeft.Remove(_unitsLowerLeft.First(element => element.ID == unit.ID));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_22 = __this->____unitsLowerLeft_11;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_23 = __this->____unitsLowerLeft_11;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_24 = V_0;
		Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* L_25 = (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*)il2cpp_codegen_object_new(Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__2_m26C777DFCB42342C42C4D64AECE7CC45C9D261D2_RuntimeMethod_var), NULL);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_26;
		L_26 = Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F(L_23, L_25, Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		NullCheck(L_22);
		bool L_27;
		L_27 = List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD(L_22, L_26, List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		// break;
		goto IL_00d5;
	}

IL_00b0:
	{
		// _unitsLowerRight.Remove(_unitsLowerRight.First(element => element.ID == unit.ID));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_28 = __this->____unitsLowerRight_12;
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_29 = __this->____unitsLowerRight_12;
		U3CU3Ec__DisplayClass31_0_t11005A330C42685E4C1F1F9D2E2C7FB7D7D7E615* L_30 = V_0;
		Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A* L_31 = (Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A*)il2cpp_codegen_object_new(Func_2_tDC784934481FF24FE635BDDA5D9BFA1BB1B0023A_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Func_2__ctor_mFA505BC03E556C9D1C2D45D555968592C953D59E(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnUnitDisposedInternalU3Eb__3_m2A85C29B7D208351169DEEB9960D82EF8CAC6281_RuntimeMethod_var), NULL);
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_32;
		L_32 = Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F(L_29, L_31, Enumerable_First_TisGUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_m627290A701317BC91CA03EE42D770BBEE16DB91F_RuntimeMethod_var);
		NullCheck(L_28);
		bool L_33;
		L_33 = List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD(L_28, L_32, List_1_Remove_mEE803F3BAEE467194F719609690B40A3911265BD_RuntimeMethod_var);
		// break;
		goto IL_00d5;
	}

IL_00d5:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitCreatedInternal_m3CBABA2C76BF44D905B312C4B88B28E100803710_inline (MonitoringGUIDrawer_t17774813E210CAB6792ECB1D14798617BB041A19* __this, RuntimeObject* ___unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (unit.Profile.FormatData.Position)
		RuntimeObject* L_0 = ___unit0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_t9A6AECA5CA920F14CCE36D1BA1839933407CC9F1_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* L_2;
		L_2 = InterfaceFuncInvoker0< FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* >::Invoke(7 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t7BAC522B99FD66A47D7286C2A3FAA62CB0925DBD_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FormatData_get_Position_m17C0CAD89794FB67433837EE872D5E7A8955384C_inline(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_007c;
	}

IL_002c:
	{
		// _unitsUpperLeft.Add(new GUIElement(unit));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_6 = __this->____unitsUpperLeft_9;
		RuntimeObject* L_7 = ___unit0;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_8 = (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*)il2cpp_codegen_object_new(GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31(L_8, L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline(L_6, L_8, List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		// break;
		goto IL_007c;
	}

IL_0040:
	{
		// _unitsUpperRight.Add(new GUIElement(unit));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_9 = __this->____unitsUpperRight_10;
		RuntimeObject* L_10 = ___unit0;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_11 = (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*)il2cpp_codegen_object_new(GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31(L_11, L_10, NULL);
		NullCheck(L_9);
		List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline(L_9, L_11, List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		// break;
		goto IL_007c;
	}

IL_0054:
	{
		// _unitsLowerLeft.Add(new GUIElement(unit));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_12 = __this->____unitsLowerLeft_11;
		RuntimeObject* L_13 = ___unit0;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_14 = (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*)il2cpp_codegen_object_new(GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31(L_14, L_13, NULL);
		NullCheck(L_12);
		List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline(L_12, L_14, List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		// break;
		goto IL_007c;
	}

IL_0068:
	{
		// _unitsLowerRight.Add(new GUIElement(unit));
		List_1_tC2F223F705125922CDDC62A541395DC709CBFAA7* L_15 = __this->____unitsLowerRight_12;
		RuntimeObject* L_16 = ___unit0;
		GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* L_17 = (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20*)il2cpp_codegen_object_new(GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		GUIElement__ctor_mB61A06FA7D0636B37DD573A474A01C1DE302FD31(L_17, L_16, NULL);
		NullCheck(L_15);
		List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_inline(L_15, L_17, List_1_Add_mF6216EC56B43B975CC93519AAC51A082B492FC40_RuntimeMethod_var);
		// break;
		goto IL_007c;
	}

IL_007c:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormatData_get_Position_m17C0CAD89794FB67433837EE872D5E7A8955384C_inline (FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* __this, const RuntimeMethod* method) 
{
	{
		// public UIPosition Position { get; }
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* GUIElement_get_FormatData_m8CBACAAB3B39B186ECFE909F507C80E89F625C51_inline (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) 
{
	{
		// public FormatData FormatData { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; }
		FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* L_0 = __this->___U3CFormatDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormatData_get_FontSize_mE43E4485BF45C54FD1BC17325547D312AD5628FF_inline (FormatData_t63368669FEB5106F0FB2D630CF7C2E2D7F07982D* __this, const RuntimeMethod* method) 
{
	{
		// public int FontSize { get; }
		int32_t L_0 = __this->___U3CFontSizeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIElement_set_Content_mB58DBBD9E84C6B3A74D2D06DDCBC67309914348F_inline (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Content { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CContentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GUIElement_get_ID_m7B31A86A6EBC9A7634908ED0139CB875E2A5EB9A_inline (GUIElement_t7BED1507601B0CC80F66EA34359E670672F2AB20* __this, const RuntimeMethod* method) 
{
	{
		// public int ID { get; }
		int32_t L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
