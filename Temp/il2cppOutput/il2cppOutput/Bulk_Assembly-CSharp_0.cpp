﻿#include "il2cpp-config.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t3109936861;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t1949122020;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// UnityEngine.Component
struct Component_t1923634451;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// UnityEngine.Object
struct Object_t631007953;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// DeployStageOnce
struct DeployStageOnce_t3640858018;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// System.Action
struct Action_t1264377477;
// Vuforia.ITrackerManager
struct ITrackerManager_t607206903;
// Vuforia.HitTestResult
struct HitTestResult_t1865677388;
// UnityEngine.Transform
struct Transform_t3600365921;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t905170877;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t283990539;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// UnityEngine.Material
struct Material_t340375123;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t3956019502;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration
struct DatabaseLoadConfiguration_t449697234;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// Vuforia.PositionalDeviceTracker
struct PositionalDeviceTracker_t656722001;
// Vuforia.Trackable
struct Trackable_t2451999991;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId;
extern RuntimeClass* VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3593217305_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2713332384_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId;
extern String_t* _stringLiteral2016908147;
extern String_t* _stringLiteral3483484711;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId;
extern RuntimeClass* InitError_t3420749710_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3279329212;
extern String_t* _stringLiteral3325583105;
extern String_t* _stringLiteral1253325676;
extern String_t* _stringLiteral2959890895;
extern String_t* _stringLiteral2293327149;
extern String_t* _stringLiteral2746077084;
extern String_t* _stringLiteral2746058527;
extern String_t* _stringLiteral491174246;
extern String_t* _stringLiteral3183081100;
extern String_t* _stringLiteral868600955;
extern String_t* _stringLiteral3122929577;
extern String_t* _stringLiteral3567432369;
extern String_t* _stringLiteral229317972;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral2072581803;
extern String_t* _stringLiteral2642543365;
extern String_t* _stringLiteral3752705136;
extern String_t* _stringLiteral3453007782;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1431967569;
extern String_t* _stringLiteral3797279721;
extern String_t* _stringLiteral1108443480;
extern String_t* _stringLiteral2072975055;
extern String_t* _stringLiteral1498400317;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var;
extern String_t* _stringLiteral2974894664;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnDestroy_m1080906236_MetadataUsageId;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3483481617;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId;
extern String_t* _stringLiteral2224052239;
extern const uint32_t DeployStageOnce_Start_m3306380531_MetadataUsageId;
extern RuntimeClass* VuforiaARController_t1876945237_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DeployStageOnce_OnVuforiaStarted_m3319432341_RuntimeMethod_var;
extern const uint32_t DeployStageOnce_Awake_m774412219_MetadataUsageId;
extern const uint32_t DeployStageOnce_OnDestroy_m1344293741_MetadataUsageId;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisPositionalDeviceTracker_t656722001_m1362359953_RuntimeMethod_var;
extern const uint32_t DeployStageOnce_OnVuforiaStarted_m3319432341_MetadataUsageId;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3041659850;
extern const uint32_t DeployStageOnce_OnInteractiveHitTest_m2762031653_MetadataUsageId;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct RendererU5BU5D_t3210418286;
struct ColliderU5BU5D_t4234922487;
struct CanvasU5BU5D_t682926938;


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
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
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
#ifndef TRACKER_T2709586299_H
#define TRACKER_T2709586299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t2709586299  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t2709586299, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T2709586299_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef DEVICETRACKER_T2315692373_H
#define DEVICETRACKER_T2315692373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker
struct  DeviceTracker_t2315692373  : public Tracker_t2709586299
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKER_T2315692373_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef HITTESTRESULT_T1865677388_H
#define HITTESTRESULT_T1865677388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HitTestResult
struct  HitTestResult_t1865677388  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.HitTestResult::mPtr
	intptr_t ___mPtr_0;
	// UnityEngine.Vector3 Vuforia.HitTestResult::mPosition
	Vector3_t3722313464  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.HitTestResult::mOrientation
	Quaternion_t2301928331  ___mOrientation_2;

public:
	inline static int32_t get_offset_of_mPtr_0() { return static_cast<int32_t>(offsetof(HitTestResult_t1865677388, ___mPtr_0)); }
	inline intptr_t get_mPtr_0() const { return ___mPtr_0; }
	inline intptr_t* get_address_of_mPtr_0() { return &___mPtr_0; }
	inline void set_mPtr_0(intptr_t value)
	{
		___mPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPosition_1() { return static_cast<int32_t>(offsetof(HitTestResult_t1865677388, ___mPosition_1)); }
	inline Vector3_t3722313464  get_mPosition_1() const { return ___mPosition_1; }
	inline Vector3_t3722313464 * get_address_of_mPosition_1() { return &___mPosition_1; }
	inline void set_mPosition_1(Vector3_t3722313464  value)
	{
		___mPosition_1 = value;
	}

	inline static int32_t get_offset_of_mOrientation_2() { return static_cast<int32_t>(offsetof(HitTestResult_t1865677388, ___mOrientation_2)); }
	inline Quaternion_t2301928331  get_mOrientation_2() const { return ___mOrientation_2; }
	inline Quaternion_t2301928331 * get_address_of_mOrientation_2() { return &___mOrientation_2; }
	inline void set_mOrientation_2(Quaternion_t2301928331  value)
	{
		___mOrientation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITTESTRESULT_T1865677388_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
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
#endif // CAMERADIRECTION_T637748435_H
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
#ifndef POSITIONALDEVICETRACKER_T656722001_H
#define POSITIONALDEVICETRACKER_T656722001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTracker
struct  PositionalDeviceTracker_t656722001  : public DeviceTracker_t2315692373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKER_T656722001_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
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
#endif // STATUS_T1100905814_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
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
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
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
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
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
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3840446185 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Background_2)); }
	inline Texture2D_t3840446185 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3840446185 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
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
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
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
#endif // INITERROR_T3420749710_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
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
#endif // TEXTANCHOR_T2035777396_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t2129269699 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t2129269699 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef VUFORIARUNTIME_T1949122020_H
#define VUFORIARUNTIME_T1949122020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t1949122020  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t3593217305 * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// System.Boolean Vuforia.VuforiaRuntime::mHasInitialized
	bool ___mHasInitialized_4;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mOnVuforiaInitError_1)); }
	inline Action_1_t3593217305 * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t3593217305 ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t3593217305 * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mHasInitialized_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mHasInitialized_4)); }
	inline bool get_mHasInitialized_4() const { return ___mHasInitialized_4; }
	inline bool* get_address_of_mHasInitialized_4() { return &___mHasInitialized_4; }
	inline void set_mHasInitialized_4(bool value)
	{
		___mHasInitialized_4 = value;
	}
};

struct VuforiaRuntime_t1949122020_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t1949122020 * ___mInstance_5;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mInstance_5)); }
	inline VuforiaRuntime_t1949122020 * get_mInstance_5() const { return ___mInstance_5; }
	inline VuforiaRuntime_t1949122020 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(VuforiaRuntime_t1949122020 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_5), value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mPadlock_6)); }
	inline RuntimeObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline RuntimeObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(RuntimeObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIME_T1949122020_H
#ifndef VUFORIAARCONTROLLER_T1876945237_H
#define VUFORIAARCONTROLLER_T1876945237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t1876945237  : public ARController_t116632334
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t905170877 * ___mVideoBgEventHandlers_9;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t1264377477 * ___mOnVuforiaInitialized_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t1264377477 * ___mOnVuforiaStarted_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t1264377477 * ___mOnVuforiaDeinitialized_12;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t1264377477 * ___mOnTrackablesUpdated_13;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t1264377477 * ___mRenderOnUpdate_14;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t269755560 * ___mOnPause_15;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_16;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t1264377477 * ___mOnBackgroundTextureChanged_17;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_18;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_19;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_20;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mEyewearBehaviour_21;
	// Vuforia.VideoBackgroundManager Vuforia.VuforiaARController::mVideoBackgroundMgr
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundMgr_22;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_23;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t340375123 * ___mClearMaterial_24;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_25;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_26;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_27;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_28;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_29;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_30;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaARController::mTrackersRequestedToDeinit
	List_1_t3956019502 * ___mTrackersRequestedToDeinit_31;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBgEventHandlers_9)); }
	inline List_1_t905170877 * get_mVideoBgEventHandlers_9() const { return ___mVideoBgEventHandlers_9; }
	inline List_1_t905170877 ** get_address_of_mVideoBgEventHandlers_9() { return &___mVideoBgEventHandlers_9; }
	inline void set_mVideoBgEventHandlers_9(List_1_t905170877 * value)
	{
		___mVideoBgEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaInitialized_10)); }
	inline Action_t1264377477 * get_mOnVuforiaInitialized_10() const { return ___mOnVuforiaInitialized_10; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaInitialized_10() { return &___mOnVuforiaInitialized_10; }
	inline void set_mOnVuforiaInitialized_10(Action_t1264377477 * value)
	{
		___mOnVuforiaInitialized_10 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaStarted_11)); }
	inline Action_t1264377477 * get_mOnVuforiaStarted_11() const { return ___mOnVuforiaStarted_11; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaStarted_11() { return &___mOnVuforiaStarted_11; }
	inline void set_mOnVuforiaStarted_11(Action_t1264377477 * value)
	{
		___mOnVuforiaStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaDeinitialized_12)); }
	inline Action_t1264377477 * get_mOnVuforiaDeinitialized_12() const { return ___mOnVuforiaDeinitialized_12; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaDeinitialized_12() { return &___mOnVuforiaDeinitialized_12; }
	inline void set_mOnVuforiaDeinitialized_12(Action_t1264377477 * value)
	{
		___mOnVuforiaDeinitialized_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_12), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnTrackablesUpdated_13)); }
	inline Action_t1264377477 * get_mOnTrackablesUpdated_13() const { return ___mOnTrackablesUpdated_13; }
	inline Action_t1264377477 ** get_address_of_mOnTrackablesUpdated_13() { return &___mOnTrackablesUpdated_13; }
	inline void set_mOnTrackablesUpdated_13(Action_t1264377477 * value)
	{
		___mOnTrackablesUpdated_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_13), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRenderOnUpdate_14)); }
	inline Action_t1264377477 * get_mRenderOnUpdate_14() const { return ___mRenderOnUpdate_14; }
	inline Action_t1264377477 ** get_address_of_mRenderOnUpdate_14() { return &___mRenderOnUpdate_14; }
	inline void set_mRenderOnUpdate_14(Action_t1264377477 * value)
	{
		___mRenderOnUpdate_14 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_14), value);
	}

	inline static int32_t get_offset_of_mOnPause_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnPause_15)); }
	inline Action_1_t269755560 * get_mOnPause_15() const { return ___mOnPause_15; }
	inline Action_1_t269755560 ** get_address_of_mOnPause_15() { return &___mOnPause_15; }
	inline void set_mOnPause_15(Action_1_t269755560 * value)
	{
		___mOnPause_15 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_15), value);
	}

	inline static int32_t get_offset_of_mPaused_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mPaused_16)); }
	inline bool get_mPaused_16() const { return ___mPaused_16; }
	inline bool* get_address_of_mPaused_16() { return &___mPaused_16; }
	inline void set_mPaused_16(bool value)
	{
		___mPaused_16 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBackgroundTextureChanged_17)); }
	inline Action_t1264377477 * get_mOnBackgroundTextureChanged_17() const { return ___mOnBackgroundTextureChanged_17; }
	inline Action_t1264377477 ** get_address_of_mOnBackgroundTextureChanged_17() { return &___mOnBackgroundTextureChanged_17; }
	inline void set_mOnBackgroundTextureChanged_17(Action_t1264377477 * value)
	{
		___mOnBackgroundTextureChanged_17 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_17), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mStartHasBeenInvoked_18)); }
	inline bool get_mStartHasBeenInvoked_18() const { return ___mStartHasBeenInvoked_18; }
	inline bool* get_address_of_mStartHasBeenInvoked_18() { return &___mStartHasBeenInvoked_18; }
	inline void set_mStartHasBeenInvoked_18(bool value)
	{
		___mStartHasBeenInvoked_18 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStarted_19)); }
	inline bool get_mHasStarted_19() const { return ___mHasStarted_19; }
	inline bool* get_address_of_mHasStarted_19() { return &___mHasStarted_19; }
	inline void set_mHasStarted_19(bool value)
	{
		___mHasStarted_19 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCameraConfiguration_20)); }
	inline RuntimeObject* get_mCameraConfiguration_20() const { return ___mCameraConfiguration_20; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_20() { return &___mCameraConfiguration_20; }
	inline void set_mCameraConfiguration_20(RuntimeObject* value)
	{
		___mCameraConfiguration_20 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_20), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mEyewearBehaviour_21)); }
	inline DigitalEyewearARController_t1054226036 * get_mEyewearBehaviour_21() const { return ___mEyewearBehaviour_21; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mEyewearBehaviour_21() { return &___mEyewearBehaviour_21; }
	inline void set_mEyewearBehaviour_21(DigitalEyewearARController_t1054226036 * value)
	{
		___mEyewearBehaviour_21 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_21), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBackgroundMgr_22)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundMgr_22() const { return ___mVideoBackgroundMgr_22; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundMgr_22() { return &___mVideoBackgroundMgr_22; }
	inline void set_mVideoBackgroundMgr_22(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundMgr_22 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundMgr_22), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCheckStopCamera_23)); }
	inline bool get_mCheckStopCamera_23() const { return ___mCheckStopCamera_23; }
	inline bool* get_address_of_mCheckStopCamera_23() { return &___mCheckStopCamera_23; }
	inline void set_mCheckStopCamera_23(bool value)
	{
		___mCheckStopCamera_23 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mClearMaterial_24)); }
	inline Material_t340375123 * get_mClearMaterial_24() const { return ___mClearMaterial_24; }
	inline Material_t340375123 ** get_address_of_mClearMaterial_24() { return &___mClearMaterial_24; }
	inline void set_mClearMaterial_24(Material_t340375123 * value)
	{
		___mClearMaterial_24 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_24), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMetalRendering_25)); }
	inline bool get_mMetalRendering_25() const { return ___mMetalRendering_25; }
	inline bool* get_address_of_mMetalRendering_25() { return &___mMetalRendering_25; }
	inline void set_mMetalRendering_25(bool value)
	{
		___mMetalRendering_25 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStartedOnce_26)); }
	inline bool get_mHasStartedOnce_26() const { return ___mHasStartedOnce_26; }
	inline bool* get_address_of_mHasStartedOnce_26() { return &___mHasStartedOnce_26; }
	inline void set_mHasStartedOnce_26(bool value)
	{
		___mHasStartedOnce_26 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWasEnabledBeforePause_27)); }
	inline bool get_mWasEnabledBeforePause_27() const { return ___mWasEnabledBeforePause_27; }
	inline bool* get_address_of_mWasEnabledBeforePause_27() { return &___mWasEnabledBeforePause_27; }
	inline void set_mWasEnabledBeforePause_27(bool value)
	{
		___mWasEnabledBeforePause_27 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforePause_28)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_28() const { return ___mObjectTrackerWasActiveBeforePause_28; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_28() { return &___mObjectTrackerWasActiveBeforePause_28; }
	inline void set_mObjectTrackerWasActiveBeforePause_28(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_28 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforeDisabling_29)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_29() const { return ___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_29() { return &___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_29(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_29 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLastUpdatedFrame_30)); }
	inline int32_t get_mLastUpdatedFrame_30() const { return ___mLastUpdatedFrame_30; }
	inline int32_t* get_address_of_mLastUpdatedFrame_30() { return &___mLastUpdatedFrame_30; }
	inline void set_mLastUpdatedFrame_30(int32_t value)
	{
		___mLastUpdatedFrame_30 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mTrackersRequestedToDeinit_31)); }
	inline List_1_t3956019502 * get_mTrackersRequestedToDeinit_31() const { return ___mTrackersRequestedToDeinit_31; }
	inline List_1_t3956019502 ** get_address_of_mTrackersRequestedToDeinit_31() { return &___mTrackersRequestedToDeinit_31; }
	inline void set_mTrackersRequestedToDeinit_31(List_1_t3956019502 * value)
	{
		___mTrackersRequestedToDeinit_31 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackersRequestedToDeinit_31), value);
	}
};

struct VuforiaARController_t1876945237_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t1876945237 * ___mInstance_32;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_33;

public:
	inline static int32_t get_offset_of_mInstance_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mInstance_32)); }
	inline VuforiaARController_t1876945237 * get_mInstance_32() const { return ___mInstance_32; }
	inline VuforiaARController_t1876945237 ** get_address_of_mInstance_32() { return &___mInstance_32; }
	inline void set_mInstance_32(VuforiaARController_t1876945237 * value)
	{
		___mInstance_32 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_32), value);
	}

	inline static int32_t get_offset_of_mPadlock_33() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mPadlock_33)); }
	inline RuntimeObject * get_mPadlock_33() const { return ___mPadlock_33; }
	inline RuntimeObject ** get_address_of_mPadlock_33() { return &___mPadlock_33; }
	inline void set_mPadlock_33(RuntimeObject * value)
	{
		___mPadlock_33 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T1876945237_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
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
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
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
#ifndef ACTION_1_T3593217305_H
#define ACTION_1_T3593217305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_t3593217305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3593217305_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_4;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_5;
	// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration Vuforia.VuforiaConfiguration::databaseLoad
	DatabaseLoadConfiguration_t449697234 * ___databaseLoad_6;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_7;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_8;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_9;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_10;

public:
	inline static int32_t get_offset_of_vuforia_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_4)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_4() const { return ___vuforia_4; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_4() { return &___vuforia_4; }
	inline void set_vuforia_4(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_4), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_5)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_5() const { return ___digitalEyewear_5; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_5() { return &___digitalEyewear_5; }
	inline void set_digitalEyewear_5(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_5 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_5), value);
	}

	inline static int32_t get_offset_of_databaseLoad_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___databaseLoad_6)); }
	inline DatabaseLoadConfiguration_t449697234 * get_databaseLoad_6() const { return ___databaseLoad_6; }
	inline DatabaseLoadConfiguration_t449697234 ** get_address_of_databaseLoad_6() { return &___databaseLoad_6; }
	inline void set_databaseLoad_6(DatabaseLoadConfiguration_t449697234 * value)
	{
		___databaseLoad_6 = value;
		Il2CppCodeGenWriteBarrier((&___databaseLoad_6), value);
	}

	inline static int32_t get_offset_of_videoBackground_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_7)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_7() const { return ___videoBackground_7; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_7() { return &___videoBackground_7; }
	inline void set_videoBackground_7(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_7 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_7), value);
	}

	inline static int32_t get_offset_of_deviceTracker_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_8)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_8() const { return ___deviceTracker_8; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_8() { return &___deviceTracker_8; }
	inline void set_deviceTracker_8(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_8 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_8), value);
	}

	inline static int32_t get_offset_of_smartTerrain_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_9)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_9() const { return ___smartTerrain_9; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_9() { return &___smartTerrain_9; }
	inline void set_smartTerrain_9(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_9 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_9), value);
	}

	inline static int32_t get_offset_of_webcam_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_10)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_10() const { return ___webcam_10; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_10() { return &___webcam_10; }
	inline void set_webcam_10(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_10 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_10), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_2;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_3;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_2)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_2() const { return ___mInstance_2; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_2), value);
	}

	inline static int32_t get_offset_of_mPadlock_3() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_3)); }
	inline RuntimeObject * get_mPadlock_3() const { return ___mPadlock_3; }
	inline RuntimeObject ** get_address_of_mPadlock_3() { return &___mPadlock_3; }
	inline void set_mPadlock_3(RuntimeObject * value)
	{
		___mPadlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
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
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
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
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public MonoBehaviour_t3962482529
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_5)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_6)); }
	inline GUIStyle_t3956901511 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t3956901511 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_7)); }
	inline GUIStyle_t3956901511 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t3956901511 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_8)); }
	inline Texture2D_t3840446185 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t3840446185 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_9)); }
	inline Texture2D_t3840446185 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t3840446185 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_10)); }
	inline Texture2D_t3840446185 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t3840446185 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef DEPLOYSTAGEONCE_T3640858018_H
#define DEPLOYSTAGEONCE_T3640858018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeployStageOnce
struct  DeployStageOnce_t3640858018  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject DeployStageOnce::AnchorStage
	GameObject_t1113636619 * ___AnchorStage_2;
	// Vuforia.PositionalDeviceTracker DeployStageOnce::_deviceTracker
	PositionalDeviceTracker_t656722001 * ____deviceTracker_3;
	// UnityEngine.GameObject DeployStageOnce::_previousAnchor
	GameObject_t1113636619 * ____previousAnchor_4;

public:
	inline static int32_t get_offset_of_AnchorStage_2() { return static_cast<int32_t>(offsetof(DeployStageOnce_t3640858018, ___AnchorStage_2)); }
	inline GameObject_t1113636619 * get_AnchorStage_2() const { return ___AnchorStage_2; }
	inline GameObject_t1113636619 ** get_address_of_AnchorStage_2() { return &___AnchorStage_2; }
	inline void set_AnchorStage_2(GameObject_t1113636619 * value)
	{
		___AnchorStage_2 = value;
		Il2CppCodeGenWriteBarrier((&___AnchorStage_2), value);
	}

	inline static int32_t get_offset_of__deviceTracker_3() { return static_cast<int32_t>(offsetof(DeployStageOnce_t3640858018, ____deviceTracker_3)); }
	inline PositionalDeviceTracker_t656722001 * get__deviceTracker_3() const { return ____deviceTracker_3; }
	inline PositionalDeviceTracker_t656722001 ** get_address_of__deviceTracker_3() { return &____deviceTracker_3; }
	inline void set__deviceTracker_3(PositionalDeviceTracker_t656722001 * value)
	{
		____deviceTracker_3 = value;
		Il2CppCodeGenWriteBarrier((&____deviceTracker_3), value);
	}

	inline static int32_t get_offset_of__previousAnchor_4() { return static_cast<int32_t>(offsetof(DeployStageOnce_t3640858018, ____previousAnchor_4)); }
	inline GameObject_t1113636619 * get__previousAnchor_4() const { return ____previousAnchor_4; }
	inline GameObject_t1113636619 ** get_address_of__previousAnchor_4() { return &____previousAnchor_4; }
	inline void set__previousAnchor_4(GameObject_t1113636619 * value)
	{
		____previousAnchor_4 = value;
		Il2CppCodeGenWriteBarrier((&____previousAnchor_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPLOYSTAGEONCE_T3640858018_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public MonoBehaviour_t3962482529
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_6)); }
	inline Vector3_t3722313464  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t3722313464  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_9)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2713332384_gshared (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C"  VuforiaRuntime_t1949122020 * VuforiaRuntime_get_Instance_m1058251676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2713332384(__this, p0, p1, method) ((  void (*) (Action_1_t3593217305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2713332384_gshared)(__this, p0, p1, method)
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t2360479859  GUI_Window_m1088326791 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_productName()
extern "C"  String_t* Application_get_productName_m2401755738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C"  VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C"  GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C"  String_t* GenericVuforiaConfiguration_get_LicenseKey_m2270076687 (GenericVuforiaConfiguration_t3697830469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Screen::get_dpi()
extern "C"  float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C"  void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
#define Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(__this /* static, unused */, p0, method) ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C"  void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C"  void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C"  void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
#define Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, method) ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  bool TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
#define Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, p0, method) ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
#define Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, p0, method) ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
#define Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, p0, method) ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C"  VuforiaARController_t1876945237 * VuforiaARController_get_Instance_m1100644214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterVuforiaStartedCallback_m3258152770 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaARController_UnregisterVuforiaStartedCallback_m3486105406 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C"  RuntimeObject* TrackerManager_get_Instance_m777262631 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C"  Guid_t  Guid_NewGuid_m923091018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3279186591 (Guid_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C"  void DefaultInitializationErrorHandler__ctor_m2145257936 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_mErrorText_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m599033302(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C"  void DefaultInitializationErrorHandler_Awake_m1713298888 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C"  void DefaultInitializationErrorHandler_Start_m2498604264 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C"  void DefaultInitializationErrorHandler_OnGUI_m2338842741 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_3();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Window_m1088326791(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C"  void DefaultInitializationErrorHandler_OnDestroy_m3668093536 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C"  void DefaultInitializationErrorHandler_DrawWindowContent_m2208378571 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_2), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_0;
		GUIStyle_t3956901511 * L_10 = __this->get_headerStyle_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_9, _stringLiteral2016908147, L_10, /*hidden argument*/NULL);
		Rect_t2360479859  L_11 = V_1;
		String_t* L_12 = __this->get_mErrorText_2();
		GUIStyle_t3956901511 * L_13 = __this->get_bodyStyle_5();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Rect_t2360479859  L_14 = V_2;
		GUIStyle_t3956901511 * L_15 = __this->get_footerStyle_7();
		bool L_16 = GUI_Button_m2223708732(NULL /*static, unused*/, L_14, _stringLiteral3483484711, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00eb;
			}
			case 9:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0036:
	{
		__this->set_mErrorText_2(_stringLiteral3279329212);
		goto IL_010b;
	}

IL_0046:
	{
		__this->set_mErrorText_2(_stringLiteral3325583105);
		goto IL_010b;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1253325676, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_2);
		goto IL_010b;
	}

IL_0071:
	{
		__this->set_mErrorText_2(_stringLiteral2959890895);
		goto IL_010b;
	}

IL_0081:
	{
		__this->set_mErrorText_2(_stringLiteral2293327149);
		goto IL_010b;
	}

IL_0091:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_4);
		goto IL_010b;
	}

IL_00ac:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2746058527, L_5, _stringLiteral491174246, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_6);
		goto IL_010b;
	}

IL_00cc:
	{
		String_t* L_7 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3183081100, L_7, _stringLiteral868600955, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_8);
		goto IL_010b;
	}

IL_00eb:
	{
		__this->set_mErrorText_2(_stringLiteral3122929577);
		goto IL_010b;
	}

IL_00fb:
	{
		__this->set_mErrorText_2(_stringLiteral3567432369);
		goto IL_010b;
	}

IL_010b:
	{
		RuntimeObject * L_9 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_11, _stringLiteral2072581803, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_13);
		String_t* L_14 = __this->get_mErrorText_2();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral229317972, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral2642543365, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3752705136);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3752705136);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		int32_t L_21 = ___errorCode0;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3453007782);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		String_t* L_27 = String_Concat_m2971454694(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_3(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1431967569);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3797279721);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = String_Substring_m1610150815(L_13, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1108443480);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20 = String_Substring_m1610150815(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_16;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral2072975055);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_23 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1431967569);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		String_t* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m3847582255(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_24;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral1498400317);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_30 = L_29;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral2072975055);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m2971454694(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
	}

IL_00af:
	{
		String_t* L_34 = V_1;
		return L_34;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		float L_5 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)L_5));
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(4.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 1;
	}

IL_003a:
	{
		V_2 = G_B6_0;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_7, /*hidden argument*/NULL);
		__this->set_bodyTexture_8(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_10 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_11 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_13 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_12, /*hidden argument*/NULL);
		__this->set_headerTexture_9(L_13);
		float L_14 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_15 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_17, /*hidden argument*/NULL);
		__this->set_footerTexture_10(L_18);
		GUIStyle_t3956901511 * L_19 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_19, /*hidden argument*/NULL);
		__this->set_bodyStyle_5(L_19);
		GUIStyle_t3956901511 * L_20 = __this->get_bodyStyle_5();
		NullCheck(L_20);
		GUIStyleState_t1397964415 * L_21 = GUIStyle_get_normal_m729441812(L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_22 = __this->get_bodyTexture_8();
		NullCheck(L_21);
		GUIStyleState_set_background_m369476077(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_bodyStyle_5();
		Font_t1956802104 * L_24 = Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var);
		NullCheck(L_23);
		GUIStyle_set_font_m2490449107(L_23, L_24, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_25 = __this->get_bodyStyle_5();
		int32_t L_26 = V_2;
		float L_27 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyle_set_fontSize_m1566850023(L_25, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_26))))), (float)L_27))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_28 = __this->get_bodyStyle_5();
		NullCheck(L_28);
		GUIStyleState_t1397964415 * L_29 = GUIStyle_get_normal_m729441812(L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m1105876047(L_29, L_30, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_31 = __this->get_bodyStyle_5();
		NullCheck(L_31);
		GUIStyle_set_wordWrap_m1419501823(L_31, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_32 = __this->get_bodyStyle_5();
		NullCheck(L_32);
		GUIStyle_set_alignment_m3944619660(L_32, 4, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_33 = __this->get_bodyStyle_5();
		RectOffset_t1369453676 * L_34 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_34, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_set_padding_m3302456044(L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_35 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_36 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_36, L_35, /*hidden argument*/NULL);
		__this->set_headerStyle_6(L_36);
		GUIStyle_t3956901511 * L_37 = __this->get_headerStyle_6();
		NullCheck(L_37);
		GUIStyleState_t1397964415 * L_38 = GUIStyle_get_normal_m729441812(L_37, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = __this->get_headerTexture_9();
		NullCheck(L_38);
		GUIStyleState_set_background_m369476077(L_38, L_39, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_headerStyle_6();
		int32_t L_41 = V_2;
		float L_42 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		GUIStyle_set_fontSize_m1566850023(L_40, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_41))))), (float)L_42))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_43 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_44 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_44, L_43, /*hidden argument*/NULL);
		__this->set_footerStyle_7(L_44);
		GUIStyle_t3956901511 * L_45 = __this->get_footerStyle_7();
		NullCheck(L_45);
		GUIStyleState_t1397964415 * L_46 = GUIStyle_get_normal_m729441812(L_45, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_47 = __this->get_footerTexture_10();
		NullCheck(L_46);
		GUIStyleState_set_background_m369476077(L_46, L_47, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = __this->get_footerStyle_7();
		NullCheck(L_48);
		GUIStyleState_t1397964415 * L_49 = GUIStyle_get_normal_m729441812(L_48, /*hidden argument*/NULL);
		Color_t2555686324  L_50 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyleState_set_textColor_m1105876047(L_49, L_50, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_51 = __this->get_footerStyle_7();
		int32_t L_52 = V_2;
		float L_53 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIStyle_set_fontSize_m1566850023(L_51, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_52))))), (float)L_53))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m2984741184(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = V_0;
		NullCheck(L_3);
		Texture2D_Apply_m2271746283(L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
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
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C"  void DefaultTrackableEventHandler__ctor_m2856359002 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::Start()
extern "C"  void DefaultTrackableEventHandler_Start_m796446126 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_2(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnDestroy()
extern "C"  void DefaultTrackableEventHandler_OnDestroy_m1080906236 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnDestroy_m1080906236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_2 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_2);
		TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614(L_2, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C"  void DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111 (DefaultTrackableEventHandler_t1588957063 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___newStatus1;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_003f;
		}
	}

IL_0015:
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		String_t* L_4 = TrackableBehaviour_get_TrackableName_m3644057705(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_4, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		goto IL_007d;
	}

IL_003f:
	{
		int32_t L_6 = ___previousStatus0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_7 = ___newStatus1;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_8 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_8);
		String_t* L_9 = TrackableBehaviour_get_TrackableName_m3644057705(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_9, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		goto IL_007d;
	}

IL_0077:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
	}

IL_007d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C"  void DefaultTrackableEventHandler_OnTrackingFound_m4202593607 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)1, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C"  void DefaultTrackableEventHandler_OnTrackingLost_m424172778 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)0, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
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
// System.Void DeployStageOnce::.ctor()
extern "C"  void DeployStageOnce__ctor_m2903727643 (DeployStageOnce_t3640858018 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeployStageOnce::Start()
extern "C"  void DeployStageOnce_Start_m3306380531 (DeployStageOnce_t3640858018 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeployStageOnce_Start_m3306380531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_AnchorStage_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2224052239, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		GameObject_t1113636619 * L_2 = __this->get_AnchorStage_2();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeployStageOnce::Awake()
extern "C"  void DeployStageOnce_Awake_m774412219 (DeployStageOnce_t3640858018 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeployStageOnce_Awake_m774412219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DeployStageOnce_OnVuforiaStarted_m3319432341_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeployStageOnce::OnDestroy()
extern "C"  void DeployStageOnce_OnDestroy_m1344293741 (DeployStageOnce_t3640858018 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeployStageOnce_OnDestroy_m1344293741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DeployStageOnce_OnVuforiaStarted_m3319432341_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_UnregisterVuforiaStartedCallback_m3486105406(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeployStageOnce::OnVuforiaStarted()
extern "C"  void DeployStageOnce_OnVuforiaStarted_m3319432341 (DeployStageOnce_t3640858018 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeployStageOnce_OnVuforiaStarted_m3319432341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		PositionalDeviceTracker_t656722001 * L_1 = GenericInterfaceFuncInvoker0< PositionalDeviceTracker_t656722001 * >::Invoke(ITrackerManager_GetTracker_TisPositionalDeviceTracker_t656722001_m1362359953_RuntimeMethod_var, L_0);
		__this->set__deviceTracker_3(L_1);
		return;
	}
}
// System.Void DeployStageOnce::OnInteractiveHitTest(Vuforia.HitTestResult)
extern "C"  void DeployStageOnce_OnInteractiveHitTest_m2762031653 (DeployStageOnce_t3640858018 * __this, HitTestResult_t1865677388 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeployStageOnce_OnInteractiveHitTest_m2762031653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		HitTestResult_t1865677388 * L_0 = ___result0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t1113636619 * L_1 = __this->get_AnchorStage_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral3041659850, /*hidden argument*/NULL);
		return;
	}

IL_0022:
	{
		PositionalDeviceTracker_t656722001 * L_3 = __this->get__deviceTracker_3();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_4 = Guid_NewGuid_m923091018(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = Guid_ToString_m3279186591((&V_1), /*hidden argument*/NULL);
		HitTestResult_t1865677388 * L_6 = ___result0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_7 = VirtFuncInvoker2< GameObject_t1113636619 *, String_t*, HitTestResult_t1865677388 * >::Invoke(9 /* UnityEngine.GameObject Vuforia.PositionalDeviceTracker::CreatePlaneAnchor(System.String,Vuforia.HitTestResult) */, L_3, L_5, L_6);
		V_0 = L_7;
		GameObject_t1113636619 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009a;
		}
	}
	{
		GameObject_t1113636619 * L_10 = __this->get_AnchorStage_2();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = V_0;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_parent_m786917804(L_11, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = __this->get_AnchorStage_2();
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localPosition_m4128471975(L_15, L_16, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_17 = __this->get_AnchorStage_2();
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = GameObject_get_transform_m1369836730(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_19 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localRotation_m19445462(L_18, L_19, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = __this->get_AnchorStage_2();
		NullCheck(L_20);
		GameObject_SetActive_m796801857(L_20, (bool)1, /*hidden argument*/NULL);
	}

IL_009a:
	{
		GameObject_t1113636619 * L_21 = __this->get__previousAnchor_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_21, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b6;
		}
	}
	{
		GameObject_t1113636619 * L_23 = __this->get__previousAnchor_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		GameObject_t1113636619 * L_24 = V_0;
		__this->set__previousAnchor_4(L_24);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
