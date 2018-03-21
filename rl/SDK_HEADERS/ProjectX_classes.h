/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: ProjectX_classes.h
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

#define CONST_InMatchmakingID                                    -2
#define CONST_MAX_CONTROLLER_IDS                                 4
#define CONST_NumFriendsPerRequest                               100
#define CONST_FriendRequestPerFrame                              5
#define CONST_MaxPing                                            1.0f
#define CONST_ClosedReason_DuplicateLogin                        "DuplicateLogin"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum ProjectX._Types_X.EJoinMatchType
/*enum EJoinMatchType
{
	JMT_Public                                         = 0,
	JMT_Private                                        = 1,
	JMT_LanHost                                        = 2,
	JMT_LanGuest                                       = 3,
	JMT_MAX                                            = 4
};*/

// Enum ProjectX._Types_X.EAuthResult
/*enum EAuthResult
{
	AuthResult_OK                                      = 0,
	AuthResult_Unauthorized                            = 1,
	AuthResult_MAX                                     = 2
};*/

// Enum ProjectX._Types_X.EWebRequestAuthorization
/*enum EWebRequestAuthorization
{
	WRA_Offline                                        = 0,
	WRA_Authorizing                                    = 1,
	WRA_Authorized                                     = 2,
	WRA_Banned                                         = 3,
	WRA_MAX                                            = 4
};*/

// Enum ProjectX._Types_X.EPlayerAuthState
/*enum EPlayerAuthState
{
	EPlayerAuthState_None                              = 0,
	EPlayerAuthState_SetName                           = 1,
	EPlayerAuthState_RequestingInitialLoadout          = 2,
	EPlayerAuthState_InitialLoadoutFailed              = 3,
	EPlayerAuthState_CarSelect                         = 4,
	EPlayerAuthState_CarSelected                       = 5,
	EPlayerAuthState_MAX                               = 6
};*/

// Enum ProjectX._Types_X.EReservationStatus
/*enum EReservationStatus
{
	ReservationStatus_None                             = 0,
	ReservationStatus_Reserved                         = 1,
	ReservationStatus_Joining                          = 2,
	ReservationStatus_InGame                           = 3,
	ReservationStatus_MAX                              = 4
};*/

// Enum ProjectX._Types_X.EDatabaseEnvironment
/*enum EDatabaseEnvironment
{
	DBE_DevLocal                                       = 0,
	DBE_Dev                                            = 1,
	DBE_Test                                           = 2,
	DBE_Production                                     = 3,
	DBE_MAX                                            = 4
};*/

// Enum ProjectX._Types_X.EAxisSign
/*enum EAxisSign
{
	AxisSign_None                                      = 0,
	AxisSign_Positive                                  = 1,
	AxisSign_Negative                                  = 2,
	AxisSign_MAX                                       = 3
};*/

// Enum ProjectX._Types_X.EButtonPressType
/*enum EButtonPressType
{
	BPT_Normal                                         = 0,
	BPT_Tap                                            = 1,
	BPT_Hold                                           = 2,
	BPT_DoubleTap                                      = 3,
	BPT_Toggle                                         = 4,
	BPT_MAX                                            = 5
};*/

// Enum ProjectX._Types_X.ERemappable
/*enum ERemappable
{
	Remappable_All                                     = 0,
	Remappable_Key                                     = 1,
	Remappable_Axis                                    = 2,
	Remappable_KeyTriggerAxis                          = 3,
	Remappable_None                                    = 4,
	Remappable_MAX                                     = 5
};*/

// Enum ProjectX._Types_X.EUINavigationMode
/*enum EUINavigationMode
{
	UINavigationMode_Keyboard                          = 0,
	UINavigationMode_Gamepad                           = 1,
	UINavigationMode_Cursor                            = 2,
	UINavigationMode_MAX                               = 3
};*/

// Enum ProjectX._Types_X.EPartyMatchmakingRestriction
/*enum EPartyMatchmakingRestriction
{
	PMR_NotOriginalAppOwner                            = 0,
	PMR_PendingLicenseAgreement                        = 1,
	PMR_InMainMenu                                     = 2,
	PMR_NotLoggedInPsyNet                              = 3,
	PMR_MAX                                            = 4
};*/

// Enum ProjectX._Types_X.EPlayerTitleType
/*enum EPlayerTitleType
{
	PlayerTitleType_None                               = 0,
	PlayerTitleType_XP                                 = 1,
	PlayerTitleType_Developer                          = 2,
	PlayerTitleType_Helper                             = 3,
	PlayerTitleType_Participant                        = 4,
	PlayerTitleType_Champion                           = 5,
	PlayerTitleType_Ranked_Champion                    = 6,
	PlayerTitleType_RLCS_Champion                      = 7,
	PlayerTitleType_MAX                                = 8
};*/

// Enum ProjectX._Types_X.EBlogTileType
/*enum EBlogTileType
{
	EBlogTileType_Carousel                             = 0,
	EBlogTileType_RLCS                                 = 1,
	EBlogTileType_Community                            = 2,
	EBlogTileType_MAX                                  = 3
};*/

// Enum ProjectX._Types_X.EOnlinePlayerPermission
/*enum EOnlinePlayerPermission
{
	OPP_PrivateMatchAdmin                              = 0,
	OPP_SuperPrivateMatchAdmin                         = 1,
	OPP_MAX                                            = 2
};*/

// Enum ProjectX._Types_X.EOnlinePlayerRole
/*enum EOnlinePlayerRole
{
	OPR_PrivateMatchAdmin                              = 0,
	OPR_SuperPrivateMatchAdmin                         = 1,
	OPR_MAX                                            = 2
};*/

// Enum ProjectX._Types_X.EPsyNetTransportType
/*enum EPsyNetTransportType
{
	PsyNetTransport_HTTP                               = 0,
	PsyNetTransport_WebSocket                          = 1,
	PsyNetTransport_MAX                                = 2
};*/

// Enum ProjectX.AnimNodeSeries_X.EAnimNodeSeriesChild
/*enum EAnimNodeSeriesChild
{
	AnimNodeSeries_Idle                                = 0,
	AnimNodeSeries_Intro                               = 1,
	AnimNodeSeries_Loop                                = 2,
	AnimNodeSeries_Outro                               = 3,
	AnimNodeSeries_MAX                                 = 4
};*/

// Enum ProjectX.BugReport_X.EFileTruncateType
/*enum EFileTruncateType
{
	FileTruncate_None                                  = 0,
	FileTruncate_KeepStart                             = 1,
	FileTruncate_KeepEnd                               = 2,
	FileTruncate_MAX                                   = 3
};*/

// Enum ProjectX.FXActor_X.EFXComponentTarget
/*enum EFXComponentTarget
{
	FXComponentTarget_All                              = 0,
	FXComponentTarget_Local                            = 1,
	FXComponentTarget_NonLocal                         = 2,
	FXComponentTarget_MAX                              = 3
};*/

// Enum ProjectX.FXActor_X.EFXComponentState
/*enum EFXComponentState
{
	FXComponentState_Detached                          = 0,
	FXComponentState_Attached                          = 1,
	FXComponentState_PendingDetach                     = 2,
	FXComponentState_MAX                               = 3
};*/

// Enum ProjectX.GFxDataCallback_X.EDataCallbackType
/*enum EDataCallbackType
{
	DataCallbackType_All                               = 0,
	DataCallbackType_Table                             = 1,
	DataCallbackType_Row                               = 2,
	DataCallbackType_Value                             = 3,
	DataCallbackType_MAX                               = 4
};*/

// Enum ProjectX.MaterialEffect_X.EMaterialEffectStage
/*enum EMaterialEffectStage
{
	EFFECT_INACTIVE                                    = 0,
	EFFECT_FADE_IN                                     = 1,
	EFFECT_ACTIVE                                      = 2,
	EFFECT_FADE_OUT                                    = 3,
	EFFECT_MAX                                         = 4
};*/

// Enum ProjectX.OnlineGameDLC_X.DLCOwnershipState
/*enum DLCOwnershipState
{
	DLCOwnershipState_Unknown                          = 0,
	DLCOwnershipState_Owned                            = 1,
	DLCOwnershipState_NotOwned                         = 2,
	DLCOwnershipState_Error                            = 3,
	DLCOwnershipState_MAX                              = 4
};*/

// Enum ProjectX.OnlineGameParty_X.PartyProcessingStatus
/*enum PartyProcessingStatus
{
	PPS_None                                           = 0,
	PPS_Create                                         = 1,
	PPS_Join                                           = 2,
	PPS_MAX                                            = 3
};*/

// Enum ProjectX.OnlineGameRegions_X.RegionPingResult
/*enum RegionPingResult
{
	PingResult_NotUsable                               = 0,
	PingResult_UsingCache                              = 1,
	PingResult_UsingSuccessfulPing                     = 2,
	PingResult_MAX                                     = 3
};*/

// Enum ProjectX.OnlineGameWordFilter_X.EWordFilterUsage
/*enum EWordFilterUsage
{
	WordFilterUsage_Name                               = 0,
	WordFilterUsage_Chat                               = 1,
	WordFilterUsage_MAX                                = 2
};*/

// Enum ProjectX.ReservationsPasswordMessage_X.EPasswordFailureReason
/*enum EPasswordFailureReason
{
	PFR_Empty                                          = 0,
	PFR_Mismatch                                       = 1,
	PFR_MAX                                            = 2
};*/

// Enum ProjectX.RPC_X.ERPCPriority
/*enum ERPCPriority
{
	RPC_Low                                            = 0,
	RPC_Medium                                         = 1,
	RPC_High                                           = 2,
	RPC_MAX                                            = 3
};*/

// Enum ProjectX.ShakeComponent_X.EShakeReceiver
/*enum EShakeReceiver
{
	ShakeReceiver_All                                  = 0,
	ShakeReceiver_Local                                = 1,
	ShakeReceiver_NonLocal                             = 2,
	ShakeReceiver_MAX                                  = 3
};*/

// Enum ProjectX.TcpConnection.EWebSocketState
/*enum EWebSocketState
{
	WebSocketState_NotRequired                         = 0,
	WebSocketState_NeedsHandshake                      = 1,
	WebSocketState_Connected                           = 2,
	WebSocketState_MAX                                 = 3
};*/

// Enum ProjectX.TcpConnection.ETcpConnectionState
/*enum ETcpConnectionState
{
	TcpConnectionState_Invalid                         = 0,
	TcpConnectionState_Connecting                      = 1,
	TcpConnectionState_Connected                       = 2,
	TcpConnectionState_Disconnected                    = 3,
	TcpConnectionState_MAX                             = 4
};*/

// Enum ProjectX.WebRequest_X.EWebRequestState
/*enum EWebRequestState
{
	WebRequestState_PendingSend                        = 0,
	WebRequestState_PendingResponse                    = 1,
	WebRequestState_Success                            = 2,
	WebRequestState_Error                              = 3,
	WebRequestState_MAX                                = 4
};*/

// Enum ProjectX.FakeData_X.FakeDataEnum
/*enum FakeDataEnum
{
	FakeData                                           = 0,
	FakeData01                                         = 1,
	FakeData02                                         = 2,
	FakeData_Count                                     = 3,
	FakeData_MAX                                       = 4
};*/

// Enum ProjectX.ClanforgeReservation_X.EReserveState
/*enum EReserveState
{
	ReserveState_Unitialized                           = 0,
	ReserveState_Unreserved                            = 1,
	ReserveState_Reserved                              = 2,
	ReserveState_MAX                                   = 3
};*/

// Enum ProjectX.PerCon_X.EPerConStatus
/*enum EPerConStatus
{
	PerConStatus_Disabled                              = 0,
	PerConStatus_Enabled                               = 1,
	PerConStatus_Broken                                = 2,
	PerConStatus_MAX                                   = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class ProjectX._SharedHelpers
// 0x0000 (0x003C - 0x003C)
class U_SharedHelpers : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3233 ];

		return pClassPointer;
	};

	int ScoreDeltaFromDefault ( class UObject* Object );
	int FindNetId ( struct FUniqueNetId FindId, TArray< struct FUniqueNetId >* List );
	void DrawShadowedText ( class UCanvas* Canvas, struct FString Text, int ShadowOffsetX, int ShadowOffsetY, int ShadowAlpha );
	bool IsInTransientPackage ( class UObject* Obj );
	class APlayerController* GetAPlayerController ( class UClass* PlayerControllerClass );
	class UObject* GetDefaultObject ( class UClass* ObjClass );
	void DumpUnreferencedAnims ( );
	struct FString GetLanguageExtension ( );
};

UClass* U_SharedHelpers::pClassPointer = NULL;

// Class ProjectX._Types_X
// 0x0030 (0x006C - 0x003C)
class U_Types_X : public UObject
{
public:
	struct FScriptDelegate                             __KeyPressDelegate__Delegate;                     		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPriviledgeChecked__Delegate;                  		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ServiceExecutionDelegate__Delegate;             		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3235 ];

		return pClassPointer;
	};

	void ServiceExecutionDelegate ( class UPsyNetClientService_X* Service );
	struct FIntVector3 ToIntVector3 ( struct FVector V );
	void OnPriviledgeChecked ( class UPrivilegeCheck_X* PrivilegeCheck );
	bool KeyPressDelegate ( );
};

UClass* U_Types_X::pClassPointer = NULL;

// Class ProjectX.ActorComponent_X
// 0x0007 (0x006C - 0x0065)
class UActorComponent_X : public UActorComponent
{
public:
	unsigned long                                      bTick : 1;                                        		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreScriptAttach : 1;                          		// 0x0068 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3237 ];

		return pClassPointer;
	};

	void Reattach ( );
	void eventTick ( float DeltaTime );
	void eventDetached ( );
	void eventAttached ( );
	void eventBeginPlay ( );
};

UClass* UActorComponent_X::pClassPointer = NULL;

// Class ProjectX.ExplosionComponent_X
// 0x0034 (0x00A0 - 0x006C)
class UExplosionComponent_X : public UActorComponent_X
{
public:
	class UDamageComponent_X*                          DamageComponent;                                  		// 0x006C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              StartRadius;                                      		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndRadius;                                        		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Speed;                                            		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Falloff;                                          		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPassThroughWorldGeometry : 1;                    		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIgnoreInstigator : 1;                            		// 0x0080 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDebug : 1;                                       		// 0x0080 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FVector                                     MomentumOffset;                                   		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lifetime;                                         		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AActor* >                            DamagedActors;                                    		// 0x0094 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3239 ];

		return pClassPointer;
	};

	void eventProcessHit ( class AActor* Victim, struct FVector HitLocation, struct FTraceHitInfo ExtraHitInfo, float DamageScale );
	void eventDetached ( );
};

UClass* UExplosionComponent_X::pClassPointer = NULL;

// Class ProjectX.MICParamDispenserComponent_X
// 0x0014 (0x0080 - 0x006C)
class UMICParamDispenserComponent_X : public UActorComponent_X
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x006C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                MaterialIndex;                                    		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AttachedComponentName;                            		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMeshComponent*                              MeshComp;                                         		// 0x007C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3241 ];

		return pClassPointer;
	};

	bool __MICParamDispenserComponent_X__Attached ( struct FFXAttachment A );
	void eventAttached ( );
	void SetActorParameter ( struct FName Key, class AActor* Value );
	void SetLinearColorParameter ( struct FName Key, struct FLinearColor Value );
	void SetVectorParameter ( struct FName Key, struct FVector Value );
	void SetFloatParameter ( struct FName Key, float Value );
	void SetNameParameter ( struct FName Key, struct FName Value );
};

UClass* UMICParamDispenserComponent_X::pClassPointer = NULL;

// Class ProjectX.ShakeComponent_X
// 0x00D8 (0x0144 - 0x006C)
class UShakeComponent_X : public UActorComponent_X
{
public:
	float                                              InnerRadius;                                      		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OuterRadius;                                      		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Falloff;                                          		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoDetach : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOnlyAffectPlayersWithPawns : 1;                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAttenuate : 1;                                   		// 0x0078 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bPlaying : 1;                                     		// 0x0078 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bStopping : 1;                                    		// 0x0078 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned char                                      Receiver;                                         		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadiusScale;                                      		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraShake*                                ShakeParams;                                      		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       AmplitudeScale;                                   		// 0x0090 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       FrequencyScale;                                   		// 0x00AC (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       DurationScale;                                    		// 0x00C8 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	float                                              CurrentAmplitudeScale;                            		// 0x00E4 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              CurrentFrequencyScale;                            		// 0x00E8 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UForceFeedbackWaveform*                      ForceFeedbackWaveform;                            		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceFeedbackScale;                               		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceFeedbackBalance;                             		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FParticleSysParam >                 InstanceParameters;                               		// 0x00F8 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	float                                              PlayTime;                                         		// 0x0104 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StopTime;                                         		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ShakeLocTimeOffset;                               		// 0x010C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ShakeRotTimeOffset;                               		// 0x0118 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              ShakeFOVTimeOffset;                               		// 0x0124 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CameraShakeDuration;                              		// 0x0128 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ForceFeedbackDuration;                            		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ForceFeedbackSamplesTime;                         		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      PrevOwner;                                        		// 0x0134 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FShakeReceiver >                    Receivers;                                        		// 0x0138 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3243 ];

		return pClassPointer;
	};

	bool GetColorParameter ( struct FName InName, struct FColor* OutColor );
	bool GetVectorParameter ( struct FName InName, struct FVector* OutVector );
	bool GetFloatParameter ( struct FName InName, float* OutFloat );
	void SetColorParameter ( struct FName ParameterName, struct FColor Param );
	void SetVectorRandParameter ( struct FName ParameterName, struct FVector* Param, struct FVector* ParamLow );
	void SetVectorParameter ( struct FName ParameterName, struct FVector Param );
	void SetFloatRandParameter ( struct FName ParameterName, float Param, float ParamLow );
	void SetFloatParameter ( struct FName ParameterName, float Param );
	bool IsPlaying ( );
	void eventStopShake ( float InBlendOutTime );
	void InitParams ( );
	void eventPlayShake ( );
	void eventDetached ( );
	void eventAttached ( );
};

UClass* UShakeComponent_X::pClassPointer = NULL;

// Class ProjectX.AdHocBeacon_X
// 0x0008 (0x0044 - 0x003C)
class UAdHocBeacon_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    pAdHoc;                                           		// 0x0040 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3245 ];

		return pClassPointer;
	};

	int GetNodeCountMax ( );
	void AdHocJoinMatch ( );
	void AdHocCreateMatch ( );
	bool AdHocIsActive ( );
	void AdHocDisconnectFromAccessPoint ( );
	void AdHocConnectToAccessPoint ( int ScanResultIndex );
	void AdHocRevertToInitialized ( );
	void AdHocScanForAccessPoints ( );
	void AdHocBecomeStation ( );
	void AdHocRejectStation ( int NetworkNodeIndex );
	void AdHocBecomeAccessPoint ( );
	void AdHocSetAdvertiseData ( struct FString AdvertiseData );
	void AdHocDestroy ( );
	void AdHocCreate ( );
	void AdHocCreateWithUsername ( struct FString UserName );
	void eventConstruct ( );
};

UClass* UAdHocBeacon_X::pClassPointer = NULL;

// Class ProjectX.FXActor_X
// 0x005C (0x0258 - 0x01FC)
class AFXActor_X : public AActor
{
public:
	class UFXActorEvent_X*                             SpawnState;                                       		// 0x01FC (0x0004) [0x0000000000000000]              
	class UFXActorEvent_X*                             ActivationState;                                  		// 0x0200 (0x0004) [0x0000000000000000]              
	TArray< struct FFXAttachment >                     Attachments;                                      		// 0x0204 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FName                                       SocketOrBoneName;                                 		// 0x0210 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDeactivateWhenOwnerDestroyed : 1;                		// 0x0218 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowShadowCasting : 1;                          		// 0x0218 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x0218 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bPendingDestroy : 1;                              		// 0x0218 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bHadOwner : 1;                                    		// 0x0218 (0x0004) [0x0000000000002002] [0x00000010] ( CPF_Const | CPF_Transient )
	class AFXActor_X*                                  Parent;                                           		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      AttachmentActor;                                  		// 0x0220 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UFXActorEvent_X* >                   FXStates;                                         		// 0x0224 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UParameterDispenser_X*                       Parameters;                                       		// 0x0230 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                EditID;                                           		// 0x0234 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FScriptDelegate                             __EventFXStatePushed__Delegate;                   		// 0x0238 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x023C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFXStatePopped__Delegate;                   		// 0x0248 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x024C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3247 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void OnToggle ( class USeqAct_Toggle* Action );
	void OnTriggerFXActor_X ( class USeqAct_TriggerFXActor_X* SeqAct );
	void Inherit ( class AFXActor_X* Other );
	void CopyFrom ( class AFXActor_X* Other );
	void ResetParticles ( );
	void StopAllEffects ( );
	void eventDeactivateAndDestroy ( );
	void eventOnDetached ( class UActorComponent* AC );
	void eventDeactivateFXComponent ( class UActorComponent* AC );
	void eventActivateFXComponent ( class UActorComponent* AC );
	void eventOnAttached ( class UActorComponent* AC );
	void UpdateFXStates ( );
	bool IsLocallyControlled ( );
	class AController* GetControllerOwner ( );
	void ToggleState ( class UFXActorEvent_X* NewState );
	void RemoveState ( class UFXActorEvent_X* OldState );
	void AddState ( class UFXActorEvent_X* NewState );
	bool IsStateActive ( class UFXActorEvent_X* InState );
	void eventDeactivate ( );
	void eventActivate ( );
	void HandleParentStatePopped ( class AFXActor_X* P, class UFXActorEvent_X* Event );
	void HandleParentStatePushed ( class AFXActor_X* P, class UFXActorEvent_X* Event );
	void BindTo ( class AFXActor_X* ParentFXActor );
	void SetAttachmentActor ( class AActor* AttachToActor );
	void PostBeginPlay ( );
	void AllAttachments ( class UClass* ComponentClass, class UActorComponent** OutComponent, int* OutAttachmentIdx );
	class UActorComponent* GetComponentByName ( class UClass* ComponentClass, struct FName ComponentName );
	void EventFXStatePopped ( class AFXActor_X* FXActor, class UFXActorEvent_X* Event );
	void EventFXStatePushed ( class AFXActor_X* FXActor, class UFXActorEvent_X* Event );
};

UClass* AFXActor_X::pClassPointer = NULL;

// Class ProjectX.AnimateParametersComponent_X
// 0x0033 (0x0098 - 0x0065)
class UAnimateParametersComponent_X : public UActorComponent
{
public:
	TArray< struct FAnimatedFloatParam >               FloatParameters;                                  		// 0x0068 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAnimatedVectorParam >              VectorParameters;                                 		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAnimatedLinearColorParam >         ColorParameters;                                  		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bResetMaterialsOnComplete : 1;                    		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              AnimTime;                                         		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndTime;                                          		// 0x0094 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3249 ];

		return pClassPointer;
	};

};

UClass* UAnimateParametersComponent_X::pClassPointer = NULL;

// Class ProjectX.ArchetypePrefab_X
// 0x0018 (0x0214 - 0x01FC)
class AArchetypePrefab_X : public AActor
{
public:
	TArray< class AActor* >                            PrefabArchetypes;                                 		// 0x01FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class AActor* >                            ArchetypeInstances;                               		// 0x0208 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3251 ];

		return pClassPointer;
	};

};

UClass* AArchetypePrefab_X::pClassPointer = NULL;

// Class ProjectX.ArchetypeSpawnPoint_X
// 0x0044 (0x0240 - 0x01FC)
class AArchetypeSpawnPoint_X : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;             		// 0x01FC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     ArchetypePath;                                    		// 0x0200 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bSeedNavMesh : 1;                                 		// 0x020C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSpawnOnLevelStart : 1;                           		// 0x020C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOnlyAllowOneInstance : 1;                        		// 0x020C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class AActor*                                      ActorArchetype;                                   		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpriteComponent*                            PlacementSprite;                                  		// 0x0214 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      ArchetypeSkeletalMesh;                            		// 0x0218 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        ArchetypeStaticMesh;                              		// 0x021C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class AActor* >                            SpawnedActors;                                    		// 0x0220 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class AActor*                                      SpawnedActor;                                     		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x0230 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0234 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3253 ];

		return pClassPointer;
	};

	void OnSpawned ( class AActor* Spawned );
	class AActor* DoSpawn ( );
	void OnToggle ( class USeqAct_Toggle* Action );
	void OnDestroy ( class USeqAct_Destroy* Action );
	void eventPostBeginPlay ( );
	void EventSpawned ( class AArchetypeSpawnPoint_X* SpawnPoint, class AActor* Spawned );
};

UClass* AArchetypeSpawnPoint_X::pClassPointer = NULL;

// Class ProjectX.Aws4Signature_X
// 0x0000 (0x003C - 0x003C)
class UAws4Signature_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3255 ];

		return pClassPointer;
	};

	void SignRequest ( class UHttpRequestInterface* HTTPRequest );
};

UClass* UAws4Signature_X::pClassPointer = NULL;

// Class ProjectX.TcpBeacon
// 0x004C (0x0094 - 0x0048)
class UTcpBeacon : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                MaxConnections;                                   		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ListenPort;                                       		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ConnectionClassName;                              		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ConnectionClass;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FPointer                                    ListenSocket;                                     		// 0x0064 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< class UTcpConnection* >                    Connections;                                      		// 0x0068 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3257 ];

		return pClassPointer;
	};

	void ReceivedBunch ( class UTcpConnection* Connection );
	void OnDisconnected ( class UTcpConnection* Connection );
	void OnConnected ( class UTcpConnection* Connection );
	void eventOnConnectionRemoved ( class UTcpConnection* Connection );
	void eventOnConnectionAdded ( class UTcpConnection* Connection );
	class UTcpConnection* GetConnection ( struct FString Address );
	void Close ( );
	struct FString GetExternalHostAddress ( );
	struct FString GetLocalHostAddress ( );
	bool BeginListen ( );
	class UTcpConnection* BeginConnect ( struct FString Address );
	void EventDisconnected ( class UTcpBeacon* Beacon, class UTcpConnection* Connection );
	void EventConnected ( class UTcpBeacon* Beacon, class UTcpConnection* Connection );
};

UClass* UTcpBeacon::pClassPointer = NULL;

// Class ProjectX.TcpMessageBeacon
// 0x0020 (0x00B4 - 0x0094)
class UTcpMessageBeacon : public UTcpBeacon
{
public:
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x0094 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FTcpMessageHandler >                MessageHandlers;                                  		// 0x0098 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;              		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3259 ];

		return pClassPointer;
	};

	void BroadcastMessage ( class UObject* Message );
	void SendMessage ( class UTcpConnection* Connection, class UObject* Message );
	class UBeaconMessage_X* CreateMessage ( class UClass* MessageClass );
	void RemoveMessageHandler ( struct FScriptDelegate Callback );
	void AddMessageHandler ( class UClass* MessageClass, struct FScriptDelegate Callback );
	void MessageReceivedDelegate ( class UTcpConnection* Connection, class UObject* Message );
};

UClass* UTcpMessageBeacon::pClassPointer = NULL;

// Class ProjectX.BeaconMessage_X
// 0x0000 (0x003C - 0x003C)
class UBeaconMessage_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3261 ];

		return pClassPointer;
	};

	class UBeaconMessage_X* Broadcast ( );
	class UBeaconMessage_X* Send ( class UTcpConnection* Connection );
};

UClass* UBeaconMessage_X::pClassPointer = NULL;

// Class ProjectX.BugReport_X
// 0x00FC (0x0138 - 0x003C)
class UBugReport_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     BugReportClassName;                               		// 0x0040 (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	unsigned long                                      bEnableClientReports : 1;                         		// 0x004C (0x0004) [0x0000000000044001] [0x00000001] ( CPF_Edit | CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bEnableServerReports : 1;                         		// 0x004C (0x0004) [0x0000000000044001] [0x00000002] ( CPF_Edit | CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bUploadNextFile : 1;                              		// 0x004C (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
	unsigned long                                      bSubmitted : 1;                                   		// 0x004C (0x0004) [0x0000000000002002] [0x00000008] ( CPF_Const | CPF_Transient )
	struct FString                                     URL;                                              		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxFileSizeMetabytes;                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BugID;                                            		// 0x0060 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FBugReportSubmitterData                     SubmitterData;                                    		// 0x006C (0x0028) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FBugReportSystemData                        SystemData;                                       		// 0x0094 (0x0028) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FBugReportPathData                          PathData;                                         		// 0x00BC (0x0030) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FBugReportDescriptionData                   DescriptionData;                                  		// 0x00EC (0x003C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FPointer                                    LogFile;                                          		// 0x0128 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FFileUploadData >                   FileUploads;                                      		// 0x012C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3263 ];

		return pClassPointer;
	};

	void HandleHttpRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed );
	void LogText ( struct FString Str );
	void eventPDIReport ( );
	void CancelBugReport ( );
	void SubmitBugReport ( struct FString Title, struct FString Description, struct FString Email );
	void StartBugReport ( );
	void StaticSubmitBugReport ( struct FString Title );
	class UBugReport_X* CreateBugReport ( );
};

UClass* UBugReport_X::pClassPointer = NULL;

// Class ProjectX.CachedWebData_X
// 0x0028 (0x0064 - 0x003C)
class UCachedWebData_X : public UObject
{
public:
	TArray< unsigned char >                            Data;                                             		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                DataCRC;                                          		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ETag;                                             		// 0x004C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UError*                                      LoadError;                                        		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UError*                                      DownloadError;                                    		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bNewData : 1;                                     		// 0x0060 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3265 ];

		return pClassPointer;
	};

	struct FString GetText ( );
	void UpdateData ( TArray< unsigned char > NewData, struct FString NewETag );
};

UClass* UCachedWebData_X::pClassPointer = NULL;

// Class ProjectX.Camera_X
// 0x00F4 (0x05CC - 0x04D8)
class ACamera_X : public ACamera
{
public:
	TArray< class UCameraState_X* >                    States;                                           		// 0x04D8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FRotator                                    PCDeltaRotation;                                  		// 0x04E4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    OldControllerRotation;                            		// 0x04F0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     PCDeltaLocation;                                  		// 0x04FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     OldControllerLocation;                            		// 0x0508 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FCameraOrientation                          PreProcessPOV;                                    		// 0x0514 (0x002C) [0x0000000000002000]              ( CPF_Transient )
	struct FCameraOrientation                          PostProcessPOV;                                   		// 0x0540 (0x002C) [0x0000000000002000]              ( CPF_Transient )
	class UCameraStateBlender_X*                       Blender;                                          		// 0x056C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     ShakeLocationOffset;                              		// 0x0570 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FRotator                                    ShakeRotationOffset;                              		// 0x057C (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              ShakeFOVOffset;                                   		// 0x0588 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FColor                                      StartFadeColor;                                   		// 0x058C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FColor                                      EndFadeColor;                                     		// 0x0590 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ClipOffset;                                       		// 0x0594 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FLocationCameraKnock >              LocationKnocks;                                   		// 0x05A0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FRotationCameraKnock >              RotationKnocks;                                   		// 0x05AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bDisableCameraShake : 1;                          		// 0x05B8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bSnapNextTransition : 1;                          		// 0x05B8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FScriptDelegate                             __EventCameraStateChanged__Delegate;              		// 0x05BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x05C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3267 ];

		return pClassPointer;
	};

	void eventOnViewTargetChanged ( );
	void SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams );
	bool IsTransitioning ( );
	void HandleBlenderStateChanged ( class UCameraStateBlender_X* CameraBlender );
	void SnapTransition ( );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void ApplyCameraModifiers ( float DeltaTime, struct FTPOV* OutPOV );
	bool CameraTrace ( struct FVector End, struct FVector Start, struct FVector Extent, struct FVector* HitLoc, class AActor** HitActor );
	class UCameraState_X* InstanceCameraState ( class UCameraState_X* Archetype );
	void eventModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot );
	void PostProcessCameraState ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void ProcessCameraState ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void CheckViewTarget ( struct FTViewTarget* VT );
	void CopyFade ( class ACamera_X* Other );
	void SetCameraFade ( unsigned long bNewEnableFading, struct FColor NewFadeColor, struct FVector2D NewFadeAlpha, float NewFadeTime, unsigned long bNewFadeAudio );
	void UpdateFade ( float DeltaTime );
	void eventUpdateCamera ( float DeltaTime );
	void ClampPOV ( struct FCameraOrientation* OutPOV );
	struct FRotator RemoveRoll ( struct FRotator InRot );
	class UCameraState_X* GetCameraState ( );
	class UCameraState_X* SelectCameraState ( );
	void UpdateCameraState ( );
	void UpdateCameraKnocks ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void AddRotationKnock ( struct FRotationCameraKnock Knock, float Scale );
	void AddLocationKnock ( struct FLocationCameraKnock Knock, float Scale, struct FRotator Transform );
	void InstanceCameraStates ( );
	void InitializeFor ( class APlayerController* PC );
	void ModifyCameraShakeScale ( class UCameraShake* Shake, float NewScale );
	void OnLoadingMovieClosesd ( );
	void eventPostBeginPlay ( );
	struct FVector InterpVector ( struct FVector OldValue, struct FVector NewValue, struct FVectorInterpRate Rate, struct FRotator Orientation, float DeltaTime );
	void FinalizeOrientation ( struct FCameraOrientation* OutPOV );
	struct FCameraOrientation BlendCameraOrientations ( float Alpha, struct FCameraOrientation* A, struct FCameraOrientation* B );
	void EventCameraStateChanged ( class ACamera_X* Camera, class UCameraState_X* CameraState );
};

UClass* ACamera_X::pClassPointer = NULL;

// Class ProjectX.CameraAttachmentComponent_X
// 0x0013 (0x0078 - 0x0065)
class UCameraAttachmentComponent_X : public UActorComponent
{
public:
	TArray< class UActorComponent* >                   Attachments;                                      		// 0x0068 (0x000C) [0x0000000004480009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      bDirtyTransform : 1;                              		// 0x0074 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3269 ];

		return pClassPointer;
	};

};

UClass* UCameraAttachmentComponent_X::pClassPointer = NULL;

// Class ProjectX.CanvasTexture_X
// 0x0010 (0x013C - 0x012C)
class UCanvasTexture_X : public UTextureRenderTarget2D
{
public:
	struct FScriptDelegate                             __Draw__Delegate;                                 		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0130 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3271 ];

		return pClassPointer;
	};

	void Draw ( class UCanvas* C );
};

UClass* UCanvasTexture_X::pClassPointer = NULL;

// Class ProjectX.CanvasTextureComponent_X
// 0x0017 (0x007C - 0x0065)
class UCanvasTextureComponent_X : public UActorComponent
{
public:
	class UMeshComponent*                              Mesh;                                             		// 0x0068 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MaterialIndex;                                    		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       MaterialParamName;                                		// 0x0070 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCanvasTexture_X*                            Texture;                                          		// 0x0078 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3273 ];

		return pClassPointer;
	};

	void OnDraw ( class UCanvas* C );
};

UClass* UCanvasTextureComponent_X::pClassPointer = NULL;

// Class ProjectX.PlayerController_X
// 0x007C (0x063C - 0x05C0)
class APlayerController_X : public APlayerController
{
public:
	class ACamera*                                     CameraArchetype;                                  		// 0x05C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AHUD*                                        HUDArchetype;                                     		// 0x05C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       OldPawnReference;                                 		// 0x05C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      LockedDebugActor;                                 		// 0x05CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APlayerReplicationInfo*                      LastPRI;                                          		// 0x05D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bPausedForExternalUI : 1;                         		// 0x05D4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UNetConnection*                              NetConnection;                                    		// 0x05D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventReceivedPRI__Delegate;                     		// 0x05DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x05E0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPawnChange__Delegate;                      		// 0x05EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x05F0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReceivedPlayer__Delegate;                  		// 0x05FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0600 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDestroyed__Delegate;                       		// 0x060C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0610 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerCameraChange__Delegate;              		// 0x061C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0620 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerKicked__Delegate;                    		// 0x062C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0630 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3275 ];

		return pClassPointer;
	};

	void ClientSetSeasonReward ( struct FPlayerSeasonRewardProgress Reward );
	void ServerUpdateCustomMatchSettings ( struct FCustomMatchSettings Settings );
	void ServerSetParty ( struct FUniqueNetId MemberId, struct FUniqueNetId NewPartyID );
	void DisconnectSplitScreenPlayer ( class UPlayer* P );
	void ServerDestroy ( );
	void KickPlayerForReason ( struct FString Reason, struct FString Title );
	void ClientNetLag ( float PktLag, float PktVariance, float PktLoss, float PktDup );
	void ServerNetLag ( float PktLag, float PktVariance, float PktLoss, float PktDup );
	void Pause ( );
	void RemoveOptionFromLastURL ( struct FString OptName );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void eventClearOnlineDelegates ( );
	void RegisterOnlineDelegates ( );
	void NotifyTakeHit_X ( class UDamageComponent_X* Damage );
	void eventClientPlayForceFeedbackWaveform ( class UForceFeedbackWaveform* FFWaveform, class AActor* FFWaveformInstigator );
	void ClientCommand ( struct FString Command );
	void ServerCommand ( struct FString Command );
	void PawnDied ( class APawn* P );
	void eventUnPossess ( );
	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition );
	void OnPawnChange ( class APawn* OldPawn, class APawn* NewPawn );
	void PawnReferenceUpdated ( );
	void ClientRestart ( class APawn* NewPawn );
	void GivePawn ( class APawn* NewPawn );
	void eventInitInputSystem ( );
	class ACamera* GetCameraArchetype ( );
	void eventSpawnPlayerCamera ( );
	void OnCameraChanged ( class ACamera* InCamera );
	void AddCheats ( unsigned long bForce );
	class UOnlineGameAccount_X* GetOnlineAccount ( );
	class UOnlinePlayer_X* GetOnlinePlayer ( );
	void OnReceivedPRI ( );
	void InitPlayerReplicationInfo ( );
	void eventDestroyed ( );
	void OnExternalUIChanged ( unsigned long bIsOpening );
	void SetPaused ( unsigned long bPaused );
	void eventReceivedPlayer ( );
	class UOnlineGame_X* GetOnlineGame ( );
	class UIOnlineGameHost_X* GetOnlineGameHost ( );
	class UOnlineGameLanServer_X* GetOnlineGameLanServer ( );
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer ( );
	void SpawnDefaultHUD ( );
	void SetPRI ( class APlayerReplicationInfo* PRI );
	void eventReplicatedEvent ( struct FName VarName );
	void EventPlayerKicked ( class APlayerController_X* PC, struct FString Reason );
	void EventPlayerCameraChange ( class APlayerController_X* PC );
	void EventDestroyed ( class APlayerController_X* PC );
	void EventReceivedPlayer ( class APlayerController_X* PC );
	void EventPawnChange ( class APlayerController_X* PC, class APawn* OldPawn, class APawn* NewPawn );
	void EventReceivedPRI ( class APlayerController_X* PC );
};

UClass* APlayerController_X::pClassPointer = NULL;

// Class ProjectX.CheatManager_X
// 0x0010 (0x0064 - 0x0054)
class UCheatManager_X : public UCheatManager
{
public:
	struct FScriptDelegate                             __EventDelegateTest__Delegate;                    		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3277 ];

		return pClassPointer;
	};

	void LoadPsynetStaticData ( struct FString Environment, struct FString Platform, struct FString Language );
	void HandleImageDownloaded ( class UOnlineImageDownloaderWeb_X* Downloader, struct FDownloadedImage Image );
	void DownloadImage ( struct FString URL );
	void LoadKismetLevel ( struct FName LeveFileName );
	void DrawBulletContacts ( float Lifetime );
	void PrintReproPhysics ( struct FString Command, class AActor* A );
	void ReproPhysics ( class AActor* A, float LX, float LY, float LZ, float RX, float RY, float RZ, float RW, float VX, float VY, float VZ );
	void DisableCCD ( );
	void SimulateInputKey ( struct FName KeyName );
	void SetNetServerMaxTickRate ( float Rate );
	void ScreenShotDir ( struct FString Directory );
	void ListVisiblePrimitives ( );
	void HideVisiblePrimitives ( struct FString NameMatch, struct FString NameIgnore );
	void ToggleReplicateVoiceToSelf ( );
	void ToggleReplicateVoiceToSender ( );
	void EventDelegateTest ( );
};

UClass* UCheatManager_X::pClassPointer = NULL;

// Class ProjectX.CheatObject_X
// 0x0000 (0x003C - 0x003C)
class UCheatObject_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3279 ];

		return pClassPointer;
	};

};

UClass* UCheatObject_X::pClassPointer = NULL;

// Class ProjectX.Compression_X
// 0x0000 (0x003C - 0x003C)
class UCompression_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3281 ];

		return pClassPointer;
	};

	bool Uncompress ( TArray< unsigned char >* Compressed, TArray< unsigned char >* Uncompressed );
	bool Compress ( TArray< unsigned char >* Uncompressed, TArray< unsigned char >* Compressed );
};

UClass* UCompression_X::pClassPointer = NULL;

// Class ProjectX.ControlPreset_X
// 0x001C (0x0058 - 0x003C)
class UControlPreset_X : public UObject
{
public:
	TArray< struct FPlayerBinding >                    PCBindings;                                       		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPlayerBinding >                    GamepadBindings;                                  		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bRemovedPCOverrides : 1;                          		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRemovedGamepadOverrides : 1;                     		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3283 ];

		return pClassPointer;
	};

	TArray< struct FPlayerBinding > GetGamepadBindings ( );
	TArray< struct FPlayerBinding > GetPCBindings ( );
};

UClass* UControlPreset_X::pClassPointer = NULL;

// Class ProjectX.CRC_X
// 0x0000 (0x003C - 0x003C)
class UCRC_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3285 ];

		return pClassPointer;
	};

	int GetStringCRC ( struct FString Text, int Seed );
};

UClass* UCRC_X::pClassPointer = NULL;

// Class ProjectX.CycleLog_X
// 0x0014 (0x005C - 0x0048)
class UCycleLog_X : public UComponent
{
public:
	int                                                MaxLogs;                                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           Logs;                                             		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                LogIndex;                                         		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3287 ];

		return pClassPointer;
	};

	void AllLogs ( struct FString* S );
};

UClass* UCycleLog_X::pClassPointer = NULL;

// Class ProjectX.DamageComponent_X
// 0x004C (0x0094 - 0x0048)
class UDamageComponent_X : public UComponent
{
public:
	float                                              Damage;                                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InstigatorDamageScale;                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      LegacyDamageType;                                 		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       Instigator;                                       		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AController*                                 InstigatorController;                             		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      Source;                                           		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Location;                                         		// 0x0060 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     MomentumDir;                                      		// 0x006C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0078 (0x001C) [0x0000000000082000]              ( CPF_Transient | CPF_Component )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3289 ];

		return pClassPointer;
	};

	void Reset ( );
	float CalculateDamage ( class AActor* Victim );
	void ApplyDamage ( class AActor* Victim, unsigned long bManualReset );
	class UDamageComponent_X* SetImpact ( struct FImpactInfo Impact );
	class UDamageComponent_X* SetHitInfo ( struct FTraceHitInfo InHitInfo );
	class UDamageComponent_X* ScaleDamage ( float InScale );
	class UDamageComponent_X* SetMomentumDir ( struct FVector InMomentumDir );
	class UDamageComponent_X* SetLocation ( struct FVector InLocation );
	class UDamageComponent_X* SetSource ( class AActor* InSource );
	void InitSource ( );
	class UDamageComponent_X* GetArchetype ( );
};

UClass* UDamageComponent_X::pClassPointer = NULL;

// Class ProjectX.DistributionFloatShakeParameter_X
// 0x0003 (0x0070 - 0x006D)
class UDistributionFloatShakeParameter_X : public UDistributionFloatParameterBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3291 ];

		return pClassPointer;
	};

};

UClass* UDistributionFloatShakeParameter_X::pClassPointer = NULL;

// Class ProjectX.EffectsMap_X
// 0x000C (0x0048 - 0x003C)
class UEffectsMap_X : public UObject
{
public:
	TArray< struct FEffectsMapping >                   Effects;                                          		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3293 ];

		return pClassPointer;
	};

	struct FEffectsMapping GetEffects ( class UPhysicalMaterial* PhysMat );
};

UClass* UEffectsMap_X::pClassPointer = NULL;

// Class ProjectX.EngineShare_X
// 0x00B4 (0x00F0 - 0x003C)
class UEngineShare_X : public UEngineShare
{
public:
	class UCycleLog_X*                                 TransientLog;                                     		// 0x003C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineGame_Base_X*                          OnlineGame;                                       		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ULocalCache_X*                               LocalCache;                                       		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ArchetypeString_OnlineGame;                       		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ArchetypeString_OnlineGameDedicatedServer;        		// 0x0054 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ArchetypeString_OnlineGameLanServer;              		// 0x0060 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bDisableSaving : 1;                               		// 0x006C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsShowingLoadmapMovie : 1;                       		// 0x006C (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __EventPreExit__Delegate;                         		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLoadingMovieClosed__Delegate;              		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0084 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPreScriptsReloaded__Delegate;              		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPostScriptsReloaded__Delegate;             		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventOnlineGameInitialized__Delegate;           		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPreLoadMap__Delegate;                      		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPostLoadMap__Delegate;                     		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x00D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCrashed__Delegate;                         		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x00E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3295 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	bool IsRequestingExit ( );
	struct FString GetUserAgentHeader ( );
	struct FString GetRegionString ( );
	struct FString GetPlatformString ( );
	void Crash ( );
	bool ParseCommandlineString ( struct FString Param, struct FString* OutValue );
	bool ParseCommandlineQWORD ( struct FString Param );
	bool ParseCommandlineFloat ( struct FString Param, float* OutValue );
	bool ParseCommandlineInt ( struct FString Param, int* OutValue );
	bool ParseCommandlineParam ( struct FString Param );
	void InitOnlineGame ( class UOnlineSubsystem* NewOnlineSubsystem );
	bool IsLanServer ( );
	bool IsDedicatedServer ( );
	void EventCrashed ( );
	void EventPostLoadMap ( );
	void EventPreLoadMap ( struct FString MapName );
	void EventOnlineGameInitialized ( );
	void EventPostScriptsReloaded ( );
	void EventPreScriptsReloaded ( );
	void EventLoadingMovieClosed ( );
	void EventPreExit ( );
};

UClass* UEngineShare_X::pClassPointer = NULL;

// Class ProjectX.Errors_X
// 0x0100 (0x0154 - 0x0054)
class UErrors_X : public UErrorList
{
public:
	class UErrorType*                                  UnknownError;                                     		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPsyNetErrorType_X*                          RequestError;                                     		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  HTTPError;                                        		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  SessionNotActive;                                 		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_NotConnected;                                		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_Connected;                                   		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_ConnectionDropped;                           		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_NoNetworkConnection;                         		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_ServiceUnavailable;                          		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_UpdateRequired;                              		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_ServersTooBusy;                              		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_DuplicateLoginDetected;                      		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_InvalidUser;                                 		// 0x0084 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_InvalidResponse;                             		// 0x0088 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  OSCS_TooYoung;                                    		// 0x008C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ConnectionStatusErrors[ 0xB ];                    		// 0x0090 (0x002C) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  VersionMismatch;                                  		// 0x00BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NoServers;                                        		// 0x00C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileDoesNotExist;                                 		// 0x00C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileLoadFail;                                     		// 0x00C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileLoadCorrupt;                                  		// 0x00CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileMountCorrupt;                                 		// 0x00D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileSaveFail;                                     		// 0x00D4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FileSaveNoSpace;                                  		// 0x00D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UserBanned;                                       		// 0x00DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NotLoggedInToPsynet;                              		// 0x00E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FriendsList;                                      		// 0x00E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  AuthenticationFailed;                             		// 0x00E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NoExportCountry;                                  		// 0x00EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UnauthorizedAccess;                               		// 0x00F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ServiceNotFound;                                  		// 0x00F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  FeatureDisabled;                                  		// 0x00F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MatchmakingDisabled;                              		// 0x00FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameNotSet;                                 		// 0x0100 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameAlreadyTaken;                           		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameTooShort;                               		// 0x0108 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameTooLong;                                		// 0x010C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameInappropriate;                          		// 0x0110 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameInvalidCharacter;                       		// 0x0114 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlayerNameFailed;                                 		// 0x0118 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  NotAuthorized;                                    		// 0x011C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  SessionAlreadyActive;                             		// 0x0120 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  GameServerPending;                                		// 0x0124 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CacheError;                                       		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  WordFilterEvil;                                   		// 0x012C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  WordFilterPlatformError;                          		// 0x0130 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  WordFilterPlatformChatError;                      		// 0x0134 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvalidSettings;                                  		// 0x0138 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  Maintenance;                                      		// 0x013C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PlatformAuthError;                                		// 0x0140 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  LocalHostConnectionError;                         		// 0x0144 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UGCRestricted;                                    		// 0x0148 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPsyNetErrorType_X*                          PerConBroken;                                     		// 0x014C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MicrotransactionServiceMaintenance;               		// 0x0150 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3297 ];

		return pClassPointer;
	};

	bool DisplayPlatformError ( class UErrorType* InErrorType );
};

UClass* UErrors_X::pClassPointer = NULL;

// Class ProjectX.EventRecorder_X
// 0x0058 (0x00A0 - 0x0048)
class UEventRecorder_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bEnabled : 1;                                     		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FName >                             DisabledEvents;                                   		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxQueuedEvents;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxQueuedMinutes;                                 		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMetricsEvent >                     QueuedEvents;                                     		// 0x0064 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FGuid                                       AppSessionID;                                     		// 0x0070 (0x0010) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FGuid                                       LevelSessionID;                                   		// 0x0080 (0x0010) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              NextSendTime;                                     		// 0x0090 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              FloodPreventionTimeSeconds;                       		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFullSendTime;                                 		// 0x0098 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                AppEventCount;                                    		// 0x009C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3299 ];

		return pClassPointer;
	};

	void eventMetricsFlood ( struct FString LastEventName );
	void SetLevelSessionID ( struct FGuid Id );
	void Send ( );
	void RecordEvent ( struct FString Category, struct FName Event, struct FString* Data );
	void RecordFunction ( struct FString Category );
};

UClass* UEventRecorder_X::pClassPointer = NULL;

// Class ProjectX.MetricsSystem_X
// 0x0000 (0x00A0 - 0x00A0)
class UMetricsSystem_X : public UEventRecorder_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3301 ];

		return pClassPointer;
	};

};

UClass* UMetricsSystem_X::pClassPointer = NULL;

// Class ProjectX.EventRecorderGroup_X
// 0x000C (0x0054 - 0x0048)
class UEventRecorderGroup_X : public UComponent
{
public:
	struct FString                                     Category;                                         		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3303 ];

		return pClassPointer;
	};

	struct FString VectorToString ( struct FVector V );
	void RecordFunction ( );
	class UEventRecorder_X* GetEventRecorder ( );
};

UClass* UEventRecorderGroup_X::pClassPointer = NULL;

// Class ProjectX.MetricsGroup_X
// 0x0000 (0x0054 - 0x0054)
class UMetricsGroup_X : public UEventRecorderGroup_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3305 ];

		return pClassPointer;
	};

	class UEventRecorder_X* GetEventRecorder ( );
};

UClass* UMetricsGroup_X::pClassPointer = NULL;

// Class ProjectX.FakeData_X
// 0x0298 (0x02D4 - 0x003C)
class UFakeData_X : public UObject
{
public:
	int                                                RandomSeed;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FFakeData1                                  Data1;                                            		// 0x0040 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFakeData2                                  Data2;                                            		// 0x0070 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFakeData3                                  Data3;                                            		// 0x00E8 (0x00FC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFakeData4                                  Data4;                                            		// 0x01E4 (0x00F0) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3307 ];

		return pClassPointer;
	};

	int RandomizeValues ( class UObject* Target, int InRandomSeed );
	class UFakeData_X* RandomizeFakeData ( class UFakeData_X* FakeData, int InRandomSeed );
	class UFakeData_X* GenerateFakeData ( int InRandomSeed );
};

UClass* UFakeData_X::pClassPointer = NULL;

// Class ProjectX.FXActorEvent_X
// 0x0000 (0x003C - 0x003C)
class UFXActorEvent_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3309 ];

		return pClassPointer;
	};

};

UClass* UFXActorEvent_X::pClassPointer = NULL;

// Class ProjectX.GameEngine_X
// 0x0000 (0x07DC - 0x07DC)
class UGameEngine_X : public UGameEngine
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3311 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void eventOnlineSubsystemInitialized ( );
};

UClass* UGameEngine_X::pClassPointer = NULL;

// Class ProjectX.GameInfo_X
// 0x0038 (0x0410 - 0x03D8)
class AGameInfo_X : public AFrameworkGame
{
public:
	class AGameReplicationInfo*                        GameReplicationInfoArchetype;                     		// 0x03D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APlayerController*                           PlayerControllerArchetype;                        		// 0x03DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       PawnArchetype;                                    		// 0x03E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPauserData >                       PCPausers;                                        		// 0x03E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x03F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x03F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInit__Delegate;                            		// 0x0400 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0404 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3313 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void eventClientMapLoadFail ( struct FUniqueNetId PlayerID, struct FString MapName );
	void SetPaused ( class APlayerController* PC, unsigned long bPause );
	void TogglePause ( class APlayerController* PC );
	bool IsPaused ( class APlayerController* PC );
	class UIOnlineGameHost_X* GetOnlineGameHost ( );
	class UOnlineGameLanServer_X* GetOnlineGameLanServer ( );
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer ( );
	class UOnlineGame_Base_X* GetOnlineGame ( );
	void EndOnlineGame ( );
	void Logout ( class AController* Exiting );
	void GenericPlayerInitialization ( class AController* C );
	void DisconnectExistingPlayer ( struct FUniqueNetId* PlayerID );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
	void eventPreLogin ( struct FString Options, struct FString Address, struct FUniqueNetId UniqueId, unsigned long bSupportsAuth, struct FString* ErrorMessage );
	void UpdateGameSettingsCounts ( );
	void PostBeginPlay ( );
	bool ProcessServerLogin ( );
	void RegisterServer ( );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void Killed_X ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UDamageComponent_X* Damage );
	void AdjustDamage_X ( class APawn* injured, class UDamageComponent_X* Damage );
	void eventPreBeginPlay ( );
	class APlayerController* SpawnPlayerController ( struct FVector SpawnLocation, struct FRotator SpawnRotation );
	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal );
	struct FString eventGetDefaultGameClassPath ( struct FString MapName, struct FString Options, struct FString Portal );
	void PDI ( class UClass* ActorClass, unsigned long bOnlybDebug );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	void EventInit ( class AGameInfo_X* G, struct FString Options );
	void EventSpawned ( class AGameInfo_X* G );
};

UClass* AGameInfo_X::pClassPointer = NULL;

// Class ProjectX.GameSetting_X
// 0x0000 (0x003C - 0x003C)
class UGameSetting_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3315 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	bool IsSetting ( struct FName SettingName );
	void AddGameSettingToList ( class UOnlineGameSettings_X* OnlineGameSettings, TArray< class UGameSetting_X* >* GameSettingsArray );
};

UClass* UGameSetting_X::pClassPointer = NULL;

// Class ProjectX.GameSettingCategory_X
// 0x001C (0x0058 - 0x003C)
class UGameSettingCategory_X : public UObject
{
public:
	TArray< struct FName >                             SelectedNames;                                    		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bHidden : 1;                                      		// 0x0048 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	TArray< class UGameSetting_X* >                    GameSettings;                                     		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3317 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	int GetGameSettingIndex ( struct FName SettingName );
	bool eventHasSetting ( struct FName SettingName );
	void GetSelectedGameSettings ( TArray< class UGameSetting_X* >* SelectedGameSettings );
	class UGameSetting_X* GetFirstSelectedGameSetting ( );
	void ClearSelected ( );
	void AddSelectedSetting ( struct FName NewSelectedName );
	void SetGameSettings ( TArray< class UGameSetting_X* > NewGameSettings );
};

UClass* UGameSettingCategory_X::pClassPointer = NULL;

// Class ProjectX.GameViewportClient_X
// 0x0048 (0x018C - 0x0144)
class UGameViewportClient_X : public UGameViewportClient
{
public:
	unsigned long                                      bHandCursor : 1;                                  		// 0x0144 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                MaxSplitScreenPlayers;                            		// 0x0148 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             __EventLocalPlayerJoin__Delegate;                 		// 0x014C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0150 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLocalPlayerLeave__Delegate;                		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0160 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventNotifyConnectionError__Delegate;           		// 0x016C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0170 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerChange__Delegate;             		// 0x017C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0180 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3319 ];

		return pClassPointer;
	};

	void OnPrimaryPlayerSwitch ( class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer );
	bool ForceRemovePlayer ( class ULocalPlayer* ExPlayer );
	bool eventRemovePlayer ( class ULocalPlayer* ExPlayer );
	bool RemovePlayerByID ( int ControllerId );
	void eventSetHardwareMouseCursorVisibility ( unsigned long bIsVisible );
	void NotifyConnectionError ( unsigned char MessageType, struct FString Message, struct FString Title );
	class ULocalPlayer* eventCreatePlayer ( int ControllerId, unsigned long bSpawnActor, struct FString* OutError );
	void NotifyPlayerRemoved ( int PlayerIndex, class ULocalPlayer* RemovedPlayer );
	void NotifyPlayerAdded ( int PlayerIndex, class ULocalPlayer* AddedPlayer );
	bool IsGameRecordingEnabled ( );
	float GetDefaultSafeZone ( );
	void FlashWindow ( );
	void SaveCurrentWindowState ( );
	void SaveWindowState ( int ResX, int ResY, unsigned long bFullScreen, unsigned long bBorderless, unsigned long bVsync );
	bool GetAvailableResolutions ( TArray< struct FIntPoint >* Resolutions );
	bool GetAvailableResolutionsStr ( TArray< struct FString >* Resolutions );
	bool IsBorderlessViewport ( );
	struct FIntPoint GetViewportSizePoint ( );
	struct FString GetViewportSizeStr ( );
	class UGameViewportClient_X* GetInstance ( );
	void EventPrimaryPlayerChange ( class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer );
	void EventNotifyConnectionError ( struct FString Title, struct FString Message );
	void EventLocalPlayerLeave ( class ULocalPlayer* OldPlayer );
	void EventLocalPlayerJoin ( class ULocalPlayer* NewPlayer );
};

UClass* UGameViewportClient_X::pClassPointer = NULL;

// Class ProjectX.GFxDataRow_X
// 0x0018 (0x0054 - 0x003C)
class UGFxDataRow_X : public UObject
{
public:
	struct FName                                       TableName;                                        		// 0x003C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UClass*                                      ProxyClass;                                       		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bLevelTransitionPersistent : 1;                   		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UObject*                                     ProxyObject;                                      		// 0x004C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UGFxShell_X*                                 Shell;                                            		// 0x0050 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3321 ];

		return pClassPointer;
	};

	class UGFxObject* FlashEventObject ( );
	struct FString FlashEventString ( );
	float FlashEventFloat ( );
	int FlashEventInt ( );
	void FlashEventVoid ( );
	void SetProxy ( class UObject* InProxyObject );
	void eventOnRemoved ( );
	void eventOnShellSet ( );
};

UClass* UGFxDataRow_X::pClassPointer = NULL;

// Class ProjectX.GFxDataSingleton_X
// 0x0000 (0x0054 - 0x0054)
class UGFxDataSingleton_X : public UGFxDataRow_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3323 ];

		return pClassPointer;
	};

};

UClass* UGFxDataSingleton_X::pClassPointer = NULL;

// Class ProjectX.GFxShell_X
// 0x0060 (0x00B4 - 0x0054)
class UGFxShell_X : public UGFxDataSingleton_X
{
public:
	class UGFxMoviePlayer_X*                           MoviePlayerArchetype;                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ULocalPlayer_X*                              Player;                                           		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      bGamePaused : 1;                                  		// 0x005C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      bWasFullscreen : 1;                               		// 0x005C (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	float                                              LeftX;                                            		// 0x0060 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	float                                              LeftY;                                            		// 0x0064 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	float                                              RightX;                                           		// 0x0068 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	float                                              RightY;                                           		// 0x006C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	TArray< class UGFxMoviePlayer_X* >                 Movies;                                           		// 0x0070 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UGFxDataStore_X*                             DataStore;                                        		// 0x007C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      NavigationMode;                                   		// 0x0080 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      InputType;                                        		// 0x0081 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;             		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInputTypeChanged__Delegate;                		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0098 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReceivedInput__Delegate;                   		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3325 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void SetMouseKeyPressed ( struct FName Key, unsigned long bPressed );
	void SetAllowAnyPlayerInput ( unsigned long bAllow );
	void HandlePauseChanged ( );
	void OnShowKeyboardCanceled ( );
	void OnShowKeyboardComplete ( struct FString NewText );
	void HandleShowKeyboardComplete ( struct FString NewText, unsigned long bCanceled );
	struct FString PasteFromClipboard ( );
	void CopyToClipboard ( struct FString ClipboardText );
	void HideKeyboard ( );
	bool ShowKeyboard ( struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, struct FString DefaultText, int MaxLength );
	void SetGamePaused ( unsigned long bPaused );
	void ExitToMainMenu ( );
	void ExitGame ( );
	void HandleMovieInputCaptureChanged ( class UGFxMoviePlayer_X* MoviePlayer );
	void TriggerDataCallbacks ( );
	void eventTick ( float DeltaTime );
	void eventOnMovieClosed ( class UGFxMoviePlayer_X* Movie );
	void eventOnMovieStarted ( class UGFxMoviePlayer_X* Movie );
	void StopMovie ( class UGFxMoviePlayer_X* Movie );
	void StartMovie ( class UGFxMoviePlayer_X* Movie );
	void eventStop ( );
	void eventOnStart ( );
	void eventStart ( class ULocalPlayer_X* InPlayer );
	void EventReceivedInput ( class UGFxShell_X* InShell );
	void EventInputTypeChanged ( class UGFxShell_X* InShell );
	void EventInputCaptureChanged ( class UGFxShell_X* InShell );
};

UClass* UGFxShell_X::pClassPointer = NULL;

// Class ProjectX.GFxDataStore_X
// 0x0058 (0x00A0 - 0x0048)
class UGFxDataStore_X : public UComponent
{
public:
	TArray< struct FGFxDataStoreTable >                Tables;                                           		// 0x0048 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FGFxDirtyTable >                    DirtyTables;                                      		// 0x0054 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FMap_Mirror                                 ObjectNameToTable;                                		// 0x0060 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      bDebugGetValue : 1;                               		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3327 ];

		return pClassPointer;
	};

	void ExportFakeData ( struct FName TableName );
	void PrintData ( struct FName TableName );
	int GetObjectRow ( class UGFxDataRow_X* O );
	void AllObjects ( class UClass* ObjClass, class UGFxDataRow_X** OutObject, int* Row );
	class UGFxDataRow_X* GetObject ( class UClass* ObjClass, int Row );
	void RemoveObject ( class UGFxDataRow_X* O );
	void BindObject ( class UGFxDataRow_X* Object, int Row );
	class UGFxDataRow_X* CreateObject ( class UClass* ObjClass, int Row );
	void RemoveAllObjects ( class UClass* ObjClass );
	void SetObjectCount ( class UClass* ObjClass, int Count );
	int GetObjectCount ( class UClass* ObjClass );
	void EmptyTables ( );
	void EmptyTable ( struct FName Table );
	void RemoveRow ( struct FName Table, int Row );
	void SetRowCount ( struct FName Table, int Count );
	int GetRowCount ( struct FName Table );
	struct FASValue GetValue ( struct FName Table, int Row, struct FName Column );
	void SetASValue ( struct FName Table, int Row, struct FName Column, struct FASValue* Value );
	void SetTextureValue ( struct FName Table, int Row, struct FName Column, class UTexture* Value );
	void SetStringValue ( struct FName Table, int Row, struct FName Column, struct FString Value );
	void SetQWordValue ( struct FName Table, int Row, struct FName Column );
	void SetFloatValue ( struct FName Table, int Row, struct FName Column, float Value );
	void SetIntValue ( struct FName Table, int Row, struct FName Column, int Value );
	void SetBoolValue ( struct FName Table, int Row, struct FName Column, unsigned long Value );
	void SetDirty ( struct FName TableName, int RowNum, struct FName Value );
};

UClass* UGFxDataStore_X::pClassPointer = NULL;

// Class ProjectX.GFxEngine_X
// 0x0054 (0x0110 - 0x00BC)
class UGFxEngine_X : public UGFxEngine
{
public:
	class UGFxShell_X*                                 ShellArchetype;                                   		// 0x00BC (0x0004) [0x0000000000000000]              
	TArray< class UGFxShell_X* >                       Shells;                                           		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FDirtyObject >                      DirtyObjects;                                     		// 0x00CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bAnyShellHasInput : 1;                            		// 0x00D8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      AvailableGamepadType;                             		// 0x00DC (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __EventShellCreated__Delegate;                    		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAvailableGamepadTypeChanged__Delegate;     		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGameSessionEnded__Delegate;                		// 0x0100 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0104 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3329 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void eventOnGameSessionEnded ( );
	void GetFlashKey ( struct FName UnrealKey, int* KeyCode, int* MouseButton );
	void UpdateHardwareMouseCursorVisibility ( );
	void HandleShellInputTypeChanged ( class UGFxShell_X* InShell );
	void HandleGFxEnabledChanged ( class UGameViewportClient* GVC );
	void HandleShellInputCaptureChanged ( class UGFxShell_X* InShell );
	void FlushDirtyObjects ( );
	void eventTick ( float DeltaTime );
	class UGFxShell_X* FindShell ( class ULocalPlayer_X* ForPlayer );
	void OnShellDestroyed ( class UGFxShell_X* Shell );
	void DestroyShell ( class ULocalPlayer* ForPlayer );
	class UGFxShell_X* eventCreateShell ( );
	class UGFxShell_X* GetShell ( class ULocalPlayer_X* ForPlayer );
	void SetShellArchetype ( class UGFxShell_X* InShellArchetype );
	class UGFxEngine_X* GetInstance ( class UClass* Type );
	void EventGameSessionEnded ( );
	void EventAvailableGamepadTypeChanged ( class UGFxEngine_X* Engine );
	void EventShellCreated ( class UGFxEngine_X* Engine, class UGFxShell_X* Shell );
};

UClass* UGFxEngine_X::pClassPointer = NULL;

// Class ProjectX.GFxMoviePlayer_X
// 0x00D0 (0x023C - 0x016C)
class UGFxMoviePlayer_X : public UGFxMoviePlayer
{
public:
	class UGFxShell_X*                                 Shell;                                            		// 0x016C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UGFxDataStore_X*                             DataStore;                                        		// 0x0170 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< class UGFxDataCallback_X* >                DataCallbacks;                                    		// 0x0174 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< class UGFxObjectReference_X* >             ActionScriptClasses;                              		// 0x0180 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FMap_Mirror                                 ActionScriptClassMap;                             		// 0x018C (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FString >                           CursorScenes;                                     		// 0x01C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           InputScenes;                                      		// 0x01D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           CaptureScenes;                                    		// 0x01E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FName                                       DebugTableCallback;                               		// 0x01EC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DebugColumnCallback;                              		// 0x01F4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGFxObjectReference_X*                       ShellHooksClass;                                  		// 0x01FC (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< class UGFxSoundPack_X* >                   LoadedSoundPacks;                                 		// 0x0200 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventStarted__Delegate;                         		// 0x020C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0210 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x021C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0220 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;             		// 0x022C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0230 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3331 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void SetAllowAnyPlayerInput ( unsigned long bAllow );
	bool PopString ( struct FString Value, TArray< struct FString >* Items );
	void SetGlobalRTCP ( struct FName Key, float Value );
	void eventStopAllSounds ( class UGFxSoundPack_X* SoundPack );
	void StopSound ( struct FName EventName );
	void PlaySound ( struct FName EventName );
	void eventPlaySoundFromTheme ( struct FName EventName, struct FName SoundThemeName );
	class AActor* GetSoundSource ( );
	void UpdateCursorVisibility ( );
	void eventSetCaptureAllInput ( unsigned long bNewCaptureInput, struct FString SceneName );
	void eventSetReceiveInput ( unsigned long bNewReceiveInput, struct FString SceneName );
	void eventSetCursorVisible ( unsigned long bVisible, struct FString SceneName );
	void InitShellHooks ( );
	void InitDataHooks ( );
	void eventOnClose ( );
	bool eventStart ( unsigned long StartPaused );
	void EventInputCaptureChanged ( class UGFxMoviePlayer_X* Player );
	void EventClosed ( class UGFxMoviePlayer_X* Player );
	void EventStarted ( class UGFxMoviePlayer_X* Player );
};

UClass* UGFxMoviePlayer_X::pClassPointer = NULL;

// Class ProjectX.GFxObjectReference_X
// 0x0030 (0x006C - 0x003C)
class UGFxObjectReference_X : public UObject
{
public:
	int                                                Value[ 0xC ];                                     		// 0x003C (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3333 ];

		return pClassPointer;
	};

};

UClass* UGFxObjectReference_X::pClassPointer = NULL;

// Class ProjectX.GFxDataCallback_X
// 0x0015 (0x0081 - 0x006C)
class UGFxDataCallback_X : public UGFxObjectReference_X
{
public:
	struct FName                                       Table;                                            		// 0x006C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                Row;                                              		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       Column;                                           		// 0x0078 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Type;                                             		// 0x0080 (0x0001) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3335 ];

		return pClassPointer;
	};

};

UClass* UGFxDataCallback_X::pClassPointer = NULL;

// Class ProjectX.GFxSoundPack_X
// 0x0018 (0x0054 - 0x003C)
class UGFxSoundPack_X : public UObject
{
public:
	struct FString                                     ExportClassName;                                  		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSoundPackSoundRef >                Sounds;                                           		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3337 ];

		return pClassPointer;
	};

	bool ToggleSound ( int Idx, class AActor* Target, unsigned long bPlay );
	void StopAll ( class AActor* Target );
	bool StopSound ( struct FName SoundName, class AActor* Target );
	bool PlaySound ( struct FName SoundName, class AActor* Target );
};

UClass* UGFxSoundPack_X::pClassPointer = NULL;

// Class ProjectX.InterpComponent_X
// 0x00DF (0x0144 - 0x0065)
class UInterpComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[ 0xB ];                             		// 0x0065 (0x000B) MISSED OFFSET
	struct FMatrix                                     InterpStart;                                      		// 0x0070 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FMatrix                                     InterpEnd;                                        		// 0x00B0 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FMatrix                                     InterpLocalToWorld;                               		// 0x00F0 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              InterpStartTime;                                  		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              InterpEndTime;                                    		// 0x0134 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FAttachment >                       Attachments;                                      		// 0x0138 (0x000C) [0x0000000000680002]              ( CPF_Const | CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3339 ];

		return pClassPointer;
	};

	void DetachComponent ( class UActorComponent* Component );
	void AttachComponent ( class UActorComponent* Component, struct FVector RelativeLocation, struct FRotator RelativeRotation, struct FVector RelativeScale );
};

UClass* UInterpComponent_X::pClassPointer = NULL;

// Class ProjectX.JsonTests_X
// 0x0000 (0x003C - 0x003C)
class UJsonTests_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3341 ];

		return pClassPointer;
	};

	bool ToJsonAndBack ( class UObject* Target );
	void RunJsonTests ( int RandomSeed );
};

UClass* UJsonTests_X::pClassPointer = NULL;

// Class ProjectX.LanBeacon_X
// 0x0020 (0x0068 - 0x0048)
class ULanBeacon_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    LanBeacon;                                        		// 0x004C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                LanAnnouncePort;                                  		// 0x0050 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0054 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LanBeacon_X.QueryNonce
	unsigned char                                      BeaconState;                                      		// 0x005C (0x0001) [0x0000000000000002]              ( CPF_Const )
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x0060 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MaxPacketSize;                                    		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3343 ];

		return pClassPointer;
	};

	bool BroadcastMessage ( class UObject* Message );
	bool BroadcastData ( TArray< unsigned char >* Data );
	void Stop ( );
	bool Start ( unsigned char InitialState );
};

UClass* ULanBeacon_X::pClassPointer = NULL;

// Class ProjectX.LensFlareComponent_X
// 0x005C (0x0290 - 0x0234)
class ULensFlareComponent_X : public ULensFlareComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x0234 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FRawDistributionFloat                       AlphaOverTime;                                    		// 0x0238 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      ColorOverTime;                                    		// 0x0254 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	TArray< struct FLensFlareFloatParamCurve >         MaterialFloatParamValuesOverTime;                 		// 0x0270 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FName                                       SourceColorParamName;                             		// 0x027C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SourceColorAlphaParamName;                        		// 0x0284 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              AttachTime;                                       		// 0x028C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3345 ];

		return pClassPointer;
	};

	void SetActorParameter ( struct FName Key, class AActor* Value );
	void SetLinearColorParameter ( struct FName Key, struct FLinearColor Value );
	void SetVectorParameter ( struct FName Key, struct FVector Value );
	void SetFloatParameter ( struct FName Key, float Value );
	void SetNameParameter ( struct FName Key, struct FName Value );
};

UClass* ULensFlareComponent_X::pClassPointer = NULL;

// Class ProjectX.LocalCache_X
// 0x0058 (0x0094 - 0x003C)
class ULocalCache_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FPointer >                          ImportTasks;                                      		// 0x0040 (0x000C) [0x0000000000103000]              ( CPF_Native | CPF_Transient )
	TArray< struct FCacheImportCallbackData >          ImportCallbacks;                                  		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPointer >                          ExportTasks;                                      		// 0x0058 (0x000C) [0x0000000000103000]              ( CPF_Native | CPF_Transient )
	TArray< struct FCacheExportCallbackData >          ExportCallbacks;                                  		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bDebug : 1;                                       		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FScriptDelegate                             __EventImportFinished__Delegate;                  		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventExportFinished__Delegate;                  		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3347 ];

		return pClassPointer;
	};

	bool HasActiveTasks ( );
	void ExportObject ( class UObject* CacheObject, struct FString Path, struct FScriptDelegate Callback );
	void ImportObject ( class UObject* CacheObject, struct FString Path, struct FScriptDelegate Callback );
	void EventExportFinished ( class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error );
	void EventImportFinished ( class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error );
};

UClass* ULocalCache_X::pClassPointer = NULL;

// Class ProjectX.LocalPlayer_X
// 0x0004 (0x03F8 - 0x03F4)
class ULocalPlayer_X : public ULocalPlayer
{
public:
	class UOnlinePlayer_X*                             OnlinePlayer;                                     		// 0x03F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3349 ];

		return pClassPointer;
	};

	bool SpawnPlayActor ( struct FString URL, struct FString* OutError );
	void eventNotifyServerConnectionOpen ( );
	void OnRemoved ( );
	void OnCreated ( );
};

UClass* ULocalPlayer_X::pClassPointer = NULL;

// Class ProjectX.MapFlythroughProfiler_X
// 0x0048 (0x0244 - 0x01FC)
class AMapFlythroughProfiler_X : public AActor
{
public:
	float                                              Accel;                                            		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnRate;                                         		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProfileTime;                                      		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FinishTime;                                       		// 0x0208 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Speed;                                            		// 0x020C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRenderProfile                              Profile;                                          		// 0x0210 (0x0024) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventFinished__Delegate;                        		// 0x0234 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0238 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3351 ];

		return pClassPointer;
	};

	void SetupPlayers ( );
	void eventPostBeginPlay ( );
	void EventFinished ( class AMapFlythroughProfiler_X* Profiler );
};

UClass* AMapFlythroughProfiler_X::pClassPointer = NULL;

// Class ProjectX.ObjectListComponent_X
// 0x0028 (0x0070 - 0x0048)
class UObjectListComponent_X : public UComponent
{
public:
	TArray< class UObject* >                           Objects;                                          		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FObjectListListener >               Listeners;                                        		// 0x0054 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __ObjectListenerCallback__Delegate;               		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0064 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3353 ];

		return pClassPointer;
	};

	int GetCount ( );
	void Merge ( TArray< class UObject* > NewList );
	void RemoveObject ( class UObject* NewObj );
	void AddObject ( class UObject* NewObj );
	void RemoveListener ( class UObject* Listener, class UClass* ObjClass );
	void AddListener ( struct FScriptDelegate OnAdd, struct FScriptDelegate OnRemove, class UClass* ObjClass );
	void AllObjects ( class UClass* BaseClass, class UClass* InterfaceClass, class UObject** Obj );
	void ObjectListenerCallback ( class UObject* Obj );
};

UClass* UObjectListComponent_X::pClassPointer = NULL;

// Class ProjectX.OnlineConfig_X
// 0x0010 (0x004C - 0x003C)
class UOnlineConfig_X : public UObject
{
public:
	unsigned long                                      bAllowOnServer : 1;                               		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FModifierSubscription >             AllSubscriptions;                                 		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3355 ];

		return pClassPointer;
	};

	void UnsubscribeModifiers ( );
	void ModifyObjects ( class UClass* ObjClass, struct FScriptDelegate ApplyCallback, struct FScriptDelegate ResetCallback );
	void Undo ( );
	void Apply ( );
};

UClass* UOnlineConfig_X::pClassPointer = NULL;

// Class ProjectX.CrossplayConfig_X
// 0x000C (0x0058 - 0x004C)
class UCrossplayConfig_X : public UOnlineConfig_X
{
public:
	TArray< struct FCrossplayGroup >                   Groups;                                           		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3357 ];

		return pClassPointer;
	};

	bool PlatformsShareGroup ( unsigned char Platform1, unsigned char Platform2 );
};

UClass* UCrossplayConfig_X::pClassPointer = NULL;

// Class ProjectX.PhysicsConfig_X
// 0x0048 (0x0094 - 0x004C)
class UPhysicsConfig_X : public UOnlineConfig_X
{
public:
	TArray< struct FString >                           EnabledFeatures;                                  		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           DisabledFeatures;                                 		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FCarInteractionConfig                       CarInteractionSettings;                           		// 0x0064 (0x0020) [0x0000000000000000]              
	struct FSuperSonicConfig                           SuperSonicSettings;                               		// 0x0084 (0x000C) [0x0000000000000000]              
	unsigned long                                      bUseAckermannSteering : 1;                        		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPredictContacts : 1;                             		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3359 ];

		return pClassPointer;
	};

	void DisableFeature ( struct FString Feature );
	void EnableFeature ( struct FString Feature );
	void Reset ( );
	void Apply ( );
};

UClass* UPhysicsConfig_X::pClassPointer = NULL;

// Class ProjectX.PsyNetConfig_X
// 0x001C (0x0068 - 0x004C)
class UPsyNetConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bAllowPerCon : 1;                                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowPsyNetParty : 1;                            		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSendPingMessage : 1;                             		// 0x004C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAllowServerBacktraceUploads : 1;                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAllowClientBacktraceUploads : 1;                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	int                                                PerConMaxInvalidMessages;                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PerConMaxDisconnects;                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PerConMaxErrors;                                  		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PerConErrorWindow;                                		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PerConTimeout;                                    		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PerConPingInterval;                               		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3361 ];

		return pClassPointer;
	};

};

UClass* UPsyNetConfig_X::pClassPointer = NULL;

// Class ProjectX.RPCConfig_X
// 0x0018 (0x0064 - 0x004C)
class URPCConfig_X : public UOnlineConfig_X
{
public:
	TArray< class UClass* >                            DisabledClasses;                                  		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           DisabledServices;                                 		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3363 ];

		return pClassPointer;
	};

	bool IsRPCDisabled ( class URPC_X* RPC );
};

UClass* URPCConfig_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameSearch_X
// 0x0030 (0x0124 - 0x00F4)
class UOnlineGameSearch_X : public UOnlineGameSearch
{
public:
	TArray< struct FString >                           InclusiveGameTagsArray;                           		// 0x00F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           ExclusiveGameTagsArray;                           		// 0x0100 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     GameTagsDelimiter;                                		// 0x0118 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3365 ];

		return pClassPointer;
	};

	bool GetStringProperty ( int PropertyId, struct FString* Value );
	struct FString eventGetExclusiveGameTags ( );
	struct FString eventGetInclusiveGameTags ( );
	void SetMap ( struct FString inMapName );
	void SetExclusiveGameTags ( TArray< struct FString > inGameTagsArray );
	void SetInclusiveGameTags ( TArray< struct FString > inGameTagsArray );
};

UClass* UOnlineGameSearch_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameSettings_X
// 0x0038 (0x00A4 - 0x006C)
class UOnlineGameSettings_X : public USettings
{
public:
	int                                                NumPublicConnections;                             		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                NumOpenPublicConnections;                         		// 0x0070 (0x0004) [0x0000000000000000]              
	TArray< class UGameSettingCategory_X* >            GameSettingCategories;                            		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bOffline : 1;                                     		// 0x0080 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                MinimumPlayersRequired;                           		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                NumSecondsWaitingForPlayers;                      		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                SearchScore;                                      		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              LogTime;                                          		// 0x0090 (0x0004) [0x0000000040002000]              ( CPF_Transient | CPF_EditInlineNotify )
	struct FScriptDelegate                             __EventNumPlayersUpdated__Delegate;               		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0098 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3367 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	bool Equals ( class UOnlineGameSettings_X* OtherGameSettings );
	void CalculateMinAndMaxNumPlayers ( );
	void CopyFrom ( class UOnlineGameSettings_X* OtherGameSettings );
	class UGameSettingPlaylist_X* GetPlaylist ( );
	bool IsValid ( );
	void RemoveMismatchedTags ( class UOnlineGameSettings_X* OtherGameSettings );
	class UGameSettingCategory_X* GetGameSettingCategoryByName ( struct FName CategoryName );
	void SetIntProperty ( int PropertyId, int Value );
	void SetGameTag ( struct FName NewGameTag );
	void UpdateFromURL ( class AGameInfo* Game, struct FString* URL );
	bool HasSetting ( struct FName SettingName );
	void GetActiveGameSettings ( TArray< class UGameSetting_X* >* GameSettings );
	class UGameSetting_X* GetGameSetting ( struct FString SettingName, class UGameSettingCategory_X** Category );
	struct FString GetGameTags ( );
	bool GetStringProperty ( int PropertyId, struct FString* Value );
	void Init ( );
	void EventNumPlayersUpdated ( class UOnlineGameSettings_X* GameSettings, int NewMinimumPlayersRequired );
};

UClass* UOnlineGameSettings_X::pClassPointer = NULL;

// Class ProjectX.OnlineLegalText_X
// 0x0020 (0x0068 - 0x0048)
class UOnlineLegalText_X : public UComponent
{
public:
	struct FString                                     Folder;                                           		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UCachedWebData_X*                            CachedData;                                       		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventNewText__Delegate;                         		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x005C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3369 ];

		return pClassPointer;
	};

	void HandleWebText ( class UCachedWebData_X* InCachedData );
	struct FString GetWebUrl ( );
	struct FString GetPlatformString ( );
	struct FString eventGetRelativeUrl ( );
	struct FString GetText ( );
	void Sync ( );
	void EventNewText ( class UOnlineLegalText_X* Text );
};

UClass* UOnlineLegalText_X::pClassPointer = NULL;

// Class ProjectX.OnlineMessage_X
// 0x0000 (0x003C - 0x003C)
class UOnlineMessage_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3371 ];

		return pClassPointer;
	};

};

UClass* UOnlineMessage_X::pClassPointer = NULL;

// Class ProjectX.OnlineMessageComponent_X
// 0x0024 (0x006C - 0x0048)
class UOnlineMessageComponent_X : public UComponent
{
public:
	class USerializer_X*                               Serializer;                                       		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCompression_X*                              Compressor;                                       		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FOnlineMessageHandler >             MessageHandlers;                                  		// 0x0050 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;              		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3373 ];

		return pClassPointer;
	};

	class UOnlineMessageComponent_X* EnableCompression ( unsigned long bEnabled );
	class UOnlineMessageComponent_X* SetSerializer ( class USerializer_X* InSerializer );
	void InvokeHandlers ( class UObject* Message );
	class UObject* DeserializeMessage ( class UObject* MessageOuter, TArray< unsigned char >* Data );
	bool SerializeMessage ( class UObject* Message, TArray< unsigned char >* OutData );
	class UOnlineMessage_X* CreateMessage ( class UClass* MessageClass, class UObject* MessageOuter );
	void RemoveMessageHandler ( struct FScriptDelegate Callback );
	void AddMessageHandler ( class UClass* MessageClass, struct FScriptDelegate Callback );
	void MessageReceivedDelegate ( class UOnlineMessageComponent_X* Component, class UObject* Message );
};

UClass* UOnlineMessageComponent_X::pClassPointer = NULL;

// Class ProjectX.ParameterDispenser_X
// 0x004C (0x0094 - 0x0048)
class UParameterDispenser_X : public UComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FNameParamPair >                    NameParams;                                       		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FFloatParamPair >                   FloatParams;                                      		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVectorParamPair >                  VectorParams;                                     		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FColorParamPair >                   ColorParams;                                      		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FActorParamPair >                   ActorParams;                                      		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UISetParameter* >                    AllComponents;                                    		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3375 ];

		return pClassPointer;
	};

	void Inherit ( class UParameterDispenser_X* Other );
	void ResetMaterials ( );
	void ApplyAllParameters ( class UISetParameter* ActorComp );
	class AActor* GetActorParameter ( struct FName Key );
	void SetActorParameter ( struct FName Key, class AActor* Value );
	void SetLinearColorParameter ( struct FName Key, struct FLinearColor Value );
	void SetVectorParameter ( struct FName Key, struct FVector Value );
	void SetFloatParameter ( struct FName Key, float Value );
	void SetNameParameter ( struct FName Key, struct FName Value );
	void RemoveComponent ( class UISetParameter* ActorComp );
	void AddComponent ( class UISetParameter* ActorComp );
};

UClass* UParameterDispenser_X::pClassPointer = NULL;

// Class ProjectX.ParticleModuleVelocitySurfaceNormal_X
// 0x0024 (0x0070 - 0x004C)
class UParticleModuleVelocitySurfaceNormal_X : public UParticleModuleVelocityBase
{
public:
	struct FName                                       MeshActorParamName;                               		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       VelocityMultiplier;                               		// 0x0054 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3377 ];

		return pClassPointer;
	};

};

UClass* UParticleModuleVelocitySurfaceNormal_X::pClassPointer = NULL;

// Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X
// 0x0000 (0x0070 - 0x0070)
class UParticleModuleVelocitySurfaceNormalStatic_X : public UParticleModuleVelocitySurfaceNormal_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3379 ];

		return pClassPointer;
	};

};

UClass* UParticleModuleVelocitySurfaceNormalStatic_X::pClassPointer = NULL;

// Class ProjectX.ParticleModuleWind_X
// 0x0038 (0x0080 - 0x0048)
class UParticleModuleWind_X : public UParticleModuleWorldForcesBase
{
public:
	struct FRawDistributionFloat                       StrengthScaleOverLife;                            		// 0x0048 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       AccelerationOverLife;                             		// 0x0064 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3381 ];

		return pClassPointer;
	};

};

UClass* UParticleModuleWind_X::pClassPointer = NULL;

// Class ProjectX.Pawn_X
// 0x005C (0x04DC - 0x0480)
class APawn_X : public APawn
{
public:
	float                                              GravityScale;                                     		// 0x0480 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDamageComponent_X*                          LegacyTakeDamageComponent;                        		// 0x0484 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AController*                                 PreviousController;                               		// 0x0488 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventTakeDamage__Delegate;                      		// 0x048C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0490 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventHealDamage__Delegate;                      		// 0x049C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x04A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDied__Delegate;                            		// 0x04AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x04B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDestroyed__Delegate;                       		// 0x04BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x04C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAnimEnd__Delegate;                         		// 0x04CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x04D0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3383 ];

		return pClassPointer;
	};

	bool eventIsSameTeam ( class APawn* Other );
	void eventDestroyed ( );
	float GetGravityZ ( );
	void NotifyTakeHit_X ( class UDamageComponent_X* Damage );
	void PlayDeath_X ( class UDamageComponent_X* Damage );
	void PlayHit_X ( class UDamageComponent_X* Damage );
	void OnDied ( class UDamageComponent_X* Damage );
	bool Died_X ( class AController* Killer, class UDamageComponent_X* Damage );
	void AdjustDamage_X ( class UDamageComponent_X* Damage );
	void OnTakeDamage ( class UDamageComponent_X* Damage );
	bool TakeDamage_X ( class UDamageComponent_X* Damage );
	void OnHealDamage ( int Amount );
	bool eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void Suicide ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void PlayerChangedTeam ( );
	void OnControllerChanged ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void UpdateControllerRef ( );
	void eventReplicatedEvent ( struct FName VarName );
	void EventAnimEnd ( class APawn_X* ForPawn, class UAnimNodeSequence* SeqNode );
	void EventDestroyed ( class APawn_X* Pawn );
	void EventDied ( class APawn_X* Pawn, class UDamageComponent_X* Damage );
	void EventHealDamage ( class APawn_X* Pawn, int Amount );
	void EventTakeDamage ( class APawn_X* Pawn, class UDamageComponent_X* Damage );
};

UClass* APawn_X::pClassPointer = NULL;

// Class ProjectX.PerCon_X
// 0x0024 (0x0060 - 0x003C)
class UPerCon_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0040 (0x0001) [0x0000000000000000]              
	struct FString                                     BrokenReason;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventStatusChanged__Delegate;                   		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3385 ];

		return pClassPointer;
	};

	void HandleConfigChanged ( );
	void SetStatus ( unsigned char InStatus );
	void SetBroken ( struct FString Reason );
	void SetEnabled ( unsigned long bEnable );
	void EventStatusChanged ( class UPerCon_X* PerCon );
};

UClass* UPerCon_X::pClassPointer = NULL;

// Class ProjectX.PhysicalMaterialProperty_X
// 0x0008 (0x0044 - 0x003C)
class UPhysicalMaterialProperty_X : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       SurfaceType;                                      		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3387 ];

		return pClassPointer;
	};

};

UClass* UPhysicalMaterialProperty_X::pClassPointer = NULL;

// Class ProjectX.PlayerInput_X
// 0x00A0 (0x0310 - 0x0270)
class UPlayerInput_X : public UPlayerInput
{
public:
	float                                              GamepadDeadzone;                                  		// 0x0270 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FGamepadDeadzoneSettings >          GamepadDeadzones;                                 		// 0x0274 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              KeyboardAxisBlendTime;                            		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FKeyboardAxisBlendSettings >        KeyboardAxisBlendTimes;                           		// 0x0284 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FName                                       CurrentKey;                                       		// 0x0290 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       ActiveDPadButton;                                 		// 0x0298 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       LastDoubleTapKey;                                 		// 0x02A0 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< struct FName >                             DisabledActions;                                  		// 0x02A8 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             DisabledActionsUntilNextUse;                      		// 0x02B4 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FBindingAction >                    Actions;                                          		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UControlPreset_X*                            ControlPreset;                                    		// 0x02CC (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerBinding >                    PCBindings;                                       		// 0x02D0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPlayerBinding >                    GamepadBindings;                                  		// 0x02DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              TapTime;                                          		// 0x02E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoubleTapTime;                                    		// 0x02EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FPointer >                          HeldBindings;                                     		// 0x02F0 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bDebugInput : 1;                                  		// 0x02FC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bAbsorbCurrentKeyPress : 1;                       		// 0x02FC (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __EventActionToggled__Delegate;                   		// 0x0300 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0304 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3389 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	struct FName GetKeyForActionArray ( struct FName Action, TArray< struct FPlayerBinding >* PlayerBindings );
	void AbsorbCurrentKeyPress ( );
	void SetBindings ( TArray< struct FPlayerBinding >* PC, TArray< struct FPlayerBinding >* Gamepad );
	void ClearDisableActionUntilNextUseList ( );
	void DisableActionUntilNextUse ( struct FName ActionName );
	void ClearDisabledActions ( );
	void RemoveFromDisabledActions ( struct FName ActionName );
	void AddToDisabledActions ( struct FName ActionName );
	void ReleaseKey ( struct FName Key, unsigned long bTriggerEvents );
	struct FString GetUIKey ( struct FName KeyName );
	void InitInputSystem ( );
	void ResetInput ( );
	void SetControlPreset ( struct FName PresetName );
	void EventActionToggled ( class UPlayerInput_X* PlayerInput, struct FName ActionName, unsigned long bEnabled );
};

UClass* UPlayerInput_X::pClassPointer = NULL;

// Class ProjectX.PointLightComponent_X
// 0x0008 (0x0210 - 0x0208)
class UPointLightComponent_X : public UPointLightComponent
{
public:
	class UDistributionFloatConstantCurve*             BrightnessOverTime;                               		// 0x0208 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              AttachTime;                                       		// 0x020C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3391 ];

		return pClassPointer;
	};

};

UClass* UPointLightComponent_X::pClassPointer = NULL;

// Class ProjectX.PsyNet_X
// 0x0070 (0x00AC - 0x003C)
class UPsyNet_X : public UObject
{
public:
	unsigned char                                      Environment;                                      		// 0x003C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     EnvironmentName;                                  		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FPsyNetKeys                                 Keys;                                             		// 0x004C (0x0030) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UStringMap*                                  Headers;                                          		// 0x007C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetServiceSubscriptions_X*               Services;                                         		// 0x0080 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                          		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              LastReportCheaterTime;                            		// 0x0088 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedIn__Delegate;           		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedOut__Delegate;          		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3393 ];

		return pClassPointer;
	};

	void ReportCheater ( struct FUniqueNetId Id, struct FString Reason );
	TArray< unsigned char > DecodeBinaryDataFromString ( struct FString S );
	struct FString EncodeBinaryDataToString ( TArray< unsigned char > B );
	struct FString AssignQWordToString ( );
	void AssignStringToQWord ( struct FString S );
	float GetRetryDelay ( int Failures, TArray< float > Delays );
	void eventConnectionChangedIP ( struct FUniqueNetId PlayerID );
	void eventNetworkError ( struct FUniqueNetId PlayerID, struct FString Reason );
	void InitHeaders ( );
	void NotifyWhenLoggedIn ( struct FScriptDelegate LoginCallback, struct FScriptDelegate LogoutCallback );
	void SetPrimaryAuthedConnection ( class UPsyNetConnection_X* Connection );
	void HandleConnectionChanged ( class UPsyNetConnection_X* Connection );
	class UPsyNetConnection_X* GetPrimaryConnection ( );
	void HandleServiceExecuted ( class UPsyNetServiceProvider_X* P, class UPsyNetClientService_X* Service );
	void InitServices ( );
	void eventInit ( );
	void Flush ( float TimeoutSeconds );
	class URPC_X* QueueRPC ( class URPC_X* RPC );
	class URPC_X* RPC ( class UClass* RPCClass );
	class UPsyNet_X* GetInstance ( );
	void EventPrimaryPlayerLoggedOut ( );
	void EventPrimaryPlayerLoggedIn ( );
};

UClass* UPsyNet_X::pClassPointer = NULL;

// Class ProjectX.PsyNetClientService_X
// 0x0018 (0x0054 - 0x003C)
class UPsyNetClientService_X : public UObject
{
public:
	struct FString                                     Service;                                          		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                Version;                                          		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UError*                                      Error;                                            		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPsyNetConnection_X*                         Connection;                                       		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3395 ];

		return pClassPointer;
	};

	void Execute ( );
	void SetError ( class UError* InError );
};

UClass* UPsyNetClientService_X::pClassPointer = NULL;

// Class ProjectX.PsyNetClientServiceCollection_X
// 0x000C (0x0048 - 0x003C)
class UPsyNetClientServiceCollection_X : public UObject
{
public:
	TArray< class UPsyNetClientService_X* >            ServiceArchetypes;                                		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3397 ];

		return pClassPointer;
	};

	class UPsyNetClientService_X* GetServiceArchetype ( struct FString ServiceName, int Version );
	void CollectServiceArchetypes ( );
	void eventConstruct ( );
};

UClass* UPsyNetClientServiceCollection_X::pClassPointer = NULL;

// Class ProjectX.PsyNetConnection_X
// 0x00AC (0x00E8 - 0x003C)
class UPsyNetConnection_X : public UObject
{
public:
	float                                              MaintenanceTime;                                  		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPsyNet_X*                                   PsyNet;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	class UStringMap*                                  Headers;                                          		// 0x0048 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetRequestQue_X*                         RequestQue;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	class URPCQueue_X*                                 RPCQueue;                                         		// 0x0050 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetServiceProvider_X*                    ServiceProvider;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	class UPsyNetMessenger_X*                          Messenger;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	class UPerCon_X*                                   PerCon;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	class UPerConMonitor_X*                            PerConMonitor;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	class UPerConMetrics_X*                            PerConMetrics;                                    		// 0x0064 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bAuthorized : 1;                                  		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bConnected : 1;                                   		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPerConConnected : 1;                             		// 0x0068 (0x0004) [0x0000000000000000] [0x00000004] 
	class UError*                                      DisabledError;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	TArray< class UError* >                            DisabledErrorStack;                               		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UError*                                      MaintenanceError;                                 		// 0x007C (0x0004) [0x0000000000000000]              
	class UError*                                      DuplicateLoginError;                              		// 0x0080 (0x0004) [0x0000000000000000]              
	class UError*                                      NoInternetError;                                  		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConConnected__Delegate;                 		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConDisconnected__Delegate;              		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventEnabled__Delegate;                         		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisabled__Delegate;                        		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3399 ];

		return pClassPointer;
	};

	void eventSendPingMessage ( );
	void WatchPerConConnection ( struct FScriptDelegate OnConnected, struct FScriptDelegate OnDisconnected );
	void WatchConnection ( struct FScriptDelegate OnConnected, struct FScriptDelegate OnDisconnected );
	void eventDispose ( );
	void UpdateLinkConnection ( unsigned long bHasConnection );
	void ClearDuplicateLoginError ( );
	void OnDuplicateLogin ( );
	void HandleDuplicateLoginMessage ( class UPsyNetClientService_X* Service );
	void HandleWebSocketDisconnect ( class UPsyNetMessengerWebSocket_X* WS, int Code, struct FString Reason );
	void HandleWebSocketConnect ( class UPsyNetMessengerWebSocket_X* WS );
	bool HasWebSocketConnection ( );
	void UpdateConnectionState ( );
	void ClearMaintenance ( );
	void HandleErrorRPC ( class URPCQueue_X* InQueue, class URPC_X* InRPC, class UError* Error );
	class UError* UpdateDisabledError ( class UError* Error, class UErrorType* Type, unsigned long bIsError );
	void AddDisabledError ( class UError* Error );
	void RemoveDisabledError ( class UError* Error );
	void Flush ( float TimeoutSeconds );
	class URPC_X* QueueRPC ( class URPC_X* RPC );
	class URPC_X* RPC ( class UClass* RPCClass );
	bool ProcessServiceCall ( class UPsyNetMessage_X* Message );
	void ProcessMessage ( class UPsyNetMessage_X* Message );
	void ReceiveMessage ( class UPsyNetMessage_X* Message );
	class USendRequestTask* SendRequest ( class UPsyNetMessage_X* Request );
	class UAsyncTask* SendMessage ( class UPsyNetMessage_X* Message );
	void RemoveHeader ( struct FString Key );
	void SetHeader ( struct FString Key, struct FString Value );
	void SetAuthorized ( unsigned long bAuth );
	class UStringMap* BuildHandshakeHeaders ( );
	class UPsyNetMessenger_X* CreateWebSocketMessenger ( );
	class UPsyNetMessenger_X* CreateHttpMessenger ( );
	unsigned char GetTransportType ( );
	void KillMessenger ( );
	void InitMessenger ( );
	void InitServiceProvider ( );
	void HandlePerConStatusChanged ( class UPerCon_X* P );
	void InitPerCon ( );
	void InitRPCQueue ( );
	void InitRequestQue ( );
	void InitHeaders ( );
	void eventConstruct ( );
	void EventDisabled ( class UPsyNetConnection_X* Connection );
	void EventEnabled ( class UPsyNetConnection_X* Connection );
	void EventPerConDisconnected ( class UPsyNetConnection_X* Connection );
	void EventPerConConnected ( class UPsyNetConnection_X* Connection );
	void EventDisconnected ( class UPsyNetConnection_X* Connection );
	void EventConnected ( class UPsyNetConnection_X* Connection );
};

UClass* UPsyNetConnection_X::pClassPointer = NULL;

// Class ProjectX.PsyNetErrorType_X
// 0x0000 (0x0048 - 0x0048)
class UPsyNetErrorType_X : public UErrorType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3401 ];

		return pClassPointer;
	};

};

UClass* UPsyNetErrorType_X::pClassPointer = NULL;

// Class ProjectX.PsyNetLocator_X
// 0x0028 (0x0064 - 0x003C)
class UPsyNetLocator_X : public UObject
{
public:
	struct FString                                     DevLocalURL;                                      		// 0x003C (0x000C) [0x0000000000404003]              ( CPF_Edit | CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TestURL;                                          		// 0x0048 (0x000C) [0x0000000000404003]              ( CPF_Edit | CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProductionURL;                                    		// 0x0054 (0x000C) [0x0000000000404003]              ( CPF_Edit | CPF_Const | CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bUseEnvironmentURL : 1;                           		// 0x0060 (0x0004) [0x0000000000004003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3403 ];

		return pClassPointer;
	};

	struct FString GetURL ( unsigned char Environment );
};

UClass* UPsyNetLocator_X::pClassPointer = NULL;

// Class ProjectX.PsyNetMessage_X
// 0x0010 (0x004C - 0x003C)
class UPsyNetMessage_X : public UObject
{
public:
	class UStringMap*                                  Headers;                                          		// 0x003C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< unsigned char >                            Body;                                             		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3405 ];

		return pClassPointer;
	};

	struct FString GetBodyText ( );
	void SetBodyText ( struct FString Value );
	void SetBody ( TArray< unsigned char >* Value );
};

UClass* UPsyNetMessage_X::pClassPointer = NULL;

// Class ProjectX.PsyNetMessenger_X
// 0x0010 (0x004C - 0x003C)
class UPsyNetMessenger_X : public UObject
{
public:
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                 		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3407 ];

		return pClassPointer;
	};

	void eventDispose ( );
	void EventMessageReceived ( class UPsyNetMessage_X* Message );
	class UAsyncTask* SendMessage ( class UPsyNetMessage_X* Message );
	void Connect ( );
};

UClass* UPsyNetMessenger_X::pClassPointer = NULL;

// Class ProjectX.PsyNetMessengerHttp_X
// 0x000C (0x0058 - 0x004C)
class UPsyNetMessengerHttp_X : public UPsyNetMessenger_X
{
public:
	struct FString                                     URL;                                              		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3409 ];

		return pClassPointer;
	};

	void CopyHeadersToMessage ( class UWebRequest_X* From, class UPsyNetMessage_X* To );
	void CopyHeadersToRequest ( class UPsyNetMessage_X* From, class UWebRequest_X* To );
	void HandleWebRequestComplete ( struct FString PsyRequestID, class UWebRequest_X* Request, class UAsyncTask* Task );
	class UAsyncTask* SendMessage ( class UPsyNetMessage_X* Message );
	void Init ( unsigned char Environment );
};

UClass* UPsyNetMessengerHttp_X::pClassPointer = NULL;

// Class ProjectX.PsyNetMessengerWebSocket_X
// 0x007C (0x00C8 - 0x004C)
class UPsyNetMessengerWebSocket_X : public UPsyNetMessenger_X
{
public:
	float                                              MessageSendTimeout;                               		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStringMap*                                  HandshakeHeaders;                                 		// 0x0050 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     URL;                                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebSocketConnection_X*                      Connection;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< struct FQueuedPsyNetMessage >              QueuedMessages;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bAllowConnect : 1;                                		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class UPsyNetConfig_X*                             PsyNetConfig;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventStartConnect__Delegate;                    		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventStartConnectFail__Delegate;                		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInvalidMessageReceived__Delegate;          		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3411 ];

		return pClassPointer;
	};

	void __PsyNetMessengerWebSocket_X__SendQueuedMessages ( struct FQueuedPsyNetMessage QueuedMessage );
	void eventDispose ( );
	void HandleReceivedBunch ( class UTcpConnection* C );
	void SerializeMessage ( class UPsyNetMessage_X* Message );
	void FailQueuedMessages ( class UError* Error );
	void TimeoutQueuedMessages ( );
	void SendMessageWithTask ( class UPsyNetMessage_X* Message, class UAsyncTask* Task );
	void SendQueuedMessages ( );
	void QueueMessage ( class UPsyNetMessage_X* Message, class UAsyncTask* Task );
	void StripHandshakeHeaders ( class UPsyNetMessage_X* Message );
	class UAsyncTask* SendMessage ( class UPsyNetMessage_X* Message );
	void Reconnect ( );
	float GetReconnectDelay ( );
	void DelayReconnect ( );
	void HandleDisconnected ( class UWebSocketConnection_X* InConnection );
	void HandleConnected ( class UWebSocketConnection_X* InConnection );
	void Disconnect ( );
	void Connect ( );
	bool IsConnected ( );
	void Init ( unsigned char Environment, class UStringMap* InHandshakeHeaders );
	void EventInvalidMessageReceived ( class UPsyNetMessengerWebSocket_X* Messenger, struct FString MessageSubstring );
	void EventDisconnected ( class UPsyNetMessengerWebSocket_X* Messenger, int Code, struct FString Reason );
	void EventConnected ( class UPsyNetMessengerWebSocket_X* Messenger );
	void EventStartConnectFail ( class UPsyNetMessengerWebSocket_X* Messenger );
	void EventStartConnect ( class UPsyNetMessengerWebSocket_X* Messenger );
};

UClass* UPsyNetMessengerWebSocket_X::pClassPointer = NULL;

// Class ProjectX.PsyNetServiceSerializer_X
// 0x0000 (0x003C - 0x003C)
class UPsyNetServiceSerializer_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3413 ];

		return pClassPointer;
	};

	struct FString SerializeResponse ( class UPsyNetClientService_X* Service );
	void DeserializeRequest ( struct FString JSON, class UPsyNetClientService_X* Service );
};

UClass* UPsyNetServiceSerializer_X::pClassPointer = NULL;

// Class ProjectX.PsyNetServiceSubscriptions_X
// 0x000C (0x0054 - 0x0048)
class UPsyNetServiceSubscriptions_X : public UComponent
{
public:
	TArray< struct FServiceSubscription >              Subscriptions;                                    		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3415 ];

		return pClassPointer;
	};

	void NotifyServiceExecuted ( class UPsyNetClientService_X* Service );
	void UnsubscribeAll ( class UObject* Listener );
	void Unsubscribe ( struct FScriptDelegate Callback );
	void Subscribe ( class UClass* ServiceClass, struct FScriptDelegate Callback );
};

UClass* UPsyNetServiceSubscriptions_X::pClassPointer = NULL;

// Class ProjectX.PsyNetStaticData_X
// 0x0040 (0x0088 - 0x0048)
class UPsyNetStaticData_X : public UComponent
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bVerifySignature : 1;                             		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLoaded : 1;                                      		// 0x0048 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	class UCacheTimer_X*                               CacheTimer;                                       		// 0x004C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineResource_X*                           WebData;                                          		// 0x0050 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UObject* >                           DefaultComponents;                                		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           DownloadedObjects;                                		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UObject* >                           RegisteredObjects;                                		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventLoaded__Delegate;                          		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3417 ];

		return pClassPointer;
	};

	void UpdateRegisteredObjects ( );
	bool LoadFromUTF8 ( TArray< unsigned char >* SignedData );
	bool LoadFromSignedUTF8 ( TArray< unsigned char >* SignedData );
	void InstanceComponents ( );
	void HandleDataChanged ( class UOnlineResource_X* Resource );
	void RetrySync ( );
	void HandleGetURLFail ( class URPC_X* RPC );
	void HandleGetURL ( class URPC_GetStaticDataURL_X* RPC );
	void Sync ( );
	void HandleCacheExpired ( class UCacheTimer_X* Timer );
	void HandlePsyNetLogOut ( );
	void HandlePsyNetLogin ( );
	void eventInit ( );
	void EventLoaded ( class UPsyNetStaticData_X* Data );
};

UClass* UPsyNetStaticData_X::pClassPointer = NULL;

// Class ProjectX.RadialBlurComponent_X
// 0x0008 (0x00D8 - 0x00D0)
class URadialBlurComponent_X : public URadialBlurComponent
{
public:
	float                                              FadeTime;                                         		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeFalloff;                                      		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3419 ];

		return pClassPointer;
	};

};

UClass* URadialBlurComponent_X::pClassPointer = NULL;

// Class ProjectX.RandomStream_X
// 0x0008 (0x0044 - 0x003C)
class URandomStream_X : public UObject
{
public:
	struct FRandomStream_Mirror                        Stream;                                           		// 0x003C (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                CurrentSeed;                                      		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3421 ];

		return pClassPointer;
	};

	void SetCurrentSeed ( int NewSeed );
	float GetNextValue ( );
};

UClass* URandomStream_X::pClassPointer = NULL;

// Class ProjectX.RenderProfiler_X
// 0x002C (0x0228 - 0x01FC)
class ARenderProfiler_X : public AActor
{
public:
	float                                              TimePerPrimitive;                                 		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPrimitiveComponentProfile >        PrimitiveProfiles;                                		// 0x0200 (0x000C) [0x0000000000482000]              ( CPF_Transient | CPF_Component | CPF_NeedCtorLink )
	int                                                CurrentIndex;                                     		// 0x020C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInclusive : 1;                                   		// 0x0210 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              PrimitiveTime;                                    		// 0x0214 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventFinished__Delegate;                        		// 0x0218 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x021C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3423 ];

		return pClassPointer;
	};

	void SetupPlayers ( );
	void eventPostBeginPlay ( );
	void EventFinished ( class ARenderProfiler_X* Profiler );
};

UClass* ARenderProfiler_X::pClassPointer = NULL;

// Class ProjectX.RPC_X
// 0x0060 (0x009C - 0x003C)
class URPC_X : public UObject
{
public:
	struct FString                                     Service;                                          		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                Version;                                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    RetryDelays;                                      		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bRetry : 1;                                       		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowBatching : 1;                               		// 0x0058 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRequiresAuth : 1;                                		// 0x0058 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDisposed : 1;                                    		// 0x0058 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	float                                              ServiceFailRetryDelay;                            		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Priority;                                         		// 0x0060 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UError*                                      Error;                                            		// 0x0064 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAsyncTask*                                  Task;                                             		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventSuccess__Delegate;                         		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFail__Delegate;                            		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventComplete__Delegate;                        		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3425 ];

		return pClassPointer;
	};

	class URPC_X* SetRequiresAuth ( unsigned long bRequired );
	void NotifySuccess ( );
	void NotifyError ( class UError* InError );
	bool eventShouldResendOnFail ( class UError* InError );
	void eventOnComplete ( );
	void eventOnFail ( );
	void eventOnSuccess ( );
	void eventDispose ( );
	class UAsyncTask* CreateTask ( struct FScriptDelegate InCallback );
	class URPC_X* NotifyOnComplete ( struct FScriptDelegate Callback );
	class URPC_X* NotifyOnFail ( struct FScriptDelegate Callback );
	class URPC_X* NotifyOnSuccess ( struct FScriptDelegate Callback );
	class UObject* eventGetResponseObject ( );
	void EventComplete ( class URPC_X* RPC );
	void EventFail ( class URPC_X* RPC );
	void EventSuccess ( class URPC_X* RPC );
};

UClass* URPC_X::pClassPointer = NULL;

// Class ProjectX.RPC_CrashReport_X
// 0x0000 (0x009C - 0x009C)
class URPC_CrashReport_X : public URPC_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3427 ];

		return pClassPointer;
	};

};

UClass* URPC_CrashReport_X::pClassPointer = NULL;

// Class ProjectX.RPC_RecordMetrics_X
// 0x0034 (0x00D0 - 0x009C)
class URPC_RecordMetrics_X : public URPC_X
{
public:
	struct FGuid                                       AppSessionID;                                     		// 0x009C (0x0010) [0x0000000000000000]              
	struct FGuid                                       LevelSessionID;                                   		// 0x00AC (0x0010) [0x0000000000000000]              
	float                                              CurrentTimeSeconds;                               		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                FirstEventIndex;                                  		// 0x00C0 (0x0004) [0x0000000000000000]              
	TArray< struct FMetricsEvent >                     Events;                                           		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3429 ];

		return pClassPointer;
	};

};

UClass* URPC_RecordMetrics_X::pClassPointer = NULL;

// Class ProjectX.RPCBatch_X
// 0x0040 (0x007C - 0x003C)
class URPCBatch_X : public UObject
{
public:
	float                                              SendTime;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FPendingRPC >                       Requests;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRPCResponse >                      Responses;                                        		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRPCError                                   Error;                                            		// 0x0058 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPsyNetMessage_X*                            RequestMessage;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	class UPsyNetMessage_X*                            ResponseMessage;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	class UError*                                      ResponseError;                                    		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3431 ];

		return pClassPointer;
	};

};

UClass* URPCBatch_X::pClassPointer = NULL;

// Class ProjectX.RPCQueue_X
// 0x0098 (0x00E0 - 0x0048)
class URPCQueue_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              AuthTimeoutSeconds;                               		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxRPCsPerBatch;                                  		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSignRequest : 1;                                 		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bVerifySignedResponse : 1;                        		// 0x0054 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAuthorized : 1;                                  		// 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
	class URPCConfig_X*                                RPCConfig;                                        		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPendingRPC >                       PendingRPCs;                                      		// 0x005C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class URPCBatch_X* >                       PendingBatches;                                   		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMap_Mirror                                 ServiceFailureDelayTimes;                         		// 0x0074 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FScriptDelegate                             __EventRPCError__Delegate;                        		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventBatchError__Delegate;                      		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __SendRequestDelegate__Delegate;                  		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3433 ];

		return pClassPointer;
	};

	void eventOnError ( class URPC_X* RPC, class UError* Error );
	class UPsyNetMetrics_X* GetPsyNetMetrics ( );
	void RecordBatchMetrics ( class URPCBatch_X* Batch );
	void HandleBatchComplete ( class URPCBatch_X* Batch, class UPsyNetMessage_X* Response, class UError* Error );
	void eventCreateBatch ( class UPsyNetMessage_X* Message, TArray< struct FPendingRPC >* BatchRPCs );
	void eventSignatureMismatch ( int ServiceID );
	void FailAllPending ( class UError* Error );
	void FailPending ( class URPC_X* RPC, class UError* Error );
	void TickReceive ( );
	void TickSend ( );
	void QueueRPC ( class URPC_X* RPC );
	class USendRequestTask* SendRequestDelegate ( class UPsyNetMessage_X* Message );
	void EventBatchError ( class URPCQueue_X* RPCQueue, class UError* Error );
	void EventRPCError ( class URPCQueue_X* RPCQueue, class URPC_X* RPC, class UError* Error );
};

UClass* URPCQueue_X::pClassPointer = NULL;

// Class ProjectX.SaveGame_X
// 0x0038 (0x0074 - 0x003C)
class USaveGame_X : public UObject
{
public:
	int                                                SoftVersion;                                      		// 0x003C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                HardVersion;                                      		// 0x0040 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     SaveFileName;                                     		// 0x0044 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UTickComponent_X*                            TickComponent;                                    		// 0x0050 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             __EventSaveFail__Delegate;                        		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLoadFail__Delegate;                        		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3435 ];

		return pClassPointer;
	};

	struct FString GetSaveFilename ( );
	void OnInit ( );
	void OnLoaded ( );
	unsigned char Load ( unsigned long bMustExist, unsigned long bIgnoreErrors );
	void ClearSaveTimer ( );
	void SetSaveTimer ( float Delay );
	bool SaveNow ( );
	void Save ( );
	void EventLoadFail ( class USaveGame_X* SaveGame );
	void EventSaveFail ( class USaveGame_X* SaveGame );
};

UClass* USaveGame_X::pClassPointer = NULL;

// Class ProjectX.SeqAct_NonNativeUpdate_X
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_NonNativeUpdate_X : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3437 ];

		return pClassPointer;
	};

	bool eventUpdate ( float dt );
};

UClass* USeqAct_NonNativeUpdate_X::pClassPointer = NULL;

// Class ProjectX.SequenceCondition_X
// 0x0000 (0x00E4 - 0x00E4)
class USequenceCondition_X : public USequenceCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3439 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USequenceCondition_X::pClassPointer = NULL;

// Class ProjectX.Serializer_X
// 0x0000 (0x003C - 0x003C)
class USerializer_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3441 ];

		return pClassPointer;
	};

	void DeserializeObject ( class UObject* Target, TArray< unsigned char >* InData );
	void SerializeObject ( class UObject* Target, TArray< unsigned char >* OutData );
};

UClass* USerializer_X::pClassPointer = NULL;

// Class ProjectX.JSONSerializer_X
// 0x0004 (0x0040 - 0x003C)
class UJSONSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3443 ];

		return pClassPointer;
	};

	struct FString func ( );
	void DecodeObject ( class UObject* Target, struct FString* Stream );
	void EncodeObject ( class UObject* Target, struct FString* Stream );
	void DeserializeObject ( class UObject* Target, TArray< unsigned char >* InData );
	void SerializeObject ( class UObject* Target, TArray< unsigned char >* OutData );
};

UClass* UJSONSerializer_X::pClassPointer = NULL;

// Class ProjectX.ObjectSerializer_X
// 0x0004 (0x0040 - 0x003C)
class UObjectSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bPersistent : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3445 ];

		return pClassPointer;
	};

	void DeserializeObject ( class UObject* Target, TArray< unsigned char >* InData );
	void SerializeObject ( class UObject* Target, TArray< unsigned char >* OutData );
};

UClass* UObjectSerializer_X::pClassPointer = NULL;

// Class ProjectX.StateObject_X
// 0x0004 (0x0040 - 0x003C)
class UStateObject_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3447 ];

		return pClassPointer;
	};

	void InitExecution ( );
	void eventDestroyed ( );
	void Destroy ( );
};

UClass* UStateObject_X::pClassPointer = NULL;

// Class ProjectX.TickableStateObject_X
// 0x0018 (0x0058 - 0x0040)
class UTickableStateObject_X : public UStateObject_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bTickWhenGamePaused : 1;                          		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoTick : 1;                                    		// 0x0044 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	TArray< struct FTimerData >                        Timers;                                           		// 0x0048 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              LatentFloat;                                      		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3449 ];

		return pClassPointer;
	};

	void Sleep ( float Seconds );
	void eventTick ( float DeltaTime );
	void ProcessState ( float DeltaSeconds );
	void UpdateTimers ( float DeltaSeconds );
	void NativeTick ( float DeltaTime );
	void Destroy ( );
	void SetTickable ( unsigned long bTick );
	bool IsTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void PauseTimer ( unsigned long bPause, struct FName inTimerFunc, class UObject* inObj );
	void ClearAllTimers ( class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	void SetStateTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
};

UClass* UTickableStateObject_X::pClassPointer = NULL;

// Class ProjectX.AutomationScript_X
// 0x000C (0x0064 - 0x0058)
class UAutomationScript_X : public UTickableStateObject_X
{
public:
	TArray< struct FString >                           Commands;                                         		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3451 ];

		return pClassPointer;
	};

	void Wait ( float Time );
	void ExecuteCommand ( struct FString Command );
	void eventExecuteNextCommand ( );
	void Start ( );
	void LoadCommandsFromText ( struct FString Text );
	void LoadCommandsFromFile ( struct FString FilePath );
};

UClass* UAutomationScript_X::pClassPointer = NULL;

// Class ProjectX.Online_X
// 0x0008 (0x0060 - 0x0058)
class UOnline_X : public UTickableStateObject_X
{
public:
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPsyNet_X*                                   PsyNet;                                           		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3453 ];

		return pClassPointer;
	};

	struct FString BuildAddress ( struct FString Host, int Port, struct FString IP );
	bool IsInOnlineGame ( );
	bool IsInMainMenu ( );
	class AGRI_X* GetGRI ( );
	class AWorldInfo* GetWorldInfo ( );
	struct FUniqueNetId CreateUniqueNetID ( unsigned char Platform, struct FString PlatformName );
	bool UniqueLobbyIDIsSet ( struct FUniqueLobbyId InID );
	struct FUniqueLobbyId StringToUniqueLobbyId ( struct FString InID );
	struct FString UniqueLobbyIdToString ( struct FUniqueLobbyId InID );
	struct FUniqueNetId GetUniqueNetIDWithoutSplitscreenID ( struct FUniqueNetId Id );
	struct FUniqueNetId GetPrimaryIDForGuest ( struct FUniqueNetId InGuestID );
	bool UniqueNetIDIsGuest ( struct FUniqueNetId InID );
	bool UniqueNetIDIsValid ( struct FUniqueNetId InID );
	struct FUniqueNetId StringToUniqueNetId ( struct FString InID );
	struct FString UniqueNetIdToString ( struct FUniqueNetId InID );
	int FindUniqueNetID ( TArray< struct FUniqueNetId >* List, struct FUniqueNetId* Search );
	class UError* GetConnectionStatusError ( int ErrorCode, class UError* FallbackError );
	void OnExit ( );
	void OnNewGame ( );
	void OnMainMenuOpened ( );
	void HandleGRISpawned ( class AGRI_X* GRI );
	void OnInit ( );
	void Init ( class UOnlineSubsystem* NewOnlineSubsystem );
};

UClass* UOnline_X::pClassPointer = NULL;

// Class ProjectX.OnlineGame_Base_X
// 0x0084 (0x00E4 - 0x0060)
class UOnlineGame_Base_X : public UOnline_X
{
public:
	struct FString                                     OnlineSubPlayerInterfaceName;                     		// 0x0060 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     OnlineSubGameInterfaceName;                       		// 0x006C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	class UOnlineGameSettings_X*                       DefaultGameSettingsArchetype;                     		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameSettings_X*                       GameSettings;                                     		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGamePlaylists_X*                      Playlists;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineImageDownloaderWeb_X*                 ImageDownloader;                                  		// 0x0084 (0x0004) [0x0000000000000000]              
	class UOnlineGameDLC_X*                            DLC;                                              		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameSkill_X*                          Skill;                                            		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameSkillGroups_X*                    SkillGroups;                                      		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGamePlayerTitles_X*                   PlayerTitles;                                     		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StartServerCommand;                               		// 0x0098 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UWebCache_X*                                 WebCache;                                         		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UPsyNetStaticData_X*                         PsyNetStaticData;                                 		// 0x00A8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bLockGameSettings : 1;                            		// 0x00AC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      CurrentConnectionStatus;                          		// 0x00B0 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ServerName;                                       		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     CachedOptions;                                    		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UOnlineConfigDispatcher_X*                   OnlineConfigDispatcher;                           		// 0x00CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameWordFilter_X*                     WordFilter;                                       		// 0x00D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventInternetConnectionChanged__Delegate;       		// 0x00D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3455 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	bool HasInternetConnection ( );
	int GetPort ( );
	struct FString GetExternalHostAddress ( unsigned long bWithPort );
	struct FString GetLocalHostAddress ( unsigned long bWithPort );
	void HandleInternetConnectionChanged ( unsigned long bConnected );
	void HandleConnectionStatusChanged ( unsigned char ConnectionStatus );
	void SetDefaultSearchType ( class UClass* OnlineSearchClass );
	void KickAllPlayers ( );
	void DelayedShutdownServer ( );
	void OnExit ( );
	int GetPlaylistPlayerCount ( class UGameSettingPlaylist_X* Playlist );
	void OnNewSettingsChosen ( int PlaylistId );
	void UpdateGameSettingsPlayerCount ( int NumPlayers );
	void UpdateGameSettings ( class UOnlineGameSettings_X* InGameSettings, struct FString Options );
	class UOnlineGameSettings_X* CreateOnlineGameSettings ( struct FString Options );
	void OnNewGameInfoCreated ( class AGameInfo_X* Game );
	void InitOnlineSubsystemInterfaces ( );
	void OnInit ( );
	class UOnlineGame_Base_X* GetInstance ( class UClass* Type );
	void EventInternetConnectionChanged ( unsigned long bConnected );
};

UClass* UOnlineGame_Base_X::pClassPointer = NULL;

// Class ProjectX.OnlineGame_X
// 0x008C (0x0170 - 0x00E4)
class UOnlineGame_X : public UOnlineGame_Base_X
{
public:
	class UOnlineGameAccount_X*                        Account;                                          		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                      		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGamePrivateMatch_X*                   PrivateMatch;                                     		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameServerBrowser_X*                  ServerBrowser;                                    		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameLanBrowser_X*                     LanBrowser;                                       		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameLeaderboards_X*                   Leaderboards;                                     		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGamePopulation_X*                     Population;                                       		// 0x00FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameCommunity_X*                      Community;                                        		// 0x0100 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameVoice_X*                          Voice;                                            		// 0x0104 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameParty_X*                          Party;                                            		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameInvite_X*                         GameInvite;                                       		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameJoinGame_X*                       JoinGame;                                         		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameRegions_X*                        Regions;                                          		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGamePrivileges_X*                     Privileges;                                       		// 0x0118 (0x0004) [0x0000000000000000]              
	class UOnlineGameWordFilterProcessor_X*            WordFilterProcessor;                              		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameVersion_X*                        GameVersion;                                      		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlinePlayer_X*                             PlayerArchetype;                                  		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UOnlinePlayer_X* >                   OnlinePlayers;                                    		// 0x0128 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UOnlineLegalText_X*                          Eula;                                             		// 0x0134 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineLegalText_X*                          PrivacyPolicy;                                    		// 0x0138 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UOnlineLegalText_X*                          ToS;                                              		// 0x013C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             __EventConnectionError__Delegate;                 		// 0x0140 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0144 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerPsyNetLogin__Delegate;               		// 0x0150 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0154 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerPsyNetLogout__Delegate;              		// 0x0160 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0164 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3457 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void NotifyPlayerPsyNetLogout ( struct FScriptDelegate Callback );
	void NotifyPlayerPsyNetLogin ( struct FScriptDelegate Callback );
	bool IsSignedIn ( int ControllerId );
	bool CheckUpToDate ( class UError** Error );
	bool CheckNotTooYoung ( class UError** Error );
	class UError* GetPsyNetLoginError ( class UOnlinePlayer_X* OnlinePlayer );
	bool CheckPsyNetConnection ( class UError** Error );
	bool ValidateUserOnlineAccount ( class UError** Error );
	bool CheckInternetConnection ( class UError** Error );
	bool IsOnlinePlayerID ( struct FUniqueNetId PlayerID );
	class UOnlinePlayer_X* eventGetOnlinePlayerByID ( struct FUniqueNetId PlayerID );
	void OnNewSettingsChosen ( int PlaylistId );
	struct FUniqueNetId eventGetPrimaryPlayerID ( );
	class UOnlinePlayer_X* eventGetPrimaryPlayer ( );
	void RemoveOnlinePlayer ( class ULocalPlayer_X* LocalPlayer );
	class UOnlinePlayer_X* CreateOnlinePlayer ( class ULocalPlayer_X* LocalPlayer );
	void SetPlayedWith ( struct FUniqueNetId PlayerID );
	void GetPlayerAvatar ( struct FUniqueNetId PlayerID, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, unsigned char Size );
	void SetVoiceVolume ( float NewValue );
	void OnNewGameInfoCreated ( class AGameInfo_X* Game );
	void OnMainMenuOpened ( );
	void HandlePlayerLogin ( class UOnlinePlayer_X* OnlinePlayer, class UError* Error );
	void HandlePsyNetLoginChanged ( class UOnlinePlayerAuthentication_X* Auth );
	bool IsLoggedInToPsyNet ( class UOnlinePlayer_X* OnlinePlayer );
	void OnInit ( );
	void EventPlayerPsyNetLogout ( class UOnlinePlayer_X* Player );
	void EventPlayerPsyNetLogin ( class UOnlinePlayer_X* Player );
	void EventConnectionError ( class UError* Error, class UOnlinePlayer_X* Player );
};

UClass* UOnlineGame_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameServer_X
// 0x0004 (0x00E8 - 0x00E4)
class UOnlineGameServer_X : public UOnlineGame_Base_X
{
public:
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x00E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3459 ];

		return pClassPointer;
	};

	void OnExit ( );
	void OnInit ( );
};

UClass* UOnlineGameServer_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameDedicatedServer_X
// 0x0168 (0x0250 - 0x00E8)
class UOnlineGameDedicatedServer_X : public UOnlineGameServer_X
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00E8 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDedicatedServer_X.GameServerID
	struct FString                                     GameServerHost;                                   		// 0x00F0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UOnlineGameStats_X*                          GameStats;                                        		// 0x00FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameDedicatedServerRegistration_X*    Registration;                                     		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameReservations_X*                   Reservations;                                     		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClanforgeReservation_X*                     Clanforge;                                        		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Region;                                           		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                CurrentPlaylistId;                                		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                MutatorIndex;                                     		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              AverageMMR;                                       		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MachineId;                                        		// 0x0124 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x0128 (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniqueNetId                                CustomMatchOwner;                                 		// 0x0188 (0x0048) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bQueuedShutdown : 1;                              		// 0x01D0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bFindingReplacementServer : 1;                    		// 0x01D0 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDisableMatchmakingBan : 1;                       		// 0x01D0 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FString                                     MatchGUID;                                        		// 0x01D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventFoundNewDedicatedServerForPlayers__Delegate;		// 0x01E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x01E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAverageMMRChanged__Delegate;               		// 0x01F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x01F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlaylistSet__Delegate;                     		// 0x0200 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0204 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrivateMatchSettingsChanged__Delegate;     		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0214 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInactive__Delegate;                        		// 0x0220 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0224 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventActive__Delegate;                          		// 0x0230 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0234 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                		// 0x0240 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x0244 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3461 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void SetMatchID ( struct FString Id );
	void CreateMatchID ( );
	struct FName GetCurrentMapName ( );
	void ClearMatchmakingBan ( struct FUniqueNetId PlayerID );
	void IssueMatchmakingBan ( struct FUniqueNetId PlayerID, struct FString Reason );
	unsigned char GetTeamNum ( struct FUniqueNetId PlayerID );
	bool KickPlayersOnGameEventDestroyed ( );
	bool IsRankedMatch ( );
	void OnExit ( );
	void HandleNewServerIPRPC ( class URPC_CheckReplacementDedicatedServer_X* RPC );
	void CheckNewServerIP ( );
	void CheckNewServerTimeout ( );
	void CheckStartShutdown ( int GameTimeRemaining );
	void UpdateGameTime ( int TimeSeconds );
	void FindNewDedicatedServerForPlayers ( struct FScriptDelegate InDelegate );
	bool IsInPostGameLobby ( );
	bool IsTravellingToNextMap ( );
	void UpdateOnlineGame ( );
	bool AllowSplitscreenJoin ( class APlayerReplicationInfo* PrimaryPRI, struct FUniqueNetId PlayerID, struct FString PlayerName );
	void PlayerLoggedOut ( class APlayerReplicationInfo* PRI );
	void PlayerLoggedIn ( class APlayerReplicationInfo* PRI );
	void AllowPlayerLogin ( struct FString Options, struct FUniqueNetId PlayerID, struct FString* ErrorMessage );
	void OnNewGameInfoCreated ( class AGameInfo_X* Game );
	void TravelToMap ( struct FString ServerCommand );
	void GotoPrivateMatchMap ( struct FName MapName, int GameMode, struct FString GameTags );
	void GotoNextPrivateMatchMap ( );
	void OnPrivateEventDestroyed ( );
	struct FString GetStartServerCommand ( );
	struct FName GetNextRandomMapName ( int GameMode );
	struct FName GetNextMapName ( int GameMode );
	struct FCustomMatchSettings GetCustomMatchSettings ( );
	struct FUniqueNetId GetCustomMatchOwner ( );
	void UpdateCustomMatchOwner ( struct FUniqueNetId NewOwner );
	void SetCustomSettings ( struct FCustomMatchSettings Settings );
	void SetupPrivateMatch ( struct FCustomMatchSettings Settings, struct FUniqueNetId Creator );
	void GoToNextMap ( );
	struct FName GetNextMutatorMapName ( );
	void GoToMap ( struct FString MapName );
	struct FString GetPlaylistTags ( );
	void UpdateAverageMMR ( );
	void ClearSettings ( );
	void SetPlaylist ( int PlaylistId );
	void HandleReservationsUpdated ( );
	void InitClanforge ( );
	void OnInit ( );
	void EventMatchGUIDChanged ( class UOnlineGameDedicatedServer_X* Server );
	void EventActive ( class UOnlineGameDedicatedServer_X* Server );
	void EventInactive ( class UOnlineGameDedicatedServer_X* Server );
	void EventPrivateMatchSettingsChanged ( class UOnlineGameDedicatedServer_X* Server, struct FCustomMatchSettings NewSettings );
	void EventPlaylistSet ( class UOnlineGameDedicatedServer_X* Server );
	void EventAverageMMRChanged ( class UOnlineGameDedicatedServer_X* Server );
	void EventFoundNewDedicatedServerForPlayers ( struct FString NewIP );
};

UClass* UOnlineGameDedicatedServer_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameDLC_X
// 0x0030 (0x0090 - 0x0060)
class UOnlineGameDLC_X : public UOnline_X
{
public:
	int                                                SyncInterval;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerOwnershipSyncInterval;                      		// 0x0064 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerDLCInfo >                    PlayerDLCInfos;                                   		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSteamWebRequestData >              SteamWebRequests;                                 		// 0x0074 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventValidationReady__Delegate;                 		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3463 ];

		return pClassPointer;
	};

	bool DoesPlayerOwnDLC ( struct FUniqueNetId* PlayerID, struct FName* DLCName );
	void HandleGetPublisherAppOwnership ( class UWebRequest_X* Request );
	void OnMatchFinished ( );
	void SyncPlayerDLC ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback );
	void UpdatePlayerDLCInfo ( int PlayerInfoIndex );
	int CreatePlayerDLCInfo ( struct FUniqueNetId* PlayerID );
	bool IsPlayerReadyForValidation ( struct FUniqueNetId* PlayerID );
	void EventValidationReady ( );
};

UClass* UOnlineGameDLC_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameLeaderboards_X
// 0x0068 (0x00C8 - 0x0060)
class UOnlineGameLeaderboards_X : public UOnline_X
{
public:
	int                                                NumResults;                                       		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCachedLeaderboardData >            CachedLeaderboards;                               		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                NumFriendsLeaderboardRequests;                    		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       CurrentLeaderboardID;                             		// 0x0074 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentFriendIndex;                               		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bGlobalLeaderboards : 1;                          		// 0x0080 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class URPC_X*                                      GetLoaderboardPlayerValueRPC;                     		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __OnGetLeaderboardPlayerValue__Delegate;          		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventNewLeaderboard__Delegate;                  		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGetLeaderboardFailed__Delegate;            		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLeaderboardAvatarFound__Delegate;          		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3465 ];

		return pClassPointer;
	};

	bool IsSkillLeaderboard ( struct FString NewLeaderboardID, int* Playlist );
	TArray< struct FLeaderboardData > SortLeaderboardDataMMR ( TArray< struct FLeaderboardData > Leaderboard );
	TArray< struct FLeaderboardData > SortLeaderboardData ( TArray< struct FLeaderboardData > Leaderboard );
	void HandleGetLeaderboardFriendsRPC ( class URPC_GetLeaderboardRankForUsersBase_X* RPC );
	void DispatchLeaderboardFriendsRequest ( );
	void GetLeaderboardsForAllFriends ( struct FName LeaderboardId );
	void GetLeaderboardFriends ( class UOnlinePlayer_X* OnlinePlayer, struct FName NewLeaderboardID, struct FScriptDelegate NewDelegate, struct FScriptDelegate FailedDelegate );
	void HandleGetAvatar ( struct FUniqueNetId PlayerID, class UTexture* Avatar, struct FString OnlinePlayerName );
	void RequestPlayerAvatar ( struct FUniqueNetId PlayerID );
	void HandleGetLeaderboardRPC ( class URPC_GetLeaderboardBase_X* RPC );
	void GetLeaderboard ( struct FName NewLeaderboardID, unsigned long bGlobal, struct FScriptDelegate NewDelegate, struct FScriptDelegate FailedDelegate );
	bool GetCachedLeaderboardData ( struct FName LeaderboardId, TArray< struct FLeaderboardData >* LeaderboardDataList );
	int CalcDivision ( float TopValue, float Value );
	void GetRankForPrimaryPlayer ( struct FName LeaderboardId, int Value, int* Rank, int* Division );
	void HandleGetLeaderboardPlayerValueRPC ( class URPC_GetLeaderboardValueForUserBase_X* RPC );
	void GetLeaderboardPlayerValue ( struct FName NewLeaderboardID, struct FScriptDelegate NewDelegate );
	struct FString GetCurrentPlatformName ( );
	void EventLeaderboardAvatarFound ( class UTexture* Avatar, struct FUniqueNetId* PlayerNetId );
	void EventGetLeaderboardFailed ( class UError* Error );
	void EventNewLeaderboard ( struct FName NewLeaderboardID, TArray< struct FLeaderboardData >* NewLeaderboardData );
	void OnGetLeaderboardPlayerValue ( class UOnlineGameLeaderboards_X* LeaderboardsRef, struct FName LeaderboardId, class UError* Error, struct FLeaderboardData* PlayerLeaderboardData );
};

UClass* UOnlineGameLeaderboards_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameReservations_X
// 0x005C (0x00BC - 0x0060)
class UOnlineGameReservations_X : public UOnline_X
{
public:
	TArray< class URPC_GetKeys_X* >                    GetKeysRPCs;                                      		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              ExtraMapLoadTime;                                 		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaitForReservationsTimeout;                       		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowPrivateMatchCrossPlayDisable : 1;           		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSkipReservationCheck : 1;                        		// 0x0074 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bSinglePlayerMatchmaking : 1;                     		// 0x0074 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bServerTraveling : 1;                             		// 0x0074 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bScrambleTeams : 1;                               		// 0x0074 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bMatchStarted : 1;                                		// 0x0074 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	class UTcpMessageBeacon*                           Beacon;                                           		// 0x0078 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FReservationData >                  Players;                                          		// 0x007C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FTeamPairHistory >                  TeamPairHistories;                                		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UCrossplayConfig_X*                          Crossplay;                                        		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMapPrefsConfig_X*                           MapPrefsConfig;                                   		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;             		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMigrationJoinOccurred__Delegate;           		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3467 ];

		return pClassPointer;
	};

	bool __OnlineGameReservations_X__AllPlayersReserved ( struct FReservationData P );
	bool __OnlineGameReservations_X__AllPlayersInGame ( struct FReservationData P );
	float GetMapLoadTimeout ( unsigned char Platform );
	void GetAccumulatedPrefs ( TArray< struct FName >* Likes, TArray< struct FName >* Dislikes );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	class UReservationsMetrics_X* GetMetrics ( );
	void OnNewGameInfoCreated ( class AGameInfo_X* Game );
	bool HasSplitscreenPlayers ( );
	void SetParty ( struct FUniqueNetId MemberId, struct FUniqueNetId PartyID );
	struct FUniqueNetId GetPartyID ( struct FUniqueNetId PlayerID );
	unsigned char GetTeamNum ( struct FUniqueNetId PlayerID );
	struct FString GetPlayersPlatformsString ( );
	struct FString GetPlatformsString ( TArray< unsigned char >* Platforms );
	TArray< unsigned char > GetPlayerPlatforms ( );
	bool CanPlayTogether ( unsigned char Platform1, unsigned char Platform2 );
	bool CanAcceptReservationsForPlatform ( class UAddReservationMessagePublic_X* Message );
	unsigned char GetExclusivePlatform ( );
	bool CanAcceptReservations ( class UAddReservationMessagePublic_X* Message );
	void GetPlayerCounts ( int* Team0Reserved, int* Team0Joined, int* Team1Reserved, int* Team1Joined );
	void NotifyReservationsUpdated ( );
	void OnReservationsUpdated ( );
	void CheckMapLoadTimeout ( );
	void StartMapLoadTimeout ( );
	void SyncSkills ( );
	void HackForceNotServerTravelling ( );
	void SetServerTraveling ( unsigned long bTraveling );
	void CloseConnection ( int Index );
	void RemoveReservationIndex ( int Index );
	int AddSpecialReservation ( struct FUniqueNetId PlayerID, struct FString PlayerName, struct FUniqueNetId PartyID );
	void HandleTeamChanged ( class APRI_X* PRI );
	void RemoveReservation ( struct FUniqueNetId PlayerID );
	void PlayerLoggedOut ( class APlayerReplicationInfo* PRI );
	void PlayerLoggedIn ( class APlayerReplicationInfo* PRI );
	void AllowPlayerLogin ( struct FString Options, struct FUniqueNetId PlayerID, struct FString* ErrorMessage );
	bool AllPlayersInGame ( );
	bool AllPlayersReserved ( );
	bool HasGameEnded ( );
	bool HasGameStarted ( );
	bool CanStartMatch ( );
	bool HasJoiningPlayers ( );
	bool IsEmpty ( );
	bool IsNearlyFull ( );
	bool IsFull ( );
	int GetNumReservedPlayers ( );
	bool IsCustomMatch ( );
	void HandleReservationDisconnected ( class UTcpConnection* Connection );
	void ClearGetKeysRPCs ( );
	void ClearTeamHistory ( );
	void ClearReservations ( );
	void Reset ( );
	void RecordTeamHistory ( TArray< struct FReservationData >* TestPlayers, TArray< struct FTeamPairHistory >* History );
	void ScrambleTeams ( );
	void UpdateTeams ( );
	void AssignTeamsByPartySize ( );
	bool AssignScrambledTeams ( int TeamSize, TArray< struct FTeamPairHistory >* History, TArray< struct FReservationData >* TestPlayers );
	bool AssignTeams ( int TeamSize, TArray< struct FReservationData >* TestPlayers );
	void HandleSkillSynced ( class UOnlineGameSkill_X* SkillSystem, struct FUniqueNetId PlayerID, class UError* Error );
	bool AllowSplitscreenJoin ( class APlayerReplicationInfo* PrimaryPRI, struct FUniqueNetId PlayerID, struct FString PlayerName );
	bool IsCheatingSplitscreenReservation ( class UAddReservationMessage_X* Message );
	bool IsCheatingSplitscreen ( struct FUniqueNetId PrimaryPlayerID, struct FUniqueNetId SplitscreenPlayerID );
	struct FReservationData CreateReservationData ( struct FUniqueNetId PlayerID, struct FString PlayerName, struct FUniqueNetId PartyID, unsigned char Status );
	void NotAllPlayersJoined ( );
	void DisconnectExistingPlayers ( class UAddReservationMessage_X* ReservationMessage );
	void SetPlayers ( TArray< struct FReservationData >* TempPlayers );
	TArray< struct FReservationData > AddPlayersFromReservationMessage ( class UAddReservationMessage_X* ReservationMessage, class UTcpConnection* Connection );
	bool IsUnique ( TArray< struct FName >* Prefs );
	bool HandlePrivateReservation ( class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message );
	void SendGetKeysRPCs ( class UTcpConnection* Connection, class UAddReservationMessage_X* Message );
	void HandlePrivateReservationMessage ( class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message );
	bool CanAcceptReservationsForServerKey ( class UAddReservationMessagePublic_X* Message, unsigned long bServerKey );
	void RemoveKeysRPC ( class URPC_GetKeys_X* RPC );
	void HandleGetKeysRPCFail ( class URPC_GetKeys_X* RPC );
	void AddNetworkKeys ( class URPC_GetKeys_X* RPC );
	void HandleGetKeysRPCSuccess ( class URPC_GetKeys_X* RPC );
	void HandleGetKeysRPC ( class URPC_GetKeys_X* RPC );
	void StartMatch ( );
	class UReservationsReadyMessage_X* CreateReadyMessage ( );
	bool ShouldSyncSkills ( );
	bool IsSoloPlaylist ( int PlaylistId );
	bool HandlePublicReservation ( class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message );
	void HandlePublicReservationMessage ( class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message );
	void HandlePingMessage ( class UTcpConnection* Connection, class UObject* Message );
	void OnInit ( );
	void EventMigrationJoinOccurred ( );
	void EventReservationsUpdated ( );
};

UClass* UOnlineGameReservations_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameStats_X
// 0x0000 (0x0060 - 0x0060)
class UOnlineGameStats_X : public UOnline_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3469 ];

		return pClassPointer;
	};

	void UploadStats ( struct FString StatType, TArray< struct FUploadStatDataSet >* DataSet );
};

UClass* UOnlineGameStats_X::pClassPointer = NULL;

// Class ProjectX.OnlinePlayer_X
// 0x00E8 (0x0148 - 0x0060)
class UOnlinePlayer_X : public UOnline_X
{
public:
	class UOnlinePlayerFriends_X*                      Friends;                                          		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlinePlayerAuthentication_X*               Authentication;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PlayerName;                                       		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0078 (0x0048) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      LoginStatus;                                      		// 0x00C0 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                LocalPlayerNum;                                   		// 0x00C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLoggingIn : 1;                                   		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLoggingOut : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPsyNetLogout : 1;                                		// 0x00C8 (0x0004) [0x0000000000004002] [0x00000004] ( CPF_Const | CPF_Config )
	class UError*                                      LoginError;                                       		// 0x00CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UError*                                      LoginStatusError;                                 		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UError*                                      BannedError;                                      		// 0x00D4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventLoginComplete__Delegate;                   		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLogoutComplete__Delegate;                  		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLoginStatusChanged__Delegate;              		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCountryUpdated__Delegate;                  		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x010C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCanPlayOnlineChanged__Delegate;            		// 0x0118 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x011C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventShowKeyboardComplete__Delegate;            		// 0x0128 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x012C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPreFlushExit__Delegate;                    		// 0x0138 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x013C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3471 ];

		return pClassPointer;
	};

	void GetPlayersLikesDislikes ( class UGameSettingPlaylist_X* Playlist, TArray< struct FName >* PlayerLikes, TArray< struct FName >* PlayerDislikes );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	bool IsGuestAccount ( );
	void SetPlayerName ( struct FString NewName );
	void UpdateSplitscreenId ( );
	bool IsUpdateRequired ( );
	struct FString GetOnlineName ( );
	struct FString GetLocalName ( );
	struct FString GetRemoteName ( int LocalPlayerIndex );
	void HandleCanPlayOnlineChanged ( unsigned char LocalUserNum );
	void OnExit ( );
	unsigned char CanPlayOnline ( );
	void HandlePlayerCountryReceived ( struct FUniqueNetId InPlayerId, struct FString Country );
	void GetPlayerCountry ( struct FScriptDelegate Handler );
	unsigned char CanCommunicateText ( unsigned long bTryToResolve );
	void OpenErrorDialog ( unsigned char ErrorCode );
	void OpenPS4DisplayMode ( unsigned char DisplayMode, TArray< struct FString > Targets, int ServiceLabel );
	void ResetControllerColor ( int InControllerID );
	void SetControllerColor ( int InControllerID, struct FColor NewColor );
	void PostActivityFeedMessage ( struct FString Id, TArray< struct FString > StringReplaceList );
	TArray< unsigned long > GetSyncedAchievements ( unsigned char LocalUserNum );
	void UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete );
	void UpdateStat ( struct FName StatName, int Points );
	void HandleShowKeyboardComplete ( unsigned long bWasSuccessful );
	void HideKeyboard ( );
	bool ShowKeyboard ( struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, struct FString DefaultText, int MaxLength, struct FScriptDelegate OnCompleteDelegate, int LocalPlayerNumOverride );
	void OnNewGame ( );
	void HandleControllerChange ( int InControllerID, unsigned long bIsConnected );
	void HandleUserLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	bool IsLoggedIn ( unsigned long bRequireOnlineLogin );
	void HandleLogoutComplete ( unsigned long bWasSuccessful );
	void HandleLoginChanged ( unsigned char PlayerNum );
	void HandleLoginFailed ( unsigned char PlayerNum, unsigned char ErrorCode );
	void Logout ( struct FScriptDelegate Callback );
	void Login ( struct FString LoginName, struct FString LoginPassword, struct FScriptDelegate Callback );
	void OnRemoved ( );
	void InitPlayer ( );
	bool eventIsPrimaryPlayer ( );
	void HandleErrorRPC ( class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error );
	void HandlePsyNetDisconnect ( class UPsyNetConnection_X* Connection );
	void UpdatePsyNetEnabled ( );
	void HandleBanned ( class UOnlinePlayerAuthentication_X* Auth );
	void HandleAuthLoginChange ( class UOnlinePlayerAuthentication_X* Auth );
	void HandleLoginRPC ( class UOnlinePlayerAuthentication_X* Auth, class URPC_LoginAuthPlayer_X* RPC );
	void OnInit ( );
	class UOnlineGame_X* GetOnlineGame ( );
	void EventPreFlushExit ( );
	void EventShowKeyboardComplete ( struct FString NewText, unsigned long bCanceled );
	void EventCanPlayOnlineChanged ( class UOnlinePlayer_X* Player );
	void EventCountryUpdated ( struct FString Country );
	void EventLoginStatusChanged ( class UOnlinePlayer_X* Player );
	void EventLogoutComplete ( class UOnlinePlayer_X* Player );
	void EventLoginComplete ( class UOnlinePlayer_X* Player, class UError* Error );
};

UClass* UOnlinePlayer_X::pClassPointer = NULL;

// Class ProjectX.OnlinePlayerAuthentication_X
// 0x0114 (0x0174 - 0x0060)
class UOnlinePlayerAuthentication_X : public UOnline_X
{
public:
	class URPC_LoginAuthPlayer_X*                      LoginRPC;                                         		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0064 (0x0048) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     LoggedInPlayerName;                               		// 0x00AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B8 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlinePlayerAuthentication_X.PlayerUID
	struct FString                                     Platform;                                         		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bLoggedIn : 1;                                    		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlatformTokenAuthenticationFailed : 1;           		// 0x00CC (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bSkipAuth : 1;                                    		// 0x00CC (0x0004) [0x0000000000000000] [0x00000004] 
	class UError*                                      AuthLoginError;                                   		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              BannedUntilTime;                                  		// 0x00D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BannedReason;                                     		// 0x00D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     EncryptedAuthTicket;                              		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                AuthRequestFailureMax;                            		// 0x00F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                AuthRequestRetryTime;                             		// 0x00F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AuthRequestFailureCount;                          		// 0x00F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     AuthenticatedName;                                		// 0x00FC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      PlayerAuthState;                                  		// 0x0108 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              LoginRetryDelay;                                  		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameTrial_X*                          Trial;                                            		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventLoginChanged__Delegate;                    		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0118 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLoginSuccessRPC__Delegate;                 		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0128 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventBanned__Delegate;                          		// 0x0134 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0138 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAuthenticatedNameChanged__Delegate;        		// 0x0144 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0148 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerAuthStateChanged__Delegate;          		// 0x0154 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0158 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLoginResult__Delegate;                     		// 0x0164 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0168 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3473 ];

		return pClassPointer;
	};

	struct FString GetDebugName ( );
	void GotoAuthState ( struct FName AuthStateName );
	bool IsBanned ( );
	int GetGameVersion ( );
	struct FName GetFeatureSet ( );
	struct FString GetBuildRegion ( );
	void HandleTrialStatusChanged ( class UOnlineGameTrial_X* InTrial );
	void OnChangeAuthenticatedName ( struct FString NewName );
	bool NeedToAuthenticateName ( );
	void HandleReceivedAuthorizationCode ( unsigned long bSuccess, struct FString AuthorizationCode, struct FString EncryptedTicket, int IssuerID );
	bool RequestAuthorizationCode ( );
	bool RequiresAuthorizationCode ( );
	void ReLogin ( );
	void Logout ( );
	void SetAuthLoginError ( class UError* E );
	void UpdateLoginState ( );
	void UpdateAuthLoginError ( );
	void HandlePsyNetLoginChanged ( class UOnlinePlayerAuthentication_X* Auth );
	void HandleLinkStatusChanged ( unsigned long B );
	void HandleConnectionChanged ( class UPsyNetConnection_X* C );
	void HandleLoginStatusChanged ( class UOnlinePlayer_X* Player );
	int GetBannedMinutesRemaining ( );
	bool ParseBanned ( class URPC_LoginAuthPlayer_X* RPC );
	void SetPlayerAuthState ( unsigned char InPlayerAuthState );
	void ReceiveAuthenticatedName ( struct FString ReceivedName );
	void OnLoginFailRPC ( class URPC_LoginAuthPlayer_X* RPC );
	void OnLoginSuccessRPC ( class URPC_LoginAuthPlayer_X* RPC );
	void SendLoginRPC ( );
	void PsyNetLogin ( struct FScriptDelegate Callback );
	void OnRemoved ( );
	void OnInit ( );
	void EventLoginResult ( class UOnlinePlayerAuthentication_X* Auth );
	void EventPlayerAuthStateChanged ( class UOnlinePlayerAuthentication_X* Auth );
	void EventAuthenticatedNameChanged ( class UOnlinePlayerAuthentication_X* Auth );
	void EventBanned ( class UOnlinePlayerAuthentication_X* Auth );
	void EventLoginSuccessRPC ( class UOnlinePlayerAuthentication_X* Auth, class URPC_LoginAuthPlayer_X* RPC );
	void EventLoginChanged ( class UOnlinePlayerAuthentication_X* Auth );
};

UClass* UOnlinePlayerAuthentication_X::pClassPointer = NULL;

// Class ProjectX.SystemInfo_X
// 0x0000 (0x003C - 0x003C)
class USystemInfo_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3475 ];

		return pClassPointer;
	};

	void GetNetworkInfo ( TArray< struct FString >* Types );
	void GetOSInfo ( struct FString* Type, struct FString* Bit );
	void GetVideoCardInfo ( struct FString* CardName, int* RAM );
	void GetMemoryInfo ( float* Physical, float* PageFile, float* Virtual, int* Used, int* Allocated );
	void GetCPUInfo ( struct FString* Type, struct FString* Description, struct FString* Cores, struct FString* Threads );
	bool IsSupported ( );
};

UClass* USystemInfo_X::pClassPointer = NULL;

// Class ProjectX.TickActorComponent_X
// 0x0023 (0x0088 - 0x0065)
class UTickActorComponent_X : public UActorComponent
{
public:
	TArray< struct FTimerData >                        Timers;                                           		// 0x0068 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bTick : 1;                                        		// 0x0074 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FScriptDelegate                             __EventTick__Delegate;                            		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3477 ];

		return pClassPointer;
	};

	void SetTickable ( unsigned long bWantsTick );
	void ClearAllTimers ( class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
	void EventTick ( float DeltaTime );
};

UClass* UTickActorComponent_X::pClassPointer = NULL;

// Class ProjectX.Timers_X
// 0x0004 (0x0040 - 0x003C)
class UTimers_X : public UObject
{
public:
	class UTickComponent_X*                            TickComponent;                                    		// 0x003C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3479 ];

		return pClassPointer;
	};

	bool IsDelegateActive ( struct FScriptDelegate Callback );
	void ClearDelegate ( struct FScriptDelegate Callback );
	void SetDelegate ( struct FScriptDelegate Callback, float Rate, unsigned long bLoop );
	float GetRemainingTime ( class UObject* Obj, struct FName FuncName );
	float GetRate ( class UObject* Obj, struct FName FuncName );
	float GetCount ( class UObject* Obj, struct FName FuncName );
	void ClearAll ( class UObject* Obj );
	void Clear ( class UObject* Obj, struct FName FuncName );
	bool IsActive ( class UObject* Obj, struct FName FuncName );
	void Set ( class UObject* Obj, struct FName FuncName, float Rate, unsigned long bLoop );
};

UClass* UTimers_X::pClassPointer = NULL;

// Class ProjectX.TimersComponent_X
// 0x000C (0x0054 - 0x0048)
class UTimersComponent_X : public UComponent
{
public:
	TArray< struct FTimerData >                        Timers;                                           		// 0x0048 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3481 ];

		return pClassPointer;
	};

	bool IsDelegateActive ( struct FScriptDelegate Callback );
	void ClearDelegate ( struct FScriptDelegate Callback );
	void SetDelegate ( struct FScriptDelegate Callback, float Rate, unsigned long bLoop );
	float GetRemainingTimeForTimer ( struct FName inTimerFunc, class UObject* inObj );
	float GetTimerRate ( struct FName inTimerFunc, class UObject* inObj );
	float GetTimerCount ( struct FName inTimerFunc, class UObject* inObj );
	void NotifyStateChanged ( struct FName OldStateName );
	void UpdateTimers ( float DeltaSeconds );
	void ClearAllTimers ( class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	bool IsTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void SetStateTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
};

UClass* UTimersComponent_X::pClassPointer = NULL;

// Class ProjectX.TickComponent_X
// 0x0018 (0x006C - 0x0054)
class UTickComponent_X : public UTimersComponent_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0054 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bTickWhenGamePaused : 1;                          		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTick : 1;                                        		// 0x0058 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	struct FScriptDelegate                             __TickDelegate__Delegate;                         		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3483 ];

		return pClassPointer;
	};

	void SetTickable ( unsigned long bWantsTick );
	void TickDelegate ( float DeltaTime );
};

UClass* UTickComponent_X::pClassPointer = NULL;

// Class ProjectX.UIStrings_X
// 0x0000 (0x003C - 0x003C)
class UUIStrings_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3485 ];

		return pClassPointer;
	};

};

UClass* UUIStrings_X::pClassPointer = NULL;

// Class ProjectX.WebRequest_X
// 0x0054 (0x0090 - 0x003C)
class UWebRequest_X : public UObject
{
public:
	unsigned long                                      bZipRequest : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bZipResponse : 1;                                 		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bConnectionReset : 1;                             		// 0x003C (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
	unsigned char                                      RequestState;                                     		// 0x0040 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     URL;                                              		// 0x0044 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0054 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< unsigned char >                            Content;                                          		// 0x0058 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     StringContent;                                    		// 0x0064 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            ResponseData;                                     		// 0x0070 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UError*                                      Error;                                            		// 0x007C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __EventCompleted__Delegate;                       		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3487 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void SetError ( class UError* InError );
	bool eventHasInternetConnection ( );
	void HandleHttpRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	void eventConstructHttpRequest ( );
	struct FString GetResponseHeader ( struct FString Key );
	struct FString GetResponseString ( );
	bool HasNewData ( );
	bool IsSuccess ( );
	bool IsError ( );
	bool IsComplete ( );
	bool IsSent ( );
	class UHttpRequestInterface* GetHttpRequest ( );
	class UWebRequest_X* Send ( struct FString InURL, struct FScriptDelegate OnCompleteCallback );
	void PrepareRequest ( struct FString InURL );
	void SetContentFromString ( struct FString ContentString );
	void SetContent ( TArray< unsigned char >* ContentBytes );
	struct FString GetETag ( );
	void SetETag ( struct FString ETag );
	class UWebRequest_X* SetHeader ( struct FString Key, struct FString Value );
	class UWebRequest_X* AddPlayerIDParam ( struct FUniqueNetId PlayerID );
	class UWebRequest_X* AddStringParam ( struct FString Key, struct FString Value );
	class UWebRequest_X* AddFloatParam ( struct FString Key, float Value );
	class UWebRequest_X* AddQwordParam ( struct FString Key );
	class UWebRequest_X* AddIntParam ( struct FString Key, int Value );
	class UWebRequest_X* Create ( );
	void EventCompleted ( class UWebRequest_X* Request );
};

UClass* UWebRequest_X::pClassPointer = NULL;

// Class ProjectX.AnimNodeBlendBase_X
// 0x0014 (0x0128 - 0x0114)
class UAnimNodeBlendBase_X : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                        		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    ChildBlendTimes;                                  		// 0x0118 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bRebuildChildren : 1;                             		// 0x0124 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bChildrenUpdated : 1;                             		// 0x0124 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3489 ];

		return pClassPointer;
	};

	void SetActiveChildNamed ( struct FName ChildName, unsigned long bForce );
	float GetAnimDuration ( int ChildIndex );
	float GetBlendTime ( int ChildIndex, unsigned long bGetDefault );
};

UClass* UAnimNodeBlendBase_X::pClassPointer = NULL;

// Class ProjectX.AnimNodeSeries_X
// 0x000C (0x0134 - 0x0128)
class UAnimNodeSeries_X : public UAnimNodeBlendBase_X
{
public:
	unsigned long                                      bActive : 1;                                      		// 0x0128 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bInitialized : 1;                                 		// 0x0128 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	class UAnimNodeSequence*                           IntroAnim;                                        		// 0x012C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAnimNodeSequence*                           OutroAnim;                                        		// 0x0130 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3491 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeSeries_X::pClassPointer = NULL;

// Class ProjectX.AnimNodeSequence_X
// 0x0014 (0x0154 - 0x0140)
class UAnimNodeSequence_X : public UAnimNodeSequence
{
public:
	float                                              AnimSetBlendTime;                                 		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bResetOnRelevant : 1;                             		// 0x0144 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UAnimSequence*                               PrevAnimSeq;                                      		// 0x0148 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PrevAnimLinkupIndex;                              		// 0x014C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BlendTimeLeft;                                    		// 0x0150 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3493 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeSequence_X::pClassPointer = NULL;

// Class ProjectX.AnimNodePose_X
// 0x0000 (0x0154 - 0x0154)
class UAnimNodePose_X : public UAnimNodeSequence_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3495 ];

		return pClassPointer;
	};

	void PlayAnim ( unsigned long bLoop, float InRate, float StartTime );
};

UClass* UAnimNodePose_X::pClassPointer = NULL;

// Class ProjectX.AnimNodeSlot_X
// 0x0000 (0x0114 - 0x0114)
class UAnimNodeSlot_X : public UAnimNodeSlot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3497 ];

		return pClassPointer;
	};

	void AddNodeToGroup ( struct FName GroupName );
	float PlaySettings ( struct FCustomAnimSettings Settings );
};

UClass* UAnimNodeSlot_X::pClassPointer = NULL;

// Class ProjectX.AnimNotify_PlayParticleEffect_X
// 0x0008 (0x006C - 0x0064)
class UAnimNotify_PlayParticleEffect_X : public UAnimNotify_PlayParticleEffect
{
public:
	class UParticleSystemComponent*                    PSC;                                              		// 0x0064 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimNodeSequence*                           CachedAnimSequence;                               		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3499 ];

		return pClassPointer;
	};

	void OnParticleSystemFinished ( class UParticleSystemComponent* Component );
	void eventNotifyEnd ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
	void eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
};

UClass* UAnimNotify_PlayParticleEffect_X::pClassPointer = NULL;

// Class ProjectX.TcpConnection
// 0x009C (0x00D8 - 0x003C)
class UTcpConnection : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              InitialConnectionTimeout;                         		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ConnectionTimeout;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    Socket;                                           		// 0x0048 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      ConnectionState;                                  		// 0x004C (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      WebSocketState;                                   		// 0x004D (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              LastReceiveTime;                                  		// 0x0050 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< unsigned char >                            InBytes;                                          		// 0x0054 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            OutBytes;                                         		// 0x0060 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      OutMessageLengths;                                		// 0x006C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            QueuedWebSocketBytes;                             		// 0x0078 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      QueuedWebSocketMessageLengths;                    		// 0x0084 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            InBytesDecoded;                                   		// 0x0090 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            BunchBytes;                                       		// 0x009C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReceivedBunch__Delegate;                   		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3501 ];

		return pClassPointer;
	};

	void eventOnDisconnected ( );
	void eventOnConnected ( );
	void Close ( );
	struct FString GetRemoteAddress ( );
	struct FString GetAddress ( );
	void EventReceivedBunch ( class UTcpConnection* Connection );
	void EventDisconnected ( class UTcpConnection* Connection );
	void EventConnected ( class UTcpConnection* Connection );
};

UClass* UTcpConnection::pClassPointer = NULL;

// Class ProjectX.WebSocketConnection_X
// 0x0014 (0x00EC - 0x00D8)
class UWebSocketConnection_X : public UTcpConnection
{
public:
	float                                              PingInterval;                                     		// 0x00D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ClosedReason;                                     		// 0x00DC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                ClosedCode;                                       		// 0x00E8 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3503 ];

		return pClassPointer;
	};

	void Close ( );
	bool BeginWebSocketConnect ( struct FString Address, class UStringMap* HandshakeHeaders );
	bool BeginConnect ( struct FString Address );
};

UClass* UWebSocketConnection_X::pClassPointer = NULL;

// Class ProjectX.PrivilegeCheck_X
// 0x005C (0x0098 - 0x003C)
class UPrivilegeCheck_X : public UObject
{
public:
	TArray< int >                                      ControllerIDs;                                    		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bHasRestriction : 1;                              		// 0x0048 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bFinished : 1;                                    		// 0x0048 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	TArray< unsigned char >                            PendingPrivileges;                                		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                FailedControllerID;                               		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      FailedPrivilege;                                  		// 0x005C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      PendingControllerIDs;                             		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CheckDelegates;                                   		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             EventFinished;                                    		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __CheckDelegate__Delegate;                        		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47641 ];

		return pClassPointer;
	};

	bool HasFeatureRestriction ( int* OutControllerID, unsigned char* OutFailedPrivilege );
	void OnFinished ( );
	void Fail ( struct FString Reason );
	void HandlePrivilege ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char Level );
	void CheckPrivilege ( );
	void CheckPsyNet ( );
	void ValidateUserOnlineAccount ( );
	void CheckInternet ( );
	class UPrivilegeCheck_X* RequirePrivilege ( unsigned char Privilege );
	class UPrivilegeCheck_X* RequirePsyNet ( );
	class UPrivilegeCheck_X* RequireUserOnlineAccount ( );
	class UPrivilegeCheck_X* RequireInternet ( );
	void StartNextCheck ( );
	void Start ( );
	void Init ( int ControllerId );
	void CheckDelegate ( );
};

UClass* UPrivilegeCheck_X::pClassPointer = NULL;

// Class ProjectX.ActivateAnimSeriesComponent_X
// 0x0008 (0x0074 - 0x006C)
class UActivateAnimSeriesComponent_X : public UActorComponent_X
{
public:
	struct FName                                       AnimNodeName;                                     		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47910 ];

		return pClassPointer;
	};

	void SetAnimSeriesActiveInComponent ( class USkeletalMeshComponent* SKC, unsigned long bActive );
	void SetAnimSeriesActive ( unsigned long bActive );
	void eventDetached ( );
	void eventAttached ( );
};

UClass* UActivateAnimSeriesComponent_X::pClassPointer = NULL;

// Class ProjectX.AddReservationMessage_X
// 0x0058 (0x0094 - 0x003C)
class UAddReservationMessage_X : public UBeaconMessage_X
{
public:
	TArray< struct FReservationPlayerData >            Players;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                PartyLeaderID;                                    		// 0x0048 (0x0048) [0x0000000000000000]              
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47930 ];

		return pClassPointer;
	};

	void GetPlayerMapPrefs ( struct FUniqueNetId PlayerID, TArray< struct FName >* Likes, TArray< struct FName >* Dislikes );
	class UAddReservationMessage_X* SetDisableCrossPlay ( unsigned long bValue );
	class UAddReservationMessage_X* AddPlayer ( struct FUniqueNetId PlayerID, struct FString PlayerName, unsigned long bRemotePlayer );
	class UAddReservationMessage_X* AddOnlinePlayer ( class UOnlinePlayer_X* Player, unsigned long bFriendJoin );
	class UAddReservationMessage_X* AddPlayers ( );
};

UClass* UAddReservationMessage_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameParty_X
// 0x02A4 (0x0304 - 0x0060)
class UOnlineGameParty_X : public UOnline_X
{
public:
	TArray< struct FPartyMember >                      PartyMembers;                                     		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniqueLobbyId                              PartyID;                                          		// 0x006C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0078 (0x0048) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaxPartySize;                                     		// 0x00C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x00C4 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPartyMessage_SearchStatus_X*                PendingSearchStatus;                              		// 0x00C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPartyMessage_SearchStatus_X*                NullSearchStatus;                                 		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                PartyTimeout;                                     		// 0x00D0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                CurrentPartySize;                                 		// 0x00D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      LastbSearchingStatus : 1;                         		// 0x00D8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      LastLockStatus : 1;                               		// 0x00D8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FName                                       LastSearchState;                                  		// 0x00DC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPartyJoinMatchSettings                     MatchSettings;                                    		// 0x00E4 (0x002C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      ProcessingStatus;                                 		// 0x0110 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              SkillCacheTime;                                   		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastSkillSyncTime;                                		// 0x0118 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PendingPartyLocalPlayerNum;                       		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FUniqueLobbyId                              PendingPartyId;                                   		// 0x0120 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FPendingInviteData                          PendingInvite;                                    		// 0x012C (0x0014) [0x0000000000000000]              
	TArray< struct FPlaylistSkillRestrictionInfo >     PlaylistRestrictions;                             		// 0x0140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotInSameOnlineGameError;                         		// 0x014C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MissingLicenseAgreementError;                     		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UPartyConfig_X*                              PartyConfig;                                      		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URankedConfig_X*                             RankedConfig;                                     		// 0x0168 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineGameTrial_X*                          Trial;                                            		// 0x016C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPsyNetConfig_X*                             Config;                                           		// 0x0170 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UOnlineLobbyInterface*                       PlatformLobbyInterface;                           		// 0x0174 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0178 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UParties_X*                                  PsyNetLobbyInterface;                             		// 0x017C (0x0004) [0x0000000000000000]              
	int                                                CreatePartyLocalPlayerNum;                        		// 0x0180 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                    		// 0x0184 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0188 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInvited__Delegate;                   		// 0x0194 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0198 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyChanged__Delegate;                    		// 0x01A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x01A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartySizeChanged__Delegate;                		// 0x01B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x01B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchStatusChanged__Delegate;             		// 0x01C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x01C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyError__Delegate;                      		// 0x01D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x01D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyJoinGameError__Delegate;              		// 0x01E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x01E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyJoinGameSuccess__Delegate;            		// 0x01F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x01F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPartyDestroyed__Delegate;                  		// 0x0204 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x0208 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventConfirmJoinGameMessage__Delegate;          		// 0x0214 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x0218 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLeaderLeftOnlineGame__Delegate;            		// 0x0224 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x0228 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventProcessingStatusChanged__Delegate;         		// 0x0234 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x0238 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisableCrossPlayChanged__Delegate;         		// 0x0244 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x0248 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlaylistSkillRestrictionChange__Delegate;  		// 0x0254 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x0258 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerTradingChanged__Delegate;            		// 0x0264 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x0268 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventInviteToTrade__Delegate;                   		// 0x0274 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData16[ 0x4 ];                             		// 0x0278 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAcceptedInviteToTrade__Delegate;           		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCloseInviteToTrade__Delegate;              		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData18[ 0x4 ];                             		// 0x0298 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReadyToTrade__Delegate;                    		// 0x02A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData19[ 0x4 ];                             		// 0x02A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventNotReadyToTrade__Delegate;                 		// 0x02B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData20[ 0x4 ];                             		// 0x02B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventTradeReady__Delegate;                      		// 0x02C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData21[ 0x4 ];                             		// 0x02C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAnotherInviteToTrade__Delegate;            		// 0x02D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData22[ 0x4 ];                             		// 0x02D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInMatchChanged__Delegate;            		// 0x02E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData23[ 0x4 ];                             		// 0x02E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPlayerIsCurrentlyTrading__Delegate;        		// 0x02F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData24[ 0x4 ];                             		// 0x02F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47943 ];

		return pClassPointer;
	};

	void HandlePartyConfigChanged ( );
	void HandleMessageForMetrics ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	void HandlePlayerTradeComplete ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	void SendPlayerTradeComplete ( );
	void SendPlayerTradeCompleteAndClear ( unsigned long bWasCanceled );
	void HandleReadyToTrade ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	void ReadyToTrade ( unsigned long bReadyToTrade );
	void SetPartyMessageHandlerTradeProductUpdate ( unsigned long bAddHandler );
	void ClearTradingPlayer ( unsigned long bWasCanceled );
	void HandleAcceptInviteToTrade ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	bool CanAcceptTrade ( );
	void AcceptInviteToTrade ( unsigned long bAccepted );
	struct FGuid ResolveGuids ( struct FGuid* A, struct FGuid* B );
	struct FUniqueNetId GetTradingPlayerID ( );
	struct FString GetTradingPlayerName ( );
	void HandleInviteToTradeMessage ( class UOnlineMessageComponent_X* Component, class UPartyMessage_InviteToTrade_X* Message );
	void InvitePlayerToTrade ( struct FUniqueNetId InMemberId );
	bool IsPlayerTrading ( struct FUniqueNetId InMemberId );
	void ClearAllPlayersTrading ( );
	void SetPlayersTrading ( struct FUniqueNetId InMember1Id, struct FUniqueNetId InMember2Id, unsigned long bTrading );
	struct FString GetMemberName ( struct FUniqueNetId InMemberId );
	TArray< struct FUniqueNetId > GetOrderedPartyMemberIDs ( );
	TArray< struct FUniqueNetId > GetPartyMemberIDs ( );
	void HandleSessionCreated ( );
	bool IsProcessing ( );
	void SetProcessingStatus ( unsigned char Status );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	struct FString GetPlayerRatingString ( struct FUniqueNetId PlayerID, int Playlist );
	void OnPartyError ( class UError* Error );
	void HandlePartyError ( struct FString Error );
	void HandleRankedConfigChanged ( );
	void UpdatePlaylistRestrictions ( );
	struct FPlaylistSkillRestrictionInfo GetPlaylistSkillRestrictionInfo ( int PlaylistId );
	bool IsPlaylistSkillRestricted ( int PlaylistId );
	void HandleGroupSkillSynced ( class UOnlineGameSkillGroups_X* SkillObj, TArray< struct FUniqueNetId > PlayerIDs, class UError* Error );
	void HandlePlayerSkillSynced ( class UOnlineGameSkill_X* SkillObj, struct FUniqueNetId PlayerID, class UError* Error );
	float GetAverageSkill ( int Playlist );
	float GetGroupSkill ( int Playlist );
	float GetSkill ( int Playlist );
	void SyncUpdatedSkills ( );
	void SyncIndividualSkills ( );
	void SyncGroupSkills ( );
	void SyncSkills ( unsigned long bFromCache );
	void SyncPlayerSkill ( struct FUniqueNetId MemberId );
	void HandlePsyNetLogin ( );
	void OnPartyChanged ( );
	bool UseGroupMMR ( );
	bool TryGetValueInt ( struct FString Key, TArray< struct FLobbyMetaData >* MetaData, int* Value );
	bool PartyHasDisableCrossPlay ( );
	void SetDisableCrossPlayForMember ( struct FUniqueNetId PartyMemberID, unsigned long bDisableCrossPlay );
	void HandleDisableCrossPlayMessage ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	void BroadcastDisableCrossPlay ( );
	struct FString GetAnyLoggedInRestrictionPlayerName ( );
	struct FString GetAnyAppOwnerRestrictionPlayerName ( );
	struct FString GetMatchmakingRestrictionError ( );
	bool IsPlayerInMainMenu ( struct FUniqueNetId MemberId );
	bool IsPlayerInMatch ( struct FUniqueNetId MemberId );
	void SetAvailableForMatchmakingForMember ( struct FUniqueNetId PartyMemberID, int MatchmakeRestrictions );
	void HandleMatchmakingAvailability ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	int BuildMatchmakingRestrictions ( );
	void BroadcastMatchmakingAvailabilityDelayed ( );
	void BroadcastMatchmakingAvailability ( );
	void BroadcastAllLocalPlayers ( );
	void BroadcastLocalPlayersDelayed ( );
	void BroadcastLocalPlayers ( );
	void HandlePsyNetLoginChanged ( class UOnlinePlayerAuthentication_X* Auth );
	void HandleLocalPlayerLoginStatusChanged ( class UOnlinePlayer_X* Player );
	void HandleLocalPlayerLeave ( class ULocalPlayer* Player );
	void HandleLocalPlayerJoin ( class ULocalPlayer* Player );
	void ProcessLocalPlayersMessage ( class UPartyMessage_LocalPlayers_X* Message );
	void HandleLocalPlayers ( class UOnlineMessageComponent_X* Component, class UObject* ObjMessage );
	bool AllowSplitScreenPlayer ( int ControllerId, class UError** OutError );
	int GetPartySize ( );
	void HandleSearchStatus ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	void BroadcastSearchStatus ( );
	class UPartyMessage_SearchStatus_X* GetSearchStatusMessage ( );
	bool TogglePartyLock ( );
	int GetMaxPartySize ( );
	bool AllowPartySize ( int InSize );
	bool IsPartyOverFull ( );
	bool AllowNewMember ( );
	void UpdatePartyLock ( );
	void HandleFindGameStateChanged ( struct FName NewState );
	void ClearLastServerAddress ( );
	void OnNewGameInfoCreated ( class AGameInfo_X* Game );
	void OnNewSettingsChosen ( int PlaylistId );
	void OnNewGame ( );
	void SetMatchmakingSearching ( unsigned long bState );
	void SetSearchState ( struct FName SearchState );
	struct FUniqueNetId GetLocalMemberId ( );
	bool IsMemberLocal ( struct FUniqueNetId MemberId );
	bool HasRemoteMember ( );
	void OnPartyLeaderChanged ( );
	void HandleKickMessage ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	void HandleLobbySettingsUpdateMessage ( class UOnlineMessageComponent_X* Component, class UPartyMessage_LobbySettings_X* LobbySettingsMessage );
	void HandleLobbyDestroyed ( unsigned char Reason, struct FUniqueLobbyId* LobbyId );
	void HandleLobbyReceiveBinaryData ( int MemberIndex, struct FActiveLobbyInfo* LobbyInfo, TArray< unsigned char >* Data );
	void RemoveAllPartyMembers ( );
	void RemovePartyMemberByLocalPlayer ( class ULocalPlayer* Player );
	void RemovePartyMemberByID ( struct FUniqueNetId MemberId );
	int AddPartyMember ( struct FUniqueNetId PrimaryMemberId, struct FUniqueNetId MemberId, struct FString MemberName, int ControllerId );
	void OnEditExistingPartyMember ( int PartyMemberIdx );
	void OnAddNewPartyMember ( int PartyMemberIdx );
	void UpdatePartyInfo ( struct FActiveLobbyInfo* Lobby );
	void UpdatePartyLeader ( struct FActiveLobbyInfo* Lobby );
	void HandleLobbySettingsUpdated ( struct FActiveLobbyInfo* Lobby );
	void OnNewLobby ( );
	void HandleJoinLobby ( unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID );
	void BroadcastStateDelayed ( );
	void BroadcastState ( );
	void HandleLobbyMemberStatusUpdate ( int MemberIndex, int InstigatorIndex, struct FString Status, struct FActiveLobbyInfo* LobbyInfo );
	void HandlePartyJoinGameComplete ( unsigned long bSuccess, struct FString FailReason );
	void HandleConfirmJoinGame ( struct FPartyJoinMatchSettings InSettings );
	bool JoinFriend ( struct FUniqueNetId PartyMemberID );
	bool WantsToFollowTheLeaderOutOfGame ( );
	void HandlePartyJoinGame ( class UOnlineMessageComponent_X* Component, class UObject* MessageObject );
	void BroadcastPartyServer ( );
	void HandleServerReserved ( );
	void HandleJoinGameComplete ( unsigned long bSuccess, struct FString FailReason );
	struct FPartyMemberServer GetPartyMemberServer ( struct FPartyMemberServer* StructInitializer_AFEA523A4351CD49A3FDC7ACE4A2758E );
	void HandlePartyMemberJoinGame ( class UOnlineMessageComponent_X* Component, class UPartyMessage_PartyMemberJoinGame_X* MessageObject );
	bool SetPartyMemberJoinGame ( struct FUniqueNetId* PlayerID, struct FPartyMemberServer* Server );
	void BroadcastPartyMember ( struct FUniqueNetId PlayerID, struct FPartyMemberServer Server );
	void BroadcastLobbySettings ( struct FActiveLobbyInfo LobbyInfo );
	bool SetLeader ( struct FUniqueNetId NewLeader );
	bool IsPrimaryPlayerIndex ( int MemberIdx );
	bool IsPrimaryPlayer ( struct FUniqueNetId* PlayerID );
	bool IsPlayerInParty ( struct FUniqueNetId* PlayerID );
	bool KickPlayer ( struct FUniqueNetId PlayerID, unsigned char Reason );
	bool ShowInviteUI ( unsigned char LocalUserNum );
	bool LeaveParty ( struct FString Reason );
	bool IsInCurrentGame ( struct FUniqueNetId MemberId );
	bool IsPartyLeader ( );
	bool IsInParty ( );
	void HandleJoinPartyPrivilegeCheck ( class UPrivilegeCheck_X* PrivilegeCheck );
	void JoinParty ( int LocalPlayerNum, struct FUniqueLobbyId* InPartyId, struct FPendingInviteData* StructInitializer_32EDC2A84E21FDB3AB4576BFE281BDBC );
	void CheckPartyTimeout ( );
	void StartPartyTimeout ( );
	void OnPartyCreated ( unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId* InPartyId );
	bool CreatePartyInternal ( );
	bool CreateParty ( int LocalPlayerNum, struct FScriptDelegate Handler );
	bool ShouldCreatePsyNetParty ( );
	void SetLobbyInterfacePsyNet ( );
	void HandlePlayerInvitedPsyNet ( unsigned long bAccepted, struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId );
	void HandlePlayerInvitedPlatform ( unsigned long bAccepted, struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId );
	void HandlePlayerInvited ( unsigned long bAccepted, struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId );
	void HandlePartySizeTracker ( class UOnlineGameParty_X* PartyObject );
	void HandlePrimaryPlayerIdChanged ( class UOnlineGameAccount_X* InAccount, struct FUniqueNetId PlayerID );
	void HandleInternetConnectionChanged ( unsigned long bConnected );
	class UPartyMetrics_X* GetMetrics ( );
	void SetLobbyInterface ( class UOnlineLobbyInterface* Lobby );
	bool IsUsingPsyNetParty ( );
	void InitLobbyInterfaces ( );
	void OnInit ( );
	void EventPlayerIsCurrentlyTrading ( class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId );
	void EventPlayerInMatchChanged ( class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId );
	void EventAnotherInviteToTrade ( class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId );
	void EventTradeReady ( class UOnlineGameParty_X* PartyObject );
	void EventNotReadyToTrade ( class UOnlineGameParty_X* PartyObject );
	void EventReadyToTrade ( class UOnlineGameParty_X* PartyObject );
	void EventCloseInviteToTrade ( class UOnlineGameParty_X* PartyObject, unsigned long bWasCanceled );
	void EventAcceptedInviteToTrade ( class UOnlineGameParty_X* PartyObject );
	void EventInviteToTrade ( class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId );
	void EventPlayerTradingChanged ( class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId, unsigned long bIsPlayerTrading );
	void EventPlaylistSkillRestrictionChange ( class UOnlineGameParty_X* PartyObject );
	void EventDisableCrossPlayChanged ( class UOnlineGameParty_X* PartyObject );
	void EventProcessingStatusChanged ( class UOnlineGameParty_X* PartyObject );
	void EventLeaderLeftOnlineGame ( class UOnlineGameParty_X* PartyObject );
	void EventConfirmJoinGameMessage ( class UOnlineGameParty_X* PartyObject );
	void EventPartyDestroyed ( class UOnlineGameParty_X* PartyObject );
	void EventPartyJoinGameSuccess ( class UOnlineGameParty_X* PartyObject );
	void EventPartyJoinGameError ( class UOnlineGameParty_X* PartyObject, struct FString LocalizedErrorString );
	void EventPartyError ( class UOnlineGameParty_X* PartyObject, class UError* Error );
	void EventSearchStatusChanged ( class UOnlineGameParty_X* PartyObject, class UPartyMessage_SearchStatus_X* StatusMessage );
	void EventPartySizeChanged ( class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize );
	void EventPartyChanged ( class UOnlineGameParty_X* PartyObject );
	void EventPlayerInvited ( class UOnlineGameParty_X* PartyObject, struct FUniqueLobbyId* InPartyId, struct FUniqueNetId* FriendId );
	void EventPartyCreated ( class UOnlineGameParty_X* PartyObject, unsigned long bWasSuccessful );
};

UClass* UOnlineGameParty_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameAccount_X
// 0x002C (0x008C - 0x0060)
class UOnlineGameAccount_X : public UOnline_X
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                    		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              UpdateCurrentGameTaskTimer;                       		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentPlaylistId;                                		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventPrimaryPlayerIdChanged__Delegate;          		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCurrentPlaylistSet__Delegate;              		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47946 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void OnMainMenuOpened ( );
	int GetNumLocalPlayers ( );
	void SendUpdatePlayerCurrentGameRequest ( );
	void UpdateCurrentGame ( );
	void ClearCurrentPlaylist ( );
	void SetCurrentPlaylist ( int PlaylistId );
	void HandleServerAddressChanged ( );
	void HandlePsyNetLoginChanged ( class UOnlinePlayerAuthentication_X* Auth );
	void HandlePlayerLoginStatusChanged ( class UOnlinePlayer_X* Player );
	void OnPrimaryPlayerIdChanged ( );
	void SetPrimaryPlayer ( class UOnlinePlayer_X* Player );
	void OnInit ( );
	void EventCurrentPlaylistSet ( class UOnlineGameAccount_X* InAccount, class UGameSettingPlaylist_X* NewPlaylist );
	void EventPrimaryPlayerIdChanged ( class UOnlineGameAccount_X* InAccount, struct FUniqueNetId PlayerID );
};

UClass* UOnlineGameAccount_X::pClassPointer = NULL;

// Class ProjectX.AddReservationMessagePrivate_X
// 0x0060 (0x00F4 - 0x0094)
class UAddReservationMessagePrivate_X : public UAddReservationMessage_X
{
public:
	struct FCustomMatchSettings                        Settings;                                         		// 0x0094 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47975 ];

		return pClassPointer;
	};

	struct FString GetDebugString ( );
	class UAddReservationMessagePrivate_X* SetSettings ( struct FCustomMatchSettings* InSettings );
};

UClass* UAddReservationMessagePrivate_X::pClassPointer = NULL;

// Class ProjectX.AddReservationMessagePublic_X
// 0x0024 (0x00B8 - 0x0094)
class UAddReservationMessagePublic_X : public UAddReservationMessage_X
{
public:
	struct FJoinMatchSettings                          Settings;                                         		// 0x0094 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlinePlayerMapPrefs >             MapPrefs;                                         		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47983 ];

		return pClassPointer;
	};

	class UAddReservationMessage_X* AddPlayers ( );
	void SetPlayerPref ( class UGameSettingPlaylist_X* Playlist, class UOnlinePlayer_X* OnlinePlayer );
	void GetPlayerMapPrefs ( struct FUniqueNetId PlayerID, TArray< struct FName >* Likes, TArray< struct FName >* Dislikes );
	class UAddReservationMessage_X* AddPlayer ( struct FUniqueNetId PlayerID, struct FString PlayerName, unsigned long bRemotePlayer );
	struct FString GetDebugString ( );
	struct FString GetPlayerDebugString ( struct FReservationPlayerData Player );
	class UAddReservationMessagePublic_X* SetSettings ( struct FJoinMatchSettings* InSettings );
};

UClass* UAddReservationMessagePublic_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameSkill_X
// 0x0040 (0x00A0 - 0x0060)
class UOnlineGameSkill_X : public UOnline_X
{
public:
	TArray< class UPlaylistSkillCache_X* >             Playlists;                                        		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPlayerSeasonRewardProgress >       SeasonRewards;                                    		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSkillSyncRequest >                 SyncRequests;                                     		// 0x0078 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      SkillsSyncedPlayers;                              		// 0x0084 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventSkillSynced__Delegate;                     		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48006 ];

		return pClassPointer;
	};

	bool SkillsSynced ( struct FUniqueNetId PlayerID );
	int GetHighestSkillTier ( struct FUniqueNetId PlayerID );
	struct FPlayerSeasonRewardProgress GetPlayerSeasonRewardProgress ( struct FUniqueNetId PlayerID );
	class UPlaylistSkillCache_X* GetPlaylistSkillCache ( int Playlist );
	void HandleSkillsUpdateFailed ( class URPC_X* RPC );
	void SetPlayerSeasonReward ( struct FPlayerSeasonRewardProgress Reward );
	void ReplicateSeasonReward ( struct FPlayerSeasonRewardProgress Reward );
	void HandleSkillsUpdated ( class URPC_X* RPC, struct FPlayerSeasonRewardProgress* StructInitializer_F54BD0A74488A7A36CD0F8BFB968D382 );
	void SubmitMatch ( class UMatchRecorder_X* MatchRecorder, struct FString MatchGUID );
	void Clear ( );
	float GetMMR ( float Mu, float Sigma );
	float GetPlayerMMR ( struct FUniqueNetId PlayerID, int Playlist );
	struct FPlayerSkillRating GetPlayerRating ( struct FUniqueNetId PlayerID, int Playlist );
	void OnSkillSynced ( struct FUniqueNetId PlayerID, class UError* Error );
	void CacheSeasonReward ( struct FPlayerSeasonRewardProgress Reward );
	void HandleSkillRequestCompleteRPC ( class URPC_GetPlayerSkill_X* RPC );
	void SyncPlayerSkill ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback );
	void CacheSkill ( struct FPlayerSkillRating Rating, int Playlist );
	void PreCacheSkill ( struct FPlayerSkillRating Rating, int Playlist );
	int GetSkillPlaylistID ( int PlaylistId );
	void EventSkillSynced ( class UOnlineGameSkill_X* Skill, struct FUniqueNetId PlayerID, class UError* Error );
};

UClass* UOnlineGameSkill_X::pClassPointer = NULL;

// Class ProjectX.OnlineGamePlaylists_X
// 0x0024 (0x0084 - 0x0060)
class UOnlineGamePlaylists_X : public UOnline_X
{
public:
	class UClass*                                      PlaylistClass;                                    		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UGameSettingPlaylist_X* >            DownloadedPlaylists;                              		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class URankedConfig_X*                             RankedConfig;                                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventPlaylistsChanged__Delegate;                		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48015 ];

		return pClassPointer;
	};

	TArray< struct FName > GetAccessiblePlaylists ( TArray< struct FName > SelectedPlaylists );
	bool IsRankedEnabled ( );
	bool IsRankedPlaylistID ( int PlaylistId );
	bool IsRankedPlaylistName ( struct FName PlaylistName );
	void NamesToIDs ( TArray< struct FName >* Names, TArray< int >* Ids );
	struct FString GetPlaylistFriendlyName ( int PlaylistId );
	void CopyPlaylistGameTags ( );
	void HandlePlaylistsChanged ( class UObjectProvider* Provider );
	int NameToID ( struct FName PlaylistName );
	class UGameSettingPlaylist_X* GetPlaylistByID ( int PlaylistId );
	class UGameSettingPlaylist_X* GetPlaylistByName ( struct FName PlaylistName );
	bool IsPlaylistEnabled ( class UGameSettingPlaylist_X* Playlist );
	void NotifyWhenChanged ( struct FScriptDelegate Callback );
	void OnInit ( );
	void EventPlaylistsChanged ( class UOnlineGamePlaylists_X* PlaylistsObj );
};

UClass* UOnlineGamePlaylists_X::pClassPointer = NULL;

// Class ProjectX.GameSettingPlaylist_X
// 0x0044 (0x0080 - 0x003C)
class UGameSettingPlaylist_X : public UGameSetting_X
{
public:
	struct FString                                     Title;                                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PlayerCount;                                      		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStandard : 1;                                    		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRanked : 1;                                      		// 0x0058 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSolo : 1;                                        		// 0x0058 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bNew : 1;                                         		// 0x0058 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bApplyQuitPenalty : 1;                            		// 0x0058 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bHidden : 1;                                      		// 0x0058 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	int                                                PlaylistId;                                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UPresetMutators_X* >                 PresetMutators;                                   		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       MapName;                                          		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ServerCommand;                                    		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48019 ];

		return pClassPointer;
	};

	bool ShouldUpdateSkills ( );
	bool IsValidID ( int InPlaylistID );
	bool IsValid ( );
	struct FString GetLocalizedDescription ( );
	struct FString GetLocalizedName ( );
	void Setup ( class UPlaylistSettings_X* Settings );
};

UClass* UGameSettingPlaylist_X::pClassPointer = NULL;

// Class ProjectX.SeqEvent_Spawned_X
// 0x0004 (0x0118 - 0x0114)
class USeqEvent_Spawned_X : public USequenceEvent
{
public:
	class AActor*                                      Spawned;                                          		// 0x0114 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48142 ];

		return pClassPointer;
	};

	void TriggerFor ( class AActor* A );
};

UClass* USeqEvent_Spawned_X::pClassPointer = NULL;

// Class ProjectX.CameraStateBlender_X
// 0x0088 (0x00D0 - 0x0048)
class UCameraStateBlender_X : public UComponent
{
public:
	struct FCameraTransition                           Transition;                                       		// 0x0048 (0x0048) [0x0000000000002000]              ( CPF_Transient )
	struct FCameraOrientation                          TransitionDelta;                                  		// 0x0090 (0x002C) [0x0000000000002000]              ( CPF_Transient )
	class UCameraState_X*                              CameraState;                                      		// 0x00BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventBlenderStateChanged__Delegate;             		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48222 ];

		return pClassPointer;
	};

	bool IsTransitioning ( );
	void BlendCameraState ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void PostProcessPOV ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void UpdatePOV ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void Tick ( float DeltaTime );
	void ClearTransitionDelta ( );
	void ClearTransition ( );
	bool TransitionToState ( class UCameraState_X* NewState );
	void Snap ( );
	void EventBlenderStateChanged ( class UCameraStateBlender_X* CameraBender );
};

UClass* UCameraStateBlender_X::pClassPointer = NULL;

// Class ProjectX.CameraState_X
// 0x001C (0x005C - 0x0040)
class UCameraState_X : public UStateObject_X
{
public:
	struct FViewTargetTransitionParams                 DefaultBlendParams;                               		// 0x0040 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ACamera_X*                                   Camera;                                           		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCanSwivel : 1;                                   		// 0x0058 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48230 ];

		return pClassPointer;
	};

	void OnSnap ( );
	void ModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot );
	void UpdatePOV ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void Tick ( float DeltaTime );
	void EndCameraState ( );
	void BeginCameraState ( );
	struct FViewTargetTransitionParams GetEndBlendParams ( class UCameraState_X* NewState );
	struct FViewTargetTransitionParams GetStartBlendParams ( class UCameraState_X* PreviousState );
	bool ShouldKeepExecuting ( );
	bool ShouldExecute ( );
	void Init ( class ACamera_X* InCamera );
};

UClass* UCameraState_X::pClassPointer = NULL;

// Class ProjectX.CameraUtils_X
// 0x0000 (0x003C - 0x003C)
class UCameraUtils_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48267 ];

		return pClassPointer;
	};

	void BlendPOVs ( struct FCameraOrientation FromPOV, struct FCameraOrientation ToPOV, float Percent, struct FCameraOrientation* OutPOV );
	float GetBlendPercent ( struct FViewTargetTransitionParams BlendParams, float Time );
	bool IsPointInView ( struct FVector Point, struct FVector ViewStart, struct FRotator ViewRotation, float FOV );
	float GetFrustumDistanceFromWidth ( float FOV, float Width, float AspectRatio );
	float GetFrustumDistanceFromHeight ( float FOV, float Height );
	void GetFrustumSize ( float Dist, float FOV, float AspectRatio, float* OutWidth, float* OutHeight );
	void CalculateDistanceRotation ( struct FVector Focus, struct FVector Origin, float* OutDistance, struct FRotator* OutRotation );
};

UClass* UCameraUtils_X::pClassPointer = NULL;

// Class ProjectX.CameraModifier_CameraShake_X
// 0x0000 (0x0068 - 0x0068)
class UCameraModifier_CameraShake_X : public UCameraModifier_CameraShake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48335 ];

		return pClassPointer;
	};

	void ModifyCameraShakeScale ( class UCameraShake* Shake, float NewScale );
	void RemoveCameraShake ( class UCameraShake* Shake );
};

UClass* UCameraModifier_CameraShake_X::pClassPointer = NULL;

// Class ProjectX.CameraState_CamActor_X
// 0x015C (0x01B8 - 0x005C)
class UCameraState_CamActor_X : public UCameraState_X
{
public:
	unsigned long                                      bUseOverridePostProcess : 1;                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class ACameraActor*                                CamActor;                                         		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPostProcessSettings                        PrevPost;                                         		// 0x0064 (0x0150) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              PrevPostAlpha;                                    		// 0x01B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48465 ];

		return pClassPointer;
	};

	void UpdatePOV ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void EndCameraState ( );
	void BeginCameraState ( );
	struct FViewTargetTransitionParams GetBlendParams ( class UCameraState_X* PrevState );
	bool ShouldExecute ( );
};

UClass* UCameraState_CamActor_X::pClassPointer = NULL;

// Class ProjectX.CDN_X
// 0x0018 (0x0054 - 0x003C)
class UCDN_X : public UObject
{
public:
	struct FString                                     URL;                                              		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     BlogURL;                                          		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48492 ];

		return pClassPointer;
	};

};

UClass* UCDN_X::pClassPointer = NULL;

// Class ProjectX.HUD_X
// 0x000C (0x0490 - 0x0484)
class AHUD_X : public AHUD
{
public:
	class UObject*                                     ShowDebugObject;                                  		// 0x0484 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDebugDrawer_X*                              DebugDrawer;                                      		// 0x0488 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTexture*                                    DebugTexture;                                     		// 0x048C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48525 ];

		return pClassPointer;
	};

	void SetShowDebugObject ( class UObject* inObj );
	void ShowDebugInfo ( float* out_YL, float* out_YPos );
	void ShowDebug ( struct FName DebugType );
	void DebugCategorySwitch ( unsigned long bForward );
	void DrawPauseScreen ( );
	bool ShouldShowConsoleMessage ( struct FConsoleMessage InConsoleMessage );
	void DrawDebugTexture ( );
	void DrawHUD ( );
	void PostBeginPlay ( );
};

UClass* AHUD_X::pClassPointer = NULL;

// Class ProjectX.OnlineImageDownloaderWeb_X
// 0x001C (0x0058 - 0x003C)
class UOnlineImageDownloaderWeb_X : public UObject
{
public:
	TArray< struct FDownloadedImageRequest >           Requests;                                         		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventImageDownloaded__Delegate;                 		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48528 ];

		return pClassPointer;
	};

	void OnDownloadComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	void RequestOnlineImage ( struct FString URL, unsigned long bSRGB, struct FScriptDelegate Callback );
	void EventImageDownloaded ( class UOnlineImageDownloaderWeb_X* Downloader, struct FDownloadedImage Image );
};

UClass* UOnlineImageDownloaderWeb_X::pClassPointer = NULL;

// Class ProjectX.ITakeDamage_X
// 0x0000 (0x003C - 0x003C)
class UITakeDamage_X : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48592 ];

		return pClassPointer;
	};

	bool TakeDamage_X ( class UDamageComponent_X* Damage );
};

UClass* UITakeDamage_X::pClassPointer = NULL;

// Class ProjectX.DebugDrawer_X
// 0x0030 (0x00B0 - 0x0080)
class UDebugDrawer_X : public UDebugDrawer
{
public:
	float                                              textscale;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCanvas*                                     Canvas;                                           		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             DebugCategories;                                  		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             PossibleDebugCategories;                          		// 0x0094 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              CharWidth;                                        		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastWidestElement;                                		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHideDebug : 1;                                   		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              OffsetX;                                          		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48602 ];

		return pClassPointer;
	};

	void DrawHeader ( );
	void DrawSpacer ( float Height );
	void DrawBackground ( float Width, float Height );
	void FinishDrawDebug ( );
	void StartDrawDebug ( class UCanvas* C );
	void PrintText ( struct FString Text, struct FColor InColor );
	void PrintProperty ( struct FString PropertyName, struct FString Value );
	void PrintSeperater ( );
	void UpdateCanvasIndentation ( );
	void EndSection ( );
	void StartSection ( );
	void SetPos ( float X, float Y );
	bool ShouldDisplayDebug ( struct FName Category );
};

UClass* UDebugDrawer_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameLanServer_X
// 0x00AC (0x0194 - 0x00E8)
class UOnlineGameLanServer_X : public UOnlineGameServer_X
{
public:
	class UOnlineGameLanReservations_X*                Reservations;                                     		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x00EC (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniqueNetId                                CustomMatchOwner;                                 		// 0x014C (0x0048) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48685 ];

		return pClassPointer;
	};

	void StartReservationTimeout ( );
	void PlayerLoggedOut ( class APlayerReplicationInfo* PRI );
	bool AllowSplitscreenJoin ( class APlayerReplicationInfo* PrimaryPRI, struct FUniqueNetId PlayerID, struct FString PlayerName );
	void PlayerLoggedIn ( class APlayerReplicationInfo* PRI );
	void AllowPlayerLogin ( struct FString Options, struct FUniqueNetId PlayerID, struct FString* ErrorMessage );
	void TravelToMap ( struct FString ServerCommand );
	void OnNewGameInfoCreated ( class AGameInfo_X* Game );
	void GoToNextMap ( );
	void ClearSettings ( );
	void HandleReservationsTimeout ( );
	struct FCustomMatchSettings GetCustomMatchSettings ( );
	struct FUniqueNetId GetCustomMatchOwner ( );
	void UpdateCustomMatchOwner ( struct FUniqueNetId NewOwner );
	void SetupPrivateMatch ( struct FCustomMatchSettings Settings, struct FUniqueNetId Creator );
	void OnInit ( );
};

UClass* UOnlineGameLanServer_X::pClassPointer = NULL;

// Class ProjectX.IOnlineGameHost_X
// 0x0000 (0x003C - 0x003C)
class UIOnlineGameHost_X : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48688 ];

		return pClassPointer;
	};

	struct FUniqueNetId GetCustomMatchOwner ( );
	struct FCustomMatchSettings GetCustomMatchSettings ( );
	bool AllowSplitscreenJoin ( class APlayerReplicationInfo* PrimaryPRI, struct FUniqueNetId PlayerID, struct FString PlayerName );
	void PlayerLoggedOut ( class APlayerReplicationInfo* PRI );
	void PlayerLoggedIn ( class APlayerReplicationInfo* PRI );
	void AllowPlayerLogin ( struct FString Options, struct FUniqueNetId PlayerID, struct FString* ErrorMessage );
};

UClass* UIOnlineGameHost_X::pClassPointer = NULL;

// Class ProjectX.Explosion_X
// 0x000C (0x0208 - 0x01FC)
class AExplosion_X : public AActor
{
public:
	class UExplosionComponent_X*                       ExplosionComponent;                               		// 0x01FC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AFXActor_X*                                  FXActorArchetype;                                 		// 0x0200 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class AFXActor_X*                                  FXActor;                                          		// 0x0204 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49067 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventForceNetRelevant ( );
	void SetFXActorArchetype ( class AFXActor_X* A );
	void SpawnFX ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AExplosion_X::pClassPointer = NULL;

// Class ProjectX.SeqAct_TriggerFXActor_X
// 0x0008 (0x0104 - 0x00FC)
class USeqAct_TriggerFXActor_X : public USequenceAction
{
public:
	class UFXActorEvent_X*                             Event;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      AttachTo;                                         		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49275 ];

		return pClassPointer;
	};

};

UClass* USeqAct_TriggerFXActor_X::pClassPointer = NULL;

// Class ProjectX.GameInfo_MapProfiler_X
// 0x0000 (0x0410 - 0x0410)
class AGameInfo_MapProfiler_X : public AGameInfo_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49393 ];

		return pClassPointer;
	};

	void GenericPlayerInitialization ( class AController* C );
	class APlayerController* SpawnPlayerController ( struct FVector SpawnLocation, struct FRotator SpawnRotation );
};

UClass* AGameInfo_MapProfiler_X::pClassPointer = NULL;

// Class ProjectX.PresetMutators_X
// 0x0028 (0x0064 - 0x003C)
class UPresetMutators_X : public UObject
{
public:
	TArray< struct FCategorySettingPair >              PresetTags;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             RequiresMaps;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLockSettings : 1;                                		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     OverrideName;                                     		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49443 ];

		return pClassPointer;
	};

};

UClass* UPresetMutators_X::pClassPointer = NULL;

// Class ProjectX.PlaylistSettings_X
// 0x0044 (0x0080 - 0x003C)
class UPlaylistSettings_X : public UObject
{
public:
	struct FString                                     Title;                                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PlaylistId;                                       		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlayerCount;                                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStandard : 1;                                    		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRanked : 1;                                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSolo : 1;                                        		// 0x005C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bHidden : 1;                                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bNew : 1;                                         		// 0x005C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bApplyQuitPenalty : 1;                            		// 0x005C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	TArray< class UPresetMutators_X* >                 PresetMutators;                                   		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       MapName;                                          		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ServerCommand;                                    		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49469 ];

		return pClassPointer;
	};

};

UClass* UPlaylistSettings_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameJoinGame_X
// 0x0234 (0x0294 - 0x0060)
class UOnlineGameJoinGame_X : public UOnline_X
{
public:
	int                                                JoinCountdownTime;                                		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FailCommand;                                      		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LoadingScreenCommand;                             		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTcpMessageBeacon*                           ReservationBeacon;                                		// 0x007C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     WaitingForPlayersString;                          		// 0x0080 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReservationNotRespondingString;                   		// 0x008C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReservationFullString;                            		// 0x0098 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PartyTeamReservationFullString;                   		// 0x00A4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NoFriendJoinPrivateMatchString;                   		// 0x00B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BeaconTimedOutString;                             		// 0x00BC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotAllPlayersJoinedString;                        		// 0x00C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CanceledString;                                   		// 0x00D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SecurityKeyAcquisitionFailed;                     		// 0x00E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SecurityKeyVerificationFailed;                    		// 0x00EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SendingReservationMessage;                        		// 0x00F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     JoiningPartyLeadersGame;                          		// 0x0104 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     InvalidPassword;                                  		// 0x0110 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WrongPlaylistString;                              		// 0x011C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MatchEndedString;                                 		// 0x0128 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CrossplayDisabled;                                		// 0x0134 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ServerBeaconAddress;                              		// 0x0140 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     ServerGameAddress;                                		// 0x014C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FJoinMatchSettings                          Settings;                                         		// 0x0158 (0x0018) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     PendingFailMessage;                               		// 0x0170 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     PendingBugItMessage;                              		// 0x017C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UPlayer* >                           JoinedPlayers;                                    		// 0x0188 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x0194 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ReservationAttemptsForOneServer;                  		// 0x01F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class URPC_GenerateKeys_X* >               GenerateKeysRPCs;                                 		// 0x01F8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventJoinGameComplete__Delegate;                		// 0x0204 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0208 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventStatusUpdate__Delegate;                    		// 0x0214 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0218 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCountdownStarted__Delegate;                		// 0x0224 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0228 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCountdownEnded__Delegate;                  		// 0x0234 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0238 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventServerBeaconAddressChanged__Delegate;      		// 0x0244 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0248 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventServerReserved__Delegate;                  		// 0x0254 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0258 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                		// 0x0264 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0268 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventJoiningGame__Delegate;                     		// 0x0274 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x0278 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMaxPlayersChanged__Delegate;               		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49544 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	bool IsInTransition ( );
	void SendPing ( );
	void GotoJoinGameState ( struct FName NewStateName );
	void HandleConnectionResponse ( class UTcpConnection* Connection, class UObject* Message );
	void HandleReservationResponse ( class UTcpConnection* Connection, class UObject* Message );
	void NotifyConnectionFailed ( struct FString Message );
	void OnJoinGameComplete ( unsigned long bSuccess, struct FString FailReason, struct FString BugItReason );
	void SetServerBeaconAddress ( struct FString NewValue );
	void ClearServerData ( );
	void HandleGameInfoSpawned ( class AGameInfo_X* InGameInfo );
	bool IsJoiningGame ( );
	void CancelJoin ( );
	bool StartJoinPrivateMatch ( struct FString BeaconAddress, struct FJoinMatchSettings JoinSettings, struct FCustomMatchSettings* InSettings );
	bool StartJoin ( struct FString BeaconAddress, struct FJoinMatchSettings JoinSettings );
	void OnInit ( );
	void EventMaxPlayersChanged ( class UOnlineGameJoinGame_X* OnlineGameJoinGame, int MaxPlayers );
	void EventJoiningGame ( class UOnlineGameJoinGame_X* OnlineGameJoinGame );
	void EventPasswordRequired ( );
	void EventServerReserved ( );
	void EventServerBeaconAddressChanged ( );
	void EventCountdownEnded ( );
	void EventCountdownStarted ( );
	void EventStatusUpdate ( struct FString NewStatus );
	void EventJoinGameComplete ( unsigned long bSuccess, struct FString FailReason );
};

UClass* UOnlineGameJoinGame_X::pClassPointer = NULL;

// Class ProjectX.GFxModal_X
// 0x0048 (0x0084 - 0x003C)
class UGFxModal_X : public UObject
{
public:
	struct FString                                     ActionScriptModalName;                            		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UGFxObject*                                  GFxPopup;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   Callbacks;                                        		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     ConfirmString;                                    		// 0x0058 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FScriptDelegate                             __ClickDelegate__Delegate;                        		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49779 ];

		return pClassPointer;
	};

	void Close ( );
	void FlashAddButton ( struct FString Label );
	void FlashAddCancelButton ( struct FString LocalizedText );
	void HandleButtonClicked ( int Index );
	class UGFxModal_X* AddButton ( struct FString Label, struct FScriptDelegate OnClick );
	class UGFxModal_X* AddCancelButton ( struct FString LocalizedText, struct FScriptDelegate OnClick );
	class UGFxModal_X* SetCancellable ( unsigned long bCancellable );
	class UGFxModal_X* SetDefaultSelectedButtonIndex ( int buttonIndex );
	class UGFxModal_X* SetBody ( struct FString LocalizedText );
	class UGFxModal_X* SetTitle ( struct FString LocalizedText );
	void SetGFxObject ( class UGFxObject* Obj );
	void EventClosed ( class UGFxModal_X* Modal );
	void ClickDelegate ( class UGFxModal_X* Modal );
};

UClass* UGFxModal_X::pClassPointer = NULL;

// Class ProjectX.GRI_X
// 0x0340 (0x058C - 0x024C)
class AGRI_X : public AGameReplicationInfo
{
public:
	int                                                ReplicatedGamePlaylist;                           		// 0x024C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                ReplicatedGameMutatorIndex;                       		// 0x0250 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	struct FReplicatedReservationData                  Reservations[ 0x8 ];                              		// 0x0254 (0x02C0) [0x0000000000402020]              ( CPF_Net | CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0514 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.GRI_X.GameServerID
	unsigned long                                      bGameStarted : 1;                                 		// 0x051C (0x0004) [0x0000000000002020] [0x00000001] ( CPF_Net | CPF_Transient )
	unsigned long                                      bGameEnded : 1;                                   		// 0x051C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FString                                     MatchGUID;                                        		// 0x0520 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x052C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0530 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGameDataSelected__Delegate;                		// 0x053C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0540 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;             		// 0x054C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0550 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventServerNameChanged__Delegate;               		// 0x055C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0560 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGameStarted__Delegate;                     		// 0x056C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0570 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                		// 0x057C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0580 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49985 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void SetMatchGUID ( struct FString Id );
	void HandleMatchGUIDChanged ( class UOnlineGameDedicatedServer_X* OnlineGameDS );
	bool IsPlaylistRanked ( );
	class UGameSettingPlaylist_X* GetPlaylist ( );
	bool PlayerIsInCurrentGame ( struct FUniqueNetId MemberId );
	struct FString GetReservationDebugString ( struct FReplicatedReservationData Data );
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicated ( );
	class UOnlineGame_Base_X* GetOnlineGameBase ( );
	class UOnlineGame_X* GetOnlineGame ( );
	bool HasSelectedGameData ( );
	void SetGameStarted ( );
	void SetOfflineGameData ( struct FName PlaylistName );
	void SetGameData ( int NewPlaylistID, int MutatorIndex );
	void HandleGamePlaylistSet ( class UOnlineGameDedicatedServer_X* DedicatedServer );
	void OnReservationsUpdated ( );
	void SetReservations ( TArray< struct FReplicatedReservationData > InReservations, struct FReplicatedReservationData* StructInitializer_70587EC84232C343FB7A2CA95225903D );
	struct FReplicatedReservationData ConvertReservation ( struct FReservationData Data, struct FReplicatedReservationData* StructInitializer_5F7AB1F34899F2B001AE2DB5A3C6009C );
	void UpdateReservations ( TArray< struct FReplicatedReservationData >* MapLocal_57BFC85444E8DD0D05872CBA57A7782C );
	void eventReplicatedEvent ( struct FName VarName );
	void eventPostBeginPlay ( );
	void EventMatchGUIDChanged ( class AGRI_X* GRI );
	void EventGameStarted ( class AGRI_X* GRI );
	void EventServerNameChanged ( class AGRI_X* GRI );
	void EventReservationsUpdated ( class AGRI_X* GRI );
	void EventGameDataSelected ( int PlaylistId, int MutatorIndex );
	void EventSpawned ( class AGRI_X* GRI );
};

UClass* AGRI_X::pClassPointer = NULL;

// Class ProjectX.LanMessage_X
// 0x0008 (0x0044 - 0x003C)
class ULanMessage_X : public UOnlineMessage_X
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LanMessage_X.Nonce

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50223 ];

		return pClassPointer;
	};

	bool Broadcast ( );
	class ULanMessage_X* SetNonce ( );
};

UClass* ULanMessage_X::pClassPointer = NULL;

// Class ProjectX.LanMessage_HostQuery_X
// 0x0068 (0x00AC - 0x0044)
class ULanMessage_HostQuery_X : public ULanMessage_X
{
public:
	struct FCustomMatchSettings                        Filter;                                           		// 0x0044 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BuildID;                                          		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHost : 1;                                        		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50231 ];

		return pClassPointer;
	};

	class ULanMessage_HostQuery_X* SetHost ( unsigned long bValue );
	class ULanMessage_HostQuery_X* SetBuildID ( int InBuildID );
	class ULanMessage_HostQuery_X* SetFilter ( struct FCustomMatchSettings InFilter );
};

UClass* ULanMessage_HostQuery_X::pClassPointer = NULL;

// Class ProjectX.LanMessage_HostResponse_X
// 0x0090 (0x00D4 - 0x0044)
class ULanMessage_HostResponse_X : public ULanMessage_X
{
public:
	struct FServerResult                               Result;                                           		// 0x0044 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerID;                                         		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MetaData;                                         		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50245 ];

		return pClassPointer;
	};

	struct FString GetDebugString ( );
	class ULanMessage_HostResponse_X* SetMetaData ( struct FString InMetaData );
	class ULanMessage_HostResponse_X* SetServerID ( struct FString InServerID );
	class ULanMessage_HostResponse_X* SetResult ( struct FServerResult InResult );
};

UClass* ULanMessage_HostResponse_X::pClassPointer = NULL;

// Class ProjectX.LanMessage_Ping_X
// 0x0000 (0x0044 - 0x0044)
class ULanMessage_Ping_X : public ULanMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50261 ];

		return pClassPointer;
	};

};

UClass* ULanMessage_Ping_X::pClassPointer = NULL;

// Class ProjectX.MatchEndedMessage_X
// 0x0000 (0x003C - 0x003C)
class UMatchEndedMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50309 ];

		return pClassPointer;
	};

};

UClass* UMatchEndedMessage_X::pClassPointer = NULL;

// Class ProjectX.MaterialEffect_X
// 0x0030 (0x0098 - 0x0068)
class UMaterialEffect_X : public UMaterialEffect
{
public:
	struct FName                                       TimeParamName;                                    		// 0x0068 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInTime;                                       		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInFalloff;                                    		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutTime;                                      		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutFalloff;                                   		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveTime;                                       		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ValueMin;                                         		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ValueMax;                                         		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Stage;                                            		// 0x0090 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              StageTime;                                        		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50311 ];

		return pClassPointer;
	};

	struct FString GetActiveEffects ( );
	bool HasAnyEffectsActive ( );
	float GetMaterialParameterValue ( struct FName MaterialParamName );
	void SetMaterialParameterLinearColorValue ( struct FName MaterialParamName, struct FLinearColor NewValue );
	void SetMaterialParameterValue ( struct FName MaterialParamName, float NewValue );
	void HandleParametersChanged ( );
	void UpdateFade ( float Alpha );
	void SetStage ( unsigned char NewStage );
	bool Tick ( float dt );
	void End ( );
	void Start ( );
	void Init ( );
	bool IsInitialized ( );
};

UClass* UMaterialEffect_X::pClassPointer = NULL;

// Class ProjectX.OnlineGamePlayerTitles_X
// 0x0054 (0x00B4 - 0x0060)
class UOnlineGamePlayerTitles_X : public UOnline_X
{
public:
	float                                              PlayerTitleCacheTime;                             		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       XpTitleID;                                        		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCachedTitleData >                  TitleCache;                                       		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FCachedPlayerData >                 PlayerCache;                                      		// 0x0078 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventPlayerTitledUpdated__Delegate;             		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventTitleDataUpdated__Delegate;                		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0098 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventReceivedPlayerTitles__Delegate;            		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50474 ];

		return pClassPointer;
	};

	void HandlePlayerTitlesSynced ( class UOnlineGamePlayerTitles_X* TitlesObj, struct FUniqueNetId PlayerID );
	void SyncPlayerTitlesAndData ( struct FUniqueNetId PlayerID );
	struct FPlayerTitleData GetTitleData ( struct FName TitleId );
	struct FString GetContent ( struct FString Text, struct FString Key );
	void HandleTitleText ( class UWebRequest_X* WebRequest );
	void SyncTitleData ( struct FName TitleId, struct FScriptDelegate Callback );
	TArray< struct FName > GetPlayerTitles ( struct FUniqueNetId PlayerID );
	void HandlePlayerTitlesRPC ( class URPC_GetPlayerTitles_X* RPC );
	void SyncPlayerTitles ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback );
	void HandlePlayerPsyNetLogin ( class UOnlinePlayer_X* Player );
	void OnInit ( );
	void EventReceivedPlayerTitles ( class UOnlineGamePlayerTitles_X* Titles );
	void EventTitleDataUpdated ( class UOnlineGamePlayerTitles_X* Titles, struct FName TitleId );
	void EventPlayerTitledUpdated ( class UOnlineGamePlayerTitles_X* Titles, struct FUniqueNetId PlayerID );
};

UClass* UOnlineGamePlayerTitles_X::pClassPointer = NULL;

// Class ProjectX.OnlineConfigDispatcher_X
// 0x0004 (0x0040 - 0x003C)
class UOnlineConfigDispatcher_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50484 ];

		return pClassPointer;
	};

	struct FString GetDebugString ( class UOnlineConfig_X* Config );
	void UndoConfigObject ( class UOnlineConfig_X* Config );
	void ApplyConfigObject ( class UOnlineConfig_X* Config );
	void eventConstruct ( );
};

UClass* UOnlineConfigDispatcher_X::pClassPointer = NULL;

// Class ProjectX.WebCache_X
// 0x0020 (0x005C - 0x003C)
class UWebCache_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FCachedDataRequest >                Requests;                                         		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __CachedTextCallback__Delegate;                   		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50485 ];

		return pClassPointer;
	};

	struct FString GetRequestDebugString ( struct FCachedDataRequest Request );
	void HandleWebRequest ( class UWebRequest_X* WebRequest );
	void DownloadData ( struct FString URL, struct FString ETag );
	void HandleLoadFromCache ( class ULocalCache_X* Cache, class UCachedWebData_X* CacheObject, class UError* Error );
	void GetData ( struct FString URL, struct FScriptDelegate Callback );
	struct FString GetCachedPath ( struct FString URL );
	void CachedTextCallback ( class UCachedWebData_X* CachedData );
};

UClass* UWebCache_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameWordFilter_X
// 0x0030 (0x0090 - 0x0060)
class UOnlineGameWordFilter_X : public UOnline_X
{
public:
	TArray< struct FFilterPair >                       Filtered;                                         		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UWordFilterConfig_X*                         Config;                                           		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventCommentSanitized__Delegate;                		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventCommentError__Delegate;                    		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0084 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50490 ];

		return pClassPointer;
	};

	struct FString SanitizePhraseAndNotify ( struct FString Comment, struct FScriptDelegate Callback );
	struct FString SanitizePhrase ( struct FString Comment );
	class UError* CreateError ( unsigned char Usage, struct FWordFilterResult* Result );
	void HandleCommentSanitized ( struct FWordFilterResult* Result );
	unsigned char UpdateUsage ( unsigned char OldUsage, unsigned char NewUsage );
	struct FString InternalSanitize ( struct FString Comment, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, unsigned char Usage, struct FUniqueNetId PlayerID );
	bool IsPending ( struct FString Comment );
	struct FString SanitizeChat ( struct FString Comment, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, struct FUniqueNetId PlayerID );
	struct FString Sanitize ( struct FString Comment, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, struct FUniqueNetId PlayerID );
	void OnMainMenuOpened ( );
	void EventCommentError ( struct FString OriginalPhrase, class UError* Error );
	void EventCommentSanitized ( struct FString Original, struct FString Sanitized );
};

UClass* UOnlineGameWordFilter_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameSkillGroups_X
// 0x0040 (0x00A0 - 0x0060)
class UOnlineGameSkillGroups_X : public UOnline_X
{
public:
	TArray< struct FGroupSkillSyncRequest >            SyncRequests;                                     		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      PlayerIDMap;                                      		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPlayerGroup >                      Groups;                                           		// 0x0078 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FCachedGroupSkillRating >           GroupRatings;                                     		// 0x0084 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventGroupSkillSynced__Delegate;                		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50535 ];

		return pClassPointer;
	};

	struct FUniqueNetId __OnlineGameSkillGroups_X__ReverseMapPlayerIDs ( int PlayerIdx );
	void HandleSkillsUpdateFailed ( class URPC_X* RPCObject );
	void HandleSkillsUpdated ( class URPC_X* RPCObject );
	void SubmitMatch ( class UMatchRecorder_X* MatchRecorder );
	TArray< struct FUniqueNetId > ReverseMapPlayerIDs ( TArray< int > PlayerIndexes, TArray< struct FUniqueNetId >* MapLocal_499332D543E1F2705F20B7B08B077C92 );
	int HashPlayerIndexes ( TArray< int >* PlayerIndexes );
	int MapPlayerID ( struct FUniqueNetId PlayerID );
	TArray< int > MapPlayerIDs ( TArray< struct FUniqueNetId >* PlayerIDs, TArray< int >* MapLocal_9BDDE8DB4751D1FC7EABC7B6B7C43674, TArray< int >* SortLocal_937217404315D232C25A87830F1E0D69 );
	int GetOrCreatePlayerGroup ( TArray< struct FUniqueNetId > Players );
	int GetOrCreateGroupRating ( TArray< struct FUniqueNetId > Players, int Playlist );
	struct FTierSkillRating GetGroupSkillRating ( TArray< struct FUniqueNetId > Players, int Playlist );
	void HandleSyncComplete ( class URPC_X* RPCObject );
	void SyncGroupSkill ( TArray< struct FUniqueNetId > Players, struct FScriptDelegate Callback );
	void CacheSkill ( TArray< struct FUniqueNetId > Players, int Playlist, float Mu, float Sigma, int Tier );
	void PreCacheSkill ( TArray< struct FUniqueNetId > Players, int Playlist, float Mu, float Sigma, int Tier );
	void EventGroupSkillSynced ( class UOnlineGameSkillGroups_X* Skill, TArray< struct FUniqueNetId > PlayerIDs, class UError* Error );
};

UClass* UOnlineGameSkillGroups_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameWordFilterProcessor_X
// 0x0020 (0x0080 - 0x0060)
class UOnlineGameWordFilterProcessor_X : public UOnline_X
{
public:
	float                                              ResponseDelay;                                    		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FWordFilterRequest >                SanitizeCallbacks;                                		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;             		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50546 ];

		return pClassPointer;
	};

	void TriggerCallbacks ( int Index );
	void ProcessSanitizedDelayed ( );
	void HandleWordSanitized ( class UWebRequest_X* Request );
	bool SanitizeString ( struct FString Comment, struct FScriptDelegate SanitizeDelegate );
	void OnSanitizeStringComplete ( struct FString Original, struct FString Sanitized );
};

UClass* UOnlineGameWordFilterProcessor_X::pClassPointer = NULL;

// Class ProjectX.OnlineGamePrivileges_X
// 0x0030 (0x0090 - 0x0060)
class UOnlineGamePrivileges_X : public UOnline_X
{
public:
	TArray< class UPrivilegeCheck_X* >                 PendingChecks;                                    		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bIsCheckingPrivileges : 1;                        		// 0x006C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __EventCheckingPrivilegesChanged__Delegate;       		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPrivilegeCheckRestriction__Delegate;       		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0084 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50548 ];

		return pClassPointer;
	};

	bool IsCheckingPrivileges ( );
	void RemoveCallback ( struct FScriptDelegate Callback );
	void HandlePrivilegeCheckFinished ( class UPrivilegeCheck_X* PrivilegeCheck );
	class UPrivilegeCheck_X* CreatePrivilegeCheck ( int ControllerId, struct FScriptDelegate Callback );
	void TryToUseUGC ( int ControllerId, struct FScriptDelegate Callback );
	void TryToPlayOnline ( int ControllerId, struct FScriptDelegate Callback );
	void TryToUsePsyNet ( int ControllerId, struct FScriptDelegate Callback );
	void TryToViewLeaderboards ( int ControllerId, struct FScriptDelegate Callback );
	void TryToBrowseInternet ( int ControllerId, struct FScriptDelegate Callback );
	void EventPrivilegeCheckRestriction ( class UPrivilegeCheck_X* Check );
	void EventCheckingPrivilegesChanged ( class UOnlineGamePrivileges_X* PrivilegesObject );
};

UClass* UOnlineGamePrivileges_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameRegions_X
// 0x006C (0x00CC - 0x0060)
class UOnlineGameRegions_X : public UOnline_X
{
public:
	float                                              PingRegionsCacheTime;                             		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPingRegionsTime;                              		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                RegionIdxPingCur;                                 		// 0x0068 (0x0004) [0x0000000000000000]              
	TArray< struct FRegionData >                       RegionList;                                       		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      SortedRegions;                                    		// 0x0078 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FCachedRegionPing >                 CachedRegionPings;                                		// 0x0084 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UTcpMessageBeacon*                           Beacon;                                           		// 0x0090 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bWaitingToPingRegions : 1;                        		// 0x0094 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bPingingRegions : 1;                              		// 0x0094 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bServersPinged : 1;                               		// 0x0094 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	int                                                NumServersPinged;                                 		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventRegionsSynced__Delegate;                   		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                   		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventRegionsError__Delegate;                    		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50550 ];

		return pClassPointer;
	};

	bool Exists ( struct FString RegionName );
	void SetCachedRegionPings ( TArray< struct FCachedRegionPing >* InCachedRegionPings );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	void NotifyWhenSynced ( struct FScriptDelegate Callback );
	struct FString GetRegionsDebugString ( );
	struct FString GetFriendlyRegionsString ( );
	struct FString GetFriendlySortedRegionsString ( );
	struct FString GetSortedRegionsString ( );
	int SortRegionDelegate ( int A, int B );
	void OnAllRegionsPinged ( );
	void HandlePingMessage ( class UTcpConnection* Connection, class UObject* PingMessage );
	void PingRegionsPieceWise ( int PingCount );
	void HandleGetPingRegionListRPC ( class URPC_GetGameServerPingList_X* RPC );
	void PingRegions ( struct FScriptDelegate Callback );
	void HandleRegionsChanged ( class UObjectProvider* Op );
	void eventOnInit ( );
	void EventRegionsError ( class UOnlineGameRegions_X* RegionsObj, class UError* Error );
	void EventRegionsPinged ( class UOnlineGameRegions_X* RegionsObj );
	void EventRegionsSynced ( class UOnlineGameRegions_X* RegionsObj );
};

UClass* UOnlineGameRegions_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameInvite_X
// 0x00C4 (0x0124 - 0x0060)
class UOnlineGameInvite_X : public UOnline_X
{
public:
	struct FUniqueNetId                                FriendJoinPlayerID;                               		// 0x0060 (0x0048) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     UnableToFindFriendsGameString;                    		// 0x00A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AlreadyInSameServerString;                        		// 0x00B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FriendNotJoinable;                                		// 0x00C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteBeaconAddress;                          		// 0x00CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FName                                       ActionRequired;                                   		// 0x00D8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameTrial_X*                          Trial;                                            		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventGameInviteAccepted__Delegate;              		// 0x00E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventGameInviteComplete__Delegate;              		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventConfirmationRequired__Delegate;            		// 0x0104 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0108 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0118 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50552 ];

		return pClassPointer;
	};

	void OnGameInviteComplete ( unsigned long bSuccess, struct FString FailReason );
	void JoinGameInviteGame ( struct FJoinMatchSettings Settings );
	void OnGameInviteAccepted ( struct FString ErrorString, struct FOnlineGameSearchResult* InviteResult );
	void OnInit ( );
	void EventPasswordRequired ( );
	void EventConfirmationRequired ( struct FName ConfirmationReason );
	void EventGameInviteComplete ( unsigned long bSuccess, struct FString FailReason );
	void EventGameInviteAccepted ( );
};

UClass* UOnlineGameInvite_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameVoice_X
// 0x0010 (0x0070 - 0x0060)
class UOnlineGameVoice_X : public UOnline_X
{
public:
	struct FScriptDelegate                             __EventPlayerTalking__Delegate;                   		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0064 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50554 ];

		return pClassPointer;
	};

	unsigned char GetControllerId ( class APlayerReplicationInfo* PRI );
	int GetNumTalkers ( );
	bool IsRemotePlayerTalking ( class APlayerReplicationInfo* PRI );
	void HandlePlayerTalkingStateChange ( struct FUniqueNetId PlayerID, unsigned long bTalking );
	void UnregisterTalker ( class UOnlinePlayer_X* Player );
	void RegisterTalker ( class UOnlinePlayer_X* Player );
	void OnInit ( );
	void EventPlayerTalking ( class UOnlineGameVoice_X* SelfRef, struct FUniqueNetId PlayerID, unsigned long bTalking );
};

UClass* UOnlineGameVoice_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameCommunity_X
// 0x0004 (0x0064 - 0x0060)
class UOnlineGameCommunity_X : public UOnline_X
{
public:
	class UOnlineGameBlog_X*                           BlogSync;                                         		// 0x0060 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50556 ];

		return pClassPointer;
	};

	void OnInit ( );
};

UClass* UOnlineGameCommunity_X::pClassPointer = NULL;

// Class ProjectX.OnlineGamePopulation_X
// 0x002C (0x008C - 0x0060)
class UOnlineGamePopulation_X : public UOnline_X
{
public:
	float                                              UpdatePopulationDelay;                            		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastUpdatePopulationTime;                         		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bDownloadingPopulation : 1;                       		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                TotalPlayers;                                     		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct UOnlineGamePopulation_X_FPlaylistPopulation > Populations;                                      		// 0x0070 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventGetPlaylistPopulations__Delegate;          		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50558 ];

		return pClassPointer;
	};

	void HandleGotAllPopulationPlaylistsRPC ( class URPC_GetPopulation_X* RPC );
	void GetPlaylistPopulations ( struct FScriptDelegate NewDelegate );
	void EventGetPlaylistPopulations ( class UOnlineGamePopulation_X* PopulationsObject );
};

UClass* UOnlineGamePopulation_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameLanBrowser_X
// 0x00E0 (0x0140 - 0x0060)
class UOnlineGameLanBrowser_X : public UOnline_X
{
public:
	struct FString                                     StartSearchFailString;                            		// 0x0060 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SearchingString;                                  		// 0x006C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FoundServerString;                                		// 0x0078 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FCustomMatchSettings                        Filter;                                           		// 0x0084 (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bIsHostQuery : 1;                                 		// 0x00E4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              SearchTimeout;                                    		// 0x00E8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x00EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             __EventSearchNewResponse__Delegate;               		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchStatus__Delegate;                    		// 0x0100 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0104 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchStateChanged__Delegate;              		// 0x0110 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0114 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                  		// 0x0120 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0124 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchError__Delegate;                     		// 0x0130 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0134 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50561 ];

		return pClassPointer;
	};

	void CreateLanGame ( struct FCustomMatchSettings MatchSettings, struct FServerResult* HostResponse );
	void HandleHostResponse ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	void OnSearchComplete ( unsigned long bCancelled );
	void OnSearchError ( struct FString Message );
	bool IsSearching ( );
	void Cancel ( );
	bool StartSearch ( struct FCustomMatchSettings InFilter, unsigned long bHostQuery );
	class UOnlineGameLanBrowser_X* ClearCompleteDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* ClearNewResponseDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* ClearStateChangedDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* ClearStatusDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* ClearErrorDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* SetCompleteDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* SetNewResponseDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* SetStateChangedDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* SetStatusDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameLanBrowser_X* SetErrorDelegate ( struct FScriptDelegate Callback );
	void OnInit ( );
	void EventSearchError ( struct FString NewStatus );
	void EventSearchComplete ( unsigned long bCancelled );
	void EventSearchStateChanged ( struct FName SearchState );
	void EventSearchStatus ( struct FString NewStatus );
	void EventSearchNewResponse ( struct FServerResult* Result );
};

UClass* UOnlineGameLanBrowser_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameServerBrowser_X
// 0x00C4 (0x0124 - 0x0060)
class UOnlineGameServerBrowser_X : public UOnline_X
{
public:
	struct FString                                     PreferredRegion;                                  		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FCustomMatchSettings                        Filter;                                           		// 0x006C (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     StartSearchFailString;                            		// 0x00CC (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NoResultsFound;                                   		// 0x00D8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotLoggedInToPsynet;                              		// 0x00E4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              SearchTimeout;                                    		// 0x00F0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                  		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSearchError__Delegate;                     		// 0x0104 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0108 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventBrowserError__Delegate;                    		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0118 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50563 ];

		return pClassPointer;
	};

	void HandleGameServerList ( class URPC_CustomGameServerGet_X* RPC );
	struct FString GetFriendlyRegionString ( );
	struct FString GetRegionsString ( );
	void OnSearchComplete ( TArray< struct FServerResult >* Results );
	void OnSearchError ( struct FString Message );
	bool IsSearching ( );
	void Cancel ( );
	bool StartSearch ( struct FCustomMatchSettings InFilter, struct FString InPreferredRegion );
	class UOnlineGameServerBrowser_X* SetCompleteDelegate ( struct FScriptDelegate Callback );
	class UOnlineGameServerBrowser_X* SetErrorDelegate ( struct FScriptDelegate Callback );
	void EventBrowserError ( class UOnlineGameServerBrowser_X* Browser, class UError* Error );
	void EventSearchError ( struct FString NewStatus );
	void EventSearchComplete ( TArray< struct FServerResult >* Results );
};

UClass* UOnlineGameServerBrowser_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameMatchmakingBase_X
// 0x0054 (0x00B4 - 0x0060)
class UOnlineGameMatchmakingBase_X : public UOnline_X
{
public:
	class UCheckReservation_X*                         CheckReservation;                                 		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAsyncTask*                                  StartMatchmakingTask;                             		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     PingingRegionsString;                             		// 0x0068 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventFindGameComplete__Delegate;                		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFindGameStatus__Delegate;                  		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFindGameError__Delegate;                   		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0098 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventFindGameStateChanged__Delegate;            		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50566 ];

		return pClassPointer;
	};

	class UCheckReservation_X* CreateCheckReservation ( );
	void GotoMatchmakingState ( struct FName StateName );
	void ClearStartMatchmakingRPC ( );
	void ClearCheckReservation ( );
	void OnSearchComplete ( unsigned long bCanceled );
	void Cancel ( );
	bool IsSearching ( );
	class UOnlineGameMatchmakingBase_X* AddFindGameStateChangedDelegate ( struct FScriptDelegate NewDelegate );
	class UOnlineGameMatchmakingBase_X* AddFindGameCompleteDelegate ( struct FScriptDelegate HandleFindGameComplete );
	class UOnlineGameMatchmakingBase_X* AddFindGameErrorDelegate ( struct FScriptDelegate HandleFindGameError );
	class UOnlineGameMatchmakingBase_X* AddFindGameStatusChangedDelegate ( struct FScriptDelegate HandleFindGameStatusChanged );
	void EventFindGameStateChanged ( struct FName NewState );
	void EventFindGameError ( struct FString NewStatus );
	void EventFindGameStatus ( struct FString NewStatus );
	void EventFindGameComplete ( unsigned long bCancelled );
};

UClass* UOnlineGameMatchmakingBase_X::pClassPointer = NULL;

// Class ProjectX.OnlineGamePrivateMatch_X
// 0x00BC (0x0170 - 0x00B4)
class UOnlineGamePrivateMatch_X : public UOnlineGameMatchmakingBase_X
{
public:
	struct FString                                     PreferredRegion;                                  		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     SearchingString;                                  		// 0x00C0 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StartSearchFailString;                            		// 0x00CC (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FoundServerString;                                		// 0x00D8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AlreadyJoiningGameString;                         		// 0x00E4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TimeoutString;                                    		// 0x00F0 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FCustomMatchSettings                        Settings;                                         		// 0x00FC (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              SearchTimeout;                                    		// 0x015C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FScriptDelegate                             __EventPrivateMatchError__Delegate;               		// 0x0160 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0164 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50565 ];

		return pClassPointer;
	};

	struct FString GetFriendlyRegionString ( );
	void OnPrivateMatchError ( struct FString Message );
	bool StartSearch ( struct FString InPreferredRegion, struct FCustomMatchSettings InSettings );
	void EventPrivateMatchError ( class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error );
};

UClass* UOnlineGamePrivateMatch_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameMatchmaking_X
// 0x0098 (0x014C - 0x00B4)
class UOnlineGameMatchmaking_X : public UOnlineGameMatchmakingBase_X
{
public:
	TArray< int >                                      PreferredPlaylists;                               		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           PreferredRegions;                                 		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     SearchingString;                                  		// 0x00CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StartSearchFailString;                            		// 0x00D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FoundServerString;                                		// 0x00E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PlaylistsHaveChangedString;                       		// 0x00F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MatchmakingAttemptString;                         		// 0x00FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              MatchmakingStartTime;                             		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MatchmakingBanTime;                               		// 0x010C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIgnoreSkill : 1;                                 		// 0x0110 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              MatchmakingDisabledDuration;                      		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MatchmakingDisabledUntilTime;                     		// 0x0118 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventStartSearch__Delegate;                     		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0120 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMatchmakingError__Delegate;                		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0130 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMatchmakingCanceledOnPartySizeChanged__Delegate;		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0140 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50568 ];

		return pClassPointer;
	};

	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	bool IsMatchmakingDisabled ( );
	class UMatchmakingMetrics_X* GetMetrics ( );
	void SetSkillIgnored ( unsigned long bIgnore );
	void ToggleSkill ( );
	void ClearMatchmakingBanTime ( );
	void SetMatchmakingBanTime ( int Duration );
	void HandlePartySizeChanged ( class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize );
	void HandlePartyDestroyed ( class UOnlineGameParty_X* PartyObject );
	void OnFindGameWarning ( struct FString FailReason );
	void GetGameServerID ( );
	int SortPlaylists ( int A, int B );
	struct FString GetPartyMembersString ( );
	struct FString GetSkillsString ( );
	struct FString GetLocalizedRegionsString ( );
	struct FString GetRegionsString ( );
	struct FString GetLocalizedPlaylistsString ( );
	struct FString GetPlaylistsString ( );
	void OnExit ( );
	bool StartSearch ( TArray< int > InPreferredPlaylists, TArray< struct FString > InPreferredRegions, TArray< int >* SortLocal_1D175EE14E85DDDA81E9188743052726 );
	void OnInit ( );
	void EventMatchmakingCanceledOnPartySizeChanged ( class UOnlineGameMatchmaking_X* InMatchMaking );
	void EventMatchmakingError ( class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error );
	void EventStartSearch ( class UOnlineGameMatchmakingBase_X* InMatchMaking );
};

UClass* UOnlineGameMatchmaking_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameTrial_X
// 0x0024 (0x0084 - 0x0060)
class UOnlineGameTrial_X : public UOnline_X
{
public:
	unsigned long                                      bForceTrial : 1;                                  		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTrialEnabled : 1;                                		// 0x0060 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bPsyNetTrialDataSet : 1;                          		// 0x0060 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	int                                                MinutesRemaining;                                 		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0068 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameTrial_X.LastPlayedTime
	int                                                SecondsPlayed;                                    		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventUpdated__Delegate;                         		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50575 ];

		return pClassPointer;
	};

	void OnChanged ( );
	void HandleMapChanged ( );
	void OverrideTrialMode ( unsigned long bTrial );
	void SetUpdateTimer ( );
	void SetTime ( int InMinutesRemaining );
	void CommitTimePlayed ( );
	void AccummulateTimePlayed ( int InSecondsPlayed );
	float GetSecondsSinceLastPlayTime ( );
	void HandleGetTrialDataRPC ( class URPC_GetTrialData_X* RPC );
	void SyncTrialData ( );
	void HandlePsyNetLogin ( );
	void UpdateTrialStatus ( );
	bool IsTrialExpired ( );
	bool IsFullVersion ( );
	bool IsTrialVersion ( );
	void OnInit ( );
	void EventUpdated ( class UOnlineGameTrial_X* Trial );
};

UClass* UOnlineGameTrial_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameVersion_X
// 0x0004 (0x0064 - 0x0060)
class UOnlineGameVersion_X : public UOnline_X
{
public:
	unsigned long                                      bUpdateRequired : 1;                              		// 0x0060 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50576 ];

		return pClassPointer;
	};

	void HandleError ( class UError* Error );
	void HandleServerBrowserError ( class UOnlineGameServerBrowser_X* Browser, class UError* Error );
	void HandlePrivateMatchError ( class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error );
	void HandleRegionsError ( class UOnlineGameRegions_X* InRegions, class UError* Error );
	void HandleMatchmakingError ( class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error );
	void OnInit ( );
};

UClass* UOnlineGameVersion_X::pClassPointer = NULL;

// Class ProjectX.LanBrowser_X
// 0x0000 (0x003C - 0x003C)
class ULanBrowser_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50577 ];

		return pClassPointer;
	};

	class UAsyncTask* JoinServer ( struct FString ServerID, struct FString Options );
	class ULanSearchTask* GetServerList ( );
	void DestroyServer ( );
	class UAsyncTask* SetServerMetaData ( struct FString MetaData );
	class UAsyncTask* CreateServer ( struct FString MetaData );
	void HandleGameInfoSpawned ( class AGameInfo_X* G );
	void eventConstruct ( );
};

UClass* ULanBrowser_X::pClassPointer = NULL;

// Class ProjectX.UdpLanBrowser_X
// 0x001C (0x0058 - 0x003C)
class UUdpLanBrowser_X : public ULanBrowser_X
{
public:
	float                                              SearchTimeout;                                    		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x0040 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ULanSearchTask*                              SearchTask;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< class ULanServerRecord_X* >                SearchResults;                                    		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUdpLanServer_X*                             LocalServer;                                      		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50578 ];

		return pClassPointer;
	};

	class UAsyncTask* JoinServer ( struct FString ServerID, struct FString Options );
	void HandleSearchTimeout ( );
	void HandleHostResponse ( class UOnlineMessageComponent_X* Component, class ULanMessage_HostResponse_X* Response );
	void SearchTaskDisposed ( );
	class ULanSearchTask* GetServerList ( );
	void DestroyServer ( );
	class UAsyncTask* SetServerMetaData ( struct FString MetaData );
	class UAsyncTask* CreateServer ( struct FString MetaData );
};

UClass* UUdpLanBrowser_X::pClassPointer = NULL;

// Class ProjectX.SystemMetrics_X
// 0x0000 (0x0054 - 0x0054)
class USystemMetrics_X : public UMetricsGroup_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50581 ];

		return pClassPointer;
	};

	void Specs ( struct FOSMetrics OS, struct FCpuMetrics CPU, struct FMemoryMetrics Memory, struct FVideoCardMetrics Video, struct FNetworkAdapterMetrics Network );
	void RecordSpecs ( );
};

UClass* USystemMetrics_X::pClassPointer = NULL;

// Class ProjectX.RPC_UpdatePlayerPlaylist_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_UpdatePlayerPlaylist_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                NumLocalPlayers;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50726 ];

		return pClassPointer;
	};

	class URPC_UpdatePlayerPlaylist_X* SetNumLocalPlayers ( int InNumLocalPlayers );
	class URPC_UpdatePlayerPlaylist_X* SetPlaylist ( int InPlaylist );
};

UClass* URPC_UpdatePlayerPlaylist_X::pClassPointer = NULL;

// Class ProjectX.OnlineStaticTextSync_X
// 0x0044 (0x008C - 0x0048)
class UOnlineStaticTextSync_X : public UComponent
{
public:
	struct FString                                     URL;                                              		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CacheMinutes;                                     		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Text;                                             		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              LastUpdateTime;                                   		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bSyncing : 1;                                     		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __EventTextChanged__Delegate;                     		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventTextSynced__Delegate;                      		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50739 ];

		return pClassPointer;
	};

	void SetText ( struct FString NewText );
	void ParseBlogInfo ( );
	void HandleTextSync ( class UWebRequest_X* Request );
	void GetText ( struct FScriptDelegate Callback );
	struct FString GetDBEnvironment ( );
	void EventTextSynced ( class UOnlineStaticTextSync_X* TextSync );
	void EventTextChanged ( class UOnlineStaticTextSync_X* TextSync );
};

UClass* UOnlineStaticTextSync_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameBlog_X
// 0x0010 (0x009C - 0x008C)
class UOnlineGameBlog_X : public UOnlineStaticTextSync_X
{
public:
	class UBlogTiles_X*                                BlogTiles;                                        		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FMotDMessage >                      MotDAdditionalMessages;                           		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50770 ];

		return pClassPointer;
	};

	struct FString __OnlineGameBlog_X__GetMotD ( struct FMotDMessage M );
	void AddUniqueMotDMessage ( struct FString NewMessage, struct FName NewMessageTag );
	void AddAdditionalMotDMessage ( struct FString NewMessage, struct FName NewMessageTag, struct FMotDMessage* StructInitializer_EE8856C34D2B4684602D288094C253B3 );
	void RemoveAdditionalMessagesByTag ( struct FName MessageTag, TArray< struct FMotDMessage >* FilterLocal_4792BE194B9105A9B805AFAA2DD2A322 );
	struct FString GetMotD ( TArray< struct FString >* MapLocal_B597BADB47640482A595BCA7EDD0112A );
	void ParseBlogInfo ( );
	void Init ( );
};

UClass* UOnlineGameBlog_X::pClassPointer = NULL;

// Class ProjectX.__OnlineGameBlog_X__RemoveAdditionalMessagesByTag
// 0x0008 (0x0044 - 0x003C)
class U__OnlineGameBlog_X__RemoveAdditionalMessagesByTag : public UObject
{
public:
	struct FName                                       MessageTag;                                       		// 0x003C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50793 ];

		return pClassPointer;
	};

	bool LambdaCallback ( struct FMotDMessage M );
};

UClass* U__OnlineGameBlog_X__RemoveAdditionalMessagesByTag::pClassPointer = NULL;

// Class ProjectX.BlogTiles_X
// 0x0034 (0x0070 - 0x003C)
class UBlogTiles_X : public UObject
{
public:
	TArray< class UBlogTile_X* >                       CarouselTiles;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UBlogTile_X* >                       RLCSTiles;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UBlogTile_X* >                       CommunityTiles;                                   		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MotD;                                             		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumOfCarouselTiles;                               		// 0x006C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50800 ];

		return pClassPointer;
	};

	void __BlogTiles_X__UTCtoEpochArray ( class UBlogTile_X* BlogTile );
	void UTCtoEpochArray ( TArray< class UBlogTile_X* >* BlogTiles );
	void UTCtoEpoch ( );
};

UClass* UBlogTiles_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameDedicatedServerRegistration_X
// 0x0014 (0x0074 - 0x0060)
class UOnlineGameDedicatedServerRegistration_X : public UOnline_X
{
public:
	class UCacheTimer_X*                               HeartbeatTimer;                                   		// 0x0060 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                GameTimeTimer;                                    		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GameTimeSeconds;                                  		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URPC_X*                                      UpdateGameServerRPC;                              		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PsyNetDisconnectShutdownTime;                     		// 0x0070 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50824 ];

		return pClassPointer;
	};

	void __OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces ( class UCacheTimer_X* Timer );
	void UpdateCustomGame ( );
	struct FString GetExclusivePlatformString ( unsigned char Platform );
	void UpdateGameTime ( int TimeSeconds );
	bool ShouldShutdownWhenEmpty ( );
	void TimerShutdownWhenEmpty ( );
	void HandleUpdateServerFailed ( class URPC_UpdateGameServer_X* RPC );
	void HandleUpdateServerSucces ( class URPC_UpdateGameServer_X* RPC );
	void HandleCreateServerFailed ( class URPC_CreateGameServer_X* RPC );
	void HandleCreateServerSucces ( class URPC_CreateGameServer_X* RPC );
	void SetServerNotJoinable ( );
	void SendUpdateServerRPC ( );
	struct FString GetServerType ( );
	void SendCreateServerRPC ( );
	void SendUpdateRequest ( );
	void UpdateServer ( );
	void UnregisterServer ( );
	void RegisterServer ( );
	void OnInit ( );
};

UClass* UOnlineGameDedicatedServerRegistration_X::pClassPointer = NULL;

// Class ProjectX.OnlinePlayerPermissions_X
// 0x002C (0x0068 - 0x003C)
class UOnlinePlayerPermissions_X : public UObject
{
public:
	float                                              SyncDelay;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FUniqueNetId >                      PendingPlayerRequests;                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerPermissionsList >            PlayerPermissions;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventUpdated__Delegate;                         		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x005C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50833 ];

		return pClassPointer;
	};

	bool HasPermission ( struct FUniqueNetId PlayerID, unsigned char Permission );
	void HandlePlayerPermissions ( class URPC_GetPlayerPermissions_X* RPC );
	void SendRequest ( );
	void SyncPermissions ( struct FUniqueNetId PlayerID );
	void EventUpdated ( class UOnlinePlayerPermissions_X* Permissions );
};

UClass* UOnlinePlayerPermissions_X::pClassPointer = NULL;

// Class ProjectX.RPC_CheckReplacementDedicatedServer_X
// 0x0028 (0x00C4 - 0x009C)
class URPC_CheckReplacementDedicatedServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x009C (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CheckReplacementDedicatedServer_X.ServerID
	unsigned long                                      bFoundReplacement : 1;                            		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FCheckReplacementDedicatedServerData        Server;                                           		// 0x00A8 (0x001C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50932 ];

		return pClassPointer;
	};

	struct FString GetServerAddress ( );
	class URPC_CheckReplacementDedicatedServer_X* SetServerID ( );
};

UClass* URPC_CheckReplacementDedicatedServer_X::pClassPointer = NULL;

// Class ProjectX.RPC_AddQuitter_X
// 0x0054 (0x00F0 - 0x009C)
class URPC_AddQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x009C (0x0048) [0x0000000000000000]              
	struct FString                                     Reason;                                           		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50946 ];

		return pClassPointer;
	};

	class URPC_AddQuitter_X* SetReason ( struct FString InReason );
	class URPC_AddQuitter_X* SetPlayerID ( struct FUniqueNetId InPlayerId );
};

UClass* URPC_AddQuitter_X::pClassPointer = NULL;

// Class ProjectX.RPC_RemoveQuitter_X
// 0x0048 (0x00E4 - 0x009C)
class URPC_RemoveQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x009C (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50953 ];

		return pClassPointer;
	};

	class URPC_RemoveQuitter_X* SetPlayerID ( struct FUniqueNetId InPlayerId );
};

UClass* URPC_RemoveQuitter_X::pClassPointer = NULL;

// Class ProjectX.ClanforgeReservation_X
// 0x0048 (0x0084 - 0x003C)
class UClanforgeReservation_X : public UObject
{
public:
	struct FString                                     ReserveURLs[ 0x3 ];                               		// 0x003C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ReserveState;                                     		// 0x0060 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	TArray< float >                                    RetryDelays;                                      		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SendFailures;                                     		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UWebRequest_X* >                     QueuedRequests;                                   		// 0x0074 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UWebRequest_X*                               PendingRequest;                                   		// 0x0080 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51004 ];

		return pClassPointer;
	};

	void HandleRetry ( );
	void Retry ( );
	void HandleSendComplete ( class UWebRequest_X* Request );
	void ProcessNextRequest ( );
	void Send ( struct FString URL );
	void SetReserveState ( unsigned char NewState );
	void HandleActivate ( class UOnlineGameDedicatedServer_X* Server );
	void HandleInactive ( class UOnlineGameDedicatedServer_X* Server );
	void Init ( class UOnlineGameDedicatedServer_X* Server, struct FString ReserveURL, struct FString UnreserveURL );
};

UClass* UClanforgeReservation_X::pClassPointer = NULL;

// Class ProjectX.RPC_DeactivateGameServer_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_DeactivateGameServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x009C (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_DeactivateGameServer_X.ServerID

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51022 ];

		return pClassPointer;
	};

	class URPC_DeactivateGameServer_X* SetServerID ( );
};

UClass* URPC_DeactivateGameServer_X::pClassPointer = NULL;

// Class ProjectX.CacheTimer_X
// 0x001C (0x0064 - 0x0048)
class UCacheTimer_X : public UComponent
{
public:
	float                                              CacheTimeoutSeconds;                              		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CacheExpireTime;                                  		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnabled : 1;                                     		// 0x0050 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __EventExpired__Delegate;                         		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51025 ];

		return pClassPointer;
	};

	float GetRandomCacheTimeoutTime ( );
	void OnExpired ( );
	void OnDisabled ( );
	void OnEnabled ( );
	void SetEnabled ( unsigned long bEnableExpiration );
	void Reset ( );
	bool IsExpired ( );
	void EventExpired ( class UCacheTimer_X* Timer );
};

UClass* UCacheTimer_X::pClassPointer = NULL;

// Class ProjectX.RPC_SetServerNotJoinable_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_SetServerNotJoinable_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x009C (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_SetServerNotJoinable_X.ServerID

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51031 ];

		return pClassPointer;
	};

	class URPC_SetServerNotJoinable_X* SetServerID ( );
};

UClass* URPC_SetServerNotJoinable_X::pClassPointer = NULL;

// Class ProjectX.RPC_UpdateCustomGameServer_X
// 0x0020 (0x00BC - 0x009C)
class URPC_UpdateCustomGameServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x009C (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_UpdateCustomGameServer_X.ServerID
	struct FString                                     ServerName;                                       		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51045 ];

		return pClassPointer;
	};

	class URPC_UpdateCustomGameServer_X* SetPassword ( struct FString InPassword );
	class URPC_UpdateCustomGameServer_X* SetServerName ( struct FString InServerName );
	class URPC_UpdateCustomGameServer_X* SetServerID ( );
};

UClass* URPC_UpdateCustomGameServer_X::pClassPointer = NULL;

// Class ProjectX.RPC_UpdateGameServer_X
// 0x0044 (0x00E0 - 0x009C)
class URPC_UpdateGameServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x009C (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_UpdateGameServer_X.ServerID
	int                                                Playlist;                                         		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                MaxPlayers;                                       		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                NumPlayersTeam1;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                NumPlayersTeam2;                                  		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                ReservationsTeam1;                                		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                ReservationsTeam2;                                		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                AvgSkill;                                         		// 0x00BC (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPostGame : 1;                                  		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TimeRemaining;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	struct FString                                     ExclusivePlatform;                                		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           PlayersPlatforms;                                 		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51059 ];

		return pClassPointer;
	};

	class URPC_UpdateGameServer_X* SetPlayersPlatforms ( TArray< struct FString > InPlayersPlatforms );
	class URPC_UpdateGameServer_X* SetExclusivePlatform ( struct FString InExclusivePlatform );
	class URPC_UpdateGameServer_X* SetTimeRemaining ( int InTimeRemaining );
	class URPC_UpdateGameServer_X* SetIsPostGame ( unsigned long bInIsPostGame );
	class URPC_UpdateGameServer_X* SetAvgSkill ( int InAvgSkill );
	class URPC_UpdateGameServer_X* SetReservationsTeam2 ( int InReservationsTeam2 );
	class URPC_UpdateGameServer_X* SetReservationsTeam1 ( int InReservationsTeam1 );
	class URPC_UpdateGameServer_X* SetNumPlayersTeam2 ( int InNumPlayersTeam2 );
	class URPC_UpdateGameServer_X* SetNumPlayersTeam1 ( int InNumPlayersTeam1 );
	class URPC_UpdateGameServer_X* SetMaxPlayers ( int InMaxPlayers );
	class URPC_UpdateGameServer_X* SetPlaylist ( int InPlaylist );
	class URPC_UpdateGameServer_X* SetServerID ( );
};

UClass* URPC_UpdateGameServer_X::pClassPointer = NULL;

// Class ProjectX.RPC_CreateGameServer_X
// 0x004C (0x00E8 - 0x009C)
class URPC_CreateGameServer_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                       		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MachineId;                                        		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FString                                     IP;                                               		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Region;                                           		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BuildID;                                          		// 0x00C4 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerType;                                       		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00D4 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CreateGameServer_X.ServerID
	struct FString                                     Host;                                             		// 0x00DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51064 ];

		return pClassPointer;
	};

	class URPC_CreateGameServer_X* SetBuildID ( int InBuildID );
	class URPC_CreateGameServer_X* SetRegion ( struct FString InRegion );
	class URPC_CreateGameServer_X* SetIP ( struct FString InIP );
	class URPC_CreateGameServer_X* SetMachineID ( int InMachineID );
	class URPC_CreateGameServer_X* SetServerType ( struct FString InServerType );
	class URPC_CreateGameServer_X* SetServerName ( struct FString InServerName );
};

UClass* URPC_CreateGameServer_X::pClassPointer = NULL;

// Class ProjectX.PartyErrors_X
// 0x0064 (0x00B8 - 0x0054)
class UPartyErrors_X : public UErrorList
{
public:
	class UErrorType*                                  CreatePartyFailed;                                		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CreatePartyFailedTeamFull;                        		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CreatePlayerFailedPartyFull;                      		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvitePlayerToPartyFailedPartyFull;               		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedPartyFull;                         		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedPartyMatchmaking;                  		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedPartyInGame;                       		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  KickedFromParty;                                  		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyDestroyedConnectionError;                    		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyDestroyedSignedOut;                          		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailed;                                  		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedNotAllowed;                        		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  JoinPartyFailedNotJoinable;                       		// 0x0084 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyBuildID;                                     		// 0x0088 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyNotFound;                                    		// 0x008C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UserNotOwner;                                     		// 0x0090 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyIsFull;                                      		// 0x0094 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CannotAddToParty;                                 		// 0x0098 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  UserListInvalid;                                  		// 0x009C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  InvalidOwner;                                     		// 0x00A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  ChatDisabled;                                     		// 0x00A4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MissingOrExpiredInvite;                           		// 0x00A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  MemberNotFound;                                   		// 0x00AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  PartyIdConflict;                                  		// 0x00B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UErrorType*                                  CannotKickSelf;                                   		// 0x00B4 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51236 ];

		return pClassPointer;
	};

};

UClass* UPartyErrors_X::pClassPointer = NULL;

// Class ProjectX.ReservationsTravelingMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsTravelingMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51376 ];

		return pClassPointer;
	};

};

UClass* UReservationsTravelingMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsFullMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsFullMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51377 ];

		return pClassPointer;
	};

};

UClass* UReservationsFullMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsTeamFullMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsTeamFullMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51378 ];

		return pClassPointer;
	};

};

UClass* UReservationsTeamFullMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsWaitingMessage_X
// 0x0004 (0x0040 - 0x003C)
class UReservationsWaitingMessage_X : public UBeaconMessage_X
{
public:
	int                                                WaitingForPlayerCount;                            		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51379 ];

		return pClassPointer;
	};

	class UReservationsWaitingMessage_X* SetWaitingForPlayers ( int WaitingReserved, int WaitingMax );
};

UClass* UReservationsWaitingMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsReadyMessage_X
// 0x0018 (0x0054 - 0x003C)
class UReservationsReadyMessage_X : public UBeaconMessage_X
{
public:
	struct FString                                     ServerAddress;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ProductIDs;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51380 ];

		return pClassPointer;
	};

	class UReservationsReadyMessage_X* SetProductIDs ( TArray< int > InProductIDs );
	class UReservationsReadyMessage_X* SetServerAddress ( struct FString InAddress );
};

UClass* UReservationsReadyMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsTimedOutMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsTimedOutMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51381 ];

		return pClassPointer;
	};

};

UClass* UReservationsTimedOutMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsPrivateMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsPrivateMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51382 ];

		return pClassPointer;
	};

};

UClass* UReservationsPrivateMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsPasswordMessage_X
// 0x0001 (0x003D - 0x003C)
class UReservationsPasswordMessage_X : public UBeaconMessage_X
{
public:
	unsigned char                                      Reason;                                           		// 0x003C (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51383 ];

		return pClassPointer;
	};

	class UReservationsPasswordMessage_X* SetReason ( unsigned char InReason );
};

UClass* UReservationsPasswordMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsWrongPlaylistMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsWrongPlaylistMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51384 ];

		return pClassPointer;
	};

};

UClass* UReservationsWrongPlaylistMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsKeysFailedMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsKeysFailedMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51385 ];

		return pClassPointer;
	};

};

UClass* UReservationsKeysFailedMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationCrossplayDisabledMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationCrossplayDisabledMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51386 ];

		return pClassPointer;
	};

};

UClass* UReservationCrossplayDisabledMessage_X::pClassPointer = NULL;

// Class ProjectX.ReservationsMaxPlayersMessage_X
// 0x0004 (0x0040 - 0x003C)
class UReservationsMaxPlayersMessage_X : public UBeaconMessage_X
{
public:
	int                                                MaxPlayerCount;                                   		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51387 ];

		return pClassPointer;
	};

	class UReservationsMaxPlayersMessage_X* SetMaxPlayerCount ( int inMaxPlayerCount );
};

UClass* UReservationsMaxPlayersMessage_X::pClassPointer = NULL;

// Class ProjectX.PingMessage_X
// 0x0004 (0x0040 - 0x003C)
class UPingMessage_X : public UBeaconMessage_X
{
public:
	unsigned long                                      bIsResponse : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51414 ];

		return pClassPointer;
	};

	class UPingMessage_X* SetIsResponse ( );
};

UClass* UPingMessage_X::pClassPointer = NULL;

// Class ProjectX.RPC_KeysBase_X
// 0x0044 (0x00E0 - 0x009C)
class URPC_KeysBase_X : public URPC_X
{
public:
	struct FString                                     ServerHost;                                       		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ServerPort;                                       		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FString                                     Key;                                              		// 0x00AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     IV;                                               		// 0x00B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     HMACKey;                                          		// 0x00C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     SessionId;                                        		// 0x00D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bPrimaryPlayer : 1;                               		// 0x00DC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51445 ];

		return pClassPointer;
	};

	class URPC_KeysBase_X* SetPrimaryPlayer ( );
	class URPC_KeysBase_X* SetServerAddress ( struct FString ServerAddress );
};

UClass* URPC_KeysBase_X::pClassPointer = NULL;

// Class ProjectX.RPC_GenerateKeys_X
// 0x0000 (0x00E0 - 0x00E0)
class URPC_GenerateKeys_X : public URPC_KeysBase_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51450 ];

		return pClassPointer;
	};

};

UClass* URPC_GenerateKeys_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameLanReservations_X
// 0x0020 (0x0080 - 0x0060)
class UOnlineGameLanReservations_X : public UOnline_X
{
public:
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x0060 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTcpMessageBeacon*                           Beacon;                                           		// 0x0064 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ReservationTimeout;                               		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bServerTraveling : 1;                             		// 0x006C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __EventReservationsTimeout__Delegate;             		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51662 ];

		return pClassPointer;
	};

	void HackForceNotServerTravelling ( );
	void SetServerTraveling ( unsigned long bTraveling );
	void OnNewGameInfoCreated ( class AGameInfo_X* Game );
	int GetNumPlayers ( );
	void AllowPlayerLogin ( struct FString Options, struct FUniqueNetId PlayerID, struct FString* ErrorMessage );
	void PlayerLoggedOut ( class APlayerReplicationInfo* PRI );
	void PlayerLoggedIn ( class APlayerReplicationInfo* PRI );
	void Reset ( );
	void CheckReservationTimeout ( );
	bool HandlePublicReservation ( class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message );
	void HandlePublicReservationMessage ( class UTcpConnection* Connection, class UObject* Message );
	void StartReservationTimeout ( );
	bool HandlePrivateReservation ( class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message );
	void HandlePrivateReservationMessage ( class UTcpConnection* Connection, class UObject* Message );
	void HandlePingMessage ( class UTcpConnection* Connection, class UObject* Message );
	void HandleLanQueryMessage ( class UOnlineMessageComponent_X* Component, class UObject* Message );
	void OnInit ( );
	void EventReservationsTimeout ( );
};

UClass* UOnlineGameLanReservations_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetLeaderboardValueForUserBase_X
// 0x0060 (0x00FC - 0x009C)
class URPC_GetLeaderboardValueForUserBase_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x009C (0x0048) [0x0000000000000000]              
	struct FString                                     LeaderboardId;                                    		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bHasSkill : 1;                                    		// 0x00F0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bHasValue : 1;                                    		// 0x00F0 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	int                                                Value;                                            		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MMR;                                              		// 0x00F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51839 ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardValueForUserBase_X* SetPlayerID ( struct FUniqueNetId InPlayerId );
};

UClass* URPC_GetLeaderboardValueForUserBase_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X
// 0x0004 (0x0100 - 0x00FC)
class URPC_GetSkillLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	int                                                Playlist;                                         		// 0x00FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51838 ];

		return pClassPointer;
	};

	class URPC_GetSkillLeaderboardValueForUser_X* SetPlaylist ( int InPlaylist );
};

UClass* URPC_GetSkillLeaderboardValueForUser_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetLeaderboardValueForUser_X
// 0x000C (0x0108 - 0x00FC)
class URPC_GetLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51844 ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardValueForUser_X* SetStat ( struct FString InStat );
};

UClass* URPC_GetLeaderboardValueForUser_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetLeaderboardBase_X
// 0x001C (0x00B8 - 0x009C)
class URPC_GetLeaderboardBase_X : public URPC_X
{
public:
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     LeaderboardId;                                    		// 0x00A0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FGetLeaderboardPlatformBaseData >   Platforms;                                        		// 0x00AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51876 ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardBase_X* SetDisableCrossPlay ( unsigned long InDisableCrossPlay );
};

UClass* URPC_GetLeaderboardBase_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetSkillLeaderboard_X
// 0x0004 (0x00BC - 0x00B8)
class URPC_GetSkillLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	int                                                Playlist;                                         		// 0x00B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51875 ];

		return pClassPointer;
	};

	class URPC_GetSkillLeaderboard_X* SetPlaylist ( int InPlaylist );
};

UClass* URPC_GetSkillLeaderboard_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetLeaderboard_X
// 0x000C (0x00C4 - 0x00B8)
class URPC_GetLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51881 ];

		return pClassPointer;
	};

	class URPC_GetLeaderboard_X* SetStat ( struct FString InStat );
};

UClass* URPC_GetLeaderboard_X::pClassPointer = NULL;

// Class ProjectX.OnlinePlayerFriends_X
// 0x009C (0x00FC - 0x0060)
class UOnlinePlayerFriends_X : public UOnline_X
{
public:
	TArray< struct FOnlineFriend >                     CachedFriends;                                    		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventFriendsListChanged__Delegate;              		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetFriendRequestSentSuccess__Delegate;  		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPlayerSearch__Delegate;              		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPendingFriendRequests__Delegate;     		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConReceivedFriendChatMessage__Delegate; 		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConReceivedFriendAcceptedRequest__Delegate;		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConReceivedFriendFriendStatusUpdate__Delegate;		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x00D0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConReceivedIncomingFriendRequest__Delegate;		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x00E0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventPerConReceivedPlayerUnfriended__Delegate;  		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x00F0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51908 ];

		return pClassPointer;
	};

	void __OnlinePlayerFriends_X__OnInit ( class UPsyNetService_PlayerUnfriended_X* N );
	void __OnlinePlayerFriends_X__OnInit ( class UPsyNetService_IncomingFriendRequest_X* N );
	void __OnlinePlayerFriends_X__OnInit ( class UPsyNetService_FriendStatusUpdate_X* N );
	void __OnlinePlayerFriends_X__OnInit ( class UPsyNetService_FriendAcceptedRequest_X* N );
	void __OnlinePlayerFriends_X__OnInit ( class UPsyNetService_FriendChatReceived_X* N );
	void SendChatMessage ( struct FString InMessage, struct FUniqueNetId Recipient );
	void ShowPlayerCard ( struct FUniqueNetId FriendId );
	void SetRichPresence ( unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString );
	void RemoveFriend ( struct FUniqueNetId FriendId );
	void DeclineFriendRequest ( struct FUniqueNetId FriendId );
	void AcceptFriendRequest ( struct FUniqueNetId FriendId );
	class UAsyncTask* AddFriend ( struct FUniqueNetId FriendId, struct FScriptDelegate Callback );
	struct FString GetFriendPresence ( struct FOnlineFriend Friend );
	bool IsFriendJoinable ( struct FUniqueNetId FriendId );
	struct FString GetFriendName ( struct FUniqueNetId FriendId );
	bool IsFriend ( struct FUniqueNetId FriendId );
	void HandleFriendsChange ( );
	void HandleFriendPresenceChange ( struct FUniqueNetId FriendId );
	void MergeFriendLists ( TArray< struct FOnlineFriend > OtherList, TArray< struct FOnlineFriend >* MainList );
	void GetFriendsFromOnlineSub ( );
	void UpdateFriendsList ( struct FScriptDelegate HandleFriendsListChanged );
	void RemoveFriendsListChangedDelegate ( struct FScriptDelegate HandleFriendsListChanged );
	void AddFriendsListChangedDelegate ( struct FScriptDelegate HandleFriendsListChanged );
	void HandleDownloadFriendsComplete ( unsigned long bWasSuccessful );
	void DownloadFriendsList ( );
	void HandleLoginStatusChanged ( class UOnlinePlayer_X* Player );
	void OnInit ( );
	void EventPerConReceivedPlayerUnfriended ( struct FUniqueNetId SenderId );
	void EventPerConReceivedIncomingFriendRequest ( struct FOnlineFriend FriendData );
	void EventPerConReceivedFriendFriendStatusUpdate ( struct FOnlineFriend FriendData );
	void EventPerConReceivedFriendAcceptedRequest ( struct FOnlineFriend FriendData );
	void EventPerConReceivedFriendChatMessage ( struct FString InMessage, struct FUniqueNetId SenderId );
	void EventPsyNetPendingFriendRequests ( TArray< struct FOnlineFriend > FriendData );
	void EventPsyNetPlayerSearch ( TArray< struct FOnlineFriend > FriendData, struct FString SearchString );
	void EventPsyNetFriendRequestSentSuccess ( struct FUniqueNetId FriendId );
	void EventFriendsListChanged ( class UOnlinePlayerFriends_X* FriendsRef, class UError* Error );
};

UClass* UOnlinePlayerFriends_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X
// 0x0024 (0x00C0 - 0x009C)
class URPC_GetLeaderboardRankForUsersBase_X : public URPC_X
{
public:
	TArray< struct FUniqueNetId >                      PlayerIDs;                                        		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LeaderboardId;                                    		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FGetLeaderboardRankForUserData >    Players;                                          		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51915 ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardRankForUsersBase_X* SetPlayerIDs ( TArray< struct FUniqueNetId > InPlayerIDs );
};

UClass* URPC_GetLeaderboardRankForUsersBase_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X
// 0x0004 (0x00C4 - 0x00C0)
class URPC_GetSkillLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	int                                                Playlist;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51914 ];

		return pClassPointer;
	};

	class URPC_GetSkillLeaderboardRankForUsers_X* SetPlaylist ( int InPlaylist );
};

UClass* URPC_GetSkillLeaderboardRankForUsers_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetLeaderboardRankForUsers_X
// 0x000C (0x00CC - 0x00C0)
class URPC_GetLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51920 ];

		return pClassPointer;
	};

	class URPC_GetLeaderboardRankForUsers_X* SetStat ( struct FString InStat );
};

UClass* URPC_GetLeaderboardRankForUsers_X::pClassPointer = NULL;

// Class ProjectX.CheckReservation_X
// 0x0044 (0x0080 - 0x003C)
class UCheckReservation_X : public UObject
{
public:
	float                                              StartDelay;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rate;                                             		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeartbeatDelay;                                   		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastMatchmakingHeartbeatTime;                     		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             CheckReservationDelegate;                         		// 0x004C (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UAsyncTask*                                  CheckReservationTask;                             		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             FoundReservationCallback;                         		// 0x0060 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0064 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStartSearch__Delegate;                        		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52031 ];

		return pClassPointer;
	};

	void HandleReservationNotFound ( );
	void HandleFoundReservation ( struct FCheckReservationData Reservation );
	void SendRequest ( );
	void Cancel ( );
	bool IsSearching ( );
	void StartSearch ( struct FScriptDelegate Callback, struct FScriptDelegate ReservationDelegate );
	class UCheckReservation_X* NotifyOnStartSearch ( struct FScriptDelegate Callback );
	void OnStartSearch ( class UAsyncTask* Task );
};

UClass* UCheckReservation_X::pClassPointer = NULL;

// Class ProjectX.MatchmakingMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UMatchmakingMetrics_X : public UMetricsGroup_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52107 ];

		return pClassPointer;
	};

	void RankedReconnect ( struct FString Address );
	void End ( );
	void FoundServer ( struct FString Address, struct FString ServerName, int Playlist );
	void RecordFoundServer ( struct FCheckReservationData* Reservation );
	void Cancel ( );
	void ErrorID ( int Error );
	void ErrorUnknown ( struct FString Message );
	void RecordError ( struct FString Error );
	void Start ( TArray< struct FString > Regions, TArray< int > Playlists, unsigned long bDisableCrossPlay );
};

UClass* UMatchmakingMetrics_X::pClassPointer = NULL;

// Class ProjectX.RPC_PlayerCancelMatchmaking_X
// 0x0000 (0x009C - 0x009C)
class URPC_PlayerCancelMatchmaking_X : public URPC_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52126 ];

		return pClassPointer;
	};

};

UClass* URPC_PlayerCancelMatchmaking_X::pClassPointer = NULL;

// Class ProjectX.RPC_StartMatchmaking_X
// 0x0044 (0x00E0 - 0x009C)
class URPC_StartMatchmaking_X : public URPC_X
{
public:
	TArray< struct FString >                           Regions;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Playlists;                                        		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SecondsSearching;                                 		// 0x00B4 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B8 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_StartMatchmaking_X.CurrentServerId
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     PartyID;                                          		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      PartyMembers;                                     		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BannedSecondsRemaining;                           		// 0x00DC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52146 ];

		return pClassPointer;
	};

	class URPC_StartMatchmaking_X* SetIgnoreSkill ( unsigned long bInIgnoreSkill );
	class URPC_StartMatchmaking_X* SetPartyId ( struct FString InPartyId );
	class URPC_StartMatchmaking_X* SetPartyMembers ( TArray< struct FUniqueNetId > InPartyMembers );
	class URPC_StartMatchmaking_X* SetDisableCrossPlay ( unsigned long bInDisableCrossplay );
	class URPC_StartMatchmaking_X* SetCurrentServerID ( );
	class URPC_StartMatchmaking_X* SetSecondsSearching ( int InSecondsSearching );
	class URPC_StartMatchmaking_X* SetPlaylists ( TArray< int > InPlaylists );
	class URPC_StartMatchmaking_X* SetRegions ( TArray< struct FString > InRegions );
};

UClass* URPC_StartMatchmaking_X::pClassPointer = NULL;

// Class ProjectX.Parties_X
// 0x018C (0x01C8 - 0x003C)
class UParties_X : public UObject
{
public:
	struct FActiveLobbyInfo                            ActiveLobby;                                      		// 0x003C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                PartyLeaderID;                                    		// 0x0060 (0x0048) [0x0000000000000000]              
	class UPsyNet_X*                                   PsyNet;                                           		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UOnlineGameParty_X*                          OnlineGameParty;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	class UPartyMessageQueue_X*                        MessageQueue;                                     		// 0x00B0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x00B4 (0x0004) [0x0000000000000000]              
	class UPsyNetChannel_X*                            PsyNetChannel;                                    		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x00BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bRejoiningParty : 1;                              		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SecondToWaitForPerConReconnect;                   		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EventShowInviteUI__Delegate;                    		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyError__Delegate;                         		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;                		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x010C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                  		// 0x0118 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x011C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                		// 0x0128 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x012C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;          		// 0x0138 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x013C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;            		// 0x0148 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x014C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                		// 0x0158 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x015C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;             		// 0x0168 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x016C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                      		// 0x0178 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x017C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                        		// 0x0188 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x018C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLobbyInvitePending__Delegate;              		// 0x0198 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x019C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                     		// 0x01A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x01AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;              		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x01BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52166 ];

		return pClassPointer;
	};

	struct FString GetPsyNetPartyID ( );
	struct FUniqueNetId FindPartyLeaderID ( TArray< struct FPsyNetPartyMember >* Members, struct FUniqueNetId* StructInitializer_D0F36BCB411836DE1620EBA197F8EC9B );
	void HandleOwnerChanged ( class UPsyNetService_PartyOwnerChanged_X* Notification );
	void HandleSystemNotification ( class UPsyNetService_PartySystem_X* Notifications );
	void HandleUserKicked ( class UPsyNetService_PartyUserKicked_X* Notification );
	void HandleUserDisconnected ( class UPsyNetService_PartyUserDisconnected_X* Notification );
	void HandleUserLeft ( class UPsyNetService_PartyUserLeft_X* Notification );
	void HandleUserJoined ( class UPsyNetService_PartyUserJoined_X* Notification );
	void HandleMemberStatusUpdate ( struct FUniqueNetId MemberUID, struct FString Status );
	void HandleUserInvitedResponse ( struct FUniqueLobbyId LobbyId, struct FUniqueNetId ForUserId, unsigned long bAccepted );
	void HandleUserInvited ( class UPsyNetService_PartyUserInvited_X* Notifications );
	void SetRejoiningParty ( unsigned long bRejoining );
	void HandleChannelClosed ( class UPsyNetChannel_X* InChannel );
	class UPsyNetChannel_X* CreatePsyNetChannel ( struct FString PartyID );
	void SetPsyNetSubscriptions ( class UPsyNetServiceSubscriptions_X* InSubscriptions );
	void SetPsyNetChannel ( class UPsyNetChannel_X* InChannel );
	void TimeoutPerconReconnect ( );
	void SetPsyNetConnection ( class UPsyNetConnection_X* InConnection );
	void ClearLobbyData ( struct FActiveLobbyInfo* StructInitializer_DE2C1F30492152781920D0B9F8B17243 );
	void DestroyLobby ( unsigned char Reason );
	void HandlePerConDisconnected ( class UPsyNetConnection_X* Connection );
	void HandlePerConConnected ( class UPsyNetConnection_X* Connection );
	void HandlePartyInfoFail ( class URPC_X* RPC );
	void HandlePartyInfoSuccess ( class URPC_PartyInfo_X* RPC_PartyInfo );
	void GetPartyInfo ( );
	class UOnlinePlayer_X* GetPrimaryPlayer ( );
	void OnExit ( );
	bool IsInLobby ( );
	void eventConstruct ( );
	struct FUniqueLobbyId CreatePartyID ( struct FString S );
	void ClearHostStartPlayTogetherDelegate ( struct FScriptDelegate InDelegate );
	void AddHostStartPlayTogetherDelegate ( struct FScriptDelegate InDelegate );
	void OnHostStartPlayTogether ( unsigned char LocalUserNum );
	int FindMemberId ( struct FLobbyMember* MemberData );
	int PlayerIdToMemberId ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, int* MemberIndex );
	struct FUniqueNetId MemberIdToPlayerId ( int MemberId, struct FUniqueLobbyId* LobbyId, int* MemberIndex );
	bool KickPlayer ( unsigned char Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId );
	bool InviteToLobby ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID );
	bool InviteToActiveLobby ( struct FUniqueNetId* PlayerID );
	void HandleLobbyOwnerChangeFailed ( class URPC_PartyChangeOwner_X* RPC_PartyChangeOwner );
	void HandleLobbyOwnerChangeSuccess ( class URPC_PartyChangeOwner_X* RpcPartyChangeOwner );
	bool SetLobbyOwner ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwnerId );
	bool SetLobbyLock ( unsigned long bLocked, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyType ( unsigned char Type, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyServer ( struct FString ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID );
	bool RemoveLobbySetting ( struct FString Key, struct FUniqueLobbyId* LobbyId );
	bool SetLobbySetting ( struct FString Key, struct FString Value, struct FUniqueLobbyId* LobbyId );
	bool GetLobbyAdmin ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId );
	bool SendLobbyBinaryData ( struct FUniqueLobbyId* LobbyId, TArray< unsigned char >* Data );
	bool SendLobbyMessage ( struct FString Message, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyUserSetting ( struct FString Key, struct FString Value, struct FUniqueLobbyId* LobbyId );
	bool LeaveLobby ( struct FUniqueLobbyId* LobbyId );
	void RemoveLobbyMember ( struct FUniqueNetId PlayerUID );
	void AddLobbyMember ( struct FUniqueNetId PlayerUID, struct FString UserName );
	void HandleLobbyJoinFailed ( class URPC_PartyJoin_X* RpcPartyJoin );
	void HandleLobbyJoinSucceeded ( class URPC_PartyJoin_X* RpcPartyJoin );
	bool JoinLobby ( int LocalPlayerNum, struct FUniqueLobbyId* LobbyId );
	bool UpdateFoundLobbies ( struct FUniqueLobbyId LobbyId );
	int FindMemberIndex ( struct FUniqueNetId MemberId );
	bool FindLobbies ( int MaxResults, TArray< struct FLobbyFilter > Filters, TArray< struct FLobbySortFilter > SortFilters, int MinSlots, unsigned char Distance );
	void HandleLobbyCreateFailed ( class URPC_PartyCreate_X* RpcPartyCreate );
	void HandleLobbyCreated ( class URPC_PartyCreate_X* RpcPartyCreate );
	bool CreateLobby ( int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray< struct FLobbyMetaData > InitialSettings );
	void ClearLobbyDestroyedDelegate ( struct FScriptDelegate LobbyDestroyedDelegate );
	void AddLobbyDestroyedDelegate ( struct FScriptDelegate LobbyDestroyedDelegate );
	void OnLobbyDestroyed ( unsigned char Reason, struct FUniqueLobbyId* LobbyId );
	void RemoveLocalPlayerFromSession ( struct FUniqueNetId* PartyMember );
	void AddLocalPartyMemberToSession ( struct FUniqueNetId* NewPartyMember );
	bool GetLobbyMembers ( struct FUniqueLobbyId* LobbyId, TArray< struct FLobbyMember >* Members );
	void PlayTogether_Invite ( struct FString InviteMessage, struct FUniqueLobbyId* LobbyId );
	void EventLobbyInvitePending ( struct FUniqueLobbyId LobbyId, struct FUniqueNetId FromUserId, struct FString FromUserName );
	void ClearLobbyInviteDelegate ( struct FScriptDelegate LobbyInviteDelegate );
	void AddLobbyInviteDelegate ( struct FScriptDelegate LobbyInviteDelegate );
	void OnLobbyInvite ( unsigned long bAccepted, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* FriendId );
	void ClearLobbyJoinGameDelegate ( struct FScriptDelegate LobbyJoinGameDelegate );
	void AddLobbyJoinGameDelegate ( struct FScriptDelegate LobbyJoinGameDelegate );
	void OnLobbyJoinGame ( struct FString ServerIP, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueNetId* ServerID );
	void TriggerLobbyReceiveBinaryDataDelegate ( int MemberIndex, TArray< unsigned char > Data );
	void ClearLobbyReceiveBinaryDataDelegate ( struct FScriptDelegate LobbyReceiveBinaryDataDelegate );
	void AddLobbyReceiveBinaryDataDelegate ( struct FScriptDelegate LobbyReceiveBinaryDataDelegate );
	void OnLobbyReceiveBinaryData ( int MemberIndex, struct FActiveLobbyInfo* LobbyInfo, TArray< unsigned char >* Data );
	void ClearLobbyReceiveMessageDelegate ( struct FScriptDelegate LobbyReceiveMessageDelegate );
	void AddLobbyReceiveMessageDelegate ( struct FScriptDelegate LobbyReceiveMessageDelegate );
	void OnLobbyReceiveMessage ( int MemberIndex, struct FString Type, struct FString Message, struct FActiveLobbyInfo* LobbyInfo );
	void ClearLobbyMemberStatusUpdateDelegate ( struct FScriptDelegate LobbyMemberStatusUpdateDelegate );
	void AddLobbyMemberStatusUpdateDelegate ( struct FScriptDelegate LobbyMemberStatusUpdateDelegate );
	void eventTriggerLobbyMemberStatusUpdateDelegates ( int MemberIndex, int InstigatorIndex, struct FString Status );
	void OnLobbyMemberStatusUpdate ( int MemberIndex, int InstigatorIndex, struct FString Status, struct FActiveLobbyInfo* LobbyInfo );
	void ClearLobbyMemberSettingsUpdateDelegate ( struct FScriptDelegate LobbyMemberSettingsUpdateDelegate );
	void AddLobbyMemberSettingsUpdateDelegate ( struct FScriptDelegate LobbyMemberSettingsUpdateDelegate );
	void OnLobbyMemberSettingsUpdate ( int MemberIndex, struct FActiveLobbyInfo* LobbyInfo );
	void ClearLobbySettingsUpdateDelegate ( struct FScriptDelegate LobbySettingsUpdateDelegate );
	void AddLobbySettingsUpdateDelegate ( struct FScriptDelegate LobbySettingsUpdateDelegate );
	void OnLobbySettingsUpdate ( struct FActiveLobbyInfo* LobbyInfo );
	void ClearJoinLobbyCompleteDelegate ( struct FScriptDelegate JoinLobbyCompleteDelegate );
	void AddJoinLobbyCompleteDelegate ( struct FScriptDelegate JoinLobbyCompleteDelegate );
	void OnJoinLobbyComplete ( unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyId );
	void ClearFindLobbiesCompleteDelegate ( struct FScriptDelegate FindLobbiesCompleteDelegate );
	void AddFindLobbiesCompleteDelegate ( struct FScriptDelegate FindLobbiesCompleteDelegate );
	void OnFindLobbiesComplete ( unsigned long bWasSuccessful, TArray< struct FBasicLobbyInfo >* LobbyList );
	void ClearLobbySessionCreatedDelegate ( struct FScriptDelegate LobbySessionCreatedDelegate );
	void AddLobbySessionCreatedDelegate ( struct FScriptDelegate LobbySessionCreatedDelegate );
	void OnLobbySessionCreated ( );
	void ClearLobbyErrorDelegate ( struct FScriptDelegate LobbyErrorDelegate );
	void AddLobbyErrorDelegate ( struct FScriptDelegate LobbyErrorDelegate );
	void OnLobbyError ( struct FString Error );
	void ClearCreateLobbyCompleteDelegate ( struct FScriptDelegate CreateLobbyCompleteDelegate );
	void AddCreateLobbyCompleteDelegate ( struct FScriptDelegate CreateLobbyCompleteDelegate );
	void OnCreateLobbyComplete ( unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId* LobbyId );
	void EventShowInviteUI ( );
};

UClass* UParties_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_X
// 0x0048 (0x0084 - 0x003C)
class UPartyMessage_X : public UOnlineMessage_X
{
public:
	struct FUniqueNetId                                Sender;                                           		// 0x003C (0x0048) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52236 ];

		return pClassPointer;
	};

	bool Broadcast ( );
};

UClass* UPartyMessage_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_SearchStatus_X
// 0x000C (0x0090 - 0x0084)
class UPartyMessage_SearchStatus_X : public UPartyMessage_X
{
public:
	struct FName                                       SearchState;                                      		// 0x0084 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsSearching : 1;                                 		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52245 ];

		return pClassPointer;
	};

	class UPartyMessage_SearchStatus_X* SetIsSearching ( unsigned long bValue );
	class UPartyMessage_SearchStatus_X* SetSearchState ( struct FName InSearchState );
};

UClass* UPartyMessage_SearchStatus_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_LobbySettings_X
// 0x0004 (0x0088 - 0x0084)
class UPartyMessage_LobbySettings_X : public UPartyMessage_X
{
public:
	int                                                BuildID;                                          		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52318 ];

		return pClassPointer;
	};

	class UPartyMessage_LobbySettings_X* SetBuildID ( int InBuildID );
};

UClass* UPartyMessage_LobbySettings_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_Kick_X
// 0x0091 (0x0115 - 0x0084)
class UPartyMessage_Kick_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                KickPlayer;                                       		// 0x0084 (0x0048) [0x0000000000000000]              
	struct FUniqueNetId                                Instigator;                                       		// 0x00CC (0x0048) [0x0000000000000000]              
	unsigned char                                      KickReason;                                       		// 0x0114 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52319 ];

		return pClassPointer;
	};

	class UPartyMessage_Kick_X* SetReason ( unsigned char InKickReason );
	class UPartyMessage_Kick_X* SetInstigator ( struct FUniqueNetId InPlayer );
	class UPartyMessage_Kick_X* SetKicked ( struct FUniqueNetId InPlayer );
};

UClass* UPartyMessage_Kick_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_LocalPlayers_X
// 0x0058 (0x00DC - 0x0084)
class UPartyMessage_LocalPlayers_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PrimaryMemberId;                                  		// 0x0084 (0x0048) [0x0000000000000000]              
	TArray< struct FSimplePartyMember >                Members;                                          		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFromLeader : 1;                                  		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52320 ];

		return pClassPointer;
	};

	class UPartyMessage_LocalPlayers_X* SetFromLeader ( unsigned long bIsLeader );
	void AddMember ( struct FPartyMember Member );
	class UPartyMessage_LocalPlayers_X* AddPlayer ( struct FUniqueNetId PlayerID, struct FString PlayerName );
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayer ( class UOnlinePlayer_X* Player );
	class UPartyMessage_LocalPlayers_X* SetPrimaryMemberId ( struct FUniqueNetId InPrimaryMemberId );
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayers ( );
};

UClass* UPartyMessage_LocalPlayers_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_MatchmakingAvailability_X
// 0x004C (0x00D0 - 0x0084)
class UPartyMessage_MatchmakingAvailability_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                         		// 0x0084 (0x0048) [0x0000000000000000]              
	int                                                MatchmakeRestrictions;                            		// 0x00CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52321 ];

		return pClassPointer;
	};

	class UPartyMessage_MatchmakingAvailability_X* SetMatchmakeRestrictions ( int InRestrictions );
	class UPartyMessage_MatchmakingAvailability_X* SetMemberId ( struct FUniqueNetId InMemberId );
};

UClass* UPartyMessage_MatchmakingAvailability_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_JoinGame_X
// 0x002C (0x00B0 - 0x0084)
class UPartyMessage_JoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyJoinMatchSettings                     Settings;                                         		// 0x0084 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52322 ];

		return pClassPointer;
	};

	class UPartyMessage_JoinGame_X* SetSettings ( struct FPartyJoinMatchSettings* InSettings );
};

UClass* UPartyMessage_JoinGame_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_PartyMemberJoinGame_X
// 0x0064 (0x00E8 - 0x0084)
class UPartyMessage_PartyMemberJoinGame_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0084 (0x0048) [0x0000000000000000]              
	struct FPartyMemberServer                          Server;                                           		// 0x00CC (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52323 ];

		return pClassPointer;
	};

	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberID ( struct FUniqueNetId InPlayerId );
	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberServer ( struct FPartyMemberServer* InServer );
};

UClass* UPartyMessage_PartyMemberJoinGame_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_DisableCrossPlay_X
// 0x004C (0x00D0 - 0x0084)
class UPartyMessage_DisableCrossPlay_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                         		// 0x0084 (0x0048) [0x0000000000000000]              
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52324 ];

		return pClassPointer;
	};

	class UPartyMessage_DisableCrossPlay_X* SetDisableCrossPlay ( unsigned long InDisableCrossPlay );
	class UPartyMessage_DisableCrossPlay_X* SetMemberId ( struct FUniqueNetId InMemberId );
};

UClass* UPartyMessage_DisableCrossPlay_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_InviteToTrade_X
// 0x0048 (0x00CC - 0x0084)
class UPartyMessage_InviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                   		// 0x0084 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52325 ];

		return pClassPointer;
	};

	class UPartyMessage_InviteToTrade_X* SetInviteMemberId ( struct FUniqueNetId InMemberId );
};

UClass* UPartyMessage_InviteToTrade_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_AcceptInviteToTrade_X
// 0x005C (0x00E0 - 0x0084)
class UPartyMessage_AcceptInviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                   		// 0x0084 (0x0048) [0x0000000000000000]              
	unsigned long                                      bInviteAccepted : 1;                              		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FGuid                                       TradeId;                                          		// 0x00D0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52326 ];

		return pClassPointer;
	};

	class UPartyMessage_AcceptInviteToTrade_X* SetTradeId ( struct FGuid InTradeId );
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteAccepted ( unsigned long bInInviteAccepted );
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteMemberId ( struct FUniqueNetId InMemberId );
};

UClass* UPartyMessage_AcceptInviteToTrade_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_PlayerTradeComplete_X
// 0x0048 (0x00CC - 0x0084)
class UPartyMessage_PlayerTradeComplete_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                  		// 0x0084 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52327 ];

		return pClassPointer;
	};

	class UPartyMessage_PlayerTradeComplete_X* SetTradingMemberId ( struct FUniqueNetId InMemberId );
};

UClass* UPartyMessage_PlayerTradeComplete_X::pClassPointer = NULL;

// Class ProjectX.PartyMetrics_X
// 0x000C (0x0060 - 0x0054)
class UPartyMetrics_X : public UMetricsGroup_X
{
public:
	struct FPartyMetricsData                           PartyData;                                        		// 0x0054 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52343 ];

		return pClassPointer;
	};

	void PartyChannelBroken ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, int MissingMessageID );
	void PartyMessage ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FName MessageType );
	void PartyChanged ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, unsigned long bLeader, int PartySize, int LocalPlayers, int RemotePlayers );
	struct FPartyMetricsData CreatePartyMetricsData ( class UOnlineGameParty_X* Party );
	void RecordPartyChanged ( class UOnlineGameParty_X* Party );
	void PartyError ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Error );
	void PartyKickRemotePlayer ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason );
	void PartyKickLocalPlayer ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason );
	void PartyLeave ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason );
	void PartyCreationFailed ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Error );
	void PartyCreated ( struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID );
};

UClass* UPartyMetrics_X::pClassPointer = NULL;

// Class ProjectX.PartyConfig_X
// 0x0004 (0x0050 - 0x004C)
class UPartyConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCompressMessages : 1;                            		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52650 ];

		return pClassPointer;
	};

};

UClass* UPartyConfig_X::pClassPointer = NULL;

// Class ProjectX.PartyMessage_ReadyToTrade_X
// 0x004C (0x00D0 - 0x0084)
class UPartyMessage_ReadyToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                  		// 0x0084 (0x0048) [0x0000000000000000]              
	unsigned long                                      bReadyToTrade : 1;                                		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52671 ];

		return pClassPointer;
	};

	class UPartyMessage_ReadyToTrade_X* SetReadyToTrade ( unsigned long bInReadyToTrade );
	class UPartyMessage_ReadyToTrade_X* SetTradingMemberId ( struct FUniqueNetId InTradingMemberId );
};

UClass* UPartyMessage_ReadyToTrade_X::pClassPointer = NULL;

// Class ProjectX.RankedConfig_X
// 0x0034 (0x0080 - 0x004C)
class URankedConfig_X : public UOnlineConfig_X
{
public:
	struct FString                                     SeasonEndTime;                                    		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PartyMaxTierGap;                                  		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ReconnectTimeoutSeconds;                          		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      SkillTierToSeasonRewardLevel;                     		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      SeasonRewardRequiredWinsPerLevel;                 		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0078 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RankedConfig_X.SeasonEndTimeSeconds

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52783 ];

		return pClassPointer;
	};

	bool HasSeasonEnded ( );
	int GetSeasonTimeRemaining ( );
	void Apply ( );
};

UClass* URankedConfig_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetPlayerTitles_X
// 0x0054 (0x00F0 - 0x009C)
class URPC_GetPlayerTitles_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x009C (0x0048) [0x0000000000000000]              
	TArray< struct FString >                           Titles;                                           		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53007 ];

		return pClassPointer;
	};

	class URPC_GetPlayerTitles_X* SetPlayerID ( struct FUniqueNetId InPlayerId );
};

UClass* URPC_GetPlayerTitles_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetPopulation_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetPopulation_X : public URPC_X
{
public:
	TArray< struct FGetPopulationData >                Playlists;                                        		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53133 ];

		return pClassPointer;
	};

};

UClass* URPC_GetPopulation_X::pClassPointer = NULL;

// Class ProjectX.RPC_PlayerCancelPrivateMatch_X
// 0x0000 (0x009C - 0x009C)
class URPC_PlayerCancelPrivateMatch_X : public URPC_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53169 ];

		return pClassPointer;
	};

};

UClass* URPC_PlayerCancelPrivateMatch_X::pClassPointer = NULL;

// Class ProjectX.RPC_PlayerSearchPrivateMatch_X
// 0x000C (0x00A8 - 0x009C)
class URPC_PlayerSearchPrivateMatch_X : public URPC_X
{
public:
	struct FString                                     Region;                                           		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53181 ];

		return pClassPointer;
	};

	class URPC_PlayerSearchPrivateMatch_X* SetRegion ( struct FString InRegion );
};

UClass* URPC_PlayerSearchPrivateMatch_X::pClassPointer = NULL;

// Class ProjectX.Region_X
// 0x000C (0x0048 - 0x003C)
class URegion_X : public UObject
{
public:
	struct FString                                     Label;                                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53268 ];

		return pClassPointer;
	};

};

UClass* URegion_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetGameServerPingList_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetGameServerPingList_X : public URPC_X
{
public:
	TArray< struct FGetGameServerPingListData >        Servers;                                          		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53272 ];

		return pClassPointer;
	};

	void eventOnSuccess ( );
};

UClass* URPC_GetGameServerPingList_X::pClassPointer = NULL;

// Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X
// 0x0000 (0x003C - 0x003C)
class UOnlineGameReservations_AssignTeamsByParty_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53328 ];

		return pClassPointer;
	};

	int PartySort ( struct FPartyByTeam Left, struct FPartyByTeam Right );
	void AssignTeams ( int TeamSize, TArray< struct FReservationData >* TestPlayers );
};

UClass* UOnlineGameReservations_AssignTeamsByParty_X::pClassPointer = NULL;

// Class ProjectX.ReservationsMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UReservationsMetrics_X : public UMetricsGroup_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53382 ];

		return pClassPointer;
	};

	void NotAllPlayersJoined ( );
	void GetKeysInvalidOrigin ( );
	void GetKeysFailed ( );
	void ReservationsFull ( );
	void PlatformExclusiveReservation ( );
	void WrongReservationPlaylist ( );
	void InvalidReservationPlaylist ( );
	void RankedReconnect ( );
	void RankedReconnectFinished ( );
	void FriendJoin ( );
	void FriendJoinEmpty ( );
	void FriendJoinRanked ( );
	void FirstReservation ( int Playlist );
};

UClass* UReservationsMetrics_X::pClassPointer = NULL;

// Class ProjectX.MapPrefsConfig_X
// 0x000C (0x0058 - 0x004C)
class UMapPrefsConfig_X : public UOnlineConfig_X
{
public:
	float                                              PreferenceWeight;                                 		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLikes;                                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxDislikes;                                      		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53428 ];

		return pClassPointer;
	};

};

UClass* UMapPrefsConfig_X::pClassPointer = NULL;

// Class ProjectX.PRI_X
// 0x0030 (0x0328 - 0x02F8)
class APRI_X : public APlayerReplicationInfo
{
public:
	struct FScriptDelegate                             __EventPlayerNameChanged__Delegate;               		// 0x02F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventUniqueIdChanged__Delegate;                 		// 0x0308 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x030C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventTeamChanged__Delegate;                     		// 0x0318 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x031C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53527 ];

		return pClassPointer;
	};

	void OnUniqueIdChanged ( );
	void SetUniqueId ( struct FUniqueNetId PlayerUniqueId );
	void RegisterPlayerWithSession ( );
	void AddPlayerHistoryKey ( class UOnlineRecentPlayersList* PlayersList );
	void OnTeamChanged ( );
	void SetPlayerTeam ( class ATeamInfo* NewTeam );
	void eventOnOwnerChanged ( );
	void eventSetPlayerName ( struct FString S );
	void eventReplicatedEvent ( struct FName VarName );
	void EventTeamChanged ( class APRI_X* PRI );
	void EventUniqueIdChanged ( class APRI_X* PRI );
	void EventPlayerNameChanged ( class APRI_X* PRI );
};

UClass* APRI_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetKeys_X
// 0x0054 (0x0134 - 0x00E0)
class URPC_GetKeys_X : public URPC_KeysBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E0 (0x0048) [0x0000000000000000]              
	unsigned long                                      bServerKey : 1;                                   		// 0x0128 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UAddReservationMessage_X*                    Message;                                          		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTcpConnection*                              Connection;                                       		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53687 ];

		return pClassPointer;
	};

	class URPC_GetKeys_X* SetPlayer ( struct FUniqueNetId InPlayerId );
};

UClass* URPC_GetKeys_X::pClassPointer = NULL;

// Class ProjectX.RPC_CustomGameServerGet_X
// 0x0030 (0x00CC - 0x009C)
class URPC_CustomGameServerGet_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                       		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFindPrivateServerResult >          Servers;                                          		// 0x00B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FServerResult >                     Results;                                          		// 0x00C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53790 ];

		return pClassPointer;
	};

	void eventOnSuccess ( );
	class URPC_CustomGameServerGet_X* SetPassword ( struct FString InPassword );
	class URPC_CustomGameServerGet_X* SetServerName ( struct FString InServerName );
};

UClass* URPC_CustomGameServerGet_X::pClassPointer = NULL;

// Class ProjectX.PlaylistSkillCache_X
// 0x000C (0x0048 - 0x003C)
class UPlaylistSkillCache_X : public UObject
{
public:
	TArray< struct FPlayerSkillRating >                Players;                                          		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53871 ];

		return pClassPointer;
	};

	int GetPlayerIndex ( struct FUniqueNetId PlayerID );
	struct FPlayerSkillRating GetPlayerRating ( struct FUniqueNetId PlayerID );
	void ClearSkill ( struct FUniqueNetId PlayerID );
	void CacheSkill ( struct FPlayerSkillRating Rating );
	void PreCacheSkill ( struct FPlayerSkillRating Rating );
};

UClass* UPlaylistSkillCache_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetPlayerSkill_X
// 0x005C (0x00F8 - 0x009C)
class URPC_GetPlayerSkill_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x009C (0x0048) [0x0000000000000000]              
	TArray< struct FGetPlayerSkillData >               Skills;                                           		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FRPCRewardLevelData                         RewardLevels;                                     		// 0x00F0 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53879 ];

		return pClassPointer;
	};

	class URPC_GetPlayerSkill_X* SetPlayerID ( struct FUniqueNetId InPlayerId );
};

UClass* URPC_GetPlayerSkill_X::pClassPointer = NULL;

// Class ProjectX.RPC_UpdateSkills_X
// 0x0080 (0x011C - 0x009C)
class URPC_UpdateSkills_X : public URPC_X
{
public:
	class UMatchRecorder_X*                            MatchRecorder;                                    		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MatchGUID;                                        		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Playlist;                                         		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FRecordedMatchData                          Match;                                            		// 0x00B0 (0x001C) [0x0000000000000000]              
	TArray< struct FSkillMatchPlayer >                 Winners;                                          		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillMatchPlayer >                 Losers;                                           		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       AppSessionID;                                     		// 0x00E4 (0x0010) [0x0000000000000000]              
	struct FGuid                                       LevelSessionID;                                   		// 0x00F4 (0x0010) [0x0000000000000000]              
	TArray< struct FPlayerSkillRating >                NewSkills;                                        		// 0x0104 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FRPCPlayerRewardLevelData >         NewRewardLevels;                                  		// 0x0110 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53940 ];

		return pClassPointer;
	};

	struct FSkillMatchPlayer CreateSkillMatchPlayer ( struct FUniqueNetId PlayerID, float PctTimePlayed, unsigned long bQuitter );
	class URPC_UpdateSkills_X* SetMetrics ( class UMetricsSystem_X* MetricsSystem );
	class URPC_UpdateSkills_X* SetMatch ( class UMatchRecorder_X* InRecorder );
	class URPC_UpdateSkills_X* SetMatchGUID ( struct FString InGuid );
};

UClass* URPC_UpdateSkills_X::pClassPointer = NULL;

// Class ProjectX.MatchRecorder_X
// 0x0038 (0x0074 - 0x003C)
class UMatchRecorder_X : public UObject
{
public:
	struct FRecordedMatchData                          Match;                                            		// 0x003C (0x001C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FRecordedMatchPlayer >              Players;                                          		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              TotalTimePlayed;                                  		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUniqueNetId >                      PartyIDs;                                         		// 0x0068 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53956 ];

		return pClassPointer;
	};

	void GetSkillMatchPlayers ( TArray< struct FSkillMatchPlayer >* Winners, TArray< struct FSkillMatchPlayer >* Losers );
	struct FSkillMatchPlayer GetSkillMatchPlayer ( struct FRecordedMatchPlayer Player );
	void Finish ( int InWinningTeam, int InTeam0Score, int InTeam1Score, int InPlaylist, unsigned long bInOvertime );
	void AccumulateTime ( float DeltaTime );
	void RemovePlayer ( struct FUniqueNetId PlayerID, unsigned long bPenalize );
	void AddPlayer ( struct FUniqueNetId PlayerID, int Team, struct FUniqueNetId PartyID );
};

UClass* UMatchRecorder_X::pClassPointer = NULL;

// Class ProjectX.RPC_UpdateLeaderboard_X
// 0x000C (0x00A8 - 0x009C)
class URPC_UpdateLeaderboard_X : public URPC_X
{
public:
	TArray< struct FUploadStatDataSet >                Updates;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53994 ];

		return pClassPointer;
	};

	class URPC_UpdateLeaderboard_X* SetUpdates ( TArray< struct FUploadStatDataSet >* InUpdates );
};

UClass* URPC_UpdateLeaderboard_X::pClassPointer = NULL;

// Class ProjectX.WordFilterConfig_X
// 0x0004 (0x0050 - 0x004C)
class UWordFilterConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSanitizeEntirePhrase : 1;                        		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54058 ];

		return pClassPointer;
	};

};

UClass* UWordFilterConfig_X::pClassPointer = NULL;

// Class ProjectX.RPC_LogoutPlayer_X
// 0x0000 (0x009C - 0x009C)
class URPC_LogoutPlayer_X : public URPC_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54255 ];

		return pClassPointer;
	};

};

UClass* URPC_LogoutPlayer_X::pClassPointer = NULL;

// Class ProjectX.RPC_LoginAuthPlayer_X
// 0x008C (0x0128 - 0x009C)
class URPC_LoginAuthPlayer_X : public URPC_X
{
public:
	struct FString                                     Platform;                                         		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerID;                                         		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameVersion;                                      		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FString                                     Language;                                         		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AuthTicket;                                       		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BuildRegion;                                      		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       FeatureSet;                                       		// 0x00E8 (0x0008) [0x0000000000000000]              
	unsigned long                                      bTrial : 1;                                       		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSkipAuth : 1;                                    		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      UseWebSocket : 1;                                 		// 0x00F0 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FString                                     SessionId;                                        		// 0x00F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     PsyToken;                                         		// 0x0100 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                BannedMinutes;                                    		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BannedMessage;                                    		// 0x0110 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     VerifiedPlayerName;                               		// 0x011C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54302 ];

		return pClassPointer;
	};

	class URPC_LoginAuthPlayer_X* SetTrial ( unsigned long bIsTrial );
	class URPC_LoginAuthPlayer_X* SetFeatureSet ( struct FName InFeatureSet );
	class URPC_LoginAuthPlayer_X* SetBuildRegion ( struct FString InBuildRegion );
	class URPC_LoginAuthPlayer_X* SetAuthTicket ( struct FString InAuthTicket );
	class URPC_LoginAuthPlayer_X* SetLanguage ( struct FString InLanguage );
	class URPC_LoginAuthPlayer_X* SetGameVersion ( int InGameVersion );
	class URPC_LoginAuthPlayer_X* SetPlayerID ( );
	class URPC_LoginAuthPlayer_X* SetPlayerName ( struct FString InPlayerName );
	class URPC_LoginAuthPlayer_X* SetPlatform ( struct FString InPlatform );
};

UClass* URPC_LoginAuthPlayer_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_FriendChatReceived_X
// 0x005C (0x00B0 - 0x0054)
class UPsyNetService_FriendChatReceived_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                FromPlayerID;                                     		// 0x0054 (0x0048) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyNetService_FriendChatReceived_X.TimeStamp

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54458 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_FriendChatReceived_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PersonaInfo_X
// 0x006C (0x00C0 - 0x0054)
class UPsyNetService_PersonaInfo_X : public UPsyNetClientService_X
{
public:
	struct FOnlinePersonaData                          FromPlayer;                                       		// 0x0054 (0x006C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54460 ];

		return pClassPointer;
	};

	unsigned char GetOnlineState ( );
	struct FOnlineFriend GetData ( );
};

UClass* UPsyNetService_PersonaInfo_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_FriendAcceptedRequest_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetService_FriendAcceptedRequest_X : public UPsyNetService_PersonaInfo_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54459 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_FriendAcceptedRequest_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_FriendStatusUpdate_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetService_FriendStatusUpdate_X : public UPsyNetService_PersonaInfo_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54461 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_FriendStatusUpdate_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_IncomingFriendRequest_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetService_IncomingFriendRequest_X : public UPsyNetService_PersonaInfo_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54462 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_IncomingFriendRequest_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PlayerUnfriended_X
// 0x0048 (0x009C - 0x0054)
class UPsyNetService_PlayerUnfriended_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0054 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54463 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_PlayerUnfriended_X::pClassPointer = NULL;

// Class ProjectX.PostProcessManager_X
// 0x0054 (0x0090 - 0x003C)
class UPostProcessManager_X : public UObject
{
public:
	class ULocalPlayer*                                PlayerOwner;                                      		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UMaterialEffect_X* >                 ActiveEffects;                                    		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UTickComponent_X*                            TickComponent;                                    		// 0x004C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bNeedsReset : 1;                                  		// 0x0050 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	TArray< struct FPPEffectDefaults >                 EffectDefaults;                                   		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPPPersistentEffectDefaults >       PersistentEffectDefaults;                         		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPPChainInfo >                      ActiveChains;                                     		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPPChainInfo >                      ChainDefaults;                                    		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPostProcessOverride >              PostProcessOverrides;                             		// 0x0084 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54848 ];

		return pClassPointer;
	};

	int GetNextPostProcessOverride ( );
	void TogglePostProcessSettings ( struct FName Id, unsigned long bEnabled );
	void SetMaterialEffectValue ( struct FName EffectName, float NewValue );
	void ResetEffectsToDefaults ( unsigned long bRebuildPostProcessChains );
	void ToggleChainNamed ( class UPostProcessChain* Chain, struct FName ChainName, unsigned long bEnabled );
	void StopChainNamed ( struct FName ChainName );
	void StartChainNamed ( class UPostProcessChain* Chain, struct FName ChainName );
	bool RemovePostProcessChain ( int OldChain );
	int AddPostProcessChain ( class UPostProcessChain* NewChain, struct FName ChainName );
	class UMaterialEffect_X* GetEffect ( struct FName EffectName );
	void TickPostProcess ( float dt );
	void ToggleEffect ( class UMaterialEffect_X* Effect, unsigned long bEnabled );
	void StopEffectNamed ( struct FName EffectName );
	void StartEffectNamed ( struct FName EffectName );
	void ToggleEffectNamed ( struct FName EffectName, unsigned long bEnabled );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	class UUberPostProcessEffect* GetUberPostProcessEffect ( );
	class UPostProcessChain* GetPlayerChain ( );
	void Exit ( );
	void Init ( class APlayerController_X* NewOwner );
};

UClass* UPostProcessManager_X::pClassPointer = NULL;

// Class ProjectX.PsyNetMetrics_X
// 0x0018 (0x006C - 0x0054)
class UPsyNetMetrics_X : public UMetricsGroup_X
{
public:
	TArray< struct FServiceMetricsData >               ServiceData;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FServiceErrorData >                 ErrorData;                                        		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55059 ];

		return pClassPointer;
	};

	void ServiceErrors ( TArray< struct FServiceErrorData > Errors );
	void ServiceCalls ( TArray< struct FServiceMetricsData > Services );
	void HandleMapChange ( struct FString M );
	void RecordServiceError ( struct FString Service, class UError* Error );
	void RecordServiceCall ( struct FString Service, float Latency );
};

UClass* UPsyNetMetrics_X::pClassPointer = NULL;

// Class ProjectX.__RPCQueue_X__CreateBatch
// 0x0004 (0x0040 - 0x003C)
class U__RPCQueue_X__CreateBatch : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                            		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55083 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UPsyNetMessage_X* Response, class UError* Error );
};

UClass* U__RPCQueue_X__CreateBatch::pClassPointer = NULL;

// Class ProjectX.SendRequestTask
// 0x0034 (0x00B8 - 0x0084)
class USendRequestTask : public UAsyncResult
{
public:
	class UPsyNetMessage_X*                            Result;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventSendRequestTaskResult__Delegate;           		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventSendRequestTaskResultComplete__Delegate;   		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __SendRequestTaskResultDelegate__Delegate;        		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55089 ];

		return pClassPointer;
	};

	class USendRequestTask* CreateResultError ( class UError* InError );
	class USendRequestTask* CreateResult ( class UPsyNetMessage_X* InResult );
	void eventClearCallbacks ( );
	class USendRequestTask* eventSetResultWhen ( class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate );
	class USendRequestTask* eventSetResult ( class UPsyNetMessage_X* InResult, class UError* InError );
	class USendRequestTask* NotifyOnResultComplete ( struct FScriptDelegate Callback );
	class USendRequestTask* NotifyOnResult ( struct FScriptDelegate Callback );
	class UPsyNetMessage_X* SendRequestTaskResultDelegate ( );
	void EventSendRequestTaskResultComplete ( class UPsyNetMessage_X* OutResult, class UError* OutError );
	void EventSendRequestTaskResult ( class UPsyNetMessage_X* OutResult );
};

UClass* USendRequestTask::pClassPointer = NULL;

// Class ProjectX.NetMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UNetMetrics_X : public UMetricsGroup_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55094 ];

		return pClassPointer;
	};

	void RpcSignatureMismatch ( int ServiceID );
	void ConnectionChangedIP ( struct FUniqueNetId PlayerID );
	void PlayerNetworkError ( struct FUniqueNetId PlayerID, struct FString Reason );
	void PlayerTimeout ( struct FUniqueNetId PlayerID );
	void PlayerNetwork ( struct FUniqueNetId PlayerID, int PingMin, int PingMax, int PingAvg, int PktLossRateMin, int PktLossRateMax, int PktLossAvg, int InBpsMax, int InBpsAvg, int OutBpsMax, int OutBpsAvg );
	void RecordPlayerNetwork ( class APlayerController* PC );
};

UClass* UNetMetrics_X::pClassPointer = NULL;

// Class ProjectX.RPC_ReportCheater_X
// 0x0054 (0x00F0 - 0x009C)
class URPC_ReportCheater_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x009C (0x0048) [0x0000000000000000]              
	struct FString                                     Reason;                                           		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55125 ];

		return pClassPointer;
	};

	class URPC_ReportCheater_X* SetReason ( struct FString InReason );
	class URPC_ReportCheater_X* SetPlayerID ( struct FUniqueNetId InPlayerId );
};

UClass* URPC_ReportCheater_X::pClassPointer = NULL;

// Class ProjectX.PsyNetServiceProvider_X
// 0x0024 (0x0060 - 0x003C)
class UPsyNetServiceProvider_X : public UObject
{
public:
	class UPsyNetClientServiceCollection_X*            ServiceCollection;                                		// 0x003C (0x0004) [0x0000000000000000]              
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x0040 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UPsyNetChannel_X* >                  Channels;                                         		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventServiceExecuted__Delegate;                 		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55174 ];

		return pClassPointer;
	};

	void FinalizeServiceTask ( class UPsyNetClientService_X* Service, class UExecuteServiceTask* Task, class UError* Error );
	void PrintServiceResult ( struct FString ServiceName, class UError* Error );
	class UExecuteServiceTask* ExecuteServiceMessage ( class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message );
	bool IsServiceRequest ( class UPsyNetMessage_X* Message );
	class UExecuteServiceTask* ExecuteNotification ( class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message );
	void SetResponse ( class UPsyNetClientService_X* Service, class UError* Error, class UPsyNetMessage_X* Response );
	class UExecuteServiceTask* ExecuteRequest ( class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Request, class UPsyNetMessage_X* Response );
	void HandleChannelClosed ( class UPsyNetChannel_X* Channel );
	class UPsyNetChannel_X* CreateChannel ( struct FString ChannelName );
	void Unsubscribe ( struct FScriptDelegate Callback );
	void Subscribe ( class UClass* ServiceClass, struct FScriptDelegate Callback );
	void eventConstruct ( );
	void EventServiceExecuted ( class UPsyNetServiceProvider_X* ServiceProvider, class UPsyNetClientService_X* Service );
};

UClass* UPsyNetServiceProvider_X::pClassPointer = NULL;

// Class ProjectX.ReservationsSettingUpMatchMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsSettingUpMatchMessage_X : public UBeaconMessage_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55240 ];

		return pClassPointer;
	};

};

UClass* UReservationsSettingUpMatchMessage_X::pClassPointer = NULL;

// Class ProjectX.__RPC_X__CreateTask
// 0x0010 (0x004C - 0x003C)
class U__RPC_X__CreateTask : public UObject
{
public:
	struct FScriptDelegate                             InCallback;                                       		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55281 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UError* Err );
};

UClass* U__RPC_X__CreateTask::pClassPointer = NULL;

// Class ProjectX.RPC_Test_X
// 0x0138 (0x01D4 - 0x009C)
class URPC_Test_X : public URPC_X
{
public:
	struct FString                                     TestParamLocalizedString;                         		// 0x009C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TestParamString;                                  		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRPCTestParam                               TestParamStruct;                                  		// 0x00B4 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRPCTestParam >                     TestParamStructs;                                 		// 0x012C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TestResultLocalizedString;                        		// 0x0138 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     TestResultString;                                 		// 0x0144 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FRPCTestParam                               TestResultStruct;                                 		// 0x0150 (0x0078) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FRPCTestParam >                     TestResultStructs;                                		// 0x01C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55291 ];

		return pClassPointer;
	};

	bool Check ( unsigned long Assertion, struct FString Message );
	bool CheckParamArraysMatch ( TArray< struct FRPCTestParam > A, TArray< struct FRPCTestParam > B, struct FString Message );
	bool CheckItemArraysMatch ( TArray< struct FRPCTestItem > A, TArray< struct FRPCTestItem > B, struct FString Message );
	bool CheckStringArraysMatch ( TArray< struct FString > A, TArray< struct FString > B, struct FString Message );
	bool CheckItemsMatch ( struct FRPCTestItem A, struct FRPCTestItem B, struct FString Message );
	bool CheckParamsMatch ( struct FRPCTestParam A, struct FRPCTestParam B, struct FString Message );
	bool ValidateResults ( );
	void eventOnComplete ( );
	TArray< struct FRPCTestParam > GetRandomTestParams ( );
	struct FRPCTestParam GetRandomTestParam ( );
	TArray< struct FRPCTestItem > GetRandomTestItems ( );
	struct FRPCTestItem GetRandomTestItem ( );
	void Init ( );
};

UClass* URPC_Test_X::pClassPointer = NULL;

// Class ProjectX.TestsHelper_X
// 0x0000 (0x003C - 0x003C)
class UTestsHelper_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55315 ];

		return pClassPointer;
	};

	struct FString GetRandomUppercaseString ( );
	TArray< struct FString > GetRandomStringArray ( );
	struct FString GetRandomString ( );
};

UClass* UTestsHelper_X::pClassPointer = NULL;

// Class ProjectX.SeqAct_SpawnArchetype_X
// 0x0030 (0x012C - 0x00FC)
class USeqAct_SpawnArchetype_X : public USequenceAction
{
public:
	class AActor*                                      ActorArchetype;                                   		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Velocity;                                         		// 0x0100 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Speed;                                            		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            SpawnOwners;                                      		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            SpawnPoints;                                      		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      Spawned;                                          		// 0x0128 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55407 ];

		return pClassPointer;
	};

	void Init ( class AActor* SpawnedActor );
	void eventActivated ( );
};

UClass* USeqAct_SpawnArchetype_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetGroupSkills_X
// 0x0018 (0x00B4 - 0x009C)
class URPC_GetGroupSkills_X : public URPC_X
{
public:
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlaylistTierSkillRating >          Skills;                                           		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55680 ];

		return pClassPointer;
	};

	class URPC_GetGroupSkills_X* SetPlayers ( TArray< struct FUniqueNetId > InPlayers );
};

UClass* URPC_GetGroupSkills_X::pClassPointer = NULL;

// Class ProjectX.RPC_UpdateGroupSkills_X
// 0x0038 (0x00D4 - 0x009C)
class URPC_UpdateGroupSkills_X : public URPC_X
{
public:
	class UMatchRecorder_X*                            MatchRecorder;                                    		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Playlist;                                         		// 0x00A0 (0x0004) [0x0000000000000000]              
	TArray< struct FSkillMatchParty >                  Winners;                                          		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillMatchParty >                  Losers;                                           		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillMatchPartyRating >            PartySkills;                                      		// 0x00BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FGroupSkillRating >                 GroupSkills;                                      		// 0x00C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55768 ];

		return pClassPointer;
	};

	void CreateGroupSkillsFor ( TArray< struct FSkillMatchParty > MatchParties );
	void CreateGroupSkills ( );
	void eventOnSuccess ( );
	void AddToGroup ( struct FUniqueNetId PlayerID, int PartyID, float PctTimePlayed, unsigned long bQuitter, TArray< struct FSkillMatchParty >* Groups );
	class URPC_UpdateGroupSkills_X* AddLoser ( struct FUniqueNetId PlayerID, int PartyID, float PctTimePlayed, unsigned long bQuitter );
	class URPC_UpdateGroupSkills_X* AddWinner ( struct FUniqueNetId PlayerID, int PartyID, float PctTimePlayed, unsigned long bQuitter );
	class URPC_UpdateGroupSkills_X* SetMatch ( class UMatchRecorder_X* InRecorder );
};

UClass* URPC_UpdateGroupSkills_X::pClassPointer = NULL;

// Class ProjectX.RPC_SetGroupSkills_X
// 0x0020 (0x00BC - 0x009C)
class URPC_SetGroupSkills_X : public URPC_X
{
public:
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Playlists;                                        		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Mu;                                               		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              Sigma;                                            		// 0x00B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55788 ];

		return pClassPointer;
	};

	class URPC_SetGroupSkills_X* SetSkills ( TArray< struct FUniqueNetId > InPlayers, TArray< int > InPlaylists, float InMu, float InSigma );
};

UClass* URPC_SetGroupSkills_X::pClassPointer = NULL;

// Class ProjectX.RPC_SetGroupTiers_X
// 0x0020 (0x00BC - 0x009C)
class URPC_SetGroupTiers_X : public URPC_X
{
public:
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Playlists;                                        		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Tier;                                             		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                MatchesPlayed;                                    		// 0x00B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55804 ];

		return pClassPointer;
	};

	class URPC_SetGroupTiers_X* SetTiers ( TArray< struct FUniqueNetId > InPlayers, TArray< int > InPlaylists, int InTier, int InMatchesPlayed );
};

UClass* URPC_SetGroupTiers_X::pClassPointer = NULL;

// Class ProjectX.RPC_TestPlayerID_X
// 0x0090 (0x012C - 0x009C)
class URPC_TestPlayerID_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x009C (0x0048) [0x0000000000000000]              
	struct FUniqueNetId                                ResponsePlayerID;                                 		// 0x00E4 (0x0048) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55820 ];

		return pClassPointer;
	};

	void OnSuccess ( );
	void Init ( );
};

UClass* URPC_TestPlayerID_X::pClassPointer = NULL;

// Class ProjectX.RPC_RecordMatch_X
// 0x0050 (0x00EC - 0x009C)
class URPC_RecordMatch_X : public URPC_X
{
public:
	class UMatchRecorder_X*                            MatchRecorder;                                    		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MatchGUID;                                        		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRecordedMatchData                          Match;                                            		// 0x00AC (0x001C) [0x0000000000000000]              
	struct FString                                     MatchName;                                        		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillMatchPlayer >                 Winners;                                          		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillMatchPlayer >                 Losers;                                           		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55951 ];

		return pClassPointer;
	};

	class URPC_RecordMatch_X* SetMatchName ( struct FString InName );
	class URPC_RecordMatch_X* SetMatch ( class UMatchRecorder_X* InRecorder );
	class URPC_RecordMatch_X* SetMatchGUID ( struct FString InGuid );
};

UClass* URPC_RecordMatch_X::pClassPointer = NULL;

// Class ProjectX.LoginResponse_X
// 0x0010 (0x004C - 0x003C)
class ULoginResponse_X : public UObject
{
public:
	struct FString                                     BannedMessage;                                    		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                BannedMinutes;                                    		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56043 ];

		return pClassPointer;
	};

};

UClass* ULoginResponse_X::pClassPointer = NULL;

// Class ProjectX.LocalCacheTests_X
// 0x000C (0x0048 - 0x003C)
class ULocalCacheTests_X : public UObject
{
public:
	struct FString                                     CacheFilePath;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56301 ];

		return pClassPointer;
	};

	void HandleLocalCacheImported ( class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error );
	void ImportTest ( );
	void HandleLocalCacheExported ( class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error );
	void ToCacheAndBack ( int RandomSeed );
};

UClass* ULocalCacheTests_X::pClassPointer = NULL;

// Class ProjectX.SkelControlBlendTargetComponent_X
// 0x0008 (0x0074 - 0x006C)
class USkelControlBlendTargetComponent_X : public UActorComponent_X
{
public:
	struct FName                                       SkelControlName;                                  		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56353 ];

		return pClassPointer;
	};

	void SetControlActiveInComponent ( class USkeletalMeshComponent* SKC, unsigned long bActive );
	void SetControlActive ( unsigned long bActive );
	void eventDetached ( );
	void eventAttached ( );
};

UClass* USkelControlBlendTargetComponent_X::pClassPointer = NULL;

// Class ProjectX.AprilConfig_X
// 0x0030 (0x007C - 0x004C)
class UAprilConfig_X : public UOnlineConfig_X
{
public:
	struct FString                                     StartTime;                                        		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     EndTime;                                          		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bChangeRankedIcons : 1;                           		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              HatScale;                                         		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x006C (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.AprilConfig_X.StartTimeSeconds
	unsigned char                                      UnknownData01[ 0x8 ];                             		// 0x0074 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.AprilConfig_X.EndTimeSeconds

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56402 ];

		return pClassPointer;
	};

	bool IsActive ( );
	void Apply ( );
};

UClass* UAprilConfig_X::pClassPointer = NULL;

// Class ProjectX.ArrayFuncs_X
// 0x0000 (0x003C - 0x003C)
class UArrayFuncs_X : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56414 ];

		return pClassPointer;
	};

	TArray< struct FString > ShuffleStringArray ( TArray< struct FString > ArrayToShuffle );
};

UClass* UArrayFuncs_X::pClassPointer = NULL;

// Class ProjectX.CameraState_CamActorCinematic_X
// 0x0000 (0x01B8 - 0x01B8)
class UCameraState_CamActorCinematic_X : public UCameraState_CamActor_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56424 ];

		return pClassPointer;
	};

	void UpdatePOV ( float DeltaTime, struct FCameraOrientation* OutPOV );
	void EndCameraState ( );
};

UClass* UCameraState_CamActorCinematic_X::pClassPointer = NULL;

// Class ProjectX.CheckReservationService_X
// 0x0030 (0x006C - 0x003C)
class UCheckReservationService_X : public UObject
{
public:
	struct FScriptDelegate                             __OnFoundReservation__Delegate;                   		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReservationNotFound__Delegate;                		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __CheckReservationDelegate__Delegate;             		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56436 ];

		return pClassPointer;
	};

	void HandleReservation ( class URPC_CheckReservation_X* RPC, struct FScriptDelegate FoundCallback, struct FScriptDelegate NotFoundCallback );
	class UAsyncTask* SendRequest ( unsigned long bIsHeartbeat, struct FScriptDelegate FoundCallback, struct FScriptDelegate NotFoundCallback );
	class UAsyncTask* CheckReservationDelegate ( unsigned long bIsHeartbeat, struct FScriptDelegate FoundCallback, struct FScriptDelegate NotFoundCallback );
	void OnReservationNotFound ( );
	void OnFoundReservation ( struct FCheckReservationData Reservation );
};

UClass* UCheckReservationService_X::pClassPointer = NULL;

// Class ProjectX.NetworkConfig_X
// 0x0004 (0x0050 - 0x004C)
class UNetworkConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnableDynamicIP : 1;                             		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHadDynamicIP : 1;                                		// 0x004C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56485 ];

		return pClassPointer;
	};

	void Undo ( );
	void Apply ( );
};

UClass* UNetworkConfig_X::pClassPointer = NULL;

// Class ProjectX.OnlineResource_X
// 0x0034 (0x007C - 0x0048)
class UOnlineResource_X : public UComponent
{
public:
	struct FString                                     URL;                                              		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    RetryDelays;                                      		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UCachedWebData_X*                            CachedData;                                       		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bSyncing : 1;                                     		// 0x0064 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                RetryCount;                                       		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __EventDataChanged__Delegate;                     		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56501 ];

		return pClassPointer;
	};

	void SetCachedData ( class UCachedWebData_X* NewData );
	bool IsValidNewData ( class UCachedWebData_X* Data );
	void ClearRetryTimer ( );
	void SetRetryTimer ( float Delay );
	void HandleSync ( class UCachedWebData_X* Data );
	void SyncData ( );
	void EventDataChanged ( class UOnlineResource_X* DataSync );
};

UClass* UOnlineResource_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetTrialData_X
// 0x0010 (0x00AC - 0x009C)
class URPC_GetTrialData_X : public URPC_X
{
public:
	int                                                MinutesRemaining;                                 		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                AdditionalMinutesRemaining;                       		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A4 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_GetTrialData_X.LastPlayedTime

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56547 ];

		return pClassPointer;
	};

};

UClass* URPC_GetTrialData_X::pClassPointer = NULL;

// Class ProjectX.RPC_UpdateTrialData_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_UpdateTrialData_X : public URPC_X
{
public:
	int                                                MinutesToRemove;                                  		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                AdditionalMinutesToRemove;                        		// 0x00A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56560 ];

		return pClassPointer;
	};

	class URPC_UpdateTrialData_X* SetAdditionalMinutesToRemove ( int InAdditionalMinutesToRemove );
	class URPC_UpdateTrialData_X* SetMinutesToRemove ( int InMinutesToRemove );
};

UClass* URPC_UpdateTrialData_X::pClassPointer = NULL;

// Class ProjectX.RPC_CheckKeys_X
// 0x000C (0x0140 - 0x0134)
class URPC_CheckKeys_X : public URPC_GetKeys_X
{
public:
	struct FString                                     KeyToCheck;                                       		// 0x0134 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56626 ];

		return pClassPointer;
	};

	bool KeysMatch ( );
	class URPC_CheckKeys_X* SetKeyToCheck ( struct FString InKey );
};

UClass* URPC_CheckKeys_X::pClassPointer = NULL;

// Class ProjectX.RPC_CheckReservation_X
// 0x003C (0x00D8 - 0x009C)
class URPC_CheckReservation_X : public URPC_X
{
public:
	unsigned long                                      bIsHeartbeat : 1;                                 		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFoundReservation : 1;                            		// 0x009C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FCheckReservationResponse                   Reservation;                                      		// 0x00A0 (0x0038) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56642 ];

		return pClassPointer;
	};

	struct FCheckReservationData GetReservation ( );
	class URPC_CheckReservation_X* SetIsHeartbeat ( unsigned long bInIsHeartbeat );
};

UClass* URPC_CheckReservation_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetGenericDataAll_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetGenericDataAll_X : public URPC_X
{
public:
	TArray< struct FGetGenericDataAllData >            GenericData;                                      		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56684 ];

		return pClassPointer;
	};

};

UClass* URPC_GetGenericDataAll_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetStaticDataURL_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetStaticDataURL_X : public URPC_X
{
public:
	struct FString                                     URL;                                              		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56735 ];

		return pClassPointer;
	};

};

UClass* URPC_GetStaticDataURL_X::pClassPointer = NULL;

// Class ProjectX.RPC_ReportLowFPS_X
// 0x002C (0x00C8 - 0x009C)
class URPC_ReportLowFPS_X : public URPC_X
{
public:
	struct FString                                     IP;                                               		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MachineId;                                        		// 0x00A8 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00AC (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_ReportLowFPS_X.ServerID
	struct FString                                     ServerName;                                       		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumHumans;                                        		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                NumBots;                                          		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56764 ];

		return pClassPointer;
	};

	class URPC_ReportLowFPS_X* SetNumBots ( int InNumBots );
	class URPC_ReportLowFPS_X* SetNumHumans ( int InNumHumans );
	class URPC_ReportLowFPS_X* SetServerName ( struct FString InServerName );
	class URPC_ReportLowFPS_X* SetServerID ( );
	class URPC_ReportLowFPS_X* SetMachineID ( int InMachineID );
	class URPC_ReportLowFPS_X* SetIP ( struct FString InIP );
};

UClass* URPC_ReportLowFPS_X::pClassPointer = NULL;

// Class ProjectX.RPC_SetPlayerSkill_X
// 0x000C (0x00A8 - 0x009C)
class URPC_SetPlayerSkill_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              Mu;                                               		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              Sigma;                                            		// 0x00A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56790 ];

		return pClassPointer;
	};

	class URPC_SetPlayerSkill_X* SetSigma ( float InSigma );
	class URPC_SetPlayerSkill_X* SetMu ( float InMu );
	class URPC_SetPlayerSkill_X* SetPlaylist ( int InPlaylist );
};

UClass* URPC_SetPlayerSkill_X::pClassPointer = NULL;

// Class ProjectX.RPC_SetPlayerSkillTier_X
// 0x000C (0x00A8 - 0x009C)
class URPC_SetPlayerSkillTier_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                Tier;                                             		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                MatchesPlayed;                                    		// 0x00A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56804 ];

		return pClassPointer;
	};

	class URPC_SetPlayerSkillTier_X* SetMatchesPlayed ( int InMatchesPlayed );
	class URPC_SetPlayerSkillTier_X* SetTier ( int InTier );
	class URPC_SetPlayerSkillTier_X* SetPlaylist ( int InPlaylist );
};

UClass* URPC_SetPlayerSkillTier_X::pClassPointer = NULL;

// Class ProjectX.EventRecorderConfig_X
// 0x0014 (0x0060 - 0x004C)
class UEventRecorderConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FName >                             DisabledEvents;                                   		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      EventRecorderClass;                               		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56952 ];

		return pClassPointer;
	};

	void ResetProperties ( class UEventRecorder_X* EventRecorder );
	void SetProperties ( class UEventRecorder_X* EventRecorder );
	void Apply ( );
};

UClass* UEventRecorderConfig_X::pClassPointer = NULL;

// Class ProjectX.RPC_GetPlayerPermissions_X
// 0x0018 (0x00B4 - 0x009C)
class URPC_GetPlayerPermissions_X : public URPC_X
{
public:
	TArray< struct FUniqueNetId >                      PlayerIDs;                                        		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerPermissionsReponse >         PlayerPermissions;                                		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56990 ];

		return pClassPointer;
	};

	struct FPlayerPermissionsList __RPC_GetPlayerPermissions_X__GetPlayerPermissions ( struct FUniqueNetId P );
	bool GetPermissionFromString ( struct FName PermissionName, unsigned char* Permission );
	TArray< unsigned char > ConvertPermissions ( TArray< struct FName > PermissionNames );
	struct FPlayerPermissionsList ConvertPlayerPermissions ( struct FUniqueNetId PlayerID );
	TArray< struct FPlayerPermissionsList > GetPlayerPermissions ( TArray< struct FPlayerPermissionsList >* MapLocal_22BFB40D414F4A5ED3F5BE945DEC1674 );
	class URPC_GetPlayerPermissions_X* SetPlayers ( TArray< struct FUniqueNetId >* InPlayerIDs );
};

UClass* URPC_GetPlayerPermissions_X::pClassPointer = NULL;

// Class ProjectX.PsyNetLocatorHttp_X
// 0x0000 (0x0064 - 0x0064)
class UPsyNetLocatorHttp_X : public UPsyNetLocator_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57015 ];

		return pClassPointer;
	};

};

UClass* UPsyNetLocatorHttp_X::pClassPointer = NULL;

// Class ProjectX.RPC_AddPlayerToRole_X
// 0x0004 (0x00A0 - 0x009C)
class URPC_AddPlayerToRole_X : public URPC_X
{
public:
	int                                                RoleID;                                           		// 0x009C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57052 ];

		return pClassPointer;
	};

	class URPC_AddPlayerToRole_X* SetRole ( unsigned char Role );
};

UClass* URPC_AddPlayerToRole_X::pClassPointer = NULL;

// Class ProjectX.RPC_RemovePlayerFromRole_X
// 0x0004 (0x00A0 - 0x009C)
class URPC_RemovePlayerFromRole_X : public URPC_X
{
public:
	int                                                RoleID;                                           		// 0x009C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57094 ];

		return pClassPointer;
	};

	class URPC_RemovePlayerFromRole_X* SetRole ( unsigned char Role );
};

UClass* URPC_RemovePlayerFromRole_X::pClassPointer = NULL;

// Class ProjectX.RPC_SetSeasonReward_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_SetSeasonReward_X : public URPC_X
{
public:
	int                                                SeasonLevel;                                      		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                SeasonLevelWins;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57100 ];

		return pClassPointer;
	};

	class URPC_SetSeasonReward_X* SetReward ( int Level, int Wins );
};

UClass* URPC_SetSeasonReward_X::pClassPointer = NULL;

// Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate
// 0x0004 (0x0040 - 0x003C)
class U__AdHocBrowser_X__CreateErrorDelegate : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57115 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UError* Error );
};

UClass* U__AdHocBrowser_X__CreateErrorDelegate::pClassPointer = NULL;

// Class ProjectX.AdHocBrowser_X
// 0x0030 (0x006C - 0x003C)
class UAdHocBrowser_X : public ULanBrowser_X
{
public:
	class UAdHocBeacon_X*                              AdHocBeacon;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FAdHocAccessPointInfo >             AdHocNodesOnNetwork;                              		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SearchTimeout;                                    		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ULanSearchTask*                              SearchTask;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< class ULanServerRecord_X* >                SearchResults;                                    		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAdHocAccessPointInfo >             AdHocAccessPointsAvailable;                       		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57119 ];

		return pClassPointer;
	};

	void __AdHocBrowser_X__GetServerList ( );
	void HandleSearchTimeout ( );
	void AdHocHandleOnNetworkChanged ( TArray< struct FAdHocAccessPointInfo > Ahapis );
	int FindIndexFromServerID ( struct FString InServerID );
	class UAsyncTask* JoinServer ( struct FString ServerID, struct FString Options );
	void CreateErrorDelegate ( class UAsyncTask* Task );
	class ULanSearchTask* GetServerList ( );
	void DestroyServer ( );
	class UAsyncTask* SetServerMetaData ( struct FString MetaData );
	class UAsyncTask* CreateServer ( struct FString MetaData );
};

UClass* UAdHocBrowser_X::pClassPointer = NULL;

// Class ProjectX.__AdHocBrowser_X__CreateServer
// 0x0010 (0x004C - 0x003C)
class U__AdHocBrowser_X__CreateServer : public UObject
{
public:
	struct FString                                     MetaData;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAsyncTask*                                  Task;                                             		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57125 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__AdHocBrowser_X__CreateServer::pClassPointer = NULL;

// Class ProjectX.__AdHocBrowser_X__JoinServer
// 0x001C (0x0058 - 0x003C)
class U__AdHocBrowser_X__JoinServer : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     ServerID;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57137 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__AdHocBrowser_X__JoinServer::pClassPointer = NULL;

// Class ProjectX.__AdHocInterface_X__DisableAdHoc
// 0x0004 (0x0040 - 0x003C)
class U__AdHocInterface_X__DisableAdHoc : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57143 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__AdHocInterface_X__DisableAdHoc::pClassPointer = NULL;

// Class ProjectX.AdHocInterface_X
// 0x0010 (0x004C - 0x003C)
class UAdHocInterface_X : public UObject
{
public:
	class ULanBrowser_X*                               OldLanBrowser;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	class UAdHocBeacon_X*                              AdHocBeacon;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	class UOnlineGameParty_X*                          OnlineGameParty;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                      		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57146 ];

		return pClassPointer;
	};

	void CreateErrorDelegate ( class UAsyncTask* Task );
	class UAsyncTask* DisableAdHoc ( );
	void HandleGameInfoSpawned ( class AGameInfo_X* InGameInfo );
	class UAsyncTask* EnableAdHoc ( );
};

UClass* UAdHocInterface_X::pClassPointer = NULL;

// Class ProjectX.__AdHocInterface_X__EnableAdHoc
// 0x0004 (0x0040 - 0x003C)
class U__AdHocInterface_X__EnableAdHoc : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57153 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__AdHocInterface_X__EnableAdHoc::pClassPointer = NULL;

// Class ProjectX.__CheckReservationService_X__SendRequest
// 0x0020 (0x005C - 0x003C)
class U__CheckReservationService_X__SendRequest : public UObject
{
public:
	struct FScriptDelegate                             FoundCallback;                                    		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             NotFoundCallback;                                 		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57170 ];

		return pClassPointer;
	};

	void LambdaCallback ( class URPC_CheckReservation_X* RPC );
};

UClass* U__CheckReservationService_X__SendRequest::pClassPointer = NULL;

// Class ProjectX.ExecuteServiceTask
// 0x0034 (0x00B8 - 0x0084)
class UExecuteServiceTask : public UAsyncResult
{
public:
	class UPsyNetClientService_X*                      Result;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventExecuteServiceTaskResult__Delegate;        		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventExecuteServiceTaskResultComplete__Delegate;		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ExecuteServiceTaskResultDelegate__Delegate;     		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57177 ];

		return pClassPointer;
	};

	class UExecuteServiceTask* CreateResultError ( class UError* InError );
	class UExecuteServiceTask* CreateResult ( class UPsyNetClientService_X* InResult );
	void eventClearCallbacks ( );
	class UExecuteServiceTask* eventSetResultWhen ( class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate );
	class UExecuteServiceTask* eventSetResult ( class UPsyNetClientService_X* InResult, class UError* InError );
	class UExecuteServiceTask* NotifyOnResultComplete ( struct FScriptDelegate Callback );
	class UExecuteServiceTask* NotifyOnResult ( struct FScriptDelegate Callback );
	class UPsyNetClientService_X* ExecuteServiceTaskResultDelegate ( );
	void EventExecuteServiceTaskResultComplete ( class UPsyNetClientService_X* OutResult, class UError* OutError );
	void EventExecuteServiceTaskResult ( class UPsyNetClientService_X* OutResult );
};

UClass* UExecuteServiceTask::pClassPointer = NULL;

// Class ProjectX.__ExecuteServiceTask__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__ExecuteServiceTask__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57189 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__ExecuteServiceTask__NotifyOnResult::pClassPointer = NULL;

// Class ProjectX.__ExecuteServiceTask__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__ExecuteServiceTask__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57193 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UError* Err );
};

UClass* U__ExecuteServiceTask__NotifyOnResultComplete::pClassPointer = NULL;

// Class ProjectX.__ExecuteServiceTask__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__ExecuteServiceTask__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57198 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__ExecuteServiceTask__SetResultWhen::pClassPointer = NULL;

// Class ProjectX.LanSearchTask
// 0x003C (0x00C0 - 0x0084)
class ULanSearchTask : public UAsyncResult
{
public:
	TArray< class ULanServerRecord_X* >                Result;                                           		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EventLanSearchTaskResult__Delegate;             		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0094 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventLanSearchTaskResultComplete__Delegate;     		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __LanSearchTaskResultDelegate__Delegate;          		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57204 ];

		return pClassPointer;
	};

	class ULanSearchTask* CreateResultError ( class UError* InError );
	class ULanSearchTask* CreateResult ( TArray< class ULanServerRecord_X* > InResult );
	void eventClearCallbacks ( );
	class ULanSearchTask* eventSetResultWhen ( class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate );
	class ULanSearchTask* eventSetResult ( TArray< class ULanServerRecord_X* > InResult, class UError* InError );
	class ULanSearchTask* NotifyOnResultComplete ( struct FScriptDelegate Callback );
	class ULanSearchTask* NotifyOnResult ( struct FScriptDelegate Callback );
	TArray< class ULanServerRecord_X* > LanSearchTaskResultDelegate ( );
	void EventLanSearchTaskResultComplete ( TArray< class ULanServerRecord_X* > OutResult, class UError* OutError );
	void EventLanSearchTaskResult ( TArray< class ULanServerRecord_X* > OutResult );
};

UClass* ULanSearchTask::pClassPointer = NULL;

// Class ProjectX.LanServerRecord_X
// 0x0018 (0x0054 - 0x003C)
class ULanServerRecord_X : public UObject
{
public:
	struct FString                                     ServerID;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MetaData;                                         		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57207 ];

		return pClassPointer;
	};

};

UClass* ULanServerRecord_X::pClassPointer = NULL;

// Class ProjectX.__LanSearchTask__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__LanSearchTask__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57221 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__LanSearchTask__NotifyOnResult::pClassPointer = NULL;

// Class ProjectX.__LanSearchTask__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__LanSearchTask__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57225 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UError* Err );
};

UClass* U__LanSearchTask__NotifyOnResultComplete::pClassPointer = NULL;

// Class ProjectX.__LanSearchTask__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__LanSearchTask__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57230 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__LanSearchTask__SetResultWhen::pClassPointer = NULL;

// Class ProjectX.__PartyMessageQueue_X__SendMessage
// 0x0004 (0x0040 - 0x003C)
class U__PartyMessageQueue_X__SendMessage : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57236 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UError* _ );
};

UClass* U__PartyMessageQueue_X__SendMessage::pClassPointer = NULL;

// Class ProjectX.PartyMessageQueue_X
// 0x0030 (0x0078 - 0x0048)
class UPartyMessageQueue_X : public UComponent
{
public:
	TArray< struct FPendingMessage >                   Pending;                                          		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UAsyncTask* >                        CurrentBatch;                                     		// 0x0054 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bPaused : 1;                                      		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BatchDelayTime;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __SendMessageServiceDelegate__Delegate;           		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x006C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57240 ];

		return pClassPointer;
	};

	void __PartyMessageQueue_X__CancelAll ( class UAsyncTask* Task );
	void HandleTaskComplete ( class UAsyncTask* Task );
	class UAsyncTask* SendMessage ( struct FUniqueLobbyId LobbyId, struct FString Message );
	void SendBatch ( );
	void SendBatchTimer ( );
	void QueueBatch ( );
	void CancelAll ( );
	void QueueMessage ( struct FUniqueLobbyId LobbyId, struct FString Message );
	void SetPaused ( unsigned long bPause );
	class UAsyncTask* SendMessageServiceDelegate ( struct FUniqueLobbyId LobbyId, struct FString Message );
};

UClass* UPartyMessageQueue_X::pClassPointer = NULL;

// Class ProjectX.__PsyNetConnection_X__ProcessServiceCall
// 0x0004 (0x0040 - 0x003C)
class U__PsyNetConnection_X__ProcessServiceCall : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                         		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57243 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UError* _ );
};

UClass* U__PsyNetConnection_X__ProcessServiceCall::pClassPointer = NULL;

// Class ProjectX.__PsyNetMessengerHttp_X__SendMessage
// 0x0010 (0x004C - 0x003C)
class U__PsyNetMessengerHttp_X__SendMessage : public UObject
{
public:
	struct FString                                     PsyRequestID;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAsyncTask*                                  Task;                                             		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57250 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UWebRequest_X* Request );
};

UClass* U__PsyNetMessengerHttp_X__SendMessage::pClassPointer = NULL;

// Class ProjectX.__PsyNetRequestQue_X__SendRequest
// 0x0008 (0x0044 - 0x003C)
class U__PsyNetRequestQue_X__SendRequest : public UObject
{
public:
	struct FName                                       RequestID;                                        		// 0x003C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57257 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__PsyNetRequestQue_X__SendRequest::pClassPointer = NULL;

// Class ProjectX.PsyNetRequestQue_X
// 0x0020 (0x005C - 0x003C)
class UPsyNetRequestQue_X : public UObject
{
public:
	float                                              RequestTimeout;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPsyNetRequest >                    Requests;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SendMessageDelegate__Delegate;                  		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57260 ];

		return pClassPointer;
	};

	void FailAllPending ( class UError* Error );
	void TimeoutRequests ( );
	bool ProcessResponseMessage ( class UPsyNetMessage_X* Message );
	void RemoveRequest ( struct FName RequestID );
	void SetRequestComplete ( struct FName RequestID, class UPsyNetMessage_X* Response, class UError* Error );
	class USendRequestTask* eventSendRequest ( class UPsyNetMessage_X* Message );
	class UAsyncTask* SendMessageDelegate ( class UPsyNetMessage_X* Message );
};

UClass* UPsyNetRequestQue_X::pClassPointer = NULL;

// Class ProjectX.__PsyNetServiceProvider_X__CreateChannel
// 0x000C (0x0048 - 0x003C)
class U__PsyNetServiceProvider_X__CreateChannel : public UObject
{
public:
	struct FString                                     ChannelName;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57263 ];

		return pClassPointer;
	};

	bool LambdaCallback ( class UPsyNetChannel_X* C );
};

UClass* U__PsyNetServiceProvider_X__CreateChannel::pClassPointer = NULL;

// Class ProjectX.PsyNetChannel_X
// 0x0038 (0x0074 - 0x003C)
class UPsyNetChannel_X : public UObject
{
public:
	struct FString                                     ChannelName;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bOpen : 1;                                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReceivedFirstMessage : 1;                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClosed : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTimedOut : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                NextMessageID;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              WaitForMessageTime;                               		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPendingChannelService >            ServiceQueue;                                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x0060 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57268 ];

		return pClassPointer;
	};

	struct FString GetDebugName ( );
	void Close ( );
	void Timeout ( );
	void ClearTimeout ( );
	void UpdateTimeout ( );
	void ExecuteService ( class UPsyNetClientService_X* Service );
	void ExecuteNext ( );
	class UAsyncTask* CreatePendingService ( class UPsyNetClientService_X* Service, int MessageId );
	class UAsyncTask* QueueServiceCall ( class UPsyNetClientService_X* Service, class UPsyNetMessage_X* Message );
	void Open ( );
	void Unsubscribe ( struct FScriptDelegate Callback );
	void Subscribe ( class UClass* ServiceClass, struct FScriptDelegate Callback );
	void Init ( struct FString InChannelName );
	void EventClosed ( class UPsyNetChannel_X* Channel );
};

UClass* UPsyNetChannel_X::pClassPointer = NULL;

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest
// 0x0004 (0x0040 - 0x003C)
class U__PsyNetServiceProvider_X__ExecuteRequest : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                         		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57271 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UPsyNetClientService_X* Result, class UError* Error );
};

UClass* U__PsyNetServiceProvider_X__ExecuteRequest::pClassPointer = NULL;

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage
// 0x000C (0x0048 - 0x003C)
class U__PsyNetServiceProvider_X__ExecuteServiceMessage : public UObject
{
public:
	struct FString                                     ServiceName;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57278 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UPsyNetClientService_X* R, class UError* E );
};

UClass* U__PsyNetServiceProvider_X__ExecuteServiceMessage::pClassPointer = NULL;

// Class ProjectX.__SendRequestTask__NotifyOnResult
// 0x0010 (0x004C - 0x003C)
class U__SendRequestTask__NotifyOnResult : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57307 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__SendRequestTask__NotifyOnResult::pClassPointer = NULL;

// Class ProjectX.__SendRequestTask__NotifyOnResultComplete
// 0x0010 (0x004C - 0x003C)
class U__SendRequestTask__NotifyOnResultComplete : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57311 ];

		return pClassPointer;
	};

	void LambdaCallback ( class UError* Err );
};

UClass* U__SendRequestTask__NotifyOnResultComplete::pClassPointer = NULL;

// Class ProjectX.__SendRequestTask__SetResultWhen
// 0x0010 (0x004C - 0x003C)
class U__SendRequestTask__SetResultWhen : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57316 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__SendRequestTask__SetResultWhen::pClassPointer = NULL;

// Class ProjectX.__TaskGate_X__Add
// 0x0004 (0x0040 - 0x003C)
class U__TaskGate_X__Add : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57322 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__TaskGate_X__Add::pClassPointer = NULL;

// Class ProjectX.TaskGate_X
// 0x0010 (0x004C - 0x003C)
class UTaskGate_X : public UObject
{
public:
	unsigned long                                      bOpen : 1;                                        		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UAsyncTask* >                        Tasks;                                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57325 ];

		return pClassPointer;
	};

	class UAsyncTask* AddWithTimeout ( float TimeoutSeconds, class UErrorType* TimeoutError, struct FString ErrorMessage );
	class UAsyncTask* Add ( );
	void CompleteTasks ( );
	void SetOpen ( unsigned long bIsOpen );
};

UClass* UTaskGate_X::pClassPointer = NULL;

// Class ProjectX.__TaskGate_X__AddWithTimeout
// 0x0014 (0x0050 - 0x003C)
class U__TaskGate_X__AddWithTimeout : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	class UErrorType*                                  TimeoutError;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     ErrorMessage;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57328 ];

		return pClassPointer;
	};

	void LambdaCallback ( );
};

UClass* U__TaskGate_X__AddWithTimeout::pClassPointer = NULL;

// Class ProjectX.BlogTile_X
// 0x0070 (0x00AC - 0x003C)
class UBlogTile_X : public UObject
{
public:
	struct FString                                     Title;                                            		// 0x003C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     DescriptionHeader;                                		// 0x0048 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Description;                                      		// 0x0054 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     WebURL;                                           		// 0x0060 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     CarName;                                          		// 0x006C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     ImageURL;                                         		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TileStartTimeUTC;                                 		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LiveStartTimeUTC;                                 		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x009C (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.BlogTile_X.TileStartTimeSecondsUTC
	unsigned char                                      UnknownData01[ 0x8 ];                             		// 0x00A4 (0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.BlogTile_X.LiveStartTimeSecondsUTC

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57439 ];

		return pClassPointer;
	};

	void UTCtoEpoch ( );
	struct FString GetTileID ( );
};

UClass* UBlogTile_X::pClassPointer = NULL;

// Class ProjectX.CountTrigger_X
// 0x0018 (0x0060 - 0x0048)
class UCountTrigger_X : public UComponent
{
public:
	int                                                Threshold;                                        		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Count;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventTriggered__Delegate;                       		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57477 ];

		return pClassPointer;
	};

	void Reset ( );
	void Increment ( );
	void EventTriggered ( class UCountTrigger_X* Trigger );
};

UClass* UCountTrigger_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyBase_X
// 0x000C (0x00A8 - 0x009C)
class URPC_PartyBase_X : public URPC_X
{
public:
	struct FString                                     PartyID;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57553 ];

		return pClassPointer;
	};

	class URPC_PartyBase_X* SetPartyId ( struct FUniqueLobbyId InLobbyId );
};

UClass* URPC_PartyBase_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyMessage_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartyMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                          		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57552 ];

		return pClassPointer;
	};

	class URPC_PartyMessage_X* SetMessage ( struct FString InMessage );
};

UClass* URPC_PartyMessage_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyCreate_X
// 0x0068 (0x0104 - 0x009C)
class URPC_PartyCreate_X : public URPC_X
{
public:
	struct FPsyNetPartyInfo                            Info;                                             		// 0x009C (0x005C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPsyNetPartyMember >                Members;                                          		// 0x00F8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57750 ];

		return pClassPointer;
	};

};

UClass* URPC_PartyCreate_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyJoin_X
// 0x0068 (0x0110 - 0x00A8)
class URPC_PartyJoin_X : public URPC_PartyBase_X
{
public:
	struct FPsyNetPartyInfo                            Info;                                             		// 0x00A8 (0x005C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPsyNetPartyMember >                Members;                                          		// 0x0104 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57754 ];

		return pClassPointer;
	};

};

UClass* URPC_PartyJoin_X::pClassPointer = NULL;

// Class ProjectX.BugMetrics_X
// 0x000C (0x0060 - 0x0054)
class UBugMetrics_X : public UMetricsGroup_X
{
public:
	TArray< struct FName >                             ReportedIDs;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57812 ];

		return pClassPointer;
	};

	void Report ( struct FName Id, struct FString Details, struct FString Trace );
	void BugReport ( struct FName Id, struct FString Details );
};

UClass* UBugMetrics_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyLeave_X
// 0x0000 (0x00A8 - 0x00A8)
class URPC_PartyLeave_X : public URPC_PartyBase_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57814 ];

		return pClassPointer;
	};

};

UClass* URPC_PartyLeave_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyChangeOwner_X
// 0x00B0 (0x0158 - 0x00A8)
class URPC_PartyChangeOwner_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                NewOwnerId;                                       		// 0x00A8 (0x0048) [0x0000000000000000]              
	struct FPsyNetPartyInfo                            Info;                                             		// 0x00F0 (0x005C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPsyNetPartyMember >                Members;                                          		// 0x014C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57860 ];

		return pClassPointer;
	};

	class URPC_PartyChangeOwner_X* SetNewOwnerId ( struct FUniqueNetId InNewOwnerId );
};

UClass* URPC_PartyChangeOwner_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartySendInvites_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartySendInvites_X : public URPC_PartyBase_X
{
public:
	TArray< struct FString >                           Invitees;                                         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57876 ];

		return pClassPointer;
	};

	class URPC_PartySendInvites_X* AddInvitee ( struct FString InInviteeUserId );
};

UClass* URPC_PartySendInvites_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyKickMember_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartyKickMember_X : public URPC_PartyBase_X
{
public:
	TArray< struct FString >                           Members;                                          		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57889 ];

		return pClassPointer;
	};

	class URPC_PartyKickMember_X* AddMember ( struct FString InMemberId );
};

UClass* URPC_PartyKickMember_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyInfo_X
// 0x0018 (0x00B4 - 0x009C)
class URPC_PartyInfo_X : public URPC_X
{
public:
	TArray< struct FPartyInvite >                      Invites;                                          		// 0x009C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPsyNetPartyMember >                Member;                                           		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57921 ];

		return pClassPointer;
	};

};

UClass* URPC_PartyInfo_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_Party_X
// 0x00C4 (0x0118 - 0x0054)
class UPsyNetService_Party_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotificationType;                                 		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Content;                                          		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                FromUserId;                                       		// 0x0078 (0x0048) [0x0000000000000000]              
	struct FString                                     FromUserName;                                     		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CreatedAt;                                        		// 0x00CC (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                ForUserId;                                        		// 0x00D0 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57948 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_Party_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PartyUserInvited_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyUserInvited_X : public UPsyNetService_Party_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57947 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_PartyUserInvited_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PartySystem_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartySystem_X : public UPsyNetService_Party_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57956 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_PartySystem_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PartyUserJoined_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyUserJoined_X : public UPsyNetService_Party_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57957 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_PartyUserJoined_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PartyUserKicked_X
// 0x00F4 (0x0148 - 0x0054)
class UPsyNetService_PartyUserKicked_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotificationType;                                 		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                Content;                                          		// 0x006C (0x0048) [0x0000000000000000]              
	struct FUniqueNetId                                FromUserId;                                       		// 0x00B4 (0x0048) [0x0000000000000000]              
	int                                                CreatedAt;                                        		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                ForUserId;                                        		// 0x0100 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57958 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_PartyUserKicked_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PartyUserLeft_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyUserLeft_X : public UPsyNetService_Party_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57959 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_PartyUserLeft_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PartyUserDisconnected_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyUserDisconnected_X : public UPsyNetService_Party_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57960 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_PartyUserDisconnected_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_PartyOwnerChanged_X
// 0x00F4 (0x0148 - 0x0054)
class UPsyNetService_PartyOwnerChanged_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotificationType;                                 		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                Content;                                          		// 0x006C (0x0048) [0x0000000000000000]              
	struct FUniqueNetId                                FromUserId;                                       		// 0x00B4 (0x0048) [0x0000000000000000]              
	int                                                CreatedAt;                                        		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                ForUserId;                                        		// 0x0100 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57961 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_PartyOwnerChanged_X::pClassPointer = NULL;

// Class ProjectX.PerConMetrics_X
// 0x001C (0x0070 - 0x0054)
class UPerConMetrics_X : public UMetricsGroup_X
{
public:
	int                                                StartConnectFailCount;                            		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                ConnectFailCount;                                 		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                DisconnectCount;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                RPCErrorCount;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                InvalidMessageCount;                              		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bConnected : 1;                                   		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                        		// 0x006C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58071 ];

		return pClassPointer;
	};

	void ServiceFail ( struct FString PlayerID, int Count, struct FString Service, struct FName Error );
	void InvalidMessage ( struct FString PlayerID, int Count, struct FString Substring );
	void Disconnected ( struct FString PlayerID, int Count, int Code, struct FString Reason, float ElapsedSeconds );
	void Connected ( struct FString PlayerID, float ElapsedSeconds );
	void ConnectFail ( struct FString PlayerID, int Count, int Code, struct FString Reason, float ElapsedSeconds );
	void StartConnectFail ( struct FString PlayerID, int Count );
	void StartConnect ( struct FString PlayerID );
	void Broken ( struct FString PlayerID, struct FString Reason );
	void Disabled ( struct FString PlayerID );
	void Enabled ( struct FString PlayerID );
	void HandleRPCError ( class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error );
	void HandleInvalidMessage ( class UPsyNetMessengerWebSocket_X* InMessenger, struct FString Substring );
	void HandleDisconnected ( class UPsyNetMessengerWebSocket_X* Socket, int Code, struct FString Reason );
	void HandleConnected ( class UPsyNetMessengerWebSocket_X* Socket );
	void HandleStartConnectFail ( class UPsyNetMessengerWebSocket_X* Socket );
	void HandleStartConnect ( class UPsyNetMessengerWebSocket_X* Socket );
	void HandleStatusChanged ( class UPerCon_X* PerCon );
	struct FString GetPlayerID ( );
	void SetMessenger ( class UPsyNetMessengerWebSocket_X* PerConMessenger );
	void eventConstruct ( );
};

UClass* UPerConMetrics_X::pClassPointer = NULL;

// Class ProjectX.PerConMonitor_X
// 0x0024 (0x0060 - 0x003C)
class UPerConMonitor_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	class UPerCon_X*                                   PerCon;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	class UPsyNetMessengerWebSocket_X*                 Messenger;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	class URPCQueue_X*                                 RPCQueue;                                         		// 0x0048 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                Disconnections;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                InvalidMessages;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< float >                                    ErrorTimestamps;                                  		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58118 ];

		return pClassPointer;
	};

	bool __PerConMonitor_X__HandleBatchError ( float RemoveTime );
	bool IsPerConRelevantError ( class UError* Error );
	void HandleBatchError ( class URPCQueue_X* InQueue, class UError* Error, TArray< float >* FilterLocal_03105FD746B8ADF85CEC1991A07C68D9 );
	void HandleInvalidMessage ( class UPsyNetMessengerWebSocket_X* InMessenger, struct FString Substring );
	void HandleDisconnected ( class UPsyNetMessengerWebSocket_X* InMessenger, int Code, struct FString Reason );
	void HandleConnectFail ( class UPsyNetMessengerWebSocket_X* InMessenger );
	void eventDispose ( );
	void SetMessenger ( class UPsyNetMessengerWebSocket_X* InMessenger );
	void Init ( class UPerCon_X* InPerCon, class URPCQueue_X* InRpcQueue );
};

UClass* UPerConMonitor_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_DuplicateLogin_X
// 0x0000 (0x0054 - 0x0054)
class UPsyNetService_DuplicateLogin_X : public UPsyNetClientService_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58280 ];

		return pClassPointer;
	};

};

UClass* UPsyNetService_DuplicateLogin_X::pClassPointer = NULL;

// Class ProjectX.PsyNetLocatorWebSocket_X
// 0x0000 (0x0064 - 0x0064)
class UPsyNetLocatorWebSocket_X : public UPsyNetLocator_X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58370 ];

		return pClassPointer;
	};

};

UClass* UPsyNetLocatorWebSocket_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_AAS_X
// 0x0008 (0x005C - 0x0054)
class UPsyNetService_AAS_X : public UPsyNetClientService_X
{
public:
	int                                                AdtTime;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                OnlineHours;                                      		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58533 ];

		return pClassPointer;
	};

	int GetOnlineHours ( );
};

UClass* UPsyNetService_AAS_X::pClassPointer = NULL;

// Class ProjectX.PsyNetService_Echo_X
// 0x0018 (0x006C - 0x0054)
class UPsyNetService_Echo_X : public UPsyNetClientService_X
{
public:
	struct FString                                     RequestString;                                    		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ResponseString;                                   		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58540 ];

		return pClassPointer;
	};

	void Execute ( );
};

UClass* UPsyNetService_Echo_X::pClassPointer = NULL;

// Class ProjectX.RPC_PartyChatMessage_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartyChatMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                          		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58636 ];

		return pClassPointer;
	};

	class URPC_PartyChatMessage_X* SetMessage ( struct FString InMessage );
};

UClass* URPC_PartyChatMessage_X::pClassPointer = NULL;

// Class ProjectX.RPC_PsyNetSendIndividualChat_X
// 0x0054 (0x00F0 - 0x009C)
class URPC_PsyNetSendIndividualChat_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x009C (0x0048) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58662 ];

		return pClassPointer;
	};

	class URPC_PsyNetSendIndividualChat_X* SetMessage ( struct FString InMessage );
	class URPC_PsyNetSendIndividualChat_X* SetPlayerID ( struct FUniqueNetId InPlayerId );
};

UClass* URPC_PsyNetSendIndividualChat_X::pClassPointer = NULL;

// Class ProjectX.UdpLanServer_X
// 0x0010 (0x004C - 0x003C)
class UUdpLanServer_X : public UObject
{
public:
	class ULanBeacon_X*                                Beacon;                                           		// 0x003C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     MetaData;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58741 ];

		return pClassPointer;
	};

	void HandleLanQueryMessage ( class UOnlineMessageComponent_X* Component, class ULanMessage_HostQuery_X* Query );
	void Destroy ( );
	class UAsyncTask* SetServerMetaData ( struct FString InMetaData );
	void eventConstruct ( );
};

UClass* UUdpLanServer_X::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif