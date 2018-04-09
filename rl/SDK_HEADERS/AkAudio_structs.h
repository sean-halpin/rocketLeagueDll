/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct AkAudio.AkParamGroup.AkParamSet
// 0x0078
struct FAkParamSet
{
	struct FMap_Mirror                                 RTCPs;                                            		// 0x0000 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMap_Mirror                                 Switches;                                         		// 0x003C (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct AkAudio.AkSoundSource.ActiveSound
// 0x000C
struct FActiveSound
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlayId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                StopId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct AkAudio.AkEnvironments.uint
// 0x0004
struct Fuint
{
	int                                                dummyint;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct AkAudio.AkEnvironments.AkEnvironment
// 0x001C
struct FAkEnvironment
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WetValue;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DryValue;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct Fuint                                       HashedEnvID;                                      		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x0008
struct FAkEventTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    Event;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimPhysicsControls
// 0x0018
struct FAkRevSimPhysicsControls
{
	float                                              Weight;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineTorque;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BreakingHorsePower;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    GearRatios;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimFrame
// 0x000C
struct FAkRevSimFrame
{
	float                                              RPM;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Gear;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Velocity;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimUpdateParams
// 0x003C
struct FAkRevSimUpdateParams
{
	float                                              Throttle;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Brake;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              EngineFrictionScale;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              GroundFrictionScale;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ClutchedGearRatio;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnableUpShifting : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FAkRevSimPhysicsControls                    Controls;                                         		// 0x0018 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FAkRevSimFrame                              frame;                                            		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct AkAudio.AkEnvironments.AkActorEnvironment
// 0x0010
struct FAkActorEnvironment
{
	TArray< struct FAkEnvironment >                    Environments;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      TargetActor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif