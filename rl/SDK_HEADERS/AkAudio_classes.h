/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum AkAudio.AkPlaySoundComponent.EAkPlaySoundReceiver
/*enum EAkPlaySoundReceiver
{
	PlaySoundReceiver_All                              = 0,
	PlaySoundReceiver_Local                            = 1,
	PlaySoundReceiver_NonLocal                         = 2,
	PlaySoundReceiver_MAX                              = 3
};*/

// Enum AkAudio.AkDevice.EAkOutputType
/*enum EAkOutputType
{
	AkOT_Speakers                                      = 0,
	AKOT_Headphones                                    = 1,
	EAkOutputType_MAX                                  = 2
};*/

// Enum AkAudio.AkDevice.EAkListenerSpacialization
/*enum EAkListenerSpacialization
{
	AkLS_3D                                            = 0,
	AkLS_Left                                          = 1,
	AkLS_Right                                         = 2,
	AkLS_MAX                                           = 3
};*/

// Enum AkAudio.SeqAct_AkEnvironment.EAkEnvironmentTarget
/*enum EAkEnvironmentTarget
{
	AkEnvironmentTarget_LevelDefault                   = 0,
	AkEnvironmentTarget_Music                          = 1,
	AkEnvironmentTarget_MAX                            = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0004 (0x006C - 0x0068)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                     		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3139 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAmbientSound
// 0x0008 (0x0208 - 0x0200)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0200 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                     		// 0x0200 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0200 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	class UAkEvent*                                    PlayEvent;                                        		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3141 ];

		return pClassPointer;
	};

};

UClass* AAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkComponent
// 0x0013 (0x0078 - 0x0065)
class UAkComponent : public UActorComponent
{
public:
	struct FName                                       BoneName;                                         		// 0x0068 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    AutoPlayEvent;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3143 ];

		return pClassPointer;
	};

};

UClass* UAkComponent::pClassPointer = NULL;

// Class AkAudio.AkDevice
// 0x0030 (0x006C - 0x003C)
class UAkDevice : public UObject
{
public:
	struct FScriptDelegate                             __EventInitialized__Delegate;                     		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMusicTrackStart__Delegate;                 		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMusicTrackEnd__Delegate;                   		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3145 ];

		return pClassPointer;
	};

	void NotifyWhenInitialized ( struct FScriptDelegate Callback );
	void ProfileStop ( );
	void ProfileStart ( );
	void PrintData ( );
	void SetOutputType ( unsigned char Type );
	void SetListenerSpatialization ( class ULocalPlayer* Player, unsigned char Value );
	void RemoveListener ( class ULocalPlayer* Player );
	void AddListener ( class ULocalPlayer* Player );
	void SetMusicRTCP ( struct FName Key, float Value );
	void SetGlobalRTCP ( struct FName Key, float Value );
	void StopPlayingID ( int PlayingID );
	void StopBGMusic ( class UAkSoundCue* Sound );
	int PlayBGMusic ( class UAkSoundCue* Sound );
	void StopGlobalSound ( class UAkSoundCue* Sound );
	void PlayGlobalSound ( class UAkSoundCue* Sound );
	void SetState ( struct FName InStateGroup, struct FName InState );
	void SetSwitch ( class AActor* SourceActor, struct FName Key, struct FName Value );
	void SetRTCP ( class AActor* SourceActor, struct FName Key, float Value );
	void StopAllSounds ( class AActor* SourceActor );
	void StopSound ( class AActor* SourceActor, class UAkSoundCue* Sound );
	class UAkSoundSource* PlaySound ( class AActor* SourceActor, class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation );
	void EventMusicTrackEnd ( int PlayingID );
	void EventMusicTrackStart ( int PlayingID, struct FString FileMarker );
	void EventInitialized ( );
};

UClass* UAkDevice::pClassPointer = NULL;

// Class AkAudio.AkDialogueEvent
// 0x000C (0x0048 - 0x003C)
class UAkDialogueEvent : public UObject
{
public:
	TArray< class UAkSwitch* >                         Arguments;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3147 ];

		return pClassPointer;
	};

};

UClass* UAkDialogueEvent::pClassPointer = NULL;

// Class AkAudio.AkEnvironments
// 0x001C (0x0058 - 0x003C)
class UAkEnvironments : public UObject
{
public:
	TArray< struct FAkEnvironment >                    LevelEnvironments;                                		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAkEnvironment >                    MusicEnvironments;                                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLevelDirty : 1;                                  		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3149 ];

		return pClassPointer;
	};

	void AddMusic ( struct FAkEnvironment* Environment );
	void AddLevelDefault ( struct FAkEnvironment* Environment );
};

UClass* UAkEnvironments::pClassPointer = NULL;

// Class AkAudio.AkEnvironmentVolume
// 0x001C (0x0244 - 0x0228)
class AAkEnvironmentVolume : public AVolume
{
public:
	struct FAkEnvironment                              Environment;                                      		// 0x0228 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3151 ];

		return pClassPointer;
	};

};

UClass* AAkEnvironmentVolume::pClassPointer = NULL;

// Class AkAudio.AkParamGroup
// 0x008B (0x00F0 - 0x0065)
class UAkParamGroup : public UActorComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x0068 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FAkParamSet                                 StoredParameters;                                 		// 0x006C (0x0078) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< class UAkSoundSource* >                    SoundSources;                                     		// 0x00E4 (0x000C) [0x000000000448200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3153 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void SetActorParameter ( struct FName Key, class AActor* Value );
	void SetLinearColorParameter ( struct FName Key, struct FLinearColor Value );
	void SetVectorParameter ( struct FName Key, struct FVector Value );
	void SetFloatParameter ( struct FName Key, float Value );
	void SetNameParameter ( struct FName Key, struct FName Value );
	void GetDebugData ( TArray< struct FName >* RTCPKeys, TArray< float >* RTCPValues, TArray< struct FName >* SwitchKeys, TArray< struct FName >* SwitchValues );
	void StopSound ( class UAkSoundCue* Sound );
	class UAkSoundSource* PlaySound ( class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation );
	void SetSwitch ( struct FName Key, struct FName Value );
	void SetRTCP ( struct FName Key, float Value );
};

UClass* UAkParamGroup::pClassPointer = NULL;

// Class AkAudio.AkPlaySoundComponent
// 0x00BB (0x0120 - 0x0065)
class UAkPlaySoundComponent : public UActorComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x0068 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UAkSoundCue*                                 SoundCue;                                         		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bKillSoundOnDetach : 1;                           		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bWasAttached : 1;                                 		// 0x0070 (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
	struct FVector                                     Translation;                                      		// 0x0074 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FRotator                                    Rotation;                                         		// 0x0080 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ReFireDelay;                                      		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Receiver;                                         		// 0x0090 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             RestartSwitches;                                  		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAkSoundSource*                              SoundSource;                                      		// 0x00A0 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              LastPlayTime;                                     		// 0x00A4 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FAkParamSet                                 StoredParameters;                                 		// 0x00A8 (0x0078) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3155 ];

		return pClassPointer;
	};

	void SetActorParameter ( struct FName Key, class AActor* Value );
	void SetLinearColorParameter ( struct FName Key, struct FLinearColor Value );
	void SetVectorParameter ( struct FName Key, struct FVector Value );
	void SetFloatParameter ( struct FName Key, float Value );
	void SetNameParameter ( struct FName Key, struct FName Value );
	void SetRTCP ( struct FName Key, float Value );
	void SetSwitch ( struct FName Key, struct FName Value );
	bool IsPlaying ( );
	void Stop ( );
	void Play ( );
};

UClass* UAkPlaySoundComponent::pClassPointer = NULL;

// Class AkAudio.AkRevPhysicsSimulation
// 0x0044 (0x0080 - 0x003C)
class UAkRevPhysicsSimulation : public UObject
{
public:
	float                                              EngineGearRatio;                                  		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineFriction;                                   		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundFriction;                                   		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WindResistancePerVelocity;                        		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UpShiftingRPM;                                    		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DownShiftRPM;                                     		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ThrottleInterpolationTime;                        		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineTorque;                                     		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BrakingForce;                                     		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WindResistance;                                   		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FrictionResistance;                               		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EngineResistance;                                 		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              NetForce;                                         		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventGearChange__Delegate;                      		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3157 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	float GetGearRatio ( struct FAkRevSimUpdateParams* SimUpdate );
	float CalcVelocity ( float GearRatio, float RPM );
	float CalcRPM ( float GearRatio, float Velocity );
	struct FAkRevSimFrame Step ( float DeltaTime, struct FAkRevSimUpdateParams* Params );
	void EventGearChange ( class UAkRevPhysicsSimulation* Simulation );
};

UClass* UAkRevPhysicsSimulation::pClassPointer = NULL;

// Class AkAudio.AkRTPCDecayComponent
// 0x0033 (0x0098 - 0x0065)
class UAkRTPCDecayComponent : public UActorComponent
{
public:
	struct FName                                       RTPC;                                             		// 0x0068 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              GrowValue;                                        		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           DecayPerSecond;                                   		// 0x0078 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAkSoundSource*                              SoundSource;                                      		// 0x0088 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              CurrentValue;                                     		// 0x008C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              LastAttachTime;                                   		// 0x0090 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      bWasAttached : 1;                                 		// 0x0094 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3159 ];

		return pClassPointer;
	};

};

UClass* UAkRTPCDecayComponent::pClassPointer = NULL;

// Class AkAudio.AkSoundCue
// 0x001C (0x0058 - 0x003C)
class UAkSoundCue : public UObject
{
public:
	class UAkBank*                                     RequiredBank;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StartEvent;                                       		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     StopEvent;                                        		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3161 ];

		return pClassPointer;
	};

};

UClass* UAkSoundCue::pClassPointer = NULL;

// Class AkAudio.AkSoundSource
// 0x0093 (0x00F8 - 0x0065)
class UAkSoundSource : public UActorComponent
{
public:
	struct FVector                                     Translation;                                      		// 0x0068 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FRotator                                    Rotation;                                         		// 0x0074 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bDetachOnComplete : 1;                            		// 0x0080 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bRegistered : 1;                                  		// 0x0080 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned long                                      bUpdateOrientation : 1;                           		// 0x0080 (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0084 (0x000C) MISSED OFFSET
	struct FMatrix                                     CachedParentToWorld;                              		// 0x0090 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FVector                                     WorldLocation;                                    		// 0x00D0 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FRotator                                    WorldRotation;                                    		// 0x00DC (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAkParamGroup*                               Params;                                           		// 0x00E8 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< struct FActiveSound >                      ActiveSounds;                                     		// 0x00EC (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3163 ];

		return pClassPointer;
	};

	bool IsPlayingAny ( );
	bool IsPlaying ( class UAkSoundCue* Sound );
	void StopAll ( );
	void Stop ( class UAkSoundCue* Sound );
	void Play ( class UAkSoundCue* Sound );
};

UClass* UAkSoundSource::pClassPointer = NULL;

// Class AkAudio.AkSwitch
// 0x0000 (0x003C - 0x003C)
class UAkSwitch : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3165 ];

		return pClassPointer;
	};

};

UClass* UAkSwitch::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkEvent
// 0x000C (0x008C - 0x0080)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray< struct FAkEventTrackKey >                  AkEvents;                                         		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3167 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkRTPC
// 0x000C (0x00A0 - 0x0094)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3169 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkRTPC::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0040 - 0x003C)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3171 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x003C - 0x003C)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3173 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstAkRTPC::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3175 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkClearBanks::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkEnvironment
// 0x001D (0x0119 - 0x00FC)
class USeqAct_AkEnvironment : public USequenceAction
{
public:
	struct FAkEnvironment                              Environment;                                      		// 0x00FC (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Target;                                           		// 0x0118 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3177 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkEnvironment::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkLoadBank
// 0x000C (0x011C - 0x0110)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                        		// 0x0110 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWaitingCallback : 1;                             		// 0x0110 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UAkBank*                                     Bank;                                             		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Signal;                                           		// 0x0118 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3179 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkLoadBank::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostEvent
// 0x0008 (0x0118 - 0x0110)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int                                                Signal;                                           		// 0x0110 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAkEvent*                                    Event;                                            		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3181 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkPostEvent::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostTrigger
// 0x000C (0x0108 - 0x00FC)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3183 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkPostTrigger::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0014 (0x0124 - 0x0110)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x0110 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Running : 1;                                      		// 0x0120 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3185 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetRTPCValue::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetState
// 0x0018 (0x0114 - 0x00FC)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     State;                                            		// 0x0108 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3187 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetState::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0018 (0x0114 - 0x00FC)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Switch;                                           		// 0x0108 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3189 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetSwitch::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3191 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkStartAmbientSound::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_AkStopAll : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3193 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkStopAll::pClassPointer = NULL;

// Class AkAudio.AkAmbientSoundActor
// 0x0004 (0x0204 - 0x0200)
class AAkAmbientSoundActor : public AKeypoint
{
public:
	class UAkPlaySoundComponent*                       PlaySoundComponent;                               		// 0x0200 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47292 ];

		return pClassPointer;
	};

	void OnToggle ( class USeqAct_Toggle* Action );
};

UClass* AAkAmbientSoundActor::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPlaySound
// 0x0008 (0x0104 - 0x00FC)
class USeqAct_AkPlaySound : public USequenceAction
{
public:
	class UAkSoundCue*                                 SoundCue;                                         		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBGMusic : 1;                                     		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47467 ];

		return pClassPointer;
	};

	void ToggleSoundFor ( class AActor* A, unsigned long bPlay );
	void ToggleSound ( unsigned long bPlay );
	void eventActivated ( );
};

UClass* USeqAct_AkPlaySound::pClassPointer = NULL;

// Class AkAudio.AkAudioDevice
// 0x0060 (0x00A0 - 0x0040)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0040 (0x000C) MISSED OFFSET
	int                                                DefaultMemoryPoolKB;                              		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultEngineMemoryPoolKB;                        		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LowMemoryThreshold;                               		// 0x0054 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x0058 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97435 ];

		return pClassPointer;
	};

};

UClass* UAkAudioDevice::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif