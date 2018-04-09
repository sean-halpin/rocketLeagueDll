/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function AkAudio.AkDevice.SetSoundEnvironment
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execSetSoundEnvironment_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EnvironmentType;                                  		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.GetEnvironments
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execGetEnvironments_Parms
{
	class UAkEnvironments*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkDevice.NotifyWhenInitialized
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execNotifyWhenInitialized_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function AkAudio.AkDevice.ProfileStop
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execProfileStop_Parms
{
};

// Function AkAudio.AkDevice.ProfileStart
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execProfileStart_Parms
{
};

// Function AkAudio.AkDevice.PrintData
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execPrintData_Parms
{
};

// Function AkAudio.AkDevice.SetOutputType
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execSetOutputType_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.SetListenerSpatialization
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execSetListenerSpatialization_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Value;                                            		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.RemoveListener
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execRemoveListener_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.AddListener
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execAddListener_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.SetMusicRTCP
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execSetMusicRTCP_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.SetGlobalRTCP
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execSetGlobalRTCP_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.StopPlayingID
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execStopPlayingID_Parms
{
	int                                                PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.StopBGMusic
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execStopBGMusic_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.PlayBGMusic
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execPlayBGMusic_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkDevice.StopGlobalSound
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execStopGlobalSound_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.PlayGlobalSound
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execPlayGlobalSound_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.SetState
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execSetState_Parms
{
	struct FName                                       InStateGroup;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InState;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.SetSwitch
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execSetSwitch_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Value;                                            		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.SetRTCP
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execSetRTCP_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.StopAllSounds
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execStopAllSounds_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.StopSound
// [0x04022401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execStopSound_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAkSoundCue*                                 Sound;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.PlaySound
// [0x04026401] ( FUNC_Final | FUNC_Native )
struct UAkDevice_execPlaySound_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAkSoundCue*                                 Sound;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Translation;                                      		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UAkSoundSource*                              ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function AkAudio.AkDevice.EventMusicTrackEnd
// [0x00120000] 
struct UAkDevice_execEventMusicTrackEnd_Parms
{
	int                                                PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkDevice.EventMusicTrackStart
// [0x00120000] 
struct UAkDevice_execEventMusicTrackStart_Parms
{
	int                                                PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FileMarker;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function AkAudio.AkDevice.EventInitialized
// [0x00120000] 
struct UAkDevice_execEventInitialized_Parms
{
};

// Function AkAudio.AkEnvironments.RemoveActorEnvironment
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAkEnvironments_execRemoveActorEnvironment_Parms
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     EnvironmentID;                                    		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function AkAudio.AkEnvironments.AddActorEnvironment
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAkEnvironments_execAddActorEnvironment_Parms
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAkEnvironment                              Environment;                                      		// 0x0004 (0x001C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function AkAudio.AkEnvironments.AddLevelDefault
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAkEnvironments_execAddLevelDefault_Parms
{
	struct FAkEnvironment                              Environment;                                      		// 0x0000 (0x001C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
// [0x00020102] 
struct UAkParamGroup_execPrintDebugInfo_Parms
{
	class UDebugDrawer*                                Drawer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< struct FName >                          RTCPKeys;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< float >                                 RTCPValues;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          SwitchKeys;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          SwitchValues;                                     		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function AkAudio.AkParamGroup.SetActorParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execSetActorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execSetLinearColorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkParamGroup.SetVectorParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execSetVectorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkParamGroup.SetFloatParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execSetFloatParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkParamGroup.SetNameParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execSetNameParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkParamGroup.GetDebugData
// [0x04420401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execGetDebugData_Parms
{
	TArray< struct FName >                             RTCPKeys;                                         		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< float >                                    RTCPValues;                                       		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FName >                             SwitchKeys;                                       		// 0x0018 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FName >                             SwitchValues;                                     		// 0x0024 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function AkAudio.AkParamGroup.StopSound
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execStopSound_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkParamGroup.PlaySound
// [0x04024401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execPlaySound_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Translation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UAkSoundSource*                              ReturnValue;                                      		// 0x001C (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function AkAudio.AkParamGroup.SetSwitch
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execSetSwitch_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkParamGroup.SetRTCP
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkParamGroup_execSetRTCP_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execSetActorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execSetLinearColorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execSetVectorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execSetFloatParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execSetNameParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execSetRTCP_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execSetSwitch_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execIsPlaying_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkPlaySoundComponent.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execStop_Parms
{
};

// Function AkAudio.AkPlaySoundComponent.Play
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkPlaySoundComponent_execPlay_Parms
{
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// [0x00020102] 
struct UAkRevPhysicsSimulation_execPrintDebugInfo_Parms
{
	class UDebugDrawer*                                Drawer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UAkRevPhysicsSimulation_execGetGearRatio_Parms
{
	struct FAkRevSimUpdateParams                       SimUpdate;                                        		// 0x0000 (0x003C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkRevPhysicsSimulation_execCalcVelocity_Parms
{
	float                                              GearRatio;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              RPM;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAkRevPhysicsSimulation_execCalcRPM_Parms
{
	float                                              GearRatio;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Velocity;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkRevPhysicsSimulation.Step
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAkRevPhysicsSimulation_execStep_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAkRevSimUpdateParams                       Params;                                           		// 0x0004 (0x003C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FAkRevSimFrame                              ReturnValue;                                      		// 0x0040 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// [0x00120000] 
struct UAkRevPhysicsSimulation_execEventGearChange_Parms
{
	class UAkRevPhysicsSimulation*                     Simulation;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkSoundSource.IsPlayingAny
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkSoundSource_execIsPlayingAny_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkSoundSource.IsPlaying
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkSoundSource_execIsPlaying_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.AkSoundSource.StopAll
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkSoundSource_execStopAll_Parms
{
};

// Function AkAudio.AkSoundSource.Stop
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkSoundSource_execStop_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkSoundSource.Play
// [0x04020401] ( FUNC_Final | FUNC_Native )
struct UAkSoundSource_execPlay_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.AkAmbientSoundActor.OnToggle
// [0x00020002] 
struct AAkAmbientSoundActor_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// [0x00020002] 
struct USeqAct_AkPlaySound_execToggleSoundFor_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPlay : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// [0x00020002] 
struct USeqAct_AkPlaySound_execToggleSound_Parms
{
	unsigned long                                      bPlay : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UObject*                                  O;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   A;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
// [0x00020802] ( FUNC_Event )
struct USeqAct_AkPlaySound_eventActivated_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif