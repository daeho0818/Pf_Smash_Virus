#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<Bullet>
struct List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Queue`1<Bullet>
struct Queue_1_tB0CF570645E4C09D63B903CFB75E2CDA12446FB7;
// Bullet[]
struct BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Entity[]
struct EntityU5BU5D_t60CAC6CD351FE4F7C3FD4828254E112561CC70CA;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Boss_1
struct Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9;
// Boss_2
struct Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C;
// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724;
// BulletPool
struct BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Entity
struct Entity_t044863A7B37E4AD27CE78D4B680109A139080095;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// Red
struct Red_t4514CC3842C0B22939E67E1BBA3BF65C4EFF4994;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// System.String
struct String_t;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// TextSliderController
struct TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// White
struct White_tD68868B08F4B81795F36FFCBC95955395405BA65;
// Boss_1/Attack1State
struct Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE;
// Boss_1/Attack2State
struct Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F;
// Boss_1/BossState
struct BossState_tBE3FB57E26ECF86610F56DF0BEDD8E81889C5C0F;
// Boss_1/SpawnState
struct SpawnState_t44B6FCE08F253FBC72FEA5436783BD811A4F3C35;
// Boss_1/WaitState
struct WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33;
// Boss_2/Attack1State
struct Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D;
// Boss_2/Attack2State
struct Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26;
// Boss_2/Attack3State
struct Attack3State_t4A5E5D5722F41E325E6D453EDD3A792F904D09F7;
// Boss_2/Attack4State
struct Attack4State_tCD178697569A85CA88204D05D08B8D21EE255C68;
// Boss_2/BossState
struct BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F;
// Boss_2/SpawnState
struct SpawnState_tCA3451EE8F09804E2FDED2F7499067EE6231CF39;
// Boss_2/WaitState
struct WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B;
// Boss_1/SpawnState/<Action>d__0
struct U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2;
// Boss_1/WaitState/<Action>d__3
struct U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943;
// Boss_2/Attack1State/<Action>d__1
struct U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225;
// Boss_2/Attack2State/<Action>d__2
struct U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87;
// Boss_2/Attack3State/<Action>d__0
struct U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8;
// Boss_2/Attack4State/<Action>d__0
struct U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD;
// Boss_2/SpawnState/<Action>d__0
struct U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A;
// Boss_2/WaitState/<Action>d__3
struct U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE;

IL2CPP_EXTERN_C RuntimeClass* Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Attack3State_t4A5E5D5722F41E325E6D453EDD3A792F904D09F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Attack4State_tCD178697569A85CA88204D05D08B8D21EE255C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BossState_tBE3FB57E26ECF86610F56DF0BEDD8E81889C5C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnState_t44B6FCE08F253FBC72FEA5436783BD811A4F3C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnState_tCA3451EE8F09804E2FDED2F7499067EE6231CF39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5A88052E7D2B2EDD7B6A11C2AAC7815BE3773F28;
IL2CPP_EXTERN_C String_t* _stringLiteral64EF74170130F287495B789FE964687E260AAEAB;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DA1113CF54665F267F78D8220A22C7F0181376;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m47D0BE93F760A0464617056A02D40AD7B0549F40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC382EFD983382502409C3591665BD9C889DF801C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1CB31E5ADD73288CCD810D6E31230158697F5208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m01115EB1B7130F8888964E7C92829019A3CD5CD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m03D5F6DDE0839316D609550CA36D89BC2F0AA5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m213446F6CBE53336555D495A3088952A2B677D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_mFF4674AAA94C44DBC399096A2FE3B23808262283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionU3Ed__1_System_Collections_IEnumerator_Reset_mEB70A3817026A753C326A3A4FE12DCBC95DB7B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionU3Ed__2_System_Collections_IEnumerator_Reset_m1072E520E6158C87A6ED2C9E22EE141E8BC07511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionU3Ed__3_System_Collections_IEnumerator_Reset_m2498F3FF8ECF69E2D8D8E1256A85E8E4E176900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionU3Ed__3_System_Collections_IEnumerator_Reset_mCEC89724ABAFC1917201E04A250A04460B1828D8_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<Bullet>
struct List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70, ____items_1)); }
	inline BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335* get__items_1() const { return ____items_1; }
	inline BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70_StaticFields, ____emptyArray_5)); }
	inline BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BulletU5BU5D_tF09C99FCF1F2624525FADBECA3401F71A78C8335* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Boss_1/Attack1State
struct Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Bullet> Boss_1/Attack1State::bullets
	List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * ___bullets_0;

public:
	inline static int32_t get_offset_of_bullets_0() { return static_cast<int32_t>(offsetof(Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE, ___bullets_0)); }
	inline List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * get_bullets_0() const { return ___bullets_0; }
	inline List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 ** get_address_of_bullets_0() { return &___bullets_0; }
	inline void set_bullets_0(List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * value)
	{
		___bullets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullets_0), (void*)value);
	}
};


// Boss_1/Attack2State
struct Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F  : public RuntimeObject
{
public:
	// Player Boss_1/Attack2State::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_0;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F, ___player_0)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_0() const { return ___player_0; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_0), (void*)value);
	}
};


// Boss_1/SpawnState
struct SpawnState_t44B6FCE08F253FBC72FEA5436783BD811A4F3C35  : public RuntimeObject
{
public:

public:
};


// Boss_1/WaitState
struct WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33  : public RuntimeObject
{
public:
	// System.Single Boss_1/WaitState::wait_time
	float ___wait_time_0;
	// System.Int32 Boss_1/WaitState::pattern_index
	int32_t ___pattern_index_1;

public:
	inline static int32_t get_offset_of_wait_time_0() { return static_cast<int32_t>(offsetof(WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33, ___wait_time_0)); }
	inline float get_wait_time_0() const { return ___wait_time_0; }
	inline float* get_address_of_wait_time_0() { return &___wait_time_0; }
	inline void set_wait_time_0(float value)
	{
		___wait_time_0 = value;
	}

	inline static int32_t get_offset_of_pattern_index_1() { return static_cast<int32_t>(offsetof(WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33, ___pattern_index_1)); }
	inline int32_t get_pattern_index_1() const { return ___pattern_index_1; }
	inline int32_t* get_address_of_pattern_index_1() { return &___pattern_index_1; }
	inline void set_pattern_index_1(int32_t value)
	{
		___pattern_index_1 = value;
	}
};


// Boss_2/Attack1State
struct Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Bullet> Boss_2/Attack1State::bullets
	List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * ___bullets_0;

public:
	inline static int32_t get_offset_of_bullets_0() { return static_cast<int32_t>(offsetof(Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D, ___bullets_0)); }
	inline List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * get_bullets_0() const { return ___bullets_0; }
	inline List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 ** get_address_of_bullets_0() { return &___bullets_0; }
	inline void set_bullets_0(List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * value)
	{
		___bullets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullets_0), (void*)value);
	}
};


// Boss_2/Attack2State
struct Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26  : public RuntimeObject
{
public:
	// Player Boss_2/Attack2State::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_0;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26, ___player_0)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_0() const { return ___player_0; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_0), (void*)value);
	}
};


// Boss_2/Attack3State
struct Attack3State_t4A5E5D5722F41E325E6D453EDD3A792F904D09F7  : public RuntimeObject
{
public:

public:
};


// Boss_2/Attack4State
struct Attack4State_tCD178697569A85CA88204D05D08B8D21EE255C68  : public RuntimeObject
{
public:

public:
};


// Boss_2/SpawnState
struct SpawnState_tCA3451EE8F09804E2FDED2F7499067EE6231CF39  : public RuntimeObject
{
public:

public:
};


// Boss_2/WaitState
struct WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B  : public RuntimeObject
{
public:
	// System.Single Boss_2/WaitState::wait_time
	float ___wait_time_0;
	// System.Int32 Boss_2/WaitState::pattern_index
	int32_t ___pattern_index_1;

public:
	inline static int32_t get_offset_of_wait_time_0() { return static_cast<int32_t>(offsetof(WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B, ___wait_time_0)); }
	inline float get_wait_time_0() const { return ___wait_time_0; }
	inline float* get_address_of_wait_time_0() { return &___wait_time_0; }
	inline void set_wait_time_0(float value)
	{
		___wait_time_0 = value;
	}

	inline static int32_t get_offset_of_pattern_index_1() { return static_cast<int32_t>(offsetof(WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B, ___pattern_index_1)); }
	inline int32_t get_pattern_index_1() const { return ___pattern_index_1; }
	inline int32_t* get_address_of_pattern_index_1() { return &___pattern_index_1; }
	inline void set_pattern_index_1(int32_t value)
	{
		___pattern_index_1 = value;
	}
};


// Boss_1/SpawnState/<Action>d__0
struct U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2  : public RuntimeObject
{
public:
	// System.Int32 Boss_1/SpawnState/<Action>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss_1/SpawnState/<Action>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss_1 Boss_1/SpawnState/<Action>d__0::boss
	Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * ___boss_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_boss_2() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2, ___boss_2)); }
	inline Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * get_boss_2() const { return ___boss_2; }
	inline Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 ** get_address_of_boss_2() { return &___boss_2; }
	inline void set_boss_2(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * value)
	{
		___boss_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_2), (void*)value);
	}
};


// Boss_1/WaitState/<Action>d__3
struct U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943  : public RuntimeObject
{
public:
	// System.Int32 Boss_1/WaitState/<Action>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss_1/WaitState/<Action>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss_1/WaitState Boss_1/WaitState/<Action>d__3::<>4__this
	WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * ___U3CU3E4__this_2;
	// Boss_1 Boss_1/WaitState/<Action>d__3::boss
	Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * ___boss_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943, ___U3CU3E4__this_2)); }
	inline WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_boss_3() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943, ___boss_3)); }
	inline Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * get_boss_3() const { return ___boss_3; }
	inline Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 ** get_address_of_boss_3() { return &___boss_3; }
	inline void set_boss_3(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * value)
	{
		___boss_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_3), (void*)value);
	}
};


// Boss_2/Attack1State/<Action>d__1
struct U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225  : public RuntimeObject
{
public:
	// System.Int32 Boss_2/Attack1State/<Action>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss_2/Attack1State/<Action>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss_2 Boss_2/Attack1State/<Action>d__1::boss
	Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * ___boss_2;
	// Boss_2/Attack1State Boss_2/Attack1State/<Action>d__1::<>4__this
	Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * ___U3CU3E4__this_3;
	// BulletPool Boss_2/Attack1State/<Action>d__1::<pool>5__2
	BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * ___U3CpoolU3E5__2_4;
	// System.Int32 Boss_2/Attack1State/<Action>d__1::<interval>5__3
	int32_t ___U3CintervalU3E5__3_5;
	// System.Int32 Boss_2/Attack1State/<Action>d__1::<count>5__4
	int32_t ___U3CcountU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_boss_2() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225, ___boss_2)); }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * get_boss_2() const { return ___boss_2; }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C ** get_address_of_boss_2() { return &___boss_2; }
	inline void set_boss_2(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * value)
	{
		___boss_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225, ___U3CU3E4__this_3)); }
	inline Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpoolU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225, ___U3CpoolU3E5__2_4)); }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * get_U3CpoolU3E5__2_4() const { return ___U3CpoolU3E5__2_4; }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F ** get_address_of_U3CpoolU3E5__2_4() { return &___U3CpoolU3E5__2_4; }
	inline void set_U3CpoolU3E5__2_4(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * value)
	{
		___U3CpoolU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpoolU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CintervalU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225, ___U3CintervalU3E5__3_5)); }
	inline int32_t get_U3CintervalU3E5__3_5() const { return ___U3CintervalU3E5__3_5; }
	inline int32_t* get_address_of_U3CintervalU3E5__3_5() { return &___U3CintervalU3E5__3_5; }
	inline void set_U3CintervalU3E5__3_5(int32_t value)
	{
		___U3CintervalU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CcountU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225, ___U3CcountU3E5__4_6)); }
	inline int32_t get_U3CcountU3E5__4_6() const { return ___U3CcountU3E5__4_6; }
	inline int32_t* get_address_of_U3CcountU3E5__4_6() { return &___U3CcountU3E5__4_6; }
	inline void set_U3CcountU3E5__4_6(int32_t value)
	{
		___U3CcountU3E5__4_6 = value;
	}
};


// Boss_2/Attack3State/<Action>d__0
struct U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8  : public RuntimeObject
{
public:
	// System.Int32 Boss_2/Attack3State/<Action>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss_2/Attack3State/<Action>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss_2 Boss_2/Attack3State/<Action>d__0::boss
	Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * ___boss_2;
	// BulletPool Boss_2/Attack3State/<Action>d__0::<pool>5__2
	BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * ___U3CpoolU3E5__2_3;
	// System.Int32 Boss_2/Attack3State/<Action>d__0::<i>5__3
	int32_t ___U3CiU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_boss_2() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8, ___boss_2)); }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * get_boss_2() const { return ___boss_2; }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C ** get_address_of_boss_2() { return &___boss_2; }
	inline void set_boss_2(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * value)
	{
		___boss_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpoolU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8, ___U3CpoolU3E5__2_3)); }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * get_U3CpoolU3E5__2_3() const { return ___U3CpoolU3E5__2_3; }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F ** get_address_of_U3CpoolU3E5__2_3() { return &___U3CpoolU3E5__2_3; }
	inline void set_U3CpoolU3E5__2_3(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * value)
	{
		___U3CpoolU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpoolU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}
};


// Boss_2/Attack4State/<Action>d__0
struct U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD  : public RuntimeObject
{
public:
	// System.Int32 Boss_2/Attack4State/<Action>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss_2/Attack4State/<Action>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss_2 Boss_2/Attack4State/<Action>d__0::boss
	Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * ___boss_2;
	// UnityEngine.Vector3[] Boss_2/Attack4State/<Action>d__0::<targets>5__2
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CtargetsU3E5__2_3;
	// BulletPool Boss_2/Attack4State/<Action>d__0::<pool>5__3
	BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * ___U3CpoolU3E5__3_4;
	// System.Single Boss_2/Attack4State/<Action>d__0::<value>5__4
	float ___U3CvalueU3E5__4_5;
	// System.Int32 Boss_2/Attack4State/<Action>d__0::<i>5__5
	int32_t ___U3CiU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_boss_2() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD, ___boss_2)); }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * get_boss_2() const { return ___boss_2; }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C ** get_address_of_boss_2() { return &___boss_2; }
	inline void set_boss_2(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * value)
	{
		___boss_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetsU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD, ___U3CtargetsU3E5__2_3)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CtargetsU3E5__2_3() const { return ___U3CtargetsU3E5__2_3; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CtargetsU3E5__2_3() { return &___U3CtargetsU3E5__2_3; }
	inline void set_U3CtargetsU3E5__2_3(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CtargetsU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetsU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpoolU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD, ___U3CpoolU3E5__3_4)); }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * get_U3CpoolU3E5__3_4() const { return ___U3CpoolU3E5__3_4; }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F ** get_address_of_U3CpoolU3E5__3_4() { return &___U3CpoolU3E5__3_4; }
	inline void set_U3CpoolU3E5__3_4(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * value)
	{
		___U3CpoolU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpoolU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD, ___U3CvalueU3E5__4_5)); }
	inline float get_U3CvalueU3E5__4_5() const { return ___U3CvalueU3E5__4_5; }
	inline float* get_address_of_U3CvalueU3E5__4_5() { return &___U3CvalueU3E5__4_5; }
	inline void set_U3CvalueU3E5__4_5(float value)
	{
		___U3CvalueU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD, ___U3CiU3E5__5_6)); }
	inline int32_t get_U3CiU3E5__5_6() const { return ___U3CiU3E5__5_6; }
	inline int32_t* get_address_of_U3CiU3E5__5_6() { return &___U3CiU3E5__5_6; }
	inline void set_U3CiU3E5__5_6(int32_t value)
	{
		___U3CiU3E5__5_6 = value;
	}
};


// Boss_2/SpawnState/<Action>d__0
struct U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A  : public RuntimeObject
{
public:
	// System.Int32 Boss_2/SpawnState/<Action>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss_2/SpawnState/<Action>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss_2 Boss_2/SpawnState/<Action>d__0::boss
	Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * ___boss_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_boss_2() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A, ___boss_2)); }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * get_boss_2() const { return ___boss_2; }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C ** get_address_of_boss_2() { return &___boss_2; }
	inline void set_boss_2(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * value)
	{
		___boss_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_2), (void*)value);
	}
};


// Boss_2/WaitState/<Action>d__3
struct U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE  : public RuntimeObject
{
public:
	// System.Int32 Boss_2/WaitState/<Action>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss_2/WaitState/<Action>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss_2/WaitState Boss_2/WaitState/<Action>d__3::<>4__this
	WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * ___U3CU3E4__this_2;
	// Boss_2 Boss_2/WaitState/<Action>d__3::boss
	Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * ___boss_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE, ___U3CU3E4__this_2)); }
	inline WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_boss_3() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE, ___boss_3)); }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * get_boss_3() const { return ___boss_3; }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C ** get_address_of_boss_3() { return &___boss_3; }
	inline void set_boss_3(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * value)
	{
		___boss_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Player/BaseStatus
struct BaseStatus_tE7EF60EAD9582B004908726D72595972159C7538 
{
public:
	// System.Single Player/BaseStatus::move_speed
	float ___move_speed_0;
	// System.Single Player/BaseStatus::bullet_speed
	float ___bullet_speed_1;
	// System.Single Player/BaseStatus::fire_interval
	float ___fire_interval_2;

public:
	inline static int32_t get_offset_of_move_speed_0() { return static_cast<int32_t>(offsetof(BaseStatus_tE7EF60EAD9582B004908726D72595972159C7538, ___move_speed_0)); }
	inline float get_move_speed_0() const { return ___move_speed_0; }
	inline float* get_address_of_move_speed_0() { return &___move_speed_0; }
	inline void set_move_speed_0(float value)
	{
		___move_speed_0 = value;
	}

	inline static int32_t get_offset_of_bullet_speed_1() { return static_cast<int32_t>(offsetof(BaseStatus_tE7EF60EAD9582B004908726D72595972159C7538, ___bullet_speed_1)); }
	inline float get_bullet_speed_1() const { return ___bullet_speed_1; }
	inline float* get_address_of_bullet_speed_1() { return &___bullet_speed_1; }
	inline void set_bullet_speed_1(float value)
	{
		___bullet_speed_1 = value;
	}

	inline static int32_t get_offset_of_fire_interval_2() { return static_cast<int32_t>(offsetof(BaseStatus_tE7EF60EAD9582B004908726D72595972159C7538, ___fire_interval_2)); }
	inline float get_fire_interval_2() const { return ___fire_interval_2; }
	inline float* get_address_of_fire_interval_2() { return &___fire_interval_2; }
	inline void set_fire_interval_2(float value)
	{
		___fire_interval_2 = value;
	}
};


// BulletType
struct BulletType_tD15DB716F2C6F452A7B5A5126C50E352A0445D6B 
{
public:
	// System.Int32 BulletType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BulletType_tD15DB716F2C6F452A7B5A5126C50E352A0445D6B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EntityType
struct EntityType_t5F897F876D5559C3790ADCF16B95792A7086E041 
{
public:
	// System.Int32 EntityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EntityType_t5F897F876D5559C3790ADCF16B95792A7086E041, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Player/FormState
struct FormState_t047F32BB5B9A671B80813BA850DA5AF0509FC59A 
{
public:
	// System.Int32 Player/FormState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormState_t047F32BB5B9A671B80813BA850DA5AF0509FC59A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Boss_2/Attack2State/<Action>d__2
struct U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87  : public RuntimeObject
{
public:
	// System.Int32 Boss_2/Attack2State/<Action>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss_2/Attack2State/<Action>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss_2/Attack2State Boss_2/Attack2State/<Action>d__2::<>4__this
	Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * ___U3CU3E4__this_2;
	// Boss_2 Boss_2/Attack2State/<Action>d__2::boss
	Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * ___boss_3;
	// BulletPool Boss_2/Attack2State/<Action>d__2::<pool>5__2
	BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * ___U3CpoolU3E5__2_4;
	// UnityEngine.Vector3 Boss_2/Attack2State/<Action>d__2::<target_position>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Ctarget_positionU3E5__3_5;
	// System.Int32 Boss_2/Attack2State/<Action>d__2::<interval>5__4
	int32_t ___U3CintervalU3E5__4_6;
	// System.Int32 Boss_2/Attack2State/<Action>d__2::<loop>5__5
	int32_t ___U3CloopU3E5__5_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87, ___U3CU3E4__this_2)); }
	inline Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_boss_3() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87, ___boss_3)); }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * get_boss_3() const { return ___boss_3; }
	inline Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C ** get_address_of_boss_3() { return &___boss_3; }
	inline void set_boss_3(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * value)
	{
		___boss_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpoolU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87, ___U3CpoolU3E5__2_4)); }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * get_U3CpoolU3E5__2_4() const { return ___U3CpoolU3E5__2_4; }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F ** get_address_of_U3CpoolU3E5__2_4() { return &___U3CpoolU3E5__2_4; }
	inline void set_U3CpoolU3E5__2_4(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * value)
	{
		___U3CpoolU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpoolU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ctarget_positionU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87, ___U3Ctarget_positionU3E5__3_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Ctarget_positionU3E5__3_5() const { return ___U3Ctarget_positionU3E5__3_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Ctarget_positionU3E5__3_5() { return &___U3Ctarget_positionU3E5__3_5; }
	inline void set_U3Ctarget_positionU3E5__3_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Ctarget_positionU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CintervalU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87, ___U3CintervalU3E5__4_6)); }
	inline int32_t get_U3CintervalU3E5__4_6() const { return ___U3CintervalU3E5__4_6; }
	inline int32_t* get_address_of_U3CintervalU3E5__4_6() { return &___U3CintervalU3E5__4_6; }
	inline void set_U3CintervalU3E5__4_6(int32_t value)
	{
		___U3CintervalU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CloopU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87, ___U3CloopU3E5__5_7)); }
	inline int32_t get_U3CloopU3E5__5_7() const { return ___U3CloopU3E5__5_7; }
	inline int32_t* get_address_of_U3CloopU3E5__5_7() { return &___U3CloopU3E5__5_7; }
	inline void set_U3CloopU3E5__5_7(int32_t value)
	{
		___U3CloopU3E5__5_7 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BulletType Bullet::bullet_type
	int32_t ___bullet_type_4;
	// UnityEngine.Vector3 Bullet::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_5;
	// System.Single Bullet::move_speed
	float ___move_speed_6;
	// System.Single Bullet::damage
	float ___damage_7;
	// UnityEngine.Vector3 Bullet::base_scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___base_scale_8;
	// Bullet Bullet::child
	Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * ___child_9;

public:
	inline static int32_t get_offset_of_bullet_type_4() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___bullet_type_4)); }
	inline int32_t get_bullet_type_4() const { return ___bullet_type_4; }
	inline int32_t* get_address_of_bullet_type_4() { return &___bullet_type_4; }
	inline void set_bullet_type_4(int32_t value)
	{
		___bullet_type_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___direction_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_5() const { return ___direction_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_move_speed_6() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___move_speed_6)); }
	inline float get_move_speed_6() const { return ___move_speed_6; }
	inline float* get_address_of_move_speed_6() { return &___move_speed_6; }
	inline void set_move_speed_6(float value)
	{
		___move_speed_6 = value;
	}

	inline static int32_t get_offset_of_damage_7() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___damage_7)); }
	inline float get_damage_7() const { return ___damage_7; }
	inline float* get_address_of_damage_7() { return &___damage_7; }
	inline void set_damage_7(float value)
	{
		___damage_7 = value;
	}

	inline static int32_t get_offset_of_base_scale_8() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___base_scale_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_base_scale_8() const { return ___base_scale_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_base_scale_8() { return &___base_scale_8; }
	inline void set_base_scale_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___base_scale_8 = value;
	}

	inline static int32_t get_offset_of_child_9() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___child_9)); }
	inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * get_child_9() const { return ___child_9; }
	inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 ** get_address_of_child_9() { return &___child_9; }
	inline void set_child_9(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * value)
	{
		___child_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_9), (void*)value);
	}
};


// BulletPool
struct BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Queue`1<Bullet> BulletPool::bullet_pool
	Queue_1_tB0CF570645E4C09D63B903CFB75E2CDA12446FB7 * ___bullet_pool_5;
	// Bullet BulletPool::bullet_prefab
	Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * ___bullet_prefab_6;
	// UnityEngine.Material BulletPool::player_bullet_mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___player_bullet_mat_7;
	// UnityEngine.Material BulletPool::virus_bullet_mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___virus_bullet_mat_8;

public:
	inline static int32_t get_offset_of_bullet_pool_5() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F, ___bullet_pool_5)); }
	inline Queue_1_tB0CF570645E4C09D63B903CFB75E2CDA12446FB7 * get_bullet_pool_5() const { return ___bullet_pool_5; }
	inline Queue_1_tB0CF570645E4C09D63B903CFB75E2CDA12446FB7 ** get_address_of_bullet_pool_5() { return &___bullet_pool_5; }
	inline void set_bullet_pool_5(Queue_1_tB0CF570645E4C09D63B903CFB75E2CDA12446FB7 * value)
	{
		___bullet_pool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_pool_5), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_prefab_6() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F, ___bullet_prefab_6)); }
	inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * get_bullet_prefab_6() const { return ___bullet_prefab_6; }
	inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 ** get_address_of_bullet_prefab_6() { return &___bullet_prefab_6; }
	inline void set_bullet_prefab_6(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * value)
	{
		___bullet_prefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_prefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_player_bullet_mat_7() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F, ___player_bullet_mat_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_player_bullet_mat_7() const { return ___player_bullet_mat_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_player_bullet_mat_7() { return &___player_bullet_mat_7; }
	inline void set_player_bullet_mat_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___player_bullet_mat_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_bullet_mat_7), (void*)value);
	}

	inline static int32_t get_offset_of_virus_bullet_mat_8() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F, ___virus_bullet_mat_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_virus_bullet_mat_8() const { return ___virus_bullet_mat_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_virus_bullet_mat_8() { return &___virus_bullet_mat_8; }
	inline void set_virus_bullet_mat_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___virus_bullet_mat_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___virus_bullet_mat_8), (void*)value);
	}
};

struct BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_StaticFields
{
public:
	// BulletPool BulletPool::<instance>k__BackingField
	BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * ___U3CinstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_StaticFields, ___U3CinstanceU3Ek__BackingField_4)); }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * get_U3CinstanceU3Ek__BackingField_4() const { return ___U3CinstanceU3Ek__BackingField_4; }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F ** get_address_of_U3CinstanceU3Ek__BackingField_4() { return &___U3CinstanceU3Ek__BackingField_4; }
	inline void set_U3CinstanceU3Ek__BackingField_4(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * value)
	{
		___U3CinstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Entity
struct Entity_t044863A7B37E4AD27CE78D4B680109A139080095  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Entity::score
	int32_t ___score_4;
	// EntityType Entity::entity_type
	int32_t ___entity_type_5;
	// System.Single Entity::max_hp
	float ___max_hp_6;
	// System.Single Entity::hp
	float ___hp_7;
	// System.Single Entity::move_speed
	float ___move_speed_8;
	// System.Single Entity::damage
	float ___damage_9;
	// System.Boolean Entity::invincibility
	bool ___invincibility_10;
	// System.Boolean Entity::move_animation
	bool ___move_animation_11;
	// System.Boolean Entity::is_destroy
	bool ___is_destroy_12;
	// System.Single Entity::check_count
	float ___check_count_13;
	// System.Action Entity::onHit
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onHit_14;
	// System.Action Entity::onDestroy
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onDestroy_15;
	// System.Single Entity::bullet_speed
	float ___bullet_speed_16;
	// System.Single Entity::fire_interval
	float ___fire_interval_17;
	// UnityEngine.Rigidbody Entity::rigid
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigid_18;
	// UnityEngine.Collider Entity::collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_19;
	// UnityEngine.Renderer Entity::renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___renderer_20;
	// UnityEngine.Animator Entity::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_21;
	// UnityEngine.Coroutine Entity::move_anim
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___move_anim_22;

public:
	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}

	inline static int32_t get_offset_of_entity_type_5() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___entity_type_5)); }
	inline int32_t get_entity_type_5() const { return ___entity_type_5; }
	inline int32_t* get_address_of_entity_type_5() { return &___entity_type_5; }
	inline void set_entity_type_5(int32_t value)
	{
		___entity_type_5 = value;
	}

	inline static int32_t get_offset_of_max_hp_6() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___max_hp_6)); }
	inline float get_max_hp_6() const { return ___max_hp_6; }
	inline float* get_address_of_max_hp_6() { return &___max_hp_6; }
	inline void set_max_hp_6(float value)
	{
		___max_hp_6 = value;
	}

	inline static int32_t get_offset_of_hp_7() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___hp_7)); }
	inline float get_hp_7() const { return ___hp_7; }
	inline float* get_address_of_hp_7() { return &___hp_7; }
	inline void set_hp_7(float value)
	{
		___hp_7 = value;
	}

	inline static int32_t get_offset_of_move_speed_8() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___move_speed_8)); }
	inline float get_move_speed_8() const { return ___move_speed_8; }
	inline float* get_address_of_move_speed_8() { return &___move_speed_8; }
	inline void set_move_speed_8(float value)
	{
		___move_speed_8 = value;
	}

	inline static int32_t get_offset_of_damage_9() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___damage_9)); }
	inline float get_damage_9() const { return ___damage_9; }
	inline float* get_address_of_damage_9() { return &___damage_9; }
	inline void set_damage_9(float value)
	{
		___damage_9 = value;
	}

	inline static int32_t get_offset_of_invincibility_10() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___invincibility_10)); }
	inline bool get_invincibility_10() const { return ___invincibility_10; }
	inline bool* get_address_of_invincibility_10() { return &___invincibility_10; }
	inline void set_invincibility_10(bool value)
	{
		___invincibility_10 = value;
	}

	inline static int32_t get_offset_of_move_animation_11() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___move_animation_11)); }
	inline bool get_move_animation_11() const { return ___move_animation_11; }
	inline bool* get_address_of_move_animation_11() { return &___move_animation_11; }
	inline void set_move_animation_11(bool value)
	{
		___move_animation_11 = value;
	}

	inline static int32_t get_offset_of_is_destroy_12() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___is_destroy_12)); }
	inline bool get_is_destroy_12() const { return ___is_destroy_12; }
	inline bool* get_address_of_is_destroy_12() { return &___is_destroy_12; }
	inline void set_is_destroy_12(bool value)
	{
		___is_destroy_12 = value;
	}

	inline static int32_t get_offset_of_check_count_13() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___check_count_13)); }
	inline float get_check_count_13() const { return ___check_count_13; }
	inline float* get_address_of_check_count_13() { return &___check_count_13; }
	inline void set_check_count_13(float value)
	{
		___check_count_13 = value;
	}

	inline static int32_t get_offset_of_onHit_14() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___onHit_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onHit_14() const { return ___onHit_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onHit_14() { return &___onHit_14; }
	inline void set_onHit_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onHit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHit_14), (void*)value);
	}

	inline static int32_t get_offset_of_onDestroy_15() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___onDestroy_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onDestroy_15() const { return ___onDestroy_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onDestroy_15() { return &___onDestroy_15; }
	inline void set_onDestroy_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onDestroy_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDestroy_15), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_speed_16() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___bullet_speed_16)); }
	inline float get_bullet_speed_16() const { return ___bullet_speed_16; }
	inline float* get_address_of_bullet_speed_16() { return &___bullet_speed_16; }
	inline void set_bullet_speed_16(float value)
	{
		___bullet_speed_16 = value;
	}

	inline static int32_t get_offset_of_fire_interval_17() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___fire_interval_17)); }
	inline float get_fire_interval_17() const { return ___fire_interval_17; }
	inline float* get_address_of_fire_interval_17() { return &___fire_interval_17; }
	inline void set_fire_interval_17(float value)
	{
		___fire_interval_17 = value;
	}

	inline static int32_t get_offset_of_rigid_18() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___rigid_18)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigid_18() const { return ___rigid_18; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigid_18() { return &___rigid_18; }
	inline void set_rigid_18(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigid_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_18), (void*)value);
	}

	inline static int32_t get_offset_of_collider_19() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___collider_19)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_collider_19() const { return ___collider_19; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_collider_19() { return &___collider_19; }
	inline void set_collider_19(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___collider_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_19), (void*)value);
	}

	inline static int32_t get_offset_of_renderer_20() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___renderer_20)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_renderer_20() const { return ___renderer_20; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_renderer_20() { return &___renderer_20; }
	inline void set_renderer_20(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___renderer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderer_20), (void*)value);
	}

	inline static int32_t get_offset_of_anim_21() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___anim_21)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_21() const { return ___anim_21; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_21() { return &___anim_21; }
	inline void set_anim_21(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_21), (void*)value);
	}

	inline static int32_t get_offset_of_move_anim_22() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___move_anim_22)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_move_anim_22() const { return ___move_anim_22; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_move_anim_22() { return &___move_anim_22; }
	inline void set_move_anim_22(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___move_anim_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___move_anim_22), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GameManager::stage_number
	int32_t ___stage_number_5;
	// System.Int32 GameManager::score
	int32_t ___score_6;
	// TMPro.TextMeshProUGUI[] GameManager::score_texts
	TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC* ___score_texts_7;
	// System.Int32 GameManager::current_score
	int32_t ___current_score_8;
	// UnityEngine.Transform[] GameManager::spawn_points
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___spawn_points_9;
	// UnityEngine.Transform GameManager::stage_text
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___stage_text_10;
	// UnityEngine.Vector3 GameManager::target_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target_position_11;
	// System.Single GameManager::_pain_guage
	float ____pain_guage_12;
	// Entity[] GameManager::virus_prefabs
	EntityU5BU5D_t60CAC6CD351FE4F7C3FD4828254E112561CC70CA* ___virus_prefabs_13;
	// System.Single[] GameManager::virus_spawn_times
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___virus_spawn_times_14;
	// System.Single GameManager::boss_appear_timer
	float ___boss_appear_timer_15;
	// Entity GameManager::boss
	Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * ___boss_16;
	// System.Single GameManager::white_spawn_time
	float ___white_spawn_time_17;
	// System.Single GameManager::red_spawn_time
	float ___red_spawn_time_18;
	// White GameManager::white_prefab
	White_tD68868B08F4B81795F36FFCBC95955395405BA65 * ___white_prefab_19;
	// Red GameManager::red_prefab
	Red_t4514CC3842C0B22939E67E1BBA3BF65C4EFF4994 * ___red_prefab_20;
	// Item GameManager::item_prefab
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item_prefab_21;
	// UnityStandardAssets.Effects.ParticleSystemMultiplier GameManager::explosion_prefab
	ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * ___explosion_prefab_22;
	// SoundManager GameManager::s_manager
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___s_manager_23;
	// Player GameManager::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_24;
	// TextSliderController GameManager::ts_controller
	TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * ___ts_controller_25;
	// UnityEngine.Coroutine GameManager::plus_score
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___plus_score_26;
	// System.Boolean GameManager::boss_spawned
	bool ___boss_spawned_27;
	// System.Single GameManager::boss_check_count
	float ___boss_check_count_28;
	// System.Single GameManager::white_check_count
	float ___white_check_count_29;
	// System.Single GameManager::red_check_count
	float ___red_check_count_30;
	// System.Single[] GameManager::check_counts
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___check_counts_31;

public:
	inline static int32_t get_offset_of_stage_number_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___stage_number_5)); }
	inline int32_t get_stage_number_5() const { return ___stage_number_5; }
	inline int32_t* get_address_of_stage_number_5() { return &___stage_number_5; }
	inline void set_stage_number_5(int32_t value)
	{
		___stage_number_5 = value;
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}

	inline static int32_t get_offset_of_score_texts_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___score_texts_7)); }
	inline TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC* get_score_texts_7() const { return ___score_texts_7; }
	inline TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC** get_address_of_score_texts_7() { return &___score_texts_7; }
	inline void set_score_texts_7(TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC* value)
	{
		___score_texts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_texts_7), (void*)value);
	}

	inline static int32_t get_offset_of_current_score_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___current_score_8)); }
	inline int32_t get_current_score_8() const { return ___current_score_8; }
	inline int32_t* get_address_of_current_score_8() { return &___current_score_8; }
	inline void set_current_score_8(int32_t value)
	{
		___current_score_8 = value;
	}

	inline static int32_t get_offset_of_spawn_points_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___spawn_points_9)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_spawn_points_9() const { return ___spawn_points_9; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_spawn_points_9() { return &___spawn_points_9; }
	inline void set_spawn_points_9(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___spawn_points_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawn_points_9), (void*)value);
	}

	inline static int32_t get_offset_of_stage_text_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___stage_text_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_stage_text_10() const { return ___stage_text_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_stage_text_10() { return &___stage_text_10; }
	inline void set_stage_text_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___stage_text_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stage_text_10), (void*)value);
	}

	inline static int32_t get_offset_of_target_position_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___target_position_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_target_position_11() const { return ___target_position_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_target_position_11() { return &___target_position_11; }
	inline void set_target_position_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___target_position_11 = value;
	}

	inline static int32_t get_offset_of__pain_guage_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____pain_guage_12)); }
	inline float get__pain_guage_12() const { return ____pain_guage_12; }
	inline float* get_address_of__pain_guage_12() { return &____pain_guage_12; }
	inline void set__pain_guage_12(float value)
	{
		____pain_guage_12 = value;
	}

	inline static int32_t get_offset_of_virus_prefabs_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___virus_prefabs_13)); }
	inline EntityU5BU5D_t60CAC6CD351FE4F7C3FD4828254E112561CC70CA* get_virus_prefabs_13() const { return ___virus_prefabs_13; }
	inline EntityU5BU5D_t60CAC6CD351FE4F7C3FD4828254E112561CC70CA** get_address_of_virus_prefabs_13() { return &___virus_prefabs_13; }
	inline void set_virus_prefabs_13(EntityU5BU5D_t60CAC6CD351FE4F7C3FD4828254E112561CC70CA* value)
	{
		___virus_prefabs_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___virus_prefabs_13), (void*)value);
	}

	inline static int32_t get_offset_of_virus_spawn_times_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___virus_spawn_times_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_virus_spawn_times_14() const { return ___virus_spawn_times_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_virus_spawn_times_14() { return &___virus_spawn_times_14; }
	inline void set_virus_spawn_times_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___virus_spawn_times_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___virus_spawn_times_14), (void*)value);
	}

	inline static int32_t get_offset_of_boss_appear_timer_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___boss_appear_timer_15)); }
	inline float get_boss_appear_timer_15() const { return ___boss_appear_timer_15; }
	inline float* get_address_of_boss_appear_timer_15() { return &___boss_appear_timer_15; }
	inline void set_boss_appear_timer_15(float value)
	{
		___boss_appear_timer_15 = value;
	}

	inline static int32_t get_offset_of_boss_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___boss_16)); }
	inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * get_boss_16() const { return ___boss_16; }
	inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 ** get_address_of_boss_16() { return &___boss_16; }
	inline void set_boss_16(Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * value)
	{
		___boss_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_16), (void*)value);
	}

	inline static int32_t get_offset_of_white_spawn_time_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___white_spawn_time_17)); }
	inline float get_white_spawn_time_17() const { return ___white_spawn_time_17; }
	inline float* get_address_of_white_spawn_time_17() { return &___white_spawn_time_17; }
	inline void set_white_spawn_time_17(float value)
	{
		___white_spawn_time_17 = value;
	}

	inline static int32_t get_offset_of_red_spawn_time_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___red_spawn_time_18)); }
	inline float get_red_spawn_time_18() const { return ___red_spawn_time_18; }
	inline float* get_address_of_red_spawn_time_18() { return &___red_spawn_time_18; }
	inline void set_red_spawn_time_18(float value)
	{
		___red_spawn_time_18 = value;
	}

	inline static int32_t get_offset_of_white_prefab_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___white_prefab_19)); }
	inline White_tD68868B08F4B81795F36FFCBC95955395405BA65 * get_white_prefab_19() const { return ___white_prefab_19; }
	inline White_tD68868B08F4B81795F36FFCBC95955395405BA65 ** get_address_of_white_prefab_19() { return &___white_prefab_19; }
	inline void set_white_prefab_19(White_tD68868B08F4B81795F36FFCBC95955395405BA65 * value)
	{
		___white_prefab_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___white_prefab_19), (void*)value);
	}

	inline static int32_t get_offset_of_red_prefab_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___red_prefab_20)); }
	inline Red_t4514CC3842C0B22939E67E1BBA3BF65C4EFF4994 * get_red_prefab_20() const { return ___red_prefab_20; }
	inline Red_t4514CC3842C0B22939E67E1BBA3BF65C4EFF4994 ** get_address_of_red_prefab_20() { return &___red_prefab_20; }
	inline void set_red_prefab_20(Red_t4514CC3842C0B22939E67E1BBA3BF65C4EFF4994 * value)
	{
		___red_prefab_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___red_prefab_20), (void*)value);
	}

	inline static int32_t get_offset_of_item_prefab_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___item_prefab_21)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_item_prefab_21() const { return ___item_prefab_21; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_item_prefab_21() { return &___item_prefab_21; }
	inline void set_item_prefab_21(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___item_prefab_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_prefab_21), (void*)value);
	}

	inline static int32_t get_offset_of_explosion_prefab_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___explosion_prefab_22)); }
	inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * get_explosion_prefab_22() const { return ___explosion_prefab_22; }
	inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 ** get_address_of_explosion_prefab_22() { return &___explosion_prefab_22; }
	inline void set_explosion_prefab_22(ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * value)
	{
		___explosion_prefab_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_prefab_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_manager_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___s_manager_23)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_s_manager_23() const { return ___s_manager_23; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_s_manager_23() { return &___s_manager_23; }
	inline void set_s_manager_23(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___s_manager_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_manager_23), (void*)value);
	}

	inline static int32_t get_offset_of_player_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_24)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_24() const { return ___player_24; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_24() { return &___player_24; }
	inline void set_player_24(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_24), (void*)value);
	}

	inline static int32_t get_offset_of_ts_controller_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___ts_controller_25)); }
	inline TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * get_ts_controller_25() const { return ___ts_controller_25; }
	inline TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 ** get_address_of_ts_controller_25() { return &___ts_controller_25; }
	inline void set_ts_controller_25(TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * value)
	{
		___ts_controller_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ts_controller_25), (void*)value);
	}

	inline static int32_t get_offset_of_plus_score_26() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___plus_score_26)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_plus_score_26() const { return ___plus_score_26; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_plus_score_26() { return &___plus_score_26; }
	inline void set_plus_score_26(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___plus_score_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plus_score_26), (void*)value);
	}

	inline static int32_t get_offset_of_boss_spawned_27() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___boss_spawned_27)); }
	inline bool get_boss_spawned_27() const { return ___boss_spawned_27; }
	inline bool* get_address_of_boss_spawned_27() { return &___boss_spawned_27; }
	inline void set_boss_spawned_27(bool value)
	{
		___boss_spawned_27 = value;
	}

	inline static int32_t get_offset_of_boss_check_count_28() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___boss_check_count_28)); }
	inline float get_boss_check_count_28() const { return ___boss_check_count_28; }
	inline float* get_address_of_boss_check_count_28() { return &___boss_check_count_28; }
	inline void set_boss_check_count_28(float value)
	{
		___boss_check_count_28 = value;
	}

	inline static int32_t get_offset_of_white_check_count_29() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___white_check_count_29)); }
	inline float get_white_check_count_29() const { return ___white_check_count_29; }
	inline float* get_address_of_white_check_count_29() { return &___white_check_count_29; }
	inline void set_white_check_count_29(float value)
	{
		___white_check_count_29 = value;
	}

	inline static int32_t get_offset_of_red_check_count_30() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___red_check_count_30)); }
	inline float get_red_check_count_30() const { return ___red_check_count_30; }
	inline float* get_address_of_red_check_count_30() { return &___red_check_count_30; }
	inline void set_red_check_count_30(float value)
	{
		___red_check_count_30 = value;
	}

	inline static int32_t get_offset_of_check_counts_31() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___check_counts_31)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_check_counts_31() const { return ___check_counts_31; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_check_counts_31() { return &___check_counts_31; }
	inline void set_check_counts_31(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___check_counts_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___check_counts_31), (void*)value);
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::<instance>k__BackingField
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CinstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___U3CinstanceU3Ek__BackingField_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CinstanceU3Ek__BackingField_4() const { return ___U3CinstanceU3Ek__BackingField_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CinstanceU3Ek__BackingField_4() { return &___U3CinstanceU3Ek__BackingField_4; }
	inline void set_U3CinstanceU3Ek__BackingField_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CinstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Boss_1
struct Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9  : public Entity_t044863A7B37E4AD27CE78D4B680109A139080095
{
public:
	// UnityEngine.GameObject Boss_1::hp_slider
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hp_slider_23;
	// TextSliderController Boss_1::ts_controller
	TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * ___ts_controller_24;
	// Boss_1/BossState Boss_1::boss_state
	RuntimeObject* ___boss_state_25;
	// Player Boss_1::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_26;
	// TMPro.TextMeshPro Boss_1::text
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___text_28;
	// UnityEngine.Coroutine Boss_1::set_text
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___set_text_29;
	// UnityEngine.Coroutine Boss_1::_action
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____action_30;

public:
	inline static int32_t get_offset_of_hp_slider_23() { return static_cast<int32_t>(offsetof(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9, ___hp_slider_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hp_slider_23() const { return ___hp_slider_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hp_slider_23() { return &___hp_slider_23; }
	inline void set_hp_slider_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hp_slider_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hp_slider_23), (void*)value);
	}

	inline static int32_t get_offset_of_ts_controller_24() { return static_cast<int32_t>(offsetof(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9, ___ts_controller_24)); }
	inline TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * get_ts_controller_24() const { return ___ts_controller_24; }
	inline TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 ** get_address_of_ts_controller_24() { return &___ts_controller_24; }
	inline void set_ts_controller_24(TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * value)
	{
		___ts_controller_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ts_controller_24), (void*)value);
	}

	inline static int32_t get_offset_of_boss_state_25() { return static_cast<int32_t>(offsetof(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9, ___boss_state_25)); }
	inline RuntimeObject* get_boss_state_25() const { return ___boss_state_25; }
	inline RuntimeObject** get_address_of_boss_state_25() { return &___boss_state_25; }
	inline void set_boss_state_25(RuntimeObject* value)
	{
		___boss_state_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_state_25), (void*)value);
	}

	inline static int32_t get_offset_of_player_26() { return static_cast<int32_t>(offsetof(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9, ___player_26)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_26() const { return ___player_26; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_26() { return &___player_26; }
	inline void set_player_26(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_26), (void*)value);
	}

	inline static int32_t get_offset_of_text_28() { return static_cast<int32_t>(offsetof(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9, ___text_28)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_text_28() const { return ___text_28; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_text_28() { return &___text_28; }
	inline void set_text_28(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___text_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_28), (void*)value);
	}

	inline static int32_t get_offset_of_set_text_29() { return static_cast<int32_t>(offsetof(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9, ___set_text_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_set_text_29() const { return ___set_text_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_set_text_29() { return &___set_text_29; }
	inline void set_set_text_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___set_text_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___set_text_29), (void*)value);
	}

	inline static int32_t get_offset_of__action_30() { return static_cast<int32_t>(offsetof(Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9, ____action_30)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__action_30() const { return ____action_30; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__action_30() { return &____action_30; }
	inline void set__action_30(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____action_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____action_30), (void*)value);
	}
};


// Boss_2
struct Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C  : public Entity_t044863A7B37E4AD27CE78D4B680109A139080095
{
public:
	// UnityEngine.GameObject Boss_2::hp_slider
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hp_slider_23;
	// TextSliderController Boss_2::ts_controller
	TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * ___ts_controller_24;
	// Boss_2/BossState Boss_2::boss_state
	RuntimeObject* ___boss_state_25;
	// Player Boss_2::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_26;
	// TMPro.TextMeshPro Boss_2::text
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___text_28;
	// UnityEngine.Coroutine Boss_2::set_text
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___set_text_29;
	// UnityEngine.Coroutine Boss_2::_action
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____action_30;

public:
	inline static int32_t get_offset_of_hp_slider_23() { return static_cast<int32_t>(offsetof(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C, ___hp_slider_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hp_slider_23() const { return ___hp_slider_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hp_slider_23() { return &___hp_slider_23; }
	inline void set_hp_slider_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hp_slider_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hp_slider_23), (void*)value);
	}

	inline static int32_t get_offset_of_ts_controller_24() { return static_cast<int32_t>(offsetof(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C, ___ts_controller_24)); }
	inline TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * get_ts_controller_24() const { return ___ts_controller_24; }
	inline TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 ** get_address_of_ts_controller_24() { return &___ts_controller_24; }
	inline void set_ts_controller_24(TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * value)
	{
		___ts_controller_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ts_controller_24), (void*)value);
	}

	inline static int32_t get_offset_of_boss_state_25() { return static_cast<int32_t>(offsetof(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C, ___boss_state_25)); }
	inline RuntimeObject* get_boss_state_25() const { return ___boss_state_25; }
	inline RuntimeObject** get_address_of_boss_state_25() { return &___boss_state_25; }
	inline void set_boss_state_25(RuntimeObject* value)
	{
		___boss_state_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boss_state_25), (void*)value);
	}

	inline static int32_t get_offset_of_player_26() { return static_cast<int32_t>(offsetof(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C, ___player_26)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_26() const { return ___player_26; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_26() { return &___player_26; }
	inline void set_player_26(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_26), (void*)value);
	}

	inline static int32_t get_offset_of_text_28() { return static_cast<int32_t>(offsetof(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C, ___text_28)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_text_28() const { return ___text_28; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_text_28() { return &___text_28; }
	inline void set_text_28(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___text_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_28), (void*)value);
	}

	inline static int32_t get_offset_of_set_text_29() { return static_cast<int32_t>(offsetof(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C, ___set_text_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_set_text_29() const { return ___set_text_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_set_text_29() { return &___set_text_29; }
	inline void set_set_text_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___set_text_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___set_text_29), (void*)value);
	}

	inline static int32_t get_offset_of__action_30() { return static_cast<int32_t>(offsetof(Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C, ____action_30)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__action_30() const { return ____action_30; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__action_30() { return &____action_30; }
	inline void set__action_30(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____action_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____action_30), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public Entity_t044863A7B37E4AD27CE78D4B680109A139080095
{
public:
	// Player/FormState Player::_form_state
	int32_t ____form_state_23;
	// UnityEngine.Transform[] Player::battle_fire_positions
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___battle_fire_positions_24;
	// UnityEngine.Transform[] Player::fast_fire_positions
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___fast_fire_positions_25;
	// UnityEngine.MeshRenderer Player::shield_renderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___shield_renderer_26;
	// UnityEngine.ParticleSystem Player::fire_upgrade_prefab
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___fire_upgrade_prefab_27;
	// UnityEngine.ParticleSystem Player::hp_plus_prefab
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___hp_plus_prefab_28;
	// System.Single Player::battle_speed
	float ___battle_speed_29;
	// System.Single Player::fast_speed
	float ___fast_speed_30;
	// System.Int32 Player::attack_rank
	int32_t ___attack_rank_31;
	// System.Int32 Player::move_index
	int32_t ___move_index_32;
	// UnityEngine.Vector3 Player::target_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target_position_33;
	// UnityEngine.Transform[] Player::bullet_positions
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___bullet_positions_34;
	// TextSliderController Player::ts_controller
	TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * ___ts_controller_35;
	// SoundManager Player::manager
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___manager_36;
	// System.Int32 Player::temp
	int32_t ___temp_37;
	// System.Int32 Player::dir_x
	int32_t ___dir_x_38;
	// UnityEngine.Coroutine Player::c_invincibility
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___c_invincibility_39;
	// Player/BaseStatus Player::base_status
	BaseStatus_tE7EF60EAD9582B004908726D72595972159C7538  ___base_status_40;
	// UnityEngine.Coroutine Player::slow_mode
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___slow_mode_41;

public:
	inline static int32_t get_offset_of__form_state_23() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____form_state_23)); }
	inline int32_t get__form_state_23() const { return ____form_state_23; }
	inline int32_t* get_address_of__form_state_23() { return &____form_state_23; }
	inline void set__form_state_23(int32_t value)
	{
		____form_state_23 = value;
	}

	inline static int32_t get_offset_of_battle_fire_positions_24() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___battle_fire_positions_24)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_battle_fire_positions_24() const { return ___battle_fire_positions_24; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_battle_fire_positions_24() { return &___battle_fire_positions_24; }
	inline void set_battle_fire_positions_24(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___battle_fire_positions_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___battle_fire_positions_24), (void*)value);
	}

	inline static int32_t get_offset_of_fast_fire_positions_25() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___fast_fire_positions_25)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_fast_fire_positions_25() const { return ___fast_fire_positions_25; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_fast_fire_positions_25() { return &___fast_fire_positions_25; }
	inline void set_fast_fire_positions_25(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___fast_fire_positions_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fast_fire_positions_25), (void*)value);
	}

	inline static int32_t get_offset_of_shield_renderer_26() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___shield_renderer_26)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_shield_renderer_26() const { return ___shield_renderer_26; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_shield_renderer_26() { return &___shield_renderer_26; }
	inline void set_shield_renderer_26(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___shield_renderer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shield_renderer_26), (void*)value);
	}

	inline static int32_t get_offset_of_fire_upgrade_prefab_27() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___fire_upgrade_prefab_27)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_fire_upgrade_prefab_27() const { return ___fire_upgrade_prefab_27; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_fire_upgrade_prefab_27() { return &___fire_upgrade_prefab_27; }
	inline void set_fire_upgrade_prefab_27(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___fire_upgrade_prefab_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fire_upgrade_prefab_27), (void*)value);
	}

	inline static int32_t get_offset_of_hp_plus_prefab_28() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___hp_plus_prefab_28)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_hp_plus_prefab_28() const { return ___hp_plus_prefab_28; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_hp_plus_prefab_28() { return &___hp_plus_prefab_28; }
	inline void set_hp_plus_prefab_28(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___hp_plus_prefab_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hp_plus_prefab_28), (void*)value);
	}

	inline static int32_t get_offset_of_battle_speed_29() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___battle_speed_29)); }
	inline float get_battle_speed_29() const { return ___battle_speed_29; }
	inline float* get_address_of_battle_speed_29() { return &___battle_speed_29; }
	inline void set_battle_speed_29(float value)
	{
		___battle_speed_29 = value;
	}

	inline static int32_t get_offset_of_fast_speed_30() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___fast_speed_30)); }
	inline float get_fast_speed_30() const { return ___fast_speed_30; }
	inline float* get_address_of_fast_speed_30() { return &___fast_speed_30; }
	inline void set_fast_speed_30(float value)
	{
		___fast_speed_30 = value;
	}

	inline static int32_t get_offset_of_attack_rank_31() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___attack_rank_31)); }
	inline int32_t get_attack_rank_31() const { return ___attack_rank_31; }
	inline int32_t* get_address_of_attack_rank_31() { return &___attack_rank_31; }
	inline void set_attack_rank_31(int32_t value)
	{
		___attack_rank_31 = value;
	}

	inline static int32_t get_offset_of_move_index_32() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___move_index_32)); }
	inline int32_t get_move_index_32() const { return ___move_index_32; }
	inline int32_t* get_address_of_move_index_32() { return &___move_index_32; }
	inline void set_move_index_32(int32_t value)
	{
		___move_index_32 = value;
	}

	inline static int32_t get_offset_of_target_position_33() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___target_position_33)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_target_position_33() const { return ___target_position_33; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_target_position_33() { return &___target_position_33; }
	inline void set_target_position_33(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___target_position_33 = value;
	}

	inline static int32_t get_offset_of_bullet_positions_34() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___bullet_positions_34)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_bullet_positions_34() const { return ___bullet_positions_34; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_bullet_positions_34() { return &___bullet_positions_34; }
	inline void set_bullet_positions_34(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___bullet_positions_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_positions_34), (void*)value);
	}

	inline static int32_t get_offset_of_ts_controller_35() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___ts_controller_35)); }
	inline TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * get_ts_controller_35() const { return ___ts_controller_35; }
	inline TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 ** get_address_of_ts_controller_35() { return &___ts_controller_35; }
	inline void set_ts_controller_35(TextSliderController_t526C878BB75EC3319FF4EFC146DCA8D0B1FA5E13 * value)
	{
		___ts_controller_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ts_controller_35), (void*)value);
	}

	inline static int32_t get_offset_of_manager_36() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___manager_36)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_manager_36() const { return ___manager_36; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_manager_36() { return &___manager_36; }
	inline void set_manager_36(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___manager_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_36), (void*)value);
	}

	inline static int32_t get_offset_of_temp_37() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___temp_37)); }
	inline int32_t get_temp_37() const { return ___temp_37; }
	inline int32_t* get_address_of_temp_37() { return &___temp_37; }
	inline void set_temp_37(int32_t value)
	{
		___temp_37 = value;
	}

	inline static int32_t get_offset_of_dir_x_38() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___dir_x_38)); }
	inline int32_t get_dir_x_38() const { return ___dir_x_38; }
	inline int32_t* get_address_of_dir_x_38() { return &___dir_x_38; }
	inline void set_dir_x_38(int32_t value)
	{
		___dir_x_38 = value;
	}

	inline static int32_t get_offset_of_c_invincibility_39() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___c_invincibility_39)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_c_invincibility_39() const { return ___c_invincibility_39; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_c_invincibility_39() { return &___c_invincibility_39; }
	inline void set_c_invincibility_39(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___c_invincibility_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_invincibility_39), (void*)value);
	}

	inline static int32_t get_offset_of_base_status_40() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___base_status_40)); }
	inline BaseStatus_tE7EF60EAD9582B004908726D72595972159C7538  get_base_status_40() const { return ___base_status_40; }
	inline BaseStatus_tE7EF60EAD9582B004908726D72595972159C7538 * get_address_of_base_status_40() { return &___base_status_40; }
	inline void set_base_status_40(BaseStatus_tE7EF60EAD9582B004908726D72595972159C7538  value)
	{
		___base_status_40 = value;
	}

	inline static int32_t get_offset_of_slow_mode_41() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___slow_mode_41)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_slow_mode_41() const { return ___slow_mode_41; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_slow_mode_41() { return &___slow_mode_41; }
	inline void set_slow_mode_41(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___slow_mode_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slow_mode_41), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// GameManager GameManager::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameManager_Get_m070203A84AD488FCC6EF9FCB51B411262D08686A (const RuntimeMethod* method);
// System.Void Boss_1::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_1_SetText_m00DA1004A1EAEF98592D68DF0E6520952B1DCC1A (Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * __this, String_t* ___str0, const RuntimeMethod* method);
// Entity GameManager::CreateVirus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * GameManager_CreateVirus_m965F64D342BD0B524C25CCB513FC24D11A4AFD65 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Boss_1/WaitState::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitState__ctor_m2EF7B2129A97EBD983FBEC72F7F82CD55B901A40 (WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * __this, float ___wait0, int32_t ___pattern1, const RuntimeMethod* method);
// System.Void Boss_1::Action(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_1_Action_mBF89C5E87B63F71574F1ACE25C3B5FA9DDF78DC3 (Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * __this, RuntimeObject* ___action0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Boss_1/Attack1State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack1State__ctor_m57750B065D41272FE61F76BB1B4355F84BCB31DE (Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE * __this, const RuntimeMethod* method);
// System.Void Boss_1/Attack2State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack2State__ctor_m4268208DFF6B560F2341926BFF066834A5C1B3C6 (Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F * __this, const RuntimeMethod* method);
// System.Void Boss_1/SpawnState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnState__ctor_m231A57855C0671761AEE7506D6C59FB87CE84820 (SpawnState_t44B6FCE08F253FBC72FEA5436783BD811A4F3C35 * __this, const RuntimeMethod* method);
// BulletPool BulletPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * BulletPool_Get_m6DFD008541C37E0C8F62A09F9246947887AC08BA (const RuntimeMethod* method);
// System.Void Boss_2::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_2_SetText_m5745CCF5EFD8E16FFC772F6F22D63AEAA5836F2B (Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// Bullet BulletPool::GetBullet(UnityEngine.Vector3,BulletType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * BulletPool_GetBullet_mA58426B76061B69207036A8BEB78A8D2CAEE9298 (BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, int32_t ___bullet_type1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Bullet>::Add(!0)
inline void List_1_Add_m47D0BE93F760A0464617056A02D40AD7B0549F40 (List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * __this, Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 *, Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<Bullet>::get_Item(System.Int32)
inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline (List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * (*) (List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Bullet>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC382EFD983382502409C3591665BD9C889DF801C (List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Bullet>::get_Count()
inline int32_t List_1_get_Count_m1CB31E5ADD73288CCD810D6E31230158697F5208_inline (List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Boss_2/WaitState::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitState__ctor_m4F6FCCBA352BEA889B19BA5336F314BEBB172E1B (WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * __this, float ___wait0, int32_t ___pattern1, const RuntimeMethod* method);
// System.Void Boss_2::Action(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B (Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * __this, RuntimeObject* ___action0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Boss_2/Attack1State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack1State__ctor_mB85B2ABAF0EC1C858999FB4ED8439A08D7CDC890 (Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * __this, const RuntimeMethod* method);
// System.Void Boss_2/Attack2State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack2State__ctor_mD9909F9E3AD4E13904B9BFD083729D6D3D863A60 (Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * __this, const RuntimeMethod* method);
// System.Void Boss_2/Attack3State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack3State__ctor_m48BBA97985714E4FB248BE772AF8109FEC096D28 (Attack3State_t4A5E5D5722F41E325E6D453EDD3A792F904D09F7 * __this, const RuntimeMethod* method);
// System.Void Boss_2/Attack4State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack4State__ctor_m84BA91DDD3098E8C669AB8733C1B0AE9599C9B97 (Attack4State_tCD178697569A85CA88204D05D08B8D21EE255C68 * __this, const RuntimeMethod* method);
// System.Void Boss_2/SpawnState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnState__ctor_m745ADD71BCA5CCFB56674400BBDB7AB78C126FD0 (SpawnState_tCA3451EE8F09804E2FDED2F7499067EE6231CF39 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boss_1/SpawnState/<Action>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0__ctor_mCCBFFFD6DA4B5F7132EE78D8AE3973EDD69A5D11 (U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss_1/SpawnState/<Action>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0_System_IDisposable_Dispose_m2E876A8BD147B475C9B7C4F4B68B8570216F4C75 (U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss_1/SpawnState/<Action>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionU3Ed__0_MoveNext_m6F2A50194098E6DDB2706FF129ABE27BAB2B5BB4 (U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossState_tBE3FB57E26ECF86610F56DF0BEDD8E81889C5C0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A88052E7D2B2EDD7B6A11C2AAC7815BE3773F28);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int random = Random.Range(0, 5);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		V_1 = L_3;
		// GameManager manager = GameManager.Get();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4;
		L_4 = GameManager_Get_m070203A84AD488FCC6EF9FCB51B411262D08686A(/*hidden argument*/NULL);
		V_2 = L_4;
		// boss.SetText("I'll CURSE YOU");
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_5 = __this->get_boss_2();
		NullCheck(L_5);
		Boss_1_SetText_m00DA1004A1EAEF98592D68DF0E6520952B1DCC1A(L_5, _stringLiteral5A88052E7D2B2EDD7B6A11C2AAC7815BE3773F28, /*hidden argument*/NULL);
		// for (int i = 0; i < 5; i += 2)
		V_3 = 0;
		goto IL_005b;
	}

IL_0039:
	{
		// virus = manager.CreateVirus(random);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = V_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_8;
		L_8 = GameManager_CreateVirus_m965F64D342BD0B524C25CCB513FC24D11A4AFD65(L_6, L_7, /*hidden argument*/NULL);
		// virus.transform.position = manager.spawn_points[i].position;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = V_2;
		NullCheck(L_10);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = L_10->get_spawn_points_9();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_15, /*hidden argument*/NULL);
		// for (int i = 0; i < 5; i += 2)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)2));
	}

IL_005b:
	{
		// for (int i = 0; i < 5; i += 2)
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0039;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// boss.boss_state = new WaitState(3, 0);
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_18 = __this->get_boss_2();
		WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * L_19 = (WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 *)il2cpp_codegen_object_new(WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33_il2cpp_TypeInfo_var);
		WaitState__ctor_m2EF7B2129A97EBD983FBEC72F7F82CD55B901A40(L_19, (3.0f), 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_boss_state_25(L_19);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_20 = __this->get_boss_2();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_21 = __this->get_boss_2();
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->get_boss_state_25();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_23 = __this->get_boss_2();
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * >::Invoke(0 /* System.Collections.IEnumerator Boss_1/BossState::Action(Boss_1) */, BossState_tBE3FB57E26ECF86610F56DF0BEDD8E81889C5C0F_il2cpp_TypeInfo_var, L_22, L_23);
		NullCheck(L_20);
		Boss_1_Action_mBF89C5E87B63F71574F1ACE25C3B5FA9DDF78DC3(L_20, L_24, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss_1/SpawnState/<Action>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBAAA6493B86D0AD89970DB01131706BCBF5E5E7C (U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss_1/SpawnState/<Action>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m01115EB1B7130F8888964E7C92829019A3CD5CD9 (U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m01115EB1B7130F8888964E7C92829019A3CD5CD9_RuntimeMethod_var)));
	}
}
// System.Object Boss_1/SpawnState/<Action>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__0_System_Collections_IEnumerator_get_Current_m5BD09FD44D9F443106F3AE59E08072F26391BED8 (U3CActionU3Ed__0_t3C5304CA3AA7BFBBA83C2B3D698F9E90CA37D0B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Boss_1/WaitState/<Action>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__3__ctor_m65F678174332B01C34D286CC90E88AFA87895CF7 (U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss_1/WaitState/<Action>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__3_System_IDisposable_Dispose_mCC635833148EF4AAFC2B8E3CF65309E25E5112A3 (U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss_1/WaitState/<Action>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionU3Ed__3_MoveNext_m3BC93EBDCAFA0C4BB8C3DEC956D2D0554E59BA3D (U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossState_tBE3FB57E26ECF86610F56DF0BEDD8E81889C5C0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnState_t44B6FCE08F253FBC72FEA5436783BD811A4F3C35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * L_1 = __this->get_U3CU3E4__this_2();
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
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(wait_time);
		WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_wait_time_0();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// switch (pattern_index)
		WaitState_t68654B41566A75D98B74B9C6DF5D918E1FD10A33 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_pattern_index_1();
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_00c3;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_005d:
	{
		// boss.boss_state = new Attack1State();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_10 = __this->get_boss_3();
		Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE * L_11 = (Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE *)il2cpp_codegen_object_new(Attack1State_t49184CFE9924A217FB71E83D84ADD6419E0A25BE_il2cpp_TypeInfo_var);
		Attack1State__ctor_m57750B065D41272FE61F76BB1B4355F84BCB31DE(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_boss_state_25(L_11);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_12 = __this->get_boss_3();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_13 = __this->get_boss_3();
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->get_boss_state_25();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_15 = __this->get_boss_3();
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * >::Invoke(0 /* System.Collections.IEnumerator Boss_1/BossState::Action(Boss_1) */, BossState_tBE3FB57E26ECF86610F56DF0BEDD8E81889C5C0F_il2cpp_TypeInfo_var, L_14, L_15);
		NullCheck(L_12);
		Boss_1_Action_mBF89C5E87B63F71574F1ACE25C3B5FA9DDF78DC3(L_12, L_16, /*hidden argument*/NULL);
		// break;
		goto IL_00f4;
	}

IL_0090:
	{
		// boss.boss_state = new Attack2State();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_17 = __this->get_boss_3();
		Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F * L_18 = (Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F *)il2cpp_codegen_object_new(Attack2State_t9B7C168BC71B6920BF82B02AB4A50AE684558E1F_il2cpp_TypeInfo_var);
		Attack2State__ctor_m4268208DFF6B560F2341926BFF066834A5C1B3C6(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_boss_state_25(L_18);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_19 = __this->get_boss_3();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_20 = __this->get_boss_3();
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->get_boss_state_25();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_22 = __this->get_boss_3();
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * >::Invoke(0 /* System.Collections.IEnumerator Boss_1/BossState::Action(Boss_1) */, BossState_tBE3FB57E26ECF86610F56DF0BEDD8E81889C5C0F_il2cpp_TypeInfo_var, L_21, L_22);
		NullCheck(L_19);
		Boss_1_Action_mBF89C5E87B63F71574F1ACE25C3B5FA9DDF78DC3(L_19, L_23, /*hidden argument*/NULL);
		// break;
		goto IL_00f4;
	}

IL_00c3:
	{
		// boss.boss_state = new SpawnState();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_24 = __this->get_boss_3();
		SpawnState_t44B6FCE08F253FBC72FEA5436783BD811A4F3C35 * L_25 = (SpawnState_t44B6FCE08F253FBC72FEA5436783BD811A4F3C35 *)il2cpp_codegen_object_new(SpawnState_t44B6FCE08F253FBC72FEA5436783BD811A4F3C35_il2cpp_TypeInfo_var);
		SpawnState__ctor_m231A57855C0671761AEE7506D6C59FB87CE84820(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_boss_state_25(L_25);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_26 = __this->get_boss_3();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_27 = __this->get_boss_3();
		NullCheck(L_27);
		RuntimeObject* L_28 = L_27->get_boss_state_25();
		Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * L_29 = __this->get_boss_3();
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker1< RuntimeObject*, Boss_1_t983B112BE0CCB93A4388C5BFB2B3D638550204A9 * >::Invoke(0 /* System.Collections.IEnumerator Boss_1/BossState::Action(Boss_1) */, BossState_tBE3FB57E26ECF86610F56DF0BEDD8E81889C5C0F_il2cpp_TypeInfo_var, L_28, L_29);
		NullCheck(L_26);
		Boss_1_Action_mBF89C5E87B63F71574F1ACE25C3B5FA9DDF78DC3(L_26, L_30, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// }
		return (bool)0;
	}
}
// System.Object Boss_1/WaitState/<Action>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC1E05B95EBA6594FF3AE48EE94F560A66833B0DB (U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss_1/WaitState/<Action>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__3_System_Collections_IEnumerator_Reset_mCEC89724ABAFC1917201E04A250A04460B1828D8 (U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionU3Ed__3_System_Collections_IEnumerator_Reset_mCEC89724ABAFC1917201E04A250A04460B1828D8_RuntimeMethod_var)));
	}
}
// System.Object Boss_1/WaitState/<Action>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__3_System_Collections_IEnumerator_get_Current_m55813609E2BC119CC69E27F8909CC73254AFBC62 (U3CActionU3Ed__3_t8B9960DCF56AAB1D62DC2B927F55B8909AE23943 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Boss_2/Attack1State/<Action>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__1__ctor_m8BC77D07999500AE5FF0CA58B2D9C2050B723818 (U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss_2/Attack1State/<Action>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__1_System_IDisposable_Dispose_m7985E35CA2E8B771AC50A6BB455A2C3869FBC9E7 (U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss_2/Attack1State/<Action>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionU3Ed__1_MoveNext_m304E2861CA78580720C619913A091E3C9FABB468 (U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m47D0BE93F760A0464617056A02D40AD7B0549F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC382EFD983382502409C3591665BD9C889DF801C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1CB31E5ADD73288CCD810D6E31230158697F5208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EF74170130F287495B789FE964687E260AAEAB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * V_1 = NULL;
	Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0121;
			}
			case 2:
			{
				goto IL_0284;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// BulletPool pool = BulletPool.Get();
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_3;
		L_3 = BulletPool_Get_m6DFD008541C37E0C8F62A09F9246947887AC08BA(/*hidden argument*/NULL);
		__this->set_U3CpoolU3E5__2_4(L_3);
		// int interval = 30;
		__this->set_U3CintervalU3E5__3_5(((int32_t)30));
		// boss.SetText("I HATE YOU");
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_4 = __this->get_boss_2();
		NullCheck(L_4);
		Boss_2_SetText_m5745CCF5EFD8E16FFC772F6F22D63AEAA5836F2B(L_4, _stringLiteral64EF74170130F287495B789FE964687E260AAEAB, /*hidden argument*/NULL);
		// for (int count = 0; count < 3; count++)
		__this->set_U3CcountU3E5__4_6(0);
		goto IL_029d;
	}

IL_0058:
	{
		// int random = Random.Range(0, Random.Range(0, 360));
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)360), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		// for (int i = random; i < random + 360; i += interval)
		int32_t L_7 = V_4;
		V_5 = L_7;
		goto IL_00f9;
	}

IL_0074:
	{
		// direction = new Vector3(Mathf.Cos(i * Mathf.Deg2Rad), 0, Mathf.Sin(i * Mathf.Deg2Rad));
		int32_t L_8 = V_5;
		float L_9;
		L_9 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)L_8)), (float)(0.0174532924f))));
		int32_t L_10 = V_5;
		float L_11;
		L_11 = sinf(((float)il2cpp_codegen_multiply((float)((float)((float)L_10)), (float)(0.0174532924f))));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), L_9, (0.0f), L_11, /*hidden argument*/NULL);
		// bullet = pool.GetBullet(boss.transform.position, BulletType.VIRUS);
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_12 = __this->get_U3CpoolU3E5__2_4();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_13 = __this->get_boss_2();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_16;
		L_16 = BulletPool_GetBullet_mA58426B76061B69207036A8BEB78A8D2CAEE9298(L_12, L_15, 1, /*hidden argument*/NULL);
		V_2 = L_16;
		// bullet.move_speed = boss.bullet_speed;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_17 = V_2;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_18 = __this->get_boss_2();
		NullCheck(L_18);
		float L_19 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_18)->get_bullet_speed_16();
		NullCheck(L_17);
		L_17->set_move_speed_6(L_19);
		// bullet.direction = direction;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_20 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_3;
		NullCheck(L_20);
		L_20->set_direction_5(L_21);
		// bullet.damage = boss.damage;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_22 = V_2;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_23 = __this->get_boss_2();
		NullCheck(L_23);
		float L_24 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_23)->get_damage_9();
		NullCheck(L_22);
		L_22->set_damage_7(L_24);
		// bullets.Add(bullet);
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_25 = V_1;
		NullCheck(L_25);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_26 = L_25->get_bullets_0();
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m47D0BE93F760A0464617056A02D40AD7B0549F40(L_26, L_27, /*hidden argument*/List_1_Add_m47D0BE93F760A0464617056A02D40AD7B0549F40_RuntimeMethod_var);
		// for (int i = random; i < random + 360; i += interval)
		int32_t L_28 = V_5;
		int32_t L_29 = __this->get_U3CintervalU3E5__3_5();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
	}

IL_00f9:
	{
		// for (int i = random; i < random + 360; i += interval)
		int32_t L_30 = V_5;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)((int32_t)360))))))
		{
			goto IL_0074;
		}
	}
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_32 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_32, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_32);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0121:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < bullets.Count;)
		V_6 = 0;
		goto IL_0259;
	}

IL_0130:
	{
		// bullet = pool.GetBullet(bullets[i].transform.position, BulletType.VIRUS);
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_33 = __this->get_U3CpoolU3E5__2_4();
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_34 = V_1;
		NullCheck(L_34);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_35 = L_34->get_bullets_0();
		int32_t L_36 = V_6;
		NullCheck(L_35);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_37;
		L_37 = List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline(L_35, L_36, /*hidden argument*/List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_40;
		L_40 = BulletPool_GetBullet_mA58426B76061B69207036A8BEB78A8D2CAEE9298(L_33, L_39, 1, /*hidden argument*/NULL);
		V_2 = L_40;
		// bullet.direction = (bullets[i].direction - new Vector3(0.5f, 0, 0.5f)).normalized;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_41 = V_2;
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_42 = V_1;
		NullCheck(L_42);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_43 = L_42->get_bullets_0();
		int32_t L_44 = V_6;
		NullCheck(L_43);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_45;
		L_45 = List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = L_45->get_direction_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_47), (0.5f), (0.0f), (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_46, L_47, /*hidden argument*/NULL);
		V_7 = L_48;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		NullCheck(L_41);
		L_41->set_direction_5(L_49);
		// bullet.move_speed = bullets[i].move_speed;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_50 = V_2;
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_51 = V_1;
		NullCheck(L_51);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_52 = L_51->get_bullets_0();
		int32_t L_53 = V_6;
		NullCheck(L_52);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_54;
		L_54 = List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline(L_52, L_53, /*hidden argument*/List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		NullCheck(L_54);
		float L_55 = L_54->get_move_speed_6();
		NullCheck(L_50);
		L_50->set_move_speed_6(L_55);
		// bullet.damage = bullets[i].damage;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_56 = V_2;
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_57 = V_1;
		NullCheck(L_57);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_58 = L_57->get_bullets_0();
		int32_t L_59 = V_6;
		NullCheck(L_58);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_60;
		L_60 = List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline(L_58, L_59, /*hidden argument*/List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		NullCheck(L_60);
		float L_61 = L_60->get_damage_7();
		NullCheck(L_56);
		L_56->set_damage_7(L_61);
		// bullet = pool.GetBullet(bullets[i].transform.position, BulletType.VIRUS);
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_62 = __this->get_U3CpoolU3E5__2_4();
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_63 = V_1;
		NullCheck(L_63);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_64 = L_63->get_bullets_0();
		int32_t L_65 = V_6;
		NullCheck(L_64);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_66;
		L_66 = List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		NullCheck(L_66);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_67, /*hidden argument*/NULL);
		NullCheck(L_62);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_69;
		L_69 = BulletPool_GetBullet_mA58426B76061B69207036A8BEB78A8D2CAEE9298(L_62, L_68, 1, /*hidden argument*/NULL);
		V_2 = L_69;
		// bullet.direction = (bullets[i].direction + new Vector3(0.5f, 0, 0.5f)).normalized;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_70 = V_2;
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_71 = V_1;
		NullCheck(L_71);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_72 = L_71->get_bullets_0();
		int32_t L_73 = V_6;
		NullCheck(L_72);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_74;
		L_74 = List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline(L_72, L_73, /*hidden argument*/List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		NullCheck(L_74);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = L_74->get_direction_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_76), (0.5f), (0.0f), (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_75, L_76, /*hidden argument*/NULL);
		V_7 = L_77;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		NullCheck(L_70);
		L_70->set_direction_5(L_78);
		// bullet.move_speed = bullets[i].move_speed;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_79 = V_2;
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_80 = V_1;
		NullCheck(L_80);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_81 = L_80->get_bullets_0();
		int32_t L_82 = V_6;
		NullCheck(L_81);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_83;
		L_83 = List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline(L_81, L_82, /*hidden argument*/List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		NullCheck(L_83);
		float L_84 = L_83->get_move_speed_6();
		NullCheck(L_79);
		L_79->set_move_speed_6(L_84);
		// bullet.damage = bullets[i].damage;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_85 = V_2;
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_86 = V_1;
		NullCheck(L_86);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_87 = L_86->get_bullets_0();
		int32_t L_88 = V_6;
		NullCheck(L_87);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_89;
		L_89 = List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_inline(L_87, L_88, /*hidden argument*/List_1_get_Item_m944DFAA415BC1813424C8DE5D0533AB9CE2D5298_RuntimeMethod_var);
		NullCheck(L_89);
		float L_90 = L_89->get_damage_7();
		NullCheck(L_85);
		L_85->set_damage_7(L_90);
		// bullets.RemoveAt(i);
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_91 = V_1;
		NullCheck(L_91);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_92 = L_91->get_bullets_0();
		int32_t L_93 = V_6;
		NullCheck(L_92);
		List_1_RemoveAt_mC382EFD983382502409C3591665BD9C889DF801C(L_92, L_93, /*hidden argument*/List_1_RemoveAt_mC382EFD983382502409C3591665BD9C889DF801C_RuntimeMethod_var);
	}

IL_0259:
	{
		// for (int i = 0; i < bullets.Count;)
		int32_t L_94 = V_6;
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_95 = V_1;
		NullCheck(L_95);
		List_1_t8B90CADE694D3EB27DDB40432B3BE606A1ABEE70 * L_96 = L_95->get_bullets_0();
		NullCheck(L_96);
		int32_t L_97;
		L_97 = List_1_get_Count_m1CB31E5ADD73288CCD810D6E31230158697F5208_inline(L_96, /*hidden argument*/List_1_get_Count_m1CB31E5ADD73288CCD810D6E31230158697F5208_RuntimeMethod_var);
		if ((((int32_t)L_94) < ((int32_t)L_97)))
		{
			goto IL_0130;
		}
	}
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_98 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_98, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_98);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0284:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int count = 0; count < 3; count++)
		int32_t L_99 = __this->get_U3CcountU3E5__4_6();
		V_8 = L_99;
		int32_t L_100 = V_8;
		__this->set_U3CcountU3E5__4_6(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1)));
	}

IL_029d:
	{
		// for (int count = 0; count < 3; count++)
		int32_t L_101 = __this->get_U3CcountU3E5__4_6();
		if ((((int32_t)L_101) < ((int32_t)3)))
		{
			goto IL_0058;
		}
	}
	{
		// boss.boss_state = new WaitState(3, 1);
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_102 = __this->get_boss_2();
		WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * L_103 = (WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B *)il2cpp_codegen_object_new(WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		WaitState__ctor_m4F6FCCBA352BEA889B19BA5336F314BEBB172E1B(L_103, (3.0f), 1, /*hidden argument*/NULL);
		NullCheck(L_102);
		L_102->set_boss_state_25(L_103);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_104 = __this->get_boss_2();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_105 = __this->get_boss_2();
		NullCheck(L_105);
		RuntimeObject* L_106 = L_105->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_107 = __this->get_boss_2();
		NullCheck(L_106);
		RuntimeObject* L_108;
		L_108 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_106, L_107);
		NullCheck(L_104);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_104, L_108, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss_2/Attack1State/<Action>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA577A6F84CF65F752AB2FEF3BBAF3E30C0CF4D18 (U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss_2/Attack1State/<Action>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__1_System_Collections_IEnumerator_Reset_mEB70A3817026A753C326A3A4FE12DCBC95DB7B20 (U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionU3Ed__1_System_Collections_IEnumerator_Reset_mEB70A3817026A753C326A3A4FE12DCBC95DB7B20_RuntimeMethod_var)));
	}
}
// System.Object Boss_2/Attack1State/<Action>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__1_System_Collections_IEnumerator_get_Current_mA837388B698327B70DED304E4D736D43A3098216 (U3CActionU3Ed__1_t65FF9D6573666B3CEB02A22BDC2E64E9028BE225 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Boss_2/Attack2State/<Action>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__2__ctor_m528D9F50EEAA2F71C0A1C2855DD1C2ED24E9E73A (U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss_2/Attack2State/<Action>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__2_System_IDisposable_Dispose_m2E9DC4F4476CD9D4BDAE4236ED3E99DC6C2A2AD2 (U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss_2/Attack2State/<Action>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionU3Ed__2_MoveNext_m062A55E7C0AC414535CA664BC8CB647A2762580A (U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9DA1113CF54665F267F78D8220A22C7F0181376);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_008b;
			}
			case 2:
			{
				goto IL_01ac;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// BulletPool pool = BulletPool.Get();
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_3;
		L_3 = BulletPool_Get_m6DFD008541C37E0C8F62A09F9246947887AC08BA(/*hidden argument*/NULL);
		__this->set_U3CpoolU3E5__2_4(L_3);
		// player = boss.player;
		Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * L_4 = V_1;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_5 = __this->get_boss_3();
		NullCheck(L_5);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6 = L_5->get_player_26();
		NullCheck(L_4);
		L_4->set_player_0(L_6);
		// Vector3 target_position = player.transform.position;
		Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * L_7 = V_1;
		NullCheck(L_7);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_8 = L_7->get_player_0();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		__this->set_U3Ctarget_positionU3E5__3_5(L_10);
		// boss.SetText("I'll KILL YOU");
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_11 = __this->get_boss_3();
		NullCheck(L_11);
		Boss_2_SetText_m5745CCF5EFD8E16FFC772F6F22D63AEAA5836F2B(L_11, _stringLiteralC9DA1113CF54665F267F78D8220A22C7F0181376, /*hidden argument*/NULL);
		// int interval = 5;
		__this->set_U3CintervalU3E5__4_6(5);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int loop = 0; loop < 3; loop++)
		__this->set_U3CloopU3E5__5_7(0);
		goto IL_01c5;
	}

IL_009e:
	{
		// target_position.x = GameManager.Get().spawn_points[Random.Range(0, 5)].position.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_U3Ctarget_positionU3E5__3_5();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_14;
		L_14 = GameManager_Get_m070203A84AD488FCC6EF9FCB51B411262D08686A(/*hidden argument*/NULL);
		NullCheck(L_14);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_15 = L_14->get_spawn_points_9();
		int32_t L_16;
		L_16 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		L_13->set_x_2(L_20);
		// for (int count = 1; count <= 5; count++)
		V_3 = 1;
		goto IL_018c;
	}

IL_00cc:
	{
		// for (int i = 0; i < 360; i += interval)
		V_4 = 0;
		goto IL_017c;
	}

IL_00d4:
	{
		// direction = (target_position + new Vector3(Mathf.Cos(i * Mathf.Deg2Rad) * (count * 6), Mathf.Sin(i * Mathf.Deg2Rad) * (count * 6), -5))
		//     - boss.transform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_U3Ctarget_positionU3E5__3_5();
		int32_t L_22 = V_4;
		float L_23;
		L_23 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)L_22)), (float)(0.0174532924f))));
		int32_t L_24 = V_3;
		int32_t L_25 = V_4;
		float L_26;
		L_26 = sinf(((float)il2cpp_codegen_multiply((float)((float)((float)L_25)), (float)(0.0174532924f))));
		int32_t L_27 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), ((float)il2cpp_codegen_multiply((float)L_23, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)6)))))), ((float)il2cpp_codegen_multiply((float)L_26, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)6)))))), (-5.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_28, /*hidden argument*/NULL);
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_30 = __this->get_boss_3();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_29, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		// direction = direction.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_2 = L_34;
		// bullet = pool.GetBullet(boss.transform.position, BulletType.VIRUS);
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_35 = __this->get_U3CpoolU3E5__2_4();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_36 = __this->get_boss_3();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_39;
		L_39 = BulletPool_GetBullet_mA58426B76061B69207036A8BEB78A8D2CAEE9298(L_35, L_38, 1, /*hidden argument*/NULL);
		// bullet.direction = direction;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_40 = L_39;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_2;
		NullCheck(L_40);
		L_40->set_direction_5(L_41);
		// bullet.move_speed = boss.bullet_speed;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_42 = L_40;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_43 = __this->get_boss_3();
		NullCheck(L_43);
		float L_44 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_43)->get_bullet_speed_16();
		NullCheck(L_42);
		L_42->set_move_speed_6(L_44);
		// bullet.damage = boss.damage;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_45 = __this->get_boss_3();
		NullCheck(L_45);
		float L_46 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_45)->get_damage_9();
		NullCheck(L_42);
		L_42->set_damage_7(L_46);
		// for (int i = 0; i < 360; i += interval)
		int32_t L_47 = V_4;
		int32_t L_48 = __this->get_U3CintervalU3E5__4_6();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
	}

IL_017c:
	{
		// for (int i = 0; i < 360; i += interval)
		int32_t L_49 = V_4;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)360))))
		{
			goto IL_00d4;
		}
	}
	{
		// for (int count = 1; count <= 5; count++)
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_018c:
	{
		// for (int count = 1; count <= 5; count++)
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) <= ((int32_t)5)))
		{
			goto IL_00cc;
		}
	}
	{
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_52 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_52, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_52);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01ac:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int loop = 0; loop < 3; loop++)
		int32_t L_53 = __this->get_U3CloopU3E5__5_7();
		V_5 = L_53;
		int32_t L_54 = V_5;
		__this->set_U3CloopU3E5__5_7(((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)));
	}

IL_01c5:
	{
		// for (int loop = 0; loop < 3; loop++)
		int32_t L_55 = __this->get_U3CloopU3E5__5_7();
		if ((((int32_t)L_55) < ((int32_t)3)))
		{
			goto IL_009e;
		}
	}
	{
		// boss.boss_state = new WaitState(3, 2);
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_56 = __this->get_boss_3();
		WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * L_57 = (WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B *)il2cpp_codegen_object_new(WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		WaitState__ctor_m4F6FCCBA352BEA889B19BA5336F314BEBB172E1B(L_57, (3.0f), 2, /*hidden argument*/NULL);
		NullCheck(L_56);
		L_56->set_boss_state_25(L_57);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_58 = __this->get_boss_3();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_59 = __this->get_boss_3();
		NullCheck(L_59);
		RuntimeObject* L_60 = L_59->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_61 = __this->get_boss_3();
		NullCheck(L_60);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_60, L_61);
		NullCheck(L_58);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_58, L_62, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss_2/Attack2State/<Action>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m579B0F234812B1D4DE58D09FEB48FB2E32A0779D (U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss_2/Attack2State/<Action>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__2_System_Collections_IEnumerator_Reset_m1072E520E6158C87A6ED2C9E22EE141E8BC07511 (U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionU3Ed__2_System_Collections_IEnumerator_Reset_m1072E520E6158C87A6ED2C9E22EE141E8BC07511_RuntimeMethod_var)));
	}
}
// System.Object Boss_2/Attack2State/<Action>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__2_System_Collections_IEnumerator_get_Current_mE428003CB5562D4CAFA7A0E5A52282DD2FAA4737 (U3CActionU3Ed__2_tCA41C945E618FF6D7C4E29D7736F466B8DD66C87 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Boss_2/Attack3State/<Action>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0__ctor_m56152CB5F3E9FC10B37F2B0293029E4B4D5AC1BB (U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss_2/Attack3State/<Action>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0_System_IDisposable_Dispose_m6F1017C4B0F400494B28E82CBC9BFC787D86F53D (U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss_2/Attack3State/<Action>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionU3Ed__0_MoveNext_m238755226BB210D9F8877B6A3AC6B59B6E0AB803 (U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00f9;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// BulletPool pool = BulletPool.Get();
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_3;
		L_3 = BulletPool_Get_m6DFD008541C37E0C8F62A09F9246947887AC08BA(/*hidden argument*/NULL);
		__this->set_U3CpoolU3E5__2_3(L_3);
		// for (int i = 0; i < 180; i++)
		__this->set_U3CiU3E5__3_4(0);
		goto IL_0110;
	}

IL_0031:
	{
		// direction = new Vector3(Mathf.Cos(Random.Range(-180, 0) * Mathf.Deg2Rad), 0, -Mathf.Sin(Random.Range(1, 181) * Mathf.Deg2Rad));
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-180), 0, /*hidden argument*/NULL);
		float L_5;
		L_5 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)L_4)), (float)(0.0174532924f))));
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)181), /*hidden argument*/NULL);
		float L_7;
		L_7 = sinf(((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)(0.0174532924f))));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_5, (0.0f), ((-L_7)), /*hidden argument*/NULL);
		// bullet = pool.GetBullet(boss.transform.position, BulletType.VIRUS);
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_8 = __this->get_U3CpoolU3E5__2_3();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_9 = __this->get_boss_2();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_12;
		L_12 = BulletPool_GetBullet_mA58426B76061B69207036A8BEB78A8D2CAEE9298(L_8, L_11, 1, /*hidden argument*/NULL);
		// bullet.direction = direction;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_13 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		NullCheck(L_13);
		L_13->set_direction_5(L_14);
		// bullet.damage = boss.damage;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_15 = L_13;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_16 = __this->get_boss_2();
		NullCheck(L_16);
		float L_17 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_16)->get_damage_9();
		NullCheck(L_15);
		L_15->set_damage_7(L_17);
		// bullet.move_speed = boss.bullet_speed;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_18 = L_15;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_19 = __this->get_boss_2();
		NullCheck(L_19);
		float L_20 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_19)->get_bullet_speed_16();
		NullCheck(L_18);
		L_18->set_move_speed_6(L_20);
		// random_size = Random.Range(0.5f, 2f);
		float L_21;
		L_21 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.5f), (2.0f), /*hidden argument*/NULL);
		V_2 = L_21;
		// bullet.transform.localScale = Vector3.one * random_size;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_24 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_22, L_25, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(Random.Range(0, 0.1f));
		float L_26;
		L_26 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (0.100000001f), /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, L_26, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < 180; i++)
		int32_t L_28 = __this->get_U3CiU3E5__3_4();
		V_3 = L_28;
		int32_t L_29 = V_3;
		__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
	}

IL_0110:
	{
		// for (int i = 0; i < 180; i++)
		int32_t L_30 = __this->get_U3CiU3E5__3_4();
		if ((((int32_t)L_30) < ((int32_t)((int32_t)180))))
		{
			goto IL_0031;
		}
	}
	{
		// boss.boss_state = new WaitState(3, 3);
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_31 = __this->get_boss_2();
		WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * L_32 = (WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B *)il2cpp_codegen_object_new(WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		WaitState__ctor_m4F6FCCBA352BEA889B19BA5336F314BEBB172E1B(L_32, (3.0f), 3, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->set_boss_state_25(L_32);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_33 = __this->get_boss_2();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_34 = __this->get_boss_2();
		NullCheck(L_34);
		RuntimeObject* L_35 = L_34->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_36 = __this->get_boss_2();
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_35, L_36);
		NullCheck(L_33);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_33, L_37, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss_2/Attack3State/<Action>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEF0488A22EDA1A58D1EAAB9D03180D75FFA01431 (U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss_2/Attack3State/<Action>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m213446F6CBE53336555D495A3088952A2B677D84 (U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m213446F6CBE53336555D495A3088952A2B677D84_RuntimeMethod_var)));
	}
}
// System.Object Boss_2/Attack3State/<Action>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__0_System_Collections_IEnumerator_get_Current_mD7C573E5C2FFBCFC4BEB17F9CA3D4C105F515AF2 (U3CActionU3Ed__0_tFF42198CCE3A803D6AA1E792D9FE1EB89DBD2BD8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Boss_2/Attack4State/<Action>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0__ctor_mCF7DA8072E54B35C15F005D53B70D5392F0FF999 (U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss_2/Attack4State/<Action>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0_System_IDisposable_Dispose_m2A96E66C8696DD36B551581751E8DCABDF3BA28F (U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss_2/Attack4State/<Action>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionU3Ed__0_MoveNext_m5D6DD009B44087A1435B0D6B8CF8A729B48FE432 (U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0256;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3[] targets = new Vector3[2] { new Vector3(-10, 0, 0), new Vector3(10, 0, 0) };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (-10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_7);
		__this->set_U3CtargetsU3E5__2_3(L_6);
		// BulletPool pool = BulletPool.Get();
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_8;
		L_8 = BulletPool_Get_m6DFD008541C37E0C8F62A09F9246947887AC08BA(/*hidden argument*/NULL);
		__this->set_U3CpoolU3E5__3_4(L_8);
		// float value = 0.5f;
		__this->set_U3CvalueU3E5__4_5((0.5f));
		// for (int i = 0; i < 200; i++)
		__this->set_U3CiU3E5__5_6(0);
		goto IL_026d;
	}

IL_007e:
	{
		// if (i < 25)
		int32_t L_9 = __this->get_U3CiU3E5__5_6();
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)25))))
		{
			goto IL_00c3;
		}
	}
	{
		// targets[0].x -= value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_10);
		float* L_11 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_x_2();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_12) = (float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_14));
		// targets[1].x -= value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_15 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_15);
		float* L_16 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_address_of_x_2();
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float L_19 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_17) = (float)((float)il2cpp_codegen_subtract((float)L_18, (float)L_19));
		// }
		goto IL_01c5;
	}

IL_00c3:
	{
		// else if (i < 75)
		int32_t L_20 = __this->get_U3CiU3E5__5_6();
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)75))))
		{
			goto IL_0108;
		}
	}
	{
		// targets[0].x += value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_21);
		float* L_22 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_x_2();
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		float L_25 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_23) = (float)((float)il2cpp_codegen_add((float)L_24, (float)L_25));
		// targets[1].x += value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_26);
		float* L_27 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_address_of_x_2();
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		float L_30 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_28) = (float)((float)il2cpp_codegen_add((float)L_29, (float)L_30));
		// }
		goto IL_01c5;
	}

IL_0108:
	{
		// else if (i < 125)
		int32_t L_31 = __this->get_U3CiU3E5__5_6();
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)125))))
		{
			goto IL_014a;
		}
	}
	{
		// targets[0].x -= value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_32 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_32);
		float* L_33 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_x_2();
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		float L_36 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_34) = (float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36));
		// targets[1].x -= value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_37 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_37);
		float* L_38 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_address_of_x_2();
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		float L_41 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_39) = (float)((float)il2cpp_codegen_subtract((float)L_40, (float)L_41));
		// }
		goto IL_01c5;
	}

IL_014a:
	{
		// else if (i < 175)
		int32_t L_42 = __this->get_U3CiU3E5__5_6();
		if ((((int32_t)L_42) >= ((int32_t)((int32_t)175))))
		{
			goto IL_018f;
		}
	}
	{
		// targets[0].x += value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_43 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_43);
		float* L_44 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_x_2();
		float* L_45 = L_44;
		float L_46 = *((float*)L_45);
		float L_47 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_45) = (float)((float)il2cpp_codegen_add((float)L_46, (float)L_47));
		// targets[1].x += value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_48 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_48);
		float* L_49 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_address_of_x_2();
		float* L_50 = L_49;
		float L_51 = *((float*)L_50);
		float L_52 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_50) = (float)((float)il2cpp_codegen_add((float)L_51, (float)L_52));
		// }
		goto IL_01c5;
	}

IL_018f:
	{
		// targets[0].x -= value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_53 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_53);
		float* L_54 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_x_2();
		float* L_55 = L_54;
		float L_56 = *((float*)L_55);
		float L_57 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_55) = (float)((float)il2cpp_codegen_subtract((float)L_56, (float)L_57));
		// targets[1].x -= value;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_58 = __this->get_U3CtargetsU3E5__2_3();
		NullCheck(L_58);
		float* L_59 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_address_of_x_2();
		float* L_60 = L_59;
		float L_61 = *((float*)L_60);
		float L_62 = __this->get_U3CvalueU3E5__4_5();
		*((float*)L_60) = (float)((float)il2cpp_codegen_subtract((float)L_61, (float)L_62));
	}

IL_01c5:
	{
		// for (int j = 0; j < 2; j++)
		V_1 = 0;
		goto IL_0239;
	}

IL_01c9:
	{
		// bullet = pool.GetBullet(boss.transform.position, BulletType.VIRUS);
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_63 = __this->get_U3CpoolU3E5__3_4();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_64 = __this->get_boss_2();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_67;
		L_67 = BulletPool_GetBullet_mA58426B76061B69207036A8BEB78A8D2CAEE9298(L_63, L_66, 1, /*hidden argument*/NULL);
		// bullet.direction = (targets[j] - boss.transform.position).normalized;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_68 = L_67;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_69 = __this->get_U3CtargetsU3E5__2_3();
		int32_t L_70 = V_1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_73 = __this->get_boss_2();
		NullCheck(L_73);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_74, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_72, L_75, /*hidden argument*/NULL);
		V_2 = L_76;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_68);
		L_68->set_direction_5(L_77);
		// bullet.move_speed = boss.bullet_speed;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_78 = L_68;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_79 = __this->get_boss_2();
		NullCheck(L_79);
		float L_80 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_79)->get_bullet_speed_16();
		NullCheck(L_78);
		L_78->set_move_speed_6(L_80);
		// bullet.damage = boss.damage;
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_81 = __this->get_boss_2();
		NullCheck(L_81);
		float L_82 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_81)->get_damage_9();
		NullCheck(L_78);
		L_78->set_damage_7(L_82);
		// for (int j = 0; j < 2; j++)
		int32_t L_83 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_0239:
	{
		// for (int j = 0; j < 2; j++)
		int32_t L_84 = V_1;
		if ((((int32_t)L_84) < ((int32_t)2)))
		{
			goto IL_01c9;
		}
	}
	{
		// yield return new WaitForSeconds(0.07f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_85 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_85, (0.0700000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_85);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0256:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < 200; i++)
		int32_t L_86 = __this->get_U3CiU3E5__5_6();
		V_3 = L_86;
		int32_t L_87 = V_3;
		__this->set_U3CiU3E5__5_6(((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1)));
	}

IL_026d:
	{
		// for (int i = 0; i < 200; i++)
		int32_t L_88 = __this->get_U3CiU3E5__5_6();
		if ((((int32_t)L_88) < ((int32_t)((int32_t)200))))
		{
			goto IL_007e;
		}
	}
	{
		// boss.boss_state = new WaitState(3, 4);
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_89 = __this->get_boss_2();
		WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * L_90 = (WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B *)il2cpp_codegen_object_new(WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		WaitState__ctor_m4F6FCCBA352BEA889B19BA5336F314BEBB172E1B(L_90, (3.0f), 4, /*hidden argument*/NULL);
		NullCheck(L_89);
		L_89->set_boss_state_25(L_90);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_91 = __this->get_boss_2();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_92 = __this->get_boss_2();
		NullCheck(L_92);
		RuntimeObject* L_93 = L_92->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_94 = __this->get_boss_2();
		NullCheck(L_93);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_93, L_94);
		NullCheck(L_91);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_91, L_95, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss_2/Attack4State/<Action>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m66DDD62A718E94CFDE2C880B61E33F717B666856 (U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss_2/Attack4State/<Action>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m03D5F6DDE0839316D609550CA36D89BC2F0AA5DB (U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_m03D5F6DDE0839316D609550CA36D89BC2F0AA5DB_RuntimeMethod_var)));
	}
}
// System.Object Boss_2/Attack4State/<Action>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__0_System_Collections_IEnumerator_get_Current_mE3605BF344F7164042813527FC428B33F19DDAB6 (U3CActionU3Ed__0_t3910F1B04B9BB125E44572513C6902654EBDFCDD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Boss_2/SpawnState/<Action>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0__ctor_mD4E978EA775BC7B08D3114B5E00292F2551C6F9C (U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss_2/SpawnState/<Action>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0_System_IDisposable_Dispose_mF4971EB7CE9185AACD583112996671D7832802FA (U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss_2/SpawnState/<Action>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionU3Ed__0_MoveNext_m836135D2CFDF3AE76F158B760F7C310D4DBABB06 (U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A88052E7D2B2EDD7B6A11C2AAC7815BE3773F28);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int random = Random.Range(0, 5);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		V_1 = L_3;
		// GameManager manager = GameManager.Get();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4;
		L_4 = GameManager_Get_m070203A84AD488FCC6EF9FCB51B411262D08686A(/*hidden argument*/NULL);
		V_2 = L_4;
		// boss.SetText("I'll CURSE YOU");
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_5 = __this->get_boss_2();
		NullCheck(L_5);
		Boss_2_SetText_m5745CCF5EFD8E16FFC772F6F22D63AEAA5836F2B(L_5, _stringLiteral5A88052E7D2B2EDD7B6A11C2AAC7815BE3773F28, /*hidden argument*/NULL);
		// for (int i = 0; i < 5; i += 2)
		V_3 = 0;
		goto IL_005b;
	}

IL_0039:
	{
		// virus = manager.CreateVirus(random);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = V_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_8;
		L_8 = GameManager_CreateVirus_m965F64D342BD0B524C25CCB513FC24D11A4AFD65(L_6, L_7, /*hidden argument*/NULL);
		// virus.transform.position = manager.spawn_points[i].position;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = V_2;
		NullCheck(L_10);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = L_10->get_spawn_points_9();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_15, /*hidden argument*/NULL);
		// for (int i = 0; i < 5; i += 2)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)2));
	}

IL_005b:
	{
		// for (int i = 0; i < 5; i += 2)
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0039;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// boss.boss_state = new WaitState(3, 0);
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_18 = __this->get_boss_2();
		WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * L_19 = (WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B *)il2cpp_codegen_object_new(WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B_il2cpp_TypeInfo_var);
		WaitState__ctor_m4F6FCCBA352BEA889B19BA5336F314BEBB172E1B(L_19, (3.0f), 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_boss_state_25(L_19);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_20 = __this->get_boss_2();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_21 = __this->get_boss_2();
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_23 = __this->get_boss_2();
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_22, L_23);
		NullCheck(L_20);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_20, L_24, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss_2/SpawnState/<Action>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m346C55EE06CE197F78F5AC7E829D295A3BA871A1 (U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss_2/SpawnState/<Action>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_mFF4674AAA94C44DBC399096A2FE3B23808262283 (U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionU3Ed__0_System_Collections_IEnumerator_Reset_mFF4674AAA94C44DBC399096A2FE3B23808262283_RuntimeMethod_var)));
	}
}
// System.Object Boss_2/SpawnState/<Action>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__0_System_Collections_IEnumerator_get_Current_m7D382AA545D58BC9F0B5084BA435B0A75902A648 (U3CActionU3Ed__0_t87D1D30AA9266D845495BAC6FBB3D0DEAB1CA13A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Boss_2/WaitState/<Action>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__3__ctor_m148A80CAA0CDD6FEE2031B2C0259C87A65261AA2 (U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss_2/WaitState/<Action>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__3_System_IDisposable_Dispose_mC4FA2304778C1CA1C80256819F7A9D1433F1FD8D (U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss_2/WaitState/<Action>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionU3Ed__3_MoveNext_m3F8CBB502996B37396FB0B10A90B52634B070834 (U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Attack3State_t4A5E5D5722F41E325E6D453EDD3A792F904D09F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Attack4State_tCD178697569A85CA88204D05D08B8D21EE255C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnState_tCA3451EE8F09804E2FDED2F7499067EE6231CF39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * L_1 = __this->get_U3CU3E4__this_2();
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
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(wait_time);
		WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_wait_time_0();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// switch (pattern_index)
		WaitState_t471643621A1A8E11EEFE9053D83BB4745D7BD60B * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_pattern_index_1();
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0065;
			}
			case 1:
			{
				goto IL_009b;
			}
			case 2:
			{
				goto IL_00d1;
			}
			case 3:
			{
				goto IL_0104;
			}
			case 4:
			{
				goto IL_0137;
			}
		}
	}
	{
		goto IL_0168;
	}

IL_0065:
	{
		// boss.boss_state = new Attack1State();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_10 = __this->get_boss_3();
		Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D * L_11 = (Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D *)il2cpp_codegen_object_new(Attack1State_t252553F4870D9C0697BB687BE741E4B27E65B65D_il2cpp_TypeInfo_var);
		Attack1State__ctor_mB85B2ABAF0EC1C858999FB4ED8439A08D7CDC890(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_boss_state_25(L_11);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_12 = __this->get_boss_3();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_13 = __this->get_boss_3();
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_15 = __this->get_boss_3();
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_14, L_15);
		NullCheck(L_12);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_12, L_16, /*hidden argument*/NULL);
		// break;
		goto IL_0168;
	}

IL_009b:
	{
		// boss.boss_state = new Attack2State();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_17 = __this->get_boss_3();
		Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 * L_18 = (Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26 *)il2cpp_codegen_object_new(Attack2State_t03E7B82B57DA97C025B6AACC5BA010532E567B26_il2cpp_TypeInfo_var);
		Attack2State__ctor_mD9909F9E3AD4E13904B9BFD083729D6D3D863A60(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_boss_state_25(L_18);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_19 = __this->get_boss_3();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_20 = __this->get_boss_3();
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_22 = __this->get_boss_3();
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_21, L_22);
		NullCheck(L_19);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_19, L_23, /*hidden argument*/NULL);
		// break;
		goto IL_0168;
	}

IL_00d1:
	{
		// boss.boss_state = new Attack3State();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_24 = __this->get_boss_3();
		Attack3State_t4A5E5D5722F41E325E6D453EDD3A792F904D09F7 * L_25 = (Attack3State_t4A5E5D5722F41E325E6D453EDD3A792F904D09F7 *)il2cpp_codegen_object_new(Attack3State_t4A5E5D5722F41E325E6D453EDD3A792F904D09F7_il2cpp_TypeInfo_var);
		Attack3State__ctor_m48BBA97985714E4FB248BE772AF8109FEC096D28(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_boss_state_25(L_25);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_26 = __this->get_boss_3();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_27 = __this->get_boss_3();
		NullCheck(L_27);
		RuntimeObject* L_28 = L_27->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_29 = __this->get_boss_3();
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_28, L_29);
		NullCheck(L_26);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_26, L_30, /*hidden argument*/NULL);
		// break;
		goto IL_0168;
	}

IL_0104:
	{
		// boss.boss_state = new Attack4State();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_31 = __this->get_boss_3();
		Attack4State_tCD178697569A85CA88204D05D08B8D21EE255C68 * L_32 = (Attack4State_tCD178697569A85CA88204D05D08B8D21EE255C68 *)il2cpp_codegen_object_new(Attack4State_tCD178697569A85CA88204D05D08B8D21EE255C68_il2cpp_TypeInfo_var);
		Attack4State__ctor_m84BA91DDD3098E8C669AB8733C1B0AE9599C9B97(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->set_boss_state_25(L_32);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_33 = __this->get_boss_3();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_34 = __this->get_boss_3();
		NullCheck(L_34);
		RuntimeObject* L_35 = L_34->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_36 = __this->get_boss_3();
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_35, L_36);
		NullCheck(L_33);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_33, L_37, /*hidden argument*/NULL);
		// break;
		goto IL_0168;
	}

IL_0137:
	{
		// boss.boss_state = new SpawnState();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_38 = __this->get_boss_3();
		SpawnState_tCA3451EE8F09804E2FDED2F7499067EE6231CF39 * L_39 = (SpawnState_tCA3451EE8F09804E2FDED2F7499067EE6231CF39 *)il2cpp_codegen_object_new(SpawnState_tCA3451EE8F09804E2FDED2F7499067EE6231CF39_il2cpp_TypeInfo_var);
		SpawnState__ctor_m745ADD71BCA5CCFB56674400BBDB7AB78C126FD0(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		L_38->set_boss_state_25(L_39);
		// boss.Action(boss.boss_state.Action(boss));
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_40 = __this->get_boss_3();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_41 = __this->get_boss_3();
		NullCheck(L_41);
		RuntimeObject* L_42 = L_41->get_boss_state_25();
		Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * L_43 = __this->get_boss_3();
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1< RuntimeObject*, Boss_2_t5C8BD3913A5F4E320CB249E2669415E77288125C * >::Invoke(0 /* System.Collections.IEnumerator Boss_2/BossState::Action(Boss_2) */, BossState_tB1169A4570C2BC33EC2A8531B6AEF209C67AE04F_il2cpp_TypeInfo_var, L_42, L_43);
		NullCheck(L_40);
		Boss_2_Action_m70AE3FEA0275F54264578828E907675C49417A6B(L_40, L_44, /*hidden argument*/NULL);
	}

IL_0168:
	{
		// }
		return (bool)0;
	}
}
// System.Object Boss_2/WaitState/<Action>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC82B4F0C9EA873DA7CB3E017E64E05368FDEDF9B (U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss_2/WaitState/<Action>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionU3Ed__3_System_Collections_IEnumerator_Reset_m2498F3FF8ECF69E2D8D8E1256A85E8E4E176900E (U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionU3Ed__3_System_Collections_IEnumerator_Reset_m2498F3FF8ECF69E2D8D8E1256A85E8E4E176900E_RuntimeMethod_var)));
	}
}
// System.Object Boss_2/WaitState/<Action>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActionU3Ed__3_System_Collections_IEnumerator_get_Current_mB993F97855BA0C279864D5951B244E11EC4689BA (U3CActionU3Ed__3_t25C159BEB6C3470E2350F2D75CA44C4CE406F7DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
