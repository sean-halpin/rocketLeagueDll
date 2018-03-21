/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function AkAudio.AkDevice.NotifyWhenInitialized
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

void UAkDevice::NotifyWhenInitialized ( struct FScriptDelegate Callback )
{
	static UFunction* pFnNotifyWhenInitialized = NULL;

	if ( ! pFnNotifyWhenInitialized )
		pFnNotifyWhenInitialized = (UFunction*) UObject::GObjObjects()->Data[ 47360 ];

	UAkDevice_execNotifyWhenInitialized_Parms NotifyWhenInitialized_Parms;
	memcpy ( &NotifyWhenInitialized_Parms.Callback, &Callback, 0x10 );

	pFnNotifyWhenInitialized->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWhenInitialized, &NotifyWhenInitialized_Parms, NULL );

	pFnNotifyWhenInitialized->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ProfileStop
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAkDevice::ProfileStop ( )
{
	static UFunction* pFnProfileStop = NULL;

	if ( ! pFnProfileStop )
		pFnProfileStop = (UFunction*) UObject::GObjObjects()->Data[ 47359 ];

	UAkDevice_execProfileStop_Parms ProfileStop_Parms;

	pFnProfileStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProfileStop, &ProfileStop_Parms, NULL );

	pFnProfileStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ProfileStart
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAkDevice::ProfileStart ( )
{
	static UFunction* pFnProfileStart = NULL;

	if ( ! pFnProfileStart )
		pFnProfileStart = (UFunction*) UObject::GObjObjects()->Data[ 47358 ];

	UAkDevice_execProfileStart_Parms ProfileStart_Parms;

	pFnProfileStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProfileStart, &ProfileStart_Parms, NULL );

	pFnProfileStart->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PrintData
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAkDevice::PrintData ( )
{
	static UFunction* pFnPrintData = NULL;

	if ( ! pFnPrintData )
		pFnPrintData = (UFunction*) UObject::GObjObjects()->Data[ 47357 ];

	UAkDevice_execPrintData_Parms PrintData_Parms;

	pFnPrintData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPrintData, &PrintData_Parms, NULL );

	pFnPrintData->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetOutputType
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void UAkDevice::SetOutputType ( unsigned char Type )
{
	static UFunction* pFnSetOutputType = NULL;

	if ( ! pFnSetOutputType )
		pFnSetOutputType = (UFunction*) UObject::GObjObjects()->Data[ 47355 ];

	UAkDevice_execSetOutputType_Parms SetOutputType_Parms;
	SetOutputType_Parms.Type = Type;

	pFnSetOutputType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOutputType, &SetOutputType_Parms, NULL );

	pFnSetOutputType->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetListenerSpatialization
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class ULocalPlayer*            Player                         ( CPF_Parm )
// unsigned char                  Value                          ( CPF_Parm )

void UAkDevice::SetListenerSpatialization ( class ULocalPlayer* Player, unsigned char Value )
{
	static UFunction* pFnSetListenerSpatialization = NULL;

	if ( ! pFnSetListenerSpatialization )
		pFnSetListenerSpatialization = (UFunction*) UObject::GObjObjects()->Data[ 47352 ];

	UAkDevice_execSetListenerSpatialization_Parms SetListenerSpatialization_Parms;
	SetListenerSpatialization_Parms.Player = Player;
	SetListenerSpatialization_Parms.Value = Value;

	pFnSetListenerSpatialization->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetListenerSpatialization, &SetListenerSpatialization_Parms, NULL );

	pFnSetListenerSpatialization->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.RemoveListener
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class ULocalPlayer*            Player                         ( CPF_Parm )

void UAkDevice::RemoveListener ( class ULocalPlayer* Player )
{
	static UFunction* pFnRemoveListener = NULL;

	if ( ! pFnRemoveListener )
		pFnRemoveListener = (UFunction*) UObject::GObjObjects()->Data[ 47350 ];

	UAkDevice_execRemoveListener_Parms RemoveListener_Parms;
	RemoveListener_Parms.Player = Player;

	pFnRemoveListener->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveListener, &RemoveListener_Parms, NULL );

	pFnRemoveListener->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.AddListener
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class ULocalPlayer*            Player                         ( CPF_Parm )

void UAkDevice::AddListener ( class ULocalPlayer* Player )
{
	static UFunction* pFnAddListener = NULL;

	if ( ! pFnAddListener )
		pFnAddListener = (UFunction*) UObject::GObjObjects()->Data[ 47347 ];

	UAkDevice_execAddListener_Parms AddListener_Parms;
	AddListener_Parms.Player = Player;

	pFnAddListener->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddListener, &AddListener_Parms, NULL );

	pFnAddListener->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetMusicRTCP
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void UAkDevice::SetMusicRTCP ( struct FName Key, float Value )
{
	static UFunction* pFnSetMusicRTCP = NULL;

	if ( ! pFnSetMusicRTCP )
		pFnSetMusicRTCP = (UFunction*) UObject::GObjObjects()->Data[ 47349 ];

	UAkDevice_execSetMusicRTCP_Parms SetMusicRTCP_Parms;
	memcpy ( &SetMusicRTCP_Parms.Key, &Key, 0x8 );
	SetMusicRTCP_Parms.Value = Value;

	pFnSetMusicRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMusicRTCP, &SetMusicRTCP_Parms, NULL );

	pFnSetMusicRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetGlobalRTCP
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void UAkDevice::SetGlobalRTCP ( struct FName Key, float Value )
{
	static UFunction* pFnSetGlobalRTCP = NULL;

	if ( ! pFnSetGlobalRTCP )
		pFnSetGlobalRTCP = (UFunction*) UObject::GObjObjects()->Data[ 47344 ];

	UAkDevice_execSetGlobalRTCP_Parms SetGlobalRTCP_Parms;
	memcpy ( &SetGlobalRTCP_Parms.Key, &Key, 0x8 );
	SetGlobalRTCP_Parms.Value = Value;

	pFnSetGlobalRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGlobalRTCP, &SetGlobalRTCP_Parms, NULL );

	pFnSetGlobalRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopPlayingID
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            PlayingID                      ( CPF_Parm )

void UAkDevice::StopPlayingID ( int PlayingID )
{
	static UFunction* pFnStopPlayingID = NULL;

	if ( ! pFnStopPlayingID )
		pFnStopPlayingID = (UFunction*) UObject::GObjObjects()->Data[ 47342 ];

	UAkDevice_execStopPlayingID_Parms StopPlayingID_Parms;
	StopPlayingID_Parms.PlayingID = PlayingID;

	pFnStopPlayingID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopPlayingID, &StopPlayingID_Parms, NULL );

	pFnStopPlayingID->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopBGMusic
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAkSoundCue*             Sound                          ( CPF_Parm )

void UAkDevice::StopBGMusic ( class UAkSoundCue* Sound )
{
	static UFunction* pFnStopBGMusic = NULL;

	if ( ! pFnStopBGMusic )
		pFnStopBGMusic = (UFunction*) UObject::GObjObjects()->Data[ 47340 ];

	UAkDevice_execStopBGMusic_Parms StopBGMusic_Parms;
	StopBGMusic_Parms.Sound = Sound;

	pFnStopBGMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopBGMusic, &StopBGMusic_Parms, NULL );

	pFnStopBGMusic->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlayBGMusic
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UAkSoundCue*             Sound                          ( CPF_Parm )

int UAkDevice::PlayBGMusic ( class UAkSoundCue* Sound )
{
	static UFunction* pFnPlayBGMusic = NULL;

	if ( ! pFnPlayBGMusic )
		pFnPlayBGMusic = (UFunction*) UObject::GObjObjects()->Data[ 47337 ];

	UAkDevice_execPlayBGMusic_Parms PlayBGMusic_Parms;
	PlayBGMusic_Parms.Sound = Sound;

	pFnPlayBGMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayBGMusic, &PlayBGMusic_Parms, NULL );

	pFnPlayBGMusic->FunctionFlags |= 0x400;

	return PlayBGMusic_Parms.ReturnValue;
};

// Function AkAudio.AkDevice.StopGlobalSound
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAkSoundCue*             Sound                          ( CPF_Parm )

void UAkDevice::StopGlobalSound ( class UAkSoundCue* Sound )
{
	static UFunction* pFnStopGlobalSound = NULL;

	if ( ! pFnStopGlobalSound )
		pFnStopGlobalSound = (UFunction*) UObject::GObjObjects()->Data[ 47335 ];

	UAkDevice_execStopGlobalSound_Parms StopGlobalSound_Parms;
	StopGlobalSound_Parms.Sound = Sound;

	pFnStopGlobalSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopGlobalSound, &StopGlobalSound_Parms, NULL );

	pFnStopGlobalSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlayGlobalSound
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAkSoundCue*             Sound                          ( CPF_Parm )

void UAkDevice::PlayGlobalSound ( class UAkSoundCue* Sound )
{
	static UFunction* pFnPlayGlobalSound = NULL;

	if ( ! pFnPlayGlobalSound )
		pFnPlayGlobalSound = (UFunction*) UObject::GObjObjects()->Data[ 47333 ];

	UAkDevice_execPlayGlobalSound_Parms PlayGlobalSound_Parms;
	PlayGlobalSound_Parms.Sound = Sound;

	pFnPlayGlobalSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayGlobalSound, &PlayGlobalSound_Parms, NULL );

	pFnPlayGlobalSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetState
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   InStateGroup                   ( CPF_Parm )
// struct FName                   InState                        ( CPF_Parm )

void UAkDevice::SetState ( struct FName InStateGroup, struct FName InState )
{
	static UFunction* pFnSetState = NULL;

	if ( ! pFnSetState )
		pFnSetState = (UFunction*) UObject::GObjObjects()->Data[ 47330 ];

	UAkDevice_execSetState_Parms SetState_Parms;
	memcpy ( &SetState_Parms.InStateGroup, &InStateGroup, 0x8 );
	memcpy ( &SetState_Parms.InState, &InState, 0x8 );

	pFnSetState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetState, &SetState_Parms, NULL );

	pFnSetState->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSwitch
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  SourceActor                    ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// struct FName                   Value                          ( CPF_Parm )

void UAkDevice::SetSwitch ( class AActor* SourceActor, struct FName Key, struct FName Value )
{
	static UFunction* pFnSetSwitch = NULL;

	if ( ! pFnSetSwitch )
		pFnSetSwitch = (UFunction*) UObject::GObjObjects()->Data[ 47326 ];

	UAkDevice_execSetSwitch_Parms SetSwitch_Parms;
	SetSwitch_Parms.SourceActor = SourceActor;
	memcpy ( &SetSwitch_Parms.Key, &Key, 0x8 );
	memcpy ( &SetSwitch_Parms.Value, &Value, 0x8 );

	pFnSetSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSwitch, &SetSwitch_Parms, NULL );

	pFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetRTCP
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  SourceActor                    ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void UAkDevice::SetRTCP ( class AActor* SourceActor, struct FName Key, float Value )
{
	static UFunction* pFnSetRTCP = NULL;

	if ( ! pFnSetRTCP )
		pFnSetRTCP = (UFunction*) UObject::GObjObjects()->Data[ 47321 ];

	UAkDevice_execSetRTCP_Parms SetRTCP_Parms;
	SetRTCP_Parms.SourceActor = SourceActor;
	memcpy ( &SetRTCP_Parms.Key, &Key, 0x8 );
	SetRTCP_Parms.Value = Value;

	pFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRTCP, &SetRTCP_Parms, NULL );

	pFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopAllSounds
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  SourceActor                    ( CPF_Parm )

void UAkDevice::StopAllSounds ( class AActor* SourceActor )
{
	static UFunction* pFnStopAllSounds = NULL;

	if ( ! pFnStopAllSounds )
		pFnStopAllSounds = (UFunction*) UObject::GObjObjects()->Data[ 47325 ];

	UAkDevice_execStopAllSounds_Parms StopAllSounds_Parms;
	StopAllSounds_Parms.SourceActor = SourceActor;

	pFnStopAllSounds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopAllSounds, &StopAllSounds_Parms, NULL );

	pFnStopAllSounds->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopSound
// [0x04022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  SourceActor                    ( CPF_Parm )
// class UAkSoundCue*             Sound                          ( CPF_Parm )

void UAkDevice::StopSound ( class AActor* SourceActor, class UAkSoundCue* Sound )
{
	static UFunction* pFnStopSound = NULL;

	if ( ! pFnStopSound )
		pFnStopSound = (UFunction*) UObject::GObjObjects()->Data[ 47318 ];

	UAkDevice_execStopSound_Parms StopSound_Parms;
	StopSound_Parms.SourceActor = SourceActor;
	StopSound_Parms.Sound = Sound;

	pFnStopSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSound, &StopSound_Parms, NULL );

	pFnStopSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlaySound
// [0x04026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAkSoundSource*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class AActor*                  SourceActor                    ( CPF_Parm )
// class UAkSoundCue*             Sound                          ( CPF_Parm )
// struct FVector                 Translation                    ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                Rotation                       ( CPF_OptionalParm | CPF_Parm )

class UAkSoundSource* UAkDevice::PlaySound ( class AActor* SourceActor, class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation )
{
	static UFunction* pFnPlaySound = NULL;

	if ( ! pFnPlaySound )
		pFnPlaySound = (UFunction*) UObject::GObjObjects()->Data[ 47312 ];

	UAkDevice_execPlaySound_Parms PlaySound_Parms;
	PlaySound_Parms.SourceActor = SourceActor;
	PlaySound_Parms.Sound = Sound;
	memcpy ( &PlaySound_Parms.Translation, &Translation, 0xC );
	memcpy ( &PlaySound_Parms.Rotation, &Rotation, 0xC );

	pFnPlaySound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlaySound, &PlaySound_Parms, NULL );

	pFnPlaySound->FunctionFlags |= 0x400;

	return PlaySound_Parms.ReturnValue;
};

// Function AkAudio.AkDevice.EventMusicTrackEnd
// [0x00120000] 
// Parameters infos:
// int                            PlayingID                      ( CPF_Parm )

void UAkDevice::EventMusicTrackEnd ( int PlayingID )
{
	static UFunction* pFnEventMusicTrackEnd = NULL;

	if ( ! pFnEventMusicTrackEnd )
		pFnEventMusicTrackEnd = (UFunction*) UObject::GObjObjects()->Data[ 47305 ];

	UAkDevice_execEventMusicTrackEnd_Parms EventMusicTrackEnd_Parms;
	EventMusicTrackEnd_Parms.PlayingID = PlayingID;

	this->ProcessEvent ( pFnEventMusicTrackEnd, &EventMusicTrackEnd_Parms, NULL );
};

// Function AkAudio.AkDevice.EventMusicTrackStart
// [0x00120000] 
// Parameters infos:
// int                            PlayingID                      ( CPF_Parm )
// struct FString                 FileMarker                     ( CPF_Parm | CPF_NeedCtorLink )

void UAkDevice::EventMusicTrackStart ( int PlayingID, struct FString FileMarker )
{
	static UFunction* pFnEventMusicTrackStart = NULL;

	if ( ! pFnEventMusicTrackStart )
		pFnEventMusicTrackStart = (UFunction*) UObject::GObjObjects()->Data[ 47307 ];

	UAkDevice_execEventMusicTrackStart_Parms EventMusicTrackStart_Parms;
	EventMusicTrackStart_Parms.PlayingID = PlayingID;
	memcpy ( &EventMusicTrackStart_Parms.FileMarker, &FileMarker, 0xC );

	this->ProcessEvent ( pFnEventMusicTrackStart, &EventMusicTrackStart_Parms, NULL );
};

// Function AkAudio.AkDevice.EventInitialized
// [0x00120000] 
// Parameters infos:

void UAkDevice::EventInitialized ( )
{
	static UFunction* pFnEventInitialized = NULL;

	if ( ! pFnEventInitialized )
		pFnEventInitialized = (UFunction*) UObject::GObjObjects()->Data[ 47303 ];

	UAkDevice_execEventInitialized_Parms EventInitialized_Parms;

	this->ProcessEvent ( pFnEventInitialized, &EventInitialized_Parms, NULL );
};

// Function AkAudio.AkEnvironments.AddMusic
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FAkEnvironment          Environment                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UAkEnvironments::AddMusic ( struct FAkEnvironment* Environment )
{
	static UFunction* pFnAddMusic = NULL;

	if ( ! pFnAddMusic )
		pFnAddMusic = (UFunction*) UObject::GObjObjects()->Data[ 47556 ];

	UAkEnvironments_execAddMusic_Parms AddMusic_Parms;

	pFnAddMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddMusic, &AddMusic_Parms, NULL );

	pFnAddMusic->FunctionFlags |= 0x400;

	if ( Environment )
		memcpy ( Environment, &AddMusic_Parms.Environment, 0x1C );
};

// Function AkAudio.AkEnvironments.AddLevelDefault
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FAkEnvironment          Environment                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UAkEnvironments::AddLevelDefault ( struct FAkEnvironment* Environment )
{
	static UFunction* pFnAddLevelDefault = NULL;

	if ( ! pFnAddLevelDefault )
		pFnAddLevelDefault = (UFunction*) UObject::GObjObjects()->Data[ 47554 ];

	UAkEnvironments_execAddLevelDefault_Parms AddLevelDefault_Parms;

	pFnAddLevelDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddLevelDefault, &AddLevelDefault_Parms, NULL );

	pFnAddLevelDefault->FunctionFlags |= 0x400;

	if ( Environment )
		memcpy ( Environment, &AddLevelDefault_Parms.Environment, 0x1C );
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
// [0x00020102] 
// Parameters infos:
// class UDebugDrawer*            Drawer                         ( CPF_Parm )

void UAkParamGroup::PrintDebugInfo ( class UDebugDrawer* Drawer )
{
	static UFunction* pFnPrintDebugInfo = NULL;

	if ( ! pFnPrintDebugInfo )
		pFnPrintDebugInfo = (UFunction*) UObject::GObjObjects()->Data[ 47402 ];

	UAkParamGroup_execPrintDebugInfo_Parms PrintDebugInfo_Parms;
	PrintDebugInfo_Parms.Drawer = Drawer;

	this->ProcessEvent ( pFnPrintDebugInfo, &PrintDebugInfo_Parms, NULL );
};

// Function AkAudio.AkParamGroup.SetActorParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// class AActor*                  Value                          ( CPF_Parm )

void UAkParamGroup::SetActorParameter ( struct FName Key, class AActor* Value )
{
	static UFunction* pFnSetActorParameter = NULL;

	if ( ! pFnSetActorParameter )
		pFnSetActorParameter = (UFunction*) UObject::GObjObjects()->Data[ 47413 ];

	UAkParamGroup_execSetActorParameter_Parms SetActorParameter_Parms;
	memcpy ( &SetActorParameter_Parms.Key, &Key, 0x8 );
	SetActorParameter_Parms.Value = Value;

	pFnSetActorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetActorParameter, &SetActorParameter_Parms, NULL );

	pFnSetActorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// struct FLinearColor            Value                          ( CPF_Parm )

void UAkParamGroup::SetLinearColorParameter ( struct FName Key, struct FLinearColor Value )
{
	static UFunction* pFnSetLinearColorParameter = NULL;

	if ( ! pFnSetLinearColorParameter )
		pFnSetLinearColorParameter = (UFunction*) UObject::GObjObjects()->Data[ 47414 ];

	UAkParamGroup_execSetLinearColorParameter_Parms SetLinearColorParameter_Parms;
	memcpy ( &SetLinearColorParameter_Parms.Key, &Key, 0x8 );
	memcpy ( &SetLinearColorParameter_Parms.Value, &Value, 0x10 );

	pFnSetLinearColorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLinearColorParameter, &SetLinearColorParameter_Parms, NULL );

	pFnSetLinearColorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetVectorParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// struct FVector                 Value                          ( CPF_Parm )

void UAkParamGroup::SetVectorParameter ( struct FName Key, struct FVector Value )
{
	static UFunction* pFnSetVectorParameter = NULL;

	if ( ! pFnSetVectorParameter )
		pFnSetVectorParameter = (UFunction*) UObject::GObjObjects()->Data[ 47417 ];

	UAkParamGroup_execSetVectorParameter_Parms SetVectorParameter_Parms;
	memcpy ( &SetVectorParameter_Parms.Key, &Key, 0x8 );
	memcpy ( &SetVectorParameter_Parms.Value, &Value, 0xC );

	pFnSetVectorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVectorParameter, &SetVectorParameter_Parms, NULL );

	pFnSetVectorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetFloatParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void UAkParamGroup::SetFloatParameter ( struct FName Key, float Value )
{
	static UFunction* pFnSetFloatParameter = NULL;

	if ( ! pFnSetFloatParameter )
		pFnSetFloatParameter = (UFunction*) UObject::GObjObjects()->Data[ 47420 ];

	UAkParamGroup_execSetFloatParameter_Parms SetFloatParameter_Parms;
	memcpy ( &SetFloatParameter_Parms.Key, &Key, 0x8 );
	SetFloatParameter_Parms.Value = Value;

	pFnSetFloatParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFloatParameter, &SetFloatParameter_Parms, NULL );

	pFnSetFloatParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetNameParameter
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// struct FName                   Value                          ( CPF_Parm )

void UAkParamGroup::SetNameParameter ( struct FName Key, struct FName Value )
{
	static UFunction* pFnSetNameParameter = NULL;

	if ( ! pFnSetNameParameter )
		pFnSetNameParameter = (UFunction*) UObject::GObjObjects()->Data[ 47423 ];

	UAkParamGroup_execSetNameParameter_Parms SetNameParameter_Parms;
	memcpy ( &SetNameParameter_Parms.Key, &Key, 0x8 );
	memcpy ( &SetNameParameter_Parms.Value, &Value, 0x8 );

	pFnSetNameParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNameParameter, &SetNameParameter_Parms, NULL );

	pFnSetNameParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.GetDebugData
// [0x04420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FName >         RTCPKeys                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< float >                RTCPValues                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FName >         SwitchKeys                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FName >         SwitchValues                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UAkParamGroup::GetDebugData ( TArray< struct FName >* RTCPKeys, TArray< float >* RTCPValues, TArray< struct FName >* SwitchKeys, TArray< struct FName >* SwitchValues )
{
	static UFunction* pFnGetDebugData = NULL;

	if ( ! pFnGetDebugData )
		pFnGetDebugData = (UFunction*) UObject::GObjObjects()->Data[ 47393 ];

	UAkParamGroup_execGetDebugData_Parms GetDebugData_Parms;

	pFnGetDebugData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDebugData, &GetDebugData_Parms, NULL );

	pFnGetDebugData->FunctionFlags |= 0x400;

	if ( RTCPKeys )
		memcpy ( RTCPKeys, &GetDebugData_Parms.RTCPKeys, 0xC );

	if ( RTCPValues )
		memcpy ( RTCPValues, &GetDebugData_Parms.RTCPValues, 0xC );

	if ( SwitchKeys )
		memcpy ( SwitchKeys, &GetDebugData_Parms.SwitchKeys, 0xC );

	if ( SwitchValues )
		memcpy ( SwitchValues, &GetDebugData_Parms.SwitchValues, 0xC );
};

// Function AkAudio.AkParamGroup.StopSound
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAkSoundCue*             Sound                          ( CPF_Parm )

void UAkParamGroup::StopSound ( class UAkSoundCue* Sound )
{
	static UFunction* pFnStopSound = NULL;

	if ( ! pFnStopSound )
		pFnStopSound = (UFunction*) UObject::GObjObjects()->Data[ 47391 ];

	UAkParamGroup_execStopSound_Parms StopSound_Parms;
	StopSound_Parms.Sound = Sound;

	pFnStopSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSound, &StopSound_Parms, NULL );

	pFnStopSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.PlaySound
// [0x04024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAkSoundSource*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class UAkSoundCue*             Sound                          ( CPF_Parm )
// struct FVector                 Translation                    ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                Rotation                       ( CPF_OptionalParm | CPF_Parm )

class UAkSoundSource* UAkParamGroup::PlaySound ( class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation )
{
	static UFunction* pFnPlaySound = NULL;

	if ( ! pFnPlaySound )
		pFnPlaySound = (UFunction*) UObject::GObjObjects()->Data[ 47386 ];

	UAkParamGroup_execPlaySound_Parms PlaySound_Parms;
	PlaySound_Parms.Sound = Sound;
	memcpy ( &PlaySound_Parms.Translation, &Translation, 0xC );
	memcpy ( &PlaySound_Parms.Rotation, &Rotation, 0xC );

	pFnPlaySound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlaySound, &PlaySound_Parms, NULL );

	pFnPlaySound->FunctionFlags |= 0x400;

	return PlaySound_Parms.ReturnValue;
};

// Function AkAudio.AkParamGroup.SetSwitch
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// struct FName                   Value                          ( CPF_Parm )

void UAkParamGroup::SetSwitch ( struct FName Key, struct FName Value )
{
	static UFunction* pFnSetSwitch = NULL;

	if ( ! pFnSetSwitch )
		pFnSetSwitch = (UFunction*) UObject::GObjObjects()->Data[ 47383 ];

	UAkParamGroup_execSetSwitch_Parms SetSwitch_Parms;
	memcpy ( &SetSwitch_Parms.Key, &Key, 0x8 );
	memcpy ( &SetSwitch_Parms.Value, &Value, 0x8 );

	pFnSetSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSwitch, &SetSwitch_Parms, NULL );

	pFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetRTCP
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void UAkParamGroup::SetRTCP ( struct FName Key, float Value )
{
	static UFunction* pFnSetRTCP = NULL;

	if ( ! pFnSetRTCP )
		pFnSetRTCP = (UFunction*) UObject::GObjObjects()->Data[ 47380 ];

	UAkParamGroup_execSetRTCP_Parms SetRTCP_Parms;
	memcpy ( &SetRTCP_Parms.Key, &Key, 0x8 );
	SetRTCP_Parms.Value = Value;

	pFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRTCP, &SetRTCP_Parms, NULL );

	pFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// class AActor*                  Value                          ( CPF_Parm )

void UAkPlaySoundComponent::SetActorParameter ( struct FName Key, class AActor* Value )
{
	static UFunction* pFnSetActorParameter = NULL;

	if ( ! pFnSetActorParameter )
		pFnSetActorParameter = (UFunction*) UObject::GObjObjects()->Data[ 47289 ];

	UAkPlaySoundComponent_execSetActorParameter_Parms SetActorParameter_Parms;
	memcpy ( &SetActorParameter_Parms.Key, &Key, 0x8 );
	SetActorParameter_Parms.Value = Value;

	pFnSetActorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetActorParameter, &SetActorParameter_Parms, NULL );

	pFnSetActorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// struct FLinearColor            Value                          ( CPF_Parm )

void UAkPlaySoundComponent::SetLinearColorParameter ( struct FName Key, struct FLinearColor Value )
{
	static UFunction* pFnSetLinearColorParameter = NULL;

	if ( ! pFnSetLinearColorParameter )
		pFnSetLinearColorParameter = (UFunction*) UObject::GObjObjects()->Data[ 47286 ];

	UAkPlaySoundComponent_execSetLinearColorParameter_Parms SetLinearColorParameter_Parms;
	memcpy ( &SetLinearColorParameter_Parms.Key, &Key, 0x8 );
	memcpy ( &SetLinearColorParameter_Parms.Value, &Value, 0x10 );

	pFnSetLinearColorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLinearColorParameter, &SetLinearColorParameter_Parms, NULL );

	pFnSetLinearColorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// struct FVector                 Value                          ( CPF_Parm )

void UAkPlaySoundComponent::SetVectorParameter ( struct FName Key, struct FVector Value )
{
	static UFunction* pFnSetVectorParameter = NULL;

	if ( ! pFnSetVectorParameter )
		pFnSetVectorParameter = (UFunction*) UObject::GObjObjects()->Data[ 47283 ];

	UAkPlaySoundComponent_execSetVectorParameter_Parms SetVectorParameter_Parms;
	memcpy ( &SetVectorParameter_Parms.Key, &Key, 0x8 );
	memcpy ( &SetVectorParameter_Parms.Value, &Value, 0xC );

	pFnSetVectorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVectorParameter, &SetVectorParameter_Parms, NULL );

	pFnSetVectorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void UAkPlaySoundComponent::SetFloatParameter ( struct FName Key, float Value )
{
	static UFunction* pFnSetFloatParameter = NULL;

	if ( ! pFnSetFloatParameter )
		pFnSetFloatParameter = (UFunction*) UObject::GObjObjects()->Data[ 47280 ];

	UAkPlaySoundComponent_execSetFloatParameter_Parms SetFloatParameter_Parms;
	memcpy ( &SetFloatParameter_Parms.Key, &Key, 0x8 );
	SetFloatParameter_Parms.Value = Value;

	pFnSetFloatParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFloatParameter, &SetFloatParameter_Parms, NULL );

	pFnSetFloatParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// struct FName                   Value                          ( CPF_Parm )

void UAkPlaySoundComponent::SetNameParameter ( struct FName Key, struct FName Value )
{
	static UFunction* pFnSetNameParameter = NULL;

	if ( ! pFnSetNameParameter )
		pFnSetNameParameter = (UFunction*) UObject::GObjObjects()->Data[ 47277 ];

	UAkPlaySoundComponent_execSetNameParameter_Parms SetNameParameter_Parms;
	memcpy ( &SetNameParameter_Parms.Key, &Key, 0x8 );
	memcpy ( &SetNameParameter_Parms.Value, &Value, 0x8 );

	pFnSetNameParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNameParameter, &SetNameParameter_Parms, NULL );

	pFnSetNameParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void UAkPlaySoundComponent::SetRTCP ( struct FName Key, float Value )
{
	static UFunction* pFnSetRTCP = NULL;

	if ( ! pFnSetRTCP )
		pFnSetRTCP = (UFunction*) UObject::GObjObjects()->Data[ 47274 ];

	UAkPlaySoundComponent_execSetRTCP_Parms SetRTCP_Parms;
	memcpy ( &SetRTCP_Parms.Key, &Key, 0x8 );
	SetRTCP_Parms.Value = Value;

	pFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRTCP, &SetRTCP_Parms, NULL );

	pFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// struct FName                   Value                          ( CPF_Parm )

void UAkPlaySoundComponent::SetSwitch ( struct FName Key, struct FName Value )
{
	static UFunction* pFnSetSwitch = NULL;

	if ( ! pFnSetSwitch )
		pFnSetSwitch = (UFunction*) UObject::GObjObjects()->Data[ 47271 ];

	UAkPlaySoundComponent_execSetSwitch_Parms SetSwitch_Parms;
	memcpy ( &SetSwitch_Parms.Key, &Key, 0x8 );
	memcpy ( &SetSwitch_Parms.Value, &Value, 0x8 );

	pFnSetSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSwitch, &SetSwitch_Parms, NULL );

	pFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UAkPlaySoundComponent::IsPlaying ( )
{
	static UFunction* pFnIsPlaying = NULL;

	if ( ! pFnIsPlaying )
		pFnIsPlaying = (UFunction*) UObject::GObjObjects()->Data[ 47269 ];

	UAkPlaySoundComponent_execIsPlaying_Parms IsPlaying_Parms;

	pFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlaying, &IsPlaying_Parms, NULL );

	pFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Parms.ReturnValue;
};

// Function AkAudio.AkPlaySoundComponent.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAkPlaySoundComponent::Stop ( )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = (UFunction*) UObject::GObjObjects()->Data[ 47268 ];

	UAkPlaySoundComponent_execStop_Parms Stop_Parms;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );

	pFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.Play
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAkPlaySoundComponent::Play ( )
{
	static UFunction* pFnPlay = NULL;

	if ( ! pFnPlay )
		pFnPlay = (UFunction*) UObject::GObjObjects()->Data[ 47267 ];

	UAkPlaySoundComponent_execPlay_Parms Play_Parms;

	pFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlay, &Play_Parms, NULL );

	pFnPlay->FunctionFlags |= 0x400;
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// [0x00020102] 
// Parameters infos:
// class UDebugDrawer*            Drawer                         ( CPF_Parm )

void UAkRevPhysicsSimulation::PrintDebugInfo ( class UDebugDrawer* Drawer )
{
	static UFunction* pFnPrintDebugInfo = NULL;

	if ( ! pFnPrintDebugInfo )
		pFnPrintDebugInfo = (UFunction*) UObject::GObjObjects()->Data[ 47547 ];

	UAkRevPhysicsSimulation_execPrintDebugInfo_Parms PrintDebugInfo_Parms;
	PrintDebugInfo_Parms.Drawer = Drawer;

	this->ProcessEvent ( pFnPrintDebugInfo, &PrintDebugInfo_Parms, NULL );
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FAkRevSimUpdateParams   SimUpdate                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

float UAkRevPhysicsSimulation::GetGearRatio ( struct FAkRevSimUpdateParams* SimUpdate )
{
	static UFunction* pFnGetGearRatio = NULL;

	if ( ! pFnGetGearRatio )
		pFnGetGearRatio = (UFunction*) UObject::GObjObjects()->Data[ 47544 ];

	UAkRevPhysicsSimulation_execGetGearRatio_Parms GetGearRatio_Parms;

	pFnGetGearRatio->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGearRatio, &GetGearRatio_Parms, NULL );

	pFnGetGearRatio->FunctionFlags |= 0x400;

	if ( SimUpdate )
		memcpy ( SimUpdate, &GetGearRatio_Parms.SimUpdate, 0x3C );

	return GetGearRatio_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          GearRatio                      ( CPF_Parm )
// float                          RPM                            ( CPF_Parm )

float UAkRevPhysicsSimulation::CalcVelocity ( float GearRatio, float RPM )
{
	static UFunction* pFnCalcVelocity = NULL;

	if ( ! pFnCalcVelocity )
		pFnCalcVelocity = (UFunction*) UObject::GObjObjects()->Data[ 47540 ];

	UAkRevPhysicsSimulation_execCalcVelocity_Parms CalcVelocity_Parms;
	CalcVelocity_Parms.GearRatio = GearRatio;
	CalcVelocity_Parms.RPM = RPM;

	pFnCalcVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCalcVelocity, &CalcVelocity_Parms, NULL );

	pFnCalcVelocity->FunctionFlags |= 0x400;

	return CalcVelocity_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          GearRatio                      ( CPF_Parm )
// float                          Velocity                       ( CPF_Parm )

float UAkRevPhysicsSimulation::CalcRPM ( float GearRatio, float Velocity )
{
	static UFunction* pFnCalcRPM = NULL;

	if ( ! pFnCalcRPM )
		pFnCalcRPM = (UFunction*) UObject::GObjObjects()->Data[ 47536 ];

	UAkRevPhysicsSimulation_execCalcRPM_Parms CalcRPM_Parms;
	CalcRPM_Parms.GearRatio = GearRatio;
	CalcRPM_Parms.Velocity = Velocity;

	pFnCalcRPM->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCalcRPM, &CalcRPM_Parms, NULL );

	pFnCalcRPM->FunctionFlags |= 0x400;

	return CalcRPM_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.Step
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FAkRevSimFrame          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FAkRevSimUpdateParams   Params                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FAkRevSimFrame UAkRevPhysicsSimulation::Step ( float DeltaTime, struct FAkRevSimUpdateParams* Params )
{
	static UFunction* pFnStep = NULL;

	if ( ! pFnStep )
		pFnStep = (UFunction*) UObject::GObjObjects()->Data[ 47532 ];

	UAkRevPhysicsSimulation_execStep_Parms Step_Parms;
	Step_Parms.DeltaTime = DeltaTime;

	pFnStep->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStep, &Step_Parms, NULL );

	pFnStep->FunctionFlags |= 0x400;

	if ( Params )
		memcpy ( Params, &Step_Parms.Params, 0x3C );

	return Step_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// [0x00120000] 
// Parameters infos:
// class UAkRevPhysicsSimulation* Simulation                     ( CPF_Parm )

void UAkRevPhysicsSimulation::EventGearChange ( class UAkRevPhysicsSimulation* Simulation )
{
	static UFunction* pFnEventGearChange = NULL;

	if ( ! pFnEventGearChange )
		pFnEventGearChange = (UFunction*) UObject::GObjObjects()->Data[ 47517 ];

	UAkRevPhysicsSimulation_execEventGearChange_Parms EventGearChange_Parms;
	EventGearChange_Parms.Simulation = Simulation;

	this->ProcessEvent ( pFnEventGearChange, &EventGearChange_Parms, NULL );
};

// Function AkAudio.AkSoundSource.IsPlayingAny
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UAkSoundSource::IsPlayingAny ( )
{
	static UFunction* pFnIsPlayingAny = NULL;

	if ( ! pFnIsPlayingAny )
		pFnIsPlayingAny = (UFunction*) UObject::GObjObjects()->Data[ 47454 ];

	UAkSoundSource_execIsPlayingAny_Parms IsPlayingAny_Parms;

	pFnIsPlayingAny->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlayingAny, &IsPlayingAny_Parms, NULL );

	pFnIsPlayingAny->FunctionFlags |= 0x400;

	return IsPlayingAny_Parms.ReturnValue;
};

// Function AkAudio.AkSoundSource.IsPlaying
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UAkSoundCue*             Sound                          ( CPF_Parm )

bool UAkSoundSource::IsPlaying ( class UAkSoundCue* Sound )
{
	static UFunction* pFnIsPlaying = NULL;

	if ( ! pFnIsPlaying )
		pFnIsPlaying = (UFunction*) UObject::GObjObjects()->Data[ 47450 ];

	UAkSoundSource_execIsPlaying_Parms IsPlaying_Parms;
	IsPlaying_Parms.Sound = Sound;

	pFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlaying, &IsPlaying_Parms, NULL );

	pFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Parms.ReturnValue;
};

// Function AkAudio.AkSoundSource.StopAll
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAkSoundSource::StopAll ( )
{
	static UFunction* pFnStopAll = NULL;

	if ( ! pFnStopAll )
		pFnStopAll = (UFunction*) UObject::GObjObjects()->Data[ 47453 ];

	UAkSoundSource_execStopAll_Parms StopAll_Parms;

	pFnStopAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopAll, &StopAll_Parms, NULL );

	pFnStopAll->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.Stop
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAkSoundCue*             Sound                          ( CPF_Parm )

void UAkSoundSource::Stop ( class UAkSoundCue* Sound )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = (UFunction*) UObject::GObjObjects()->Data[ 47448 ];

	UAkSoundSource_execStop_Parms Stop_Parms;
	Stop_Parms.Sound = Sound;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );

	pFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.Play
// [0x04020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAkSoundCue*             Sound                          ( CPF_Parm )

void UAkSoundSource::Play ( class UAkSoundCue* Sound )
{
	static UFunction* pFnPlay = NULL;

	if ( ! pFnPlay )
		pFnPlay = (UFunction*) UObject::GObjObjects()->Data[ 47446 ];

	UAkSoundSource_execPlay_Parms Play_Parms;
	Play_Parms.Sound = Sound;

	pFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlay, &Play_Parms, NULL );

	pFnPlay->FunctionFlags |= 0x400;
};

// Function AkAudio.AkAmbientSoundActor.OnToggle
// [0x00020002] 
// Parameters infos:
// class USeqAct_Toggle*          Action                         ( CPF_Parm )

void AAkAmbientSoundActor::OnToggle ( class USeqAct_Toggle* Action )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 47294 ];

	AAkAmbientSoundActor_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// [0x00020002] 
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )
// unsigned long                  bPlay                          ( CPF_Parm )

void USeqAct_AkPlaySound::ToggleSoundFor ( class AActor* A, unsigned long bPlay )
{
	static UFunction* pFnToggleSoundFor = NULL;

	if ( ! pFnToggleSoundFor )
		pFnToggleSoundFor = (UFunction*) UObject::GObjObjects()->Data[ 47475 ];

	USeqAct_AkPlaySound_execToggleSoundFor_Parms ToggleSoundFor_Parms;
	ToggleSoundFor_Parms.A = A;
	ToggleSoundFor_Parms.bPlay = bPlay;

	this->ProcessEvent ( pFnToggleSoundFor, &ToggleSoundFor_Parms, NULL );
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// [0x00020002] 
// Parameters infos:
// unsigned long                  bPlay                          ( CPF_Parm )

void USeqAct_AkPlaySound::ToggleSound ( unsigned long bPlay )
{
	static UFunction* pFnToggleSound = NULL;

	if ( ! pFnToggleSound )
		pFnToggleSound = (UFunction*) UObject::GObjObjects()->Data[ 47471 ];

	USeqAct_AkPlaySound_execToggleSound_Parms ToggleSound_Parms;
	ToggleSound_Parms.bPlay = bPlay;

	this->ProcessEvent ( pFnToggleSound, &ToggleSound_Parms, NULL );
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqAct_AkPlaySound::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 47470 ];

	USeqAct_AkPlaySound_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif