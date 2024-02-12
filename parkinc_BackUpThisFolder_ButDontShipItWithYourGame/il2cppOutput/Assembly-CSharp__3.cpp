#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>
struct Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC;
// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData>
struct Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B;
// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.SimpleStringSave>
struct Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<ParkInc.ProductData,System.Boolean>
struct Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7;
// System.Func`2<ParkInc.TabData,System.Boolean>
struct Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92;
// System.Collections.Generic.IEqualityComparer`1<ParkInc.TabData>
struct IEqualityComparer_1_tAAA23462F809004480704DD6B7557BF96A50BC97;
// System.Collections.Generic.IEqualityComparer`1<ParkInc.TabType>
struct IEqualityComparer_1_t5690FF72DC02ECCB4A9A3A808B138E3BC1121EEB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>
struct KeyCollection_tED2558E42642D86AD2F4D4FFE90107483DFFA41C;
// System.Collections.Generic.Dictionary`2/KeyCollection<ParkInc.TabType,ParkInc.ProductData>
struct KeyCollection_tD63B52939717FE9389AF51C80C45EC30290AB4C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<ParkInc.TabType,ParkInc.SimpleStringSave>
struct KeyCollection_t32626528AD3E22DDA95D3D51ED3D649537203681;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<ParkInc.ProductData>
struct List_1_tE15795D510CCC09213E58C79A3217B030D8847A3;
// System.Collections.Generic.List`1<ParkInc.SlicedFilledImage>
struct List_1_t4994224F05B717C0C29F9B561517E409D6AB4F87;
// System.Collections.Generic.List`1<ParkInc.TabType>
struct List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150;
// ParkInc.ToggleType`1<System.Boolean>
struct ToggleType_1_t6BEAF4C54405661D90C41529BB355B9E4A206AF7;
// ParkInc.ToggleType`1<System.Double>
struct ToggleType_1_t37D000307CF4F86B606C4E1196513AB133867C08;
// ParkInc.ToggleType`1<System.Int32>
struct ToggleType_1_t530F11BFD45F8E8683A1C57C7840B0BD6698BD8C;
// ParkInc.ToggleType`1<System.Int64>
struct ToggleType_1_t0ED2B1279224959B82D82F949D1E409EF50D3AAF;
// ParkInc.ToggleType`1<System.Object>
struct ToggleType_1_t20DEDA68082E946D28F3CF8CF73CC9C6AAB26E29;
// ParkInc.ToggleType`1<System.Single>
struct ToggleType_1_t3DDC4CF26DC1B4572D555FC54758F227C00EF516;
// ParkInc.ToggleType`1<System.String>
struct ToggleType_1_tEC058EF685C957C704D48C6D2D8360C8D575C9DD;
// ParkInc.TweenCaseFunction`2<System.Object,System.Single>
struct TweenCaseFunction_2_t4264B9E4DA9E78AA3F3FB8578737EE35F1D2E1A3;
// ParkInc.TweenCaseFunction`2<ParkInc.SlicedFilledImage,System.Single>
struct TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>
struct ValueCollection_t2C00297BDB8962745FAC4F66E794CCFD97FCB7D7;
// System.Collections.Generic.Dictionary`2/ValueCollection<ParkInc.TabType,ParkInc.ProductData>
struct ValueCollection_t898458240FBC27BBA60779AC9343A7FDB61D4668;
// System.Collections.Generic.Dictionary`2/ValueCollection<ParkInc.TabType,ParkInc.SimpleStringSave>
struct ValueCollection_t78765F5E613E5E358F87376EF7CBF7F41C4ABEE5;
// System.Collections.Generic.Dictionary`2/Entry<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>[]
struct EntryU5BU5D_t3E30542AD47C5025A88DC047863BC5E1E246FD64;
// System.Collections.Generic.Dictionary`2/Entry<ParkInc.TabType,ParkInc.ProductData>[]
struct EntryU5BU5D_tE3F0849A065887FD2DF2C864745D975A058C517B;
// System.Collections.Generic.Dictionary`2/Entry<ParkInc.TabType,ParkInc.SimpleStringSave>[]
struct EntryU5BU5D_tBE8EE22F92DD6DF815966D726970E1029FB5F58F;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ParkInc.ProductData[]
struct ProductDataU5BU5D_t2202F738F9C295F8D39D1A4A247F90F74992A261;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// ParkInc.TabData[]
struct TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B;
// ParkInc.TabType[]
struct TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ParkInc.ColorDebugSettings/ColorInfo[]
struct ColorInfoU5BU5D_tDC15EB08B4033CBF6FE131EF5F153BF31CD21DC1;
// ParkInc.UI.Particle.UIParticleSettings/BurstSettings[]
struct BurstSettingsU5BU5D_t682EEDA0322844DCF84AE413A4BC38BB5FFE70FD;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// ParkInc.BaseAttribute
struct BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC;
// ParkInc.BaseButton
struct BaseButton_t3C9B7FDE4EF9F296DB59D41FCE9E69743D955570;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// ParkInc.BoolToggle
struct BoolToggle_t4639BD02293D850C3902459A10A6BC80EF936214;
// ParkInc.BoxGroupAttribute
struct BoxGroupAttribute_t4D7B63F6C58BA1D9A97317AB7FA1B5D85AB7C00B;
// ParkInc.ButtonAttribute
struct ButtonAttribute_t3C73A96658AEDD21A31E32CE634F83B872D64B0A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// ParkInc.ColorDebugSettings
struct ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116;
// ParkInc.ColoredText
struct ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ParkInc.ComponentAttribute
struct ComponentAttribute_t5C7655B73B1A3DD0D2B6B838A0DE1E734AC6D853;
// ParkInc.ConstArrayAttribute
struct ConstArrayAttribute_t568248F11E1BC52A9B4AFD7AEEBEFE3AFC6F475F;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// ParkInc.DelayedObjectDisabler
struct DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// ParkInc.DisableFieldAttribute
struct DisableFieldAttribute_t0321AFC58EED1F5B89E5A5AD049010E9D908E8BE;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// ParkInc.DoubleToggle
struct DoubleToggle_t3027AF4F4F53227884EFEF59049D82A8EC7479A4;
// ParkInc.DrawConditionAttribute
struct DrawConditionAttribute_t8AC434A34FECC0E3EA98B1836D229B60DA4EB941;
// ParkInc.DrawReferenceAttribute
struct DrawReferenceAttribute_tF78BE3B6D155D8EF93B55C12C6A8450C25758B76;
// ParkInc.DrawerAttribute
struct DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB;
// ParkInc.DropdownAttribute
struct DropdownAttribute_tB63E7AAF4AA2ABD0BF1E6230F213BEFEEF532C4C;
// ParkInc.DummyStorePreview3D
struct DummyStorePreview3D_tE98987F452EBC084F0814134A365D4392B784E12;
// ParkInc.DuoColor
struct DuoColor_tCBE92DCFCFF67294C2451DCE125D3E505969DBAE;
// ParkInc.DuoDouble
struct DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F;
// ParkInc.DuoFloat
struct DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC;
// ParkInc.DuoInt
struct DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8;
// ParkInc.DuoVector3
struct DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138;
// ParkInc.EnumArrayAttribute
struct EnumArrayAttribute_t1EBCB87EB0168300A8963B2E29006BBCC362BBC5;
// ParkInc.EnumFlagsAttribute
struct EnumFlagsAttribute_t63363A9BD575278FF95E4EFAD6EDB6A8249A1489;
// ParkInc.ErrorAttribute
struct ErrorAttribute_t098D18A4F7A1B21129C95DEF308EA8702C67BEEE;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// ParkInc.ExtendedEditorAttribute
struct ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4;
// ParkInc.FPSCounter
struct FPSCounter_t8094E8DF96260D8DD08D60D92F709E67C8C6AD9C;
// ParkInc.FieldDrawerAttribute
struct FieldDrawerAttribute_tC21CEF9AE3CD33EE5ECD2E3FD1F6F9A6CA8039D4;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// ParkInc.FloatToggle
struct FloatToggle_tF57E2E1961B265BDA7DAF35DAAD81B7D4F85B4E1;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ParkInc.GameObjectTagAttribute
struct GameObjectTagAttribute_t185A2832CAA41A02DC832A47E4C6540A502EA5DD;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// ParkInc.GroupAttribute
struct GroupAttribute_t4E15700F70A4FB17BBDD232ADC9E4CBDB05BB044;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// ParkInc.HelpBoxAttribute
struct HelpBoxAttribute_t6C50379C95472EE6EDBF51C1A13F9D9CB3B6F4BB;
// ParkInc.HideIfAttribute
struct HideIfAttribute_t6383871523AC7874D1E933BDCF31D85947784C17;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ParkInc.InfoAttribute
struct InfoAttribute_t12E59A9230F947962E8B24D439A575BE6AC9180B;
// ParkInc.InfoBoxAttribute
struct InfoBoxAttribute_t6D9B9C4793D6C2390F2887FEAC858E15A81F7041;
// ParkInc.IntToggle
struct IntToggle_tC79B84667E3357F678041CC35A70ADC81E7B2CBC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// ParkInc.JuicyBounce
struct JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400;
// ParkInc.LineSpacerAttribute
struct LineSpacerAttribute_t49F131D316D78F856DB584424FBC02A679C6CE83;
// ParkInc.LongToggle
struct LongToggle_t358850C0EAA1F3421CFB53A24460B53C3E2D5A97;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// ParkInc.MaxValueAttribute
struct MaxValueAttribute_t35AD945E9505B311B466F6A02B4154972FF2AF7B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// ParkInc.MetaAttribute
struct MetaAttribute_t432CD49DEA174BF28E4E4C37607F93AEF766D213;
// System.Reflection.MethodBase
struct MethodBase_t;
// ParkInc.MethodDrawerAttribute
struct MethodDrawerAttribute_t97BA7D70DD1F8547EFB635D3DAF88BD7C216008A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ParkInc.MinMaxSliderAttribute
struct MinMaxSliderAttribute_t611AF2B776BD290594F8DF77CFD23B77FE1714D6;
// ParkInc.MinValueAttribute
struct MinValueAttribute_t1CF8236BD11E3DFF120BFC471048C3A5ED7224FD;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ParkInc.NativePropertyDrawerAttribute
struct NativePropertyDrawerAttribute_t3089D0938245960CBAE86E124AD5FD98DA664D47;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ParkInc.OnValueChangedAttribute
struct OnValueChangedAttribute_t95BC64F2AF576221726F5B20F3D9AB13351AC411;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// ParkInc.PopupAttribute
struct PopupAttribute_tFAA3EBB40D07B5CE8E425349C5F4C55278EC77C9;
// ParkInc.PrefabAttribute
struct PrefabAttribute_tF9C162E8D4512E0538509796403A6428EDA9C245;
// ParkInc.ProductData
struct ProductData_t9DFCF708A233671E57D85C46E606139BF1035670;
// ParkInc.ProgressBarAttribute
struct ProgressBarAttribute_t04F5930F46A47C79C9B8CABC77CD55F854070752;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// ParkInc.PropertyDrawConditionAttribute
struct PropertyDrawConditionAttribute_tE9C8E680938CD582F165D427033D46C22C83E23B;
// ParkInc.PropertyDrawerAttribute
struct PropertyDrawerAttribute_tDD1FB6B33E0437D6BF29D9A4DAAC5E5BC8DE8EF4;
// ParkInc.PropertyGrouperAttribute
struct PropertyGrouperAttribute_t2EE388C30793C7AA65B8EC634FD23E3FB0D8F068;
// ParkInc.PropertyMetaAttribute
struct PropertyMetaAttribute_t42B1B6FEBDB2566333AC12F92E4E7AC2758D75E7;
// ParkInc.PropertyValidatorAttribute
struct PropertyValidatorAttribute_t7AC158CFE73AE81BFA7B6093F612127CAB97F974;
// ParkInc.RagdollHelper
struct RagdollHelper_t51108D971D18C0BB71FAB5E27F7945786C5F1D40;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// ParkInc.ReadOnlyFieldAttribute
struct ReadOnlyFieldAttribute_t49A779D1B530E4E1D4F8A111A9236575B99215A0;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// ParkInc.ReorderableListAttribute
struct ReorderableListAttribute_t808C0397718D813764BFCF211AA0A80EF10554C7;
// ParkInc.RequireColorAttribute
struct RequireColorAttribute_t728A8F04DCFE7F34B634C861B151C2656C9A1BC8;
// ParkInc.RequiredAttribute
struct RequiredAttribute_tB0CB5CBB1E2FFCFAC64FA60BFAAB564E38B3CB02;
// ParkInc.ResizableTextAreaAttribute
struct ResizableTextAreaAttribute_t7B6E97128CE5EE84564F3AD048CD34927812FB12;
// ParkInc.ResourcesFileAttribute
struct ResourcesFileAttribute_t3A959A69C0F15D4038494D6C5E943DA810BCA4D3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ParkInc.ScenesAttribute
struct ScenesAttribute_t9F41121B7E1970EDAD9A825F8F16C1EBA021E9A0;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// ParkInc.ShowAssetPreviewAttribute
struct ShowAssetPreviewAttribute_tC9FFFAB7EECD2C407AB57A6023000D8D7E241928;
// ParkInc.ShowIfAttribute
struct ShowIfAttribute_tDA72BC560D9112071D8B36BC69811FF714B792C3;
// ParkInc.ShowNativePropertyAttribute
struct ShowNativePropertyAttribute_tD3B331C315B6799EF8F751587C5A964A5EB4E3CF;
// ParkInc.ShowNonSerializedFieldAttribute
struct ShowNonSerializedFieldAttribute_t0ED9D8744B3D65BCBA764A48BD7E5A50CFF499DE;
// ParkInc.SimpleStringSave
struct SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E;
// ParkInc.SlicedFilledImage
struct SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533;
// ParkInc.SliderAttribute
struct SliderAttribute_t7E074005A634B35A3E6074C9131E9E4742811966;
// ParkInc.SmartArrayAttribute
struct SmartArrayAttribute_tE17A8538CE2DA516F7CE99B45B78584585D07868;
// ParkInc.SmartToggle
struct SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// ParkInc.StoreController
struct StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60;
// ParkInc.StoreDatabase
struct StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D;
// ParkInc.StorePreview3D
struct StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ParkInc.StringToggle
struct StringToggle_tBBD598A9F6DC79F1B265826E78C7D242435B7C9B;
// ParkInc.TabData
struct TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// ParkInc.TweenCase
struct TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C;
// System.Type
struct Type_t;
// ParkInc.UI.Particle.UIParticleSettings
struct UIParticleSettings_t47590AB23263E9610A814CFA1A3FCEF6479D91D9;
// ParkInc.UXButton
struct UXButton_t3BA3EE848462AAA58258D81B65A1329C8D2573D2;
// ParkInc.UXButtonAnimator
struct UXButtonAnimator_t81326400BAEC530FD41ACE4A1C966C1799F77CD5;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// ParkInc.ValidateInputAttribute
struct ValidateInputAttribute_t04B1A1C5F84105B5E90F5EF0ACA02BC4621E57F4;
// ParkInc.ValidatorAttribute
struct ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// ParkInc.WarningAttribute
struct WarningAttribute_t6DAA0BE86B26DF8B9E5F91C647442DAB9621160C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// ParkInc.ColorDebugSettings/ColorInfo
struct ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A;
// ParkInc.DelayedObjectDisabler/<DelayedCall>d__2
struct U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131;
// ParkInc.Ease/IEasingFunction
struct IEasingFunction_t14AB3AFDB0A5BA56EBC8BAE9AF9C3519E05141CF;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// ParkInc.JuicyBounce/TweenCaseJuicyBounce
struct TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ParkInc.ProductData/StoreItemSave
struct StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill
struct TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824;
// ParkInc.SmartToggle/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59;
// ParkInc.SmartToggle/ToggleEvents
struct ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500;
// ParkInc.StoreController/<>c
struct U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC;
// ParkInc.StoreController/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979;
// ParkInc.StoreController/ProductDelegate
struct ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7;
// ParkInc.TabData/SimpleTabDelegate
struct SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F;
// ParkInc.Tween/TweenCallback
struct TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950;
// ParkInc.UI.Particle.UIParticleSettings/BurstSettings
struct BurstSettings_t4F86D7BD252A351B504F569544E4C77A93735244;
// ParkInc.ValidatorAttribute/ValidateResult
struct ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE15795D510CCC09213E58C79A3217B030D8847A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhysicsHelper_t95699AA580518184FBDE754F9880F04CA3BCAFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02C75CE360C4176D26C274C3DDCC7CC4E566BB66;
IL2CPP_EXTERN_C String_t* _stringLiteral032C85EC6693079572984FFDB9D5CA69845985E7;
IL2CPP_EXTERN_C String_t* _stringLiteral041AB57A6C173676A6BE0427A74832D5AE0E8D12;
IL2CPP_EXTERN_C String_t* _stringLiteral086C504C47273EF07233933225DBBAF9F1CBD69A;
IL2CPP_EXTERN_C String_t* _stringLiteral0BF55F9ECBF088B7DD4C43096FF915DEDC8E180D;
IL2CPP_EXTERN_C String_t* _stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral1925FA5108B30F8BDA1B28AF1A9E45B8685C7BE4;
IL2CPP_EXTERN_C String_t* _stringLiteral1A14B4C5055315D498BAFCF05A2573B8D1CB3817;
IL2CPP_EXTERN_C String_t* _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E;
IL2CPP_EXTERN_C String_t* _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306;
IL2CPP_EXTERN_C String_t* _stringLiteral35A9D3A4BD14A6BAB9DCD07EC651BD1727F42473;
IL2CPP_EXTERN_C String_t* _stringLiteral3B44F01CF668249D62CAA78C9D7BC01CD3EE1056;
IL2CPP_EXTERN_C String_t* _stringLiteral434B69C11DEE55DE2DB6751A2A95618A67F02F72;
IL2CPP_EXTERN_C String_t* _stringLiteral47F6D5411E119CBD507B62E2B2DD61E933739E5A;
IL2CPP_EXTERN_C String_t* _stringLiteral68BEAB68A19AC8B400B53DC38BC5AF6BABF1B0A1;
IL2CPP_EXTERN_C String_t* _stringLiteral68C986B16252159FB40AB5B1BA78ED4D3764D33A;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral786D7B9ABEABE8160318F22124FD74BA126263AF;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0F74B596CC9D2DDF300DA4EFF02C6C830107ED;
IL2CPP_EXTERN_C String_t* _stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E;
IL2CPP_EXTERN_C String_t* _stringLiteral86953B386E543DC5AFB5CC6DFBD735EF7DAE369D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral93051D2B3AB89CCDF3670A4363191CF372DD6918;
IL2CPP_EXTERN_C String_t* _stringLiteral94D92116D5FEFD4DDDBAE49BEC55B18F8EFE8B25;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9769DA0FCF65652A6F8C5E4E914CCA27F612AC98;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralA342AC5A2217515B23003A73E2AE1358C513AD95;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB75AF09DF83698FA4375837CF2045FF447F61B5A;
IL2CPP_EXTERN_C String_t* _stringLiteralBF54BCA5EFFA7D5270F422DDA0C936A0C3ED83CF;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD273A80A6C2271CA3BB8A672E235CE8EA0927F8B;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D52FC864FBAB18F17165F5F2F678AD081BCEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97;
IL2CPP_EXTERN_C String_t* _stringLiteralFB274C8E7F9D623843DDC71F8547A81A715E1E87;
IL2CPP_EXTERN_C String_t* _stringLiteralFB877F63B416A7EDF90D586527E3CB767BFAA82B;
IL2CPP_EXTERN_C String_t* _stringLiteralFD16E9E8993E97FC0E6AD2A057F7C60A7A76E26F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreExtensions_FindRandomOrder_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m9C099E4B41E0D2F833848F46706C783446BF38D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreExtensions_FindRandomOrder_TisTabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A_m8C4B554FE7908AFECC776C98E3F912A1144EC1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreExtensions_GetRandomItem_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m461BABFCFFE7A8DD4693BF41DD064CB2E8E73D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6F23478E1D62F0D7CEE666AE781D3E5EB9DD19CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m915CC2E86505D71F7C30307494ABD466DCEB4457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m956A92976F688FB87E2FE7272F0E48E51C940C5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC82DEDE2E51E2F7978AAAECAB3AF969A581E95AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1B4225B8A89735E8DD1F30A5A5D25916740BD367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m323E231C450B1631FEFB96F3316ED55206AD7C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m49CCD5C77DAE287C747C68506D5BB0D9891CAC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5A6862C78E16047C1E2861A620BA4B3CC4BCE8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m8BFE12BE499EE57A2A895AC06407C349344B6FC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0928A60DE1160996A4E9E0438A4A5A6E8D66D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuoDouble_op_Division_m4C9AED9AC79615F50DF2CBA84874C438358C8562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuoFloat_op_Division_m707A6DF7EE5AF54AE8C4B3CDEA011205C7C464F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuoFloat_op_Division_mB9BAD20BBFB4D00E513BDD75C4D0137F1691FB8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuoInt_op_Division_m33B6DA6C936783CF65BED044FE2DD906FE10272B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuoInt_op_Division_m7243E3BA42E8E8CA4334A8743338A03D6061E359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuoVector3_op_Division_m560536698D8B848061B622B0A8750E4BF7D8403A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m70B209FEFBEBE96DE7205EBAE5FD18C22623E2C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD5F9C84D5156D88CEEB1D1D832A3C771BFE4DFE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m14CA2A68C5EC3537371957AF5BD557E332C962D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD12069B3B11B911BD7DCE64CB3CCB1791851D36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m12D283D090370D64DF121CE93D7E65B3DA4B4CC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE5066524301BAB19C8ACF09E3CE30F920D5AABD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JuicyBounce_U3CBounceU3Eb__13_0_mF11D0D2097F22473132FF455B65F377CD4EDDC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m8209D0EE74FEAD2D309F2DB57678940A7AE99DFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6B6F8DAA75289F3F59FAE51BB5F7CD50CD6DE932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBBB5CD5B86E07C00B9A3C99A8FAB9788EB3A2E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m086898480D6DE87967E39BFDC9EA53EB53239EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m576B34BECD580885AC789CC6E79BDAB1871DA27D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m57C900003F89E4B9FAD22CD484BB6C4BE9839CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC06EB1B5A5DBD544B112648F0794D0FBCC27C975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7CFE20B0CE54E2B965FB1D9DAF43E77D54F759C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9FD5DFD7E3D6DF105ACFC9B677DBF2FBA8B4CFBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveController_GetSaveObject_TisSimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E_mFC01EEEDA26A3CA73D0D1DFE63C808AE83ABAC47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveController_GetSaveObject_TisStoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625_m0E0D2CC6CFBA5A3D01BDEA81B8125AB2ABE1641B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToggleType_1__ctor_m5D96B4FF0867EE314280FC5DAEB928063ACCE2D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToggleType_1__ctor_m6791A2029001ACFE0B70025B389CA7D82243E3A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToggleType_1__ctor_m7A47D8EE7C6C51F3B9C60904DB296321CE0961B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToggleType_1__ctor_mE8003251E51F5BC5172BAD53E53BE23355721712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToggleType_1__ctor_mF8F24C9DCC2790875556722DE960BBAD313FC00A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToggleType_1__ctor_mFD467319680B9353AEF7F2C542F938B64E663B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenCaseFunction_2__ctor_mF91B0388D7A6389DEABEC2C00770E714144E9E24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedCallU3Ed__2_System_Collections_IEnumerator_Reset_m9BD20E4EFD5C1FE86ED33F1C75FF891ACFD67098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetRandomLockedProductU3Eb__33_1_m34018FEA54B54CEDE66262EC6B3FFEE3AE092766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CSetStateU3Eb__0_m9573E387D1992750D9587DAAD5435E10D97978CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CGetRandomLockedProductU3Eb__0_m8D63525BB346AE04C323862B8F6EE0809B95C7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UXButtonAnimator_U3COnClickU3Eb__1_0_mDC791A51DC526AB154BCFEC9EAC2887707FE4F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UXButton_U3COnClickU3Eb__1_0_mADBD1386FD11C48B16BF221149AC37AB008F4264_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ProductDataU5BU5D_t2202F738F9C295F8D39D1A4A247F90F74992A261;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B;
struct TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct ColorInfoU5BU5D_tDC15EB08B4033CBF6FE131EF5F153BF31CD21DC1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>
struct Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3E30542AD47C5025A88DC047863BC5E1E246FD64* ____entries_1;
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
	KeyCollection_tED2558E42642D86AD2F4D4FFE90107483DFFA41C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2C00297BDB8962745FAC4F66E794CCFD97FCB7D7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData>
struct Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE3F0849A065887FD2DF2C864745D975A058C517B* ____entries_1;
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
	KeyCollection_tD63B52939717FE9389AF51C80C45EC30290AB4C6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t898458240FBC27BBA60779AC9343A7FDB61D4668* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.SimpleStringSave>
struct Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBE8EE22F92DD6DF815966D726970E1029FB5F58F* ____entries_1;
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
	KeyCollection_t32626528AD3E22DDA95D3D51ED3D649537203681* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t78765F5E613E5E358F87376EF7CBF7F41C4ABEE5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>
struct KeyCollection_tED2558E42642D86AD2F4D4FFE90107483DFFA41C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<ParkInc.ProductData>
struct List_1_tE15795D510CCC09213E58C79A3217B030D8847A3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ProductDataU5BU5D_t2202F738F9C295F8D39D1A4A247F90F74992A261* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<ParkInc.TabType>
struct List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// ParkInc.ToggleType`1<System.Boolean>
struct ToggleType_1_t6BEAF4C54405661D90C41529BB355B9E4A206AF7  : public RuntimeObject
{
	// System.Boolean ParkInc.ToggleType`1::enabled
	bool ___enabled_0;
	// T ParkInc.ToggleType`1::newValue
	bool ___newValue_1;
};

// ParkInc.ToggleType`1<System.Double>
struct ToggleType_1_t37D000307CF4F86B606C4E1196513AB133867C08  : public RuntimeObject
{
	// System.Boolean ParkInc.ToggleType`1::enabled
	bool ___enabled_0;
	// T ParkInc.ToggleType`1::newValue
	double ___newValue_1;
};

// ParkInc.ToggleType`1<System.Int32>
struct ToggleType_1_t530F11BFD45F8E8683A1C57C7840B0BD6698BD8C  : public RuntimeObject
{
	// System.Boolean ParkInc.ToggleType`1::enabled
	bool ___enabled_0;
	// T ParkInc.ToggleType`1::newValue
	int32_t ___newValue_1;
};

// ParkInc.ToggleType`1<System.Int64>
struct ToggleType_1_t0ED2B1279224959B82D82F949D1E409EF50D3AAF  : public RuntimeObject
{
	// System.Boolean ParkInc.ToggleType`1::enabled
	bool ___enabled_0;
	// T ParkInc.ToggleType`1::newValue
	int64_t ___newValue_1;
};

// ParkInc.ToggleType`1<System.Single>
struct ToggleType_1_t3DDC4CF26DC1B4572D555FC54758F227C00EF516  : public RuntimeObject
{
	// System.Boolean ParkInc.ToggleType`1::enabled
	bool ___enabled_0;
	// T ParkInc.ToggleType`1::newValue
	float ___newValue_1;
};

// ParkInc.ToggleType`1<System.String>
struct ToggleType_1_tEC058EF685C957C704D48C6D2D8360C8D575C9DD  : public RuntimeObject
{
	// System.Boolean ParkInc.ToggleType`1::enabled
	bool ___enabled_0;
	// T ParkInc.ToggleType`1::newValue
	String_t* ___newValue_1;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// ParkInc.Bezier
struct Bezier_tE1087BCAD6261C994B1D7B00DCD6041FCC54B065  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// ParkInc.ColorDebug
struct ColorDebug_t2479B839A6C045A2497C7782969D1B05F80B5A05  : public RuntimeObject
{
};

// ParkInc.ColoredText
struct ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3  : public RuntimeObject
{
	// System.String ParkInc.ColoredText::text
	String_t* ___text_0;
};

// ParkInc.CoreExtensions
struct CoreExtensions_tA7D7FE5AE200B07EF7F548DEA3F941EB28D8099D  : public RuntimeObject
{
};

// ParkInc.DuoDouble
struct DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F  : public RuntimeObject
{
	// System.Double ParkInc.DuoDouble::firstValue
	double ___firstValue_0;
	// System.Double ParkInc.DuoDouble::secondValue
	double ___secondValue_1;
};

// ParkInc.DuoFloat
struct DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC  : public RuntimeObject
{
	// System.Single ParkInc.DuoFloat::firstValue
	float ___firstValue_0;
	// System.Single ParkInc.DuoFloat::secondValue
	float ___secondValue_1;
};

// ParkInc.DuoInt
struct DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8  : public RuntimeObject
{
	// System.Int32 ParkInc.DuoInt::firstValue
	int32_t ___firstValue_0;
	// System.Int32 ParkInc.DuoInt::secondValue
	int32_t ___secondValue_1;
};

// ParkInc.EnumUtils
struct EnumUtils_t7ECA1493E32FA789E7D8ED2D7D9C047DC31D8826  : public RuntimeObject
{
};

// ParkInc.IOUtils
struct IOUtils_t8D87F5CCB70F2BB867DE625A1A2C7B129282B14D  : public RuntimeObject
{
};

// ParkInc.JuicyBounce
struct JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400  : public RuntimeObject
{
	// UnityEngine.Transform ParkInc.JuicyBounce::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// System.Single ParkInc.JuicyBounce::bounceDuration
	float ___bounceDuration_1;
	// System.Single ParkInc.JuicyBounce::maxBounceDepth
	float ___maxBounceDepth_2;
	// UnityEngine.AnimationCurve ParkInc.JuicyBounce::bounceScaleX
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___bounceScaleX_3;
	// UnityEngine.AnimationCurve ParkInc.JuicyBounce::bounceScaleY
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___bounceScaleY_4;
	// UnityEngine.AnimationCurve ParkInc.JuicyBounce::bounceScaleZ
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___bounceScaleZ_5;
	// System.Single ParkInc.JuicyBounce::bounceValue
	float ___bounceValue_6;
	// System.Single ParkInc.JuicyBounce::bounceDepth
	float ___bounceDepth_7;
	// ParkInc.TweenCase ParkInc.JuicyBounce::bounceCase
	TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* ___bounceCase_8;
	// System.Boolean ParkInc.JuicyBounce::isActive
	bool ___isActive_9;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// ParkInc.PhysicsHelper
struct PhysicsHelper_t95699AA580518184FBDE754F9880F04CA3BCAFCF  : public RuntimeObject
{
};

// ParkInc.ProductData
struct ProductData_t9DFCF708A233671E57D85C46E606139BF1035670  : public RuntimeObject
{
	// System.String ParkInc.ProductData::uniqueId
	String_t* ___uniqueId_0;
	// System.Boolean ParkInc.ProductData::isExpanded
	bool ___isExpanded_1;
	// System.Int32 ParkInc.ProductData::id
	int32_t ___id_2;
	// System.Int32 ParkInc.ProductData::tabId
	int32_t ___tabId_3;
	// System.Boolean ParkInc.ProductData::isDummy
	bool ___isDummy_4;
	// System.String ParkInc.ProductData::name
	String_t* ___name_5;
	// UnityEngine.Sprite ParkInc.ProductData::openedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___openedSprite_6;
	// UnityEngine.Sprite ParkInc.ProductData::lockedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___lockedSprite_7;
	// UnityEngine.Sprite ParkInc.ProductData::preview2DSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___preview2DSprite_8;
	// UnityEngine.GameObject ParkInc.ProductData::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_9;
	// UnityEngine.GameObject ParkInc.ProductData::previewPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___previewPrefab_10;
	// ParkInc.ProductData/PurchaseType ParkInc.ProductData::purchaseType
	int32_t ___purchaseType_11;
	// ParkInc.Currency/Type ParkInc.ProductData::currency
	int32_t ___currency_12;
	// System.Int32 ParkInc.ProductData::cost
	int32_t ___cost_13;
	// ParkInc.ProductData/StoreItemSave ParkInc.ProductData::save
	StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* ___save_14;
};

// ParkInc.RagdollHelper
struct RagdollHelper_t51108D971D18C0BB71FAB5E27F7945786C5F1D40  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// ParkInc.RuntimeEditorUtils
struct RuntimeEditorUtils_t3D6ABC90B90318DA44064BA3E4A8A0A971B882B9  : public RuntimeObject
{
};

// ParkInc.SimpleStringSave
struct SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E  : public RuntimeObject
{
	// System.String ParkInc.SimpleStringSave::value
	String_t* ___value_0;
};

// ParkInc.SlicedFilledImageExtensions
struct SlicedFilledImageExtensions_tF91BFC93693885321C3141E83C77E0B359524A17  : public RuntimeObject
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

// ParkInc.TextureExtensions
struct TextureExtensions_tCA7C45D5F00520727EFD777B6423315DE707D3EB  : public RuntimeObject
{
};

// ParkInc.TweenCase
struct TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C  : public RuntimeObject
{
	// System.Int32 ParkInc.TweenCase::activeId
	int32_t ___activeId_0;
	// ParkInc.TweenType ParkInc.TweenCase::tweenType
	int32_t ___tweenType_1;
	// System.Single ParkInc.TweenCase::duration
	float ___duration_2;
	// System.Single ParkInc.TweenCase::delay
	float ___delay_3;
	// System.Single ParkInc.TweenCase::currentDelay
	float ___currentDelay_4;
	// System.Single ParkInc.TweenCase::state
	float ___state_5;
	// System.Boolean ParkInc.TweenCase::isActive
	bool ___isActive_6;
	// System.Boolean ParkInc.TweenCase::isPaused
	bool ___isPaused_7;
	// System.Boolean ParkInc.TweenCase::isUnscaled
	bool ___isUnscaled_8;
	// System.Boolean ParkInc.TweenCase::isCompleted
	bool ___isCompleted_9;
	// System.Boolean ParkInc.TweenCase::isKilling
	bool ___isKilling_10;
	// ParkInc.Ease/IEasingFunction ParkInc.TweenCase::easeFunction
	RuntimeObject* ___easeFunction_11;
	// ParkInc.Tween/TweenCallback ParkInc.TweenCase::onCompleteCallback
	TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* ___onCompleteCallback_12;
	// UnityEngine.GameObject ParkInc.TweenCase::parentObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parentObject_13;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// ParkInc.CoreExtensions/ExtendedRandom
struct ExtendedRandom_tDA16FD16510F4979DD9201D4CC4ABABB6C9A29C8  : public RuntimeObject
{
};

// ParkInc.DelayedObjectDisabler/<DelayedCall>d__2
struct U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131  : public RuntimeObject
{
	// System.Int32 ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ParkInc.DelayedObjectDisabler ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::<>4__this
	DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* ___U3CU3E4__this_2;
};

// ParkInc.ProductData/StoreItemSave
struct StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625  : public RuntimeObject
{
	// System.Boolean ParkInc.ProductData/StoreItemSave::isUnlocked
	bool ___isUnlocked_0;
	// System.Int32 ParkInc.ProductData/StoreItemSave::rewardedVideoWatchedAmount
	int32_t ___rewardedVideoWatchedAmount_1;
};

// ParkInc.SlicedFilledImage/SetPropertyUtility
struct SetPropertyUtility_tEAE982AE7136E46D5A6611257C98BFECB73FB9A7  : public RuntimeObject
{
};

// ParkInc.SmartToggle/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59  : public RuntimeObject
{
	// System.Boolean ParkInc.SmartToggle/<>c__DisplayClass24_0::state
	bool ___state_0;
	// ParkInc.SmartToggle ParkInc.SmartToggle/<>c__DisplayClass24_0::<>4__this
	SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* ___U3CU3E4__this_1;
};

// ParkInc.StoreController/<>c
struct U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC  : public RuntimeObject
{
};

// ParkInc.StoreController/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979  : public RuntimeObject
{
	// ParkInc.ProductData ParkInc.StoreController/<>c__DisplayClass33_0::lockedProduct
	ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___lockedProduct_0;
};

// ParkInc.UI.Particle.UIParticleSettings/BurstSettings
struct BurstSettings_t4F86D7BD252A351B504F569544E4C77A93735244  : public RuntimeObject
{
	// System.Int32 ParkInc.UI.Particle.UIParticleSettings/BurstSettings::count
	int32_t ___count_0;
	// System.Int32 ParkInc.UI.Particle.UIParticleSettings/BurstSettings::loopsCount
	int32_t ___loopsCount_1;
	// System.Single ParkInc.UI.Particle.UIParticleSettings/BurstSettings::interval
	float ___interval_2;
	// System.Single ParkInc.UI.Particle.UIParticleSettings/BurstSettings::delay
	float ___delay_3;
};

// ParkInc.ValidatorAttribute/ValidateResult
struct ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6  : public RuntimeObject
{
	// ParkInc.ValidatorAttribute/ValidateType ParkInc.ValidatorAttribute/ValidateResult::validateType
	int32_t ___validateType_0;
	// System.String ParkInc.ValidatorAttribute/ValidateResult::message
	String_t* ___message_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<ParkInc.ProductData>
struct Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>
struct Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ____currentKey_3;
};

// ParkInc.TweenCaseFunction`2<ParkInc.SlicedFilledImage,System.Single>
struct TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3  : public TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C
{
	// TBaseObject ParkInc.TweenCaseFunction`2::tweenObject
	SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* ___tweenObject_14;
	// TValue ParkInc.TweenCaseFunction`2::startValue
	float ___startValue_15;
	// TValue ParkInc.TweenCaseFunction`2::resultValue
	float ___resultValue_16;
};

// ParkInc.BaseAttribute
struct BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type ParkInc.BaseAttribute::targetAttributeType
	Type_t* ___targetAttributeType_0;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// ParkInc.BoolToggle
struct BoolToggle_t4639BD02293D850C3902459A10A6BC80EF936214  : public ToggleType_1_t6BEAF4C54405661D90C41529BB355B9E4A206AF7
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// ParkInc.DoubleToggle
struct DoubleToggle_t3027AF4F4F53227884EFEF59049D82A8EC7479A4  : public ToggleType_1_t37D000307CF4F86B606C4E1196513AB133867C08
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// ParkInc.ExtendedEditorAttribute
struct ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// ParkInc.FloatToggle
struct FloatToggle_tF57E2E1961B265BDA7DAF35DAAD81B7D4F85B4E1  : public ToggleType_1_t3DDC4CF26DC1B4572D555FC54758F227C00EF516
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
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

// ParkInc.IntToggle
struct IntToggle_tC79B84667E3357F678041CC35A70ADC81E7B2CBC  : public ToggleType_1_t530F11BFD45F8E8683A1C57C7840B0BD6698BD8C
{
};

// ParkInc.LongToggle
struct LongToggle_t358850C0EAA1F3421CFB53A24460B53C3E2D5A97  : public ToggleType_1_t0ED2B1279224959B82D82F949D1E409EF50D3AAF
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// ParkInc.RequireColorAttribute
struct RequireColorAttribute_t728A8F04DCFE7F34B634C861B151C2656C9A1BC8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String ParkInc.RequireColorAttribute::name
	String_t* ___name_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// ParkInc.StringToggle
struct StringToggle_tBBD598A9F6DC79F1B265826E78C7D242435B7C9B  : public ToggleType_1_tEC058EF685C957C704D48C6D2D8360C8D575C9DD
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// Unity.Mathematics.int2
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	// System.Int32 Unity.Mathematics.int2::x
	int32_t ___x_0;
	// System.Int32 Unity.Mathematics.int2::y
	int32_t ___y_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13
struct __StaticArrayInitTypeSizeU3D13_t693DFDC6D53D32FD58AF46A75C65A83BC92A3325 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D13_t693DFDC6D53D32FD58AF46A75C65A83BC92A3325__padding[13];
	};
};

// ParkInc.JuicyBounce/TweenCaseJuicyBounce
struct TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E  : public TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C
{
	// System.Single ParkInc.JuicyBounce/TweenCaseJuicyBounce::startValue
	float ___startValue_14;
	// System.Single ParkInc.JuicyBounce/TweenCaseJuicyBounce::resultValue
	float ___resultValue_15;
	// ParkInc.JuicyBounce ParkInc.JuicyBounce/TweenCaseJuicyBounce::juicyBounce
	JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* ___juicyBounce_16;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// ParkInc.ConstArrayAttribute
struct ConstArrayAttribute_t568248F11E1BC52A9B4AFD7AEEBEFE3AFC6F475F  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String[] ParkInc.ConstArrayAttribute::labelValues
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___labelValues_0;
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

// ParkInc.DisableFieldAttribute
struct DisableFieldAttribute_t0321AFC58EED1F5B89E5A5AD049010E9D908E8BE  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// ParkInc.DrawConditionAttribute
struct DrawConditionAttribute_t8AC434A34FECC0E3EA98B1836D229B60DA4EB941  : public ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4
{
};

// ParkInc.DrawReferenceAttribute
struct DrawReferenceAttribute_tF78BE3B6D155D8EF93B55C12C6A8450C25758B76  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// ParkInc.DrawerAttribute
struct DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB  : public ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4
{
};

// ParkInc.DuoColor
struct DuoColor_tCBE92DCFCFF67294C2451DCE125D3E505969DBAE  : public RuntimeObject
{
	// UnityEngine.Color32 ParkInc.DuoColor::firstValue
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___firstValue_0;
	// UnityEngine.Color32 ParkInc.DuoColor::secondValue
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___secondValue_1;
};

// ParkInc.DuoVector3
struct DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138  : public RuntimeObject
{
	// UnityEngine.Vector3 ParkInc.DuoVector3::firstValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___firstValue_0;
	// UnityEngine.Vector3 ParkInc.DuoVector3::secondValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___secondValue_1;
};

// ParkInc.EnumArrayAttribute
struct EnumArrayAttribute_t1EBCB87EB0168300A8963B2E29006BBCC362BBC5  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Type ParkInc.EnumArrayAttribute::selectedEnum
	Type_t* ___selectedEnum_0;
};

// ParkInc.EnumFlagsAttribute
struct EnumFlagsAttribute_t63363A9BD575278FF95E4EFAD6EDB6A8249A1489  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
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

// ParkInc.FieldDrawerAttribute
struct FieldDrawerAttribute_tC21CEF9AE3CD33EE5ECD2E3FD1F6F9A6CA8039D4  : public BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC
{
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// ParkInc.GroupAttribute
struct GroupAttribute_t4E15700F70A4FB17BBDD232ADC9E4CBDB05BB044  : public ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4
{
	// System.String ParkInc.GroupAttribute::name
	String_t* ___name_0;
};

// ParkInc.HelpBoxAttribute
struct HelpBoxAttribute_t6C50379C95472EE6EDBF51C1A13F9D9CB3B6F4BB  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String ParkInc.HelpBoxAttribute::message
	String_t* ___message_0;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// ParkInc.LineSpacerAttribute
struct LineSpacerAttribute_t49F131D316D78F856DB584424FBC02A679C6CE83  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String ParkInc.LineSpacerAttribute::title
	String_t* ___title_0;
	// System.Int32 ParkInc.LineSpacerAttribute::height
	int32_t ___height_1;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

// ParkInc.MetaAttribute
struct MetaAttribute_t432CD49DEA174BF28E4E4C37607F93AEF766D213  : public ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4
{
	// System.Int32 ParkInc.MetaAttribute::order
	int32_t ___order_0;
};

// ParkInc.MethodDrawerAttribute
struct MethodDrawerAttribute_t97BA7D70DD1F8547EFB635D3DAF88BD7C216008A  : public BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC
{
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// ParkInc.NativePropertyDrawerAttribute
struct NativePropertyDrawerAttribute_t3089D0938245960CBAE86E124AD5FD98DA664D47  : public BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// ParkInc.PopupAttribute
struct PopupAttribute_tFAA3EBB40D07B5CE8E425349C5F4C55278EC77C9  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Object[] ParkInc.PopupAttribute::m_ArrayParams
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_ArrayParams_0;
};

// ParkInc.PropertyDrawConditionAttribute
struct PropertyDrawConditionAttribute_tE9C8E680938CD582F165D427033D46C22C83E23B  : public BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC
{
};

// ParkInc.PropertyDrawerAttribute
struct PropertyDrawerAttribute_tDD1FB6B33E0437D6BF29D9A4DAAC5E5BC8DE8EF4  : public BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC
{
};

// ParkInc.PropertyGrouperAttribute
struct PropertyGrouperAttribute_t2EE388C30793C7AA65B8EC634FD23E3FB0D8F068  : public BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC
{
};

// ParkInc.PropertyMetaAttribute
struct PropertyMetaAttribute_t42B1B6FEBDB2566333AC12F92E4E7AC2758D75E7  : public BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC
{
};

// ParkInc.PropertyValidatorAttribute
struct PropertyValidatorAttribute_t7AC158CFE73AE81BFA7B6093F612127CAB97F974  : public BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC
{
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
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

// ParkInc.ResourcesFileAttribute
struct ResourcesFileAttribute_t3A959A69C0F15D4038494D6C5E943DA810BCA4D3  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String ParkInc.ResourcesFileAttribute::m_Path
	String_t* ___m_Path_0;
	// System.Type ParkInc.ResourcesFileAttribute::m_Type
	Type_t* ___m_Type_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ParkInc.ScenesAttribute
struct ScenesAttribute_t9F41121B7E1970EDAD9A825F8F16C1EBA021E9A0  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// ParkInc.SmartArrayAttribute
struct SmartArrayAttribute_tE17A8538CE2DA516F7CE99B45B78584585D07868  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// ParkInc.TabData
struct TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A  : public RuntimeObject
{
	// System.Boolean ParkInc.TabData::isExpanded
	bool ___isExpanded_0;
	// System.String ParkInc.TabData::uniqueId
	String_t* ___uniqueId_1;
	// System.String ParkInc.TabData::name
	String_t* ___name_2;
	// ParkInc.TabType ParkInc.TabData::type
	int32_t ___type_3;
	// ParkInc.PreviewType ParkInc.TabData::previewType
	int32_t ___previewType_4;
	// UnityEngine.GameObject ParkInc.TabData::previewPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___previewPrefab_5;
	// UnityEngine.Color ParkInc.TabData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_6;
	// UnityEngine.Color ParkInc.TabData::productBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___productBackgroundColor_7;
};

// ParkInc.TabType
struct TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4 
{
	// System.Int32 ParkInc.TabType::value__
	int32_t ___value___2;
};

// ParkInc.TimeUtils
struct TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF  : public RuntimeObject
{
};

// ParkInc.ValidatorAttribute
struct ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2  : public ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4
{
};

// ParkInc.ColorDebugSettings/ColorInfo
struct ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A  : public RuntimeObject
{
	// ParkInc.CustomColor ParkInc.ColorDebugSettings/ColorInfo::colorEnum
	int32_t ___colorEnum_0;
	// UnityEngine.Color ParkInc.ColorDebugSettings/ColorInfo::colorValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorValue_1;
};

// ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill
struct TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824  : public TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3
{
};

// ParkInc.BoxGroupAttribute
struct BoxGroupAttribute_t4D7B63F6C58BA1D9A97317AB7FA1B5D85AB7C00B  : public GroupAttribute_t4E15700F70A4FB17BBDD232ADC9E4CBDB05BB044
{
};

// ParkInc.ButtonAttribute
struct ButtonAttribute_t3C73A96658AEDD21A31E32CE634F83B872D64B0A  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
	// System.String ParkInc.ButtonAttribute::text
	String_t* ___text_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ParkInc.ComponentAttribute
struct ComponentAttribute_t5C7655B73B1A3DD0D2B6B838A0DE1E734AC6D853  : public ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2
{
	// System.Type ParkInc.ComponentAttribute::type
	Type_t* ___type_0;
	// System.String ParkInc.ComponentAttribute::message
	String_t* ___message_1;
};

// ParkInc.DropdownAttribute
struct DropdownAttribute_tB63E7AAF4AA2ABD0BF1E6230F213BEFEEF532C4C  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
	// System.String ParkInc.DropdownAttribute::valuesFieldName
	String_t* ___valuesFieldName_0;
};

// ParkInc.ErrorAttribute
struct ErrorAttribute_t098D18A4F7A1B21129C95DEF308EA8702C67BEEE  : public HelpBoxAttribute_t6C50379C95472EE6EDBF51C1A13F9D9CB3B6F4BB
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ParkInc.GameObjectTagAttribute
struct GameObjectTagAttribute_t185A2832CAA41A02DC832A47E4C6540A502EA5DD  : public ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2
{
	// System.String ParkInc.GameObjectTagAttribute::tag
	String_t* ___tag_0;
	// System.String ParkInc.GameObjectTagAttribute::message
	String_t* ___message_1;
};

// ParkInc.HideIfAttribute
struct HideIfAttribute_t6383871523AC7874D1E933BDCF31D85947784C17  : public DrawConditionAttribute_t8AC434A34FECC0E3EA98B1836D229B60DA4EB941
{
	// System.String ParkInc.HideIfAttribute::conditionName
	String_t* ___conditionName_0;
};

// ParkInc.InfoAttribute
struct InfoAttribute_t12E59A9230F947962E8B24D439A575BE6AC9180B  : public HelpBoxAttribute_t6C50379C95472EE6EDBF51C1A13F9D9CB3B6F4BB
{
};

// ParkInc.InfoBoxAttribute
struct InfoBoxAttribute_t6D9B9C4793D6C2390F2887FEAC858E15A81F7041  : public MetaAttribute_t432CD49DEA174BF28E4E4C37607F93AEF766D213
{
	// System.String ParkInc.InfoBoxAttribute::text
	String_t* ___text_1;
	// ParkInc.InfoBoxType ParkInc.InfoBoxAttribute::type
	int32_t ___type_2;
	// System.String ParkInc.InfoBoxAttribute::visibleIf
	String_t* ___visibleIf_3;
};

// ParkInc.MaxValueAttribute
struct MaxValueAttribute_t35AD945E9505B311B466F6A02B4154972FF2AF7B  : public ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2
{
	// System.Single ParkInc.MaxValueAttribute::maxValue
	float ___maxValue_0;
};

// ParkInc.MinMaxSliderAttribute
struct MinMaxSliderAttribute_t611AF2B776BD290594F8DF77CFD23B77FE1714D6  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
	// System.Single ParkInc.MinMaxSliderAttribute::minValue
	float ___minValue_0;
	// System.Single ParkInc.MinMaxSliderAttribute::maxValue
	float ___maxValue_1;
};

// ParkInc.MinValueAttribute
struct MinValueAttribute_t1CF8236BD11E3DFF120BFC471048C3A5ED7224FD  : public ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2
{
	// System.Single ParkInc.MinValueAttribute::minValue
	float ___minValue_0;
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

// ParkInc.OnValueChangedAttribute
struct OnValueChangedAttribute_t95BC64F2AF576221726F5B20F3D9AB13351AC411  : public MetaAttribute_t432CD49DEA174BF28E4E4C37607F93AEF766D213
{
	// System.String ParkInc.OnValueChangedAttribute::callbackName
	String_t* ___callbackName_1;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// ParkInc.PrefabAttribute
struct PrefabAttribute_tF9C162E8D4512E0538509796403A6428EDA9C245  : public ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2
{
	// System.String ParkInc.PrefabAttribute::message
	String_t* ___message_0;
};

// ParkInc.ProgressBarAttribute
struct ProgressBarAttribute_t04F5930F46A47C79C9B8CABC77CD55F854070752  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
	// System.String ParkInc.ProgressBarAttribute::Name
	String_t* ___Name_0;
	// System.Single ParkInc.ProgressBarAttribute::MaxValue
	float ___MaxValue_1;
	// ParkInc.ProgressBarColor ParkInc.ProgressBarAttribute::Color
	int32_t ___Color_2;
};

// ParkInc.ReadOnlyFieldAttribute
struct ReadOnlyFieldAttribute_t49A779D1B530E4E1D4F8A111A9236575B99215A0  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
};

// ParkInc.ReorderableListAttribute
struct ReorderableListAttribute_t808C0397718D813764BFCF211AA0A80EF10554C7  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
};

// ParkInc.RequiredAttribute
struct RequiredAttribute_tB0CB5CBB1E2FFCFAC64FA60BFAAB564E38B3CB02  : public ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2
{
	// System.String ParkInc.RequiredAttribute::message
	String_t* ___message_0;
};

// ParkInc.ResizableTextAreaAttribute
struct ResizableTextAreaAttribute_t7B6E97128CE5EE84564F3AD048CD34927812FB12  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
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

// ParkInc.ShowAssetPreviewAttribute
struct ShowAssetPreviewAttribute_tC9FFFAB7EECD2C407AB57A6023000D8D7E241928  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
	// System.Int32 ParkInc.ShowAssetPreviewAttribute::width
	int32_t ___width_0;
	// System.Int32 ParkInc.ShowAssetPreviewAttribute::height
	int32_t ___height_1;
};

// ParkInc.ShowIfAttribute
struct ShowIfAttribute_tDA72BC560D9112071D8B36BC69811FF714B792C3  : public DrawConditionAttribute_t8AC434A34FECC0E3EA98B1836D229B60DA4EB941
{
	// System.String ParkInc.ShowIfAttribute::conditionName
	String_t* ___conditionName_0;
};

// ParkInc.ShowNativePropertyAttribute
struct ShowNativePropertyAttribute_tD3B331C315B6799EF8F751587C5A964A5EB4E3CF  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
};

// ParkInc.ShowNonSerializedFieldAttribute
struct ShowNonSerializedFieldAttribute_t0ED9D8744B3D65BCBA764A48BD7E5A50CFF499DE  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
};

// ParkInc.SliderAttribute
struct SliderAttribute_t7E074005A634B35A3E6074C9131E9E4742811966  : public DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB
{
	// System.Single ParkInc.SliderAttribute::minValue
	float ___minValue_0;
	// System.Single ParkInc.SliderAttribute::maxValue
	float ___maxValue_1;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// ParkInc.ValidateInputAttribute
struct ValidateInputAttribute_t04B1A1C5F84105B5E90F5EF0ACA02BC4621E57F4  : public ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2
{
	// System.String ParkInc.ValidateInputAttribute::callbackName
	String_t* ___callbackName_0;
};

// ParkInc.WarningAttribute
struct WarningAttribute_t6DAA0BE86B26DF8B9E5F91C647442DAB9621160C  : public HelpBoxAttribute_t6C50379C95472EE6EDBF51C1A13F9D9CB3B6F4BB
{
};

// System.Func`2<ParkInc.ProductData,System.Boolean>
struct Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7  : public MulticastDelegate_t
{
};

// System.Func`2<ParkInc.TabData,System.Boolean>
struct Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92  : public MulticastDelegate_t
{
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ParkInc.ColorDebugSettings
struct ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// ParkInc.ColorDebugSettings/ColorInfo[] ParkInc.ColorDebugSettings::colorInfos
	ColorInfoU5BU5D_tDC15EB08B4033CBF6FE131EF5F153BF31CD21DC1* ___colorInfos_5;
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// ParkInc.StoreDatabase
struct StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// ParkInc.TabData[] ParkInc.StoreDatabase::tabs
	TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* ___tabs_4;
	// ParkInc.ProductData[] ParkInc.StoreDatabase::products
	ProductDataU5BU5D_t2202F738F9C295F8D39D1A4A247F90F74992A261* ___products_5;
	// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.SimpleStringSave> ParkInc.StoreDatabase::selectedProducts
	Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221* ___selectedProducts_6;
	// ParkInc.TabType[] ParkInc.StoreDatabase::TabTypes
	TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31* ___TabTypes_7;
	// System.Int32 ParkInc.StoreDatabase::coinsForAdsAmount
	int32_t ___coinsForAdsAmount_8;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ParkInc.UI.Particle.UIParticleSettings
struct UIParticleSettings_t47590AB23263E9610A814CFA1A3FCEF6479D91D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.GameObject ParkInc.UI.Particle.UIParticleSettings::uiParticlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiParticlePrefab_4;
	// UnityEngine.Sprite ParkInc.UI.Particle.UIParticleSettings::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_5;
	// System.Boolean ParkInc.UI.Particle.UIParticleSettings::playOnAwake
	bool ___playOnAwake_6;
	// System.Single ParkInc.UI.Particle.UIParticleSettings::startDelay
	float ___startDelay_7;
	// ParkInc.DuoFloat ParkInc.UI.Particle.UIParticleSettings::startSize
	DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___startSize_8;
	// ParkInc.DuoColor ParkInc.UI.Particle.UIParticleSettings::startDuoColor
	DuoColor_tCBE92DCFCFF67294C2451DCE125D3E505969DBAE* ___startDuoColor_9;
	// System.Single ParkInc.UI.Particle.UIParticleSettings::gravityModifier
	float ___gravityModifier_10;
	// ParkInc.UI.Particle.UIParticleSettings/Shape ParkInc.UI.Particle.UIParticleSettings::shape
	int32_t ___shape_11;
	// System.Single ParkInc.UI.Particle.UIParticleSettings::circleRadius
	float ___circleRadius_12;
	// UnityEngine.Vector2 ParkInc.UI.Particle.UIParticleSettings::rectSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rectSize_13;
	// System.Single ParkInc.UI.Particle.UIParticleSettings::spherizeDirection
	float ___spherizeDirection_14;
	// ParkInc.DuoFloat ParkInc.UI.Particle.UIParticleSettings::lifetime
	DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___lifetime_15;
	// System.Int32 ParkInc.UI.Particle.UIParticleSettings::emissionPerSecond
	int32_t ___emissionPerSecond_16;
	// ParkInc.UI.Particle.UIParticleSettings/BurstSettings[] ParkInc.UI.Particle.UIParticleSettings::bursts
	BurstSettingsU5BU5D_t682EEDA0322844DCF84AE413A4BC38BB5FFE70FD* ___bursts_17;
	// ParkInc.DuoFloat ParkInc.UI.Particle.UIParticleSettings::angle
	DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___angle_18;
	// System.Boolean ParkInc.UI.Particle.UIParticleSettings::speed3d
	bool ___speed3d_19;
	// ParkInc.DuoFloat ParkInc.UI.Particle.UIParticleSettings::speed
	DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___speed_20;
	// ParkInc.DuoVector3 ParkInc.UI.Particle.UIParticleSettings::speed3dValues
	DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* ___speed3dValues_21;
	// ParkInc.DuoFloat ParkInc.UI.Particle.UIParticleSettings::dumping
	DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___dumping_22;
	// UnityEngine.AnimationCurve ParkInc.UI.Particle.UIParticleSettings::scaleCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___scaleCurve_23;
	// System.Boolean ParkInc.UI.Particle.UIParticleSettings::rotationOverLifetime
	bool ___rotationOverLifetime_24;
	// ParkInc.DuoFloat ParkInc.UI.Particle.UIParticleSettings::angularSpeed
	DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___angularSpeed_25;
	// System.Boolean ParkInc.UI.Particle.UIParticleSettings::colorOverLifetime
	bool ___colorOverLifetime_26;
	// UnityEngine.Gradient ParkInc.UI.Particle.UIParticleSettings::colorOverLifetimeGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___colorOverLifetimeGradient_27;
};

// ParkInc.SmartToggle/ToggleEvents
struct ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500  : public MulticastDelegate_t
{
};

// ParkInc.StoreController/ProductDelegate
struct ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7  : public MulticastDelegate_t
{
};

// ParkInc.TabData/SimpleTabDelegate
struct SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F  : public MulticastDelegate_t
{
};

// ParkInc.Tween/TweenCallback
struct TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950  : public MulticastDelegate_t
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

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// ParkInc.BaseButton
struct BaseButton_t3C9B7FDE4EF9F296DB59D41FCE9E69743D955570  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ParkInc.BaseButton::interactable
	bool ___interactable_4;
	// UnityEngine.Color ParkInc.BaseButton::normalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___normalColor_5;
	// UnityEngine.Color ParkInc.BaseButton::disabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___disabledColor_6;
	// UnityEngine.UI.Graphic ParkInc.BaseButton::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_7;
	// UnityEngine.CanvasGroup ParkInc.BaseButton::canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup_8;
	// ParkInc.BaseButton/AnimationType ParkInc.BaseButton::animationType
	int32_t ___animationType_9;
	// UnityEngine.Animator ParkInc.BaseButton::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_10;
	// System.String ParkInc.BaseButton::pointerDownTrigger
	String_t* ___pointerDownTrigger_11;
	// System.String ParkInc.BaseButton::pointerUpTrigger
	String_t* ___pointerUpTrigger_12;
	// ParkInc.TweenCase ParkInc.BaseButton::tween
	TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* ___tween_13;
	// System.Boolean ParkInc.BaseButton::isClickCanceled
	bool ___isClickCanceled_14;
	// System.Int32 ParkInc.BaseButton::pointerDownTriggerParameter
	int32_t ___pointerDownTriggerParameter_15;
	// System.Int32 ParkInc.BaseButton::pointerUpTriggerParameter
	int32_t ___pointerUpTriggerParameter_16;
	// System.Int32 ParkInc.BaseButton::lastPointerDownObjectHash
	int32_t ___lastPointerDownObjectHash_17;
};

// ParkInc.DelayedObjectDisabler
struct DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ParkInc.DelayedObjectDisabler::delay
	float ___delay_4;
};

// ParkInc.FPSCounter
struct FPSCounter_t8094E8DF96260D8DD08D60D92F709E67C8C6AD9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ParkInc.FPSCounter::fps
	float ___fps_4;
	// System.Boolean ParkInc.FPSCounter::isStyleInitted
	bool ___isStyleInitted_5;
	// UnityEngine.GUIStyle ParkInc.FPSCounter::labelStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___labelStyle_6;
};

// ParkInc.SmartToggle
struct SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ParkInc.SmartToggle::defaultState
	bool ___defaultState_4;
	// UnityEngine.RectTransform ParkInc.SmartToggle::movableElement
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___movableElement_5;
	// UnityEngine.UI.Graphic ParkInc.SmartToggle::movableElementGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___movableElementGraphic_6;
	// UnityEngine.UI.Text ParkInc.SmartToggle::enableText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___enableText_7;
	// UnityEngine.UI.Text ParkInc.SmartToggle::disableText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___disableText_8;
	// UnityEngine.Color ParkInc.SmartToggle::activeOnTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___activeOnTextColor_9;
	// UnityEngine.Color ParkInc.SmartToggle::activeOffTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___activeOffTextColor_10;
	// UnityEngine.Color ParkInc.SmartToggle::disabledTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___disabledTextColor_11;
	// UnityEngine.UI.Graphic ParkInc.SmartToggle::icon
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___icon_12;
	// ParkInc.SmartToggle/ToggleEvents ParkInc.SmartToggle::OnStateChanged
	ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* ___OnStateChanged_13;
	// System.Boolean ParkInc.SmartToggle::state
	bool ___state_14;
	// UnityEngine.RectTransform ParkInc.SmartToggle::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_15;
	// System.Single ParkInc.SmartToggle::offsetValue
	float ___offsetValue_16;
	// System.Boolean ParkInc.SmartToggle::isBusy
	bool ___isBusy_17;
	// ParkInc.TweenCase ParkInc.SmartToggle::animationTweenCase
	TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* ___animationTweenCase_18;
	// System.Boolean ParkInc.SmartToggle::isInited
	bool ___isInited_19;
};

// ParkInc.StoreController
struct StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ParkInc.StoreDatabase ParkInc.StoreController::database
	StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* ___database_5;
};

// ParkInc.StorePreview3D
struct StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera ParkInc.StorePreview3D::previewCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___previewCamera_4;
	// UnityEngine.Transform ParkInc.StorePreview3D::prefabParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___prefabParent_5;
	// UnityEngine.Vector3 ParkInc.StorePreview3D::spawnPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPosition_6;
	// UnityEngine.RenderTexture ParkInc.StorePreview3D::<Texture>k__BackingField
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3CTextureU3Ek__BackingField_7;
	// UnityEngine.GameObject ParkInc.StorePreview3D::<Prefab>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CPrefabU3Ek__BackingField_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ParkInc.DummyStorePreview3D
struct DummyStorePreview3D_tE98987F452EBC084F0814134A365D4392B784E12  : public StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// ParkInc.UXButton
struct UXButton_t3BA3EE848462AAA58258D81B65A1329C8D2573D2  : public BaseButton_t3C9B7FDE4EF9F296DB59D41FCE9E69743D955570
{
	// UnityEngine.Events.UnityEvent ParkInc.UXButton::onClick
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onClick_18;
};

// ParkInc.UXButtonAnimator
struct UXButtonAnimator_t81326400BAEC530FD41ACE4A1C966C1799F77CD5  : public BaseButton_t3C9B7FDE4EF9F296DB59D41FCE9E69743D955570
{
	// UnityEngine.Events.UnityEvent ParkInc.UXButtonAnimator::onClick
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onClick_18;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// ParkInc.SlicedFilledImage
struct SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite ParkInc.SlicedFilledImage::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_41;
	// ParkInc.SlicedFilledImage/FillDirection ParkInc.SlicedFilledImage::m_FillDirection
	int32_t ___m_FillDirection_42;
	// System.Single ParkInc.SlicedFilledImage::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean ParkInc.SlicedFilledImage::m_FillCenter
	bool ___m_FillCenter_44;
	// System.Boolean ParkInc.SlicedFilledImage::m_PreserveBorder
	bool ___m_PreserveBorder_45;
	// System.Single ParkInc.SlicedFilledImage::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_46;
	// UnityEngine.Sprite ParkInc.SlicedFilledImage::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_47;
	// System.Single ParkInc.SlicedFilledImage::<alphaHitTestMinimumThreshold>k__BackingField
	float ___U3CalphaHitTestMinimumThresholdU3Ek__BackingField_48;
	// System.Boolean ParkInc.SlicedFilledImage::m_Tracked
	bool ___m_Tracked_49;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>

// System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>

// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData>

// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData>

// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.SimpleStringSave>

// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.SimpleStringSave>

// System.Collections.Generic.Dictionary`2/KeyCollection<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>

// System.Collections.Generic.Dictionary`2/KeyCollection<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32Enum>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<ParkInc.ProductData>
struct List_1_tE15795D510CCC09213E58C79A3217B030D8847A3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ProductDataU5BU5D_t2202F738F9C295F8D39D1A4A247F90F74992A261* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ParkInc.ProductData>

// System.Collections.Generic.List`1<ParkInc.TabType>
struct List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ParkInc.TabType>

// ParkInc.ToggleType`1<System.Boolean>

// ParkInc.ToggleType`1<System.Boolean>

// ParkInc.ToggleType`1<System.Double>

// ParkInc.ToggleType`1<System.Double>

// ParkInc.ToggleType`1<System.Int32>

// ParkInc.ToggleType`1<System.Int32>

// ParkInc.ToggleType`1<System.Int64>

// ParkInc.ToggleType`1<System.Int64>

// ParkInc.ToggleType`1<System.Single>

// ParkInc.ToggleType`1<System.Single>

// ParkInc.ToggleType`1<System.String>

// ParkInc.ToggleType`1<System.String>

// System.Attribute

// System.Attribute

// ParkInc.Bezier

// ParkInc.Bezier

// ParkInc.ColorDebug

// ParkInc.ColorDebug

// ParkInc.ColoredText

// ParkInc.ColoredText

// ParkInc.CoreExtensions

// ParkInc.CoreExtensions

// ParkInc.DuoDouble
struct DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_StaticFields
{
	// System.Random ParkInc.DuoDouble::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_2;
};

// ParkInc.DuoDouble

// ParkInc.DuoFloat

// ParkInc.DuoFloat

// ParkInc.DuoInt

// ParkInc.DuoInt

// ParkInc.EnumUtils

// ParkInc.EnumUtils

// ParkInc.IOUtils

// ParkInc.IOUtils

// ParkInc.JuicyBounce

// ParkInc.JuicyBounce

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// ParkInc.PhysicsHelper
struct PhysicsHelper_t95699AA580518184FBDE754F9880F04CA3BCAFCF_StaticFields
{
	// System.Int32 ParkInc.PhysicsHelper::LAYER_DEFAULT
	int32_t ___LAYER_DEFAULT_0;
};

// ParkInc.PhysicsHelper

// ParkInc.ProductData

// ParkInc.ProductData

// ParkInc.RagdollHelper

// ParkInc.RagdollHelper

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// ParkInc.RuntimeEditorUtils

// ParkInc.RuntimeEditorUtils

// ParkInc.SimpleStringSave

// ParkInc.SimpleStringSave

// ParkInc.SlicedFilledImageExtensions

// ParkInc.SlicedFilledImageExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// ParkInc.TextureExtensions

// ParkInc.TextureExtensions

// ParkInc.TweenCase

// ParkInc.TweenCase

// ParkInc.CoreExtensions/ExtendedRandom

// ParkInc.CoreExtensions/ExtendedRandom

// ParkInc.DelayedObjectDisabler/<DelayedCall>d__2

// ParkInc.DelayedObjectDisabler/<DelayedCall>d__2

// ParkInc.ProductData/StoreItemSave

// ParkInc.ProductData/StoreItemSave

// ParkInc.SlicedFilledImage/SetPropertyUtility

// ParkInc.SlicedFilledImage/SetPropertyUtility

// ParkInc.SmartToggle/<>c__DisplayClass24_0

// ParkInc.SmartToggle/<>c__DisplayClass24_0

// ParkInc.StoreController/<>c
struct U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_StaticFields
{
	// ParkInc.StoreController/<>c ParkInc.StoreController/<>c::<>9
	U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC* ___U3CU3E9_0;
	// System.Func`2<ParkInc.ProductData,System.Boolean> ParkInc.StoreController/<>c::<>9__33_1
	Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* ___U3CU3E9__33_1_1;
};

// ParkInc.StoreController/<>c

// ParkInc.StoreController/<>c__DisplayClass33_0

// ParkInc.StoreController/<>c__DisplayClass33_0

// ParkInc.UI.Particle.UIParticleSettings/BurstSettings

// ParkInc.UI.Particle.UIParticleSettings/BurstSettings

// ParkInc.ValidatorAttribute/ValidateResult

// ParkInc.ValidatorAttribute/ValidateResult

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<ParkInc.ProductData>

// System.Collections.Generic.List`1/Enumerator<ParkInc.ProductData>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>

// ParkInc.TweenCaseFunction`2<ParkInc.SlicedFilledImage,System.Single>

// ParkInc.TweenCaseFunction`2<ParkInc.SlicedFilledImage,System.Single>

// ParkInc.BaseAttribute

// ParkInc.BaseAttribute

// ParkInc.BoolToggle

// ParkInc.BoolToggle

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// ParkInc.DoubleToggle

// ParkInc.DoubleToggle

// ParkInc.ExtendedEditorAttribute

// ParkInc.ExtendedEditorAttribute

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// ParkInc.FloatToggle

// ParkInc.FloatToggle

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// ParkInc.IntToggle

// ParkInc.IntToggle

// ParkInc.LongToggle

// ParkInc.LongToggle

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// UnityEngine.PropertyAttribute

// UnityEngine.PropertyAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// ParkInc.RequireColorAttribute

// ParkInc.RequireColorAttribute

// System.Single

// System.Single

// ParkInc.StringToggle

// ParkInc.StringToggle

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// Unity.Mathematics.int2
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields
{
	// Unity.Mathematics.int2 Unity.Mathematics.int2::zero
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___zero_2;
};

// Unity.Mathematics.int2

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13

// ParkInc.JuicyBounce/TweenCaseJuicyBounce

// ParkInc.JuicyBounce/TweenCaseJuicyBounce

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13 <PrivateImplementationDetails>::3162D5D5638BBF501FD80751C66291086C7C28542CB28AF9CB08EF20770ADDB2
	__StaticArrayInitTypeSizeU3D13_t693DFDC6D53D32FD58AF46A75C65A83BC92A3325 ___3162D5D5638BBF501FD80751C66291086C7C28542CB28AF9CB08EF20770ADDB2_0;
};

// <PrivateImplementationDetails>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Bounds

// UnityEngine.Bounds

// ParkInc.ConstArrayAttribute

// ParkInc.ConstArrayAttribute

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// ParkInc.DisableFieldAttribute

// ParkInc.DisableFieldAttribute

// ParkInc.DrawConditionAttribute

// ParkInc.DrawConditionAttribute

// ParkInc.DrawReferenceAttribute

// ParkInc.DrawReferenceAttribute

// ParkInc.DrawerAttribute

// ParkInc.DrawerAttribute

// ParkInc.DuoColor

// ParkInc.DuoColor

// ParkInc.DuoVector3

// ParkInc.DuoVector3

// ParkInc.EnumArrayAttribute

// ParkInc.EnumArrayAttribute

// ParkInc.EnumFlagsAttribute

// ParkInc.EnumFlagsAttribute

// ParkInc.FieldDrawerAttribute

// ParkInc.FieldDrawerAttribute

// ParkInc.GroupAttribute

// ParkInc.GroupAttribute

// ParkInc.HelpBoxAttribute

// ParkInc.HelpBoxAttribute

// System.Int32Enum

// System.Int32Enum

// ParkInc.LineSpacerAttribute

// ParkInc.LineSpacerAttribute

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// ParkInc.MetaAttribute

// ParkInc.MetaAttribute

// ParkInc.MethodDrawerAttribute

// ParkInc.MethodDrawerAttribute

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// ParkInc.NativePropertyDrawerAttribute

// ParkInc.NativePropertyDrawerAttribute

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// ParkInc.PopupAttribute

// ParkInc.PopupAttribute

// ParkInc.PropertyDrawConditionAttribute

// ParkInc.PropertyDrawConditionAttribute

// ParkInc.PropertyDrawerAttribute

// ParkInc.PropertyDrawerAttribute

// ParkInc.PropertyGrouperAttribute

// ParkInc.PropertyGrouperAttribute

// ParkInc.PropertyMetaAttribute

// ParkInc.PropertyMetaAttribute

// ParkInc.PropertyValidatorAttribute

// ParkInc.PropertyValidatorAttribute

// ParkInc.ResourcesFileAttribute

// ParkInc.ResourcesFileAttribute

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// ParkInc.ScenesAttribute

// ParkInc.ScenesAttribute

// ParkInc.SmartArrayAttribute

// ParkInc.SmartArrayAttribute

// ParkInc.TabData

// ParkInc.TabData

// ParkInc.TabType

// ParkInc.TabType

// ParkInc.TimeUtils
struct TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_StaticFields
{
	// System.DateTime ParkInc.TimeUtils::DEFAULT_DATE_UNIX
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___DEFAULT_DATE_UNIX_0;
};

// ParkInc.TimeUtils

// ParkInc.ValidatorAttribute

// ParkInc.ValidatorAttribute

// ParkInc.ColorDebugSettings/ColorInfo

// ParkInc.ColorDebugSettings/ColorInfo

// ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill

// ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill

// ParkInc.BoxGroupAttribute

// ParkInc.BoxGroupAttribute

// ParkInc.ButtonAttribute

// ParkInc.ButtonAttribute

// UnityEngine.Component

// UnityEngine.Component

// ParkInc.ComponentAttribute

// ParkInc.ComponentAttribute

// ParkInc.DropdownAttribute

// ParkInc.DropdownAttribute

// ParkInc.ErrorAttribute

// ParkInc.ErrorAttribute

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.GameObject

// UnityEngine.GameObject

// ParkInc.GameObjectTagAttribute

// ParkInc.GameObjectTagAttribute

// ParkInc.HideIfAttribute

// ParkInc.HideIfAttribute

// ParkInc.InfoAttribute

// ParkInc.InfoAttribute

// ParkInc.InfoBoxAttribute

// ParkInc.InfoBoxAttribute

// ParkInc.MaxValueAttribute

// ParkInc.MaxValueAttribute

// ParkInc.MinMaxSliderAttribute

// ParkInc.MinMaxSliderAttribute

// ParkInc.MinValueAttribute

// ParkInc.MinValueAttribute

// ParkInc.OnValueChangedAttribute

// ParkInc.OnValueChangedAttribute

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// ParkInc.PrefabAttribute

// ParkInc.PrefabAttribute

// ParkInc.ProgressBarAttribute

// ParkInc.ProgressBarAttribute

// ParkInc.ReadOnlyFieldAttribute

// ParkInc.ReadOnlyFieldAttribute

// ParkInc.ReorderableListAttribute

// ParkInc.ReorderableListAttribute

// ParkInc.RequiredAttribute

// ParkInc.RequiredAttribute

// ParkInc.ResizableTextAreaAttribute

// ParkInc.ResizableTextAreaAttribute

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// ParkInc.ShowAssetPreviewAttribute

// ParkInc.ShowAssetPreviewAttribute

// ParkInc.ShowIfAttribute

// ParkInc.ShowIfAttribute

// ParkInc.ShowNativePropertyAttribute

// ParkInc.ShowNativePropertyAttribute

// ParkInc.ShowNonSerializedFieldAttribute

// ParkInc.ShowNonSerializedFieldAttribute

// ParkInc.SliderAttribute

// ParkInc.SliderAttribute

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
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

// System.Type

// ParkInc.ValidateInputAttribute

// ParkInc.ValidateInputAttribute

// ParkInc.WarningAttribute

// ParkInc.WarningAttribute

// System.Func`2<ParkInc.ProductData,System.Boolean>

// System.Func`2<ParkInc.ProductData,System.Boolean>

// System.Func`2<ParkInc.TabData,System.Boolean>

// System.Func`2<ParkInc.TabData,System.Boolean>

// System.AsyncCallback

// System.AsyncCallback

// ParkInc.ColorDebugSettings
struct ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_StaticFields
{
	// ParkInc.ColorDebugSettings ParkInc.ColorDebugSettings::instance
	ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116* ___instance_4;
};

// ParkInc.ColorDebugSettings

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.GUISkin

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// ParkInc.StoreDatabase

// ParkInc.StoreDatabase

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// ParkInc.UI.Particle.UIParticleSettings

// ParkInc.UI.Particle.UIParticleSettings

// ParkInc.SmartToggle/ToggleEvents

// ParkInc.SmartToggle/ToggleEvents

// ParkInc.StoreController/ProductDelegate

// ParkInc.StoreController/ProductDelegate

// ParkInc.TabData/SimpleTabDelegate

// ParkInc.TabData/SimpleTabDelegate

// ParkInc.Tween/TweenCallback

// ParkInc.Tween/TweenCallback

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// System.DivideByZeroException

// System.DivideByZeroException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// ParkInc.BaseButton

// ParkInc.BaseButton

// ParkInc.DelayedObjectDisabler

// ParkInc.DelayedObjectDisabler

// ParkInc.FPSCounter

// ParkInc.FPSCounter

// ParkInc.SmartToggle

// ParkInc.SmartToggle

// ParkInc.StoreController
struct StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields
{
	// ParkInc.StoreController ParkInc.StoreController::instance
	StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60* ___instance_4;
	// System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>> ParkInc.StoreController::products
	Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* ___products_6;
	// System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData> ParkInc.StoreController::selectedProducts
	Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* ___selectedProducts_7;
	// ParkInc.TabData ParkInc.StoreController::<SelectedTabData>k__BackingField
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___U3CSelectedTabDataU3Ek__BackingField_8;
	// ParkInc.StoreController/ProductDelegate ParkInc.StoreController::OnProductSelected
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* ___OnProductSelected_9;
};

// ParkInc.StoreController

// ParkInc.StorePreview3D

// ParkInc.StorePreview3D

// ParkInc.DummyStorePreview3D

// ParkInc.DummyStorePreview3D

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// ParkInc.UXButton

// ParkInc.UXButton

// ParkInc.UXButtonAnimator

// ParkInc.UXButtonAnimator

// ParkInc.SlicedFilledImage
struct SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533_StaticFields
{
	// UnityEngine.Vector3[] ParkInc.SlicedFilledImage::s_Vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Vertices_37;
	// UnityEngine.Vector2[] ParkInc.SlicedFilledImage::s_UVs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVs_38;
	// UnityEngine.Vector2[] ParkInc.SlicedFilledImage::s_SlicedVertices
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_SlicedVertices_39;
	// UnityEngine.Vector2[] ParkInc.SlicedFilledImage::s_SlicedUVs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_SlicedUVs_40;
	// System.Collections.Generic.List`1<ParkInc.SlicedFilledImage> ParkInc.SlicedFilledImage::m_TrackedTexturelessImages
	List_1_t4994224F05B717C0C29F9B561517E409D6AB4F87* ___m_TrackedTexturelessImages_50;
	// System.Boolean ParkInc.SlicedFilledImage::s_Initialized
	bool ___s_Initialized_51;
};

// ParkInc.SlicedFilledImage

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
// ParkInc.ColorDebugSettings/ColorInfo[]
struct ColorInfoU5BU5D_tDC15EB08B4033CBF6FE131EF5F153BF31CD21DC1  : public RuntimeArray
{
	ALIGN_FIELD (8) ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A* m_Items[1];

	inline ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
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
// ParkInc.TabData[]
struct TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B  : public RuntimeArray
{
	ALIGN_FIELD (8) TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* m_Items[1];

	inline TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ParkInc.TabType[]
struct TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// ParkInc.ProductData[]
struct ProductDataU5BU5D_t2202F738F9C295F8D39D1A4A247F90F74992A261  : public RuntimeArray
{
	ALIGN_FIELD (8) ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* m_Items[1];

	inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void ParkInc.TweenCaseFunction`2<System.Object,System.Single>::.ctor(TBaseObject,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseFunction_2__ctor_m22B4DB601E8542F78380EBA432CC3E99A32CBF78_gshared (TweenCaseFunction_2_t4264B9E4DA9E78AA3F3FB8578737EE35F1D2E1A3* __this, RuntimeObject* ___0_tweenObject, float ___1_resultValue, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.ToggleType`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleType_1__ctor_mE8003251E51F5BC5172BAD53E53BE23355721712_gshared (ToggleType_1_t6BEAF4C54405661D90C41529BB355B9E4A206AF7* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.ToggleType`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleType_1__ctor_mFD467319680B9353AEF7F2C542F938B64E663B5D_gshared (ToggleType_1_t3DDC4CF26DC1B4572D555FC54758F227C00EF516* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.ToggleType`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleType_1__ctor_m7A47D8EE7C6C51F3B9C60904DB296321CE0961B3_gshared (ToggleType_1_t530F11BFD45F8E8683A1C57C7840B0BD6698BD8C* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.ToggleType`1<System.Int64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleType_1__ctor_mF8F24C9DCC2790875556722DE960BBAD313FC00A_gshared (ToggleType_1_t0ED2B1279224959B82D82F949D1E409EF50D3AAF* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.ToggleType`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleType_1__ctor_m53F99A95F7E73606FBBB70635144CB7E525E473F_gshared (ToggleType_1_t20DEDA68082E946D28F3CF8CF73CC9C6AAB26E29* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.ToggleType`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleType_1__ctor_m6791A2029001ACFE0B70025B389CA7D82243E3A7_gshared (ToggleType_1_t37D000307CF4F86B606C4E1196513AB133867C08* __this, const RuntimeMethod* method) ;
// T ParkInc.SaveController::GetSaveObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SaveController_GetSaveObject_TisRuntimeObject_m41D4927F6716F6135C5A51A33C9DDA83E019FA75_gshared (String_t* ___0_uniqueName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32Enum>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T ParkInc.CoreExtensions::FindRandomOrder<System.Object>(T[],System.Func`2<T,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreExtensions_FindRandomOrder_TisRuntimeObject_m10F47F694B8BF9B34AD32C22C2FFC499353D0126_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_action, const RuntimeMethod* method) ;
// T ParkInc.CoreExtensions::GetRandomItem<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreExtensions_GetRandomItem_TisRuntimeObject_mA2659BE5C4170F1B2B40852234CC30F9A9DDF3ED_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, const RuntimeMethod* method) ;
// T ParkInc.CoreExtensions::FindRandomOrder<System.Object>(System.Collections.Generic.List`1<T>,System.Func`2<T,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreExtensions_FindRandomOrder_TisRuntimeObject_m28D298A085C32D27648B0C9F771AE9447165FE7E_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_action, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;

// System.Void ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill::.ctor(ParkInc.SlicedFilledImage,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseSlicedImageFill__ctor_m961390E7DC764016DFBEEC78FEE1D1183D71D30E (TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824* __this, SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* ___0_tweenObject, float ___1_resultValue, const RuntimeMethod* method) ;
// ParkInc.TweenCase ParkInc.TweenCase::SetTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* TweenCase_SetTime_m621F6E2BAC2F4CD32F73C0420F1A4C06DB038A70 (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* __this, float ___0_newDelay, const RuntimeMethod* method) ;
// ParkInc.TweenCase ParkInc.TweenCase::SetUnscaledMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* TweenCase_SetUnscaledMode_m42C60783B683EEF890F131CE03F73C01FBA80DFD (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* __this, bool ___0_isUnscaled, const RuntimeMethod* method) ;
// ParkInc.TweenCase ParkInc.TweenCase::SetType(ParkInc.TweenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* TweenCase_SetType_mBF6A9E0DC3977641126F534D22566ADF0E5F9093 (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* __this, int32_t ___0_tweenType, const RuntimeMethod* method) ;
// System.Void ParkInc.TweenCaseFunction`2<ParkInc.SlicedFilledImage,System.Single>::.ctor(TBaseObject,TValue)
inline void TweenCaseFunction_2__ctor_mF91B0388D7A6389DEABEC2C00770E714144E9E24 (TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3* __this, SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* ___0_tweenObject, float ___1_resultValue, const RuntimeMethod* method)
{
	((  void (*) (TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3*, SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533*, float, const RuntimeMethod*))TweenCaseFunction_2__ctor_m22B4DB601E8542F78380EBA432CC3E99A32CBF78_gshared)(__this, ___0_tweenObject, ___1_resultValue, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single ParkInc.SlicedFilledImage::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SlicedFilledImage_get_fillAmount_mBF237439659E8C6E7AB2B5D4D2CB33B39FA9C42F_inline (SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void ParkInc.SlicedFilledImage::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlicedFilledImage_set_fillAmount_mFD4E17BD43CBE66EB3855CAFF275F3EFB1554AAF (SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single ParkInc.TweenCase::Interpolate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenCase_Interpolate_m743BE965240F72ED851402FF5ADBEE80D43D4586 (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* __this, float ___0_p, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void ParkInc.SmartToggle::Init(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_Init_mFD6399597959EF578A9010D4F964FE9A089BE6D3 (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, bool ___0_state, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// ParkInc.TweenCase ParkInc.TweenCase::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* TweenCase_Kill_m934F81CF89410A401DCFF47026E6A481FC12A714 (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.SmartToggle/ToggleEvents::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_inline (ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method) ;
// System.Void ParkInc.SmartToggle/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m931F313A0D966E6A14013AE3EDD0FD4D48ED15A5 (U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// ParkInc.TweenCase ParkInc.TweenExtensions::DOAnchoredPosition(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Single,System.Boolean,ParkInc.TweenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* TweenExtensions_DOAnchoredPosition_m6B82AE14678D320B013E37A2785C78A7DED6E545 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_tweenObject, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_resultValue, float ___2_time, float ___3_delay, bool ___4_unscaledTime, int32_t ___5_tweenType, const RuntimeMethod* method) ;
// ParkInc.TweenCase ParkInc.TweenCase::SetEasing(ParkInc.Ease/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* TweenCase_SetEasing_mD123DE848C7CC0996DC2BAAFC45FD99DB9E31213 (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* __this, int32_t ___0_ease, const RuntimeMethod* method) ;
// System.Void ParkInc.Tween/TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m89B6636475981D446B1D1DAAA8B85D9B55E01099 (TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// ParkInc.TweenCase ParkInc.TweenCase::OnComplete(ParkInc.Tween/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* TweenCase_OnComplete_m3168F35ADC3CD6B725404ADE5D96F6CFCC3E83CD (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* __this, TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* ___0_callback, const RuntimeMethod* method) ;
// System.Void ParkInc.SmartToggle::SetState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_SetState_mA491ED01B4FEE8F56C8EC22CF3D9C8321451B554 (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, bool ___0_state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.BaseButton::OnClick(ParkInc.Tween/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseButton_OnClick_m96FFC4F0808CB4DC6B6CCCD4AEAE1F22E269810B (BaseButton_t3C9B7FDE4EF9F296DB59D41FCE9E69743D955570* __this, TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* ___0_callback, const RuntimeMethod* method) ;
// System.Void ParkInc.BaseButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseButton__ctor_m9DFFA543A1722994C68F6268ABDF99434816EA52 (BaseButton_t3C9B7FDE4EF9F296DB59D41FCE9E69743D955570* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ParkInc.Bezier::EvaluateQuadratic(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_EvaluateQuadratic_mF469EAB12B966E4EE7A05BADE572EE274DBF0BC6 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_c, float ___3_t, const RuntimeMethod* method) ;
// System.Single ParkInc.Bezier::AproximateLength(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bezier_AproximateLength_m3938236618CAA2A392687A0ABFAD4096ACBF56E8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_p2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_p3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.ColoredText::.ctor(UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText__ctor_m6C5803392AA7EA9059DB699C9CB05FF65BD58400 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, String_t* ___1_text, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// ParkInc.ColoredText ParkInc.ColoredText::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_Append_m3F3C931CF5C3B1C33FF6E1AEFD3F230371965DA4 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ParkInc.ColoredText::.ctor(ParkInc.CustomColor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText__ctor_m0CBA5157F6436533FFBBBF5A03C342B125C48380 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, int32_t ___0_colorEnum, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void ParkInc.ColoredText::ApllyColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText_ApllyColor_mF165A5BE612F6BA4A3B39908CAAF8AC4E1F92AEB (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// System.Void ParkInc.ColoredText::ApllyColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText_ApllyColor_m3722F45492B18E8EBDD58240F7D012A1E3D5C313 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, String_t* ___0_hashCode, const RuntimeMethod* method) ;
// UnityEngine.Color ParkInc.ColorDebugSettings::GetColorByEnum(ParkInc.CustomColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorDebugSettings_GetColorByEnum_m197F7F7C999407A0C02A7851C4C113D6CB346665 (int32_t ___0_color, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String ParkInc.CoreExtensions::ToHex(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_ToHex_m6E964F07BBC2DE51081D876F9009A81BE5E1440A (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void ParkInc.ColoredText::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText__ctor_m5289A3411A45ADF48B3A56083E7283B963E65F75 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, String_t* ___0_hashCode, String_t* ___1_text, const RuntimeMethod* method) ;
// ParkInc.ColoredText ParkInc.ColoredText::MakeBold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_MakeBold_m1A5388EA67F6C2D536F59A913700139C7E4C2A1D (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, const RuntimeMethod* method) ;
// ParkInc.ColoredText ParkInc.ColoredText::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_Append_mEB3EA2E87B9F77C0479A718AD0B211B65986EC57 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void ParkInc.ColorDebug::Log(ParkInc.ColoredText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebug_Log_mC14F680DC4AB25D36890438BB940BD500727823D (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ___0_extendedFormatter, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D (String_t* ___0_input, String_t* ___1_pattern, String_t* ___2_replacement, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972 (String_t* ___0_input, String_t* ___1_pattern, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetLocalPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetLocalPositionAndRotation_m0FB0FCF462AB7CD21880042918BCC372A59E734D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_localPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_localRotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// UnityEngine.Color ParkInc.CoreExtensions::SetAlpha(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CoreExtensions_SetAlpha_m256C970D9D9D01DE534ADAD593F0EDA29726EE17 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_aValue, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String ParkInc.CoreExtensions::GetFields(System.Int32,System.Int32,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_GetFields_mA363CEB46630F0DB49E38CB4CEBCFF71F8BD450F (int32_t ___0_depth, int32_t ___1_maxDepth, String_t* ___2_space, RuntimeObject* ___3_parentObject, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ParkInc.DelayedObjectDisabler::DelayedCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelayedObjectDisabler_DelayedCall_m1F0616C110528C3DCD9C8A2B4416C7EB76271937 (DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCallU3Ed__2__ctor_mF9E51C74B5003301B20681F206355E17CE7203EC (U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.DuoInt::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoInt__ctor_m8089478F83EFB3CDBBA1E1DEEE2E6C6FCD1A8850 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.DuoInt::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoInt__ctor_mCCBCF677D7ED13CAC1D02652BEC696AA93978EC3 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, int32_t ___0_firstValue, int32_t ___1_secondValue, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.int2::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.DuoFloat::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, float ___0_firstValue, float ___1_secondValue, const RuntimeMethod* method) ;
// System.Void ParkInc.DuoFloat::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoFloat__ctor_mBA9D675954AE7B99D4C5775DC6D3B8FF0430A0D5 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single ParkInc.DuoFloat::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F_inline (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) ;
// System.Single ParkInc.DuoFloat::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1_inline (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single ParkInc.DuoFloat::Remap(System.Single,ParkInc.DuoFloat,ParkInc.DuoFloat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DuoFloat_Remap_mDE10B76F8ACC4876A7E6395413A650EB0C7106EC_inline (float ___0_value, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___1_inMinMax, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___2_outMinMax, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ParkInc.DuoFloat::get_xy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DuoFloat_get_xy_mB23E417EBCDA993369D40DB33264C6062B7A2513 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) ;
// System.String ParkInc.DuoFloat::FormatValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoFloat_FormatValue_m148F310BA48BAE0A28710B1C8ECD881799C82053 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.Single ParkInc.DuoFloat::get_r()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.DuoDouble::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoDouble__ctor_mBD7BA7C57097966180CB4A2083D37F1B23B6A06C (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.DuoDouble::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoDouble__ctor_mCEDBC3EF5D988362215456DF0489B013F535D791 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, double ___0_firstValue, double ___1_secondValue, const RuntimeMethod* method) ;
// System.String ParkInc.DuoDouble::FormatValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoDouble_FormatValue_mBC002960FDD69A698CC14C5B5A59C9A00A9304E3 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, double ___0_value, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void ParkInc.DuoVector3::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoVector3__ctor_mD1AC7101FAE6902E57632B1C5633CA9B0EE66555 (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void ParkInc.DuoVector3::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoVector3__ctor_m5B3211C8EA5AAB7D4036970F8B2BD563CD03F4D9 (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_firstValue, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_secondValue, const RuntimeMethod* method) ;
// System.String ParkInc.DuoVector3::FormatValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoVector3_FormatValue_m9F0F1BE1A60F031503A11C7231446B969017C0D7 (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.String ParkInc.DuoVector3::FormatValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoVector3_FormatValue_mFE8A927A2141BE72CC4DF824CCE69AB5ABE9D625 (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::Lerp(UnityEngine.Color32,UnityEngine.Color32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_Lerp_mA2474A351A93CC63EA568E92C99B6E8D91065F7C_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_a, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Single ParkInc.JuicyBounce::GetStartBounceTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JuicyBounce_GetStartBounceTime_m850062B5BA7845F5EDDAE912177CB8C29B2FC7E9 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, int32_t ___0_depth, const RuntimeMethod* method) ;
// System.Void ParkInc.JuicyBounce/TweenCaseJuicyBounce::.ctor(ParkInc.JuicyBounce,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseJuicyBounce__ctor_mF5A825F4CAB1EFBE04BDA720028BB40394820C89 (TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E* __this, JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* ___0_juicyBounce, float ___1_startValue, float ___2_resultValue, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void ParkInc.TweenCase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCase__ctor_m0B5CC99009E23328E98E47C147CA3DC415E5B57C (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.JuicyBounce::BounceTween(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JuicyBounce_BounceTween_mD8BFBA4AD0C6A1F1CA6ECBD519E0820F09F47776 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, float ___0_t, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddHours(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMinutes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMinutes_m8B24125F1100B23A1D9D9361A2745577062E0D91 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_kind, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, const RuntimeMethod* method) ;
// System.Void ParkInc.ToggleType`1<System.Boolean>::.ctor()
inline void ToggleType_1__ctor_mE8003251E51F5BC5172BAD53E53BE23355721712 (ToggleType_1_t6BEAF4C54405661D90C41529BB355B9E4A206AF7* __this, const RuntimeMethod* method)
{
	((  void (*) (ToggleType_1_t6BEAF4C54405661D90C41529BB355B9E4A206AF7*, const RuntimeMethod*))ToggleType_1__ctor_mE8003251E51F5BC5172BAD53E53BE23355721712_gshared)(__this, method);
}
// System.Void ParkInc.ToggleType`1<System.Single>::.ctor()
inline void ToggleType_1__ctor_mFD467319680B9353AEF7F2C542F938B64E663B5D (ToggleType_1_t3DDC4CF26DC1B4572D555FC54758F227C00EF516* __this, const RuntimeMethod* method)
{
	((  void (*) (ToggleType_1_t3DDC4CF26DC1B4572D555FC54758F227C00EF516*, const RuntimeMethod*))ToggleType_1__ctor_mFD467319680B9353AEF7F2C542F938B64E663B5D_gshared)(__this, method);
}
// System.Void ParkInc.ToggleType`1<System.Int32>::.ctor()
inline void ToggleType_1__ctor_m7A47D8EE7C6C51F3B9C60904DB296321CE0961B3 (ToggleType_1_t530F11BFD45F8E8683A1C57C7840B0BD6698BD8C* __this, const RuntimeMethod* method)
{
	((  void (*) (ToggleType_1_t530F11BFD45F8E8683A1C57C7840B0BD6698BD8C*, const RuntimeMethod*))ToggleType_1__ctor_m7A47D8EE7C6C51F3B9C60904DB296321CE0961B3_gshared)(__this, method);
}
// System.Void ParkInc.ToggleType`1<System.Int64>::.ctor()
inline void ToggleType_1__ctor_mF8F24C9DCC2790875556722DE960BBAD313FC00A (ToggleType_1_t0ED2B1279224959B82D82F949D1E409EF50D3AAF* __this, const RuntimeMethod* method)
{
	((  void (*) (ToggleType_1_t0ED2B1279224959B82D82F949D1E409EF50D3AAF*, const RuntimeMethod*))ToggleType_1__ctor_mF8F24C9DCC2790875556722DE960BBAD313FC00A_gshared)(__this, method);
}
// System.Void ParkInc.ToggleType`1<System.String>::.ctor()
inline void ToggleType_1__ctor_m5D96B4FF0867EE314280FC5DAEB928063ACCE2D8 (ToggleType_1_tEC058EF685C957C704D48C6D2D8360C8D575C9DD* __this, const RuntimeMethod* method)
{
	((  void (*) (ToggleType_1_tEC058EF685C957C704D48C6D2D8360C8D575C9DD*, const RuntimeMethod*))ToggleType_1__ctor_m53F99A95F7E73606FBBB70635144CB7E525E473F_gshared)(__this, method);
}
// System.Void ParkInc.ToggleType`1<System.Double>::.ctor()
inline void ToggleType_1__ctor_m6791A2029001ACFE0B70025B389CA7D82243E3A7 (ToggleType_1_t37D000307CF4F86B606C4E1196513AB133867C08* __this, const RuntimeMethod* method)
{
	((  void (*) (ToggleType_1_t37D000307CF4F86B606C4E1196513AB133867C08*, const RuntimeMethod*))ToggleType_1__ctor_m6791A2029001ACFE0B70025B389CA7D82243E3A7_gshared)(__this, method);
}
// System.Void ParkInc.ExtendedEditorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedEditorAttribute__ctor_m169EB33C905347CF11127A875EE63CDC8C3F4B36 (ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.DrawConditionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawConditionAttribute__ctor_m38E30E308D0659AB899BBC53DEBB780BE6D1F086 (DrawConditionAttribute_t8AC434A34FECC0E3EA98B1836D229B60DA4EB941* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.DrawerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0 (DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.BaseAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB (BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) ;
// System.Void ParkInc.GroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupAttribute__ctor_m5F3EAE5357AB5B0C1B2413BD34814D1B1084A2BB (GroupAttribute_t4E15700F70A4FB17BBDD232ADC9E4CBDB05BB044* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void ParkInc.MetaAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAttribute__ctor_mE0DFD9FC488603BAB65813C986827ACE465F5DEF (MetaAttribute_t432CD49DEA174BF28E4E4C37607F93AEF766D213* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.InfoBoxAttribute::.ctor(System.String,ParkInc.InfoBoxType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBoxAttribute__ctor_m89B1ABA2CB4D46F14BCBFC53BB68284B36D0CF70 (InfoBoxAttribute_t6D9B9C4793D6C2390F2887FEAC858E15A81F7041* __this, String_t* ___0_text, int32_t ___1_type, String_t* ___2_visibleIf, const RuntimeMethod* method) ;
// System.Void ParkInc.ValidatorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F (ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.ValidatorAttribute/ValidateResult::.ctor(ParkInc.ValidatorAttribute/ValidateType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2 (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* __this, int32_t ___0_validateType, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String ParkInc.ValidateInputAttribute::get_CallbackName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValidateInputAttribute_get_CallbackName_m6A025BA887FC852428F427CAA5224AF6309FDC6F_inline (ValidateInputAttribute_t04B1A1C5F84105B5E90F5EF0ACA02BC4621E57F4* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.HelpBoxAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpBoxAttribute__ctor_m01C1293C4FCECA01C7258EDDA430AF66775A5CD7 (HelpBoxAttribute_t6C50379C95472EE6EDBF51C1A13F9D9CB3B6F4BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_depth, const RuntimeMethod* method) ;
// System.Void ParkInc.StorePreview3D::set_Texture(UnityEngine.RenderTexture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorePreview3D_set_Texture_m6B87055CA8019F1298EF76BF210CD2D844766C0D_inline (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void ParkInc.StorePreview3D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorePreview3D__ctor_m789B3E73496E1A63B9B5DACE8F918F79DC3C7F76 (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T ParkInc.SaveController::GetSaveObject<ParkInc.ProductData/StoreItemSave>(System.String)
inline StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* SaveController_GetSaveObject_TisStoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625_m0E0D2CC6CFBA5A3D01BDEA81B8125AB2ABE1641B (String_t* ___0_uniqueName, const RuntimeMethod* method)
{
	return ((  StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* (*) (String_t*, const RuntimeMethod*))SaveController_GetSaveObject_TisRuntimeObject_m41D4927F6716F6135C5A51A33C9DDA83E019FA75_gshared)(___0_uniqueName, method);
}
// System.Int32 ParkInc.ProductData::get_RewardedVideoWatchedAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProductData_get_RewardedVideoWatchedAmount_mBCE37FD49A76BFA61D3888C37CEEF3923849FF56 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// ParkInc.StoreDatabase ParkInc.StoreController::get_Database()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F (const RuntimeMethod* method) ;
// ParkInc.TabData[] ParkInc.StoreDatabase::get_Tabs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) ;
// System.Int32 ParkInc.StoreDatabase::get_CoinsForAds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StoreDatabase_get_CoinsForAds_mDD99B1CD833C5EC75D3BEEAE58C6679B4440BC5B_inline (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>> ParkInc.StoreDatabase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* StoreDatabase_Init_mFA35CE5D40501E39C7250237EF816D2C35CF8C7F (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.StoreController::InitDefaultProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_InitDefaultProducts_mBD06017A7F7BC856F569A5F0E0F0FF02E30CD421 (const RuntimeMethod* method) ;
// System.Void ParkInc.StoreController::InitSelectedProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_InitSelectedProducts_mFCF876DA8374B0A1BD2E08AA1B540EBCE6F88507 (const RuntimeMethod* method) ;
// System.Void ParkInc.StoreController::set_SelectedTabData(ParkInc.TabData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StoreController_set_SelectedTabData_m0612E23CB2F72912E29302E38A8811D116AB9B07_inline (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ParkInc.TabType>::.ctor()
inline void List_1__ctor_mC06EB1B5A5DBD544B112648F0794D0FBCC27C975 (List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150*, const RuntimeMethod*))List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::get_Keys()
inline KeyCollection_tED2558E42642D86AD2F4D4FFE90107483DFFA41C* Dictionary_2_get_Keys_m8BFE12BE499EE57A2A895AC06407C349344B6FC3 (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tED2558E42642D86AD2F4D4FFE90107483DFFA41C* (*) (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::GetEnumerator()
inline Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04 KeyCollection_GetEnumerator_m8209D0EE74FEAD2D309F2DB57678940A7AE99DFE (KeyCollection_tED2558E42642D86AD2F4D4FFE90107483DFFA41C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04 (*) (KeyCollection_tED2558E42642D86AD2F4D4FFE90107483DFFA41C*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::Dispose()
inline void Enumerator_Dispose_m70B209FEFBEBE96DE7205EBAE5FD18C22623E2C9 (Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::get_Current()
inline TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* Enumerator_get_Current_mE5066524301BAB19C8ACF09E3CE30F920D5AABD7_inline (Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04* __this, const RuntimeMethod* method)
{
	return ((  TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* (*) (Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// ParkInc.TabType ParkInc.TabData::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<ParkInc.TabType>::Contains(T)
inline bool List_1_Contains_m086898480D6DE87967E39BFDC9EA53EB53239EF0 (List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150*, int32_t, const RuntimeMethod*))List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<ParkInc.TabType>::Add(T)
inline void List_1_Add_m6B6F8DAA75289F3F59FAE51BB5F7CD50CD6DE932_inline (List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150*, int32_t, const RuntimeMethod*))List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline)(__this, ___0_item, method);
}
// TValue System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::get_Item(TKey)
inline List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11 (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_key, const RuntimeMethod* method)
{
	return ((  List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* (*) (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC*, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.Generic.List`1<ParkInc.ProductData>::get_Count()
inline int32_t List_1_get_Count_m7CFE20B0CE54E2B965FB1D9DAF43E77D54F759C9_inline (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<ParkInc.ProductData>::get_Item(System.Int32)
inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* List_1_get_Item_m9FD5DFD7E3D6DF105ACFC9B677DBF2FBA8B4CFBE (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* (*) (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void ParkInc.ProductData::set_IsUnlocked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductData_set_IsUnlocked_mE1C613BE0692A5591AF13461DB88D57C03AB6B34 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::MoveNext()
inline bool Enumerator_MoveNext_mD12069B3B11B911BD7DCE64CB3CCB1791851D36B (Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData>::.ctor()
inline void Dictionary_2__ctor_m1B4225B8A89735E8DD1F30A5A5D25916740BD367 (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.String ParkInc.StoreDatabase::get_Item(ParkInc.TabType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreDatabase_get_Item_mA7199BE8556790E96EF456D50999FBF7529DBDE8 (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ParkInc.ProductData>::GetEnumerator()
inline Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A List_1_GetEnumerator_m576B34BECD580885AC789CC6E79BDAB1871DA27D (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A (*) (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ParkInc.ProductData>::Dispose()
inline void Enumerator_Dispose_mD5F9C84D5156D88CEEB1D1D832A3C771BFE4DFE9 (Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ParkInc.ProductData>::get_Current()
inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* Enumerator_get_Current_m12D283D090370D64DF121CE93D7E65B3DA4B4CC7_inline (Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A* __this, const RuntimeMethod* method)
{
	return ((  ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* (*) (Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String ParkInc.ProductData::get_UniqueId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductData_get_UniqueId_m85902C986CFB27C86ED418E68F160FDB5FB5AA38_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData>::Add(TKey,TValue)
inline void Dictionary_2_Add_m956A92976F688FB87E2FE7272F0E48E51C940C5D (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* __this, int32_t ___0_key, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B*, int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ParkInc.ProductData>::MoveNext()
inline bool Enumerator_MoveNext_m14CA2A68C5EC3537371957AF5BD557E332C962D3 (Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean ParkInc.ProductData::get_IsUnlocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductData_get_IsUnlocked_mDED00CE476C343C58E1675C29A0184B47E233515 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// System.Int32 ParkInc.ProductData::get_TabId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductData_get_TabId_m446AFCD33D0779EAB1DDDE2A8A4D5232BE8C3C46_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.StoreDatabase::set_Item(ParkInc.TabType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreDatabase_set_Item_m87DCD5AED04380A08FB02C171EF2BE7CDDF47FFA (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, int32_t ___0_type, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m0928A60DE1160996A4E9E0438A4A5A6E8D66D9E9 (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* __this, int32_t ___0_key, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B*, int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*, const RuntimeMethod*))Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void ParkInc.StoreController/ProductDelegate::Invoke(ParkInc.TabType,ParkInc.ProductData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_inline (ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, const RuntimeMethod* method) ;
// System.Boolean ParkInc.StoreController::SelectProduct(ParkInc.ProductData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StoreController_SelectProduct_m52280841ACB6D0AB41568DFC325C6AF7BFF13BD6 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___0_product, const RuntimeMethod* method) ;
// ParkInc.ProductData/PurchaseType ParkInc.ProductData::get_PurchType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductData_get_PurchType_mB7CD04164350C7C324F8F79F60394C6066F68043_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// ParkInc.Currency/Type ParkInc.ProductData::get_Currency()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductData_get_Currency_m148CA4D6284AABC3B4CF39C3642111564BCEB8EB_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// System.Int32 ParkInc.ProductData::get_Cost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductData_get_Cost_m818AD35CB7554245B5C40D400CA046043F5095D6_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// System.Boolean ParkInc.CurrenciesController::HasAmount(ParkInc.Currency/Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurrenciesController_HasAmount_m6A7807431D8A0C6896C90C79E0EA40FE5156B07C (int32_t ___0_currencyType, int32_t ___1_amount, const RuntimeMethod* method) ;
// System.Void ParkInc.CurrenciesController::Substract(ParkInc.Currency/Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrenciesController_Substract_mFA0230EB54A472E1DC70E3EABDC4D2D6F8B706F7 (int32_t ___0_currencyType, int32_t ___1_amount, const RuntimeMethod* method) ;
// System.Void ParkInc.ProductData::set_RewardedVideoWatchedAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductData_set_RewardedVideoWatchedAmount_m33F271A6C51B747563130B7D29B8F98B2F998F25 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.ProductData>::get_Item(TKey)
inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82 (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* (*) (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// UnityEngine.GameObject ParkInc.ProductData::get_Prefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProductData_get_Prefab_m28BEAC9E1B87BE48D23FCA84FF1F3B603C45C0DF_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// System.Void ParkInc.StoreController/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mD458E6D1C931CF0E709B6FC4846F819BE9621135 (U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<ParkInc.TabData,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC759BEF86D329154FFD71D34F9E29212ED2006B6 (Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// T ParkInc.CoreExtensions::FindRandomOrder<ParkInc.TabData>(T[],System.Func`2<T,System.Boolean>)
inline TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* CoreExtensions_FindRandomOrder_TisTabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A_m8C4B554FE7908AFECC776C98E3F912A1144EC1F7 (TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* ___0_array, Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92* ___1_action, const RuntimeMethod* method)
{
	return ((  TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* (*) (TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B*, Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92*, const RuntimeMethod*))CoreExtensions_FindRandomOrder_TisRuntimeObject_m10F47F694B8BF9B34AD32C22C2FFC499353D0126_gshared)(___0_array, ___1_action, method);
}
// ParkInc.TabData ParkInc.StoreController::GetTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* StoreController_GetTab_m09D882F1E6E513DED07B9877573C8025E4A008DD (int32_t ___0_tabId, const RuntimeMethod* method) ;
// T ParkInc.CoreExtensions::GetRandomItem<ParkInc.ProductData>(System.Collections.Generic.List`1<T>)
inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* CoreExtensions_GetRandomItem_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m461BABFCFFE7A8DD4693BF41DD064CB2E8E73D2F (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* ___0_list, const RuntimeMethod* method)
{
	return ((  ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* (*) (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*, const RuntimeMethod*))CoreExtensions_GetRandomItem_TisRuntimeObject_mA2659BE5C4170F1B2B40852234CC30F9A9DDF3ED_gshared)(___0_list, method);
}
// System.Void System.Func`2<ParkInc.ProductData,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m09BCA16D9ADF10523FAF3FF7D5B969A23980483E (Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// T ParkInc.CoreExtensions::FindRandomOrder<ParkInc.ProductData>(System.Collections.Generic.List`1<T>,System.Func`2<T,System.Boolean>)
inline ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* CoreExtensions_FindRandomOrder_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m9C099E4B41E0D2F833848F46706C783446BF38D6 (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* ___0_list, Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* ___1_action, const RuntimeMethod* method)
{
	return ((  ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* (*) (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*, Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7*, const RuntimeMethod*))CoreExtensions_FindRandomOrder_TisRuntimeObject_m28D298A085C32D27648B0C9F771AE9447165FE7E_gshared)(___0_list, ___1_action, method);
}
// System.Void ParkInc.StoreController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1615722D54A1D7549469FE6D15D1114FAA9245C3 (U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC* __this, const RuntimeMethod* method) ;
// System.Boolean ParkInc.ProductData::get_IsDummy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProductData_get_IsDummy_mA388F5BCA180FCD734DC1C5A62A8DF8C9DED501B_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.SimpleStringSave>::get_Item(TKey)
inline SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* Dictionary_2_get_Item_m5A6862C78E16047C1E2861A620BA4B3CC4BCE8DA (Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* (*) (Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::.ctor()
inline void Dictionary_2__ctor_m49CCD5C77DAE287C747C68506D5BB0D9891CAC8B (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC82DEDE2E51E2F7978AAAECAB3AF969A581E95AD (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC*, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<ParkInc.ProductData>::Add(T)
inline void List_1_Add_mBBB5CD5B86E07C00B9A3C99A8FAB9788EB3A2E6F_inline (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* __this, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<ParkInc.ProductData>::.ctor()
inline void List_1__ctor_m57C900003F89E4B9FAD22CD484BB6C4BE9839CA6 (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m6F23478E1D62F0D7CEE666AE781D3E5EB9DD19CD (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_key, List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC*, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A*, List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void ParkInc.ProductData::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductData_Init_m8E3CFDE190BDED27233D4F9E1642834D9E7C6892 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.SimpleStringSave>::.ctor()
inline void Dictionary_2__ctor_m323E231C450B1631FEFB96F3316ED55206AD7C5B (Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Object System.Array::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetValue_m007D247B8A6FE5BD60FD1CD510A714A416F2BA21 (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// T ParkInc.SaveController::GetSaveObject<ParkInc.SimpleStringSave>(System.String)
inline SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* SaveController_GetSaveObject_TisSimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E_mFC01EEEDA26A3CA73D0D1DFE63C808AE83ABAC47 (String_t* ___0_uniqueName, const RuntimeMethod* method)
{
	return ((  SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* (*) (String_t*, const RuntimeMethod*))SaveController_GetSaveObject_TisRuntimeObject_m41D4927F6716F6135C5A51A33C9DDA83E019FA75_gshared)(___0_uniqueName, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ParkInc.TabType,ParkInc.SimpleStringSave>::Add(TKey,TValue)
inline void Dictionary_2_Add_m915CC2E86505D71F7C30307494ABD466DCEB4457 (Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221* __this, int32_t ___0_key, SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221*, int32_t, SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 UnityEngine.Camera::get_scaledPixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_scaledPixelWidth_m249B2380A6E403DC1EA5E153546C4F61E226E42D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_scaledPixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_scaledPixelHeight_m9A61AA4F944C308A6F8B7D094C92C7A40EFB4AB9 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture ParkInc.StorePreview3D::get_Texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* StorePreview3D_get_Texture_mCBEB7D80C35B7F607DF2CA68D4578828DDC60814_inline (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject ParkInc.StorePreview3D::get_Prefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D_inline (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void ParkInc.StorePreview3D::set_Prefab(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorePreview3D_set_Prefab_mE082337E2328A1645CB01909AC6DA328A8204E6C_inline (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
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
// ParkInc.TweenCase ParkInc.SlicedFilledImageExtensions::DOFillAmount(ParkInc.SlicedFilledImage,System.Single,System.Single,System.Boolean,ParkInc.TweenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* SlicedFilledImageExtensions_DOFillAmount_m5401E9802F8FC0C8D50D9B5AA32C77BA5AE3A02B (SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* ___0_tweenObject, float ___1_resultValue, float ___2_time, bool ___3_unscaledTime, int32_t ___4_tweenType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new TweenCaseSlicedImageFill(tweenObject, resultValue).SetTime(time).SetUnscaledMode(unscaledTime).SetType(tweenType).StartTween();
		SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* L_0 = ___0_tweenObject;
		float L_1 = ___1_resultValue;
		TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824* L_2 = (TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824*)il2cpp_codegen_object_new(TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TweenCaseSlicedImageFill__ctor_m961390E7DC764016DFBEEC78FEE1D1183D71D30E(L_2, L_0, L_1, NULL);
		float L_3 = ___2_time;
		NullCheck(L_2);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_4;
		L_4 = TweenCase_SetTime_m621F6E2BAC2F4CD32F73C0420F1A4C06DB038A70(L_2, L_3, NULL);
		bool L_5 = ___3_unscaledTime;
		NullCheck(L_4);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_6;
		L_6 = TweenCase_SetUnscaledMode_m42C60783B683EEF890F131CE03F73C01FBA80DFD(L_4, L_5, NULL);
		int32_t L_7 = ___4_tweenType;
		NullCheck(L_6);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_8;
		L_8 = TweenCase_SetType_mBF6A9E0DC3977641126F534D22566ADF0E5F9093(L_6, L_7, NULL);
		NullCheck(L_8);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_9;
		L_9 = VirtualFuncInvoker0< TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* >::Invoke(4 /* ParkInc.TweenCase ParkInc.TweenCase::StartTween() */, L_8);
		return L_9;
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
// System.Void ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill::.ctor(ParkInc.SlicedFilledImage,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseSlicedImageFill__ctor_m961390E7DC764016DFBEEC78FEE1D1183D71D30E (TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824* __this, SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* ___0_tweenObject, float ___1_resultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCaseFunction_2__ctor_mF91B0388D7A6389DEABEC2C00770E714144E9E24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TweenCaseSlicedImageFill(SlicedFilledImage tweenObject, float resultValue) : base(tweenObject, resultValue)
		SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* L_0 = ___0_tweenObject;
		float L_1 = ___1_resultValue;
		TweenCaseFunction_2__ctor_mF91B0388D7A6389DEABEC2C00770E714144E9E24(__this, L_0, L_1, TweenCaseFunction_2__ctor_mF91B0388D7A6389DEABEC2C00770E714144E9E24_RuntimeMethod_var);
		// parentObject = tweenObject.gameObject;
		SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* L_2 = ___0_tweenObject;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		((TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)__this)->___parentObject_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)__this)->___parentObject_13), (void*)L_3);
		// startValue = tweenObject.fillAmount;
		SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* L_4 = ___0_tweenObject;
		NullCheck(L_4);
		float L_5;
		L_5 = SlicedFilledImage_get_fillAmount_mBF237439659E8C6E7AB2B5D4D2CB33B39FA9C42F_inline(L_4, NULL);
		((TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3*)__this)->___startValue_15 = L_5;
		// }
		return;
	}
}
// System.Boolean ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenCaseSlicedImageFill_Validate_m3BE10F7EB2630861A51EF70EC0E6B0F384979A12 (TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return parentObject != null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)__this)->___parentObject_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Void ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill::DefaultComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseSlicedImageFill_DefaultComplete_m2A37C19F106EC6BD6F76D44DBCE774F2786FE354 (TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824* __this, const RuntimeMethod* method) 
{
	{
		// tweenObject.fillAmount = resultValue;
		SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* L_0 = ((TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3*)__this)->___tweenObject_14;
		float L_1 = ((TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3*)__this)->___resultValue_16;
		NullCheck(L_0);
		SlicedFilledImage_set_fillAmount_mFD4E17BD43CBE66EB3855CAFF275F3EFB1554AAF(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.SlicedFilledImageExtensions/TweenCaseSlicedImageFill::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseSlicedImageFill_Invoke_mCE25B8AE9724ACB1C275271A9DD596F38BA03757 (TweenCaseSlicedImageFill_t592522AB284C2BB89388F08A4AF13CB6CBB85824* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	{
		// tweenObject.fillAmount = startValue + (resultValue - startValue) * Interpolate(state);
		SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* L_0 = ((TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3*)__this)->___tweenObject_14;
		float L_1 = ((TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3*)__this)->___startValue_15;
		float L_2 = ((TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3*)__this)->___resultValue_16;
		float L_3 = ((TweenCaseFunction_2_t35028101AE17D5771B1F2AB8A61B2FF1287A32B3*)__this)->___startValue_15;
		float L_4 = ((TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)__this)->___state_5;
		float L_5;
		L_5 = TweenCase_Interpolate_m743BE965240F72ED851402FF5ADBEE80D43D4586(__this, L_4, NULL);
		NullCheck(L_0);
		SlicedFilledImage_set_fillAmount_mFD4E17BD43CBE66EB3855CAFF275F3EFB1554AAF(L_0, ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_3)), L_5)))), NULL);
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
// System.Void ParkInc.SmartToggle::add_OnStateChanged(ParkInc.SmartToggle/ToggleEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_add_OnStateChanged_mCDA01EA250F1D2387F639A852147BA1E1D434A8F (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* V_0 = NULL;
	ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* V_1 = NULL;
	ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* V_2 = NULL;
	{
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_0 = __this->___OnStateChanged_13;
		V_0 = L_0;
	}

IL_0007:
	{
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_1 = V_0;
		V_1 = L_1;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_2 = V_1;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*)CastclassSealed((RuntimeObject*)L_4, ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500_il2cpp_TypeInfo_var));
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500** L_5 = (&__this->___OnStateChanged_13);
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_6 = V_2;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_7 = V_1;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_8;
		L_8 = InterlockedCompareExchangeImpl<ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*>(L_5, L_6, L_7);
		V_0 = L_8;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_9 = V_0;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_10 = V_1;
		if ((!(((RuntimeObject*)(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*)L_9) == ((RuntimeObject*)(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ParkInc.SmartToggle::remove_OnStateChanged(ParkInc.SmartToggle/ToggleEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_remove_OnStateChanged_mD9933074ED953D1DF400C29B5D7A26369DD2073B (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* V_0 = NULL;
	ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* V_1 = NULL;
	ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* V_2 = NULL;
	{
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_0 = __this->___OnStateChanged_13;
		V_0 = L_0;
	}

IL_0007:
	{
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_1 = V_0;
		V_1 = L_1;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_2 = V_1;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*)CastclassSealed((RuntimeObject*)L_4, ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500_il2cpp_TypeInfo_var));
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500** L_5 = (&__this->___OnStateChanged_13);
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_6 = V_2;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_7 = V_1;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_8;
		L_8 = InterlockedCompareExchangeImpl<ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*>(L_5, L_6, L_7);
		V_0 = L_8;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_9 = V_0;
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_10 = V_1;
		if ((!(((RuntimeObject*)(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*)L_9) == ((RuntimeObject*)(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean ParkInc.SmartToggle::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SmartToggle_get_State_mDBB73718A55BC23890058D976755BF2D803355BA (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, const RuntimeMethod* method) 
{
	{
		// get { return state; }
		bool L_0 = __this->___state_14;
		return L_0;
	}
}
// System.Void ParkInc.SmartToggle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_Awake_mADBC7F1ECD0C0A7D0E4CFA16D8F87F819430F042 (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, const RuntimeMethod* method) 
{
	{
		// if (!isInited)
		bool L_0 = __this->___isInited_19;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Init(defaultState);
		bool L_1 = __this->___defaultState_4;
		SmartToggle_Init_mFD6399597959EF578A9010D4F964FE9A089BE6D3(__this, L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ParkInc.SmartToggle::Init(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_Init_mFD6399597959EF578A9010D4F964FE9A089BE6D3 (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, bool ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B2_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B3_1 = NULL;
	{
		// movableElementGraphic = movableElement.GetComponent<Graphic>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___movableElement_5;
		NullCheck(L_0);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1;
		L_1 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(L_0, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		__this->___movableElementGraphic_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movableElementGraphic_6), (void*)L_1);
		// rectTransform = (RectTransform)transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___rectTransform_15 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_15), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		// offsetValue = (rectTransform.sizeDelta.x - movableElement.sizeDelta.x) / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___rectTransform_15;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_3, NULL);
		float L_5 = L_4.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___movableElement_5;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_6, NULL);
		float L_8 = L_7.___x_0;
		__this->___offsetValue_16 = ((float)(((float)il2cpp_codegen_subtract(L_5, L_8))/(2.0f)));
		// this.state = state;
		bool L_9 = ___0_state;
		__this->___state_14 = L_9;
		// movableElement.anchoredPosition = new Vector2(state ? offsetValue : -offsetValue, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___movableElement_5;
		bool L_11 = ___0_state;
		G_B1_0 = L_10;
		if (L_11)
		{
			G_B2_0 = L_10;
			goto IL_0068;
		}
	}
	{
		float L_12 = __this->___offsetValue_16;
		G_B3_0 = ((-L_12));
		G_B3_1 = G_B1_0;
		goto IL_006e;
	}

IL_0068:
	{
		float L_13 = __this->___offsetValue_16;
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_006e:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), G_B3_0, (0.0f), /*hidden argument*/NULL);
		NullCheck(G_B3_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(G_B3_1, L_14, NULL);
		// if (state)
		bool L_15 = ___0_state;
		if (!L_15)
		{
			goto IL_00d4;
		}
	}
	{
		// enableText.color = activeOnTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___enableText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___activeOnTextColor_9;
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// disableText.color = disabledTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___disableText_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___disabledTextColor_11;
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		// if (icon != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_20 = __this->___icon_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// icon.color = activeOnTextColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_22 = __this->___icon_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___activeOnTextColor_9;
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
	}

IL_00c1:
	{
		// movableElementGraphic.color = activeOnTextColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_24 = __this->___movableElementGraphic_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = __this->___activeOnTextColor_9;
		NullCheck(L_24);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
		goto IL_0126;
	}

IL_00d4:
	{
		// enableText.color = disabledTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___enableText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = __this->___disabledTextColor_11;
		NullCheck(L_26);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_27);
		// disableText.color = activeOffTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___disableText_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___activeOffTextColor_10;
		NullCheck(L_28);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_29);
		// if (icon != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_30 = __this->___icon_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_0115;
		}
	}
	{
		// icon.color = activeOffTextColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_32 = __this->___icon_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = __this->___activeOffTextColor_10;
		NullCheck(L_32);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
	}

IL_0115:
	{
		// movableElementGraphic.color = activeOffTextColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_34 = __this->___movableElementGraphic_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = __this->___activeOffTextColor_10;
		NullCheck(L_34);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_34, L_35);
	}

IL_0126:
	{
		// isInited = true;
		__this->___isInited_19 = (bool)1;
		// }
		return;
	}
}
// System.Void ParkInc.SmartToggle::SetStateImmediately(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_SetStateImmediately_m3AD395D29DE3900373A15B2221FE40104B6F9455 (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, bool ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B8_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B9_1 = NULL;
	{
		// if (this.state != state)
		bool L_0 = __this->___state_14;
		bool L_1 = ___0_state;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0117;
		}
	}
	{
		// if (animationTweenCase != null && !animationTweenCase.isCompleted)
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_2 = __this->___animationTweenCase_18;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_3 = __this->___animationTweenCase_18;
		NullCheck(L_3);
		bool L_4 = L_3->___isCompleted_9;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// animationTweenCase.Kill();
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_5 = __this->___animationTweenCase_18;
		NullCheck(L_5);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_6;
		L_6 = TweenCase_Kill_m934F81CF89410A401DCFF47026E6A481FC12A714(L_5, NULL);
	}

IL_002d:
	{
		// this.state = state;
		bool L_7 = ___0_state;
		__this->___state_14 = L_7;
		// if (OnStateChanged != null)
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_8 = __this->___OnStateChanged_13;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// OnStateChanged.Invoke(state);
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_9 = __this->___OnStateChanged_13;
		bool L_10 = ___0_state;
		NullCheck(L_9);
		ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_inline(L_9, L_10, NULL);
	}

IL_0048:
	{
		// movableElement.anchoredPosition = new Vector2(state ? offsetValue : -offsetValue, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___movableElement_5;
		bool L_12 = ___0_state;
		G_B7_0 = L_11;
		if (L_12)
		{
			G_B8_0 = L_11;
			goto IL_005a;
		}
	}
	{
		float L_13 = __this->___offsetValue_16;
		G_B9_0 = ((-L_13));
		G_B9_1 = G_B7_0;
		goto IL_0060;
	}

IL_005a:
	{
		float L_14 = __this->___offsetValue_16;
		G_B9_0 = L_14;
		G_B9_1 = G_B8_0;
	}

IL_0060:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), G_B9_0, (0.0f), /*hidden argument*/NULL);
		NullCheck(G_B9_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(G_B9_1, L_15, NULL);
		// if (state)
		bool L_16 = ___0_state;
		if (!L_16)
		{
			goto IL_00c5;
		}
	}
	{
		// enableText.color = activeOnTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___enableText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___activeOnTextColor_9;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// disableText.color = disabledTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___disableText_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___disabledTextColor_11;
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		// if (icon != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_21 = __this->___icon_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// icon.color = activeOnTextColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_23 = __this->___icon_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = __this->___activeOnTextColor_9;
		NullCheck(L_23);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
	}

IL_00b3:
	{
		// movableElementGraphic.color = activeOnTextColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_25 = __this->___movableElementGraphic_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = __this->___activeOnTextColor_9;
		NullCheck(L_25);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_26);
		return;
	}

IL_00c5:
	{
		// enableText.color = disabledTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___enableText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = __this->___disabledTextColor_11;
		NullCheck(L_27);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_27, L_28);
		// disableText.color = activeOffTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___disableText_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = __this->___activeOffTextColor_10;
		NullCheck(L_29);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// if (icon != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_31 = __this->___icon_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_0106;
		}
	}
	{
		// icon.color = activeOffTextColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_33 = __this->___icon_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = __this->___activeOffTextColor_10;
		NullCheck(L_33);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_33, L_34);
	}

IL_0106:
	{
		// movableElementGraphic.color = activeOffTextColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_35 = __this->___movableElementGraphic_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___activeOffTextColor_10;
		NullCheck(L_35);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void ParkInc.SmartToggle::SetState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_SetState_mA491ED01B4FEE8F56C8EC22CF3D9C8321451B554 (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, bool ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CSetStateU3Eb__0_m9573E387D1992750D9587DAAD5435E10D97978CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47F6D5411E119CBD507B62E2B2DD61E933739E5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB75AF09DF83698FA4375837CF2045FF447F61B5A);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B7_0 = NULL;
	SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* G_B7_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B6_0 = NULL;
	SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B8_1 = NULL;
	SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* G_B8_2 = NULL;
	{
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_0 = (U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass24_0__ctor_m931F313A0D966E6A14013AE3EDD0FD4D48ED15A5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_1 = V_0;
		bool L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_0 = L_2;
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// Debug.Log("Toggle. Current state: " + this.state + "  new state: " + state);
		bool* L_4 = (&__this->___state_14);
		String_t* L_5;
		L_5 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_4, NULL);
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_6 = V_0;
		NullCheck(L_6);
		bool* L_7 = (&L_6->___state_0);
		String_t* L_8;
		L_8 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral47F6D5411E119CBD507B62E2B2DD61E933739E5A, L_5, _stringLiteralB75AF09DF83698FA4375837CF2045FF447F61B5A, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// if (isBusy && this.state == state)
		bool L_10 = __this->___isBusy_17;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		bool L_11 = __this->___state_14;
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = L_12->___state_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0055;
		}
	}
	{
		// return;
		return;
	}

IL_0055:
	{
		// isBusy = true;
		__this->___isBusy_17 = (bool)1;
		// this.state = state;
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = L_14->___state_0;
		__this->___state_14 = L_15;
		// if (OnStateChanged != null)
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_16 = __this->___OnStateChanged_13;
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		// OnStateChanged.Invoke(state);
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* L_17 = __this->___OnStateChanged_13;
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_18 = V_0;
		NullCheck(L_18);
		bool L_19 = L_18->___state_0;
		NullCheck(L_17);
		ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_inline(L_17, L_19, NULL);
	}

IL_0081:
	{
		// animationTweenCase = movableElement.DOAnchoredPosition(new Vector3(state ? offsetValue : -offsetValue, 0), 0.1f, 0, true).SetEasing(Ease.Type.CubicOut).OnComplete(delegate
		// {
		//     if (state)
		//     {
		//         enableText.color = activeOnTextColor;
		//         disableText.color = disabledTextColor;
		// 
		//         if (icon != null)
		//             icon.color = activeOnTextColor;
		// 
		//         movableElementGraphic.color = activeOnTextColor;
		//     }
		//     else
		//     {
		//         enableText.color = disabledTextColor;
		//         disableText.color = activeOffTextColor;
		// 
		//         if (icon != null)
		//             icon.color = activeOffTextColor;
		// 
		//         movableElementGraphic.color = activeOffTextColor;
		//     }
		// 
		//     isBusy = false;
		// });
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___movableElement_5;
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_21 = V_0;
		NullCheck(L_21);
		bool L_22 = L_21->___state_0;
		G_B6_0 = L_20;
		G_B6_1 = __this;
		if (L_22)
		{
			G_B7_0 = L_20;
			G_B7_1 = __this;
			goto IL_0099;
		}
	}
	{
		float L_23 = __this->___offsetValue_16;
		G_B8_0 = ((-L_23));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_009f;
	}

IL_0099:
	{
		float L_24 = __this->___offsetValue_16;
		G_B8_0 = L_24;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_009f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_25), G_B8_0, (0.0f), /*hidden argument*/NULL);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_26;
		L_26 = TweenExtensions_DOAnchoredPosition_m6B82AE14678D320B013E37A2785C78A7DED6E545(G_B8_1, L_25, (0.100000001f), (0.0f), (bool)1, 0, NULL);
		NullCheck(L_26);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_27;
		L_27 = TweenCase_SetEasing_mD123DE848C7CC0996DC2BAAFC45FD99DB9E31213(L_26, 5, NULL);
		U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* L_28 = V_0;
		TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* L_29 = (TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950*)il2cpp_codegen_object_new(TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		TweenCallback__ctor_m89B6636475981D446B1D1DAAA8B85D9B55E01099(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CSetStateU3Eb__0_m9573E387D1992750D9587DAAD5435E10D97978CF_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_30;
		L_30 = TweenCase_OnComplete_m3168F35ADC3CD6B725404ADE5D96F6CFCC3E83CD(L_27, L_29, NULL);
		NullCheck(G_B8_2);
		G_B8_2->___animationTweenCase_18 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___animationTweenCase_18), (void*)L_30);
		// }
		return;
	}
}
// System.Void ParkInc.SmartToggle::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_Toggle_mE0CCF2DAC1C06FC03738BD14B301C5D9FDF0A2D2 (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, const RuntimeMethod* method) 
{
	{
		// SetState(!state);
		bool L_0 = __this->___state_14;
		SmartToggle_SetState_mA491ED01B4FEE8F56C8EC22CF3D9C8321451B554(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ParkInc.SmartToggle::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_OnPointerUp_mBABE560548A0C318D986D0F0305CFC40258E75E6 (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// SetState(!state);
		bool L_0 = __this->___state_14;
		SmartToggle_SetState_mA491ED01B4FEE8F56C8EC22CF3D9C8321451B554(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ParkInc.SmartToggle::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle_OnPointerDown_m09A98CEE70367DD8CB3A19C3EE06D5EC8797AFFD (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ParkInc.SmartToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartToggle__ctor_m230F6DD8072F6D44A82BBAA79AE674B96F47B58A (SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* __this, const RuntimeMethod* method) 
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
void ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_Multicast(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* currentDelegate = reinterpret_cast<ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_state, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_OpenInst(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_state, method);
}
void ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_OpenStatic(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_state, method);
}
void ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_OpenStaticInvoker(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_state);
}
void ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_ClosedStaticInvoker(ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_state);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500 (ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_state));

}
// System.Void ParkInc.SmartToggle/ToggleEvents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleEvents__ctor_m657BDDE35545193C78E5634F7520A75AF2AE65AF (ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_Multicast;
}
// System.Void ParkInc.SmartToggle/ToggleEvents::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32 (ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ParkInc.SmartToggle/ToggleEvents::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToggleEvents_BeginInvoke_m8F618279193A4413C50F5C6D18145F6608269778 (ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_state);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ParkInc.SmartToggle/ToggleEvents::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleEvents_EndInvoke_mD0A34AB762C3390EA3536FCFFED74F5DED6ECD08 (ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParkInc.SmartToggle/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m931F313A0D966E6A14013AE3EDD0FD4D48ED15A5 (U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ParkInc.SmartToggle/<>c__DisplayClass24_0::<SetState>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CSetStateU3Eb__0_m9573E387D1992750D9587DAAD5435E10D97978CF (U3CU3Ec__DisplayClass24_0_t5B54AC396B226AB914B3D5071FB1949773E35C59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state)
		bool L_0 = __this->___state_0;
		if (!L_0)
		{
			goto IL_008c;
		}
	}
	{
		// enableText.color = activeOnTextColor;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_1 = __this->___U3CU3E4__this_1;
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = L_1->___enableText_7;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_3 = __this->___U3CU3E4__this_1;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___activeOnTextColor_9;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// disableText.color = disabledTextColor;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = L_5->___disableText_8;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_7 = __this->___U3CU3E4__this_1;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = L_7->___disabledTextColor_11;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_8);
		// if (icon != null)
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_9 = __this->___U3CU3E4__this_1;
		NullCheck(L_9);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_10 = L_9->___icon_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// icon.color = activeOnTextColor;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_12 = __this->___U3CU3E4__this_1;
		NullCheck(L_12);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_13 = L_12->___icon_12;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_14 = __this->___U3CU3E4__this_1;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = L_14->___activeOnTextColor_9;
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
	}

IL_006f:
	{
		// movableElementGraphic.color = activeOnTextColor;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_16 = __this->___U3CU3E4__this_1;
		NullCheck(L_16);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_17 = L_16->___movableElementGraphic_6;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_18 = __this->___U3CU3E4__this_1;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = L_18->___activeOnTextColor_9;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_19);
		goto IL_010b;
	}

IL_008c:
	{
		// enableText.color = disabledTextColor;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_20 = __this->___U3CU3E4__this_1;
		NullCheck(L_20);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = L_20->___enableText_7;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_22 = __this->___U3CU3E4__this_1;
		NullCheck(L_22);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = L_22->___disabledTextColor_11;
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_23);
		// disableText.color = activeOffTextColor;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_24 = __this->___U3CU3E4__this_1;
		NullCheck(L_24);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = L_24->___disableText_8;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_26 = __this->___U3CU3E4__this_1;
		NullCheck(L_26);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = L_26->___activeOffTextColor_10;
		NullCheck(L_25);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_27);
		// if (icon != null)
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_28 = __this->___U3CU3E4__this_1;
		NullCheck(L_28);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_29 = L_28->___icon_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_30)
		{
			goto IL_00f0;
		}
	}
	{
		// icon.color = activeOffTextColor;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_31 = __this->___U3CU3E4__this_1;
		NullCheck(L_31);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_32 = L_31->___icon_12;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_33 = __this->___U3CU3E4__this_1;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = L_33->___activeOffTextColor_10;
		NullCheck(L_32);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_34);
	}

IL_00f0:
	{
		// movableElementGraphic.color = activeOffTextColor;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_35 = __this->___U3CU3E4__this_1;
		NullCheck(L_35);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_36 = L_35->___movableElementGraphic_6;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_37 = __this->___U3CU3E4__this_1;
		NullCheck(L_37);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = L_37->___activeOffTextColor_10;
		NullCheck(L_36);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_36, L_38);
	}

IL_010b:
	{
		// isBusy = false;
		SmartToggle_t977FF28EF091DF5733B685A5738B1BA21F23FCFB* L_39 = __this->___U3CU3E4__this_1;
		NullCheck(L_39);
		L_39->___isBusy_17 = (bool)0;
		// });
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
// System.Void ParkInc.UXButton::OnClick(ParkInc.Tween/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXButton_OnClick_m9F07D471336DB78809839CF82795809AC242E315 (UXButton_t3BA3EE848462AAA58258D81B65A1329C8D2573D2* __this, TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UXButton_U3COnClickU3Eb__1_0_mADBD1386FD11C48B16BF221149AC37AB008F4264_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnClick(delegate
		// {
		//     if (onClick != null)
		//         onClick.Invoke();
		// });
		TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* L_0 = (TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950*)il2cpp_codegen_object_new(TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TweenCallback__ctor_m89B6636475981D446B1D1DAAA8B85D9B55E01099(L_0, __this, (intptr_t)((void*)UXButton_U3COnClickU3Eb__1_0_mADBD1386FD11C48B16BF221149AC37AB008F4264_RuntimeMethod_var), NULL);
		BaseButton_OnClick_m96FFC4F0808CB4DC6B6CCCD4AEAE1F22E269810B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.UXButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXButton__ctor_mE4E2A821F588FED449959DC8E854B64A48F9C980 (UXButton_t3BA3EE848462AAA58258D81B65A1329C8D2573D2* __this, const RuntimeMethod* method) 
{
	{
		BaseButton__ctor_m9DFFA543A1722994C68F6268ABDF99434816EA52(__this, NULL);
		return;
	}
}
// System.Void ParkInc.UXButton::<OnClick>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXButton_U3COnClickU3Eb__1_0_mADBD1386FD11C48B16BF221149AC37AB008F4264 (UXButton_t3BA3EE848462AAA58258D81B65A1329C8D2573D2* __this, const RuntimeMethod* method) 
{
	{
		// if (onClick != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onClick_18;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onClick.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___onClick_18;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
	}

IL_0013:
	{
		// });
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
// System.Void ParkInc.UXButtonAnimator::OnClick(ParkInc.Tween/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXButtonAnimator_OnClick_m7C272A7ED320A25F62B978CAF3FF6226ADEC650A (UXButtonAnimator_t81326400BAEC530FD41ACE4A1C966C1799F77CD5* __this, TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UXButtonAnimator_U3COnClickU3Eb__1_0_mDC791A51DC526AB154BCFEC9EAC2887707FE4F86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnClick(delegate
		// {
		//     if (onClick != null)
		//         onClick.Invoke();
		// });
		TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* L_0 = (TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950*)il2cpp_codegen_object_new(TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TweenCallback__ctor_m89B6636475981D446B1D1DAAA8B85D9B55E01099(L_0, __this, (intptr_t)((void*)UXButtonAnimator_U3COnClickU3Eb__1_0_mDC791A51DC526AB154BCFEC9EAC2887707FE4F86_RuntimeMethod_var), NULL);
		BaseButton_OnClick_m96FFC4F0808CB4DC6B6CCCD4AEAE1F22E269810B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.UXButtonAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXButtonAnimator__ctor_mBA775FD5119645D6F0F8F2F7E506BB62A7B895AF (UXButtonAnimator_t81326400BAEC530FD41ACE4A1C966C1799F77CD5* __this, const RuntimeMethod* method) 
{
	{
		BaseButton__ctor_m9DFFA543A1722994C68F6268ABDF99434816EA52(__this, NULL);
		return;
	}
}
// System.Void ParkInc.UXButtonAnimator::<OnClick>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXButtonAnimator_U3COnClickU3Eb__1_0_mDC791A51DC526AB154BCFEC9EAC2887707FE4F86 (UXButtonAnimator_t81326400BAEC530FD41ACE4A1C966C1799F77CD5* __this, const RuntimeMethod* method) 
{
	{
		// if (onClick != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onClick_18;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onClick.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___onClick_18;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
	}

IL_0013:
	{
		// });
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
// UnityEngine.Vector3 ParkInc.Bezier::EvaluateQuadratic(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_EvaluateQuadratic_mF469EAB12B966E4EE7A05BADE572EE274DBF0BC6 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_c, float ___3_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 p0 = Vector3.Lerp(a, b, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_b;
		float L_2 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_0, L_1, L_2, NULL);
		// Vector3 p1 = Vector3.Lerp(b, c, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___2_c;
		float L_6 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_5, L_6, NULL);
		V_0 = L_7;
		// return Vector3.Lerp(p0, p1, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_3, L_8, L_9, NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 ParkInc.Bezier::EvaluateCubic(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_EvaluateCubic_m6F83CCF5C27C327B6BED6A2B3BE9342A2F721F92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_c, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_d, float ___4_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 p0 = EvaluateQuadratic(a, b, c, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_c;
		float L_3 = ___4_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bezier_EvaluateQuadratic_mF469EAB12B966E4EE7A05BADE572EE274DBF0BC6(L_0, L_1, L_2, L_3, NULL);
		// Vector3 p1 = EvaluateQuadratic(b, c, d, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2_c;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___3_d;
		float L_8 = ___4_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bezier_EvaluateQuadratic_mF469EAB12B966E4EE7A05BADE572EE274DBF0BC6(L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		// return Vector3.Lerp(p0, p1, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = ___4_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_10, L_11, NULL);
		return L_12;
	}
}
// System.Single ParkInc.Bezier::AproximateLength(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bezier_AproximateLength_m6B01AF9F892B099BCEDCF4F16F77D98635FFD755 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_points, const RuntimeMethod* method) 
{
	{
		// return AproximateLength(points[0], points[1], points[2], points[3]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_points;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___0_points;
		NullCheck(L_3);
		int32_t L_4 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___0_points;
		NullCheck(L_6);
		int32_t L_7 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ___0_points;
		NullCheck(L_9);
		int32_t L_10 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12;
		L_12 = Bezier_AproximateLength_m3938236618CAA2A392687A0ABFAD4096ACBF56E8(L_2, L_5, L_8, L_11, NULL);
		return L_12;
	}
}
// System.Single ParkInc.Bezier::AproximateLength(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bezier_AproximateLength_m3938236618CAA2A392687A0ABFAD4096ACBF56E8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_p2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_p3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float chord = (p3 - p0).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___3_p3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_0 = L_3;
		// float cont_net = (p0 - p1).magnitude + (p2 - p1).magnitude + (p3 - p2).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		V_1 = L_6;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___2_p2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___3_p3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___2_p2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		V_1 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		// return (cont_net + chord) / 2;
		float L_16 = V_0;
		return ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_7, L_11)), L_15)), L_16))/(2.0f)));
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
// System.Void ParkInc.ColorDebug::Log(ParkInc.ColoredText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebug_Log_mC14F680DC4AB25D36890438BB940BD500727823D (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ___0_extendedFormatter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(extendedFormatter.text);
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_0 = ___0_extendedFormatter;
		NullCheck(L_0);
		String_t* L_1 = L_0->___text_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.ColorDebug::Log(UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebug_Log_m4E87E3E2105FBBB2564AB081BB7FEE0E95C63A67 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(new ColoredText(color, value).text);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		String_t* L_1 = ___1_value;
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_2 = (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3*)il2cpp_codegen_object_new(ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ColoredText__ctor_m6C5803392AA7EA9059DB699C9CB05FF65BD58400(L_2, L_0, L_1, NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___text_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.ColorDebug::Log(UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebug_Log_m5A4ABE5153209150528A04551B027C7807D60D89 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(new ColoredText(color, value.ToString()).text);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___1_value), NULL);
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_2 = (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3*)il2cpp_codegen_object_new(ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ColoredText__ctor_m6C5803392AA7EA9059DB699C9CB05FF65BD58400(L_2, L_0, L_1, NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___text_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.ColorDebug::Log(UnityEngine.Color,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebug_Log_m931879BF36B93AACC2D2D6916B1BC996EA6E8995 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, String_t* ___1_stringLabel, int32_t ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ColoredText log = new ColoredText(color, stringLabel + " = ").Append(value);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		String_t* L_1 = ___1_stringLabel;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, NULL);
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_3 = (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3*)il2cpp_codegen_object_new(ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ColoredText__ctor_m6C5803392AA7EA9059DB699C9CB05FF65BD58400(L_3, L_0, L_2, NULL);
		int32_t L_4 = ___2_value;
		NullCheck(L_3);
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_5;
		L_5 = ColoredText_Append_m3F3C931CF5C3B1C33FF6E1AEFD3F230371965DA4(L_3, L_4, NULL);
		// Debug.Log(log.text);
		NullCheck(L_5);
		String_t* L_6 = L_5->___text_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.ColorDebug::Log(ParkInc.CustomColor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebug_Log_m708D02DA21876D9003CB78B39D8B42CA56548A14 (int32_t ___0_color, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(new ColoredText(color, value).text);
		int32_t L_0 = ___0_color;
		String_t* L_1 = ___1_value;
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_2 = (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3*)il2cpp_codegen_object_new(ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ColoredText__ctor_m0CBA5157F6436533FFBBBF5A03C342B125C48380(L_2, L_0, L_1, NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___text_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.ColorDebug::Log(ParkInc.CustomColor,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebug_Log_mCD16D454678E18AEFB17974377EA32A49DAABF28 (int32_t ___0_color, String_t* ___1_stringLabel, int32_t ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ColoredText log = new ColoredText(color, stringLabel + " = ").Append(value);
		int32_t L_0 = ___0_color;
		String_t* L_1 = ___1_stringLabel;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, NULL);
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_3 = (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3*)il2cpp_codegen_object_new(ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ColoredText__ctor_m0CBA5157F6436533FFBBBF5A03C342B125C48380(L_3, L_0, L_2, NULL);
		int32_t L_4 = ___2_value;
		NullCheck(L_3);
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_5;
		L_5 = ColoredText_Append_m3F3C931CF5C3B1C33FF6E1AEFD3F230371965DA4(L_3, L_4, NULL);
		// Debug.Log(log.text);
		NullCheck(L_5);
		String_t* L_6 = L_5->___text_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
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
// System.Void ParkInc.ColoredText::.ctor(UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText__ctor_m6C5803392AA7EA9059DB699C9CB05FF65BD58400 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, String_t* ___1_text, const RuntimeMethod* method) 
{
	{
		// public ColoredText(Color color, string text)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.text = text;
		String_t* L_0 = ___1_text;
		__this->___text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_0);
		// ApllyColor(color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		ColoredText_ApllyColor_mF165A5BE612F6BA4A3B39908CAAF8AC4E1F92AEB(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.ColoredText::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText__ctor_m5289A3411A45ADF48B3A56083E7283B963E65F75 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, String_t* ___0_hashCode, String_t* ___1_text, const RuntimeMethod* method) 
{
	{
		// public ColoredText(string hashCode, string text)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.text = text;
		String_t* L_0 = ___1_text;
		__this->___text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_0);
		// ApllyColor(hashCode);
		String_t* L_1 = ___0_hashCode;
		ColoredText_ApllyColor_m3722F45492B18E8EBDD58240F7D012A1E3D5C313(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.ColoredText::.ctor(ParkInc.CustomColor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText__ctor_m0CBA5157F6436533FFBBBF5A03C342B125C48380 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, int32_t ___0_colorEnum, String_t* ___1_text, const RuntimeMethod* method) 
{
	{
		// public ColoredText(CustomColor colorEnum, string text)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.text = text;
		String_t* L_0 = ___1_text;
		__this->___text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_0);
		// ApllyColor(ColorDebugSettings.GetColorByEnum(colorEnum));
		int32_t L_1 = ___0_colorEnum;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = ColorDebugSettings_GetColorByEnum_m197F7F7C999407A0C02A7851C4C113D6CB346665(L_1, NULL);
		ColoredText_ApllyColor_mF165A5BE612F6BA4A3B39908CAAF8AC4E1F92AEB(__this, L_2, NULL);
		// }
		return;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::MakeBold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_MakeBold_m1A5388EA67F6C2D536F59A913700139C7E4C2A1D (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = $"<b>{text}</b>";
		String_t* L_0 = __this->___text_0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66, L_0, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
		__this->___text_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_1);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::MakeItalic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_MakeItalic_m7C0313C8380DF392194B7F0E6B5431E4EB0A7616 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB274C8E7F9D623843DDC71F8547A81A715E1E87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB877F63B416A7EDF90D586527E3CB767BFAA82B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = $"<i>{text}</i>";
		String_t* L_0 = __this->___text_0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFB877F63B416A7EDF90D586527E3CB767BFAA82B, L_0, _stringLiteralFB274C8E7F9D623843DDC71F8547A81A715E1E87, NULL);
		__this->___text_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_1);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_ToUpper_m812BBED825CAE496536F68D3FC69770C85238B35 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, const RuntimeMethod* method) 
{
	{
		// text = text.ToUpper();
		String_t* L_0 = __this->___text_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_0, NULL);
		__this->___text_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_1);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_ToLower_mA24DE937615E8836042622581B972CE2AF33A481 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, const RuntimeMethod* method) 
{
	{
		// text = text.ToLower();
		String_t* L_0 = __this->___text_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		__this->___text_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_1);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_Append_m3F3C931CF5C3B1C33FF6E1AEFD3F230371965DA4 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// text += value.ToString();
		String_t* L_0 = __this->___text_0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_value), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		__this->___text_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_2);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_Append_m67487DA990760ABEAAE69647A38F582DBFED2E32 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// text += value.ToString();
		String_t* L_0 = __this->___text_0;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		__this->___text_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_2);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_Append_m33A04607488142F2B14DED773AE33384BF7FDC41 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// text += value.ToString();
		String_t* L_0 = __this->___text_0;
		String_t* L_1;
		L_1 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___0_value), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		__this->___text_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_2);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_Append_mEB3EA2E87B9F77C0479A718AD0B211B65986EC57 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// text += value;
		String_t* L_0 = __this->___text_0;
		String_t* L_1 = ___0_value;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		__this->___text_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_2);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::Append(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_Append_m4B2E5B4830D622D732E8D967029C308324ED10A4 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// text += value;
		String_t* L_0 = __this->___text_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		V_0 = L_1;
		String_t* L_2;
		L_2 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_2, NULL);
		__this->___text_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_3);
		// return this;
		return __this;
	}
}
// ParkInc.ColoredText ParkInc.ColoredText::Append(ParkInc.ColoredText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ColoredText_Append_mB950E275D044D2DD74A163AAC0AE361AB4A52222 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* ___0_coloredText, const RuntimeMethod* method) 
{
	{
		// text += coloredText.text;
		String_t* L_0 = __this->___text_0;
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_1 = ___0_coloredText;
		NullCheck(L_1);
		String_t* L_2 = L_1->___text_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_2, NULL);
		__this->___text_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_3);
		// return this;
		return __this;
	}
}
// System.Void ParkInc.ColoredText::ApllyColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText_ApllyColor_mF165A5BE612F6BA4A3B39908CAAF8AC4E1F92AEB (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = $"<color={color.ToHex()}>{text}</color>";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		String_t* L_4;
		L_4 = CoreExtensions_ToHex_m6E964F07BBC2DE51081D876F9009A81BE5E1440A(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = __this->___text_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_9;
		L_9 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		__this->___text_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_9);
		// }
		return;
	}
}
// System.Void ParkInc.ColoredText::ApllyColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColoredText_ApllyColor_m3722F45492B18E8EBDD58240F7D012A1E3D5C313 (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* __this, String_t* ___0_hashCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = $"<color={hashCode}>{text}</color>";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___0_hashCode;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = __this->___text_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_8;
		L_8 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_7, NULL);
		__this->___text_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_8);
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
// System.Void ParkInc.ColorDebugSettings::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebugSettings_Init_m45EEA520A88E8F34D74EAC11B562336FA825CF7F (ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BF55F9ECBF088B7DD4C43096FF915DEDC8E180D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B44F01CF668249D62CAA78C9D7BC01CD3EE1056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9769DA0FCF65652A6F8C5E4E914CCA27F612AC98);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_StaticFields*)il2cpp_codegen_static_fields_for(ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_StaticFields*)il2cpp_codegen_static_fields_for(ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// ColorDebug.Log(new ColoredText("#FFFEB7", "ColorDebug => ").MakeBold().Append("Inited"));
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_0 = (ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3*)il2cpp_codegen_object_new(ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ColoredText__ctor_m5289A3411A45ADF48B3A56083E7283B963E65F75(L_0, _stringLiteral9769DA0FCF65652A6F8C5E4E914CCA27F612AC98, _stringLiteral0BF55F9ECBF088B7DD4C43096FF915DEDC8E180D, NULL);
		NullCheck(L_0);
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_1;
		L_1 = ColoredText_MakeBold_m1A5388EA67F6C2D536F59A913700139C7E4C2A1D(L_0, NULL);
		NullCheck(L_1);
		ColoredText_t2FFDFCC4ECCBF79DD6194198E34F305A62A39CD3* L_2;
		L_2 = ColoredText_Append_mEB3EA2E87B9F77C0479A718AD0B211B65986EC57(L_1, _stringLiteral3B44F01CF668249D62CAA78C9D7BC01CD3EE1056, NULL);
		ColorDebug_Log_mC14F680DC4AB25D36890438BB940BD500727823D(L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Color ParkInc.ColorDebugSettings::GetColorByEnum(ParkInc.CustomColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorDebugSettings_GetColorByEnum_m197F7F7C999407A0C02A7851C4C113D6CB346665 (int32_t ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance.colorInfos == null && instance.colorInfos.Length == 0)
		ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116* L_0 = ((ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_StaticFields*)il2cpp_codegen_static_fields_for(ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		ColorInfoU5BU5D_tDC15EB08B4033CBF6FE131EF5F153BF31CD21DC1* L_1 = L_0->___colorInfos_5;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116* L_2 = ((ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_StaticFields*)il2cpp_codegen_static_fields_for(ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		ColorInfoU5BU5D_tDC15EB08B4033CBF6FE131EF5F153BF31CD21DC1* L_3 = L_2->___colorInfos_5;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_001f;
		}
	}
	{
		// return Color.black; // By default
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		return L_4;
	}

IL_001f:
	{
		// return instance.colorInfos[(int)color].colorValue;
		ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116* L_5 = ((ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_StaticFields*)il2cpp_codegen_static_fields_for(ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		ColorInfoU5BU5D_tDC15EB08B4033CBF6FE131EF5F153BF31CD21DC1* L_6 = L_5->___colorInfos_5;
		int32_t L_7 = ___0_color;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___colorValue_1;
		return L_10;
	}
}
// System.Void ParkInc.ColorDebugSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDebugSettings__ctor_mE8EABFF52479107B95135E8FF1D9ADECE7833079 (ColorDebugSettings_t9A5C85AC8E3D258CDEED01E60F793D38B4197116* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ParkInc.ColorDebugSettings/ColorInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorInfo__ctor_mE67AD8A3A782B4A59383D98F0CC118588244AB5F (ColorInfo_t55753D8ECF5C10FB8A63E734337106735CE63F1A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ParkInc.RequireColorAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequireColorAttribute__ctor_m8D7FB5EEA980EC7B3821954E381CE6D1F7BC4DEA (RequireColorAttribute_t728A8F04DCFE7F34B634C861B151C2656C9A1BC8* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public RequireColorAttribute(string name)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___0_name;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
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
// System.Int32 ParkInc.CoreExtensions::SetRandomSign(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CoreExtensions_SetRandomSign_mEC5BD941C4F7B91F3CFC6F29EA444757A4E3E99D (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// return value * Random.value < 0.5f ? 1 : -1;
		int32_t L_0 = ___0_value;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		if ((((float)((float)il2cpp_codegen_multiply(((float)L_0), L_1))) < ((float)(0.5f))))
		{
			goto IL_0011;
		}
	}
	{
		return (-1);
	}

IL_0011:
	{
		return 1;
	}
}
// System.Single ParkInc.CoreExtensions::SetRandomSign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CoreExtensions_SetRandomSign_mE45EA7F964176595DB41AC34DE2126796A30235D (float ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// return value * Random.value < 0.5f ? 1 : -1;
		float L_0 = ___0_value;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		if ((((float)((float)il2cpp_codegen_multiply(L_0, L_1))) < ((float)(0.5f))))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		return ((float)G_B3_0);
	}
}
// System.Double ParkInc.CoreExtensions::SetRandomSign(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CoreExtensions_SetRandomSign_m4ACEFCC46A8769BC865BE1CD1B9CD44FC5988A8D (double ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// return value * Random.value < 0.5f ? 1 : -1;
		double L_0 = ___0_value;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		if ((((double)((double)il2cpp_codegen_multiply(L_0, ((double)L_1)))) < ((double)(0.5))))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		return ((double)G_B3_0);
	}
}
// System.String ParkInc.CoreExtensions::AddSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_AddSpaces_m6F72408CC4DB966C88B700B69AF1003FACD6A15A (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94D92116D5FEFD4DDDBAE49BEC55B18F8EFE8B25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF54BCA5EFFA7D5270F422DDA0C936A0C3ED83CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Regex.Replace(value, "([a-z]) ?([A-Z])", "$1 $2");
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_0, _stringLiteralBF54BCA5EFFA7D5270F422DDA0C936A0C3ED83CF, _stringLiteral94D92116D5FEFD4DDDBAE49BEC55B18F8EFE8B25, NULL);
		return L_1;
	}
}
// System.String ParkInc.CoreExtensions::FindStringInsideBrackets(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_FindStringInsideBrackets_m04C985EAFFD79C8C34C10D0C24B8B9E40F7CE452 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral041AB57A6C173676A6BE0427A74832D5AE0E8D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1925FA5108B30F8BDA1B28AF1A9E45B8685C7BE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Match match = Regex.Match(value, @"\[([^)]*)\]");
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_1;
		L_1 = Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972(L_0, _stringLiteral1925FA5108B30F8BDA1B28AF1A9E45B8685C7BE4, NULL);
		// return match.Result("$1");
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Text.RegularExpressions.Match::Result(System.String) */, L_1, _stringLiteral041AB57A6C173676A6BE0427A74832D5AE0E8D12);
		return L_2;
	}
}
// System.Void ParkInc.CoreExtensions::FlipX(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_FlipX_mD3DCB78ED158BA22934680527DA9FA31CC5FEF3D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, bool ___1_flip, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	{
		// transform.localScale = new Vector3(flip ? -Mathf.Abs(transform.localScale.x) : Mathf.Abs(transform.localScale.x), transform.localScale.y, transform.localScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		bool L_1 = ___1_flip;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_transform;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5;
		L_5 = fabsf(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0027;
	}

IL_0016:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_transform;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9;
		L_9 = fabsf(L_8);
		G_B3_0 = ((-L_9));
		G_B3_1 = G_B2_0;
	}

IL_0027:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___0_transform;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		float L_12 = L_11.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___0_transform;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), G_B3_0, L_12, L_15, /*hidden argument*/NULL);
		NullCheck(G_B3_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(G_B3_1, L_16, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.CoreExtensions::FlipY(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreExtensions_FlipY_m14D81B299D62CD6D56643B5393635AA942159D8C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, bool ___1_flip, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_2 = NULL;
	{
		// transform.localScale = new Vector3(transform.localScale.x, flip ? -Mathf.Abs(transform.localScale.y) : Mathf.Abs(transform.localScale.y), transform.localScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_transform;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		bool L_4 = ___1_flip;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___y_3;
		float L_8;
		L_8 = fabsf(L_7);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0032;
	}

IL_0021:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_transform;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12;
		L_12 = fabsf(L_11);
		G_B3_0 = ((-L_12));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0032:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___0_transform;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), G_B3_1, G_B3_0, L_15, /*hidden argument*/NULL);
		NullCheck(G_B3_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(G_B3_2, L_16, NULL);
		// }
		return;
	}
}
// UnityEngine.Transform ParkInc.CoreExtensions::TryGetChild(UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_TryGetChild_m18E025731E3871D73FB585D226A9F0B97AB7BAB0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// if (transform.childCount < index)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		// return transform.GetChild(index);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		int32_t L_4 = ___1_index;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}
}
// UnityEngine.Transform ParkInc.CoreExtensions::ResetLocal(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_ResetLocal_mB70F816CB88B3D8E8C0E023506B8D1052CC5F655 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	{
		// transform.SetLocalPositionAndRotation(Vector3.zero, Quaternion.identity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_0);
		Transform_SetLocalPositionAndRotation_m0FB0FCF462AB7CD21880042918BCC372A59E734D(L_0, L_1, L_2, NULL);
		// transform.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_4, NULL);
		// return transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
// UnityEngine.Transform ParkInc.CoreExtensions::ResetGlobal(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_ResetGlobal_m0C5AB7A8B2A39E87C384ECF3C744B3982DD125B6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	{
		// transform.SetPositionAndRotation(Vector3.zero, Quaternion.identity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_1, L_2, NULL);
		// transform.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_4, NULL);
		// return transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
// UnityEngine.Transform ParkInc.CoreExtensions::SetPositionX(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_SetPositionX_mAE7265ABB32B4D79D2CBAE03F8C8894B9D075D37 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, float ___1_x, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// position.x = x;
		float L_2 = ___1_x;
		(&V_0)->___x_2 = L_2;
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// return transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
// UnityEngine.Transform ParkInc.CoreExtensions::SetPositionY(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_SetPositionY_mEC67315339C5BC8CB1537DAFC3E80056FFAD1DCE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, float ___1_y, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// position.y = y;
		float L_2 = ___1_y;
		(&V_0)->___y_3 = L_2;
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// return transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
// UnityEngine.Transform ParkInc.CoreExtensions::SetPositionZ(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CoreExtensions_SetPositionZ_m75DD239DC161D757F289CECC73CC7C6912984C8D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, float ___1_z, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// position.z = z;
		float L_2 = ___1_z;
		(&V_0)->___z_4 = L_2;
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// return transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		return L_5;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::AddFloat(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_AddFloat_m8528274C1DEA15253485B3830F52F081583A4F1E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_floatValue, const RuntimeMethod* method) 
{
	{
		// vector.x += floatValue;
		float* L_0 = (&(&___0_vector)->___x_2);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_floatValue;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		// vector.y += floatValue;
		float* L_4 = (&(&___0_vector)->___y_3);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = ___1_floatValue;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, L_7));
		// vector.z += floatValue;
		float* L_8 = (&(&___0_vector)->___z_4);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		float L_11 = ___1_floatValue;
		*((float*)L_9) = (float)((float)il2cpp_codegen_add(L_10, L_11));
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_vector;
		return L_12;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::AddToX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_AddToX_mCFD46EB478F8FA6BA59C51C8C7791F4FE5BAB81C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.x += value;
		float* L_0 = (&(&___0_vector)->___x_2);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::AddToY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_AddToY_m339C5BF61BBF2BA93751E4D6428F70D435FB0F3C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.y += value;
		float* L_0 = (&(&___0_vector)->___y_3);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::AddToZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_AddToZ_m17563D90066C11EC7B72E0FD81DC5063FACE6789 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.z += value;
		float* L_0 = (&(&___0_vector)->___z_4);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::MultX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_MultX_mB66964A880DD8C936FD4D8AEEA8FB952F49EA9BF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.x *= value;
		float* L_0 = (&(&___0_vector)->___x_2);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::MultY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_MultY_m5F9A1FDB17F41DDFB1DB5AFB596908C94B3C96E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.y *= value;
		float* L_0 = (&(&___0_vector)->___y_3);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::MultZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_MultZ_m4B4A04935DB3921D303C11805304D5C67F227CB4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.z *= value;
		float* L_0 = (&(&___0_vector)->___z_4);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::SetX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_SetX_m0F1ADD8539FC6EA9CD0674A289D65EE661B52423 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.x = value;
		float L_0 = ___1_value;
		(&___0_vector)->___x_2 = L_0;
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_vector;
		return L_1;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::SetY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_SetY_m78DE5AA6FE991C0820BE62EC34AD8D517557B553 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.y = value;
		float L_0 = ___1_value;
		(&___0_vector)->___y_3 = L_0;
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_vector;
		return L_1;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::SetZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_SetZ_m394DF72E5D7A07AFE6657FA41E9DD5FD552349D0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.z = value;
		float L_0 = ___1_value;
		(&___0_vector)->___z_4 = L_0;
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_vector;
		return L_1;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::SetAll(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_SetAll_m623FA334867D9C3238B5B083189677A30605013E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_valueOfXYZ, const RuntimeMethod* method) 
{
	{
		// vector.x = valueOfXYZ;
		float L_0 = ___1_valueOfXYZ;
		(&___0_vector)->___x_2 = L_0;
		// vector.y = valueOfXYZ;
		float L_1 = ___1_valueOfXYZ;
		(&___0_vector)->___y_3 = L_1;
		// vector.z = valueOfXYZ;
		float L_2 = ___1_valueOfXYZ;
		(&___0_vector)->___z_4 = L_2;
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_vector;
		return L_3;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::ToVector3(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToVector3_m5B97892CBB53934EF09191BB7474E16E92A34EAE (float ___0_value, const RuntimeMethod* method) 
{
	{
		// return new Vector3(value, value, value);
		float L_0 = ___0_value;
		float L_1 = ___0_value;
		float L_2 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::ToVector3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToVector3_m55905325F68FDC4D036E0DBBBA754493F1018630 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// return new Vector3(value, value, value);
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::ToWorldPosition(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToWorldPosition_m98F46880386F3FD0A49B338A671DC01F8C59A2A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_z, const RuntimeMethod* method) 
{
	{
		// vector.z = z;
		float L_0 = ___1_z;
		(&___0_vector)->___z_4 = L_0;
		// return Camera.main.ScreenToWorldPoint(vector);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::GetRandomPositionAroundObject(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_GetRandomPositionAroundObject_m7C84F64D662338DAFAF1426FCDCC9CD3BFB7093D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_minRadius, float ___2_maxRadius, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float radius = Random.Range(minRadius, maxRadius);
		float L_0 = ___1_minRadius;
		float L_1 = ___2_maxRadius;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_0, L_1, NULL);
		// float angle = Random.Range(0, 360);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		V_0 = ((float)L_3);
		// float x = radius * Mathf.Cos(angle);
		float L_4 = L_2;
		float L_5 = V_0;
		float L_6;
		L_6 = cosf(L_5);
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_6));
		// float z = radius * Mathf.Sin(angle);
		float L_7 = V_0;
		float L_8;
		L_8 = sinf(L_7);
		V_2 = ((float)il2cpp_codegen_multiply(L_4, L_8));
		// return new Vector3(position.x + x, position.y, position.z + z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_position;
		float L_10 = L_9.___x_2;
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_position;
		float L_13 = L_12.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___0_position;
		float L_15 = L_14.___z_4;
		float L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_10, L_11)), L_13, ((float)il2cpp_codegen_add(L_15, L_16)), /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::GetRandomPositionAroundObject(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_GetRandomPositionAroundObject_mA41AA41AEA61182DC8B7A277F37FDB71A0E0DCC9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float angle = Random.Range(0, 360);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		V_0 = ((float)L_0);
		// float x = radius * Mathf.Cos(angle);
		float L_1 = ___1_radius;
		float L_2 = V_0;
		float L_3;
		L_3 = cosf(L_2);
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_3));
		// float z = radius * Mathf.Sin(angle);
		float L_4 = ___1_radius;
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(L_5);
		V_2 = ((float)il2cpp_codegen_multiply(L_4, L_6));
		// return new Vector3(position.x + x, position.y, position.z + z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_position;
		float L_8 = L_7.___x_2;
		float L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_position;
		float L_11 = L_10.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_position;
		float L_13 = L_12.___z_4;
		float L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)il2cpp_codegen_add(L_8, L_9)), L_11, ((float)il2cpp_codegen_add(L_13, L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::GetRandomPosition(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_GetRandomPosition_m599C01531788C3CCF503168ECEEAC20B02A3735E (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var halfWidth = bounds.size.x / 2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___0_bounds), NULL);
		float L_1 = L_0.___x_2;
		V_0 = ((float)(L_1/(2.0f)));
		// var halfHeight = bounds.size.y / 2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___0_bounds), NULL);
		float L_3 = L_2.___y_3;
		V_1 = ((float)(L_3/(2.0f)));
		// var halfDepth = bounds.size.z / 2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___0_bounds), NULL);
		float L_5 = L_4.___z_4;
		V_2 = ((float)(L_5/(2.0f)));
		// var result = bounds.center + new Vector3(
		//     Random.Range(-halfWidth, halfWidth),
		//     Random.Range(-halfHeight, halfHeight),
		//     Random.Range(-halfDepth, halfDepth));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_7)), L_8, NULL);
		float L_10 = V_1;
		float L_11 = V_1;
		float L_12;
		L_12 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_10)), L_11, NULL);
		float L_13 = V_2;
		float L_14 = V_2;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_13)), L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_9, L_12, L_15, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_16, NULL);
		// return result;
		return L_17;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::xz(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_xz_m0AF03A15925AECCF06D0D0D39874581DF118C8AD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public static Vector2 xz(this Vector3 value) => new Vector2(value.x, value.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		float L_3 = L_2.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::xy(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_xy_mB32FD609E5397609E885EB997EB51ACE409119B2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public static Vector2 xy(this Vector3 value) => new Vector2(value.x, value.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::xyz(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_xyz_m906683563D975EA2E9FA87B5FBCFAC433145792B (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public static Vector3 xyz(this Vector4 value) => new Vector3(value.x, value.y, value.z);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_value;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_value;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::xy(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_xy_m7FFF8111256F1E2405077363D5104AB8155AF7A2 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public static Vector2 xy(this Vector4 value) => new Vector2(value.x, value.y);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_value;
		float L_3 = L_2.___y_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::AddFloat(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_AddFloat_m725E34FF2FB540547B85273381BC6733869BFD71 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_floatValue, const RuntimeMethod* method) 
{
	{
		// vector.x += floatValue;
		float* L_0 = (&(&___0_vector)->___x_0);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_floatValue;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		// vector.y += floatValue;
		float* L_4 = (&(&___0_vector)->___y_1);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = ___1_floatValue;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, L_7));
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_vector;
		return L_8;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::AddToX(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_AddToX_m38F9FED9155097AE3D97BA0D33D4C539D961322A (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.x += value;
		float* L_0 = (&(&___0_vector)->___x_0);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::AddToY(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_AddToY_mA7B1AC6C5885B2893DF6CAFEBA97EA86BF675B15 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.y += value;
		float* L_0 = (&(&___0_vector)->___y_1);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, L_3));
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::MultX(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_MultX_m101EE7C62AF1E8F7368D0EDA5246A9EACB7F2FB4 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.x *= value;
		float* L_0 = (&(&___0_vector)->___x_0);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::MultY(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_MultY_m7A75AB511944EA6098F028C2539C01F32B1DA13C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.y *= value;
		float* L_0 = (&(&___0_vector)->___y_1);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___1_value;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_vector;
		return L_4;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::SetX(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_SetX_m54B5E928093EB2266D5269FF69719C1528C7B7C0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.x = value;
		float L_0 = ___1_value;
		(&___0_vector)->___x_0 = L_0;
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_vector;
		return L_1;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::SetY(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_SetY_mFF7CC21A147B88FBECA49D7172D6B97DEA6F16AC (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_value, const RuntimeMethod* method) 
{
	{
		// vector.y = value;
		float L_0 = ___1_value;
		(&___0_vector)->___y_1 = L_0;
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_vector;
		return L_1;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::ToVector2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_ToVector2_m5D4185BF1786005A1E4C31BD57A2A1C179B4A514 (float ___0_value, const RuntimeMethod* method) 
{
	{
		// return new Vector2(value, value);
		float L_0 = ___0_value;
		float L_1 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 ParkInc.CoreExtensions::ToVector2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CoreExtensions_ToVector2_m8DBF03BA78EAF38BB91E85707F677A6EFC2BD14B (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// return new Vector2(value, value);
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)L_0), ((float)L_1), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 ParkInc.CoreExtensions::ToVector3(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CoreExtensions_ToVector3_m188F28DE0F5C503C059E3C565AC7DFEF866A8A8E (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_z, const RuntimeMethod* method) 
{
	{
		// return new Vector3(vector.x, vector.y, z);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vector;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_vector;
		float L_3 = L_2.___y_1;
		float L_4 = ___1_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Color ParkInc.CoreExtensions::SetAlpha(UnityEngine.Color,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CoreExtensions_SetAlpha_m472A05E1ED30E6AFD8104D568CEA695ED34D84A8 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, uint8_t ___1_aValue, const RuntimeMethod* method) 
{
	{
		// color.a = aValue;
		uint8_t L_0 = ___1_aValue;
		(&___0_color)->___a_3 = ((float)L_0);
		// return color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		return L_1;
	}
}
// UnityEngine.Color ParkInc.CoreExtensions::SetAlpha(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CoreExtensions_SetAlpha_m256C970D9D9D01DE534ADAD593F0EDA29726EE17 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_aValue, const RuntimeMethod* method) 
{
	{
		// color.a = aValue;
		float L_0 = ___1_aValue;
		(&___0_color)->___a_3 = L_0;
		// return color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		return L_1;
	}
}
// UnityEngine.Color ParkInc.CoreExtensions::SetAlpha(UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CoreExtensions_SetAlpha_m8EF0A47143878B99B1B3BA11AFAAF9417A628DB8 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, int32_t ___1_aValue, const RuntimeMethod* method) 
{
	{
		// color.a = (float)aValue / 255;
		int32_t L_0 = ___1_aValue;
		(&___0_color)->___a_3 = ((float)(((float)L_0)/(255.0f)));
		// return color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		return L_1;
	}
}
// System.String ParkInc.CoreExtensions::ToHex(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_ToHex_m6E964F07BBC2DE51081D876F9009A81BE5E1440A (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86953B386E543DC5AFB5CC6DFBD735EF7DAE369D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("#{0:X2}{1:X2}{2:X2}", (byte)(Mathf.Clamp01(color.r) * 255), (byte)(Mathf.Clamp01(color.g) * 255), (byte)(Mathf.Clamp01(color.b) * 255));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		uint8_t L_3 = ((uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_2, (255.0f)))));
		RuntimeObject* L_4 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_color;
		float L_6 = L_5.___g_1;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_6, NULL);
		uint8_t L_8 = ((uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_7, (255.0f)))));
		RuntimeObject* L_9 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___0_color;
		float L_11 = L_10.___b_2;
		float L_12;
		L_12 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_11, NULL);
		uint8_t L_13 = ((uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_12, (255.0f)))));
		RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral86953B386E543DC5AFB5CC6DFBD735EF7DAE369D, L_4, L_9, L_14, NULL);
		return L_15;
	}
}
// UnityEngine.UI.Graphic ParkInc.CoreExtensions::SetAlpha(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* CoreExtensions_SetAlpha_m4E5A825161C8373D2276BCA7FEBDB15F0824460B (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_graphic, float ___1_a, const RuntimeMethod* method) 
{
	{
		// graphic.color = graphic.color.SetAlpha(a);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___0_graphic;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = ___0_graphic;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = ___1_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = CoreExtensions_SetAlpha_m256C970D9D9D01DE534ADAD593F0EDA29726EE17(L_2, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_4);
		// return graphic;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = ___0_graphic;
		return L_5;
	}
}
// System.String ParkInc.CoreExtensions::ObjectToString(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_ObjectToString_mAAB4C0254BC9C0F2EF47CEA4B6B14D528DF9C168 (RuntimeObject* ___0_parentObject, int32_t ___1_maxDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B0F74B596CC9D2DDF300DA4EFF02C6C830107ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maxDepth = Mathf.Clamp(maxDepth, 1, 10);
		int32_t L_0 = ___1_maxDepth;
		int32_t L_1;
		L_1 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 1, ((int32_t)10), NULL);
		___1_maxDepth = L_1;
		// StringBuilder stringBuilder = new StringBuilder();
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		// stringBuilder.AppendLine("<b>" + parentObject.ToString() + "</b>");
		StringBuilder_t* L_3 = L_2;
		RuntimeObject* L_4 = ___0_parentObject;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66, L_5, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_3, L_6, NULL);
		// stringBuilder.AppendLine("");
		StringBuilder_t* L_8 = L_3;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// stringBuilder.AppendLine("Variables:");
		StringBuilder_t* L_10 = L_8;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_10, _stringLiteral7B0F74B596CC9D2DDF300DA4EFF02C6C830107ED, NULL);
		// stringBuilder.Append(GetFields(0, maxDepth, "  ", parentObject));
		StringBuilder_t* L_12 = L_10;
		int32_t L_13 = ___1_maxDepth;
		RuntimeObject* L_14 = ___0_parentObject;
		String_t* L_15;
		L_15 = CoreExtensions_GetFields_mA363CEB46630F0DB49E38CB4CEBCFF71F8BD450F(0, L_13, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_14, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_15, NULL);
		// return stringBuilder.ToString();
		NullCheck(L_12);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_17;
	}
}
// System.String ParkInc.CoreExtensions::GetFields(System.Int32,System.Int32,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreExtensions_GetFields_mA363CEB46630F0DB49E38CB4CEBCFF71F8BD450F (int32_t ___0_depth, int32_t ___1_maxDepth, String_t* ___2_space, RuntimeObject* ___3_parentObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral086C504C47273EF07233933225DBBAF9F1CBD69A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral786D7B9ABEABE8160318F22124FD74BA126263AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D52FC864FBAB18F17165F5F2F678AD081BCEC7);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t* V_5 = NULL;
	Type_t* V_6 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t G_B11_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringBuilder_t* G_B11_3 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringBuilder_t* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	StringBuilder_t* G_B12_4 = NULL;
	String_t* G_B26_0 = NULL;
	String_t* G_B26_1 = NULL;
	String_t* G_B26_2 = NULL;
	StringBuilder_t* G_B26_3 = NULL;
	String_t* G_B25_0 = NULL;
	String_t* G_B25_1 = NULL;
	String_t* G_B25_2 = NULL;
	StringBuilder_t* G_B25_3 = NULL;
	String_t* G_B27_0 = NULL;
	String_t* G_B27_1 = NULL;
	String_t* G_B27_2 = NULL;
	String_t* G_B27_3 = NULL;
	StringBuilder_t* G_B27_4 = NULL;
	{
		// depth += 1;
		int32_t L_0 = ___0_depth;
		___0_depth = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// StringBuilder stringBuilder = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_0 = L_1;
		// Type parentObjectType = parentObject.GetType();
		RuntimeObject* L_2 = ___3_parentObject;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		// FieldInfo[] fieldInfos = parentObjectType.GetFields(BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.Public);
		NullCheck(L_3);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_4;
		L_4 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(85 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_3, ((int32_t)52));
		V_1 = L_4;
		// for (int i = 0; i < fieldInfos.Length; i++)
		V_4 = 0;
		goto IL_021c;
	}

IL_0021:
	{
		// Type fieldType = fieldInfos[i].FieldType;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_5 = V_1;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FieldInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_8);
		V_5 = L_9;
		// fieldName = fieldInfos[i].Name;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		FieldInfo_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		V_2 = L_14;
		// value = fieldInfos[i].GetValue(parentObject);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		FieldInfo_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		RuntimeObject* L_19 = ___3_parentObject;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_18, L_19);
		V_3 = L_20;
		// if (fieldType.IsClass && fieldType != typeof(string))
		Type_t* L_21 = V_5;
		NullCheck(L_21);
		bool L_22;
		L_22 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_21, NULL);
		if (!L_22)
		{
			goto IL_01f3;
		}
	}
	{
		Type_t* L_23 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_01f3;
		}
	}
	{
		// if (fieldType.IsArray)
		Type_t* L_27 = V_5;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_27, NULL);
		if (!L_28)
		{
			goto IL_01a1;
		}
	}
	{
		// Type elementType = fieldType.GetElementType();
		Type_t* L_29 = V_5;
		NullCheck(L_29);
		Type_t* L_30;
		L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_29);
		V_6 = L_30;
		// if (elementType != null)
		Type_t* L_31 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_31, (Type_t*)NULL, NULL);
		if (!L_32)
		{
			goto IL_0216;
		}
	}
	{
		// FieldInfo[] arrayFieldInfos = elementType.GetFields(BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.Public);
		Type_t* L_33 = V_6;
		NullCheck(L_33);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_34;
		L_34 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(85 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_33, ((int32_t)52));
		V_7 = L_34;
		// IList list = (IList)value;
		RuntimeObject* L_35 = V_3;
		V_8 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		// if(list != null)
		RuntimeObject* L_36 = V_8;
		if (!L_36)
		{
			goto IL_018c;
		}
	}
	{
		// stringBuilder.AppendLine(space + fieldName + " - " + fieldType.ToString());
		StringBuilder_t* L_37 = V_0;
		String_t* L_38 = ___2_space;
		String_t* L_39 = V_2;
		Type_t* L_40 = V_5;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		String_t* L_42;
		L_42 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_38, L_39, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_41, NULL);
		NullCheck(L_37);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_37, L_42, NULL);
		// int listCount = list.Count;
		RuntimeObject* L_44 = V_8;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_44);
		V_9 = L_45;
		// for (int j = 0; j < listCount; j++)
		V_10 = 0;
		goto IL_017e;
	}

IL_00ca:
	{
		// stringBuilder.AppendLine(space + " - Element " + (j + 1));
		StringBuilder_t* L_46 = V_0;
		String_t* L_47 = ___2_space;
		int32_t L_48 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		String_t* L_49;
		L_49 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_11), NULL);
		String_t* L_50;
		L_50 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_47, _stringLiteral086C504C47273EF07233933225DBBAF9F1CBD69A, L_49, NULL);
		NullCheck(L_46);
		StringBuilder_t* L_51;
		L_51 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_46, L_50, NULL);
		// if (list[j] != null)
		RuntimeObject* L_52 = V_8;
		int32_t L_53 = V_10;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_52, L_53);
		if (!L_54)
		{
			goto IL_0166;
		}
	}
	{
		// for (int f = 0; f < arrayFieldInfos.Length; f++)
		V_12 = 0;
		goto IL_015c;
	}

IL_00f9:
	{
		// object arrayValue = arrayFieldInfos[f].GetValue(list[j]);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_55 = V_7;
		int32_t L_56 = V_12;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		FieldInfo_t* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		RuntimeObject* L_59 = V_8;
		int32_t L_60 = V_10;
		NullCheck(L_59);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_59, L_60);
		NullCheck(L_58);
		RuntimeObject* L_62;
		L_62 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_58, L_61);
		V_13 = L_62;
		// stringBuilder.AppendLine(space + "    " + arrayFieldInfos[f].Name + " - " + (arrayValue != null ? arrayValue.ToString() : "NULL"));
		StringBuilder_t* L_63 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		String_t* L_66 = ___2_space;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_65;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_67;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_69 = V_7;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		FieldInfo_t* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		String_t* L_73;
		L_73 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_72);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_73);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_68;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
		RuntimeObject* L_76 = V_13;
		G_B10_0 = 4;
		G_B10_1 = L_75;
		G_B10_2 = L_75;
		G_B10_3 = L_63;
		if (L_76)
		{
			G_B11_0 = 4;
			G_B11_1 = L_75;
			G_B11_2 = L_75;
			G_B11_3 = L_63;
			goto IL_0143;
		}
	}
	{
		G_B12_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		goto IL_014a;
	}

IL_0143:
	{
		RuntimeObject* L_77 = V_13;
		NullCheck(L_77);
		String_t* L_78;
		L_78 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_77);
		G_B12_0 = L_78;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
	}

IL_014a:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		String_t* L_79;
		L_79 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B12_3, NULL);
		NullCheck(G_B12_4);
		StringBuilder_t* L_80;
		L_80 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B12_4, L_79, NULL);
		// for (int f = 0; f < arrayFieldInfos.Length; f++)
		int32_t L_81 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_015c:
	{
		// for (int f = 0; f < arrayFieldInfos.Length; f++)
		int32_t L_82 = V_12;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_83 = V_7;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_00f9;
		}
	}
	{
		goto IL_0178;
	}

IL_0166:
	{
		// stringBuilder.AppendLine(space + "    NULL");
		StringBuilder_t* L_84 = V_0;
		String_t* L_85 = ___2_space;
		String_t* L_86;
		L_86 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_85, _stringLiteral786D7B9ABEABE8160318F22124FD74BA126263AF, NULL);
		NullCheck(L_84);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_84, L_86, NULL);
	}

IL_0178:
	{
		// for (int j = 0; j < listCount; j++)
		int32_t L_88 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_017e:
	{
		// for (int j = 0; j < listCount; j++)
		int32_t L_89 = V_10;
		int32_t L_90 = V_9;
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0216;
	}

IL_018c:
	{
		// stringBuilder.AppendLine(space + fieldName + " - NULL");
		StringBuilder_t* L_91 = V_0;
		String_t* L_92 = ___2_space;
		String_t* L_93 = V_2;
		String_t* L_94;
		L_94 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_92, L_93, _stringLiteralD7D52FC864FBAB18F17165F5F2F678AD081BCEC7, NULL);
		NullCheck(L_91);
		StringBuilder_t* L_95;
		L_95 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_91, L_94, NULL);
		goto IL_0216;
	}

IL_01a1:
	{
		// if (value != null)
		RuntimeObject* L_96 = V_3;
		if (!L_96)
		{
			goto IL_01de;
		}
	}
	{
		// stringBuilder.AppendLine(space + fieldName + " - " + fieldType.ToString());
		StringBuilder_t* L_97 = V_0;
		String_t* L_98 = ___2_space;
		String_t* L_99 = V_2;
		Type_t* L_100 = V_5;
		NullCheck(L_100);
		String_t* L_101;
		L_101 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_100);
		String_t* L_102;
		L_102 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_98, L_99, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_101, NULL);
		NullCheck(L_97);
		StringBuilder_t* L_103;
		L_103 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_97, L_102, NULL);
		// if (depth < maxDepth)
		int32_t L_104 = ___0_depth;
		int32_t L_105 = ___1_maxDepth;
		if ((((int32_t)L_104) >= ((int32_t)L_105)))
		{
			goto IL_0216;
		}
	}
	{
		// stringBuilder.Append(GetFields(depth, maxDepth, space + "    ", value));
		StringBuilder_t* L_106 = V_0;
		int32_t L_107 = ___0_depth;
		int32_t L_108 = ___1_maxDepth;
		String_t* L_109 = ___2_space;
		String_t* L_110;
		L_110 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_109, _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E, NULL);
		RuntimeObject* L_111 = V_3;
		String_t* L_112;
		L_112 = CoreExtensions_GetFields_mA363CEB46630F0DB49E38CB4CEBCFF71F8BD450F(L_107, L_108, L_110, L_111, NULL);
		NullCheck(L_106);
		StringBuilder_t* L_113;
		L_113 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_106, L_112, NULL);
		goto IL_0216;
	}

IL_01de:
	{
		// stringBuilder.AppendLine(space + fieldName + " - NULL");
		StringBuilder_t* L_114 = V_0;
		String_t* L_115 = ___2_space;
		String_t* L_116 = V_2;
		String_t* L_117;
		L_117 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_115, L_116, _stringLiteralD7D52FC864FBAB18F17165F5F2F678AD081BCEC7, NULL);
		NullCheck(L_114);
		StringBuilder_t* L_118;
		L_118 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_114, L_117, NULL);
		goto IL_0216;
	}

IL_01f3:
	{
		// stringBuilder.AppendLine(space + fieldName + " - " + (value != null ? value.ToString() : "NULL"));
		StringBuilder_t* L_119 = V_0;
		String_t* L_120 = ___2_space;
		String_t* L_121 = V_2;
		RuntimeObject* L_122 = V_3;
		G_B25_0 = _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
		G_B25_1 = L_121;
		G_B25_2 = L_120;
		G_B25_3 = L_119;
		if (L_122)
		{
			G_B26_0 = _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
			G_B26_1 = L_121;
			G_B26_2 = L_120;
			G_B26_3 = L_119;
			goto IL_0205;
		}
	}
	{
		G_B27_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		G_B27_3 = G_B25_2;
		G_B27_4 = G_B25_3;
		goto IL_020b;
	}

IL_0205:
	{
		RuntimeObject* L_123 = V_3;
		NullCheck(L_123);
		String_t* L_124;
		L_124 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_123);
		G_B27_0 = L_124;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
		G_B27_3 = G_B26_2;
		G_B27_4 = G_B26_3;
	}

IL_020b:
	{
		String_t* L_125;
		L_125 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B27_3, G_B27_2, G_B27_1, G_B27_0, NULL);
		NullCheck(G_B27_4);
		StringBuilder_t* L_126;
		L_126 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B27_4, L_125, NULL);
	}

IL_0216:
	{
		// for (int i = 0; i < fieldInfos.Length; i++)
		int32_t L_127 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_021c:
	{
		// for (int i = 0; i < fieldInfos.Length; i++)
		int32_t L_128 = V_4;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_129 = V_1;
		NullCheck(L_129);
		if ((((int32_t)L_128) < ((int32_t)((int32_t)(((RuntimeArray*)L_129)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// return stringBuilder.ToString();
		StringBuilder_t* L_130 = V_0;
		NullCheck(L_130);
		String_t* L_131;
		L_131 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_130);
		return L_131;
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
// System.Boolean ParkInc.CoreExtensions/ExtendedRandom::TrueFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtendedRandom_TrueFalse_m273008D8182129D2306896BA73CC7FA074A595AF (const RuntimeMethod* method) 
{
	{
		// return Random.Range(0, 2) == 0;
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 ParkInc.CoreExtensions/ExtendedRandom::Range(ParkInc.DuoInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExtendedRandom_Range_mD03EFDCC333A6EF81EBF9326C0A86C4E4E5D6118 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___0_duoInt, const RuntimeMethod* method) 
{
	{
		// return Random.Range(duoInt.firstValue, duoInt.secondValue);
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_0 = ___0_duoInt;
		NullCheck(L_0);
		int32_t L_1 = L_0->___firstValue_0;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_2 = ___0_duoInt;
		NullCheck(L_2);
		int32_t L_3 = L_2->___secondValue_1;
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Single ParkInc.CoreExtensions/ExtendedRandom::Range(ParkInc.DuoFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExtendedRandom_Range_mF0AB2EA2E876D62087D8E70BE8F0EC26E795BDA1 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___0_duoFloat, const RuntimeMethod* method) 
{
	{
		// return Random.Range(duoFloat.firstValue, duoFloat.secondValue);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___0_duoFloat;
		NullCheck(L_0);
		float L_1 = L_0->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_2 = ___0_duoFloat;
		NullCheck(L_2);
		float L_3 = L_2->___secondValue_1;
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_1, L_3, NULL);
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
// System.Void ParkInc.DelayedObjectDisabler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedObjectDisabler_OnEnable_mCB7F15D60D1778E557614BE54203E07C55B0EA2C (DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DelayedCall());
		RuntimeObject* L_0;
		L_0 = DelayedObjectDisabler_DelayedCall_m1F0616C110528C3DCD9C8A2B4416C7EB76271937(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ParkInc.DelayedObjectDisabler::DelayedCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelayedObjectDisabler_DelayedCall_m1F0616C110528C3DCD9C8A2B4416C7EB76271937 (DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* L_0 = (U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131*)il2cpp_codegen_object_new(U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDelayedCallU3Ed__2__ctor_mF9E51C74B5003301B20681F206355E17CE7203EC(L_0, 0, NULL);
		U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ParkInc.DelayedObjectDisabler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedObjectDisabler__ctor_m31F5BC5B483EF95A8F595775D688A1A07146D4DB (DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* __this, const RuntimeMethod* method) 
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
// System.Void ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCallU3Ed__2__ctor_mF9E51C74B5003301B20681F206355E17CE7203EC (U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCallU3Ed__2_System_IDisposable_Dispose_m638B5339F8C0C808203378F7FF8CF998BD5C1102 (U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedCallU3Ed__2_MoveNext_m98F21FE29D7A068D01A50B6FB383952510A403D4 (U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(delay);
		DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___delay_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.SetActive(false);
		DelayedObjectDisabler_t93C766FC61D69F956D24727CC42FBA13381789B4* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedCallU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BC19416F59DBB5C0B46A3CBD483214A8042A816 (U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCallU3Ed__2_System_Collections_IEnumerator_Reset_m9BD20E4EFD5C1FE86ED33F1C75FF891ACFD67098 (U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedCallU3Ed__2_System_Collections_IEnumerator_Reset_m9BD20E4EFD5C1FE86ED33F1C75FF891ACFD67098_RuntimeMethod_var)));
	}
}
// System.Object ParkInc.DelayedObjectDisabler/<DelayedCall>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedCallU3Ed__2_System_Collections_IEnumerator_get_Current_m1252E39B73D6912537C79BB8E51DB42B8C4F2EB8 (U3CDelayedCallU3Ed__2_t570E87C3AD848F4F9753FA9BB7ACDEE16C976131* __this, const RuntimeMethod* method) 
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
// System.Void ParkInc.DuoInt::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoInt__ctor_mCCBCF677D7ED13CAC1D02652BEC696AA93978EC3 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, int32_t ___0_firstValue, int32_t ___1_secondValue, const RuntimeMethod* method) 
{
	{
		// public DuoInt(int firstValue, int secondValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.firstValue = firstValue;
		int32_t L_0 = ___0_firstValue;
		__this->___firstValue_0 = L_0;
		// this.secondValue = secondValue;
		int32_t L_1 = ___1_secondValue;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// System.Void ParkInc.DuoInt::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoInt__ctor_m8089478F83EFB3CDBBA1E1DEEE2E6C6FCD1A8850 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public DuoInt(int value)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.firstValue = value;
		int32_t L_0 = ___0_value;
		__this->___firstValue_0 = L_0;
		// this.secondValue = value;
		int32_t L_1 = ___0_value;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// ParkInc.DuoInt ParkInc.DuoInt::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* DuoInt_get_One_mB3180EA0EAB8197A3530725275463A6BC5280FE3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoInt One => new DuoInt(1);
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_0 = (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8*)il2cpp_codegen_object_new(DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoInt__ctor_m8089478F83EFB3CDBBA1E1DEEE2E6C6FCD1A8850(L_0, 1, NULL);
		return L_0;
	}
}
// ParkInc.DuoInt ParkInc.DuoInt::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* DuoInt_get_Zero_m1139F9BE5F80F9751FAC69651396F9AFE98AF24E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoInt Zero => new DuoInt(0);
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_0 = (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8*)il2cpp_codegen_object_new(DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoInt__ctor_m8089478F83EFB3CDBBA1E1DEEE2E6C6FCD1A8850(L_0, 0, NULL);
		return L_0;
	}
}
// System.Int32 ParkInc.DuoInt::Random()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DuoInt_Random_m3B6D2F718936061DDC509E606B1DE82FCFCC50E3 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Random.Range(firstValue, secondValue + 1); // Because second parameter is exclusive. Withot + 1 method Random.Range(1,2) will always return 1
		int32_t L_0 = __this->___firstValue_0;
		int32_t L_1 = __this->___secondValue_1;
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		return L_2;
	}
}
// System.Int32 ParkInc.DuoInt::Clamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DuoInt_Clamp_m7B0CADF3BEB19B84F9110E270C8A7ABFC2169CA0 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// return Mathf.Clamp(value, firstValue, secondValue);
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->___firstValue_0;
		int32_t L_2 = __this->___secondValue_1;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 ParkInc.DuoInt::Lerp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DuoInt_Lerp_m5CA9FE91E59BF69D062CE77FBE86E6A7AFA98AED (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, float ___0_t, const RuntimeMethod* method) 
{
	{
		// return Mathf.Clamp(Mathf.RoundToInt(Mathf.Lerp(firstValue, secondValue, t)), firstValue, secondValue);
		int32_t L_0 = __this->___firstValue_0;
		int32_t L_1 = __this->___secondValue_1;
		float L_2 = ___0_t;
		float L_3;
		L_3 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_0), ((float)L_1), L_2, NULL);
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_3, NULL);
		int32_t L_5 = __this->___firstValue_0;
		int32_t L_6 = __this->___secondValue_1;
		int32_t L_7;
		L_7 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Vector2Int ParkInc.DuoInt::op_Implicit(ParkInc.DuoInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A DuoInt_op_Implicit_mD32497A8E45581761AA6B677371D647D7B660399 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___0_value, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Vector2Int(DuoInt value) => new Vector2Int(value.firstValue, value.secondValue);
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_0 = ___0_value;
		NullCheck(L_0);
		int32_t L_1 = L_0->___firstValue_0;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_2 = ___0_value;
		NullCheck(L_2);
		int32_t L_3 = L_2->___secondValue_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// ParkInc.DuoInt ParkInc.DuoInt::op_Explicit(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* DuoInt_op_Explicit_m0E0A01D45EDA82A0C57C2E750428FDA11CEE7A7F (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_vec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static explicit operator DuoInt(Vector2Int vec) => new DuoInt(vec.x, vec.y);
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_vec), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_vec), NULL);
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_2 = (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8*)il2cpp_codegen_object_new(DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DuoInt__ctor_mCCBCF677D7ED13CAC1D02652BEC696AA93978EC3(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// Unity.Mathematics.int2 ParkInc.DuoInt::op_Implicit(ParkInc.DuoInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A DuoInt_op_Implicit_m6DD9DF7D74B2ED4D9E70120D500C038C78B0D64E (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___0_value, const RuntimeMethod* method) 
{
	{
		// public static implicit operator int2(DuoInt value) => new int2(value.firstValue, value.secondValue);
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_0 = ___0_value;
		NullCheck(L_0);
		int32_t L_1 = L_0->___firstValue_0;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_2 = ___0_value;
		NullCheck(L_2);
		int32_t L_3 = L_2->___secondValue_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_4;
		memset((&L_4), 0, sizeof(L_4));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// ParkInc.DuoInt ParkInc.DuoInt::op_Explicit(Unity.Mathematics.int2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* DuoInt_op_Explicit_mF7CDE2BD52CFEF0A8DB6253A1A1E1DC376B7766F (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static explicit operator DuoInt(int2 value) => new DuoInt(value.x, value.y);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___0_value;
		int32_t L_1 = L_0.___x_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___0_value;
		int32_t L_3 = L_2.___y_1;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_4 = (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8*)il2cpp_codegen_object_new(DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DuoInt__ctor_mCCBCF677D7ED13CAC1D02652BEC696AA93978EC3(L_4, L_1, L_3, NULL);
		return L_4;
	}
}
// ParkInc.DuoInt ParkInc.DuoInt::op_Multiply(ParkInc.DuoInt,ParkInc.DuoInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* DuoInt_op_Multiply_mA9859170AC1EE5AF1356B7185AB876A9345EBC60 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___0_a, DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoInt operator *(DuoInt a, DuoInt b) => new DuoInt(a.firstValue * b.firstValue, a.secondValue * b.secondValue);
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___firstValue_0;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___firstValue_0;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_4 = ___0_a;
		NullCheck(L_4);
		int32_t L_5 = L_4->___secondValue_1;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_6 = ___1_b;
		NullCheck(L_6);
		int32_t L_7 = L_6->___secondValue_1;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_8 = (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8*)il2cpp_codegen_object_new(DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DuoInt__ctor_mCCBCF677D7ED13CAC1D02652BEC696AA93978EC3(L_8, ((int32_t)il2cpp_codegen_multiply(L_1, L_3)), ((int32_t)il2cpp_codegen_multiply(L_5, L_7)), NULL);
		return L_8;
	}
}
// ParkInc.DuoInt ParkInc.DuoInt::op_Division(ParkInc.DuoInt,ParkInc.DuoInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* DuoInt_op_Division_m7243E3BA42E8E8CA4334A8743338A03D6061E359 (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___0_a, DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((b.firstValue == 0) || (b.secondValue == 0))
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_0 = ___1_b;
		NullCheck(L_0);
		int32_t L_1 = L_0->___firstValue_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___secondValue_1;
		if (L_3)
		{
			goto IL_0016;
		}
	}

IL_0010:
	{
		// throw new System.DivideByZeroException();
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_4 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DuoInt_op_Division_m7243E3BA42E8E8CA4334A8743338A03D6061E359_RuntimeMethod_var)));
	}

IL_0016:
	{
		// return new DuoInt(a.firstValue / b.firstValue, a.secondValue / b.secondValue);
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_5 = ___0_a;
		NullCheck(L_5);
		int32_t L_6 = L_5->___firstValue_0;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_7 = ___1_b;
		NullCheck(L_7);
		int32_t L_8 = L_7->___firstValue_0;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_9 = ___0_a;
		NullCheck(L_9);
		int32_t L_10 = L_9->___secondValue_1;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_11 = ___1_b;
		NullCheck(L_11);
		int32_t L_12 = L_11->___secondValue_1;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_13 = (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8*)il2cpp_codegen_object_new(DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		DuoInt__ctor_mCCBCF677D7ED13CAC1D02652BEC696AA93978EC3(L_13, ((int32_t)(L_6/L_8)), ((int32_t)(L_10/L_12)), NULL);
		return L_13;
	}
}
// ParkInc.DuoInt ParkInc.DuoInt::op_Multiply(ParkInc.DuoInt,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* DuoInt_op_Multiply_mA906072A2A142271B7AE9B9F79D6A6196AA8DBAC (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoInt operator *(DuoInt a, float b) => new DuoInt((int)(a.firstValue * b), (int)(a.secondValue * b));
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___firstValue_0;
		float L_2 = ___1_b;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_3 = ___0_a;
		NullCheck(L_3);
		int32_t L_4 = L_3->___secondValue_1;
		float L_5 = ___1_b;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_6 = (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8*)il2cpp_codegen_object_new(DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DuoInt__ctor_mCCBCF677D7ED13CAC1D02652BEC696AA93978EC3(L_6, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_1), L_2))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_4), L_5))), NULL);
		return L_6;
	}
}
// ParkInc.DuoInt ParkInc.DuoInt::op_Division(ParkInc.DuoInt,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* DuoInt_op_Division_m33B6DA6C936783CF65BED044FE2DD906FE10272B (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (b == 0)
		float L_0 = ___1_b;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// throw new System.DivideByZeroException();
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_1 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DuoInt_op_Division_m33B6DA6C936783CF65BED044FE2DD906FE10272B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// return new DuoInt((int)(a.firstValue / b), (int)(a.secondValue / b));
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_2 = ___0_a;
		NullCheck(L_2);
		int32_t L_3 = L_2->___firstValue_0;
		float L_4 = ___1_b;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_5 = ___0_a;
		NullCheck(L_5);
		int32_t L_6 = L_5->___secondValue_1;
		float L_7 = ___1_b;
		DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* L_8 = (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8*)il2cpp_codegen_object_new(DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DuoInt__ctor_mCCBCF677D7ED13CAC1D02652BEC696AA93978EC3(L_8, il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_3)/L_4))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_6)/L_7))), NULL);
		return L_8;
	}
}
// ParkInc.DuoFloat ParkInc.DuoInt::ToDuoFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoInt_ToDuoFloat_mD976E1AC2BB4FA67B220A69B350972F8A1ED169E (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DuoFloat(firstValue, secondValue);
		int32_t L_0 = __this->___firstValue_0;
		int32_t L_1 = __this->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_2 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_2, ((float)L_0), ((float)L_1), NULL);
		return L_2;
	}
}
// System.String ParkInc.DuoInt::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoInt_ToString_mA0CF5D8294EB26F4622F5C3E5779B282DBEAF4EE (DuoInt_t9EE1F25F08F7B51F54EC566AA3741D90BEB301F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "(" + firstValue + ", " + secondValue + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (&__this->___firstValue_0);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (&__this->___secondValue_1);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
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
// System.Single ParkInc.DuoFloat::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_get_Item_m260EAE0E327483AF9D7F597FDF1D9CEB9AFF6C19 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// public float this[int i] => i == 0 ? firstValue : secondValue;
		int32_t L_0 = ___0_i;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = __this->___secondValue_1;
		return L_1;
	}

IL_000a:
	{
		float L_2 = __this->___firstValue_0;
		return L_2;
	}
}
// System.Void ParkInc.DuoFloat::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, float ___0_firstValue, float ___1_secondValue, const RuntimeMethod* method) 
{
	{
		// public DuoFloat(float firstValue, float secondValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.firstValue = firstValue;
		float L_0 = ___0_firstValue;
		__this->___firstValue_0 = L_0;
		// this.secondValue = secondValue;
		float L_1 = ___1_secondValue;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// System.Void ParkInc.DuoFloat::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoFloat__ctor_mBA9D675954AE7B99D4C5775DC6D3B8FF0430A0D5 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public DuoFloat(float value)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.firstValue = value;
		float L_0 = ___0_value;
		__this->___firstValue_0 = L_0;
		// this.secondValue = value;
		float L_1 = ___0_value;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_get_One_m365B8D89ABCDECEE4D2AA146A9280C04E7BEEDA7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat One => new DuoFloat(1);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoFloat__ctor_mBA9D675954AE7B99D4C5775DC6D3B8FF0430A0D5(L_0, (1.0f), NULL);
		return L_0;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_get_Zero_m48033E6B87207B57D45DD52CA5BE19F13EDAC32D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat Zero => new DuoFloat(0);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoFloat__ctor_mBA9D675954AE7B99D4C5775DC6D3B8FF0430A0D5(L_0, (0.0f), NULL);
		return L_0;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::get_ZeroOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_get_ZeroOne_m0D0B2E299E7B8A7010F4B2F2DE52F2A9E23D8E11 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat ZeroOne => new DuoFloat(0, 1);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_0, (0.0f), (1.0f), NULL);
		return L_0;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::get_OneZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_get_OneZero_m2DBAC77B5412870005F0B755A7DA3BA9C297B84C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat OneZero => new DuoFloat(1, 0);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_0, (1.0f), (0.0f), NULL);
		return L_0;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::get_MinusOneOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_get_MinusOneOne_m66D1D60F4EFF6D8C25FCA97814D5470E02A83F16 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat MinusOneOne => new DuoFloat(-1, 1);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_0, (-1.0f), (1.0f), NULL);
		return L_0;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::op_UnaryNegation(ParkInc.DuoFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_op_UnaryNegation_m2139DDF8535BA92AC14622ED39E4B7CC2DD757F1 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat operator -(DuoFloat value) => new DuoFloat(-value.x, -value.y);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___0_value;
		NullCheck(L_0);
		float L_1;
		L_1 = DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F_inline(L_0, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_2 = ___0_value;
		NullCheck(L_2);
		float L_3;
		L_3 = DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1_inline(L_2, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_4 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_4, ((-L_1)), ((-L_3)), NULL);
		return L_4;
	}
}
// System.Single ParkInc.DuoFloat::Random()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_Random_m0C800A0936768644D121308ECD4D817095173EA1 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Random.Range(firstValue, secondValue);
		float L_0 = __this->___firstValue_0;
		float L_1 = __this->___secondValue_1;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single ParkInc.DuoFloat::Lerp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_Lerp_m6674849D8E3141AE3ACC9D3068A4071C8DE84107 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, float ___0_t, const RuntimeMethod* method) 
{
	{
		// return Mathf.Lerp(firstValue, secondValue, t);
		float L_0 = __this->___firstValue_0;
		float L_1 = __this->___secondValue_1;
		float L_2 = ___0_t;
		float L_3;
		L_3 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single ParkInc.DuoFloat::Clamp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_Clamp_mC37B20DB3A282DE3EBB291F5DE37947C3FF31E23 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// return Mathf.Clamp(value, firstValue, secondValue);
		float L_0 = ___0_value;
		float L_1 = __this->___firstValue_0;
		float L_2 = __this->___secondValue_1;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single ParkInc.DuoFloat::Remap(System.Single,ParkInc.DuoFloat,ParkInc.DuoFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_Remap_mDE10B76F8ACC4876A7E6395413A650EB0C7106EC (float ___0_value, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___1_inMinMax, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___2_outMinMax, const RuntimeMethod* method) 
{
	{
		// return outMinMax.firstValue + (value - inMinMax.firstValue) * (outMinMax.secondValue - outMinMax.firstValue) / (inMinMax.secondValue - inMinMax.firstValue);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___2_outMinMax;
		NullCheck(L_0);
		float L_1 = L_0->___firstValue_0;
		float L_2 = ___0_value;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_3 = ___1_inMinMax;
		NullCheck(L_3);
		float L_4 = L_3->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_5 = ___2_outMinMax;
		NullCheck(L_5);
		float L_6 = L_5->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_7 = ___2_outMinMax;
		NullCheck(L_7);
		float L_8 = L_7->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_9 = ___1_inMinMax;
		NullCheck(L_9);
		float L_10 = L_9->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_11 = ___1_inMinMax;
		NullCheck(L_11);
		float L_12 = L_11->___firstValue_0;
		return ((float)il2cpp_codegen_add(L_1, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_4)), ((float)il2cpp_codegen_subtract(L_6, L_8))))/((float)il2cpp_codegen_subtract(L_10, L_12))))));
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::Remap(ParkInc.DuoFloat,ParkInc.DuoFloat,ParkInc.DuoFloat,ParkInc.DuoFloat,ParkInc.DuoFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_Remap_m16F88413FDA03C298D37EDE7410E0514ECD84CEF (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___0_value, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___1_inMin, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___2_inMax, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___3_outMin, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___4_outMax, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DuoFloat(
		//     Remap(value.x, new DuoFloat(inMin.x, inMax.x), new DuoFloat(outMin.x, outMax.x)),
		//     Remap(value.y, new DuoFloat(inMin.y, inMax.y), new DuoFloat(outMin.y, outMax.y))
		// );
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___0_value;
		NullCheck(L_0);
		float L_1;
		L_1 = DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F_inline(L_0, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_2 = ___1_inMin;
		NullCheck(L_2);
		float L_3;
		L_3 = DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F_inline(L_2, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_4 = ___2_inMax;
		NullCheck(L_4);
		float L_5;
		L_5 = DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F_inline(L_4, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_6 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_6, L_3, L_5, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_7 = ___3_outMin;
		NullCheck(L_7);
		float L_8;
		L_8 = DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F_inline(L_7, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_9 = ___4_outMax;
		NullCheck(L_9);
		float L_10;
		L_10 = DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F_inline(L_9, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_11 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_11, L_8, L_10, NULL);
		float L_12;
		L_12 = DuoFloat_Remap_mDE10B76F8ACC4876A7E6395413A650EB0C7106EC_inline(L_1, L_6, L_11, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_13 = ___0_value;
		NullCheck(L_13);
		float L_14;
		L_14 = DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1_inline(L_13, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_15 = ___1_inMin;
		NullCheck(L_15);
		float L_16;
		L_16 = DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1_inline(L_15, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_17 = ___2_inMax;
		NullCheck(L_17);
		float L_18;
		L_18 = DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1_inline(L_17, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_19 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_19, L_16, L_18, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_20 = ___3_outMin;
		NullCheck(L_20);
		float L_21;
		L_21 = DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1_inline(L_20, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_22 = ___4_outMax;
		NullCheck(L_22);
		float L_23;
		L_23 = DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1_inline(L_22, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_24 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_24, L_21, L_23, NULL);
		float L_25;
		L_25 = DuoFloat_Remap_mDE10B76F8ACC4876A7E6395413A650EB0C7106EC_inline(L_14, L_19, L_24, NULL);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_26 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_26, L_12, L_25, NULL);
		return L_26;
	}
}
// UnityEngine.Vector2 ParkInc.DuoFloat::op_Implicit(ParkInc.DuoFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DuoFloat_op_Implicit_mC468222A075241FE468A4119A8015FBCC9C25A28 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Vector2(DuoFloat value) => value.xy;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___0_value;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = DuoFloat_get_xy_mB23E417EBCDA993369D40DB33264C6062B7A2513(L_0, NULL);
		return L_1;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_op_Implicit_m0777EEF7E88906BE80A31157C3483EE090316871 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator DuoFloat(Vector2 vec) => new DuoFloat(vec.x, vec.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vec;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_vec;
		float L_3 = L_2.___y_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_4 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_4, L_1, L_3, NULL);
		return L_4;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_op_Implicit_mEC2EF5AB9A9492C1F206A406248DC4D524BA161E (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator DuoFloat(float value) => new DuoFloat(value);
		float L_0 = ___0_value;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_1 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DuoFloat__ctor_mBA9D675954AE7B99D4C5775DC6D3B8FF0430A0D5(L_1, L_0, NULL);
		return L_1;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_op_Implicit_m975D437A8427764A6DDA6750AD236061EC59A68D (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator DuoFloat(int value) => new DuoFloat(value);
		int32_t L_0 = ___0_value;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_1 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DuoFloat__ctor_mBA9D675954AE7B99D4C5775DC6D3B8FF0430A0D5(L_1, ((float)L_0), NULL);
		return L_1;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::op_Multiply(ParkInc.DuoFloat,ParkInc.DuoFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_op_Multiply_m03C2C896BB6BAE0C8A3C24795A2F2AFA22CDDCE6 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___0_a, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat operator *(DuoFloat a, DuoFloat b) => new DuoFloat(a.firstValue * b.firstValue, a.secondValue * b.secondValue);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___0_a;
		NullCheck(L_0);
		float L_1 = L_0->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_2 = ___1_b;
		NullCheck(L_2);
		float L_3 = L_2->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_4 = ___0_a;
		NullCheck(L_4);
		float L_5 = L_4->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_6 = ___1_b;
		NullCheck(L_6);
		float L_7 = L_6->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_8 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_8, ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), NULL);
		return L_8;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::op_Division(ParkInc.DuoFloat,ParkInc.DuoFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_op_Division_m707A6DF7EE5AF54AE8C4B3CDEA011205C7C464F9 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___0_a, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((b.firstValue == 0) || (b.secondValue == 0))
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___1_b;
		NullCheck(L_0);
		float L_1 = L_0->___firstValue_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_2 = ___1_b;
		NullCheck(L_2);
		float L_3 = L_2->___secondValue_1;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}

IL_001a:
	{
		// throw new System.DivideByZeroException();
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_4 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DuoFloat_op_Division_m707A6DF7EE5AF54AE8C4B3CDEA011205C7C464F9_RuntimeMethod_var)));
	}

IL_0020:
	{
		// return new DuoFloat(a.firstValue / b.firstValue, a.secondValue / b.secondValue);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_5 = ___0_a;
		NullCheck(L_5);
		float L_6 = L_5->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_7 = ___1_b;
		NullCheck(L_7);
		float L_8 = L_7->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_9 = ___0_a;
		NullCheck(L_9);
		float L_10 = L_9->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_11 = ___1_b;
		NullCheck(L_11);
		float L_12 = L_11->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_13 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_13, ((float)(L_6/L_8)), ((float)(L_10/L_12)), NULL);
		return L_13;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::op_Multiply(ParkInc.DuoFloat,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_op_Multiply_m91EFB6242829B47F01C49C7ADCCAF6C2EC59179C (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat operator *(DuoFloat a, float b) => new DuoFloat(a.firstValue * b, a.secondValue * b);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___0_a;
		NullCheck(L_0);
		float L_1 = L_0->___firstValue_0;
		float L_2 = ___1_b;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_3 = ___0_a;
		NullCheck(L_3);
		float L_4 = L_3->___secondValue_1;
		float L_5 = ___1_b;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_6 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_6, ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		return L_6;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::op_Division(ParkInc.DuoFloat,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_op_Division_mB9BAD20BBFB4D00E513BDD75C4D0137F1691FB8D (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (b == 0)
		float L_0 = ___1_b;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// throw new System.DivideByZeroException();
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_1 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DuoFloat_op_Division_mB9BAD20BBFB4D00E513BDD75C4D0137F1691FB8D_RuntimeMethod_var)));
	}

IL_000e:
	{
		// return new DuoFloat(a.firstValue / b, a.secondValue / b);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_2 = ___0_a;
		NullCheck(L_2);
		float L_3 = L_2->___firstValue_0;
		float L_4 = ___1_b;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_5 = ___0_a;
		NullCheck(L_5);
		float L_6 = L_5->___secondValue_1;
		float L_7 = ___1_b;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_8 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_8, ((float)(L_3/L_4)), ((float)(L_6/L_7)), NULL);
		return L_8;
	}
}
// System.String ParkInc.DuoFloat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoFloat_ToString_m16332A3A249D0B0457B7654AC5009E0A660A1383 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "(" + FormatValue(firstValue) + ", " + FormatValue(secondValue) + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		float L_3 = __this->___firstValue_0;
		String_t* L_4;
		L_4 = DuoFloat_FormatValue_m148F310BA48BAE0A28710B1C8ECD881799C82053(__this, L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		float L_7 = __this->___secondValue_1;
		String_t* L_8;
		L_8 = DuoFloat_FormatValue_m148F310BA48BAE0A28710B1C8ECD881799C82053(__this, L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		return L_10;
	}
}
// System.String ParkInc.DuoFloat::FormatValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoFloat_FormatValue_m148F310BA48BAE0A28710B1C8ECD881799C82053 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value.ToString("0.0").Replace(',', '.');
		String_t* L_0;
		L_0 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___0_value), _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_0, ((int32_t)44), ((int32_t)46), NULL);
		return L_1;
	}
}
// System.Single ParkInc.DuoFloat::get_Max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_get_Max_m336ADAFA98A72B99600BA8DBD1ACEF3DC0CEB4A4 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public float Max => firstValue > secondValue ? firstValue : secondValue;
		float L_0 = __this->___firstValue_0;
		float L_1 = __this->___secondValue_1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->___secondValue_1;
		return L_2;
	}

IL_0015:
	{
		float L_3 = __this->___firstValue_0;
		return L_3;
	}
}
// System.Single ParkInc.DuoFloat::get_Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_get_Min_m584457B972C359275B482496AC9886FA62F437E1 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public float Min => firstValue < secondValue ? firstValue : secondValue;
		float L_0 = __this->___firstValue_0;
		float L_1 = __this->___secondValue_1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->___secondValue_1;
		return L_2;
	}

IL_0015:
	{
		float L_3 = __this->___firstValue_0;
		return L_3;
	}
}
// System.Single ParkInc.DuoFloat::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public float x => firstValue;
		float L_0 = __this->___firstValue_0;
		return L_0;
	}
}
// System.Single ParkInc.DuoFloat::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public float y => secondValue;
		float L_0 = __this->___secondValue_1;
		return L_0;
	}
}
// UnityEngine.Vector2 ParkInc.DuoFloat::get_xy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DuoFloat_get_xy_mB23E417EBCDA993369D40DB33264C6062B7A2513 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 xy => new Vector2(firstValue, secondValue);
		float L_0 = __this->___firstValue_0;
		float L_1 = __this->___secondValue_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 ParkInc.DuoFloat::get_yx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DuoFloat_get_yx_mA1CC398243353F006D58E8A843C1B2FC6F80CA4B (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 yx => new Vector2(secondValue, firstValue);
		float L_0 = __this->___secondValue_1;
		float L_1 = __this->___firstValue_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 ParkInc.DuoFloat::get_x0y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DuoFloat_get_x0y_m10DD1980113A38D3EC12A5D587FDC87E5ACE844E (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 x0y => new Vector3(firstValue, 0, secondValue);
		float L_0 = __this->___firstValue_0;
		float L_1 = __this->___secondValue_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 ParkInc.DuoFloat::get_y0x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DuoFloat_get_y0x_m9EE118AD9D7DBB3D7127F441143289F35621A17C (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 y0x => new Vector3(secondValue, 0, firstValue);
		float L_0 = __this->___secondValue_1;
		float L_1 = __this->___firstValue_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single ParkInc.DuoFloat::get_r()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public float r => UnityEngine.Random.Range(firstValue, secondValue);
		float L_0 = __this->___firstValue_0;
		float L_1 = __this->___secondValue_1;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 ParkInc.DuoFloat::get_rr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DuoFloat_get_rr_mD2BFC2D559D93138BED3A36C2F6A406B0B33484F (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 rr => new Vector2(r, r);
		float L_0;
		L_0 = DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A(__this, NULL);
		float L_1;
		L_1 = DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 ParkInc.DuoFloat::get_rrr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DuoFloat_get_rrr_m502C8CBE964F5CF5350C3CCAA62ACBF92A89A0AB (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 rrr => new Vector3(r, r, r);
		float L_0;
		L_0 = DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A(__this, NULL);
		float L_1;
		L_1 = DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A(__this, NULL);
		float L_2;
		L_2 = DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 ParkInc.DuoFloat::get_r0r()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DuoFloat_get_r0r_mE59552D26813ACD45289C94E76FF8D3C59CDCF12 (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 r0r => new Vector3(r, 0, r);
		float L_0;
		L_0 = DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A(__this, NULL);
		float L_1;
		L_1 = DuoFloat_get_r_mE186B044F06607DABFBDB16C4059FFDFB620647A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// ParkInc.DuoFloat ParkInc.DuoFloat::XZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* DuoFloat_XZ_mABE916C09D31347B15C4CBC3B31C3CB47876A302 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoFloat XZ(Vector3 value) => new DuoFloat(value.x, value.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		float L_3 = L_2.___z_4;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_4 = (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC*)il2cpp_codegen_object_new(DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DuoFloat__ctor_m3F348F0985754B16790F94BA850B97209FE0DE25(L_4, L_1, L_3, NULL);
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
// System.Void ParkInc.DuoDouble::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoDouble__ctor_mCEDBC3EF5D988362215456DF0489B013F535D791 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, double ___0_firstValue, double ___1_secondValue, const RuntimeMethod* method) 
{
	{
		// public DuoDouble(double firstValue, double secondValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.firstValue = firstValue;
		double L_0 = ___0_firstValue;
		__this->___firstValue_0 = L_0;
		// this.secondValue = secondValue;
		double L_1 = ___1_secondValue;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// System.Void ParkInc.DuoDouble::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoDouble__ctor_mBD7BA7C57097966180CB4A2083D37F1B23B6A06C (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public DuoDouble(double value)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.firstValue = value;
		double L_0 = ___0_value;
		__this->___firstValue_0 = L_0;
		// this.secondValue = value;
		double L_1 = ___0_value;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// ParkInc.DuoDouble ParkInc.DuoDouble::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* DuoDouble_get_One_mE5811224AFD839A020DFC941B3E2304BF0879E73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoDouble One => new DuoDouble(1);
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_0 = (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F*)il2cpp_codegen_object_new(DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoDouble__ctor_mBD7BA7C57097966180CB4A2083D37F1B23B6A06C(L_0, (1.0), NULL);
		return L_0;
	}
}
// ParkInc.DuoDouble ParkInc.DuoDouble::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* DuoDouble_get_Zero_m4D3DBB20D543BD3935757933435EA788AF32A5B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoDouble Zero => new DuoDouble(0);
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_0 = (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F*)il2cpp_codegen_object_new(DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DuoDouble__ctor_mBD7BA7C57097966180CB4A2083D37F1B23B6A06C(L_0, (0.0), NULL);
		return L_0;
	}
}
// System.Double ParkInc.DuoDouble::Random()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DuoDouble_Random_m774849D77E01D886066ED803AB3A996246784B90 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (random == null)
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_StaticFields*)il2cpp_codegen_static_fields_for(DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var))->___random_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_1, NULL);
		((DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_StaticFields*)il2cpp_codegen_static_fields_for(DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var))->___random_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_StaticFields*)il2cpp_codegen_static_fields_for(DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var))->___random_2), (void*)L_1);
	}

IL_0011:
	{
		// return random.NextDouble() * (this.secondValue - this.firstValue) + this.firstValue;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = ((DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_StaticFields*)il2cpp_codegen_static_fields_for(DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var))->___random_2;
		NullCheck(L_2);
		double L_3;
		L_3 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_2);
		double L_4 = __this->___secondValue_1;
		double L_5 = __this->___firstValue_0;
		double L_6 = __this->___firstValue_0;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_3, ((double)il2cpp_codegen_subtract(L_4, L_5)))), L_6));
	}
}
// System.Double ParkInc.DuoDouble::Clamp(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DuoDouble_Clamp_m8631ECB84621F64FDC755F40151B221549F54262 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value < firstValue)
		double L_0 = ___0_value;
		double L_1 = __this->___firstValue_0;
		if ((!(((double)L_0) < ((double)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		// return firstValue;
		double L_2 = __this->___firstValue_0;
		return L_2;
	}

IL_0010:
	{
		// else if (value > secondValue)
		double L_3 = ___0_value;
		double L_4 = __this->___secondValue_1;
		if ((!(((double)L_3) > ((double)L_4))))
		{
			goto IL_0020;
		}
	}
	{
		// return secondValue;
		double L_5 = __this->___secondValue_1;
		return L_5;
	}

IL_0020:
	{
		// return value;
		double L_6 = ___0_value;
		return L_6;
	}
}
// ParkInc.DuoDouble ParkInc.DuoDouble::op_Multiply(ParkInc.DuoDouble,ParkInc.DuoDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* DuoDouble_op_Multiply_m9B4CCD2166B9713171B98D11F63CFB9D08495E12 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* ___0_a, DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoDouble operator *(DuoDouble a, DuoDouble b) => new DuoDouble(a.firstValue * b.firstValue, a.secondValue * b.secondValue);
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_0 = ___0_a;
		NullCheck(L_0);
		double L_1 = L_0->___firstValue_0;
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_2 = ___1_b;
		NullCheck(L_2);
		double L_3 = L_2->___firstValue_0;
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_4 = ___0_a;
		NullCheck(L_4);
		double L_5 = L_4->___secondValue_1;
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_6 = ___1_b;
		NullCheck(L_6);
		double L_7 = L_6->___secondValue_1;
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_8 = (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F*)il2cpp_codegen_object_new(DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DuoDouble__ctor_mCEDBC3EF5D988362215456DF0489B013F535D791(L_8, ((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)), NULL);
		return L_8;
	}
}
// ParkInc.DuoDouble ParkInc.DuoDouble::op_Division(ParkInc.DuoDouble,ParkInc.DuoDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* DuoDouble_op_Division_m4C9AED9AC79615F50DF2CBA84874C438358C8562 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* ___0_a, DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((b.firstValue == 0) || (b.secondValue == 0))
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_0 = ___1_b;
		NullCheck(L_0);
		double L_1 = L_0->___firstValue_0;
		if ((((double)L_1) == ((double)(0.0))))
		{
			goto IL_0022;
		}
	}
	{
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_2 = ___1_b;
		NullCheck(L_2);
		double L_3 = L_2->___secondValue_1;
		if ((!(((double)L_3) == ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}

IL_0022:
	{
		// throw new System.DivideByZeroException();
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_4 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DuoDouble_op_Division_m4C9AED9AC79615F50DF2CBA84874C438358C8562_RuntimeMethod_var)));
	}

IL_0028:
	{
		// return new DuoDouble(a.firstValue / b.firstValue, a.secondValue / b.secondValue);
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_5 = ___0_a;
		NullCheck(L_5);
		double L_6 = L_5->___firstValue_0;
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_7 = ___1_b;
		NullCheck(L_7);
		double L_8 = L_7->___firstValue_0;
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_9 = ___0_a;
		NullCheck(L_9);
		double L_10 = L_9->___secondValue_1;
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_11 = ___1_b;
		NullCheck(L_11);
		double L_12 = L_11->___secondValue_1;
		DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* L_13 = (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F*)il2cpp_codegen_object_new(DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		DuoDouble__ctor_mCEDBC3EF5D988362215456DF0489B013F535D791(L_13, ((double)(L_6/L_8)), ((double)(L_10/L_12)), NULL);
		return L_13;
	}
}
// System.String ParkInc.DuoDouble::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoDouble_ToString_m3CB1A26971E62ED9F2A5DA5225950DECB95B9A10 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "(" + FormatValue(firstValue) + ", " + FormatValue(secondValue) + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		double L_3 = __this->___firstValue_0;
		String_t* L_4;
		L_4 = DuoDouble_FormatValue_mBC002960FDD69A698CC14C5B5A59C9A00A9304E3(__this, L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		double L_7 = __this->___secondValue_1;
		String_t* L_8;
		L_8 = DuoDouble_FormatValue_mBC002960FDD69A698CC14C5B5A59C9A00A9304E3(__this, L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		return L_10;
	}
}
// System.String ParkInc.DuoDouble::FormatValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoDouble_FormatValue_mBC002960FDD69A698CC14C5B5A59C9A00A9304E3 (DuoDouble_t96B7994F93090FA4D26EB1B361FF37837616650F* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value.ToString("0.0").Replace(',', '.');
		String_t* L_0;
		L_0 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&___0_value), _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_0, ((int32_t)44), ((int32_t)46), NULL);
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
// System.Void ParkInc.DuoVector3::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoVector3__ctor_m5B3211C8EA5AAB7D4036970F8B2BD563CD03F4D9 (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_firstValue, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_secondValue, const RuntimeMethod* method) 
{
	{
		// public DuoVector3(Vector3 firstValue, Vector3 secondValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.firstValue = firstValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_firstValue;
		__this->___firstValue_0 = L_0;
		// this.secondValue = secondValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_secondValue;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// System.Void ParkInc.DuoVector3::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoVector3__ctor_mD1AC7101FAE6902E57632B1C5633CA9B0EE66555 (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public DuoVector3(Vector3 value)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.firstValue = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___firstValue_0 = L_0;
		// this.secondValue = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// ParkInc.DuoVector3 ParkInc.DuoVector3::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* DuoVector3_get_One_m1499495132D40BF5484B173546520D07FFC458B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoVector3 One => new DuoVector3(Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_1 = (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138*)il2cpp_codegen_object_new(DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DuoVector3__ctor_mD1AC7101FAE6902E57632B1C5633CA9B0EE66555(L_1, L_0, NULL);
		return L_1;
	}
}
// ParkInc.DuoVector3 ParkInc.DuoVector3::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* DuoVector3_get_Zero_m2D4BD54127F30FEFA0597444DF4773A6B710FE5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoVector3 Zero => new DuoVector3(Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_1 = (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138*)il2cpp_codegen_object_new(DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DuoVector3__ctor_mD1AC7101FAE6902E57632B1C5633CA9B0EE66555(L_1, L_0, NULL);
		return L_1;
	}
}
// ParkInc.DuoVector3 ParkInc.DuoVector3::op_Multiply(ParkInc.DuoVector3,ParkInc.DuoVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* DuoVector3_op_Multiply_mEB3ABF9BC763A2D9238DEB3BD0CDC77D8F9D678A (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* ___0_a, DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DuoVector3 operator *(DuoVector3 a, DuoVector3 b) => new DuoVector3(new Vector3(a.firstValue.x * b.firstValue.x, a.firstValue.y * b.firstValue.y, a.firstValue.z * b.firstValue.z), new Vector3(a.secondValue.x * b.secondValue.x, a.secondValue.y * b.secondValue.y, a.secondValue.z * b.secondValue.z));
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_0 = ___0_a;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&L_0->___firstValue_0);
		float L_2 = L_1->___x_2;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_3 = ___1_b;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&L_3->___firstValue_0);
		float L_5 = L_4->___x_2;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_6 = ___0_a;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&L_6->___firstValue_0);
		float L_8 = L_7->___y_3;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_9 = ___1_b;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&L_9->___firstValue_0);
		float L_11 = L_10->___y_3;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_12 = ___0_a;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&L_12->___firstValue_0);
		float L_14 = L_13->___z_4;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_15 = ___1_b;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&L_15->___firstValue_0);
		float L_17 = L_16->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_multiply(L_2, L_5)), ((float)il2cpp_codegen_multiply(L_8, L_11)), ((float)il2cpp_codegen_multiply(L_14, L_17)), /*hidden argument*/NULL);
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_19 = ___0_a;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&L_19->___secondValue_1);
		float L_21 = L_20->___x_2;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_22 = ___1_b;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&L_22->___secondValue_1);
		float L_24 = L_23->___x_2;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_25 = ___0_a;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&L_25->___secondValue_1);
		float L_27 = L_26->___y_3;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_28 = ___1_b;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&L_28->___secondValue_1);
		float L_30 = L_29->___y_3;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_31 = ___0_a;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&L_31->___secondValue_1);
		float L_33 = L_32->___z_4;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_34 = ___1_b;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = (&L_34->___secondValue_1);
		float L_36 = L_35->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)il2cpp_codegen_multiply(L_21, L_24)), ((float)il2cpp_codegen_multiply(L_27, L_30)), ((float)il2cpp_codegen_multiply(L_33, L_36)), /*hidden argument*/NULL);
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_38 = (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138*)il2cpp_codegen_object_new(DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		DuoVector3__ctor_m5B3211C8EA5AAB7D4036970F8B2BD563CD03F4D9(L_38, L_18, L_37, NULL);
		return L_38;
	}
}
// ParkInc.DuoVector3 ParkInc.DuoVector3::op_Division(ParkInc.DuoVector3,ParkInc.DuoVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* DuoVector3_op_Division_m560536698D8B848061B622B0A8750E4BF7D8403A (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* ___0_a, DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((b.firstValue.x == 0) || (b.firstValue.y == 0) || (b.firstValue.z == 0) || (b.secondValue.x == 0) || (b.secondValue.y == 0) || (b.secondValue.z == 0))
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_0 = ___1_b;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&L_0->___firstValue_0);
		float L_2 = L_1->___x_2;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_006c;
		}
	}
	{
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_3 = ___1_b;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&L_3->___firstValue_0);
		float L_5 = L_4->___y_3;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_006c;
		}
	}
	{
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_6 = ___1_b;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&L_6->___firstValue_0);
		float L_8 = L_7->___z_4;
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_006c;
		}
	}
	{
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_9 = ___1_b;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&L_9->___secondValue_1);
		float L_11 = L_10->___x_2;
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_006c;
		}
	}
	{
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_12 = ___1_b;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&L_12->___secondValue_1);
		float L_14 = L_13->___y_3;
		if ((((float)L_14) == ((float)(0.0f))))
		{
			goto IL_006c;
		}
	}
	{
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_15 = ___1_b;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&L_15->___secondValue_1);
		float L_17 = L_16->___z_4;
		if ((!(((float)L_17) == ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}

IL_006c:
	{
		// throw new System.DivideByZeroException();
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_18 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DuoVector3_op_Division_m560536698D8B848061B622B0A8750E4BF7D8403A_RuntimeMethod_var)));
	}

IL_0072:
	{
		// return new DuoVector3(new Vector3(a.firstValue.x / b.firstValue.x, a.firstValue.y / b.firstValue.y, a.firstValue.z / b.firstValue.z), new Vector3(a.secondValue.x / b.secondValue.x, a.secondValue.y / b.secondValue.y, a.secondValue.z / b.secondValue.z));
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_19 = ___0_a;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&L_19->___firstValue_0);
		float L_21 = L_20->___x_2;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_22 = ___1_b;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&L_22->___firstValue_0);
		float L_24 = L_23->___x_2;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_25 = ___0_a;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&L_25->___firstValue_0);
		float L_27 = L_26->___y_3;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_28 = ___1_b;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&L_28->___firstValue_0);
		float L_30 = L_29->___y_3;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_31 = ___0_a;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&L_31->___firstValue_0);
		float L_33 = L_32->___z_4;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_34 = ___1_b;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = (&L_34->___firstValue_0);
		float L_36 = L_35->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)(L_21/L_24)), ((float)(L_27/L_30)), ((float)(L_33/L_36)), /*hidden argument*/NULL);
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_38 = ___0_a;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&L_38->___secondValue_1);
		float L_40 = L_39->___x_2;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_41 = ___1_b;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&L_41->___secondValue_1);
		float L_43 = L_42->___x_2;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_44 = ___0_a;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&L_44->___secondValue_1);
		float L_46 = L_45->___y_3;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_47 = ___1_b;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48 = (&L_47->___secondValue_1);
		float L_49 = L_48->___y_3;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_50 = ___0_a;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = (&L_50->___secondValue_1);
		float L_52 = L_51->___z_4;
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_53 = ___1_b;
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = (&L_53->___secondValue_1);
		float L_55 = L_54->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_56), ((float)(L_40/L_43)), ((float)(L_46/L_49)), ((float)(L_52/L_55)), /*hidden argument*/NULL);
		DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* L_57 = (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138*)il2cpp_codegen_object_new(DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		DuoVector3__ctor_m5B3211C8EA5AAB7D4036970F8B2BD563CD03F4D9(L_57, L_37, L_56, NULL);
		return L_57;
	}
}
// UnityEngine.Vector3 ParkInc.DuoVector3::Random()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DuoVector3_Random_m463E3E9B9E2B622BB500B6DA0EF4AD9040AB458A (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector3(UnityEngine.Random.Range(firstValue.x, secondValue.x), UnityEngine.Random.Range(firstValue.y, secondValue.y), UnityEngine.Random.Range(firstValue.z, secondValue.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___firstValue_0);
		float L_1 = L_0->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___secondValue_1);
		float L_3 = L_2->___x_2;
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_1, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___firstValue_0);
		float L_6 = L_5->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___secondValue_1);
		float L_8 = L_7->___y_3;
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___firstValue_0);
		float L_11 = L_10->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___secondValue_1);
		float L_13 = L_12->___z_4;
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String ParkInc.DuoVector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoVector3_ToString_mC9C520347DE57DA03B00E017D61F3E73BEAA98AC (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "[" + FormatValue(firstValue) + ", " + FormatValue(secondValue) + "]";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___firstValue_0;
		String_t* L_4;
		L_4 = DuoVector3_FormatValue_m9F0F1BE1A60F031503A11C7231446B969017C0D7(__this, L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___secondValue_1;
		String_t* L_8;
		L_8 = DuoVector3_FormatValue_m9F0F1BE1A60F031503A11C7231446B969017C0D7(__this, L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		return L_10;
	}
}
// System.String ParkInc.DuoVector3::FormatValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoVector3_FormatValue_mFE8A927A2141BE72CC4DF824CCE69AB5ABE9D625 (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value.ToString("0.0").Replace(',', '.');
		String_t* L_0;
		L_0 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___0_value), _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_0, ((int32_t)44), ((int32_t)46), NULL);
		return L_1;
	}
}
// System.String ParkInc.DuoVector3::FormatValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DuoVector3_FormatValue_m9F0F1BE1A60F031503A11C7231446B969017C0D7 (DuoVector3_t0525EB8A7364355C33EE2A03B0FE2971D0347138* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "(" + FormatValue(value.x) + ", " + FormatValue(value.y) + ", " + FormatValue(value.z) + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		float L_4 = L_3.___x_2;
		String_t* L_5;
		L_5 = DuoVector3_FormatValue_mFE8A927A2141BE72CC4DF824CCE69AB5ABE9D625(__this, L_4, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_value;
		float L_9 = L_8.___y_3;
		String_t* L_10;
		L_10 = DuoVector3_FormatValue_mFE8A927A2141BE72CC4DF824CCE69AB5ABE9D625(__this, L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_value;
		float L_14 = L_13.___z_4;
		String_t* L_15;
		L_15 = DuoVector3_FormatValue_mFE8A927A2141BE72CC4DF824CCE69AB5ABE9D625(__this, L_14, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		return L_17;
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
// System.Void ParkInc.DuoColor::.ctor(UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoColor__ctor_m922A2B89253B84055D3843825687549B2612AC1D (DuoColor_tCBE92DCFCFF67294C2451DCE125D3E505969DBAE* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_first, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_second, const RuntimeMethod* method) 
{
	{
		// public DuoColor(Color32 first, Color32 second)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// firstValue = first;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_first;
		__this->___firstValue_0 = L_0;
		// secondValue = second;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_second;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// System.Void ParkInc.DuoColor::.ctor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuoColor__ctor_m1664DFD5CFC5642A6C8B8CEA984BA3963CF36292 (DuoColor_tCBE92DCFCFF67294C2451DCE125D3E505969DBAE* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_color, const RuntimeMethod* method) 
{
	{
		// public DuoColor(Color32 color)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// firstValue = color;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_color;
		__this->___firstValue_0 = L_0;
		// secondValue = color;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___0_color;
		__this->___secondValue_1 = L_1;
		// }
		return;
	}
}
// UnityEngine.Color32 ParkInc.DuoColor::RandomBetween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B DuoColor_RandomBetween_m6584EB4D660C961C8E99492946E69BEB9412F733 (DuoColor_tCBE92DCFCFF67294C2451DCE125D3E505969DBAE* __this, const RuntimeMethod* method) 
{
	{
		// return Color32.Lerp(firstValue, secondValue, UnityEngine.Random.value);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___firstValue_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = __this->___secondValue_1;
		float L_2;
		L_2 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3;
		L_3 = Color32_Lerp_mA2474A351A93CC63EA568E92C99B6E8D91065F7C_inline(L_0, L_1, L_2, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParkInc.FPSCounter::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_OnGUI_mC5FF46137684782263865E52D1EB3022AE41F684 (FPSCounter_t8094E8DF96260D8DD08D60D92F709E67C8C6AD9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isStyleInitted)
		bool L_0 = __this->___isStyleInitted_5;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		// labelStyle = new GUIStyle(GUI.skin.label);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_1;
		L_1 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		NullCheck(L_1);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2;
		L_2 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_1, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_3, L_2, NULL);
		__this->___labelStyle_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___labelStyle_6), (void*)L_3);
		// labelStyle.alignment = TextAnchor.MiddleRight;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___labelStyle_6;
		NullCheck(L_4);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_4, 5, NULL);
		// labelStyle.fontStyle = FontStyle.Bold;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = __this->___labelStyle_6;
		NullCheck(L_5);
		GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D(L_5, 1, NULL);
		// isStyleInitted = true;
		__this->___isStyleInitted_5 = (bool)1;
	}

IL_003c:
	{
		// GUI.Label(new Rect(Screen.width - 210, 0, 200, 20), fps.ToString("00"), labelStyle);
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), ((float)((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)210)))), (0.0f), (200.0f), (20.0f), /*hidden argument*/NULL);
		float* L_8 = (&__this->___fps_4);
		String_t* L_9;
		L_9 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_8, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->___labelStyle_6;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_7, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.FPSCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Update_m14D499776A8EC06A3FEF7C56FB812E91584D3C78 (FPSCounter_t8094E8DF96260D8DD08D60D92F709E67C8C6AD9C* __this, const RuntimeMethod* method) 
{
	{
		// fps = (int)(1f / Time.unscaledDeltaTime);
		float L_0;
		L_0 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___fps_4 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)((1.0f)/L_0))));
		// }
		return;
	}
}
// System.Void ParkInc.FPSCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter__ctor_mC4595072E66824F44DC26F5036E9D2C28BE9DDAC (FPSCounter_t8094E8DF96260D8DD08D60D92F709E67C8C6AD9C* __this, const RuntimeMethod* method) 
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
// System.Void ParkInc.IOUtils::CreatePath(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOUtils_CreatePath_m3A26385E90F45DFA270CA00A1F9E9426C9B50BE1 (String_t* ___0_path, Il2CppChar ___1_separator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (Directory.Exists(path))
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// string[] pathFolders = path.Split(separator);
		String_t* L_2 = ___0_path;
		Il2CppChar L_3 = ___1_separator;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, L_3, 0, NULL);
		V_0 = L_4;
		// for (int i = 0; i < pathFolders.Length; i++)
		V_1 = 0;
		goto IL_005a;
	}

IL_0016:
	{
		// string tempPath = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < i; j++)
		V_3 = 0;
		goto IL_0033;
	}

IL_0020:
	{
		// tempPath += pathFolders[j] + "/";
		String_t* L_5 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, L_9, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_2 = L_10;
		// for (int j = 0; j < i; j++)
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0033:
	{
		// for (int j = 0; j < i; j++)
		int32_t L_12 = V_3;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0020;
		}
	}
	{
		// if (!Directory.Exists(tempPath + pathFolders[i]))
		String_t* L_14 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, L_18, NULL);
		bool L_20;
		L_20 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_19, NULL);
		if (L_20)
		{
			goto IL_0056;
		}
	}
	{
		// Directory.CreateDirectory(tempPath + pathFolders[i]);
		String_t* L_21 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, L_25, NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_27;
		L_27 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_26, NULL);
	}

IL_0056:
	{
		// for (int i = 0; i < pathFolders.Length; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < pathFolders.Length; i++)
		int32_t L_29 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
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
// System.Boolean ParkInc.JuicyBounce::get_IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JuicyBounce_get_IsActive_mE858F221A70F3DDC0CBA807EAB307636D7C40D95 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsActive => isActive;
		bool L_0 = __this->___isActive_9;
		return L_0;
	}
}
// System.Void ParkInc.JuicyBounce::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JuicyBounce_Activate_mE882C6550FE52FD7910C035C8E2302945D4D4AD8 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, const RuntimeMethod* method) 
{
	{
		// isActive = true;
		__this->___isActive_9 = (bool)1;
		// }
		return;
	}
}
// System.Void ParkInc.JuicyBounce::Bounce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JuicyBounce_Bounce_mA143FA0EE0CCAF610CAB96891E3AB0DCC1ABE375 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JuicyBounce_U3CBounceU3Eb__13_0_mF11D0D2097F22473132FF455B65F377CD4EDDC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isActive)
		bool L_0 = __this->___isActive_9;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (bounceCase != null && bounceCase.isActive)
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_1 = __this->___bounceCase_8;
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_2 = __this->___bounceCase_8;
		NullCheck(L_2);
		bool L_3 = L_2->___isActive_6;
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// bounceCase.Kill();
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_4 = __this->___bounceCase_8;
		NullCheck(L_4);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_5;
		L_5 = TweenCase_Kill_m934F81CF89410A401DCFF47026E6A481FC12A714(L_4, NULL);
		// bounceDepth += 0.05f;
		float L_6 = __this->___bounceDepth_7;
		__this->___bounceDepth_7 = ((float)il2cpp_codegen_add(L_6, (0.0500000007f)));
		// if (bounceDepth > maxBounceDepth) bounceDepth = maxBounceDepth;
		float L_7 = __this->___bounceDepth_7;
		float L_8 = __this->___maxBounceDepth_2;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0056;
		}
	}
	{
		// if (bounceDepth > maxBounceDepth) bounceDepth = maxBounceDepth;
		float L_9 = __this->___maxBounceDepth_2;
		__this->___bounceDepth_7 = L_9;
	}

IL_0056:
	{
		// bounceCase = new TweenCaseJuicyBounce(this, GetStartBounceTime(), 1).SetTime(bounceDuration).OnComplete(delegate
		// {
		//     bounceValue = 0;
		//     bounceDepth = 1;
		// }).StartTween();
		float L_10;
		L_10 = JuicyBounce_GetStartBounceTime_m850062B5BA7845F5EDDAE912177CB8C29B2FC7E9(__this, 0, NULL);
		TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E* L_11 = (TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E*)il2cpp_codegen_object_new(TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TweenCaseJuicyBounce__ctor_mF5A825F4CAB1EFBE04BDA720028BB40394820C89(L_11, __this, L_10, (1.0f), NULL);
		float L_12 = __this->___bounceDuration_1;
		NullCheck(L_11);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_13;
		L_13 = TweenCase_SetTime_m621F6E2BAC2F4CD32F73C0420F1A4C06DB038A70(L_11, L_12, NULL);
		TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950* L_14 = (TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950*)il2cpp_codegen_object_new(TweenCallback_t6F3DA28ACD69EA9BFEA3D9B71967F12BC1BDD950_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		TweenCallback__ctor_m89B6636475981D446B1D1DAAA8B85D9B55E01099(L_14, __this, (intptr_t)((void*)JuicyBounce_U3CBounceU3Eb__13_0_mF11D0D2097F22473132FF455B65F377CD4EDDC68_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_15;
		L_15 = TweenCase_OnComplete_m3168F35ADC3CD6B725404ADE5D96F6CFCC3E83CD(L_13, L_14, NULL);
		NullCheck(L_15);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_16;
		L_16 = VirtualFuncInvoker0< TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* >::Invoke(4 /* ParkInc.TweenCase ParkInc.TweenCase::StartTween() */, L_15);
		__this->___bounceCase_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bounceCase_8), (void*)L_16);
		// }
		return;
	}
}
// System.Void ParkInc.JuicyBounce::BounceTween(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JuicyBounce_BounceTween_mD8BFBA4AD0C6A1F1CA6ECBD519E0820F09F47776 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, float ___0_t, const RuntimeMethod* method) 
{
	{
		// bounceValue = t;
		float L_0 = ___0_t;
		__this->___bounceValue_6 = L_0;
		// transform.localScale = new Vector3(Mathf.Pow(bounceScaleX.Evaluate(t), bounceDepth), Mathf.Pow(bounceScaleY.Evaluate(t), bounceDepth), Mathf.Pow(bounceScaleZ.Evaluate(t), bounceDepth));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___transform_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = __this->___bounceScaleX_3;
		float L_3 = ___0_t;
		NullCheck(L_2);
		float L_4;
		L_4 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_2, L_3, NULL);
		float L_5 = __this->___bounceDepth_7;
		float L_6;
		L_6 = powf(L_4, L_5);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___bounceScaleY_4;
		float L_8 = ___0_t;
		NullCheck(L_7);
		float L_9;
		L_9 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_7, L_8, NULL);
		float L_10 = __this->___bounceDepth_7;
		float L_11;
		L_11 = powf(L_9, L_10);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___bounceScaleZ_5;
		float L_13 = ___0_t;
		NullCheck(L_12);
		float L_14;
		L_14 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_12, L_13, NULL);
		float L_15 = __this->___bounceDepth_7;
		float L_16;
		L_16 = powf(L_14, L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_6, L_11, L_16, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_17, NULL);
		// }
		return;
	}
}
// System.Single ParkInc.JuicyBounce::GetStartBounceTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JuicyBounce_GetStartBounceTime_m850062B5BA7845F5EDDAE912177CB8C29B2FC7E9 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, int32_t ___0_depth, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// var target = bounceScaleY.Evaluate(bounceValue);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___bounceScaleY_4;
		float L_1 = __this->___bounceValue_6;
		NullCheck(L_0);
		float L_2;
		L_2 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_0, L_1, NULL);
		V_0 = L_2;
		// var step = depth == 0 ? 0.01f : 0.01f / (10 * depth);
		int32_t L_3 = ___0_depth;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_depth;
		G_B3_0 = ((float)((0.00999999978f)/((float)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_4)))));
		goto IL_0027;
	}

IL_0022:
	{
		G_B3_0 = (0.00999999978f);
	}

IL_0027:
	{
		V_1 = G_B3_0;
		// var error = 0.01f;
		V_2 = (0.00999999978f);
		// for (var pointer = 0f; pointer <= 1f; pointer += step)
		V_3 = (0.0f);
		goto IL_0052;
	}

IL_0036:
	{
		// if (Mathf.Abs(bounceScaleY.Evaluate(pointer) - target) < error)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___bounceScaleY_4;
		float L_6 = V_3;
		NullCheck(L_5);
		float L_7;
		L_7 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_7, L_8)));
		float L_10 = V_2;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_004e;
		}
	}
	{
		// return pointer;
		float L_11 = V_3;
		return L_11;
	}

IL_004e:
	{
		// for (var pointer = 0f; pointer <= 1f; pointer += step)
		float L_12 = V_3;
		float L_13 = V_1;
		V_3 = ((float)il2cpp_codegen_add(L_12, L_13));
	}

IL_0052:
	{
		// for (var pointer = 0f; pointer <= 1f; pointer += step)
		float L_14 = V_3;
		if ((((float)L_14) <= ((float)(1.0f))))
		{
			goto IL_0036;
		}
	}
	{
		// return GetStartBounceTime(depth + 1);
		int32_t L_15 = ___0_depth;
		float L_16;
		L_16 = JuicyBounce_GetStartBounceTime_m850062B5BA7845F5EDDAE912177CB8C29B2FC7E9(__this, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		return L_16;
	}
}
// System.Void ParkInc.JuicyBounce::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JuicyBounce_Clear_m8CA8617ACC7457F74302E32D408EA3814EA9047D (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, const RuntimeMethod* method) 
{
	{
		// if (bounceCase != null)
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_0 = __this->___bounceCase_8;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// bounceCase.Kill();
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_1 = __this->___bounceCase_8;
		NullCheck(L_1);
		TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C* L_2;
		L_2 = TweenCase_Kill_m934F81CF89410A401DCFF47026E6A481FC12A714(L_1, NULL);
		// bounceValue = 0;
		__this->___bounceValue_6 = (0.0f);
		// bounceDepth = 1;
		__this->___bounceDepth_7 = (1.0f);
		// bounceCase = null;
		__this->___bounceCase_8 = (TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bounceCase_8), (void*)(TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)NULL);
	}

IL_0031:
	{
		// isActive = false;
		__this->___isActive_9 = (bool)0;
		// }
		return;
	}
}
// System.Void ParkInc.JuicyBounce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JuicyBounce__ctor_m18FB6540D6B399C9EBE6AC0D82083201D4DA5550 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float maxBounceDepth = 2f;
		__this->___maxBounceDepth_2 = (2.0f);
		// private bool isActive = true;
		__this->___isActive_9 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ParkInc.JuicyBounce::<Bounce>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JuicyBounce_U3CBounceU3Eb__13_0_mF11D0D2097F22473132FF455B65F377CD4EDDC68 (JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* __this, const RuntimeMethod* method) 
{
	{
		// bounceValue = 0;
		__this->___bounceValue_6 = (0.0f);
		// bounceDepth = 1;
		__this->___bounceDepth_7 = (1.0f);
		// }).StartTween();
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
// System.Void ParkInc.JuicyBounce/TweenCaseJuicyBounce::.ctor(ParkInc.JuicyBounce,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseJuicyBounce__ctor_mF5A825F4CAB1EFBE04BDA720028BB40394820C89 (TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E* __this, JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* ___0_juicyBounce, float ___1_startValue, float ___2_resultValue, const RuntimeMethod* method) 
{
	{
		// public TweenCaseJuicyBounce(JuicyBounce juicyBounce, float startValue, float resultValue)
		TweenCase__ctor_m0B5CC99009E23328E98E47C147CA3DC415E5B57C(__this, NULL);
		// this.startValue = startValue;
		float L_0 = ___1_startValue;
		__this->___startValue_14 = L_0;
		// this.resultValue = resultValue;
		float L_1 = ___2_resultValue;
		__this->___resultValue_15 = L_1;
		// this.juicyBounce = juicyBounce;
		JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* L_2 = ___0_juicyBounce;
		__this->___juicyBounce_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___juicyBounce_16), (void*)L_2);
		// parentObject = juicyBounce.transform.gameObject;
		JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* L_3 = ___0_juicyBounce;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___transform_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		((TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)__this)->___parentObject_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)__this)->___parentObject_13), (void*)L_5);
		// }
		return;
	}
}
// System.Boolean ParkInc.JuicyBounce/TweenCaseJuicyBounce::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenCaseJuicyBounce_Validate_m29E50BA75127B983347C7381C4D4DC66B7DAE019 (TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return parentObject != null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)__this)->___parentObject_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Void ParkInc.JuicyBounce/TweenCaseJuicyBounce::DefaultComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseJuicyBounce_DefaultComplete_m6381C31EC1FB76546233F986CB406260602D78FF (TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E* __this, const RuntimeMethod* method) 
{
	{
		// juicyBounce.BounceTween(resultValue);
		JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* L_0 = __this->___juicyBounce_16;
		float L_1 = __this->___resultValue_15;
		NullCheck(L_0);
		JuicyBounce_BounceTween_mD8BFBA4AD0C6A1F1CA6ECBD519E0820F09F47776(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.JuicyBounce/TweenCaseJuicyBounce::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCaseJuicyBounce_Invoke_m8586F8A1AA0E77C8E08AB5FB57F427E26703B5EE (TweenCaseJuicyBounce_tCE960832AC968BAA062F69A273D1500B9F5A457E* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	{
		// juicyBounce.BounceTween(startValue + (resultValue - startValue) * Interpolate(state));
		JuicyBounce_tD446558C8AA9B04EC0E85BCDFABB41D9CA61F400* L_0 = __this->___juicyBounce_16;
		float L_1 = __this->___startValue_14;
		float L_2 = __this->___resultValue_15;
		float L_3 = __this->___startValue_14;
		float L_4 = ((TweenCase_tE4362DF14F4118A208CEEF2DE2BF6498E4846A1C*)__this)->___state_5;
		float L_5;
		L_5 = TweenCase_Interpolate_m743BE965240F72ED851402FF5ADBEE80D43D4586(__this, L_4, NULL);
		NullCheck(L_0);
		JuicyBounce_BounceTween_mD8BFBA4AD0C6A1F1CA6ECBD519E0820F09F47776(L_0, ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_3)), L_5)))), NULL);
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
// System.Void ParkInc.PhysicsHelper::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHelper_Init_mD3C401DB002CE1D0276D3746BDCBC2573DB6EB99 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ParkInc.PhysicsHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHelper__cctor_mF6CF5528F935C4C4B9218CA10B8E611BAD1C04BB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhysicsHelper_t95699AA580518184FBDE754F9880F04CA3BCAFCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int LAYER_DEFAULT = LayerMask.NameToLayer("Default");
		int32_t L_0;
		L_0 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, NULL);
		((PhysicsHelper_t95699AA580518184FBDE754F9880F04CA3BCAFCF_StaticFields*)il2cpp_codegen_static_fields_for(PhysicsHelper_t95699AA580518184FBDE754F9880F04CA3BCAFCF_il2cpp_TypeInfo_var))->___LAYER_DEFAULT_0 = L_0;
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
// System.Void ParkInc.TextureExtensions::DrawLine(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtensions_DrawLine_mAA5C28AF9295119D2EE9F978E345D634C79D1C0F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_p1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_p2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_col, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector2 t = p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_p1;
		V_0 = L_0;
		// float frac = 1 / Mathf.Sqrt(Mathf.Pow(p2.x - p1.x, 2) + Mathf.Pow(p2.y - p1.y, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___2_p2;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_p1;
		float L_4 = L_3.___x_0;
		float L_5;
		L_5 = powf(((float)il2cpp_codegen_subtract(L_2, L_4)), (2.0f));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___2_p2;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___1_p1;
		float L_9 = L_8.___y_1;
		float L_10;
		L_10 = powf(((float)il2cpp_codegen_subtract(L_7, L_9)), (2.0f));
		float L_11;
		L_11 = sqrtf(((float)il2cpp_codegen_add(L_5, L_10)));
		V_1 = ((float)((1.0f)/L_11));
		// float ctr = 0;
		V_2 = (0.0f);
		goto IL_0067;
	}

IL_0045:
	{
		// t = Vector2.Lerp(p1, p2, ctr);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___1_p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___2_p2;
		float L_14 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_12, L_13, L_14, NULL);
		V_0 = L_15;
		// ctr += frac;
		float L_16 = V_2;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_add(L_16, L_17));
		// texture.SetPixel((int)t.x, (int)t.y, col);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_texture;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = L_21.___y_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___3_col;
		NullCheck(L_18);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_18, il2cpp_codegen_cast_double_to_int<int32_t>(L_20), il2cpp_codegen_cast_double_to_int<int32_t>(L_22), L_23, NULL);
	}

IL_0067:
	{
		// while ((int)t.x != (int)p2.x || (int)t.y != (int)p2.y)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___2_p2;
		float L_27 = L_26.___x_0;
		if ((!(((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_25)) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_27)))))
		{
			goto IL_0045;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___2_p2;
		float L_31 = L_30.___y_1;
		if ((!(((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_29)) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_31)))))
		{
			goto IL_0045;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ParkInc.TextureExtensions::DrawBigDot(UnityEngine.Texture2D,System.Int32,System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtensions_DrawBigDot_m8576BE8340510ED7555B110A84CA8D3BBAC0861B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_x, int32_t ___2_y, int32_t ___3_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_color, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int halfRadius = radius / 2;
		int32_t L_0 = ___3_radius;
		V_0 = ((int32_t)(L_0/2));
		// for (int i = x - halfRadius; i < x + halfRadius; i++)
		int32_t L_1 = ___1_x;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		goto IL_0042;
	}

IL_000a:
	{
		// for (int j = y - halfRadius; j < y + halfRadius; j++)
		int32_t L_3 = ___2_y;
		int32_t L_4 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
		goto IL_0038;
	}

IL_0010:
	{
		// if (i >= 0 && j >= 0 && i < texture.width && j < texture.height)
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_10 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_texture;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		// texture.SetPixel(i, j, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___0_texture;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___4_color;
		NullCheck(L_13);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_13, L_14, L_15, L_16, NULL);
	}

IL_0034:
	{
		// for (int j = y - halfRadius; j < y + halfRadius; j++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0038:
	{
		// for (int j = y - halfRadius; j < y + halfRadius; j++)
		int32_t L_18 = V_2;
		int32_t L_19 = ___2_y;
		int32_t L_20 = V_0;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_add(L_19, L_20)))))
		{
			goto IL_0010;
		}
	}
	{
		// for (int i = x - halfRadius; i < x + halfRadius; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0042:
	{
		// for (int i = x - halfRadius; i < x + halfRadius; i++)
		int32_t L_22 = V_1;
		int32_t L_23 = ___1_x;
		int32_t L_24 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_add(L_23, L_24)))))
		{
			goto IL_000a;
		}
	}
	{
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
// System.Double ParkInc.TimeUtils::GetCurrentUnixTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeUtils_GetCurrentUnixTimestamp_m6B1228CF8C3BF4AEE19A48C7375F985C43F44991 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// double unixTimestamp = (DateTime.Now - DEFAULT_DATE_UNIX).TotalSeconds;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		// return unixTimestamp;
		return L_3;
	}
}
// System.Double ParkInc.TimeUtils::GetCurrentUnixTimestampWithExtraTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeUtils_GetCurrentUnixTimestampWithExtraTime_m2CFDFACEE692132A3CC9AB09644B3DF37D350F0B (int32_t ___0_weeks, int32_t ___1_days, int32_t ___2_hours, int32_t ___3_minutes, int32_t ___4_seconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime nowDate = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		// nowDate = nowDate.AddDays(weeks * 7);
		int32_t L_1 = ___0_weeks;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_0), ((double)((int32_t)il2cpp_codegen_multiply(L_1, 7))), NULL);
		V_0 = L_2;
		// nowDate = nowDate.AddDays(days);
		int32_t L_3 = ___1_days;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_0), ((double)L_3), NULL);
		V_0 = L_4;
		// nowDate = nowDate.AddHours(hours);
		int32_t L_5 = ___2_hours;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02((&V_0), ((double)L_5), NULL);
		V_0 = L_6;
		// nowDate = nowDate.AddMinutes(minutes);
		int32_t L_7 = ___3_minutes;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = DateTime_AddMinutes_m8B24125F1100B23A1D9D9361A2745577062E0D91((&V_0), ((double)L_7), NULL);
		V_0 = L_8;
		// nowDate = nowDate.AddSeconds(seconds);
		int32_t L_9 = ___4_seconds;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10;
		L_10 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)L_9), NULL);
		V_0 = L_10;
		// double unixTimestamp = (nowDate - DEFAULT_DATE_UNIX).TotalSeconds;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12 = ((TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_13;
		L_13 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_11, L_12, NULL);
		V_1 = L_13;
		double L_14;
		L_14 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		// return unixTimestamp;
		return L_14;
	}
}
// System.Double ParkInc.TimeUtils::GetCurrentDayUnixTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeUtils_GetCurrentDayUnixTimestamp_m098B5D3C59E149B9E3197F6459C64ADE08EECF5C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime nowDate = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		// nowDate = nowDate.AddHours(-nowDate.Hour);
		int32_t L_1;
		L_1 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02((&V_0), ((double)((-L_1))), NULL);
		V_0 = L_2;
		// nowDate = nowDate.AddMinutes(-nowDate.Minute);
		int32_t L_3;
		L_3 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_AddMinutes_m8B24125F1100B23A1D9D9361A2745577062E0D91((&V_0), ((double)((-L_3))), NULL);
		V_0 = L_4;
		// nowDate = nowDate.AddSeconds(-nowDate.Second);
		int32_t L_5;
		L_5 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)((-L_5))), NULL);
		V_0 = L_6;
		// double unixTimestamp = (nowDate - DEFAULT_DATE_UNIX).TotalSeconds;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ((TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_7, L_8, NULL);
		V_1 = L_9;
		double L_10;
		L_10 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		// return unixTimestamp;
		return L_10;
	}
}
// System.Double ParkInc.TimeUtils::GetUnixTimestampFromDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeUtils_GetUnixTimestampFromDateTime_m679D7A1D315584F3DBAE4C3F381412B5DB21D059 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime date = new DateTime(1970, 1, 1, 0, 0, 0, target.Kind);
		int32_t L_0;
		L_0 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&___0_target), NULL);
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, L_0, NULL);
		// double unixTimestamp = (target - date).TotalSeconds;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_target;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_2, NULL);
		V_1 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		// return unixTimestamp;
		return L_4;
	}
}
// System.DateTime ParkInc.TimeUtils::GetDateTimeFromUnixTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TimeUtils_GetDateTimeFromUnixTime_m26E86C00C974E0973D4AEF1337CEA0243B4931C5 (double ___0_unixTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return DEFAULT_DATE_UNIX.AddSeconds(unixTime);
		il2cpp_codegen_runtime_class_init_inline(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ((TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX_0;
		V_0 = L_0;
		double L_1 = ___0_unixTime;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), L_1, NULL);
		return L_2;
	}
}
// System.String ParkInc.TimeUtils::GetCurrentDateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeUtils_GetCurrentDateString_m05DBF570AFCBAD818E9062DF6DBD7EE558287B12 (String_t* ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return DateTime.Now.ToString(format);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		String_t* L_1 = ___0_format;
		String_t* L_2;
		L_2 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), L_1, NULL);
		return L_2;
	}
}
// System.Void ParkInc.TimeUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUtils__cctor_mD82C9622FD0A495F0EA1A61D11629ABCF484BFF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly DateTime DEFAULT_DATE_UNIX = new DateTime(1970, 1, 1, 0, 0, 0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		((TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtils_tFEDB297A748C4D295EA15A5329522AB56A3F14EF_il2cpp_TypeInfo_var))->___DEFAULT_DATE_UNIX_0 = L_0;
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
// System.Void ParkInc.BoolToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolToggle__ctor_m37C966F4564D625EC76F0178DDD5EF9BBE7098B9 (BoolToggle_t4639BD02293D850C3902459A10A6BC80EF936214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleType_1__ctor_mE8003251E51F5BC5172BAD53E53BE23355721712_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToggleType_1__ctor_mE8003251E51F5BC5172BAD53E53BE23355721712(__this, ToggleType_1__ctor_mE8003251E51F5BC5172BAD53E53BE23355721712_RuntimeMethod_var);
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
// System.Void ParkInc.FloatToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatToggle__ctor_m4B79265574B709C4753A7AADE5AD3B4498844A6C (FloatToggle_tF57E2E1961B265BDA7DAF35DAAD81B7D4F85B4E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleType_1__ctor_mFD467319680B9353AEF7F2C542F938B64E663B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToggleType_1__ctor_mFD467319680B9353AEF7F2C542F938B64E663B5D(__this, ToggleType_1__ctor_mFD467319680B9353AEF7F2C542F938B64E663B5D_RuntimeMethod_var);
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
// System.Void ParkInc.IntToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntToggle__ctor_m0260D221644C3B6B216AFAF63A88A3C65BF9CCF7 (IntToggle_tC79B84667E3357F678041CC35A70ADC81E7B2CBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleType_1__ctor_m7A47D8EE7C6C51F3B9C60904DB296321CE0961B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToggleType_1__ctor_m7A47D8EE7C6C51F3B9C60904DB296321CE0961B3(__this, ToggleType_1__ctor_m7A47D8EE7C6C51F3B9C60904DB296321CE0961B3_RuntimeMethod_var);
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
// System.Void ParkInc.LongToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongToggle__ctor_m9F822A3AB74A2A416047BFA7E29E5D3D5132F6E1 (LongToggle_t358850C0EAA1F3421CFB53A24460B53C3E2D5A97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleType_1__ctor_mF8F24C9DCC2790875556722DE960BBAD313FC00A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToggleType_1__ctor_mF8F24C9DCC2790875556722DE960BBAD313FC00A(__this, ToggleType_1__ctor_mF8F24C9DCC2790875556722DE960BBAD313FC00A_RuntimeMethod_var);
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
// System.Void ParkInc.StringToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringToggle__ctor_m2DABA97EA335D702100A72C115754E0866934125 (StringToggle_tBBD598A9F6DC79F1B265826E78C7D242435B7C9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleType_1__ctor_m5D96B4FF0867EE314280FC5DAEB928063ACCE2D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToggleType_1__ctor_m5D96B4FF0867EE314280FC5DAEB928063ACCE2D8(__this, ToggleType_1__ctor_m5D96B4FF0867EE314280FC5DAEB928063ACCE2D8_RuntimeMethod_var);
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
// System.Void ParkInc.DoubleToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleToggle__ctor_m2ACCC2DCD59064CF6CF90377A39EA744A661E4C9 (DoubleToggle_t3027AF4F4F53227884EFEF59049D82A8EC7479A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleType_1__ctor_m6791A2029001ACFE0B70025B389CA7D82243E3A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToggleType_1__ctor_m6791A2029001ACFE0B70025B389CA7D82243E3A7(__this, ToggleType_1__ctor_m6791A2029001ACFE0B70025B389CA7D82243E3A7_RuntimeMethod_var);
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
// System.Void ParkInc.BaseAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB (BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public BaseAttribute(Type targetAttributeType)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.targetAttributeType = targetAttributeType;
		Type_t* L_0 = ___0_targetAttributeType;
		__this->___targetAttributeType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetAttributeType_0), (void*)L_0);
		// }
		return;
	}
}
// System.Type ParkInc.BaseAttribute::get_TargetAttributeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* BaseAttribute_get_TargetAttributeType_m3557810E7AD387360534EBBE83A2BB2C853C9C8D (BaseAttribute_t8BC43BF7DE093573C105715B474F2C3D14EC34FC* __this, const RuntimeMethod* method) 
{
	{
		// return this.targetAttributeType;
		Type_t* L_0 = __this->___targetAttributeType_0;
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
// System.Void ParkInc.DrawConditionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawConditionAttribute__ctor_m38E30E308D0659AB899BBC53DEBB780BE6D1F086 (DrawConditionAttribute_t8AC434A34FECC0E3EA98B1836D229B60DA4EB941* __this, const RuntimeMethod* method) 
{
	{
		ExtendedEditorAttribute__ctor_m169EB33C905347CF11127A875EE63CDC8C3F4B36(__this, NULL);
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
// System.Void ParkInc.HideIfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideIfAttribute__ctor_mE215F56E4CB8EACF60F55AE3BBA82B780989E44F (HideIfAttribute_t6383871523AC7874D1E933BDCF31D85947784C17* __this, String_t* ___0_conditionName, const RuntimeMethod* method) 
{
	{
		// public HideIfAttribute(string conditionName)
		DrawConditionAttribute__ctor_m38E30E308D0659AB899BBC53DEBB780BE6D1F086(__this, NULL);
		// this.conditionName = conditionName;
		String_t* L_0 = ___0_conditionName;
		__this->___conditionName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___conditionName_0), (void*)L_0);
		// }
		return;
	}
}
// System.String ParkInc.HideIfAttribute::get_ConditionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HideIfAttribute_get_ConditionName_m5E16115CD403A6191CE3F7A884E7227413F88093 (HideIfAttribute_t6383871523AC7874D1E933BDCF31D85947784C17* __this, const RuntimeMethod* method) 
{
	{
		// return this.conditionName;
		String_t* L_0 = __this->___conditionName_0;
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
// System.Void ParkInc.ShowIfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfAttribute__ctor_m14B16EC424178E3FC2FD9BDC8DE66A9510F23C25 (ShowIfAttribute_tDA72BC560D9112071D8B36BC69811FF714B792C3* __this, String_t* ___0_conditionName, const RuntimeMethod* method) 
{
	{
		// public ShowIfAttribute(string conditionName)
		DrawConditionAttribute__ctor_m38E30E308D0659AB899BBC53DEBB780BE6D1F086(__this, NULL);
		// this.conditionName = conditionName;
		String_t* L_0 = ___0_conditionName;
		__this->___conditionName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___conditionName_0), (void*)L_0);
		// }
		return;
	}
}
// System.String ParkInc.ShowIfAttribute::get_ConditionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowIfAttribute_get_ConditionName_mDD575CE55831C16FD882C9C96A5FA54329ADD4FE (ShowIfAttribute_tDA72BC560D9112071D8B36BC69811FF714B792C3* __this, const RuntimeMethod* method) 
{
	{
		// return this.conditionName;
		String_t* L_0 = __this->___conditionName_0;
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
// System.Void ParkInc.ButtonAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_mFCE745908A6EC77328541F3F3B6CA1A97B600C89 (ButtonAttribute_t3C73A96658AEDD21A31E32CE634F83B872D64B0A* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// public ButtonAttribute(string text = null)
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
		// this.text = text;
		String_t* L_0 = ___0_text;
		__this->___text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_0);
		// }
		return;
	}
}
// System.String ParkInc.ButtonAttribute::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ButtonAttribute_get_Text_mA0B7462BC33E4FA219F6780355EC659E0007E159 (ButtonAttribute_t3C73A96658AEDD21A31E32CE634F83B872D64B0A* __this, const RuntimeMethod* method) 
{
	{
		// return this.text;
		String_t* L_0 = __this->___text_0;
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
// System.Void ParkInc.DrawerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0 (DrawerAttribute_tAE74FF0F08DD28CDF8122D8DD858B88A24BC3CEB* __this, const RuntimeMethod* method) 
{
	{
		ExtendedEditorAttribute__ctor_m169EB33C905347CF11127A875EE63CDC8C3F4B36(__this, NULL);
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
// System.Void ParkInc.DropdownAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownAttribute__ctor_m03F3993011380BDE1F4468287DCD93C9E5F284F1 (DropdownAttribute_tB63E7AAF4AA2ABD0BF1E6230F213BEFEEF532C4C* __this, String_t* ___0_valuesFieldName, const RuntimeMethod* method) 
{
	{
		// public DropdownAttribute(string valuesFieldName)
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
		// this.valuesFieldName = valuesFieldName;
		String_t* L_0 = ___0_valuesFieldName;
		__this->___valuesFieldName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valuesFieldName_0), (void*)L_0);
		// }
		return;
	}
}
// System.String ParkInc.DropdownAttribute::get_ValuesFieldName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DropdownAttribute_get_ValuesFieldName_m01086351613093579F0F071CA7899BF108321308 (DropdownAttribute_tB63E7AAF4AA2ABD0BF1E6230F213BEFEEF532C4C* __this, const RuntimeMethod* method) 
{
	{
		// return this.valuesFieldName;
		String_t* L_0 = __this->___valuesFieldName_0;
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
// System.Void ParkInc.MinMaxSliderAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSliderAttribute__ctor_m649D15AEBE48844995C6699429B779BCA6D9711A (MinMaxSliderAttribute_t611AF2B776BD290594F8DF77CFD23B77FE1714D6* __this, float ___0_minValue, float ___1_maxValue, const RuntimeMethod* method) 
{
	{
		// public MinMaxSliderAttribute(float minValue, float maxValue)
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
		// this.minValue = minValue;
		float L_0 = ___0_minValue;
		__this->___minValue_0 = L_0;
		// this.maxValue = maxValue;
		float L_1 = ___1_maxValue;
		__this->___maxValue_1 = L_1;
		// }
		return;
	}
}
// System.Single ParkInc.MinMaxSliderAttribute::get_MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxSliderAttribute_get_MinValue_mC7AED59EDB0AABB266AF3C8AFAEB1C92F833BA5A (MinMaxSliderAttribute_t611AF2B776BD290594F8DF77CFD23B77FE1714D6* __this, const RuntimeMethod* method) 
{
	{
		// return this.minValue;
		float L_0 = __this->___minValue_0;
		return L_0;
	}
}
// System.Single ParkInc.MinMaxSliderAttribute::get_MaxValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxSliderAttribute_get_MaxValue_mF07A509096E8843A59B72664F769A5D87FC256B7 (MinMaxSliderAttribute_t611AF2B776BD290594F8DF77CFD23B77FE1714D6* __this, const RuntimeMethod* method) 
{
	{
		// return this.maxValue;
		float L_0 = __this->___maxValue_1;
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
// System.Void ParkInc.ProgressBarAttribute::.ctor(System.String,System.Single,ParkInc.ProgressBarColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute__ctor_mF74F71B24C56116084AF70191FCABE8295E20FF9 (ProgressBarAttribute_t04F5930F46A47C79C9B8CABC77CD55F854070752* __this, String_t* ___0_name, float ___1_maxValue, int32_t ___2_color, const RuntimeMethod* method) 
{
	{
		// public ProgressBarAttribute(string name = "", float maxValue = 100, ProgressBarColor color = ProgressBarColor.Blue)
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
		// Name = name;
		String_t* L_0 = ___0_name;
		__this->___Name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_0);
		// MaxValue = maxValue;
		float L_1 = ___1_maxValue;
		__this->___MaxValue_1 = L_1;
		// Color = color;
		int32_t L_2 = ___2_color;
		__this->___Color_2 = L_2;
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
// System.Void ParkInc.ReadOnlyFieldAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyFieldAttribute__ctor_m3CBDF6AF60DE0BE578E02A6CF8FC3407B660085E (ReadOnlyFieldAttribute_t49A779D1B530E4E1D4F8A111A9236575B99215A0* __this, const RuntimeMethod* method) 
{
	{
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
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
// System.Void ParkInc.ReorderableListAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReorderableListAttribute__ctor_mD6B1BF7C1592152A45016BDB7458B750CD3C0C6B (ReorderableListAttribute_t808C0397718D813764BFCF211AA0A80EF10554C7* __this, const RuntimeMethod* method) 
{
	{
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
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
// System.Void ParkInc.ResizableTextAreaAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizableTextAreaAttribute__ctor_mD4C54426C4C2A79115CCCF5FB8D2C7F68752659B (ResizableTextAreaAttribute_t7B6E97128CE5EE84564F3AD048CD34927812FB12* __this, const RuntimeMethod* method) 
{
	{
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
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
// System.Void ParkInc.ShowAssetPreviewAttribute::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAssetPreviewAttribute__ctor_mA598071DD9DC64745EDA8089C2CB4B8B18F30208 (ShowAssetPreviewAttribute_tC9FFFAB7EECD2C407AB57A6023000D8D7E241928* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	{
		// public ShowAssetPreviewAttribute(int width = 64, int height = 64)
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// }
		return;
	}
}
// System.Int32 ParkInc.ShowAssetPreviewAttribute::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShowAssetPreviewAttribute_get_Width_mD5BE02F9807ED4B6502E9B48CCC87599342ABFD5 (ShowAssetPreviewAttribute_tC9FFFAB7EECD2C407AB57A6023000D8D7E241928* __this, const RuntimeMethod* method) 
{
	{
		// return this.width;
		int32_t L_0 = __this->___width_0;
		return L_0;
	}
}
// System.Int32 ParkInc.ShowAssetPreviewAttribute::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShowAssetPreviewAttribute_get_Height_m7F1F934BF528BED66CE779AE77951FD4A69806FA (ShowAssetPreviewAttribute_tC9FFFAB7EECD2C407AB57A6023000D8D7E241928* __this, const RuntimeMethod* method) 
{
	{
		// return this.height;
		int32_t L_0 = __this->___height_1;
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
// System.Void ParkInc.ShowNativePropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowNativePropertyAttribute__ctor_m328E55A20132ABA8ADB22F5AAB1744F16EF5DA02 (ShowNativePropertyAttribute_tD3B331C315B6799EF8F751587C5A964A5EB4E3CF* __this, const RuntimeMethod* method) 
{
	{
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
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
// System.Void ParkInc.ShowNonSerializedFieldAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowNonSerializedFieldAttribute__ctor_mD7D1282B2559177F64915D99CC0A2AEE81172B6C (ShowNonSerializedFieldAttribute_t0ED9D8744B3D65BCBA764A48BD7E5A50CFF499DE* __this, const RuntimeMethod* method) 
{
	{
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
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
// System.Void ParkInc.SliderAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderAttribute__ctor_m9A6A893EC30533819AF785251890EFFE95C16823 (SliderAttribute_t7E074005A634B35A3E6074C9131E9E4742811966* __this, float ___0_minValue, float ___1_maxValue, const RuntimeMethod* method) 
{
	{
		// public SliderAttribute(float minValue, float maxValue)
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
		// this.minValue = minValue;
		float L_0 = ___0_minValue;
		__this->___minValue_0 = L_0;
		// this.maxValue = maxValue;
		float L_1 = ___1_maxValue;
		__this->___maxValue_1 = L_1;
		// }
		return;
	}
}
// System.Void ParkInc.SliderAttribute::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderAttribute__ctor_m82A1DE9F9E5F7C69A97342904EE9D6287A0687D9 (SliderAttribute_t7E074005A634B35A3E6074C9131E9E4742811966* __this, int32_t ___0_minValue, int32_t ___1_maxValue, const RuntimeMethod* method) 
{
	{
		// public SliderAttribute(int minValue, int maxValue)
		DrawerAttribute__ctor_m5ACF3EECDEEEFCC4F4E8906C2112E804322AC3A0(__this, NULL);
		// this.minValue = minValue;
		int32_t L_0 = ___0_minValue;
		__this->___minValue_0 = ((float)L_0);
		// this.maxValue = maxValue;
		int32_t L_1 = ___1_maxValue;
		__this->___maxValue_1 = ((float)L_1);
		// }
		return;
	}
}
// System.Single ParkInc.SliderAttribute::get_MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderAttribute_get_MinValue_mDF8A4CF89B60719E16539695BBD7CA76C3A0F201 (SliderAttribute_t7E074005A634B35A3E6074C9131E9E4742811966* __this, const RuntimeMethod* method) 
{
	{
		// return this.minValue;
		float L_0 = __this->___minValue_0;
		return L_0;
	}
}
// System.Single ParkInc.SliderAttribute::get_MaxValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderAttribute_get_MaxValue_mF3A1D4E96F37501281FAC91C57584B4A87830556 (SliderAttribute_t7E074005A634B35A3E6074C9131E9E4742811966* __this, const RuntimeMethod* method) 
{
	{
		// return this.maxValue;
		float L_0 = __this->___maxValue_1;
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
// System.Void ParkInc.ExtendedEditorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedEditorAttribute__ctor_m169EB33C905347CF11127A875EE63CDC8C3F4B36 (ExtendedEditorAttribute_t5DCB04CEDE5584B84558AB85308156C6635B6BC4* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void ParkInc.FieldDrawerAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDrawerAttribute__ctor_m3B423F40AA9E6F4C5DB397DB336C62886781E230 (FieldDrawerAttribute_tC21CEF9AE3CD33EE5ECD2E3FD1F6F9A6CA8039D4* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public FieldDrawerAttribute(Type targetAttributeType) : base(targetAttributeType)
		Type_t* L_0 = ___0_targetAttributeType;
		BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB(__this, L_0, NULL);
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
// System.Void ParkInc.BoxGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGroupAttribute__ctor_mBDDB0F990EE7C3109AD2E4AD3AA6FA0FE3360DB7 (BoxGroupAttribute_t4D7B63F6C58BA1D9A97317AB7FA1B5D85AB7C00B* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// : base(name)
		String_t* L_0 = ___0_name;
		GroupAttribute__ctor_m5F3EAE5357AB5B0C1B2413BD34814D1B1084A2BB(__this, L_0, NULL);
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
// System.String ParkInc.GroupAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GroupAttribute_get_Name_m820DDAA2A5DFFEC68D788AA62CE95A3952E1B1EC (GroupAttribute_t4E15700F70A4FB17BBDD232ADC9E4CBDB05BB044* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => name;
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.Void ParkInc.GroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupAttribute__ctor_m5F3EAE5357AB5B0C1B2413BD34814D1B1084A2BB (GroupAttribute_t4E15700F70A4FB17BBDD232ADC9E4CBDB05BB044* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public GroupAttribute(string name)
		ExtendedEditorAttribute__ctor_m169EB33C905347CF11127A875EE63CDC8C3F4B36(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___0_name;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
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
// System.Void ParkInc.InfoBoxAttribute::.ctor(System.String,ParkInc.InfoBoxType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBoxAttribute__ctor_m89B1ABA2CB4D46F14BCBFC53BB68284B36D0CF70 (InfoBoxAttribute_t6D9B9C4793D6C2390F2887FEAC858E15A81F7041* __this, String_t* ___0_text, int32_t ___1_type, String_t* ___2_visibleIf, const RuntimeMethod* method) 
{
	{
		// public InfoBoxAttribute(string text, InfoBoxType type = InfoBoxType.Normal, string visibleIf = null)
		MetaAttribute__ctor_mE0DFD9FC488603BAB65813C986827ACE465F5DEF(__this, NULL);
		// this.text = text;
		String_t* L_0 = ___0_text;
		__this->___text_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_1), (void*)L_0);
		// this.type = type;
		int32_t L_1 = ___1_type;
		__this->___type_2 = L_1;
		// this.visibleIf = visibleIf;
		String_t* L_2 = ___2_visibleIf;
		__this->___visibleIf_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___visibleIf_3), (void*)L_2);
		// }
		return;
	}
}
// System.Void ParkInc.InfoBoxAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBoxAttribute__ctor_m261521556158084715AEF28E282A87896157D3A4 (InfoBoxAttribute_t6D9B9C4793D6C2390F2887FEAC858E15A81F7041* __this, String_t* ___0_text, String_t* ___1_visibleIf, const RuntimeMethod* method) 
{
	{
		// : this(text, InfoBoxType.Normal, visibleIf)
		String_t* L_0 = ___0_text;
		String_t* L_1 = ___1_visibleIf;
		InfoBoxAttribute__ctor_m89B1ABA2CB4D46F14BCBFC53BB68284B36D0CF70(__this, L_0, 0, L_1, NULL);
		// }
		return;
	}
}
// System.String ParkInc.InfoBoxAttribute::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InfoBoxAttribute_get_Text_m77F4BD9D11CD8457A78F80776A8A5750DAF7CCE8 (InfoBoxAttribute_t6D9B9C4793D6C2390F2887FEAC858E15A81F7041* __this, const RuntimeMethod* method) 
{
	{
		// return this.text;
		String_t* L_0 = __this->___text_1;
		return L_0;
	}
}
// ParkInc.InfoBoxType ParkInc.InfoBoxAttribute::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfoBoxAttribute_get_Type_mB209F972243D5A6487973B9A5F3ACF7FF729EC90 (InfoBoxAttribute_t6D9B9C4793D6C2390F2887FEAC858E15A81F7041* __this, const RuntimeMethod* method) 
{
	{
		// return this.type;
		int32_t L_0 = __this->___type_2;
		return L_0;
	}
}
// System.String ParkInc.InfoBoxAttribute::get_VisibleIf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InfoBoxAttribute_get_VisibleIf_mF7537E708098155E217D1D8C2837545C876FD7EE (InfoBoxAttribute_t6D9B9C4793D6C2390F2887FEAC858E15A81F7041* __this, const RuntimeMethod* method) 
{
	{
		// return this.visibleIf;
		String_t* L_0 = __this->___visibleIf_3;
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
// System.Int32 ParkInc.MetaAttribute::get_Order()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetaAttribute_get_Order_m5C5132D1DC346A8677A556A1C28247E2BF3D35E6 (MetaAttribute_t432CD49DEA174BF28E4E4C37607F93AEF766D213* __this, const RuntimeMethod* method) 
{
	{
		// return this.order;
		int32_t L_0 = __this->___order_0;
		return L_0;
	}
}
// System.Void ParkInc.MetaAttribute::set_Order(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAttribute_set_Order_m0C1C7F1A084558DD51E4B5F526ADA0BB48378E1B (MetaAttribute_t432CD49DEA174BF28E4E4C37607F93AEF766D213* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this.order = value;
		int32_t L_0 = ___0_value;
		__this->___order_0 = L_0;
		// }
		return;
	}
}
// System.Void ParkInc.MetaAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAttribute__ctor_mE0DFD9FC488603BAB65813C986827ACE465F5DEF (MetaAttribute_t432CD49DEA174BF28E4E4C37607F93AEF766D213* __this, const RuntimeMethod* method) 
{
	{
		ExtendedEditorAttribute__ctor_m169EB33C905347CF11127A875EE63CDC8C3F4B36(__this, NULL);
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
// System.Void ParkInc.OnValueChangedAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedAttribute__ctor_mCBB3E3ACBC743A8C9F4987CF33892641D293A249 (OnValueChangedAttribute_t95BC64F2AF576221726F5B20F3D9AB13351AC411* __this, String_t* ___0_callbackName, const RuntimeMethod* method) 
{
	{
		// public OnValueChangedAttribute(string callbackName)
		MetaAttribute__ctor_mE0DFD9FC488603BAB65813C986827ACE465F5DEF(__this, NULL);
		// this.callbackName = callbackName;
		String_t* L_0 = ___0_callbackName;
		__this->___callbackName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackName_1), (void*)L_0);
		// }
		return;
	}
}
// System.String ParkInc.OnValueChangedAttribute::get_CallbackName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OnValueChangedAttribute_get_CallbackName_mCEA523ADC4587F75B724D4000328AA34CCD1C47C (OnValueChangedAttribute_t95BC64F2AF576221726F5B20F3D9AB13351AC411* __this, const RuntimeMethod* method) 
{
	{
		// return this.callbackName;
		String_t* L_0 = __this->___callbackName_1;
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
// System.Void ParkInc.MethodDrawerAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDrawerAttribute__ctor_m258099373671EDECFA5279A4F8BCBFC1346A9FAF (MethodDrawerAttribute_t97BA7D70DD1F8547EFB635D3DAF88BD7C216008A* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public MethodDrawerAttribute(Type targetAttributeType) : base(targetAttributeType)
		Type_t* L_0 = ___0_targetAttributeType;
		BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB(__this, L_0, NULL);
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
// System.Void ParkInc.NativePropertyDrawerAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePropertyDrawerAttribute__ctor_m20BDDB0FC8B9355798558C56CAF4C3E0F8816476 (NativePropertyDrawerAttribute_t3089D0938245960CBAE86E124AD5FD98DA664D47* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public NativePropertyDrawerAttribute(Type targetAttributeType) : base(targetAttributeType)
		Type_t* L_0 = ___0_targetAttributeType;
		BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB(__this, L_0, NULL);
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
// System.Void ParkInc.PropertyDrawConditionAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDrawConditionAttribute__ctor_mF955308DBBDE4F125F31B77B360DB2870DC8987D (PropertyDrawConditionAttribute_tE9C8E680938CD582F165D427033D46C22C83E23B* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public PropertyDrawConditionAttribute(Type targetAttributeType) : base(targetAttributeType)
		Type_t* L_0 = ___0_targetAttributeType;
		BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB(__this, L_0, NULL);
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
// System.Void ParkInc.PropertyDrawerAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDrawerAttribute__ctor_m160AF8E925372D4B7A7EA0DABBD9A632F98DD8CF (PropertyDrawerAttribute_tDD1FB6B33E0437D6BF29D9A4DAAC5E5BC8DE8EF4* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public PropertyDrawerAttribute(Type targetAttributeType) : base(targetAttributeType)
		Type_t* L_0 = ___0_targetAttributeType;
		BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB(__this, L_0, NULL);
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
// System.Void ParkInc.PropertyGrouperAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGrouperAttribute__ctor_m20F8950D67FE342321453B8B76AA7A7513582394 (PropertyGrouperAttribute_t2EE388C30793C7AA65B8EC634FD23E3FB0D8F068* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public PropertyGrouperAttribute(Type targetAttributeType) : base(targetAttributeType)
		Type_t* L_0 = ___0_targetAttributeType;
		BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB(__this, L_0, NULL);
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
// System.Void ParkInc.PropertyMetaAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyMetaAttribute__ctor_mA64ABCBE1CD3FBFD0369C4C7E1A94FB2F44D4D99 (PropertyMetaAttribute_t42B1B6FEBDB2566333AC12F92E4E7AC2758D75E7* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public PropertyMetaAttribute(Type targetAttributeType) : base(targetAttributeType)
		Type_t* L_0 = ___0_targetAttributeType;
		BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB(__this, L_0, NULL);
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
// System.Void ParkInc.PropertyValidatorAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyValidatorAttribute__ctor_m8CADD0911B82EACF5DED2FDA2E234E91BEDC815B (PropertyValidatorAttribute_t7AC158CFE73AE81BFA7B6093F612127CAB97F974* __this, Type_t* ___0_targetAttributeType, const RuntimeMethod* method) 
{
	{
		// public PropertyValidatorAttribute(Type targetAttributeType) : base(targetAttributeType)
		Type_t* L_0 = ___0_targetAttributeType;
		BaseAttribute__ctor_m453C5E80961ACD3AF6532FAF79C81DEB87431CAB(__this, L_0, NULL);
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
// System.Void ParkInc.ComponentAttribute::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentAttribute__ctor_m74DA59DFEC909ABB281D0C47DC948D8D165F56C4 (ComponentAttribute_t5C7655B73B1A3DD0D2B6B838A0DE1E734AC6D853* __this, Type_t* ___0_type, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// public ComponentAttribute(Type type, string message = null)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.type = type;
		Type_t* L_0 = ___0_type;
		__this->___type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_0);
		// this.message = message;
		String_t* L_1 = ___1_message;
		__this->___message_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_1), (void*)L_1);
		// }
		return;
	}
}
// System.String ParkInc.ComponentAttribute::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ComponentAttribute_get_Message_mBBC01F08D552CD1B5F702949265AF8DEDDD04EBB (ComponentAttribute_t5C7655B73B1A3DD0D2B6B838A0DE1E734AC6D853* __this, const RuntimeMethod* method) 
{
	{
		// return this.message;
		String_t* L_0 = __this->___message_1;
		return L_0;
	}
}
// System.String ParkInc.ComponentAttribute::get_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ComponentAttribute_get_DefaultMessage_m8DD8FE49C373C30AC982460ADC25D68B6EE76FF0 (ComponentAttribute_t5C7655B73B1A3DD0D2B6B838A0DE1E734AC6D853* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02C75CE360C4176D26C274C3DDCC7CC4E566BB66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral032C85EC6693079572984FFDB9D5CA69845985E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "GameObject must contains " + type.Name + " component!"; }
		Type_t* L_0 = __this->___type_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral02C75CE360C4176D26C274C3DDCC7CC4E566BB66, L_1, _stringLiteral032C85EC6693079572984FFDB9D5CA69845985E7, NULL);
		return L_2;
	}
}
// System.Type ParkInc.ComponentAttribute::get_RequiredType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ComponentAttribute_get_RequiredType_m39A69BE5EA5DEE29400AE3BB91B707CAF50382D7 (ComponentAttribute_t5C7655B73B1A3DD0D2B6B838A0DE1E734AC6D853* __this, const RuntimeMethod* method) 
{
	{
		// return this.type;
		Type_t* L_0 = __this->___type_0;
		return L_0;
	}
}
// ParkInc.ValidatorAttribute/ValidateResult ParkInc.ComponentAttribute::Validate(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* ComponentAttribute_Validate_m6246D04565C489F1A6493E730016B861FCEEDDBF (ComponentAttribute_t5C7655B73B1A3DD0D2B6B838A0DE1E734AC6D853* __this, RuntimeObject* ___0_value, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ValidateResult(ValidateType.Error, "Value can't be null!");
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_0 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_0, 4, _stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E, NULL);
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
// System.Void ParkInc.GameObjectTagAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectTagAttribute__ctor_m090154A309EDDCD42B6D36144198CAEB1714AC01 (GameObjectTagAttribute_t185A2832CAA41A02DC832A47E4C6540A502EA5DD* __this, String_t* ___0_tag, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// public GameObjectTagAttribute(string tag, string message = null)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.tag = tag;
		String_t* L_0 = ___0_tag;
		__this->___tag_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tag_0), (void*)L_0);
		// this.message = message;
		String_t* L_1 = ___1_message;
		__this->___message_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_1), (void*)L_1);
		// }
		return;
	}
}
// System.String ParkInc.GameObjectTagAttribute::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObjectTagAttribute_get_Message_mC68FF2BEE38F6E37121A798E58F84FA399FDDA37 (GameObjectTagAttribute_t185A2832CAA41A02DC832A47E4C6540A502EA5DD* __this, const RuntimeMethod* method) 
{
	{
		// return this.message;
		String_t* L_0 = __this->___message_1;
		return L_0;
	}
}
// System.String ParkInc.GameObjectTagAttribute::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObjectTagAttribute_get_Tag_mDFD2F5C312366A4C7AD46AC6B5F35896C6E8DF11 (GameObjectTagAttribute_t185A2832CAA41A02DC832A47E4C6540A502EA5DD* __this, const RuntimeMethod* method) 
{
	{
		// get { return tag; }
		String_t* L_0 = __this->___tag_0;
		return L_0;
	}
}
// System.String ParkInc.GameObjectTagAttribute::get_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObjectTagAttribute_get_DefaultMessage_m031EB747C2D54DB9D41E585CF66989641CD60412 (GameObjectTagAttribute_t185A2832CAA41A02DC832A47E4C6540A502EA5DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD16E9E8993E97FC0E6AD2A057F7C60A7A76E26F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "GameObject's tag must be " + tag + "!"; }
		String_t* L_0 = __this->___tag_0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFD16E9E8993E97FC0E6AD2A057F7C60A7A76E26F, L_0, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		return L_1;
	}
}
// ParkInc.ValidatorAttribute/ValidateResult ParkInc.GameObjectTagAttribute::Validate(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* GameObjectTagAttribute_Validate_mEA173C8272AB051F326284808CAD36B811E84E2E (GameObjectTagAttribute_t185A2832CAA41A02DC832A47E4C6540A502EA5DD* __this, RuntimeObject* ___0_value, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ValidateResult(ValidateType.Error, "Value can't be null!");
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_0 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_0, 4, _stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E, NULL);
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
// System.Void ParkInc.MaxValueAttribute::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxValueAttribute__ctor_m66B6F5CB7744D8ED26DEBBD3B0A92FD733536900 (MaxValueAttribute_t35AD945E9505B311B466F6A02B4154972FF2AF7B* __this, float ___0_maxValue, const RuntimeMethod* method) 
{
	{
		// public MaxValueAttribute(float maxValue)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.maxValue = maxValue;
		float L_0 = ___0_maxValue;
		__this->___maxValue_0 = L_0;
		// }
		return;
	}
}
// System.Void ParkInc.MaxValueAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxValueAttribute__ctor_mFA3620703DA9165E07057CC504418B39894DDDBB (MaxValueAttribute_t35AD945E9505B311B466F6A02B4154972FF2AF7B* __this, int32_t ___0_maxValue, const RuntimeMethod* method) 
{
	{
		// public MaxValueAttribute(int maxValue)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.maxValue = maxValue;
		int32_t L_0 = ___0_maxValue;
		__this->___maxValue_0 = ((float)L_0);
		// }
		return;
	}
}
// System.String ParkInc.MaxValueAttribute::get_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MaxValueAttribute_get_DefaultMessage_mDAEEFB1B448EC8268E9F996D7BF3A89CF97F54F7 (MaxValueAttribute_t35AD945E9505B311B466F6A02B4154972FF2AF7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68BEAB68A19AC8B400B53DC38BC5AF6BABF1B0A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Value must be less than " + maxValue + "!"; }
		float* L_0 = (&__this->___maxValue_0);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral68BEAB68A19AC8B400B53DC38BC5AF6BABF1B0A1, L_1, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		return L_2;
	}
}
// System.Single ParkInc.MaxValueAttribute::get_MaxValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaxValueAttribute_get_MaxValue_m8E322F2B47F1FFFAF92791B46569BA185ACA447B (MaxValueAttribute_t35AD945E9505B311B466F6A02B4154972FF2AF7B* __this, const RuntimeMethod* method) 
{
	{
		// return this.maxValue;
		float L_0 = __this->___maxValue_0;
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
// System.String ParkInc.MinValueAttribute::get_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MinValueAttribute_get_DefaultMessage_m14A32AB01EF96CE215496E46C29A52122CFD4A66 (MinValueAttribute_t1CF8236BD11E3DFF120BFC471048C3A5ED7224FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68C986B16252159FB40AB5B1BA78ED4D3764D33A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Value must be greater than " + minValue + "!"; }
		float* L_0 = (&__this->___minValue_0);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral68C986B16252159FB40AB5B1BA78ED4D3764D33A, L_1, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		return L_2;
	}
}
// System.Void ParkInc.MinValueAttribute::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinValueAttribute__ctor_m6D3735A169AAC24C776E0E0772B74A8BF8EB1FE4 (MinValueAttribute_t1CF8236BD11E3DFF120BFC471048C3A5ED7224FD* __this, float ___0_minValue, const RuntimeMethod* method) 
{
	{
		// public MinValueAttribute(float minValue)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.minValue = minValue;
		float L_0 = ___0_minValue;
		__this->___minValue_0 = L_0;
		// }
		return;
	}
}
// System.Void ParkInc.MinValueAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinValueAttribute__ctor_m51BA22E3E25356ECFB0348EAE116421DA6008A6F (MinValueAttribute_t1CF8236BD11E3DFF120BFC471048C3A5ED7224FD* __this, int32_t ___0_minValue, const RuntimeMethod* method) 
{
	{
		// public MinValueAttribute(int minValue)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.minValue = minValue;
		int32_t L_0 = ___0_minValue;
		__this->___minValue_0 = ((float)L_0);
		// }
		return;
	}
}
// System.Single ParkInc.MinValueAttribute::get_MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinValueAttribute_get_MinValue_mAEE8B7D3CC7A2259738F5BED03604D500198079D (MinValueAttribute_t1CF8236BD11E3DFF120BFC471048C3A5ED7224FD* __this, const RuntimeMethod* method) 
{
	{
		// return this.minValue;
		float L_0 = __this->___minValue_0;
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
// System.Void ParkInc.PrefabAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefabAttribute__ctor_mFD7D2844F2ADFFB8B338CC8A5FFD1AA17D56A96B (PrefabAttribute_tF9C162E8D4512E0538509796403A6428EDA9C245* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public PrefabAttribute(string message = null)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.message = message;
		String_t* L_0 = ___0_message;
		__this->___message_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_0), (void*)L_0);
		// }
		return;
	}
}
// System.String ParkInc.PrefabAttribute::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrefabAttribute_get_Message_mF9A65940BDB2A1AAC122EEB5107F8C5515F6AEB7 (PrefabAttribute_tF9C162E8D4512E0538509796403A6428EDA9C245* __this, const RuntimeMethod* method) 
{
	{
		// return this.message;
		String_t* L_0 = __this->___message_0;
		return L_0;
	}
}
// System.String ParkInc.PrefabAttribute::get_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrefabAttribute_get_DefaultMessage_mD5FF2F1E15BAB7874A45A077AB9FE7C4B0DDA6EB (PrefabAttribute_tF9C162E8D4512E0538509796403A6428EDA9C245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93051D2B3AB89CCDF3670A4363191CF372DD6918);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "GameObject must be a prefab!"; }
		return _stringLiteral93051D2B3AB89CCDF3670A4363191CF372DD6918;
	}
}
// ParkInc.ValidatorAttribute/ValidateResult ParkInc.PrefabAttribute::Validate(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* PrefabAttribute_Validate_m8623B23AA9C4BD6DF37A7303410268E1F0710306 (PrefabAttribute_tF9C162E8D4512E0538509796403A6428EDA9C245* __this, RuntimeObject* ___0_value, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ValidateResult(ValidateType.Error, "Value can't be null!");
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_0 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_0, 4, _stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E, NULL);
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
// System.Void ParkInc.RequiredAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredAttribute__ctor_m2D3701E9A5207E3527ED4E25C7B9AD750DE3809E (RequiredAttribute_tB0CB5CBB1E2FFCFAC64FA60BFAAB564E38B3CB02* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public RequiredAttribute(string message = null)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.message = message;
		String_t* L_0 = ___0_message;
		__this->___message_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_0), (void*)L_0);
		// }
		return;
	}
}
// System.String ParkInc.RequiredAttribute::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequiredAttribute_get_Message_m829C4A4B8EC4FB41B43D190DF48C68771B5F4BAD (RequiredAttribute_tB0CB5CBB1E2FFCFAC64FA60BFAAB564E38B3CB02* __this, const RuntimeMethod* method) 
{
	{
		// return this.message;
		String_t* L_0 = __this->___message_0;
		return L_0;
	}
}
// System.String ParkInc.RequiredAttribute::get_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RequiredAttribute_get_DefaultMessage_mBE46E5E2AA51636C7FA440FFA1D7A5375F10C87B (RequiredAttribute_tB0CB5CBB1E2FFCFAC64FA60BFAAB564E38B3CB02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Value can't be null!"; }
		return _stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E;
	}
}
// ParkInc.ValidatorAttribute/ValidateResult ParkInc.RequiredAttribute::Validate(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* RequiredAttribute_Validate_mB3FCE6BF9A704F07715BA242CC14FF2C94270825 (RequiredAttribute_tB0CB5CBB1E2FFCFAC64FA60BFAAB564E38B3CB02* __this, RuntimeObject* ___0_value, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD273A80A6C2271CA3BB8A672E235CE8EA0927F8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null && !value.Equals(null))
		RuntimeObject* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_1, NULL);
		if (L_2)
		{
			goto IL_0063;
		}
	}
	{
		// Type targetType = value.GetType();
		RuntimeObject* L_3 = ___0_value;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		// if (targetType == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// if (string.IsNullOrEmpty((string)value))
		RuntimeObject* L_8 = ___0_value;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// if (!string.IsNullOrEmpty(message))
		String_t* L_10 = __this->___message_0;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		// return new ValidateResult(ValidateType.Error, message);
		String_t* L_12 = __this->___message_0;
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_13 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_13, 4, L_12, NULL);
		return L_13;
	}

IL_004a:
	{
		// return new ValidateResult(ValidateType.Error, "Value can't be empty!");
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_14 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_14, 4, _stringLiteralD273A80A6C2271CA3BB8A672E235CE8EA0927F8B, NULL);
		return L_14;
	}

IL_0056:
	{
		// return new ValidateResult(ValidateType.Success, DefaultMessage);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String ParkInc.ValidatorAttribute::get_DefaultMessage() */, __this);
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_16 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_16, 1, L_15, NULL);
		return L_16;
	}

IL_0063:
	{
		// if (!string.IsNullOrEmpty(message))
		String_t* L_17 = __this->___message_0;
		bool L_18;
		L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
		if (L_18)
		{
			goto IL_007d;
		}
	}
	{
		// return new ValidateResult(ValidateType.Error, message);
		String_t* L_19 = __this->___message_0;
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_20 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_20, 4, L_19, NULL);
		return L_20;
	}

IL_007d:
	{
		// return new ValidateResult(ValidateType.Error, "Value can't be null!");
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_21 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_21, 4, _stringLiteral7C017D533CC86CAB97355207574D979A1CC9172E, NULL);
		return L_21;
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
// System.Void ParkInc.ValidateInputAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateInputAttribute__ctor_m8DCCFFE37B27503839318FB23AD2DC53F29A704D (ValidateInputAttribute_t04B1A1C5F84105B5E90F5EF0ACA02BC4621E57F4* __this, String_t* ___0_callbackName, const RuntimeMethod* method) 
{
	{
		// public ValidateInputAttribute(string callbackName)
		ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F(__this, NULL);
		// this.callbackName = callbackName;
		String_t* L_0 = ___0_callbackName;
		__this->___callbackName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackName_0), (void*)L_0);
		// }
		return;
	}
}
// System.String ParkInc.ValidateInputAttribute::get_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidateInputAttribute_get_DefaultMessage_m159235ED5C6BB440D0CEBA0D683BC4AE5771C0A6 (ValidateInputAttribute_t04B1A1C5F84105B5E90F5EF0ACA02BC4621E57F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35A9D3A4BD14A6BAB9DCD07EC651BD1727F42473);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Custom validate function"; }
		return _stringLiteral35A9D3A4BD14A6BAB9DCD07EC651BD1727F42473;
	}
}
// System.String ParkInc.ValidateInputAttribute::get_CallbackName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidateInputAttribute_get_CallbackName_m6A025BA887FC852428F427CAA5224AF6309FDC6F (ValidateInputAttribute_t04B1A1C5F84105B5E90F5EF0ACA02BC4621E57F4* __this, const RuntimeMethod* method) 
{
	{
		// return this.callbackName;
		String_t* L_0 = __this->___callbackName_0;
		return L_0;
	}
}
// ParkInc.ValidatorAttribute/ValidateResult ParkInc.ValidateInputAttribute::Validate(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* ValidateInputAttribute_Validate_m10DADDA9FA352D50590698A215F1AEA2198DA1FD (ValidateInputAttribute_t04B1A1C5F84105B5E90F5EF0ACA02BC4621E57F4* __this, RuntimeObject* ___0_value, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A14B4C5055315D498BAFCF05A2573B8D1CB3817);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* V_1 = NULL;
	{
		// MethodInfo validationCallback = target.GetType().GetMethod(CallbackName, BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.Public);
		RuntimeObject* L_0 = ___1_target;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		String_t* L_2;
		L_2 = ValidateInputAttribute_get_CallbackName_m6A025BA887FC852428F427CAA5224AF6309FDC6F_inline(__this, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_1, L_2, ((int32_t)52), NULL);
		V_0 = L_3;
		// if (validationCallback != null && validationCallback.ReturnType == typeof(ValidateResult) && validationCallback.GetParameters().Length == 1)
		MethodInfo_t* L_4 = V_0;
		bool L_5;
		L_5 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_4, (MethodInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		MethodInfo_t* L_6 = V_0;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		MethodInfo_t* L_11 = V_0;
		NullCheck(L_11);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12;
		L_12 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_11);
		NullCheck(L_12);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) == ((uint32_t)1))))
		{
			goto IL_005b;
		}
	}
	{
		// ValidateResult message = (ValidateResult)validationCallback.Invoke(target, new object[] { value });
		MethodInfo_t* L_13 = V_0;
		RuntimeObject* L_14 = ___1_target;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		RuntimeObject* L_17 = ___0_value;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		NullCheck(L_13);
		RuntimeObject* L_18;
		L_18 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_13, L_14, L_16, NULL);
		V_1 = ((ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)CastclassClass((RuntimeObject*)L_18, ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var));
		// if (message != null)
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_19 = V_1;
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		// return message;
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_20 = V_1;
		return L_20;
	}

IL_005b:
	{
		// return new ValidateResult(ValidateType.Warning, GetType().Name + " needs a callback with boolean return type and a single parameter of the same type as the field");
		Type_t* L_21;
		L_21 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, _stringLiteral1A14B4C5055315D498BAFCF05A2573B8D1CB3817, NULL);
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_24 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_24, 2, L_23, NULL);
		return L_24;
	}

IL_0077:
	{
		// return new ValidateResult(ValidateType.Success, DefaultMessage);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String ParkInc.ValidatorAttribute::get_DefaultMessage() */, __this);
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_26 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_26, 1, L_25, NULL);
		return L_26;
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
// ParkInc.ValidatorAttribute/ValidateResult ParkInc.ValidatorAttribute::Validate(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* ValidatorAttribute_Validate_m83DA97D234624A55C66A60F1BA1B5BECADF4623E (ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2* __this, RuntimeObject* ___0_value, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ValidateResult(ValidateType.Success, DefaultMessage);
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String ParkInc.ValidatorAttribute::get_DefaultMessage() */, __this);
		ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* L_1 = (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6*)il2cpp_codegen_object_new(ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2(L_1, 1, L_0, NULL);
		return L_1;
	}
}
// System.Void ParkInc.ValidatorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidatorAttribute__ctor_m45E4EDC39E440389B9215ECD4D7E5EE476CB080F (ValidatorAttribute_tBDEAF5C19FA56C7C9EA9FED6E4C046ECA8630BB2* __this, const RuntimeMethod* method) 
{
	{
		ExtendedEditorAttribute__ctor_m169EB33C905347CF11127A875EE63CDC8C3F4B36(__this, NULL);
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
// ParkInc.ValidatorAttribute/ValidateType ParkInc.ValidatorAttribute/ValidateResult::get_ValidateType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateResult_get_ValidateType_mE1AA56547178AA9436D52B3D819844146D555577 (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* __this, const RuntimeMethod* method) 
{
	{
		// get { return validateType; }
		int32_t L_0 = __this->___validateType_0;
		return L_0;
	}
}
// System.String ParkInc.ValidatorAttribute/ValidateResult::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidateResult_get_Message_m83835E354A7B0C4E2614F2CE7863AAD7620256D8 (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* __this, const RuntimeMethod* method) 
{
	{
		// get { return message; }
		String_t* L_0 = __this->___message_1;
		return L_0;
	}
}
// System.Void ParkInc.ValidatorAttribute/ValidateResult::.ctor(ParkInc.ValidatorAttribute/ValidateType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateResult__ctor_m05C37FD3F10528A55F6D971B3D5CC2DF17707CD2 (ValidateResult_t565A4F46DC17E65827E5D0FBAB577A5DC27148E6* __this, int32_t ___0_validateType, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// public ValidateResult(ValidateType validateType, string message)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.validateType = validateType;
		int32_t L_0 = ___0_validateType;
		__this->___validateType_0 = L_0;
		// this.message = message;
		String_t* L_1 = ___1_message;
		__this->___message_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_1), (void*)L_1);
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
// System.Void ParkInc.ConstArrayAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstArrayAttribute__ctor_m4C1D198765DDAD472CA4E36DF1778518952EB710 (ConstArrayAttribute_t568248F11E1BC52A9B4AFD7AEEBEFE3AFC6F475F* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_labelValues, const RuntimeMethod* method) 
{
	{
		// public ConstArrayAttribute(params string[] labelValues)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.labelValues = labelValues;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_labelValues;
		__this->___labelValues_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___labelValues_0), (void*)L_0);
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
// System.Void ParkInc.DisableFieldAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableFieldAttribute__ctor_m3BBC63F26611A666B8B30DB98C3FEECA6EF15CC7 (DisableFieldAttribute_t0321AFC58EED1F5B89E5A5AD049010E9D908E8BE* __this, const RuntimeMethod* method) 
{
	{
		// public DisableFieldAttribute()
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void ParkInc.DrawReferenceAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawReferenceAttribute__ctor_mF7B199C99661FCA5F8B71152518C91A0FC793BE4 (DrawReferenceAttribute_tF78BE3B6D155D8EF93B55C12C6A8450C25758B76* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void ParkInc.EnumArrayAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumArrayAttribute__ctor_m70A1B0678397D13963C9AA3E28FCB07EC2D7FA1D (EnumArrayAttribute_t1EBCB87EB0168300A8963B2E29006BBCC362BBC5* __this, Type_t* ___0_selectedEnum, const RuntimeMethod* method) 
{
	{
		// public EnumArrayAttribute(Type selectedEnum)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.selectedEnum = selectedEnum;
		Type_t* L_0 = ___0_selectedEnum;
		__this->___selectedEnum_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedEnum_0), (void*)L_0);
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
// System.Void ParkInc.EnumFlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumFlagsAttribute__ctor_mCF0EAFF95A6147C179C2BF669AFDBE54CA42ACB3 (EnumFlagsAttribute_t63363A9BD575278FF95E4EFAD6EDB6A8249A1489* __this, const RuntimeMethod* method) 
{
	{
		// public EnumFlagsAttribute()
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void ParkInc.ErrorAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorAttribute__ctor_mA5B53004D59DCF213D1EA80D3CD730ED6AF2F26A (ErrorAttribute_t098D18A4F7A1B21129C95DEF308EA8702C67BEEE* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	{
		// public ErrorAttribute(string title) : base(title)
		String_t* L_0 = ___0_title;
		HelpBoxAttribute__ctor_m01C1293C4FCECA01C7258EDDA430AF66775A5CD7(__this, L_0, NULL);
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
// System.Void ParkInc.HelpBoxAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpBoxAttribute__ctor_m01C1293C4FCECA01C7258EDDA430AF66775A5CD7 (HelpBoxAttribute_t6C50379C95472EE6EDBF51C1A13F9D9CB3B6F4BB* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public HelpBoxAttribute(string message)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.message = message;
		String_t* L_0 = ___0_message;
		__this->___message_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_0), (void*)L_0);
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
// System.Void ParkInc.InfoAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoAttribute__ctor_m1658653E32E91DB415D60A2A8CDE32F8443AF62E (InfoAttribute_t12E59A9230F947962E8B24D439A575BE6AC9180B* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	{
		// public InfoAttribute(string title) : base(title)
		String_t* L_0 = ___0_title;
		HelpBoxAttribute__ctor_m01C1293C4FCECA01C7258EDDA430AF66775A5CD7(__this, L_0, NULL);
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
// System.Void ParkInc.LineSpacerAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineSpacerAttribute__ctor_m705108DD3755BB46B85C50E86628508835FF92F4 (LineSpacerAttribute_t49F131D316D78F856DB584424FBC02A679C6CE83* __this, String_t* ___0_title, int32_t ___1_height, const RuntimeMethod* method) 
{
	{
		// public LineSpacerAttribute(string title, int height = 18)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.title = title;
		String_t* L_0 = ___0_title;
		__this->___title_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_0), (void*)L_0);
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
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
// System.Object[] ParkInc.PopupAttribute::get_arrayParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* PopupAttribute_get_arrayParams_mFFA2326A006ECF62784428BC87B5DF5737B190F1 (PopupAttribute_tFAA3EBB40D07B5CE8E425349C5F4C55278EC77C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_ArrayParams; }
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_ArrayParams_0;
		return L_0;
	}
}
// System.Void ParkInc.PopupAttribute::.ctor(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupAttribute__ctor_m8C3C275BB9669A92248F6C65F9A9EFC639C86B30 (PopupAttribute_tFAA3EBB40D07B5CE8E425349C5F4C55278EC77C9* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_arrayParams, const RuntimeMethod* method) 
{
	{
		// public PopupAttribute(params object[] arrayParams)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// m_ArrayParams = arrayParams;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_arrayParams;
		__this->___m_ArrayParams_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ArrayParams_0), (void*)L_0);
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
// System.String ParkInc.ResourcesFileAttribute::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourcesFileAttribute_get_path_mD997ADD102BE36D03241039C1D82D9A5441D8FD3 (ResourcesFileAttribute_t3A959A69C0F15D4038494D6C5E943DA810BCA4D3* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Path; }
		String_t* L_0 = __this->___m_Path_0;
		return L_0;
	}
}
// System.Type ParkInc.ResourcesFileAttribute::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ResourcesFileAttribute_get_type_m80A0E337042417B9C3A43CF493B0906ADED84953 (ResourcesFileAttribute_t3A959A69C0F15D4038494D6C5E943DA810BCA4D3* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Type; }
		Type_t* L_0 = __this->___m_Type_1;
		return L_0;
	}
}
// System.Void ParkInc.ResourcesFileAttribute::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesFileAttribute__ctor_m82518E2275FAED238A663BB4145C3886FC7DD487 (ResourcesFileAttribute_t3A959A69C0F15D4038494D6C5E943DA810BCA4D3* __this, String_t* ___0_folderPath, Type_t* ___1_type, const RuntimeMethod* method) 
{
	{
		// public ResourcesFileAttribute(string folderPath, Type type)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// m_Path = folderPath;
		String_t* L_0 = ___0_folderPath;
		__this->___m_Path_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Path_0), (void*)L_0);
		// m_Type = type;
		Type_t* L_1 = ___1_type;
		__this->___m_Type_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Type_1), (void*)L_1);
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
// System.Void ParkInc.ScenesAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScenesAttribute__ctor_mB61EA194E20874D8FBD15E44EE8B8345CE856D18 (ScenesAttribute_t9F41121B7E1970EDAD9A825F8F16C1EBA021E9A0* __this, const RuntimeMethod* method) 
{
	{
		// public ScenesAttribute()
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void ParkInc.SmartArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartArrayAttribute__ctor_m52859FF46E5D0FD8FABE3B82A42960125E2EBAD1 (SmartArrayAttribute_tE17A8538CE2DA516F7CE99B45B78584585D07868* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void ParkInc.WarningAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningAttribute__ctor_m226434F8E73252004049AEBA315D338E4B442C36 (WarningAttribute_t6DAA0BE86B26DF8B9E5F91C647442DAB9621160C* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	{
		// public WarningAttribute(string title) : base(title)
		String_t* L_0 = ___0_title;
		HelpBoxAttribute__ctor_m01C1293C4FCECA01C7258EDDA430AF66775A5CD7(__this, L_0, NULL);
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
// System.Void ParkInc.RagdollHelper::CreateRagdoll(UnityEngine.Animator,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RagdollHelper_CreateRagdoll_mDC71DB84D28D778681F7470139A88DCAD8632768 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, float ___1_totalMass, float ___2_strength, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ParkInc.RagdollHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RagdollHelper__ctor_mA297395372F9CB3929F21BBA9AA1980F3EE3CDF8 (RagdollHelper_t51108D971D18C0BB71FAB5E27F7945786C5F1D40* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ParkInc.DummyStorePreview3D::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyStorePreview3D_Init_m53971E071D6C432A8934BF2AC652BAE43FE88B58 (DummyStorePreview3D_tE98987F452EBC084F0814134A365D4392B784E12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Texture = new RenderTexture(1, 1, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_0, 1, 1, 0, NULL);
		StorePreview3D_set_Texture_m6B87055CA8019F1298EF76BF210CD2D844766C0D_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.DummyStorePreview3D::SpawnPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyStorePreview3D_SpawnPrefab_mEE078B917346E2407222B636CDC2AA62FE4457AE (DummyStorePreview3D_tE98987F452EBC084F0814134A365D4392B784E12* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ParkInc.DummyStorePreview3D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyStorePreview3D__ctor_mEABF44BB679C616CADE00017B8AFAD893D7F6294 (DummyStorePreview3D_tE98987F452EBC084F0814134A365D4392B784E12* __this, const RuntimeMethod* method) 
{
	{
		StorePreview3D__ctor_m789B3E73496E1A63B9B5DACE8F918F79DC3C7F76(__this, NULL);
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
// System.String ParkInc.ProductData::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProductData_get_UniqueId_m85902C986CFB27C86ED418E68F160FDB5FB5AA38 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId => uniqueId;
		String_t* L_0 = __this->___uniqueId_0;
		return L_0;
	}
}
// System.Int32 ParkInc.ProductData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProductData_get_Id_m33F183545B442CD57900EBFE2B15B384E00CD117 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public int Id => id;
		int32_t L_0 = __this->___id_2;
		return L_0;
	}
}
// System.Int32 ParkInc.ProductData::get_TabId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProductData_get_TabId_m446AFCD33D0779EAB1DDDE2A8A4D5232BE8C3C46 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public int TabId => tabId;
		int32_t L_0 = __this->___tabId_3;
		return L_0;
	}
}
// System.Boolean ParkInc.ProductData::get_IsDummy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductData_get_IsDummy_mA388F5BCA180FCD734DC1C5A62A8DF8C9DED501B (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDummy => isDummy;
		bool L_0 = __this->___isDummy_4;
		return L_0;
	}
}
// System.String ParkInc.ProductData::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProductData_get_Name_m3E6023FD02A7751F4A47CA3D268267F27C393AF5 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => name;
		String_t* L_0 = __this->___name_5;
		return L_0;
	}
}
// UnityEngine.Sprite ParkInc.ProductData::get_OpenedSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ProductData_get_OpenedSprite_mC12D38596654ADAA11A3CB4D9B84687D1ABD6A81 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite OpenedSprite => openedSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___openedSprite_6;
		return L_0;
	}
}
// UnityEngine.Sprite ParkInc.ProductData::get_LockedSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ProductData_get_LockedSprite_mC3810FADB36987D7408AFBE1DF8A39B617F7947B (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite LockedSprite => lockedSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___lockedSprite_7;
		return L_0;
	}
}
// UnityEngine.Sprite ParkInc.ProductData::get_Preview2DSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ProductData_get_Preview2DSprite_mD7192F72FE13BB5FD79BE53F046B548762DD93DA (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Sprite Preview2DSprite => preview2DSprite == null ? openedSprite : preview2DSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___preview2DSprite_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___preview2DSprite_8;
		return L_2;
	}

IL_0015:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___openedSprite_6;
		return L_3;
	}
}
// UnityEngine.GameObject ParkInc.ProductData::get_Prefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProductData_get_Prefab_m28BEAC9E1B87BE48D23FCA84FF1F3B603C45C0DF (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Prefab => prefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___prefab_9;
		return L_0;
	}
}
// UnityEngine.GameObject ParkInc.ProductData::get_PreviewPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProductData_get_PreviewPrefab_mE03324909B6F593C09E916766173B76FBE11592B (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObject PreviewPrefab => previewPrefab == null ? prefab : previewPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___previewPrefab_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___previewPrefab_10;
		return L_2;
	}

IL_0015:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___prefab_9;
		return L_3;
	}
}
// ParkInc.ProductData/PurchaseType ParkInc.ProductData::get_PurchType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProductData_get_PurchType_mB7CD04164350C7C324F8F79F60394C6066F68043 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public PurchaseType PurchType => purchaseType;
		int32_t L_0 = __this->___purchaseType_11;
		return L_0;
	}
}
// ParkInc.Currency/Type ParkInc.ProductData::get_Currency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProductData_get_Currency_m148CA4D6284AABC3B4CF39C3642111564BCEB8EB (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public Currency.Type Currency => currency;
		int32_t L_0 = __this->___currency_12;
		return L_0;
	}
}
// System.Int32 ParkInc.ProductData::get_Cost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProductData_get_Cost_m818AD35CB7554245B5C40D400CA046043F5095D6 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public int Cost => cost;
		int32_t L_0 = __this->___cost_13;
		return L_0;
	}
}
// System.Boolean ParkInc.ProductData::get_IsUnlocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductData_get_IsUnlocked_mDED00CE476C343C58E1675C29A0184B47E233515 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// get => save.isUnlocked;
		StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* L_0 = __this->___save_14;
		NullCheck(L_0);
		bool L_1 = L_0->___isUnlocked_0;
		return L_1;
	}
}
// System.Void ParkInc.ProductData::set_IsUnlocked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductData_set_IsUnlocked_mE1C613BE0692A5591AF13461DB88D57C03AB6B34 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => save.isUnlocked = value;
		StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* L_0 = __this->___save_14;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___isUnlocked_0 = L_1;
		return;
	}
}
// System.Int32 ParkInc.ProductData::get_RewardedVideoWatchedAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProductData_get_RewardedVideoWatchedAmount_mBCE37FD49A76BFA61D3888C37CEEF3923849FF56 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// get => save.rewardedVideoWatchedAmount;
		StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* L_0 = __this->___save_14;
		NullCheck(L_0);
		int32_t L_1 = L_0->___rewardedVideoWatchedAmount_1;
		return L_1;
	}
}
// System.Void ParkInc.ProductData::set_RewardedVideoWatchedAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductData_set_RewardedVideoWatchedAmount_m33F271A6C51B747563130B7D29B8F98B2F998F25 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => save.rewardedVideoWatchedAmount = value;
		StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* L_0 = __this->___save_14;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___rewardedVideoWatchedAmount_1 = L_1;
		return;
	}
}
// System.Void ParkInc.ProductData::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductData_Init_m8E3CFDE190BDED27233D4F9E1642834D9E7C6892 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveController_GetSaveObject_TisStoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625_m0E0D2CC6CFBA5A3D01BDEA81B8125AB2ABE1641B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA342AC5A2217515B23003A73E2AE1358C513AD95);
		s_Il2CppMethodInitialized = true;
	}
	{
		// save = SaveController.GetSaveObject<StoreItemSave>("Store Product:" + uniqueId);
		String_t* L_0 = __this->___uniqueId_0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA342AC5A2217515B23003A73E2AE1358C513AD95, L_0, NULL);
		StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* L_2;
		L_2 = SaveController_GetSaveObject_TisStoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625_m0E0D2CC6CFBA5A3D01BDEA81B8125AB2ABE1641B(L_1, SaveController_GetSaveObject_TisStoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625_m0E0D2CC6CFBA5A3D01BDEA81B8125AB2ABE1641B_RuntimeMethod_var);
		__this->___save_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___save_14), (void*)L_2);
		// if(RewardedVideoWatchedAmount >= cost)
		int32_t L_3;
		L_3 = ProductData_get_RewardedVideoWatchedAmount_mBCE37FD49A76BFA61D3888C37CEEF3923849FF56(__this, NULL);
		int32_t L_4 = __this->___cost_13;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		// save.isUnlocked = true;
		StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* L_5 = __this->___save_14;
		NullCheck(L_5);
		L_5->___isUnlocked_0 = (bool)1;
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void ParkInc.ProductData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductData__ctor_mE3BAA35AA78037A957D090A62E63807CE42000B2 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int cost = 1;
		__this->___cost_13 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ParkInc.ProductData/StoreItemSave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreItemSave__ctor_m417F71DC83B35A7E722789F4B1E70C4A91F346BA (StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* __this, const RuntimeMethod* method) 
{
	{
		// public StoreItemSave()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// isUnlocked = false;
		__this->___isUnlocked_0 = (bool)0;
		// rewardedVideoWatchedAmount = 0;
		__this->___rewardedVideoWatchedAmount_1 = 0;
		// }
		return;
	}
}
// System.Void ParkInc.ProductData/StoreItemSave::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreItemSave_Flush_m5F043EB36950D4825BA5F717A3874D4492EDEEA5 (StoreItemSave_t51B256D8380AEA12DAF48AAF78278DEB0F357625* __this, const RuntimeMethod* method) 
{
	{
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
// ParkInc.StoreDatabase ParkInc.StoreController::get_Database()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static StoreDatabase Database => instance.database;
		StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_1 = L_0->___database_5;
		return L_1;
	}
}
// System.Int32 ParkInc.StoreController::get_TabsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StoreController_get_TabsCount_m319D956195E53812224BC134D78B17D65CBBDF5C (const RuntimeMethod* method) 
{
	{
		// public static int TabsCount => Database.Tabs.Length;
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_0;
		L_0 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_0);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_1;
		L_1 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_0, NULL);
		NullCheck(L_1);
		return ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}
}
// System.Int32 ParkInc.StoreController::get_CoinsForAdsAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StoreController_get_CoinsForAdsAmount_mE8AA3E7E80CAA6019F7BE2D58980B1CF1CE8E8EB (const RuntimeMethod* method) 
{
	{
		// public static int CoinsForAdsAmount => Database.CoinsForAds;
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_0;
		L_0 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StoreDatabase_get_CoinsForAds_mDD99B1CD833C5EC75D3BEEAE58C6679B4440BC5B_inline(L_0, NULL);
		return L_1;
	}
}
// ParkInc.TabData ParkInc.StoreController::get_SelectedTabData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* StoreController_get_SelectedTabData_m27D7588AB29FDF8DB4D25971B1B1AC43FF63E4CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TabData SelectedTabData { get; private set; }
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___U3CSelectedTabDataU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void ParkInc.StoreController::set_SelectedTabData(ParkInc.TabData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_set_SelectedTabData_m0612E23CB2F72912E29302E38A8811D116AB9B07 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TabData SelectedTabData { get; private set; }
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_0 = ___0_value;
		((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___U3CSelectedTabDataU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___U3CSelectedTabDataU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void ParkInc.StoreController::add_OnProductSelected(ParkInc.StoreController/ProductDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_add_OnProductSelected_m8F6F13E34EBD0666EEF802F97A8DC22DEF0534A0 (ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* V_0 = NULL;
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* V_1 = NULL;
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* V_2 = NULL;
	{
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___OnProductSelected_9;
		V_0 = L_0;
	}

IL_0006:
	{
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_1 = V_0;
		V_1 = L_1;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_2 = V_1;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*)CastclassSealed((RuntimeObject*)L_4, ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7_il2cpp_TypeInfo_var));
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_5 = V_2;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_6 = V_1;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_7;
		L_7 = InterlockedCompareExchangeImpl<ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*>((&((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___OnProductSelected_9), L_5, L_6);
		V_0 = L_7;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_8 = V_0;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_9 = V_1;
		if ((!(((RuntimeObject*)(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*)L_8) == ((RuntimeObject*)(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ParkInc.StoreController::remove_OnProductSelected(ParkInc.StoreController/ProductDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_remove_OnProductSelected_m8D828ABEB6DC201C1F2D3379EBAC017658075E75 (ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* V_0 = NULL;
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* V_1 = NULL;
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* V_2 = NULL;
	{
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___OnProductSelected_9;
		V_0 = L_0;
	}

IL_0006:
	{
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_1 = V_0;
		V_1 = L_1;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_2 = V_1;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*)CastclassSealed((RuntimeObject*)L_4, ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7_il2cpp_TypeInfo_var));
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_5 = V_2;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_6 = V_1;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_7;
		L_7 = InterlockedCompareExchangeImpl<ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*>((&((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___OnProductSelected_9), L_5, L_6);
		V_0 = L_7;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_8 = V_0;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_9 = V_1;
		if ((!(((RuntimeObject*)(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*)L_8) == ((RuntimeObject*)(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ParkInc.StoreController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_Awake_mC9E67CE0380F054C12AD12FE64BDF28485792A6D (StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ParkInc.StoreController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_Init_mB097AA7A3C85BE0388957A59DDF342AD6A0E485C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// products = Database.Init();
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_0;
		L_0 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_0);
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_1;
		L_1 = StoreDatabase_Init_mFA35CE5D40501E39C7250237EF816D2C35CF8C7F(L_0, NULL);
		((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6), (void*)L_1);
		// InitDefaultProducts();
		StoreController_InitDefaultProducts_mBD06017A7F7BC856F569A5F0E0F0FF02E30CD421(NULL);
		// InitSelectedProducts();
		StoreController_InitSelectedProducts_mFCF876DA8374B0A1BD2E08AA1B540EBCE6F88507(NULL);
		// SelectedTabData = Database.Tabs[0];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_2;
		L_2 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_2);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_3;
		L_3 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		StoreController_set_SelectedTabData_m0612E23CB2F72912E29302E38A8811D116AB9B07_inline(L_5, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.StoreController::InitDefaultProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_InitDefaultProducts_mBD06017A7F7BC856F569A5F0E0F0FF02E30CD421 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m8BFE12BE499EE57A2A895AC06407C349344B6FC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m70B209FEFBEBE96DE7205EBAE5FD18C22623E2C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD12069B3B11B911BD7DCE64CB3CCB1791851D36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE5066524301BAB19C8ACF09E3CE30F920D5AABD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m8209D0EE74FEAD2D309F2DB57678940A7AE99DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6B6F8DAA75289F3F59FAE51BB5F7CD50CD6DE932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m086898480D6DE87967E39BFDC9EA53EB53239EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC06EB1B5A5DBD544B112648F0794D0FBCC27C975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7CFE20B0CE54E2B965FB1D9DAF43E77D54F759C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9FD5DFD7E3D6DF105ACFC9B677DBF2FBA8B4CFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150* V_0 = NULL;
	Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* V_2 = NULL;
	List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* V_3 = NULL;
	{
		// var visitedTypes = new List<TabType>();
		List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150* L_0 = (List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150*)il2cpp_codegen_object_new(List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC06EB1B5A5DBD544B112648F0794D0FBCC27C975(L_0, List_1__ctor_mC06EB1B5A5DBD544B112648F0794D0FBCC27C975_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var tab in products.Keys)
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_1 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6;
		NullCheck(L_1);
		KeyCollection_tED2558E42642D86AD2F4D4FFE90107483DFFA41C* L_2;
		L_2 = Dictionary_2_get_Keys_m8BFE12BE499EE57A2A895AC06407C349344B6FC3(L_1, Dictionary_2_get_Keys_m8BFE12BE499EE57A2A895AC06407C349344B6FC3_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t876F4F5A4871481DE4CD93EFF0435ADBC6117A04 L_3;
		L_3 = KeyCollection_GetEnumerator_m8209D0EE74FEAD2D309F2DB57678940A7AE99DFE(L_2, KeyCollection_GetEnumerator_m8209D0EE74FEAD2D309F2DB57678940A7AE99DFE_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m70B209FEFBEBE96DE7205EBAE5FD18C22623E2C9((&V_1), Enumerator_Dispose_m70B209FEFBEBE96DE7205EBAE5FD18C22623E2C9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_0018_1:
			{
				// foreach (var tab in products.Keys)
				TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_4;
				L_4 = Enumerator_get_Current_mE5066524301BAB19C8ACF09E3CE30F920D5AABD7_inline((&V_1), Enumerator_get_Current_mE5066524301BAB19C8ACF09E3CE30F920D5AABD7_RuntimeMethod_var);
				V_2 = L_4;
				// if (visitedTypes.Contains(tab.Type))
				List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150* L_5 = V_0;
				TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_6 = V_2;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_6, NULL);
				NullCheck(L_5);
				bool L_8;
				L_8 = List_1_Contains_m086898480D6DE87967E39BFDC9EA53EB53239EF0(L_5, L_7, List_1_Contains_m086898480D6DE87967E39BFDC9EA53EB53239EF0_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// visitedTypes.Add(tab.Type);
				List_1_t5D4D13C685E369275F1A3F74CE72CA8CEAD51150* L_9 = V_0;
				TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_10 = V_2;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_10, NULL);
				NullCheck(L_9);
				List_1_Add_m6B6F8DAA75289F3F59FAE51BB5F7CD50CD6DE932_inline(L_9, L_11, List_1_Add_m6B6F8DAA75289F3F59FAE51BB5F7CD50CD6DE932_RuntimeMethod_var);
				// var page = products[tab];
				Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_12 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6;
				TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_13 = V_2;
				NullCheck(L_12);
				List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_14;
				L_14 = Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11(L_12, L_13, Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
				V_3 = L_14;
				// if (page.Count > 0)
				List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_15 = V_3;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = List_1_get_Count_m7CFE20B0CE54E2B965FB1D9DAF43E77D54F759C9_inline(L_15, List_1_get_Count_m7CFE20B0CE54E2B965FB1D9DAF43E77D54F759C9_RuntimeMethod_var);
				if ((((int32_t)L_16) <= ((int32_t)0)))
				{
					goto IL_005c_1;
				}
			}
			{
				// var defaultProduct = page[0];
				List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_17 = V_3;
				NullCheck(L_17);
				ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_18;
				L_18 = List_1_get_Item_m9FD5DFD7E3D6DF105ACFC9B677DBF2FBA8B4CFBE(L_17, 0, List_1_get_Item_m9FD5DFD7E3D6DF105ACFC9B677DBF2FBA8B4CFBE_RuntimeMethod_var);
				// defaultProduct.IsUnlocked = true;
				NullCheck(L_18);
				ProductData_set_IsUnlocked_mE1C613BE0692A5591AF13461DB88D57C03AB6B34(L_18, (bool)1, NULL);
			}

IL_005c_1:
			{
				// foreach (var tab in products.Keys)
				bool L_19;
				L_19 = Enumerator_MoveNext_mD12069B3B11B911BD7DCE64CB3CCB1791851D36B((&V_1), Enumerator_MoveNext_mD12069B3B11B911BD7DCE64CB3CCB1791851D36B_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0075;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void ParkInc.StoreController::InitSelectedProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController_InitSelectedProducts_mFCF876DA8374B0A1BD2E08AA1B540EBCE6F88507 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m956A92976F688FB87E2FE7272F0E48E51C940C5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1B4225B8A89735E8DD1F30A5A5D25916740BD367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD5F9C84D5156D88CEEB1D1D832A3C771BFE4DFE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m14CA2A68C5EC3537371957AF5BD557E332C962D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m12D283D090370D64DF121CE93D7E65B3DA4B4CC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m576B34BECD580885AC789CC6E79BDAB1871DA27D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9FD5DFD7E3D6DF105ACFC9B677DBF2FBA8B4CFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* V_4 = NULL;
	Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A V_5;
	memset((&V_5), 0, sizeof(V_5));
	ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* V_6 = NULL;
	int32_t V_7 = 0;
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* V_8 = NULL;
	ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* V_9 = NULL;
	{
		// selectedProducts = new Dictionary<TabType, ProductData>();
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_0 = (Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B*)il2cpp_codegen_object_new(Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1B4225B8A89735E8DD1F30A5A5D25916740BD367(L_0, Dictionary_2__ctor_m1B4225B8A89735E8DD1F30A5A5D25916740BD367_RuntimeMethod_var);
		((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7), (void*)L_0);
		// for (int i = 0; i < Database.TabTypes.Length; i++)
		V_0 = 0;
		goto IL_011f;
	}

IL_0011:
	{
		// var type = Database.TabTypes[i];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_1;
		L_1 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_1);
		TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31* L_2 = L_1->___TabTypes_7;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (int32_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// var selectedId = Database[type];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_6;
		L_6 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = StoreDatabase_get_Item_mA7199BE8556790E96EF456D50999FBF7529DBDE8(L_6, L_7, NULL);
		V_2 = L_8;
		// for (int j = 0; j < Database.Tabs.Length; j++)
		V_3 = 0;
		goto IL_00aa;
	}

IL_002e:
	{
		// var tab = Database.Tabs[j];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_9;
		L_9 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_9);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_10;
		L_10 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_9, NULL);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// if (tab.Type != type)
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_00a6;
		}
	}
	{
		// foreach (var product in products[tab])
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_17 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_18 = V_4;
		NullCheck(L_17);
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_19;
		L_19 = Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11(L_17, L_18, Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		NullCheck(L_19);
		Enumerator_t92369220776C326E80047BC1A7ACDDDCCD4FCF4A L_20;
		L_20 = List_1_GetEnumerator_m576B34BECD580885AC789CC6E79BDAB1871DA27D(L_19, List_1_GetEnumerator_m576B34BECD580885AC789CC6E79BDAB1871DA27D_RuntimeMethod_var);
		V_5 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD5F9C84D5156D88CEEB1D1D832A3C771BFE4DFE9((&V_5), Enumerator_Dispose_mD5F9C84D5156D88CEEB1D1D832A3C771BFE4DFE9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_005b_1:
			{
				// foreach (var product in products[tab])
				ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_21;
				L_21 = Enumerator_get_Current_m12D283D090370D64DF121CE93D7E65B3DA4B4CC7_inline((&V_5), Enumerator_get_Current_m12D283D090370D64DF121CE93D7E65B3DA4B4CC7_RuntimeMethod_var);
				V_6 = L_21;
				// if (product.UniqueId == selectedId)
				ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_22 = V_6;
				NullCheck(L_22);
				String_t* L_23;
				L_23 = ProductData_get_UniqueId_m85902C986CFB27C86ED418E68F160FDB5FB5AA38_inline(L_22, NULL);
				String_t* L_24 = V_2;
				bool L_25;
				L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, L_24, NULL);
				if (!L_25)
				{
					goto IL_008d_1;
				}
			}
			{
				// product.IsUnlocked = true;
				ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_26 = V_6;
				NullCheck(L_26);
				ProductData_set_IsUnlocked_mE1C613BE0692A5591AF13461DB88D57C03AB6B34(L_26, (bool)1, NULL);
				// selectedProducts.Add(type, product);
				Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_27 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
				int32_t L_28 = V_1;
				ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_29 = V_6;
				NullCheck(L_27);
				Dictionary_2_Add_m956A92976F688FB87E2FE7272F0E48E51C940C5D(L_27, L_28, L_29, Dictionary_2_Add_m956A92976F688FB87E2FE7272F0E48E51C940C5D_RuntimeMethod_var);
				// goto nextType;
				goto IL_011b;
			}

IL_008d_1:
			{
				// foreach (var product in products[tab])
				bool L_30;
				L_30 = Enumerator_MoveNext_m14CA2A68C5EC3537371957AF5BD557E332C962D3((&V_5), Enumerator_MoveNext_m14CA2A68C5EC3537371957AF5BD557E332C962D3_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_005b_1;
				}
			}
			{
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		// for (int j = 0; j < Database.Tabs.Length; j++)
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00aa:
	{
		// for (int j = 0; j < Database.Tabs.Length; j++)
		int32_t L_32 = V_3;
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_33;
		L_33 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_33);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_34;
		L_34 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_33, NULL);
		NullCheck(L_34);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		// for (int j = 0; j < Database.Tabs.Length; j++)
		V_7 = 0;
		goto IL_010b;
	}

IL_00c1:
	{
		// var tab = Database.Tabs[j];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_35;
		L_35 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_35);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_36;
		L_36 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_35, NULL);
		int32_t L_37 = V_7;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_8 = L_39;
		// if (tab.Type != type)
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_40 = V_8;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_40, NULL);
		int32_t L_42 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_0105;
		}
	}
	{
		// var firstProduct = products[tab][0];
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_43 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_44 = V_8;
		NullCheck(L_43);
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_45;
		L_45 = Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11(L_43, L_44, Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		NullCheck(L_45);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_46;
		L_46 = List_1_get_Item_m9FD5DFD7E3D6DF105ACFC9B677DBF2FBA8B4CFBE(L_45, 0, List_1_get_Item_m9FD5DFD7E3D6DF105ACFC9B677DBF2FBA8B4CFBE_RuntimeMethod_var);
		V_9 = L_46;
		// firstProduct.IsUnlocked = true;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_47 = V_9;
		NullCheck(L_47);
		ProductData_set_IsUnlocked_mE1C613BE0692A5591AF13461DB88D57C03AB6B34(L_47, (bool)1, NULL);
		// selectedProducts.Add(type, firstProduct);
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_48 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
		int32_t L_49 = V_1;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_50 = V_9;
		NullCheck(L_48);
		Dictionary_2_Add_m956A92976F688FB87E2FE7272F0E48E51C940C5D(L_48, L_49, L_50, Dictionary_2_Add_m956A92976F688FB87E2FE7272F0E48E51C940C5D_RuntimeMethod_var);
		// break;
		goto IL_011b;
	}

IL_0105:
	{
		// for (int j = 0; j < Database.Tabs.Length; j++)
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_010b:
	{
		// for (int j = 0; j < Database.Tabs.Length; j++)
		int32_t L_52 = V_7;
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_53;
		L_53 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_53);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_54;
		L_54 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_53, NULL);
		NullCheck(L_54);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00c1;
		}
	}

IL_011b:
	{
		// for (int i = 0; i < Database.TabTypes.Length; i++)
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_011f:
	{
		// for (int i = 0; i < Database.TabTypes.Length; i++)
		int32_t L_56 = V_0;
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_57;
		L_57 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_57);
		TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31* L_58 = L_57->___TabTypes_7;
		NullCheck(L_58);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// ParkInc.TabData ParkInc.StoreController::GetTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* StoreController_GetTab_m09D882F1E6E513DED07B9877573C8025E4A008DD (int32_t ___0_tabId, const RuntimeMethod* method) 
{
	{
		// return Database.Tabs[tabId];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_0;
		L_0 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_0);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_1;
		L_1 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_0, NULL);
		int32_t L_2 = ___0_tabId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Collections.Generic.List`1<ParkInc.ProductData> ParkInc.StoreController::GetProducts(ParkInc.TabData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* StoreController_GetProducts_m9B710C89609DC3C101FD6285B583F2E5D61CF50D (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return products[tab];
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_1 = ___0_tab;
		NullCheck(L_0);
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_2;
		L_2 = Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11(L_0, L_1, Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 ParkInc.StoreController::PagesCount(ParkInc.TabData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StoreController_PagesCount_m363164C306931A63CA22DD64A6DA1D4E92DFD502 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7CFE20B0CE54E2B965FB1D9DAF43E77D54F759C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return products[tab].Count;
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_1 = ___0_tab;
		NullCheck(L_0);
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_2;
		L_2 = Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11(L_0, L_1, Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m7CFE20B0CE54E2B965FB1D9DAF43E77D54F759C9_inline(L_2, List_1_get_Count_m7CFE20B0CE54E2B965FB1D9DAF43E77D54F759C9_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean ParkInc.StoreController::SelectProduct(ParkInc.ProductData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StoreController_SelectProduct_m52280841ACB6D0AB41568DFC325C6AF7BFF13BD6 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___0_product, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0928A60DE1160996A4E9E0438A4A5A6E8D66D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* V_0 = NULL;
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* G_B4_0 = NULL;
	ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* G_B3_0 = NULL;
	{
		// if (!product.IsUnlocked)
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_0 = ___0_product;
		NullCheck(L_0);
		bool L_1;
		L_1 = ProductData_get_IsUnlocked_mDED00CE476C343C58E1675C29A0184B47E233515(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// var tab = Database.Tabs[product.TabId];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_2;
		L_2 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_2);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_3;
		L_3 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_2, NULL);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_4 = ___0_product;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ProductData_get_TabId_m446AFCD33D0779EAB1DDDE2A8A4D5232BE8C3C46_inline(L_4, NULL);
		NullCheck(L_3);
		int32_t L_6 = L_5;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		// Database[tab.Type] = product.UniqueId;
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_8;
		L_8 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_9, NULL);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_11 = ___0_product;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = ProductData_get_UniqueId_m85902C986CFB27C86ED418E68F160FDB5FB5AA38_inline(L_11, NULL);
		NullCheck(L_8);
		StoreDatabase_set_Item_m87DCD5AED04380A08FB02C171EF2BE7CDDF47FFA(L_8, L_10, L_12, NULL);
		// selectedProducts[tab.Type] = product;
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_13 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_14, NULL);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_16 = ___0_product;
		NullCheck(L_13);
		Dictionary_2_set_Item_m0928A60DE1160996A4E9E0438A4A5A6E8D66D9E9(L_13, L_15, L_16, Dictionary_2_set_Item_m0928A60DE1160996A4E9E0438A4A5A6E8D66D9E9_RuntimeMethod_var);
		// OnProductSelected?.Invoke(tab.Type, product);
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_17 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___OnProductSelected_9;
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* L_18 = L_17;
		G_B3_0 = L_18;
		if (L_18)
		{
			G_B4_0 = L_18;
			goto IL_004e;
		}
	}
	{
		goto IL_005a;
	}

IL_004e:
	{
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_19, NULL);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_21 = ___0_product;
		NullCheck(G_B4_0);
		ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_inline(G_B4_0, L_20, L_21, NULL);
	}

IL_005a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean ParkInc.StoreController::BuyProduct(ParkInc.ProductData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StoreController_BuyProduct_m63FAA9BA52419351F9822363E1CF41DAB7A9B732 (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___0_product, bool ___1_select, bool ___2_free, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (product.IsUnlocked)
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_0 = ___0_product;
		NullCheck(L_0);
		bool L_1;
		L_1 = ProductData_get_IsUnlocked_mDED00CE476C343C58E1675C29A0184B47E233515(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return SelectProduct(product);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_2 = ___0_product;
		bool L_3;
		L_3 = StoreController_SelectProduct_m52280841ACB6D0AB41568DFC325C6AF7BFF13BD6(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		// if (free)
		bool L_4 = ___2_free;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// product.IsUnlocked = true;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_5 = ___0_product;
		NullCheck(L_5);
		ProductData_set_IsUnlocked_mE1C613BE0692A5591AF13461DB88D57C03AB6B34(L_5, (bool)1, NULL);
		// if (select)
		bool L_6 = ___1_select;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// SelectProduct(product);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_7 = ___0_product;
		bool L_8;
		L_8 = StoreController_SelectProduct_m52280841ACB6D0AB41568DFC325C6AF7BFF13BD6(L_7, NULL);
	}

IL_0023:
	{
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// else if (product.PurchType == ProductData.PurchaseType.InGameCurrency && CurrenciesController.HasAmount(product.Currency, product.Cost))
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_9 = ___0_product;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ProductData_get_PurchType_mB7CD04164350C7C324F8F79F60394C6066F68043_inline(L_9, NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_11 = ___0_product;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ProductData_get_Currency_m148CA4D6284AABC3B4CF39C3642111564BCEB8EB_inline(L_11, NULL);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_13 = ___0_product;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ProductData_get_Cost_m818AD35CB7554245B5C40D400CA046043F5095D6_inline(L_13, NULL);
		bool L_15;
		L_15 = CurrenciesController_HasAmount_m6A7807431D8A0C6896C90C79E0EA40FE5156B07C(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		// CurrenciesController.Substract(product.Currency, product.Cost);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_16 = ___0_product;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = ProductData_get_Currency_m148CA4D6284AABC3B4CF39C3642111564BCEB8EB_inline(L_16, NULL);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_18 = ___0_product;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = ProductData_get_Cost_m818AD35CB7554245B5C40D400CA046043F5095D6_inline(L_18, NULL);
		CurrenciesController_Substract_mFA0230EB54A472E1DC70E3EABDC4D2D6F8B706F7(L_17, L_19, NULL);
		// product.IsUnlocked = true;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_20 = ___0_product;
		NullCheck(L_20);
		ProductData_set_IsUnlocked_mE1C613BE0692A5591AF13461DB88D57C03AB6B34(L_20, (bool)1, NULL);
		// if (select)
		bool L_21 = ___1_select;
		if (!L_21)
		{
			goto IL_0062;
		}
	}
	{
		// SelectProduct(product);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_22 = ___0_product;
		bool L_23;
		L_23 = StoreController_SelectProduct_m52280841ACB6D0AB41568DFC325C6AF7BFF13BD6(L_22, NULL);
	}

IL_0062:
	{
		// return true;
		return (bool)1;
	}

IL_0064:
	{
		// else if(product.PurchType == ProductData.PurchaseType.RewardedVideo)
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_24 = ___0_product;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ProductData_get_PurchType_mB7CD04164350C7C324F8F79F60394C6066F68043_inline(L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}
	{
		// product.RewardedVideoWatchedAmount++;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_26 = ___0_product;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_27 = L_26;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = ProductData_get_RewardedVideoWatchedAmount_mBCE37FD49A76BFA61D3888C37CEEF3923849FF56(L_27, NULL);
		V_0 = L_28;
		int32_t L_29 = V_0;
		NullCheck(L_27);
		ProductData_set_RewardedVideoWatchedAmount_m33F271A6C51B747563130B7D29B8F98B2F998F25(L_27, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		// if(product.RewardedVideoWatchedAmount >= product.Cost)
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_30 = ___0_product;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = ProductData_get_RewardedVideoWatchedAmount_mBCE37FD49A76BFA61D3888C37CEEF3923849FF56(L_30, NULL);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_32 = ___0_product;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = ProductData_get_Cost_m818AD35CB7554245B5C40D400CA046043F5095D6_inline(L_32, NULL);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_009c;
		}
	}
	{
		// product.IsUnlocked = true;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_34 = ___0_product;
		NullCheck(L_34);
		ProductData_set_IsUnlocked_mE1C613BE0692A5591AF13461DB88D57C03AB6B34(L_34, (bool)1, NULL);
		// if (select)
		bool L_35 = ___1_select;
		if (!L_35)
		{
			goto IL_009c;
		}
	}
	{
		// SelectProduct(product);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_36 = ___0_product;
		bool L_37;
		L_37 = StoreController_SelectProduct_m52280841ACB6D0AB41568DFC325C6AF7BFF13BD6(L_36, NULL);
	}

IL_009c:
	{
		// return false;
		return (bool)0;
	}
}
// ParkInc.ProductData ParkInc.StoreController::GetSelectedProductData(ParkInc.TabType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* StoreController_GetSelectedProductData_m48945E499E824F8635DF66ECC700ADCD8C876FCB (int32_t ___0_tabType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return selectedProducts[tabType];
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
		int32_t L_1 = ___0_tabType;
		NullCheck(L_0);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_2;
		L_2 = Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82(L_0, L_1, Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		return L_2;
	}
}
// ParkInc.ProductData ParkInc.StoreController::GetSelectedProductData(ParkInc.TabData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* StoreController_GetSelectedProductData_m5AD953D4C5718B8E336242C37013BFCE27B39F98 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tabData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return selectedProducts[tabData.Type];
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_1 = ___0_tabData;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_1, NULL);
		NullCheck(L_0);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_3;
		L_3 = Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82(L_0, L_2, Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		return L_3;
	}
}
// ParkInc.ProductData ParkInc.StoreController::GetSelectedProductData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* StoreController_GetSelectedProductData_mF224DF40805B58EFB3C214D2C007233EAEA63CD9 (int32_t ___0_tabId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* V_0 = NULL;
	{
		// var tabData = Database.Tabs[tabId];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_0;
		L_0 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_0);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_1;
		L_1 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_0, NULL);
		int32_t L_2 = ___0_tabId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// return selectedProducts[tabData.Type];
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_5 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_6, NULL);
		NullCheck(L_5);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_8;
		L_8 = Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82(L_5, L_7, Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		return L_8;
	}
}
// UnityEngine.GameObject ParkInc.StoreController::GetSelectedPrefab(ParkInc.TabType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StoreController_GetSelectedPrefab_m1ECB1F45C1DE957B897993FB8F2F9CE23D021878 (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return selectedProducts[type].Prefab;
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
		int32_t L_1 = ___0_type;
		NullCheck(L_0);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_2;
		L_2 = Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82(L_0, L_1, Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = ProductData_get_Prefab_m28BEAC9E1B87BE48D23FCA84FF1F3B603C45C0DF_inline(L_2, NULL);
		return L_3;
	}
}
// UnityEngine.GameObject ParkInc.StoreController::GetSelectedPrefab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StoreController_GetSelectedPrefab_mDED15CC5D6CD019686B9E413BD743DAF6BE12756 (int32_t ___0_tabId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* V_0 = NULL;
	{
		// var tabData = Database.Tabs[tabId];
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_0;
		L_0 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_0);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_1;
		L_1 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_0, NULL);
		int32_t L_2 = ___0_tabId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// return selectedProducts[tabData.Type].Prefab;
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_5 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_6, NULL);
		NullCheck(L_5);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_8;
		L_8 = Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82(L_5, L_7, Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = ProductData_get_Prefab_m28BEAC9E1B87BE48D23FCA84FF1F3B603C45C0DF_inline(L_8, NULL);
		return L_9;
	}
}
// UnityEngine.GameObject ParkInc.StoreController::GetSelectedPrefab(ParkInc.TabData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StoreController_GetSelectedPrefab_mEFBE8D0C46DF798CBEA8B3D9344C45A9D0F54670 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tabData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return selectedProducts[tabData.Type].Prefab;
		Dictionary_2_t72826FDBD40660AB6D1C6E032FE3AD5D1707E65B* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___selectedProducts_7;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_1 = ___0_tabData;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline(L_1, NULL);
		NullCheck(L_0);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_3;
		L_3 = Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82(L_0, L_2, Dictionary_2_get_Item_m79A1FEFA2949D3736B32D000E3D15D2F27564B82_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = ProductData_get_Prefab_m28BEAC9E1B87BE48D23FCA84FF1F3B603C45C0DF_inline(L_3, NULL);
		return L_4;
	}
}
// ParkInc.ProductData ParkInc.StoreController::GetRandomLockedProduct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* StoreController_GetRandomLockedProduct_mFC9996F59EF2D7D5F61B8140C50FCC5B674A51CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreExtensions_FindRandomOrder_TisTabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A_m8C4B554FE7908AFECC776C98E3F912A1144EC1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CGetRandomLockedProductU3Eb__0_m8D63525BB346AE04C323862B8F6EE0809B95C7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979* L_0 = (U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass33_0__ctor_mD458E6D1C931CF0E709B6FC4846F819BE9621135(L_0, NULL);
		V_0 = L_0;
		// ProductData lockedProduct = null;
		U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979* L_1 = V_0;
		NullCheck(L_1);
		L_1->___lockedProduct_0 = (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___lockedProduct_0), (void*)(ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*)NULL);
		// Database.Tabs.FindRandomOrder(tab =>
		// {
		//     var product = products[tab].FindRandomOrder(product =>
		//     {
		//         return !product.IsUnlocked && !product.IsDummy;
		//     });
		// 
		//     if (product != null)
		//     {
		//         lockedProduct = product;
		//         return true;
		//     }
		// 
		//     return false;
		// });
		StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* L_2;
		L_2 = StoreController_get_Database_mC80AECF4AFC19DB54DF2E997A7F1AAAE2C82711F(NULL);
		NullCheck(L_2);
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_3;
		L_3 = StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline(L_2, NULL);
		U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979* L_4 = V_0;
		Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92* L_5 = (Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92*)il2cpp_codegen_object_new(Func_2_tC9BA7854EFF07C8856BD16953727B6ECEA2B1A92_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mC759BEF86D329154FFD71D34F9E29212ED2006B6(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3CGetRandomLockedProductU3Eb__0_m8D63525BB346AE04C323862B8F6EE0809B95C7E4_RuntimeMethod_var), NULL);
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_6;
		L_6 = CoreExtensions_FindRandomOrder_TisTabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A_m8C4B554FE7908AFECC776C98E3F912A1144EC1F7(L_3, L_5, CoreExtensions_FindRandomOrder_TisTabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A_m8C4B554FE7908AFECC776C98E3F912A1144EC1F7_RuntimeMethod_var);
		// return lockedProduct;
		U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979* L_7 = V_0;
		NullCheck(L_7);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_8 = L_7->___lockedProduct_0;
		return L_8;
	}
}
// ParkInc.ProductData ParkInc.StoreController::GetRandomProduct(ParkInc.TabType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* StoreController_GetRandomProduct_m6038B40F91DEB5B7ADE7A594A1DC967534B62841 (int32_t ___0_tab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreExtensions_GetRandomItem_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m461BABFCFFE7A8DD4693BF41DD064CB2E8E73D2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return products[GetTab((int)tab)].GetRandomItem();
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6;
		int32_t L_1 = ___0_tab;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_2;
		L_2 = StoreController_GetTab_m09D882F1E6E513DED07B9877573C8025E4A008DD(L_1, NULL);
		NullCheck(L_0);
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_3;
		L_3 = Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11(L_0, L_2, Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_4;
		L_4 = CoreExtensions_GetRandomItem_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m461BABFCFFE7A8DD4693BF41DD064CB2E8E73D2F(L_3, CoreExtensions_GetRandomItem_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m461BABFCFFE7A8DD4693BF41DD064CB2E8E73D2F_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void ParkInc.StoreController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreController__ctor_m8CE162088CEC0B8CD53888FCD1977E9138F9583B (StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60* __this, const RuntimeMethod* method) 
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
void ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_Multicast(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* currentDelegate = reinterpret_cast<ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_tab, ___1_product, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_OpenInst(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_tab, ___1_product, method);
}
void ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_OpenStatic(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_tab, ___1_product, method);
}
void ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_OpenStaticInvoker(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_tab, ___1_product);
}
void ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_ClosedStaticInvoker(ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_tab, ___1_product);
}
// System.Void ParkInc.StoreController/ProductDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductDelegate__ctor_mF289AAA725D98A7F9691C8955C997EE37B00FE63 (ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_Multicast;
}
// System.Void ParkInc.StoreController/ProductDelegate::Invoke(ParkInc.TabType,ParkInc.ProductData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5 (ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_tab, ___1_product, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ParkInc.StoreController/ProductDelegate::BeginInvoke(ParkInc.TabType,ParkInc.ProductData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductDelegate_BeginInvoke_mBDD081B09F6928DEC10687E86AFA90C9D4282A86 (ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_il2cpp_TypeInfo_var, &___0_tab);
	__d_args[1] = ___1_product;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void ParkInc.StoreController/ProductDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductDelegate_EndInvoke_m7CF52C0AFF5EE2C37B61128518B411E9FE568834 (ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParkInc.StoreController/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mD458E6D1C931CF0E709B6FC4846F819BE9621135 (U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ParkInc.StoreController/<>c__DisplayClass33_0::<GetRandomLockedProduct>b__0(ParkInc.TabData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass33_0_U3CGetRandomLockedProductU3Eb__0_m8D63525BB346AE04C323862B8F6EE0809B95C7E4 (U3CU3Ec__DisplayClass33_0_t5AC05E8F70842EDF0B0AC6F55E6A0E54948A3979* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreExtensions_FindRandomOrder_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m9C099E4B41E0D2F833848F46706C783446BF38D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetRandomLockedProductU3Eb__33_1_m34018FEA54B54CEDE66262EC6B3FFEE3AE092766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* V_0 = NULL;
	Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* G_B2_0 = NULL;
	List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* G_B2_1 = NULL;
	Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* G_B1_0 = NULL;
	List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* G_B1_1 = NULL;
	{
		// var product = products[tab].FindRandomOrder(product =>
		// {
		//     return !product.IsUnlocked && !product.IsDummy;
		// });
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_0 = ((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___products_6;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_1 = ___0_tab;
		NullCheck(L_0);
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_2;
		L_2 = Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11(L_0, L_1, Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var);
		Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* L_3 = ((U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var))->___U3CU3E9__33_1_1;
		Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var);
		U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC* L_5 = ((U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* L_6 = (Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7*)il2cpp_codegen_object_new(Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m09BCA16D9ADF10523FAF3FF7D5B969A23980483E(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetRandomLockedProductU3Eb__33_1_m34018FEA54B54CEDE66262EC6B3FFEE3AE092766_RuntimeMethod_var), NULL);
		Func_2_t497F9802DB63C1B8A997323C3836967C5C7149F7* L_7 = L_6;
		((U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var))->___U3CU3E9__33_1_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var))->___U3CU3E9__33_1_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_8;
		L_8 = CoreExtensions_FindRandomOrder_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m9C099E4B41E0D2F833848F46706C783446BF38D6(G_B2_1, G_B2_0, CoreExtensions_FindRandomOrder_TisProductData_t9DFCF708A233671E57D85C46E606139BF1035670_m9C099E4B41E0D2F833848F46706C783446BF38D6_RuntimeMethod_var);
		V_0 = L_8;
		// if (product != null)
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_9 = V_0;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		// lockedProduct = product;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_10 = V_0;
		__this->___lockedProduct_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lockedProduct_0), (void*)L_10);
		// return true;
		return (bool)1;
	}

IL_003c:
	{
		// return false;
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
// System.Void ParkInc.StoreController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m53AE42587D345EE8E9AAECA0D864E6603B8D5EFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC* L_0 = (U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC*)il2cpp_codegen_object_new(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1615722D54A1D7549469FE6D15D1114FAA9245C3(L_0, NULL);
		((U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ParkInc.StoreController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1615722D54A1D7549469FE6D15D1114FAA9245C3 (U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ParkInc.StoreController/<>c::<GetRandomLockedProduct>b__33_1(ParkInc.ProductData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetRandomLockedProductU3Eb__33_1_m34018FEA54B54CEDE66262EC6B3FFEE3AE092766 (U3CU3Ec_t00A3509A9B9AFCC9BAD921B32A9D9A1DBF0ABBBC* __this, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___0_product, const RuntimeMethod* method) 
{
	{
		// return !product.IsUnlocked && !product.IsDummy;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_0 = ___0_product;
		NullCheck(L_0);
		bool L_1;
		L_1 = ProductData_get_IsUnlocked_mDED00CE476C343C58E1675C29A0184B47E233515(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_2 = ___0_product;
		NullCheck(L_2);
		bool L_3;
		L_3 = ProductData_get_IsDummy_mA388F5BCA180FCD734DC1C5A62A8DF8C9DED501B_inline(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
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
// ParkInc.TabData[] ParkInc.StoreDatabase::get_Tabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996 (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) 
{
	{
		// public TabData[] Tabs => tabs;
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_0 = __this->___tabs_4;
		return L_0;
	}
}
// System.Int32 ParkInc.StoreDatabase::get_CoinsForAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StoreDatabase_get_CoinsForAds_mDD99B1CD833C5EC75D3BEEAE58C6679B4440BC5B (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) 
{
	{
		// public int CoinsForAds => coinsForAdsAmount;
		int32_t L_0 = __this->___coinsForAdsAmount_8;
		return L_0;
	}
}
// System.String ParkInc.StoreDatabase::get_Item(ParkInc.TabType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreDatabase_get_Item_mA7199BE8556790E96EF456D50999FBF7529DBDE8 (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A6862C78E16047C1E2861A620BA4B3CC4BCE8DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => selectedProducts[type].Value;
		Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221* L_0 = __this->___selectedProducts_6;
		int32_t L_1 = ___0_type;
		NullCheck(L_0);
		SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* L_2;
		L_2 = Dictionary_2_get_Item_m5A6862C78E16047C1E2861A620BA4B3CC4BCE8DA(L_0, L_1, Dictionary_2_get_Item_m5A6862C78E16047C1E2861A620BA4B3CC4BCE8DA_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String ParkInc.SimpleStringSave::get_Value() */, L_2);
		return L_3;
	}
}
// System.Void ParkInc.StoreDatabase::set_Item(ParkInc.TabType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreDatabase_set_Item_m87DCD5AED04380A08FB02C171EF2BE7CDDF47FFA (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, int32_t ___0_type, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A6862C78E16047C1E2861A620BA4B3CC4BCE8DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => selectedProducts[type].Value = value;
		Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221* L_0 = __this->___selectedProducts_6;
		int32_t L_1 = ___0_type;
		NullCheck(L_0);
		SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* L_2;
		L_2 = Dictionary_2_get_Item_m5A6862C78E16047C1E2861A620BA4B3CC4BCE8DA(L_0, L_1, Dictionary_2_get_Item_m5A6862C78E16047C1E2861A620BA4B3CC4BCE8DA_RuntimeMethod_var);
		String_t* L_3 = ___1_value;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(6 /* System.Void ParkInc.SimpleStringSave::set_Value(System.String) */, L_2, L_3);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<ParkInc.TabData,System.Collections.Generic.List`1<ParkInc.ProductData>> ParkInc.StoreDatabase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* StoreDatabase_Init_mFA35CE5D40501E39C7250237EF816D2C35CF8C7F (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6F23478E1D62F0D7CEE666AE781D3E5EB9DD19CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m915CC2E86505D71F7C30307494ABD466DCEB4457_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC82DEDE2E51E2F7978AAAECAB3AF969A581E95AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m323E231C450B1631FEFB96F3316ED55206AD7C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m49CCD5C77DAE287C747C68506D5BB0D9891CAC8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBBB5CD5B86E07C00B9A3C99A8FAB9788EB3A2E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m57C900003F89E4B9FAD22CD484BB6C4BE9839CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE15795D510CCC09213E58C79A3217B030D8847A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveController_GetSaveObject_TisSimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E_mFC01EEEDA26A3CA73D0D1DFE63C808AE83ABAC47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral434B69C11DEE55DE2DB6751A2A95618A67F02F72);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* V_0 = NULL;
	int32_t V_1 = 0;
	ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* V_2 = NULL;
	TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* V_6 = NULL;
	{
		// var sortedProducts = new Dictionary<TabData, List<ProductData>>();
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_0 = (Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC*)il2cpp_codegen_object_new(Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m49CCD5C77DAE287C747C68506D5BB0D9891CAC8B(L_0, Dictionary_2__ctor_m49CCD5C77DAE287C747C68506D5BB0D9891CAC8B_RuntimeMethod_var);
		V_0 = L_0;
		// for(int i = 0; i < products.Length; i++)
		V_1 = 0;
		goto IL_0056;
	}

IL_000a:
	{
		// var product = products[i];
		ProductDataU5BU5D_t2202F738F9C295F8D39D1A4A247F90F74992A261* L_1 = __this->___products_5;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// var tab = tabs[product.TabId];
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_5 = __this->___tabs_4;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ProductData_get_TabId_m446AFCD33D0779EAB1DDDE2A8A4D5232BE8C3C46_inline(L_6, NULL);
		NullCheck(L_5);
		int32_t L_8 = L_7;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (sortedProducts.ContainsKey(tab))
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_10 = V_0;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_11 = V_3;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_mC82DEDE2E51E2F7978AAAECAB3AF969A581E95AD(L_10, L_11, Dictionary_2_ContainsKey_mC82DEDE2E51E2F7978AAAECAB3AF969A581E95AD_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		// sortedProducts[tab].Add(product); ;
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_13 = V_0;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_14 = V_3;
		NullCheck(L_13);
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_15;
		L_15 = Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11(L_13, L_14, Dictionary_2_get_Item_m88BB9CDC3C85AAD72B8D2999C9A05F7605241D11_RuntimeMethod_var);
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_16 = V_2;
		NullCheck(L_15);
		List_1_Add_mBBB5CD5B86E07C00B9A3C99A8FAB9788EB3A2E6F_inline(L_15, L_16, List_1_Add_mBBB5CD5B86E07C00B9A3C99A8FAB9788EB3A2E6F_RuntimeMethod_var);
		goto IL_004c;
	}

IL_0039:
	{
		// sortedProducts.Add(tab, new List<ProductData> { product });
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_17 = V_0;
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_18 = V_3;
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_19 = (List_1_tE15795D510CCC09213E58C79A3217B030D8847A3*)il2cpp_codegen_object_new(List_1_tE15795D510CCC09213E58C79A3217B030D8847A3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_m57C900003F89E4B9FAD22CD484BB6C4BE9839CA6(L_19, List_1__ctor_m57C900003F89E4B9FAD22CD484BB6C4BE9839CA6_RuntimeMethod_var);
		List_1_tE15795D510CCC09213E58C79A3217B030D8847A3* L_20 = L_19;
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_21 = V_2;
		NullCheck(L_20);
		List_1_Add_mBBB5CD5B86E07C00B9A3C99A8FAB9788EB3A2E6F_inline(L_20, L_21, List_1_Add_mBBB5CD5B86E07C00B9A3C99A8FAB9788EB3A2E6F_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_Add_m6F23478E1D62F0D7CEE666AE781D3E5EB9DD19CD(L_17, L_18, L_20, Dictionary_2_Add_m6F23478E1D62F0D7CEE666AE781D3E5EB9DD19CD_RuntimeMethod_var);
	}

IL_004c:
	{
		// product.Init();
		ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* L_22 = V_2;
		NullCheck(L_22);
		ProductData_Init_m8E3CFDE190BDED27233D4F9E1642834D9E7C6892(L_22, NULL);
		// for(int i = 0; i < products.Length; i++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0056:
	{
		// for(int i = 0; i < products.Length; i++)
		int32_t L_24 = V_1;
		ProductDataU5BU5D_t2202F738F9C295F8D39D1A4A247F90F74992A261* L_25 = __this->___products_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// selectedProducts = new Dictionary<TabType, SimpleStringSave>();
		Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221* L_26 = (Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221*)il2cpp_codegen_object_new(Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Dictionary_2__ctor_m323E231C450B1631FEFB96F3316ED55206AD7C5B(L_26, Dictionary_2__ctor_m323E231C450B1631FEFB96F3316ED55206AD7C5B_RuntimeMethod_var);
		__this->___selectedProducts_6 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedProducts_6), (void*)L_26);
		// TabTypes = (TabType[]) Enum.GetValues(typeof(TabType));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_29;
		L_29 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_28, NULL);
		__this->___TabTypes_7 = ((TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31*)Castclass((RuntimeObject*)L_29, TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TabTypes_7), (void*)((TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31*)Castclass((RuntimeObject*)L_29, TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31_il2cpp_TypeInfo_var)));
		// for(int i = 0; i < TabTypes.Length; i++)
		V_4 = 0;
		goto IL_00cc;
	}

IL_008b:
	{
		// var type = (TabType)TabTypes.GetValue(i);
		TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31* L_30 = __this->___TabTypes_7;
		int32_t L_31 = V_4;
		NullCheck((RuntimeArray*)L_30);
		RuntimeObject* L_32;
		L_32 = Array_GetValue_m007D247B8A6FE5BD60FD1CD510A714A416F2BA21((RuntimeArray*)L_30, L_31, NULL);
		V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_32, TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_il2cpp_TypeInfo_var))));
		// var save = SaveController.GetSaveObject<SimpleStringSave>($"Store Type: {type}");
		int32_t L_33 = V_5;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(TabType_t3A52F0E6260A18A10293BB2C929949FC2812C5F4_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral434B69C11DEE55DE2DB6751A2A95618A67F02F72, L_35, NULL);
		SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* L_37;
		L_37 = SaveController_GetSaveObject_TisSimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E_mFC01EEEDA26A3CA73D0D1DFE63C808AE83ABAC47(L_36, SaveController_GetSaveObject_TisSimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E_mFC01EEEDA26A3CA73D0D1DFE63C808AE83ABAC47_RuntimeMethod_var);
		V_6 = L_37;
		// selectedProducts.Add(type, save);
		Dictionary_2_t7E03AE9456CDECC1F59F8F4524CEA30CAA815221* L_38 = __this->___selectedProducts_6;
		int32_t L_39 = V_5;
		SimpleStringSave_t644EF34353A258D59E5D2139580C0B4B4D44340E* L_40 = V_6;
		NullCheck(L_38);
		Dictionary_2_Add_m915CC2E86505D71F7C30307494ABD466DCEB4457(L_38, L_39, L_40, Dictionary_2_Add_m915CC2E86505D71F7C30307494ABD466DCEB4457_RuntimeMethod_var);
		// for(int i = 0; i < TabTypes.Length; i++)
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00cc:
	{
		// for(int i = 0; i < TabTypes.Length; i++)
		int32_t L_42 = V_4;
		TabTypeU5BU5D_t996AA6D6B36A93877EA38B61F532CE4734931A31* L_43 = __this->___TabTypes_7;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_008b;
		}
	}
	{
		// return sortedProducts;
		Dictionary_2_t2B6F5EEEDD76A0C98FFDC815ABB0E5C2262D4ABC* L_44 = V_0;
		return L_44;
	}
}
// System.Void ParkInc.StoreDatabase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreDatabase__ctor_mED370B25318DF9F8E9879E20D3043ACFA2DAEA2B (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.String ParkInc.TabData::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TabData_get_UniqueId_m55A271398BFE94111A89E029E38A32C506C6222D (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId => uniqueId;
		String_t* L_0 = __this->___uniqueId_1;
		return L_0;
	}
}
// System.String ParkInc.TabData::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TabData_get_Name_mB8859660C6F1535B8B8C690AC7A92149CDBBACCF (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => name;
		String_t* L_0 = __this->___name_2;
		return L_0;
	}
}
// ParkInc.TabType ParkInc.TabData::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		// public TabType Type => type;
		int32_t L_0 = __this->___type_3;
		return L_0;
	}
}
// ParkInc.PreviewType ParkInc.TabData::get_PreviewType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TabData_get_PreviewType_m0891FBFBF92868F0713ADE53E4ABD6A6B7A2D763 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		// public PreviewType PreviewType => previewType;
		int32_t L_0 = __this->___previewType_4;
		return L_0;
	}
}
// UnityEngine.GameObject ParkInc.TabData::get_PreviewPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* TabData_get_PreviewPrefab_m9F605C746BC9403694080A8652AC3408020AC2B0 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject PreviewPrefab => previewPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___previewPrefab_5;
		return L_0;
	}
}
// UnityEngine.Color ParkInc.TabData::get_BackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TabData_get_BackgroundColor_mBD2EB8A812CA11C3D21524DBB6B72F3E8D51B047 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		// public Color BackgroundColor => backgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___backgroundColor_6;
		return L_0;
	}
}
// UnityEngine.Color ParkInc.TabData::get_ProductBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TabData_get_ProductBackgroundColor_mC7058BA00D00536263EB979FB6751BEBD619B2EC (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		// public Color ProductBackgroundColor => productBackgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___productBackgroundColor_7;
		return L_0;
	}
}
// System.Void ParkInc.TabData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabData__ctor_m2CA7DABC1D0B6FE3B625E4DC9CD310B824515F65 (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_Multicast(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* currentDelegate = reinterpret_cast<SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_tab, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenInst(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	NullCheck(___0_tab);
	typedef void (*FunctionPointerType) (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_tab, method);
}
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenStatic(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_tab, method);
}
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenStaticInvoker(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	InvokerActionInvoker1< TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_tab);
}
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_ClosedStaticInvoker(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_tab);
}
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenVirtual(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	NullCheck(___0_tab);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_tab);
}
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenInterface(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	NullCheck(___0_tab);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_tab);
}
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenGenericVirtual(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	NullCheck(___0_tab);
	GenericVirtualActionInvoker0::Invoke(method, ___0_tab);
}
void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenGenericInterface(SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method)
{
	NullCheck(___0_tab);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_tab);
}
// System.Void ParkInc.TabData/SimpleTabDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTabDelegate__ctor_mA4B491152416284EA3ACA135F703BBDEDE68499C (SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2_Multicast;
}
// System.Void ParkInc.TabData/SimpleTabDelegate::Invoke(ParkInc.TabData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTabDelegate_Invoke_mB31938EB0C6E3C5905CA61ABB83825392FC212B2 (SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_tab, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ParkInc.TabData/SimpleTabDelegate::BeginInvoke(ParkInc.TabData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleTabDelegate_BeginInvoke_mAF6FA5BB7FDAC304265486D7DD47AFF787DDD6F8 (SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_tab, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_tab;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ParkInc.TabData/SimpleTabDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTabDelegate_EndInvoke_mFF00C237591245F446072F99B09DC55F22AC17D1 (SimpleTabDelegate_t7B45963C4AE92C904CE73B9EB589246083E9B66F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.RenderTexture ParkInc.StorePreview3D::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* StorePreview3D_get_Texture_mCBEB7D80C35B7F607DF2CA68D4578828DDC60814 (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) 
{
	{
		// public RenderTexture Texture { get; protected set; }
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CTextureU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void ParkInc.StorePreview3D::set_Texture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorePreview3D_set_Texture_m6B87055CA8019F1298EF76BF210CD2D844766C0D (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) 
{
	{
		// public RenderTexture Texture { get; protected set; }
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_value;
		__this->___U3CTextureU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextureU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject ParkInc.StorePreview3D::get_Prefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Prefab { get; protected set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CPrefabU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void ParkInc.StorePreview3D::set_Prefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorePreview3D_set_Prefab_mE082337E2328A1645CB01909AC6DA328A8204E6C (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject Prefab { get; protected set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CPrefabU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrefabU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void ParkInc.StorePreview3D::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorePreview3D_Init_mE68FB80C5715F5A833A64C9D885C5FFC81B5F783 (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = spawnPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___spawnPosition_6;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// Texture = new RenderTexture(previewCamera.scaledPixelWidth, previewCamera.scaledPixelHeight, 16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___previewCamera_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_scaledPixelWidth_m249B2380A6E403DC1EA5E153546C4F61E226E42D(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___previewCamera_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_scaledPixelHeight_m9A61AA4F944C308A6F8B7D094C92C7A40EFB4AB9(L_4, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_6, L_3, L_5, ((int32_t)16), NULL);
		StorePreview3D_set_Texture_m6B87055CA8019F1298EF76BF210CD2D844766C0D_inline(__this, L_6, NULL);
		// previewCamera.targetTexture = Texture;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___previewCamera_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8;
		L_8 = StorePreview3D_get_Texture_mCBEB7D80C35B7F607DF2CA68D4578828DDC60814_inline(__this, NULL);
		NullCheck(L_7);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.StorePreview3D::SpawnPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorePreview3D_SpawnPrefab_m7EF37067AEB8B1DB4D28ED3B96CD3DBB22A2AAAA (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Prefab != null) Destroy(Prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (Prefab != null) Destroy(Prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// Prefab = Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_prefab;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		StorePreview3D_set_Prefab_mE082337E2328A1645CB01909AC6DA328A8204E6C_inline(__this, L_4, NULL);
		// Prefab.transform.SetParent(prefabParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D_inline(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___prefabParent_5;
		NullCheck(L_6);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_7, NULL);
		// Prefab.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D_inline(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
		// Prefab.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D_inline(__this, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_12);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_12, L_13, NULL);
		// Prefab.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D_inline(__this, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void ParkInc.StorePreview3D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorePreview3D__ctor_m789B3E73496E1A63B9B5DACE8F918F79DC3C7F76 (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) 
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
// System.Void ParkInc.UI.Particle.UIParticleSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSettings__ctor_m1D592B55A1F0B0E7944CCB2039BFECA0581E51F9 (UIParticleSettings_t47590AB23263E9610A814CFA1A3FCEF6479D91D9* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ParkInc.UI.Particle.UIParticleSettings/BurstSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstSettings__ctor_m843A4F8D0E6F85B9190A44C27A8E3551F794F9CB (BurstSettings_t4F86D7BD252A351B504F569544E4C77A93735244* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SlicedFilledImage_get_fillAmount_mBF237439659E8C6E7AB2B5D4D2CB33B39FA9C42F_inline (SlicedFilledImage_t39C0E32B91CC1876732BC2CAE418AA7D2F570533* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FillAmount; }
		float L_0 = __this->___m_FillAmount_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToggleEvents_Invoke_m078018939454314EB8CD1A202E3F7FD140F86F32_inline (ToggleEvents_t732AF94A56AA53F62AF35F9480AD09866FF87500* __this, bool ___0_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		int32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DuoFloat_get_x_m25556B9D8F57082F16FE45C6693449BCDCBD928F_inline (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public float x => firstValue;
		float L_0 = __this->___firstValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DuoFloat_get_y_m295FC39D46D662CE3B160B50482D938A070D80D1_inline (DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* __this, const RuntimeMethod* method) 
{
	{
		// public float y => secondValue;
		float L_0 = __this->___secondValue_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DuoFloat_Remap_mDE10B76F8ACC4876A7E6395413A650EB0C7106EC_inline (float ___0_value, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___1_inMinMax, DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* ___2_outMinMax, const RuntimeMethod* method) 
{
	{
		// return outMinMax.firstValue + (value - inMinMax.firstValue) * (outMinMax.secondValue - outMinMax.firstValue) / (inMinMax.secondValue - inMinMax.firstValue);
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_0 = ___2_outMinMax;
		NullCheck(L_0);
		float L_1 = L_0->___firstValue_0;
		float L_2 = ___0_value;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_3 = ___1_inMinMax;
		NullCheck(L_3);
		float L_4 = L_3->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_5 = ___2_outMinMax;
		NullCheck(L_5);
		float L_6 = L_5->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_7 = ___2_outMinMax;
		NullCheck(L_7);
		float L_8 = L_7->___firstValue_0;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_9 = ___1_inMinMax;
		NullCheck(L_9);
		float L_10 = L_9->___secondValue_1;
		DuoFloat_t6FD84BFFB7A964744DB981518FFF2420ED123ECC* L_11 = ___1_inMinMax;
		NullCheck(L_11);
		float L_12 = L_11->___firstValue_0;
		return ((float)il2cpp_codegen_add(L_1, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_4)), ((float)il2cpp_codegen_subtract(L_6, L_8))))/((float)il2cpp_codegen_subtract(L_10, L_12))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_Lerp_mA2474A351A93CC63EA568E92C99B6E8D91065F7C_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_a, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_a;
		uint8_t L_3 = L_2.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___1_b;
		uint8_t L_5 = L_4.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_a;
		uint8_t L_7 = L_6.___r_1;
		float L_8 = ___2_t;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___0_a;
		uint8_t L_10 = L_9.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11 = ___1_b;
		uint8_t L_12 = L_11.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = ___0_a;
		uint8_t L_14 = L_13.___g_2;
		float L_15 = ___2_t;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16 = ___0_a;
		uint8_t L_17 = L_16.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = ___1_b;
		uint8_t L_19 = L_18.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = ___0_a;
		uint8_t L_21 = L_20.___b_3;
		float L_22 = ___2_t;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_23 = ___0_a;
		uint8_t L_24 = L_23.___a_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_25 = ___1_b;
		uint8_t L_26 = L_25.___a_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_27 = ___0_a;
		uint8_t L_28 = L_27.___a_4;
		float L_29 = ___2_t;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_30), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_add(((float)L_3), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_7))), L_8))))), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_add(((float)L_10), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_14))), L_15))))), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_add(((float)L_17), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_21))), L_22))))), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_add(((float)L_24), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_28))), L_29))))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0075;
	}

IL_0075:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_b;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_a;
		float L_7 = L_6.___x_0;
		float L_8 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_a;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_b;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_a;
		float L_14 = L_13.___y_1;
		float L_15 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValidateInputAttribute_get_CallbackName_m6A025BA887FC852428F427CAA5224AF6309FDC6F_inline (ValidateInputAttribute_t04B1A1C5F84105B5E90F5EF0ACA02BC4621E57F4* __this, const RuntimeMethod* method) 
{
	{
		// return this.callbackName;
		String_t* L_0 = __this->___callbackName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorePreview3D_set_Texture_m6B87055CA8019F1298EF76BF210CD2D844766C0D_inline (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) 
{
	{
		// public RenderTexture Texture { get; protected set; }
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_value;
		__this->___U3CTextureU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextureU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* StoreDatabase_get_Tabs_m122D2C10A3453C3568641BD9D416B89909E98996_inline (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) 
{
	{
		// public TabData[] Tabs => tabs;
		TabDataU5BU5D_t81960C41E629E46B2D8234A636ADBD0A3041934B* L_0 = __this->___tabs_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StoreDatabase_get_CoinsForAds_mDD99B1CD833C5EC75D3BEEAE58C6679B4440BC5B_inline (StoreDatabase_t25F745CF3BA62846438D01EC98F8DF7216DD2A5D* __this, const RuntimeMethod* method) 
{
	{
		// public int CoinsForAds => coinsForAdsAmount;
		int32_t L_0 = __this->___coinsForAdsAmount_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StoreController_set_SelectedTabData_m0612E23CB2F72912E29302E38A8811D116AB9B07_inline (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TabData SelectedTabData { get; private set; }
		TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* L_0 = ___0_value;
		((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___U3CSelectedTabDataU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_StaticFields*)il2cpp_codegen_static_fields_for(StoreController_tF48E6830BC1BEE103FD756DD019E8E6EB0CEFA60_il2cpp_TypeInfo_var))->___U3CSelectedTabDataU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TabData_get_Type_m0751330FD6DAEE4DD8B077A7738264F6D257C838_inline (TabData_tE5008AA8047A0468299F4402CA908ADC9A3DB92A* __this, const RuntimeMethod* method) 
{
	{
		// public TabType Type => type;
		int32_t L_0 = __this->___type_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductData_get_UniqueId_m85902C986CFB27C86ED418E68F160FDB5FB5AA38_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId => uniqueId;
		String_t* L_0 = __this->___uniqueId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductData_get_TabId_m446AFCD33D0779EAB1DDDE2A8A4D5232BE8C3C46_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public int TabId => tabId;
		int32_t L_0 = __this->___tabId_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProductDelegate_Invoke_m960CCE803D018231D57DCE5098D18B13FDF779A5_inline (ProductDelegate_t6829868103D62A1BABB6372829082B969F1927D7* __this, int32_t ___0_tab, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* ___1_product, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, ProductData_t9DFCF708A233671E57D85C46E606139BF1035670*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_tab, ___1_product, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductData_get_PurchType_mB7CD04164350C7C324F8F79F60394C6066F68043_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public PurchaseType PurchType => purchaseType;
		int32_t L_0 = __this->___purchaseType_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductData_get_Currency_m148CA4D6284AABC3B4CF39C3642111564BCEB8EB_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public Currency.Type Currency => currency;
		int32_t L_0 = __this->___currency_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductData_get_Cost_m818AD35CB7554245B5C40D400CA046043F5095D6_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public int Cost => cost;
		int32_t L_0 = __this->___cost_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProductData_get_Prefab_m28BEAC9E1B87BE48D23FCA84FF1F3B603C45C0DF_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Prefab => prefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___prefab_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProductData_get_IsDummy_mA388F5BCA180FCD734DC1C5A62A8DF8C9DED501B_inline (ProductData_t9DFCF708A233671E57D85C46E606139BF1035670* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDummy => isDummy;
		bool L_0 = __this->___isDummy_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* StorePreview3D_get_Texture_mCBEB7D80C35B7F607DF2CA68D4578828DDC60814_inline (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) 
{
	{
		// public RenderTexture Texture { get; protected set; }
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CTextureU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StorePreview3D_get_Prefab_m21BCD2739A90CD317329C21825ADBFE9D1FFD29D_inline (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Prefab { get; protected set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CPrefabU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorePreview3D_set_Prefab_mE082337E2328A1645CB01909AC6DA328A8204E6C_inline (StorePreview3D_t0D1E17DC4A60DC61EBD74EE86E229E93C9A076D0* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject Prefab { get; protected set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CPrefabU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrefabU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
