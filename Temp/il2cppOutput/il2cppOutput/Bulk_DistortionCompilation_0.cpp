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


// DistortionEquation
struct DistortionEquation_t32189124;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var;
extern const uint32_t DistortionEquation_RightDistortionCoordinate_m206106448_MetadataUsageId;
extern const uint32_t DistortionEquation_ProduceLegend_m376376095_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____830259D5797FAA1B825FA36D999D6BAB5495E830_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____44530A054DCA26FC650A35148637FF13D8CEA67A_0_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2_FieldInfo_var;
extern const uint32_t DistortionEquation__ctor_m821249214_MetadataUsageId;

struct DoubleU5BU5D_t3413330114;


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
#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
#ifndef DISTORTIONEQUATION_T32189124_H
#define DISTORTIONEQUATION_T32189124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DistortionEquation
struct  DistortionEquation_t32189124  : public RuntimeObject
{
public:
	// System.Double[] DistortionEquation::coefficientsXLeft
	DoubleU5BU5D_t3413330114* ___coefficientsXLeft_0;
	// System.Double[] DistortionEquation::coefficientsXRight
	DoubleU5BU5D_t3413330114* ___coefficientsXRight_1;
	// System.Double[] DistortionEquation::coefficientsYLeft
	DoubleU5BU5D_t3413330114* ___coefficientsYLeft_2;
	// System.Double[] DistortionEquation::coefficientsYRight
	DoubleU5BU5D_t3413330114* ___coefficientsYRight_3;

public:
	inline static int32_t get_offset_of_coefficientsXLeft_0() { return static_cast<int32_t>(offsetof(DistortionEquation_t32189124, ___coefficientsXLeft_0)); }
	inline DoubleU5BU5D_t3413330114* get_coefficientsXLeft_0() const { return ___coefficientsXLeft_0; }
	inline DoubleU5BU5D_t3413330114** get_address_of_coefficientsXLeft_0() { return &___coefficientsXLeft_0; }
	inline void set_coefficientsXLeft_0(DoubleU5BU5D_t3413330114* value)
	{
		___coefficientsXLeft_0 = value;
		Il2CppCodeGenWriteBarrier((&___coefficientsXLeft_0), value);
	}

	inline static int32_t get_offset_of_coefficientsXRight_1() { return static_cast<int32_t>(offsetof(DistortionEquation_t32189124, ___coefficientsXRight_1)); }
	inline DoubleU5BU5D_t3413330114* get_coefficientsXRight_1() const { return ___coefficientsXRight_1; }
	inline DoubleU5BU5D_t3413330114** get_address_of_coefficientsXRight_1() { return &___coefficientsXRight_1; }
	inline void set_coefficientsXRight_1(DoubleU5BU5D_t3413330114* value)
	{
		___coefficientsXRight_1 = value;
		Il2CppCodeGenWriteBarrier((&___coefficientsXRight_1), value);
	}

	inline static int32_t get_offset_of_coefficientsYLeft_2() { return static_cast<int32_t>(offsetof(DistortionEquation_t32189124, ___coefficientsYLeft_2)); }
	inline DoubleU5BU5D_t3413330114* get_coefficientsYLeft_2() const { return ___coefficientsYLeft_2; }
	inline DoubleU5BU5D_t3413330114** get_address_of_coefficientsYLeft_2() { return &___coefficientsYLeft_2; }
	inline void set_coefficientsYLeft_2(DoubleU5BU5D_t3413330114* value)
	{
		___coefficientsYLeft_2 = value;
		Il2CppCodeGenWriteBarrier((&___coefficientsYLeft_2), value);
	}

	inline static int32_t get_offset_of_coefficientsYRight_3() { return static_cast<int32_t>(offsetof(DistortionEquation_t32189124, ___coefficientsYRight_3)); }
	inline DoubleU5BU5D_t3413330114* get_coefficientsYRight_3() const { return ___coefficientsYRight_3; }
	inline DoubleU5BU5D_t3413330114** get_address_of_coefficientsYRight_3() { return &___coefficientsYRight_3; }
	inline void set_coefficientsYRight_3(DoubleU5BU5D_t3413330114* value)
	{
		___coefficientsYRight_3 = value;
		Il2CppCodeGenWriteBarrier((&___coefficientsYRight_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISTORTIONEQUATION_T32189124_H
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
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef __STATICARRAYINITTYPESIZEU3D200_T2134545495_H
#define __STATICARRAYINITTYPESIZEU3D200_T2134545495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=200
struct  __StaticArrayInitTypeSizeU3D200_t2134545495 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D200_t2134545495__padding[200];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D200_T2134545495_H
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
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=200 <PrivateImplementationDetails>::44530A054DCA26FC650A35148637FF13D8CEA67A
	__StaticArrayInitTypeSizeU3D200_t2134545495  ___44530A054DCA26FC650A35148637FF13D8CEA67A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=200 <PrivateImplementationDetails>::830259D5797FAA1B825FA36D999D6BAB5495E830
	__StaticArrayInitTypeSizeU3D200_t2134545495  ___830259D5797FAA1B825FA36D999D6BAB5495E830_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=200 <PrivateImplementationDetails>::B2B15701B993D732A252F1C3CABA2D664A9AEE4C
	__StaticArrayInitTypeSizeU3D200_t2134545495  ___B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=200 <PrivateImplementationDetails>::D2137D93E3FCF6E7E3EB4713D9A30359193884AB
	__StaticArrayInitTypeSizeU3D200_t2134545495  ___D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3;

public:
	inline static int32_t get_offset_of_U344530A054DCA26FC650A35148637FF13D8CEA67A_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___44530A054DCA26FC650A35148637FF13D8CEA67A_0)); }
	inline __StaticArrayInitTypeSizeU3D200_t2134545495  get_U344530A054DCA26FC650A35148637FF13D8CEA67A_0() const { return ___44530A054DCA26FC650A35148637FF13D8CEA67A_0; }
	inline __StaticArrayInitTypeSizeU3D200_t2134545495 * get_address_of_U344530A054DCA26FC650A35148637FF13D8CEA67A_0() { return &___44530A054DCA26FC650A35148637FF13D8CEA67A_0; }
	inline void set_U344530A054DCA26FC650A35148637FF13D8CEA67A_0(__StaticArrayInitTypeSizeU3D200_t2134545495  value)
	{
		___44530A054DCA26FC650A35148637FF13D8CEA67A_0 = value;
	}

	inline static int32_t get_offset_of_U3830259D5797FAA1B825FA36D999D6BAB5495E830_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___830259D5797FAA1B825FA36D999D6BAB5495E830_1)); }
	inline __StaticArrayInitTypeSizeU3D200_t2134545495  get_U3830259D5797FAA1B825FA36D999D6BAB5495E830_1() const { return ___830259D5797FAA1B825FA36D999D6BAB5495E830_1; }
	inline __StaticArrayInitTypeSizeU3D200_t2134545495 * get_address_of_U3830259D5797FAA1B825FA36D999D6BAB5495E830_1() { return &___830259D5797FAA1B825FA36D999D6BAB5495E830_1; }
	inline void set_U3830259D5797FAA1B825FA36D999D6BAB5495E830_1(__StaticArrayInitTypeSizeU3D200_t2134545495  value)
	{
		___830259D5797FAA1B825FA36D999D6BAB5495E830_1 = value;
	}

	inline static int32_t get_offset_of_B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2)); }
	inline __StaticArrayInitTypeSizeU3D200_t2134545495  get_B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2() const { return ___B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2; }
	inline __StaticArrayInitTypeSizeU3D200_t2134545495 * get_address_of_B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2() { return &___B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2; }
	inline void set_B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2(__StaticArrayInitTypeSizeU3D200_t2134545495  value)
	{
		___B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2 = value;
	}

	inline static int32_t get_offset_of_D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3)); }
	inline __StaticArrayInitTypeSizeU3D200_t2134545495  get_D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3() const { return ___D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3; }
	inline __StaticArrayInitTypeSizeU3D200_t2134545495 * get_address_of_D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3() { return &___D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3; }
	inline void set_D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3(__StaticArrayInitTypeSizeU3D200_t2134545495  value)
	{
		___D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};



// System.Double[] DistortionEquation::ProduceLegend(System.Double,System.Double,System.Double)
extern "C"  DoubleU5BU5D_t3413330114* DistortionEquation_ProduceLegend_m376376095 (DistortionEquation_t32189124 * __this, double ___x10, double ___x21, double ___x32, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double DistortionEquation::ProduceCoordinate(System.Double[],System.Double[])
extern "C"  double DistortionEquation_ProduceCoordinate_m2812896219 (DistortionEquation_t32189124 * __this, DoubleU5BU5D_t3413330114* ___legend0, DoubleU5BU5D_t3413330114* ___coefficients1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Double[] DistortionEquation::RightDistortionCoordinate(System.Single,System.Single,System.Single)
extern "C"  DoubleU5BU5D_t3413330114* DistortionEquation_RightDistortionCoordinate_m206106448 (DistortionEquation_t32189124 * __this, float ___theta0, float ___phi1, float ___IPD2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistortionEquation_RightDistortionCoordinate_m206106448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t3413330114* V_0 = NULL;
	double V_1 = 0.0;
	double V_2 = 0.0;
	DoubleU5BU5D_t3413330114* V_3 = NULL;
	DoubleU5BU5D_t3413330114* V_4 = NULL;
	{
		float L_0 = ___theta0;
		float L_1 = ___phi1;
		float L_2 = ___IPD2;
		DoubleU5BU5D_t3413330114* L_3 = DistortionEquation_ProduceLegend_m376376095(__this, (((double)((double)L_0))), (((double)((double)L_1))), (((double)((double)L_2))), /*hidden argument*/NULL);
		V_0 = L_3;
		DoubleU5BU5D_t3413330114* L_4 = V_0;
		DoubleU5BU5D_t3413330114* L_5 = __this->get_coefficientsXRight_1();
		double L_6 = DistortionEquation_ProduceCoordinate_m2812896219(__this, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		DoubleU5BU5D_t3413330114* L_7 = V_0;
		DoubleU5BU5D_t3413330114* L_8 = __this->get_coefficientsYRight_3();
		double L_9 = DistortionEquation_ProduceCoordinate_m2812896219(__this, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		DoubleU5BU5D_t3413330114* L_10 = ((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)2));
		double L_11 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_11);
		DoubleU5BU5D_t3413330114* L_12 = L_10;
		double L_13 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_13);
		V_3 = L_12;
		DoubleU5BU5D_t3413330114* L_14 = V_3;
		V_4 = L_14;
		goto IL_003e;
	}

IL_003e:
	{
		DoubleU5BU5D_t3413330114* L_15 = V_4;
		return L_15;
	}
}
// System.Double DistortionEquation::ProduceCoordinate(System.Double[],System.Double[])
extern "C"  double DistortionEquation_ProduceCoordinate_m2812896219 (DistortionEquation_t32189124 * __this, DoubleU5BU5D_t3413330114* ___legend0, DoubleU5BU5D_t3413330114* ___coefficients1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	double V_4 = 0.0;
	{
		V_0 = (0.0);
		DoubleU5BU5D_t3413330114* L_0 = ___legend0;
		NullCheck(L_0);
		DoubleU5BU5D_t3413330114* L_1 = ___coefficients1;
		NullCheck(L_1);
		V_1 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		V_2 = 0;
		goto IL_002c;
	}

IL_001c:
	{
		double L_3 = V_0;
		DoubleU5BU5D_t3413330114* L_4 = ___legend0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		double L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		DoubleU5BU5D_t3413330114* L_8 = ___coefficients1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		double L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((double)il2cpp_codegen_add((double)L_3, (double)((double)il2cpp_codegen_multiply((double)L_7, (double)L_11))));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_13 = V_2;
		DoubleU5BU5D_t3413330114* L_14 = ___legend0;
		NullCheck(L_14);
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length))))))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_001c;
		}
	}
	{
	}

IL_0037:
	{
		double L_16 = V_0;
		V_4 = L_16;
		goto IL_003c;
	}

IL_003c:
	{
		double L_17 = V_4;
		return L_17;
	}
}
// System.Double[] DistortionEquation::ProduceLegend(System.Double,System.Double,System.Double)
extern "C"  DoubleU5BU5D_t3413330114* DistortionEquation_ProduceLegend_m376376095 (DistortionEquation_t32189124 * __this, double ___x10, double ___x21, double ___x32, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistortionEquation_ProduceLegend_m376376095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t3413330114* V_0 = NULL;
	DoubleU5BU5D_t3413330114* V_1 = NULL;
	{
		DoubleU5BU5D_t3413330114* L_0 = ((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25)));
		double L_1 = ___x32;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_1);
		DoubleU5BU5D_t3413330114* L_2 = L_0;
		double L_3 = ___x21;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_3);
		DoubleU5BU5D_t3413330114* L_4 = L_2;
		double L_5 = ___x21;
		double L_6 = ___x32;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_multiply((double)L_5, (double)L_6)));
		DoubleU5BU5D_t3413330114* L_7 = L_4;
		double L_8 = ___x21;
		double L_9 = ___x21;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)il2cpp_codegen_multiply((double)L_8, (double)L_9)));
		DoubleU5BU5D_t3413330114* L_10 = L_7;
		double L_11 = ___x21;
		double L_12 = ___x21;
		double L_13 = ___x32;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_11, (double)L_12)), (double)L_13)));
		DoubleU5BU5D_t3413330114* L_14 = L_10;
		double L_15 = ___x21;
		double L_16 = ___x21;
		double L_17 = ___x21;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_15, (double)L_16)), (double)L_17)));
		DoubleU5BU5D_t3413330114* L_18 = L_14;
		double L_19 = ___x21;
		double L_20 = ___x21;
		double L_21 = ___x21;
		double L_22 = ___x32;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_19, (double)L_20)), (double)L_21)), (double)L_22)));
		DoubleU5BU5D_t3413330114* L_23 = L_18;
		double L_24 = ___x10;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (double)L_24);
		DoubleU5BU5D_t3413330114* L_25 = L_23;
		double L_26 = ___x10;
		double L_27 = ___x32;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(8), (double)((double)il2cpp_codegen_multiply((double)L_26, (double)L_27)));
		DoubleU5BU5D_t3413330114* L_28 = L_25;
		double L_29 = ___x10;
		double L_30 = ___x21;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (double)((double)il2cpp_codegen_multiply((double)L_29, (double)L_30)));
		DoubleU5BU5D_t3413330114* L_31 = L_28;
		double L_32 = ___x10;
		double L_33 = ___x21;
		double L_34 = ___x32;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_32, (double)L_33)), (double)L_34)));
		DoubleU5BU5D_t3413330114* L_35 = L_31;
		double L_36 = ___x10;
		double L_37 = ___x21;
		double L_38 = ___x21;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_36, (double)L_37)), (double)L_38)));
		DoubleU5BU5D_t3413330114* L_39 = L_35;
		double L_40 = ___x10;
		double L_41 = ___x21;
		double L_42 = ___x21;
		double L_43 = ___x32;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_40, (double)L_41)), (double)L_42)), (double)L_43)));
		DoubleU5BU5D_t3413330114* L_44 = L_39;
		double L_45 = ___x10;
		double L_46 = ___x21;
		double L_47 = ___x21;
		double L_48 = ___x21;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_45, (double)L_46)), (double)L_47)), (double)L_48)));
		DoubleU5BU5D_t3413330114* L_49 = L_44;
		double L_50 = ___x10;
		double L_51 = ___x10;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (double)((double)il2cpp_codegen_multiply((double)L_50, (double)L_51)));
		DoubleU5BU5D_t3413330114* L_52 = L_49;
		double L_53 = ___x10;
		double L_54 = ___x10;
		double L_55 = ___x32;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_53, (double)L_54)), (double)L_55)));
		DoubleU5BU5D_t3413330114* L_56 = L_52;
		double L_57 = ___x10;
		double L_58 = ___x10;
		double L_59 = ___x21;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_57, (double)L_58)), (double)L_59)));
		DoubleU5BU5D_t3413330114* L_60 = L_56;
		double L_61 = ___x10;
		double L_62 = ___x10;
		double L_63 = ___x21;
		double L_64 = ___x32;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_61, (double)L_62)), (double)L_63)), (double)L_64)));
		DoubleU5BU5D_t3413330114* L_65 = L_60;
		double L_66 = ___x10;
		double L_67 = ___x10;
		double L_68 = ___x21;
		double L_69 = ___x21;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_66, (double)L_67)), (double)L_68)), (double)L_69)));
		DoubleU5BU5D_t3413330114* L_70 = L_65;
		double L_71 = ___x10;
		double L_72 = ___x10;
		double L_73 = ___x10;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_71, (double)L_72)), (double)L_73)));
		DoubleU5BU5D_t3413330114* L_74 = L_70;
		double L_75 = ___x10;
		double L_76 = ___x10;
		double L_77 = ___x10;
		double L_78 = ___x32;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_75, (double)L_76)), (double)L_77)), (double)L_78)));
		DoubleU5BU5D_t3413330114* L_79 = L_74;
		double L_80 = ___x10;
		double L_81 = ___x10;
		double L_82 = ___x10;
		double L_83 = ___x21;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_80, (double)L_81)), (double)L_82)), (double)L_83)));
		DoubleU5BU5D_t3413330114* L_84 = L_79;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (double)(1.0));
		DoubleU5BU5D_t3413330114* L_85 = L_84;
		double L_86 = ___x10;
		double L_87 = ___x10;
		double L_88 = ___x10;
		double L_89 = ___x10;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_86, (double)L_87)), (double)L_88)), (double)L_89)));
		DoubleU5BU5D_t3413330114* L_90 = L_85;
		double L_91 = ___x21;
		double L_92 = ___x21;
		double L_93 = ___x21;
		double L_94 = ___x21;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_91, (double)L_92)), (double)L_93)), (double)L_94)));
		V_0 = L_90;
		DoubleU5BU5D_t3413330114* L_95 = V_0;
		V_1 = L_95;
		goto IL_00e5;
	}

IL_00e5:
	{
		DoubleU5BU5D_t3413330114* L_96 = V_1;
		return L_96;
	}
}
// System.Void DistortionEquation::.ctor()
extern "C"  void DistortionEquation__ctor_m821249214 (DistortionEquation_t32189124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistortionEquation__ctor_m821249214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DoubleU5BU5D_t3413330114* L_0 = ((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____830259D5797FAA1B825FA36D999D6BAB5495E830_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		__this->set_coefficientsXLeft_0(L_0);
		DoubleU5BU5D_t3413330114* L_2 = ((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25)));
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____D2137D93E3FCF6E7E3EB4713D9A30359193884AB_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		__this->set_coefficientsXRight_1(L_2);
		DoubleU5BU5D_t3413330114* L_4 = ((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25)));
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____44530A054DCA26FC650A35148637FF13D8CEA67A_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		__this->set_coefficientsYLeft_2(L_4);
		DoubleU5BU5D_t3413330114* L_6 = ((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25)));
		RuntimeFieldHandle_t1871169219  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____B2B15701B993D732A252F1C3CABA2D664A9AEE4C_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		__this->set_coefficientsYRight_3(L_6);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
