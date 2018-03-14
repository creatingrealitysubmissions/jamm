#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Ximmerse.VR.VRContext/NodeTransformPair
struct NodeTransformPair_t1977563337;
// Ximmerse.UKeyValuePair`2<Ximmerse.VR.VRNode,UnityEngine.Transform>
struct UKeyValuePair_2_t2895687901;
// Ximmerse.UKeyValuePair`2<Ximmerse.VR.VRNode,System.Object>
struct UKeyValuePair_2_t2375428144;
// Ximmerse.VR.VRContext/OnHmdMessageDelegate
struct OnHmdMessageDelegate_t2275695639;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Ximmerse.InputSystem.XDevicePlugin/ControllerState
struct ControllerState_t807240995;
// Ximmerse.VR.VRContext/OnHmdUpdateDelegate
struct OnHmdUpdateDelegate_t752438058;
// Ximmerse.VR.VRDevice
struct VRDevice_t2014447455;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// Ximmerse.InputSystem.ControllerInput
struct ControllerInput_t2649977173;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Transform
struct Transform_t3600365921;
// Ximmerse.VR.VRContext
struct VRContext_t3387556500;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// Ximmerse.VR.Pose3D
struct Pose3D_t829638206;
// Ximmerse.InputSystem.XDevicePlugin/ControllerStateDelegate
struct ControllerStateDelegate_t3188270092;
// Ximmerse.InputSystem.XDevicePlugin/SendMessageDelegate
struct SendMessageDelegate_t1744817221;
// Ximmerse.VR.VRContext/NodeTransformPair[]
struct NodeTransformPairU5BU5D_t2284766708;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// Ximmerse.UI.UIFade
struct UIFade_t773697809;

extern const RuntimeMethod* UKeyValuePair_2__ctor_m394576690_RuntimeMethod_var;
extern const uint32_t NodeTransformPair__ctor_m2500722749_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const uint32_t OnHmdMessageDelegate_BeginInvoke_m72397307_MetadataUsageId;
struct ControllerState_t807240995_marshaled_pinvoke;
struct ControllerState_t807240995;;
struct ControllerState_t807240995_marshaled_pinvoke;;
extern RuntimeClass* ControllerState_t807240995_il2cpp_TypeInfo_var;
extern const uint32_t OnHmdUpdateDelegate_BeginInvoke_m630492041_MetadataUsageId;
extern RuntimeClass* ControllerInputManager_t315547476_il2cpp_TypeInfo_var;
extern const uint32_t VRDevice_Start_m641285167_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t VRDevice_Update_m3790610245_MetadataUsageId;
extern RuntimeClass* XDevicePlugin_t1404987341_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2665836531;
extern const uint32_t VRDevice_InitDevice_m3127146416_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2290741352;
extern const uint32_t VRDevice_OnVRContextInited_m3807532400_MetadataUsageId;
extern RuntimeClass* InputTracking_t2240286067_il2cpp_TypeInfo_var;
extern const uint32_t VRDevice_GetRotation_m69145819_MetadataUsageId;
extern const uint32_t VRDevice_Recenter_m3623678401_MetadataUsageId;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef VRNODE_T2852410882_H
#define VRNODE_T2852410882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.VR.VRNode
struct  VRNode_t2852410882 
{
public:
	// System.Int32 Ximmerse.VR.VRNode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VRNode_t2852410882, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRNODE_T2852410882_H
#ifndef CONTROLLERSTATE_T807240995_H
#define CONTROLLERSTATE_T807240995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.InputSystem.XDevicePlugin/ControllerState
struct  ControllerState_t807240995 
{
public:
	// System.Int32 Ximmerse.InputSystem.XDevicePlugin/ControllerState::handle
	int32_t ___handle_0;
	// System.Int32 Ximmerse.InputSystem.XDevicePlugin/ControllerState::timestamp
	int32_t ___timestamp_1;
	// System.Int32 Ximmerse.InputSystem.XDevicePlugin/ControllerState::frameCount
	int32_t ___frameCount_2;
	// System.Int32 Ximmerse.InputSystem.XDevicePlugin/ControllerState::state_mask
	int32_t ___state_mask_3;
	// System.Single[] Ximmerse.InputSystem.XDevicePlugin/ControllerState::axes
	SingleU5BU5D_t1444911251* ___axes_4;
	// System.UInt32 Ximmerse.InputSystem.XDevicePlugin/ControllerState::buttons
	uint32_t ___buttons_5;
	// System.Single[] Ximmerse.InputSystem.XDevicePlugin/ControllerState::position
	SingleU5BU5D_t1444911251* ___position_6;
	// System.Single[] Ximmerse.InputSystem.XDevicePlugin/ControllerState::rotation
	SingleU5BU5D_t1444911251* ___rotation_7;
	// System.Single[] Ximmerse.InputSystem.XDevicePlugin/ControllerState::accelerometer
	SingleU5BU5D_t1444911251* ___accelerometer_8;
	// System.Single[] Ximmerse.InputSystem.XDevicePlugin/ControllerState::gyroscope
	SingleU5BU5D_t1444911251* ___gyroscope_9;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___timestamp_1)); }
	inline int32_t get_timestamp_1() const { return ___timestamp_1; }
	inline int32_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int32_t value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_frameCount_2() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___frameCount_2)); }
	inline int32_t get_frameCount_2() const { return ___frameCount_2; }
	inline int32_t* get_address_of_frameCount_2() { return &___frameCount_2; }
	inline void set_frameCount_2(int32_t value)
	{
		___frameCount_2 = value;
	}

	inline static int32_t get_offset_of_state_mask_3() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___state_mask_3)); }
	inline int32_t get_state_mask_3() const { return ___state_mask_3; }
	inline int32_t* get_address_of_state_mask_3() { return &___state_mask_3; }
	inline void set_state_mask_3(int32_t value)
	{
		___state_mask_3 = value;
	}

	inline static int32_t get_offset_of_axes_4() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___axes_4)); }
	inline SingleU5BU5D_t1444911251* get_axes_4() const { return ___axes_4; }
	inline SingleU5BU5D_t1444911251** get_address_of_axes_4() { return &___axes_4; }
	inline void set_axes_4(SingleU5BU5D_t1444911251* value)
	{
		___axes_4 = value;
		Il2CppCodeGenWriteBarrier((&___axes_4), value);
	}

	inline static int32_t get_offset_of_buttons_5() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___buttons_5)); }
	inline uint32_t get_buttons_5() const { return ___buttons_5; }
	inline uint32_t* get_address_of_buttons_5() { return &___buttons_5; }
	inline void set_buttons_5(uint32_t value)
	{
		___buttons_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___position_6)); }
	inline SingleU5BU5D_t1444911251* get_position_6() const { return ___position_6; }
	inline SingleU5BU5D_t1444911251** get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(SingleU5BU5D_t1444911251* value)
	{
		___position_6 = value;
		Il2CppCodeGenWriteBarrier((&___position_6), value);
	}

	inline static int32_t get_offset_of_rotation_7() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___rotation_7)); }
	inline SingleU5BU5D_t1444911251* get_rotation_7() const { return ___rotation_7; }
	inline SingleU5BU5D_t1444911251** get_address_of_rotation_7() { return &___rotation_7; }
	inline void set_rotation_7(SingleU5BU5D_t1444911251* value)
	{
		___rotation_7 = value;
		Il2CppCodeGenWriteBarrier((&___rotation_7), value);
	}

	inline static int32_t get_offset_of_accelerometer_8() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___accelerometer_8)); }
	inline SingleU5BU5D_t1444911251* get_accelerometer_8() const { return ___accelerometer_8; }
	inline SingleU5BU5D_t1444911251** get_address_of_accelerometer_8() { return &___accelerometer_8; }
	inline void set_accelerometer_8(SingleU5BU5D_t1444911251* value)
	{
		___accelerometer_8 = value;
		Il2CppCodeGenWriteBarrier((&___accelerometer_8), value);
	}

	inline static int32_t get_offset_of_gyroscope_9() { return static_cast<int32_t>(offsetof(ControllerState_t807240995, ___gyroscope_9)); }
	inline SingleU5BU5D_t1444911251* get_gyroscope_9() const { return ___gyroscope_9; }
	inline SingleU5BU5D_t1444911251** get_address_of_gyroscope_9() { return &___gyroscope_9; }
	inline void set_gyroscope_9(SingleU5BU5D_t1444911251* value)
	{
		___gyroscope_9 = value;
		Il2CppCodeGenWriteBarrier((&___gyroscope_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Ximmerse.InputSystem.XDevicePlugin/ControllerState
struct ControllerState_t807240995_marshaled_pinvoke
{
	int32_t ___handle_0;
	int32_t ___timestamp_1;
	int32_t ___frameCount_2;
	int32_t ___state_mask_3;
	float ___axes_4[6];
	uint32_t ___buttons_5;
	float ___position_6[3];
	float ___rotation_7[4];
	float ___accelerometer_8[3];
	float ___gyroscope_9[3];
};
// Native definition for COM marshalling of Ximmerse.InputSystem.XDevicePlugin/ControllerState
struct ControllerState_t807240995_marshaled_com
{
	int32_t ___handle_0;
	int32_t ___timestamp_1;
	int32_t ___frameCount_2;
	int32_t ___state_mask_3;
	float ___axes_4[6];
	uint32_t ___buttons_5;
	float ___position_6[3];
	float ___rotation_7[4];
	float ___accelerometer_8[3];
	float ___gyroscope_9[3];
};
#endif // CONTROLLERSTATE_T807240995_H
#ifndef TRACKINGORIGIN_T2723597181_H
#define TRACKINGORIGIN_T2723597181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.VR.TrackingOrigin
struct  TrackingOrigin_t2723597181 
{
public:
	// System.Int32 Ximmerse.VR.TrackingOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrackingOrigin_t2723597181, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGORIGIN_T2723597181_H
#ifndef XRNODE_T3929440994_H
#define XRNODE_T3929440994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNode
struct  XRNode_t3929440994 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XRNode_t3929440994, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODE_T3929440994_H
#ifndef CONTROLLERTYPE_T3154098932_H
#define CONTROLLERTYPE_T3154098932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.InputSystem.ControllerType
struct  ControllerType_t3154098932 
{
public:
	// System.Int32 Ximmerse.InputSystem.ControllerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControllerType_t3154098932, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERTYPE_T3154098932_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef UKEYVALUEPAIR_2_T2895687901_H
#define UKEYVALUEPAIR_2_T2895687901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.UKeyValuePair`2<Ximmerse.VR.VRNode,UnityEngine.Transform>
struct  UKeyValuePair_2_t2895687901  : public RuntimeObject
{
public:
	// TKey Ximmerse.UKeyValuePair`2::key
	int32_t ___key_0;
	// TValue Ximmerse.UKeyValuePair`2::value
	Transform_t3600365921 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(UKeyValuePair_2_t2895687901, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(UKeyValuePair_2_t2895687901, ___value_1)); }
	inline Transform_t3600365921 * get_value_1() const { return ___value_1; }
	inline Transform_t3600365921 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Transform_t3600365921 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UKEYVALUEPAIR_2_T2895687901_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef CONTROLLERINPUT_T2649977173_H
#define CONTROLLERINPUT_T2649977173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.InputSystem.ControllerInput
struct  ControllerInput_t2649977173  : public RuntimeObject
{
public:
	// Ximmerse.InputSystem.ControllerType Ximmerse.InputSystem.ControllerInput::type
	int32_t ___type_0;
	// System.Int32 Ximmerse.InputSystem.ControllerInput::handle
	int32_t ___handle_1;
	// System.String Ximmerse.InputSystem.ControllerInput::name
	String_t* ___name_2;
	// System.Int32 Ximmerse.InputSystem.ControllerInput::priority
	int32_t ___priority_3;
	// System.Int32 Ximmerse.InputSystem.ControllerInput::m_PrevFrameCount
	int32_t ___m_PrevFrameCount_4;
	// Ximmerse.InputSystem.XDevicePlugin/ControllerState Ximmerse.InputSystem.ControllerInput::m_State
	ControllerState_t807240995  ___m_State_5;
	// Ximmerse.InputSystem.XDevicePlugin/ControllerState Ximmerse.InputSystem.ControllerInput::m_PrevState
	ControllerState_t807240995  ___m_PrevState_6;
	// UnityEngine.Vector2 Ximmerse.InputSystem.ControllerInput::m_TouchPos
	Vector2_t2156229523  ___m_TouchPos_7;
	// System.Boolean Ximmerse.InputSystem.ControllerInput::emitSwipe
	bool ___emitSwipe_9;
	// UnityEngine.Vector2 Ximmerse.InputSystem.ControllerInput::moveAmount
	Vector2_t2156229523  ___moveAmount_10;
	// System.Single Ximmerse.InputSystem.ControllerInput::minMoveMagnitude
	float ___minMoveMagnitude_11;
	// System.Int32 Ximmerse.InputSystem.ControllerInput::m_HapticsDC
	int32_t ___m_HapticsDC_12;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___handle_1)); }
	inline int32_t get_handle_1() const { return ___handle_1; }
	inline int32_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(int32_t value)
	{
		___handle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_priority_3() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___priority_3)); }
	inline int32_t get_priority_3() const { return ___priority_3; }
	inline int32_t* get_address_of_priority_3() { return &___priority_3; }
	inline void set_priority_3(int32_t value)
	{
		___priority_3 = value;
	}

	inline static int32_t get_offset_of_m_PrevFrameCount_4() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___m_PrevFrameCount_4)); }
	inline int32_t get_m_PrevFrameCount_4() const { return ___m_PrevFrameCount_4; }
	inline int32_t* get_address_of_m_PrevFrameCount_4() { return &___m_PrevFrameCount_4; }
	inline void set_m_PrevFrameCount_4(int32_t value)
	{
		___m_PrevFrameCount_4 = value;
	}

	inline static int32_t get_offset_of_m_State_5() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___m_State_5)); }
	inline ControllerState_t807240995  get_m_State_5() const { return ___m_State_5; }
	inline ControllerState_t807240995 * get_address_of_m_State_5() { return &___m_State_5; }
	inline void set_m_State_5(ControllerState_t807240995  value)
	{
		___m_State_5 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_6() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___m_PrevState_6)); }
	inline ControllerState_t807240995  get_m_PrevState_6() const { return ___m_PrevState_6; }
	inline ControllerState_t807240995 * get_address_of_m_PrevState_6() { return &___m_PrevState_6; }
	inline void set_m_PrevState_6(ControllerState_t807240995  value)
	{
		___m_PrevState_6 = value;
	}

	inline static int32_t get_offset_of_m_TouchPos_7() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___m_TouchPos_7)); }
	inline Vector2_t2156229523  get_m_TouchPos_7() const { return ___m_TouchPos_7; }
	inline Vector2_t2156229523 * get_address_of_m_TouchPos_7() { return &___m_TouchPos_7; }
	inline void set_m_TouchPos_7(Vector2_t2156229523  value)
	{
		___m_TouchPos_7 = value;
	}

	inline static int32_t get_offset_of_emitSwipe_9() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___emitSwipe_9)); }
	inline bool get_emitSwipe_9() const { return ___emitSwipe_9; }
	inline bool* get_address_of_emitSwipe_9() { return &___emitSwipe_9; }
	inline void set_emitSwipe_9(bool value)
	{
		___emitSwipe_9 = value;
	}

	inline static int32_t get_offset_of_moveAmount_10() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___moveAmount_10)); }
	inline Vector2_t2156229523  get_moveAmount_10() const { return ___moveAmount_10; }
	inline Vector2_t2156229523 * get_address_of_moveAmount_10() { return &___moveAmount_10; }
	inline void set_moveAmount_10(Vector2_t2156229523  value)
	{
		___moveAmount_10 = value;
	}

	inline static int32_t get_offset_of_minMoveMagnitude_11() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___minMoveMagnitude_11)); }
	inline float get_minMoveMagnitude_11() const { return ___minMoveMagnitude_11; }
	inline float* get_address_of_minMoveMagnitude_11() { return &___minMoveMagnitude_11; }
	inline void set_minMoveMagnitude_11(float value)
	{
		___minMoveMagnitude_11 = value;
	}

	inline static int32_t get_offset_of_m_HapticsDC_12() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173, ___m_HapticsDC_12)); }
	inline int32_t get_m_HapticsDC_12() const { return ___m_HapticsDC_12; }
	inline int32_t* get_address_of_m_HapticsDC_12() { return &___m_HapticsDC_12; }
	inline void set_m_HapticsDC_12(int32_t value)
	{
		___m_HapticsDC_12 = value;
	}
};

struct ControllerInput_t2649977173_StaticFields
{
public:
	// System.Single Ximmerse.InputSystem.ControllerInput::AXIS_AS_BUTTON_THRESHOLD
	float ___AXIS_AS_BUTTON_THRESHOLD_8;

public:
	inline static int32_t get_offset_of_AXIS_AS_BUTTON_THRESHOLD_8() { return static_cast<int32_t>(offsetof(ControllerInput_t2649977173_StaticFields, ___AXIS_AS_BUTTON_THRESHOLD_8)); }
	inline float get_AXIS_AS_BUTTON_THRESHOLD_8() const { return ___AXIS_AS_BUTTON_THRESHOLD_8; }
	inline float* get_address_of_AXIS_AS_BUTTON_THRESHOLD_8() { return &___AXIS_AS_BUTTON_THRESHOLD_8; }
	inline void set_AXIS_AS_BUTTON_THRESHOLD_8(float value)
	{
		___AXIS_AS_BUTTON_THRESHOLD_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERINPUT_T2649977173_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef NODETRANSFORMPAIR_T1977563337_H
#define NODETRANSFORMPAIR_T1977563337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.VR.VRContext/NodeTransformPair
struct  NodeTransformPair_t1977563337  : public UKeyValuePair_2_t2895687901
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODETRANSFORMPAIR_T1977563337_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ONHMDMESSAGEDELEGATE_T2275695639_H
#define ONHMDMESSAGEDELEGATE_T2275695639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.VR.VRContext/OnHmdMessageDelegate
struct  OnHmdMessageDelegate_t2275695639  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONHMDMESSAGEDELEGATE_T2275695639_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef ONHMDUPDATEDELEGATE_T752438058_H
#define ONHMDUPDATEDELEGATE_T752438058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.VR.VRContext/OnHmdUpdateDelegate
struct  OnHmdUpdateDelegate_t752438058  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONHMDUPDATEDELEGATE_T752438058_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef VRDEVICE_T2014447455_H
#define VRDEVICE_T2014447455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.VR.VRDevice
struct  VRDevice_t2014447455  : public MonoBehaviour_t3962482529
{
public:
	// System.String Ximmerse.VR.VRDevice::family
	String_t* ___family_2;
	// Ximmerse.VR.TrackingOrigin Ximmerse.VR.VRDevice::trackingOriginType
	int32_t ___trackingOriginType_3;
	// UnityEngine.Vector3 Ximmerse.VR.VRDevice::neckPosition
	Vector3_t3722313464  ___neckPosition_4;
	// UnityEngine.Vector3 Ximmerse.VR.VRDevice::neckToEye
	Vector3_t3722313464  ___neckToEye_5;
	// System.String Ximmerse.VR.VRDevice::androidTargetName
	String_t* ___androidTargetName_6;
	// System.Boolean Ximmerse.VR.VRDevice::useUnityVR
	bool ___useUnityVR_7;
	// Ximmerse.VR.Pose3D Ximmerse.VR.VRDevice::inOutsideMarkPose
	Pose3D_t829638206 * ___inOutsideMarkPose_8;
	// Ximmerse.VR.Pose3D Ximmerse.VR.VRDevice::outsideInMarkPose
	Pose3D_t829638206 * ___outsideInMarkPose_9;
	// System.Single Ximmerse.VR.VRDevice::yawOffset
	float ___yawOffset_10;
	// Ximmerse.InputSystem.ControllerInput Ximmerse.VR.VRDevice::m_Input
	ControllerInput_t2649977173 * ___m_Input_11;
	// UnityEngine.Transform Ximmerse.VR.VRDevice::m_CenterEyeAnchor
	Transform_t3600365921 * ___m_CenterEyeAnchor_12;
	// UnityEngine.Transform Ximmerse.VR.VRDevice::m_EyeMover
	Transform_t3600365921 * ___m_EyeMover_13;
	// UnityEngine.Vector3 Ximmerse.VR.VRDevice::m_HeadPosition
	Vector3_t3722313464  ___m_HeadPosition_14;
	// System.Int32 Ximmerse.VR.VRDevice::m_Handle
	int32_t ___m_Handle_15;

public:
	inline static int32_t get_offset_of_family_2() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___family_2)); }
	inline String_t* get_family_2() const { return ___family_2; }
	inline String_t** get_address_of_family_2() { return &___family_2; }
	inline void set_family_2(String_t* value)
	{
		___family_2 = value;
		Il2CppCodeGenWriteBarrier((&___family_2), value);
	}

	inline static int32_t get_offset_of_trackingOriginType_3() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___trackingOriginType_3)); }
	inline int32_t get_trackingOriginType_3() const { return ___trackingOriginType_3; }
	inline int32_t* get_address_of_trackingOriginType_3() { return &___trackingOriginType_3; }
	inline void set_trackingOriginType_3(int32_t value)
	{
		___trackingOriginType_3 = value;
	}

	inline static int32_t get_offset_of_neckPosition_4() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___neckPosition_4)); }
	inline Vector3_t3722313464  get_neckPosition_4() const { return ___neckPosition_4; }
	inline Vector3_t3722313464 * get_address_of_neckPosition_4() { return &___neckPosition_4; }
	inline void set_neckPosition_4(Vector3_t3722313464  value)
	{
		___neckPosition_4 = value;
	}

	inline static int32_t get_offset_of_neckToEye_5() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___neckToEye_5)); }
	inline Vector3_t3722313464  get_neckToEye_5() const { return ___neckToEye_5; }
	inline Vector3_t3722313464 * get_address_of_neckToEye_5() { return &___neckToEye_5; }
	inline void set_neckToEye_5(Vector3_t3722313464  value)
	{
		___neckToEye_5 = value;
	}

	inline static int32_t get_offset_of_androidTargetName_6() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___androidTargetName_6)); }
	inline String_t* get_androidTargetName_6() const { return ___androidTargetName_6; }
	inline String_t** get_address_of_androidTargetName_6() { return &___androidTargetName_6; }
	inline void set_androidTargetName_6(String_t* value)
	{
		___androidTargetName_6 = value;
		Il2CppCodeGenWriteBarrier((&___androidTargetName_6), value);
	}

	inline static int32_t get_offset_of_useUnityVR_7() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___useUnityVR_7)); }
	inline bool get_useUnityVR_7() const { return ___useUnityVR_7; }
	inline bool* get_address_of_useUnityVR_7() { return &___useUnityVR_7; }
	inline void set_useUnityVR_7(bool value)
	{
		___useUnityVR_7 = value;
	}

	inline static int32_t get_offset_of_inOutsideMarkPose_8() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___inOutsideMarkPose_8)); }
	inline Pose3D_t829638206 * get_inOutsideMarkPose_8() const { return ___inOutsideMarkPose_8; }
	inline Pose3D_t829638206 ** get_address_of_inOutsideMarkPose_8() { return &___inOutsideMarkPose_8; }
	inline void set_inOutsideMarkPose_8(Pose3D_t829638206 * value)
	{
		___inOutsideMarkPose_8 = value;
		Il2CppCodeGenWriteBarrier((&___inOutsideMarkPose_8), value);
	}

	inline static int32_t get_offset_of_outsideInMarkPose_9() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___outsideInMarkPose_9)); }
	inline Pose3D_t829638206 * get_outsideInMarkPose_9() const { return ___outsideInMarkPose_9; }
	inline Pose3D_t829638206 ** get_address_of_outsideInMarkPose_9() { return &___outsideInMarkPose_9; }
	inline void set_outsideInMarkPose_9(Pose3D_t829638206 * value)
	{
		___outsideInMarkPose_9 = value;
		Il2CppCodeGenWriteBarrier((&___outsideInMarkPose_9), value);
	}

	inline static int32_t get_offset_of_yawOffset_10() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___yawOffset_10)); }
	inline float get_yawOffset_10() const { return ___yawOffset_10; }
	inline float* get_address_of_yawOffset_10() { return &___yawOffset_10; }
	inline void set_yawOffset_10(float value)
	{
		___yawOffset_10 = value;
	}

	inline static int32_t get_offset_of_m_Input_11() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___m_Input_11)); }
	inline ControllerInput_t2649977173 * get_m_Input_11() const { return ___m_Input_11; }
	inline ControllerInput_t2649977173 ** get_address_of_m_Input_11() { return &___m_Input_11; }
	inline void set_m_Input_11(ControllerInput_t2649977173 * value)
	{
		___m_Input_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Input_11), value);
	}

	inline static int32_t get_offset_of_m_CenterEyeAnchor_12() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___m_CenterEyeAnchor_12)); }
	inline Transform_t3600365921 * get_m_CenterEyeAnchor_12() const { return ___m_CenterEyeAnchor_12; }
	inline Transform_t3600365921 ** get_address_of_m_CenterEyeAnchor_12() { return &___m_CenterEyeAnchor_12; }
	inline void set_m_CenterEyeAnchor_12(Transform_t3600365921 * value)
	{
		___m_CenterEyeAnchor_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_CenterEyeAnchor_12), value);
	}

	inline static int32_t get_offset_of_m_EyeMover_13() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___m_EyeMover_13)); }
	inline Transform_t3600365921 * get_m_EyeMover_13() const { return ___m_EyeMover_13; }
	inline Transform_t3600365921 ** get_address_of_m_EyeMover_13() { return &___m_EyeMover_13; }
	inline void set_m_EyeMover_13(Transform_t3600365921 * value)
	{
		___m_EyeMover_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_EyeMover_13), value);
	}

	inline static int32_t get_offset_of_m_HeadPosition_14() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___m_HeadPosition_14)); }
	inline Vector3_t3722313464  get_m_HeadPosition_14() const { return ___m_HeadPosition_14; }
	inline Vector3_t3722313464 * get_address_of_m_HeadPosition_14() { return &___m_HeadPosition_14; }
	inline void set_m_HeadPosition_14(Vector3_t3722313464  value)
	{
		___m_HeadPosition_14 = value;
	}

	inline static int32_t get_offset_of_m_Handle_15() { return static_cast<int32_t>(offsetof(VRDevice_t2014447455, ___m_Handle_15)); }
	inline int32_t get_m_Handle_15() const { return ___m_Handle_15; }
	inline int32_t* get_address_of_m_Handle_15() { return &___m_Handle_15; }
	inline void set_m_Handle_15(int32_t value)
	{
		___m_Handle_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRDEVICE_T2014447455_H
#ifndef VRCONTEXT_T3387556500_H
#define VRCONTEXT_T3387556500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ximmerse.VR.VRContext
struct  VRContext_t3387556500  : public MonoBehaviour_t3962482529
{
public:
	// Ximmerse.VR.TrackingOrigin Ximmerse.VR.VRContext::trackingOriginType
	int32_t ___trackingOriginType_6;
	// Ximmerse.VR.VRDevice Ximmerse.VR.VRContext::vrDevice
	VRDevice_t2014447455 * ___vrDevice_7;
	// Ximmerse.VR.VRContext/NodeTransformPair[] Ximmerse.VR.VRContext::m_Anchors
	NodeTransformPairU5BU5D_t2284766708* ___m_Anchors_8;
	// System.Boolean Ximmerse.VR.VRContext::canRecenter
	bool ___canRecenter_9;
	// UnityEngine.Events.UnityAction Ximmerse.VR.VRContext::onRecenter
	UnityAction_t3245792599 * ___onRecenter_10;
	// System.Boolean Ximmerse.VR.VRContext::m_IsInited
	bool ___m_IsInited_11;
	// System.Single Ximmerse.VR.VRContext::m_LastHomeButtonPressedTime
	float ___m_LastHomeButtonPressedTime_12;
	// UnityEngine.Transform Ximmerse.VR.VRContext::m_UiRootVR
	Transform_t3600365921 * ___m_UiRootVR_13;
	// Ximmerse.UI.UIFade Ximmerse.VR.VRContext::m_UIFade
	UIFade_t773697809 * ___m_UIFade_14;

public:
	inline static int32_t get_offset_of_trackingOriginType_6() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___trackingOriginType_6)); }
	inline int32_t get_trackingOriginType_6() const { return ___trackingOriginType_6; }
	inline int32_t* get_address_of_trackingOriginType_6() { return &___trackingOriginType_6; }
	inline void set_trackingOriginType_6(int32_t value)
	{
		___trackingOriginType_6 = value;
	}

	inline static int32_t get_offset_of_vrDevice_7() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___vrDevice_7)); }
	inline VRDevice_t2014447455 * get_vrDevice_7() const { return ___vrDevice_7; }
	inline VRDevice_t2014447455 ** get_address_of_vrDevice_7() { return &___vrDevice_7; }
	inline void set_vrDevice_7(VRDevice_t2014447455 * value)
	{
		___vrDevice_7 = value;
		Il2CppCodeGenWriteBarrier((&___vrDevice_7), value);
	}

	inline static int32_t get_offset_of_m_Anchors_8() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___m_Anchors_8)); }
	inline NodeTransformPairU5BU5D_t2284766708* get_m_Anchors_8() const { return ___m_Anchors_8; }
	inline NodeTransformPairU5BU5D_t2284766708** get_address_of_m_Anchors_8() { return &___m_Anchors_8; }
	inline void set_m_Anchors_8(NodeTransformPairU5BU5D_t2284766708* value)
	{
		___m_Anchors_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Anchors_8), value);
	}

	inline static int32_t get_offset_of_canRecenter_9() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___canRecenter_9)); }
	inline bool get_canRecenter_9() const { return ___canRecenter_9; }
	inline bool* get_address_of_canRecenter_9() { return &___canRecenter_9; }
	inline void set_canRecenter_9(bool value)
	{
		___canRecenter_9 = value;
	}

	inline static int32_t get_offset_of_onRecenter_10() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___onRecenter_10)); }
	inline UnityAction_t3245792599 * get_onRecenter_10() const { return ___onRecenter_10; }
	inline UnityAction_t3245792599 ** get_address_of_onRecenter_10() { return &___onRecenter_10; }
	inline void set_onRecenter_10(UnityAction_t3245792599 * value)
	{
		___onRecenter_10 = value;
		Il2CppCodeGenWriteBarrier((&___onRecenter_10), value);
	}

	inline static int32_t get_offset_of_m_IsInited_11() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___m_IsInited_11)); }
	inline bool get_m_IsInited_11() const { return ___m_IsInited_11; }
	inline bool* get_address_of_m_IsInited_11() { return &___m_IsInited_11; }
	inline void set_m_IsInited_11(bool value)
	{
		___m_IsInited_11 = value;
	}

	inline static int32_t get_offset_of_m_LastHomeButtonPressedTime_12() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___m_LastHomeButtonPressedTime_12)); }
	inline float get_m_LastHomeButtonPressedTime_12() const { return ___m_LastHomeButtonPressedTime_12; }
	inline float* get_address_of_m_LastHomeButtonPressedTime_12() { return &___m_LastHomeButtonPressedTime_12; }
	inline void set_m_LastHomeButtonPressedTime_12(float value)
	{
		___m_LastHomeButtonPressedTime_12 = value;
	}

	inline static int32_t get_offset_of_m_UiRootVR_13() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___m_UiRootVR_13)); }
	inline Transform_t3600365921 * get_m_UiRootVR_13() const { return ___m_UiRootVR_13; }
	inline Transform_t3600365921 ** get_address_of_m_UiRootVR_13() { return &___m_UiRootVR_13; }
	inline void set_m_UiRootVR_13(Transform_t3600365921 * value)
	{
		___m_UiRootVR_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_UiRootVR_13), value);
	}

	inline static int32_t get_offset_of_m_UIFade_14() { return static_cast<int32_t>(offsetof(VRContext_t3387556500, ___m_UIFade_14)); }
	inline UIFade_t773697809 * get_m_UIFade_14() const { return ___m_UIFade_14; }
	inline UIFade_t773697809 ** get_address_of_m_UIFade_14() { return &___m_UIFade_14; }
	inline void set_m_UIFade_14(UIFade_t773697809 * value)
	{
		___m_UIFade_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_UIFade_14), value);
	}
};

struct VRContext_t3387556500_StaticFields
{
public:
	// Ximmerse.VR.VRContext Ximmerse.VR.VRContext::s_Main
	VRContext_t3387556500 * ___s_Main_2;
	// System.Boolean Ximmerse.VR.VRContext::s_MainCached
	bool ___s_MainCached_3;
	// Ximmerse.InputSystem.XDevicePlugin/ControllerStateDelegate Ximmerse.VR.VRContext::s_OnHmdUpdate
	ControllerStateDelegate_t3188270092 * ___s_OnHmdUpdate_4;
	// Ximmerse.InputSystem.XDevicePlugin/SendMessageDelegate Ximmerse.VR.VRContext::s_OnHmdMessage
	SendMessageDelegate_t1744817221 * ___s_OnHmdMessage_5;
	// Ximmerse.InputSystem.XDevicePlugin/ControllerStateDelegate Ximmerse.VR.VRContext::<>f__mg$cache0
	ControllerStateDelegate_t3188270092 * ___U3CU3Ef__mgU24cache0_15;
	// Ximmerse.InputSystem.XDevicePlugin/SendMessageDelegate Ximmerse.VR.VRContext::<>f__mg$cache1
	SendMessageDelegate_t1744817221 * ___U3CU3Ef__mgU24cache1_16;

public:
	inline static int32_t get_offset_of_s_Main_2() { return static_cast<int32_t>(offsetof(VRContext_t3387556500_StaticFields, ___s_Main_2)); }
	inline VRContext_t3387556500 * get_s_Main_2() const { return ___s_Main_2; }
	inline VRContext_t3387556500 ** get_address_of_s_Main_2() { return &___s_Main_2; }
	inline void set_s_Main_2(VRContext_t3387556500 * value)
	{
		___s_Main_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Main_2), value);
	}

	inline static int32_t get_offset_of_s_MainCached_3() { return static_cast<int32_t>(offsetof(VRContext_t3387556500_StaticFields, ___s_MainCached_3)); }
	inline bool get_s_MainCached_3() const { return ___s_MainCached_3; }
	inline bool* get_address_of_s_MainCached_3() { return &___s_MainCached_3; }
	inline void set_s_MainCached_3(bool value)
	{
		___s_MainCached_3 = value;
	}

	inline static int32_t get_offset_of_s_OnHmdUpdate_4() { return static_cast<int32_t>(offsetof(VRContext_t3387556500_StaticFields, ___s_OnHmdUpdate_4)); }
	inline ControllerStateDelegate_t3188270092 * get_s_OnHmdUpdate_4() const { return ___s_OnHmdUpdate_4; }
	inline ControllerStateDelegate_t3188270092 ** get_address_of_s_OnHmdUpdate_4() { return &___s_OnHmdUpdate_4; }
	inline void set_s_OnHmdUpdate_4(ControllerStateDelegate_t3188270092 * value)
	{
		___s_OnHmdUpdate_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_OnHmdUpdate_4), value);
	}

	inline static int32_t get_offset_of_s_OnHmdMessage_5() { return static_cast<int32_t>(offsetof(VRContext_t3387556500_StaticFields, ___s_OnHmdMessage_5)); }
	inline SendMessageDelegate_t1744817221 * get_s_OnHmdMessage_5() const { return ___s_OnHmdMessage_5; }
	inline SendMessageDelegate_t1744817221 ** get_address_of_s_OnHmdMessage_5() { return &___s_OnHmdMessage_5; }
	inline void set_s_OnHmdMessage_5(SendMessageDelegate_t1744817221 * value)
	{
		___s_OnHmdMessage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_OnHmdMessage_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(VRContext_t3387556500_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline ControllerStateDelegate_t3188270092 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline ControllerStateDelegate_t3188270092 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(ControllerStateDelegate_t3188270092 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_16() { return static_cast<int32_t>(offsetof(VRContext_t3387556500_StaticFields, ___U3CU3Ef__mgU24cache1_16)); }
	inline SendMessageDelegate_t1744817221 * get_U3CU3Ef__mgU24cache1_16() const { return ___U3CU3Ef__mgU24cache1_16; }
	inline SendMessageDelegate_t1744817221 ** get_address_of_U3CU3Ef__mgU24cache1_16() { return &___U3CU3Ef__mgU24cache1_16; }
	inline void set_U3CU3Ef__mgU24cache1_16(SendMessageDelegate_t1744817221 * value)
	{
		___U3CU3Ef__mgU24cache1_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRCONTEXT_T3387556500_H

extern "C" void ControllerState_t807240995_marshal_pinvoke(const ControllerState_t807240995& unmarshaled, ControllerState_t807240995_marshaled_pinvoke& marshaled);
extern "C" void ControllerState_t807240995_marshal_pinvoke_back(const ControllerState_t807240995_marshaled_pinvoke& marshaled, ControllerState_t807240995& unmarshaled);
extern "C" void ControllerState_t807240995_marshal_pinvoke_cleanup(ControllerState_t807240995_marshaled_pinvoke& marshaled);

// System.Void Ximmerse.UKeyValuePair`2<Ximmerse.VR.VRNode,System.Object>::.ctor()
extern "C"  void UKeyValuePair_2__ctor_m1353118565_gshared (UKeyValuePair_2_t2375428144 * __this, const RuntimeMethod* method);

// System.Void Ximmerse.UKeyValuePair`2<Ximmerse.VR.VRNode,UnityEngine.Transform>::.ctor()
#define UKeyValuePair_2__ctor_m394576690(__this, method) ((  void (*) (UKeyValuePair_2_t2895687901 *, const RuntimeMethod*))UKeyValuePair_2__ctor_m1353118565_gshared)(__this, method)
// System.Int32 Ximmerse.VR.VRContext/OnHmdMessageDelegate::Invoke(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t OnHmdMessageDelegate_Invoke_m2717238563 (OnHmdMessageDelegate_t2275695639 * __this, int32_t ___which0, int32_t ___Msg1, int32_t ___wParam2, int32_t ___lParam3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ximmerse.VR.VRContext/OnHmdUpdateDelegate::Invoke(System.Int32,Ximmerse.InputSystem.XDevicePlugin/ControllerState&)
extern "C"  int32_t OnHmdUpdateDelegate_Invoke_m4276123533 (OnHmdUpdateDelegate_t752438058 * __this, int32_t ___which0, ControllerState_t807240995 * ___state1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Ximmerse.InputSystem.ControllerInput Ximmerse.InputSystem.ControllerInputManager::GetInput(Ximmerse.InputSystem.ControllerType)
extern "C"  ControllerInput_t2649977173 * ControllerInputManager_GetInput_m1885621322 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ximmerse.InputSystem.XDevicePlugin::GetInputDeviceHandle(System.String)
extern "C"  int32_t XDevicePlugin_GetInputDeviceHandle_m1469331978 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C"  void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.XR.InputTracking::GetLocalRotation(UnityEngine.XR.XRNode)
extern "C"  Quaternion_t2301928331  InputTracking_GetLocalRotation_m2382608674 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.XR.XRDevice::get_isPresent()
extern "C"  bool XRDevice_get_isPresent_m3184523938 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
extern "C"  float XRDevice_get_refreshRate_m3341692606 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ximmerse.InputSystem.XDevicePlugin::GetBool(System.Int32,System.Int32,System.Boolean)
extern "C"  bool XDevicePlugin_GetBool_m3478673465 (RuntimeObject * __this /* static, unused */, int32_t ___which0, int32_t ___fieldID1, bool ___defaultValue2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.InputTracking::Recenter()
extern "C"  void InputTracking_Recenter_m2567180576 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ximmerse.VR.VRContext/NodeTransformPair::.ctor()
extern "C"  void NodeTransformPair__ctor_m2500722749 (NodeTransformPair_t1977563337 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeTransformPair__ctor_m2500722749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UKeyValuePair_2__ctor_m394576690(__this, /*hidden argument*/UKeyValuePair_2__ctor_m394576690_RuntimeMethod_var);
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
extern "C"  int32_t DelegatePInvokeWrapper_OnHmdMessageDelegate_t2275695639 (OnHmdMessageDelegate_t2275695639 * __this, int32_t ___which0, int32_t ___Msg1, int32_t ___wParam2, int32_t ___lParam3, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___which0, ___Msg1, ___wParam2, ___lParam3);

	return returnValue;
}
// System.Void Ximmerse.VR.VRContext/OnHmdMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnHmdMessageDelegate__ctor_m1206382648 (OnHmdMessageDelegate_t2275695639 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Ximmerse.VR.VRContext/OnHmdMessageDelegate::Invoke(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t OnHmdMessageDelegate_Invoke_m2717238563 (OnHmdMessageDelegate_t2275695639 * __this, int32_t ___which0, int32_t ___Msg1, int32_t ___wParam2, int32_t ___lParam3, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		OnHmdMessageDelegate_Invoke_m2717238563((OnHmdMessageDelegate_t2275695639 *)__this->get_prev_9(), ___which0, ___Msg1, ___wParam2, ___lParam3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			typedef int32_t (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, ___which0, ___Msg1, ___wParam2, ___lParam3, targetMethod);
		}
		else
		{
			// closed
			typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___which0, ___Msg1, ___wParam2, ___lParam3, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef int32_t (*FunctionPointerType) (void*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___which0, ___Msg1, ___wParam2, ___lParam3, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult Ximmerse.VR.VRContext/OnHmdMessageDelegate::BeginInvoke(System.Int32,System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnHmdMessageDelegate_BeginInvoke_m72397307 (OnHmdMessageDelegate_t2275695639 * __this, int32_t ___which0, int32_t ___Msg1, int32_t ___wParam2, int32_t ___lParam3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnHmdMessageDelegate_BeginInvoke_m72397307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___which0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___Msg1);
	__d_args[2] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___wParam2);
	__d_args[3] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___lParam3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 Ximmerse.VR.VRContext/OnHmdMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  int32_t OnHmdMessageDelegate_EndInvoke_m2130235168 (OnHmdMessageDelegate_t2275695639 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper_OnHmdUpdateDelegate_t752438058 (OnHmdUpdateDelegate_t752438058 * __this, int32_t ___which0, ControllerState_t807240995 * ___state1, const RuntimeMethod* method)
{


	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, ControllerState_t807240995_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___state1' to native representation
	ControllerState_t807240995_marshaled_pinvoke* ____state1_marshaled = NULL;
	ControllerState_t807240995_marshaled_pinvoke ____state1_marshaled_dereferenced = {};
	ControllerState_t807240995_marshal_pinvoke(*___state1, ____state1_marshaled_dereferenced);
	____state1_marshaled = &____state1_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___which0, ____state1_marshaled);

	// Marshaling of parameter '___state1' back from native representation
	ControllerState_t807240995  _____state1_marshaled_unmarshaled_dereferenced;
	memset(&_____state1_marshaled_unmarshaled_dereferenced, 0, sizeof(_____state1_marshaled_unmarshaled_dereferenced));
	ControllerState_t807240995_marshal_pinvoke_back(*____state1_marshaled, _____state1_marshaled_unmarshaled_dereferenced);
	*___state1 = _____state1_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___state1' native representation
	ControllerState_t807240995_marshal_pinvoke_cleanup(*____state1_marshaled);

	return returnValue;
}
// System.Void Ximmerse.VR.VRContext/OnHmdUpdateDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnHmdUpdateDelegate__ctor_m3423861513 (OnHmdUpdateDelegate_t752438058 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Ximmerse.VR.VRContext/OnHmdUpdateDelegate::Invoke(System.Int32,Ximmerse.InputSystem.XDevicePlugin/ControllerState&)
extern "C"  int32_t OnHmdUpdateDelegate_Invoke_m4276123533 (OnHmdUpdateDelegate_t752438058 * __this, int32_t ___which0, ControllerState_t807240995 * ___state1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		OnHmdUpdateDelegate_Invoke_m4276123533((OnHmdUpdateDelegate_t752438058 *)__this->get_prev_9(), ___which0, ___state1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			typedef int32_t (*FunctionPointerType) (RuntimeObject *, int32_t, ControllerState_t807240995 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, ___which0, ___state1, targetMethod);
		}
		else
		{
			// closed
			typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, int32_t, ControllerState_t807240995 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___which0, ___state1, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef int32_t (*FunctionPointerType) (void*, int32_t, ControllerState_t807240995 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___which0, ___state1, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult Ximmerse.VR.VRContext/OnHmdUpdateDelegate::BeginInvoke(System.Int32,Ximmerse.InputSystem.XDevicePlugin/ControllerState&,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnHmdUpdateDelegate_BeginInvoke_m630492041 (OnHmdUpdateDelegate_t752438058 * __this, int32_t ___which0, ControllerState_t807240995 * ___state1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnHmdUpdateDelegate_BeginInvoke_m630492041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___which0);
	__d_args[1] = Box(ControllerState_t807240995_il2cpp_TypeInfo_var, &*___state1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 Ximmerse.VR.VRContext/OnHmdUpdateDelegate::EndInvoke(Ximmerse.InputSystem.XDevicePlugin/ControllerState&,System.IAsyncResult)
extern "C"  int32_t OnHmdUpdateDelegate_EndInvoke_m1227417356 (OnHmdUpdateDelegate_t752438058 * __this, ControllerState_t807240995 * ___state0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___state0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ximmerse.VR.VRDevice::.ctor()
extern "C"  void VRDevice__ctor_m1611853259 (VRDevice_t2014447455 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ximmerse.VR.VRDevice::Start()
extern "C"  void VRDevice_Start_m641285167 (VRDevice_t2014447455 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRDevice_Start_m641285167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ControllerInputManager_t315547476_il2cpp_TypeInfo_var);
		ControllerInput_t2649977173 * L_0 = ControllerInputManager_GetInput_m1885621322(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		__this->set_m_Input_11(L_0);
		return;
	}
}
// System.Void Ximmerse.VR.VRDevice::Update()
extern "C"  void VRDevice_Update_m3790610245 (VRDevice_t2014447455 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRDevice_Update_m3790610245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerInput_t2649977173 * L_0 = __this->get_m_Input_11();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		ControllerInput_t2649977173 * L_1 = __this->get_m_Input_11();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean Ximmerse.InputSystem.ControllerInput::get_positionTracked() */, L_1);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		ControllerInput_t2649977173 * L_3 = __this->get_m_Input_11();
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(16 /* UnityEngine.Vector3 Ximmerse.InputSystem.ControllerInput::GetPosition() */, L_3);
		__this->set_m_HeadPosition_14(L_4);
	}

IL_002c:
	{
		Transform_t3600365921 * L_5 = __this->get_m_EyeMover_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0094;
		}
	}
	{
		Transform_t3600365921 * L_7 = __this->get_m_EyeMover_13();
		float L_8 = __this->get_yawOffset_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_10 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localRotation_m19445462(L_7, L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = __this->get_m_EyeMover_13();
		Vector3_t3722313464  L_12 = __this->get_m_HeadPosition_14();
		Transform_t3600365921 * L_13 = __this->get_m_EyeMover_13();
		NullCheck(L_13);
		Quaternion_t2301928331  L_14 = Transform_get_localRotation_m3487911431(L_13, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = __this->get_m_CenterEyeAnchor_12();
		NullCheck(L_15);
		Quaternion_t2301928331  L_16 = Transform_get_localRotation_m3487911431(L_15, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_17 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = __this->get_neckToEye_5();
		Vector3_t3722313464  L_19 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_12, L_19, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_m4128471975(L_11, L_20, /*hidden argument*/NULL);
	}

IL_0094:
	{
		return;
	}
}
// System.Void Ximmerse.VR.VRDevice::InitDevice(Ximmerse.VR.VRContext)
extern "C"  void VRDevice_InitDevice_m3127146416 (VRDevice_t2014447455 * __this, VRContext_t3387556500 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRDevice_InitDevice_m3127146416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XDevicePlugin_t1404987341_il2cpp_TypeInfo_var);
		int32_t L_0 = XDevicePlugin_GetInputDeviceHandle_m1469331978(NULL /*static, unused*/, _stringLiteral2665836531, /*hidden argument*/NULL);
		__this->set_m_Handle_15(L_0);
		return;
	}
}
// System.Void Ximmerse.VR.VRDevice::OnVRContextInited(Ximmerse.VR.VRContext)
extern "C"  void VRDevice_OnVRContextInited_m3807532400 (VRDevice_t2014447455 * __this, VRContext_t3387556500 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRDevice_OnVRContextInited_m3807532400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VRContext_t3387556500 * L_0 = ___context0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = VirtFuncInvoker2< Transform_t3600365921 *, int32_t, Transform_t3600365921 * >::Invoke(8 /* UnityEngine.Transform Ximmerse.VR.VRContext::GetAnchor(Ximmerse.VR.VRNode,UnityEngine.Transform) */, L_0, 2, (Transform_t3600365921 *)NULL);
		__this->set_m_CenterEyeAnchor_12(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_HeadPosition_14(L_2);
		__this->set_yawOffset_10((0.0f));
		Transform_t3600365921 * L_3 = __this->get_m_CenterEyeAnchor_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00d1;
		}
	}
	{
		GameObject_t1113636619 * L_5 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_5, _stringLiteral2290741352, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		__this->set_m_EyeMover_13(L_6);
		Transform_t3600365921 * L_7 = __this->get_m_EyeMover_13();
		Transform_t3600365921 * L_8 = __this->get_m_CenterEyeAnchor_12();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = Transform_get_parent_m835071599(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m381167889(L_7, L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = __this->get_m_EyeMover_13();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m4128471975(L_10, L_11, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = __this->get_m_EyeMover_13();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_13 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localRotation_m19445462(L_12, L_13, /*hidden argument*/NULL);
		Transform_t3600365921 * L_14 = __this->get_m_EyeMover_13();
		Vector3_t3722313464  L_15 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_m3053443106(L_14, L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = __this->get_m_CenterEyeAnchor_12();
		Transform_t3600365921 * L_17 = __this->get_m_EyeMover_13();
		NullCheck(L_16);
		Transform_SetParent_m381167889(L_16, L_17, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = __this->get_m_CenterEyeAnchor_12();
		Vector3_t3722313464  L_19 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localPosition_m4128471975(L_18, L_19, /*hidden argument*/NULL);
		Transform_t3600365921 * L_20 = __this->get_m_CenterEyeAnchor_12();
		Quaternion_t2301928331  L_21 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localRotation_m19445462(L_20, L_21, /*hidden argument*/NULL);
		Transform_t3600365921 * L_22 = __this->get_m_CenterEyeAnchor_12();
		Vector3_t3722313464  L_23 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m3053443106(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		return;
	}
}
// UnityEngine.Quaternion Ximmerse.VR.VRDevice::GetRotation()
extern "C"  Quaternion_t2301928331  VRDevice_GetRotation_m69145819 (VRDevice_t2014447455 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRDevice_GetRotation_m69145819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_useUnityVR_7();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_1 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Transform_t3600365921 * L_2 = __this->get_m_CenterEyeAnchor_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		Transform_t3600365921 * L_4 = __this->get_m_CenterEyeAnchor_12();
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = Transform_get_localRotation_m3487911431(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Ximmerse.VR.VRDevice::get_isPresent()
extern "C"  bool VRDevice_get_isPresent_m2888137720 (VRDevice_t2014447455 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_useUnityVR_7();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = XRDevice_get_isPresent_m3184523938(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Boolean Ximmerse.VR.VRDevice::get_isUserPresent()
extern "C"  bool VRDevice_get_isUserPresent_m4122015203 (VRDevice_t2014447455 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Single Ximmerse.VR.VRDevice::get_refreshRate()
extern "C"  float VRDevice_get_refreshRate_m3378074750 (VRDevice_t2014447455 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_useUnityVR_7();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		float L_1 = XRDevice_get_refreshRate_m3341692606(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		return (60.0f);
	}
}
// System.Void Ximmerse.VR.VRDevice::Recenter()
extern "C"  void VRDevice_Recenter_m3623678401 (VRDevice_t2014447455 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRDevice_Recenter_m3623678401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_m_Handle_15();
		IL2CPP_RUNTIME_CLASS_INIT(XDevicePlugin_t1404987341_il2cpp_TypeInfo_var);
		bool L_1 = XDevicePlugin_GetBool_m3478673465(NULL /*static, unused*/, L_0, ((int32_t)10), (bool)0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		bool L_2 = __this->get_useUnityVR_7();
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		InputTracking_Recenter_m2567180576(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0024:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
