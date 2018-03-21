/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_functions.h
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

// Function GameFramework.GameAIController.GetActionString
// [0x00020903] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameAIController::eventGetActionString ( )
{
	static UFunction* pFnGetActionString = NULL;

	if ( ! pFnGetActionString )
		pFnGetActionString = (UFunction*) UObject::GObjObjects()->Data[ 42525 ];

	AGameAIController_eventGetActionString_Parms GetActionString_Parms;

	this->ProcessEvent ( pFnGetActionString, &GetActionString_Parms, NULL );

	return GetActionString_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] 
// Parameters infos:
// struct FRotator                TargetDesiredRotation          ( CPF_Parm )
// unsigned long                  InLockDesiredRotation          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  InUnlockWhenReached            ( CPF_OptionalParm | CPF_Parm )
// float                          InterpolationTime              ( CPF_OptionalParm | CPF_Parm )

void AGameAIController::SetDesiredRotation ( struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime )
{
	static UFunction* pFnSetDesiredRotation = NULL;

	if ( ! pFnSetDesiredRotation )
		pFnSetDesiredRotation = (UFunction*) UObject::GObjObjects()->Data[ 42511 ];

	AGameAIController_execSetDesiredRotation_Parms SetDesiredRotation_Parms;
	memcpy ( &SetDesiredRotation_Parms.TargetDesiredRotation, &TargetDesiredRotation, 0xC );
	SetDesiredRotation_Parms.InLockDesiredRotation = InLockDesiredRotation;
	SetDesiredRotation_Parms.InUnlockWhenReached = InUnlockWhenReached;
	SetDesiredRotation_Parms.InterpolationTime = InterpolationTime;

	this->ProcessEvent ( pFnSetDesiredRotation, &SetDesiredRotation_Parms, NULL );
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// struct FString                 LogText                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   LogCategory                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForce                         ( CPF_OptionalParm | CPF_Parm )

void AGameAIController::eventAILog_Internal ( struct FString LogText, struct FName LogCategory, unsigned long bForce )
{
	static UFunction* pFnAILog_Internal = NULL;

	if ( ! pFnAILog_Internal )
		pFnAILog_Internal = (UFunction*) UObject::GObjObjects()->Data[ 42507 ];

	AGameAIController_eventAILog_Internal_Parms AILog_Internal_Parms;
	memcpy ( &AILog_Internal_Parms.LogText, &LogText, 0xC );
	memcpy ( &AILog_Internal_Parms.LogCategory, &LogCategory, 0x8 );
	AILog_Internal_Parms.bForce = bForce;

	this->ProcessEvent ( pFnAILog_Internal, &AILog_Internal_Parms, NULL );
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] 
// Parameters infos:
// struct FString                 LogText                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void AGameAIController::RecordDemoAILog ( struct FString LogText )
{
	static UFunction* pFnRecordDemoAILog = NULL;

	if ( ! pFnRecordDemoAILog )
		pFnRecordDemoAILog = (UFunction*) UObject::GObjObjects()->Data[ 42505 ];

	AGameAIController_execRecordDemoAILog_Parms RecordDemoAILog_Parms;
	memcpy ( &RecordDemoAILog_Parms.LogText, &LogText, 0xC );

	this->ProcessEvent ( pFnRecordDemoAILog, &RecordDemoAILog_Parms, NULL );
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameAIController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 42504 ];

	AGameAIController_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// [0x00020000] 
// Parameters infos:

void AGameAIController::ReachedIntermediateMoveGoal ( )
{
	static UFunction* pFnReachedIntermediateMoveGoal = NULL;

	if ( ! pFnReachedIntermediateMoveGoal )
		pFnReachedIntermediateMoveGoal = (UFunction*) UObject::GObjObjects()->Data[ 42503 ];

	AGameAIController_execReachedIntermediateMoveGoal_Parms ReachedIntermediateMoveGoal_Parms;

	this->ProcessEvent ( pFnReachedIntermediateMoveGoal, &ReachedIntermediateMoveGoal_Parms, NULL );
};

// Function GameFramework.GameAIController.ReachedMoveGoal
// [0x00020000] 
// Parameters infos:

void AGameAIController::ReachedMoveGoal ( )
{
	static UFunction* pFnReachedMoveGoal = NULL;

	if ( ! pFnReachedMoveGoal )
		pFnReachedMoveGoal = (UFunction*) UObject::GObjObjects()->Data[ 42502 ];

	AGameAIController_execReachedMoveGoal_Parms ReachedMoveGoal_Parms;

	this->ProcessEvent ( pFnReachedMoveGoal, &ReachedMoveGoal_Parms, NULL );
};

// Function GameFramework.GameAIController.GetDestinationOffset
// [0x00020000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameAIController::GetDestinationOffset ( )
{
	static UFunction* pFnGetDestinationOffset = NULL;

	if ( ! pFnGetDestinationOffset )
		pFnGetDestinationOffset = (UFunction*) UObject::GObjObjects()->Data[ 42500 ];

	AGameAIController_execGetDestinationOffset_Parms GetDestinationOffset_Parms;

	this->ProcessEvent ( pFnGetDestinationOffset, &GetDestinationOffset_Parms, NULL );

	return GetDestinationOffset_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  InClass                        ( CPF_Const | CPF_Parm )

class UGameAICommand* AGameAIController::GetAICommandInStack ( class UClass* InClass )
{
	static UFunction* pFnGetAICommandInStack = NULL;

	if ( ! pFnGetAICommandInStack )
		pFnGetAICommandInStack = (UFunction*) UObject::GObjObjects()->Data[ 42497 ];

	AGameAIController_execGetAICommandInStack_Parms GetAICommandInStack_Parms;
	GetAICommandInStack_Parms.InClass = InClass;

	pFnGetAICommandInStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAICommandInStack, &GetAICommandInStack_Parms, NULL );

	pFnGetAICommandInStack->FunctionFlags |= 0x400;

	return GetAICommandInStack_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  SearchClass                    ( CPF_Parm )

class UGameAICommand* AGameAIController::FindCommandOfClass ( class UClass* SearchClass )
{
	static UFunction* pFnFindCommandOfClass = NULL;

	if ( ! pFnFindCommandOfClass )
		pFnFindCommandOfClass = (UFunction*) UObject::GObjObjects()->Data[ 42494 ];

	AGameAIController_execFindCommandOfClass_Parms FindCommandOfClass_Parms;
	FindCommandOfClass_Parms.SearchClass = SearchClass;

	pFnFindCommandOfClass->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindCommandOfClass, &FindCommandOfClass_Parms, NULL );

	pFnFindCommandOfClass->FunctionFlags |= 0x400;

	return FindCommandOfClass_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::DumpCommandStack ( )
{
	static UFunction* pFnDumpCommandStack = NULL;

	if ( ! pFnDumpCommandStack )
		pFnDumpCommandStack = (UFunction*) UObject::GObjObjects()->Data[ 42493 ];

	AGameAIController_execDumpCommandStack_Parms DumpCommandStack_Parms;

	pFnDumpCommandStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDumpCommandStack, &DumpCommandStack_Parms, NULL );

	pFnDumpCommandStack->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::CheckCommandCount ( )
{
	static UFunction* pFnCheckCommandCount = NULL;

	if ( ! pFnCheckCommandCount )
		pFnCheckCommandCount = (UFunction*) UObject::GObjObjects()->Data[ 42492 ];

	AGameAIController_execCheckCommandCount_Parms CheckCommandCount_Parms;

	pFnCheckCommandCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckCommandCount, &CheckCommandCount_Parms, NULL );

	pFnCheckCommandCount->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGameAICommand* AGameAIController::GetActiveCommand ( )
{
	static UFunction* pFnGetActiveCommand = NULL;

	if ( ! pFnGetActiveCommand )
		pFnGetActiveCommand = (UFunction*) UObject::GObjObjects()->Data[ 42490 ];

	AGameAIController_execGetActiveCommand_Parms GetActiveCommand_Parms;

	pFnGetActiveCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActiveCommand, &GetActiveCommand_Parms, NULL );

	pFnGetActiveCommand->FunctionFlags |= 0x400;

	return GetActiveCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGameAICommand*          AbortCmd                       ( CPF_Parm )
// class UClass*                  AbortClass                     ( CPF_OptionalParm | CPF_Parm )

bool AGameAIController::AbortCommand ( class UGameAICommand* AbortCmd, class UClass* AbortClass )
{
	static UFunction* pFnAbortCommand = NULL;

	if ( ! pFnAbortCommand )
		pFnAbortCommand = (UFunction*) UObject::GObjObjects()->Data[ 42486 ];

	AGameAIController_execAbortCommand_Parms AbortCommand_Parms;
	AbortCommand_Parms.AbortCmd = AbortCmd;
	AbortCommand_Parms.AbortClass = AbortClass;

	pFnAbortCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAbortCommand, &AbortCommand_Parms, NULL );

	pFnAbortCommand->FunctionFlags |= 0x400;

	return AbortCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ToBePoppedCommand              ( CPF_Parm )

void AGameAIController::PopCommand ( class UGameAICommand* ToBePoppedCommand )
{
	static UFunction* pFnPopCommand = NULL;

	if ( ! pFnPopCommand )
		pFnPopCommand = (UFunction*) UObject::GObjObjects()->Data[ 42484 ];

	AGameAIController_execPopCommand_Parms PopCommand_Parms;
	PopCommand_Parms.ToBePoppedCommand = ToBePoppedCommand;

	pFnPopCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopCommand, &PopCommand_Parms, NULL );

	pFnPopCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void AGameAIController::PushCommand ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnPushCommand = NULL;

	if ( ! pFnPushCommand )
		pFnPushCommand = (UFunction*) UObject::GObjObjects()->Data[ 42482 ];

	AGameAIController_execPushCommand_Parms PushCommand_Parms;
	PushCommand_Parms.NewCommand = NewCommand;

	pFnPushCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushCommand, &PushCommand_Parms, NULL );

	pFnPushCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.AllCommands
// [0x00420405] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class UGameAICommand*          Cmd                            ( CPF_Parm | CPF_OutParm )

void AGameAIController::AllCommands ( class UClass* BaseClass, class UGameAICommand** Cmd )
{
	static UFunction* pFnAllCommands = NULL;

	if ( ! pFnAllCommands )
		pFnAllCommands = (UFunction*) UObject::GObjObjects()->Data[ 42479 ];

	AGameAIController_execAllCommands_Parms AllCommands_Parms;
	AllCommands_Parms.BaseClass = BaseClass;

	pFnAllCommands->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllCommands, &AllCommands_Parms, NULL );

	pFnAllCommands->FunctionFlags |= 0x400;

	if ( Cmd )
		*Cmd = AllCommands_Parms.Cmd;
};

// Function GameFramework.GameAICommand.HandlePathObstruction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  BlockedBy                      ( CPF_Parm )

bool UGameAICommand::HandlePathObstruction ( class AActor* BlockedBy )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 42322 ];

	UGameAICommand_execHandlePathObstruction_Parms HandlePathObstruction_Parms;
	HandlePathObstruction_Parms.BlockedBy = BlockedBy;

	this->ProcessEvent ( pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );

	return HandlePathObstruction_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.MoveUnreachable
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AttemptedDest                  ( CPF_Parm )
// class AActor*                  AttemptedTarget                ( CPF_Parm )

bool UGameAICommand::MoveUnreachable ( struct FVector AttemptedDest, class AActor* AttemptedTarget )
{
	static UFunction* pFnMoveUnreachable = NULL;

	if ( ! pFnMoveUnreachable )
		pFnMoveUnreachable = (UFunction*) UObject::GObjObjects()->Data[ 42318 ];

	UGameAICommand_execMoveUnreachable_Parms MoveUnreachable_Parms;
	memcpy ( &MoveUnreachable_Parms.AttemptedDest, &AttemptedDest, 0xC );
	MoveUnreachable_Parms.AttemptedTarget = AttemptedTarget;

	this->ProcessEvent ( pFnMoveUnreachable, &MoveUnreachable_Parms, NULL );

	return MoveUnreachable_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.NotifyNeedRepath
// [0x00020000] 
// Parameters infos:

void UGameAICommand::NotifyNeedRepath ( )
{
	static UFunction* pFnNotifyNeedRepath = NULL;

	if ( ! pFnNotifyNeedRepath )
		pFnNotifyNeedRepath = (UFunction*) UObject::GObjObjects()->Data[ 42317 ];

	UGameAICommand_execNotifyNeedRepath_Parms NotifyNeedRepath_Parms;

	this->ProcessEvent ( pFnNotifyNeedRepath, &NotifyNeedRepath_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDebugVerboseText
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameAICommand::eventGetDebugVerboseText ( )
{
	static UFunction* pFnGetDebugVerboseText = NULL;

	if ( ! pFnGetDebugVerboseText )
		pFnGetDebugVerboseText = (UFunction*) UObject::GObjObjects()->Data[ 42315 ];

	UGameAICommand_eventGetDebugVerboseText_Parms GetDebugVerboseText_Parms;

	this->ProcessEvent ( pFnGetDebugVerboseText, &GetDebugVerboseText_Parms, NULL );

	return GetDebugVerboseText_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00420000] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// TArray< struct FString >       OutText                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameAICommand::GetDebugOverheadText ( class APlayerController* PC, TArray< struct FString >* OutText )
{
	static UFunction* pFnGetDebugOverheadText = NULL;

	if ( ! pFnGetDebugOverheadText )
		pFnGetDebugOverheadText = (UFunction*) UObject::GObjObjects()->Data[ 42311 ];

	UGameAICommand_execGetDebugOverheadText_Parms GetDebugOverheadText_Parms;
	GetDebugOverheadText_Parms.PC = PC;

	this->ProcessEvent ( pFnGetDebugOverheadText, &GetDebugOverheadText_Parms, NULL );

	if ( OutText )
		memcpy ( OutText, &GetDebugOverheadText_Parms.OutText, 0xC );
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )
// struct FName                   Category                       ( CPF_Parm )

void UGameAICommand::eventDrawDebug ( class AHUD* H, struct FName Category )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 42308 ];

	UGameAICommand_eventDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.H = H;
	memcpy ( &DrawDebug_Parms.Category, &Category, 0x8 );

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameAICommand::eventGetDumpString ( )
{
	static UFunction* pFnGetDumpString = NULL;

	if ( ! pFnGetDumpString )
		pFnGetDumpString = (UFunction*) UObject::GObjObjects()->Data[ 42295 ];

	UGameAICommand_eventGetDumpString_Parms GetDumpString_Parms;

	this->ProcessEvent ( pFnGetDumpString, &GetDumpString_Parms, NULL );

	return GetDumpString_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] 
// Parameters infos:
// struct FName                   OldCommandName                 ( CPF_Parm )

void UGameAICommand::Resumed ( struct FName OldCommandName )
{
	static UFunction* pFnResumed = NULL;

	if ( ! pFnResumed )
		pFnResumed = (UFunction*) UObject::GObjObjects()->Data[ 42293 ];

	UGameAICommand_execResumed_Parms Resumed_Parms;
	memcpy ( &Resumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	this->ProcessEvent ( pFnResumed, &Resumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] 
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void UGameAICommand::Paused ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnPaused = NULL;

	if ( ! pFnPaused )
		pFnPaused = (UFunction*) UObject::GObjObjects()->Data[ 42291 ];

	UGameAICommand_execPaused_Parms Paused_Parms;
	Paused_Parms.NewCommand = NewCommand;

	this->ProcessEvent ( pFnPaused, &Paused_Parms, NULL );
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 42290 ];

	UGameAICommand_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 42289 ];

	UGameAICommand_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] 
// Parameters infos:

void UGameAICommand::PostPopped ( )
{
	static UFunction* pFnPostPopped = NULL;

	if ( ! pFnPostPopped )
		pFnPostPopped = (UFunction*) UObject::GObjObjects()->Data[ 42288 ];

	UGameAICommand_execPostPopped_Parms PostPopped_Parms;

	this->ProcessEvent ( pFnPostPopped, &PostPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] 
// Parameters infos:
// class AGameAIController*       AI                             ( CPF_Parm )

void UGameAICommand::PrePushed ( class AGameAIController* AI )
{
	static UFunction* pFnPrePushed = NULL;

	if ( ! pFnPrePushed )
		pFnPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 42286 ];

	UGameAICommand_execPrePushed_Parms PrePushed_Parms;
	PrePushed_Parms.AI = AI;

	this->ProcessEvent ( pFnPrePushed, &PrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   StateName                      ( CPF_Parm )

bool UGameAICommand::AllowStateTransitionTo ( struct FName StateName )
{
	static UFunction* pFnAllowStateTransitionTo = NULL;

	if ( ! pFnAllowStateTransitionTo )
		pFnAllowStateTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 42283 ];

	UGameAICommand_execAllowStateTransitionTo_Parms AllowStateTransitionTo_Parms;
	memcpy ( &AllowStateTransitionTo_Parms.StateName, &StateName, 0x8 );

	this->ProcessEvent ( pFnAllowStateTransitionTo, &AllowStateTransitionTo_Parms, NULL );

	return AllowStateTransitionTo_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  AttemptCommand                 ( CPF_Parm )

bool UGameAICommand::AllowTransitionTo ( class UClass* AttemptCommand )
{
	static UFunction* pFnAllowTransitionTo = NULL;

	if ( ! pFnAllowTransitionTo )
		pFnAllowTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 42280 ];

	UGameAICommand_execAllowTransitionTo_Parms AllowTransitionTo_Parms;
	AllowTransitionTo_Parms.AttemptCommand = AttemptCommand;

	this->ProcessEvent ( pFnAllowTransitionTo, &AllowTransitionTo_Parms, NULL );

	return AllowTransitionTo_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICommand::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 42278 ];

	UGameAICommand_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameAICommand::ShouldIgnoreNotifies ( )
{
	static UFunction* pFnShouldIgnoreNotifies = NULL;

	if ( ! pFnShouldIgnoreNotifies )
		pFnShouldIgnoreNotifies = (UFunction*) UObject::GObjObjects()->Data[ 42276 ];

	UGameAICommand_execShouldIgnoreNotifies_Parms ShouldIgnoreNotifies_Parms;

	pFnShouldIgnoreNotifies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldIgnoreNotifies, &ShouldIgnoreNotifies_Parms, NULL );

	pFnShouldIgnoreNotifies->FunctionFlags |= 0x400;

	return ShouldIgnoreNotifies_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICommand::eventInternalTick ( float DeltaTime )
{
	static UFunction* pFnInternalTick = NULL;

	if ( ! pFnInternalTick )
		pFnInternalTick = (UFunction*) UObject::GObjObjects()->Data[ 42274 ];

	UGameAICommand_eventInternalTick_Parms InternalTick_Parms;
	InternalTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnInternalTick, &InternalTick_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FName                   OldCommandName                 ( CPF_Parm )

void UGameAICommand::eventInternalResumed ( struct FName OldCommandName )
{
	static UFunction* pFnInternalResumed = NULL;

	if ( ! pFnInternalResumed )
		pFnInternalResumed = (UFunction*) UObject::GObjObjects()->Data[ 42272 ];

	UGameAICommand_eventInternalResumed_Parms InternalResumed_Parms;
	memcpy ( &InternalResumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	this->ProcessEvent ( pFnInternalResumed, &InternalResumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void UGameAICommand::eventInternalPaused ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnInternalPaused = NULL;

	if ( ! pFnInternalPaused )
		pFnInternalPaused = (UFunction*) UObject::GObjObjects()->Data[ 42270 ];

	UGameAICommand_eventInternalPaused_Parms InternalPaused_Parms;
	InternalPaused_Parms.NewCommand = NewCommand;

	this->ProcessEvent ( pFnInternalPaused, &InternalPaused_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPopped ( )
{
	static UFunction* pFnInternalPopped = NULL;

	if ( ! pFnInternalPopped )
		pFnInternalPopped = (UFunction*) UObject::GObjObjects()->Data[ 42269 ];

	UGameAICommand_eventInternalPopped_Parms InternalPopped_Parms;

	this->ProcessEvent ( pFnInternalPopped, &InternalPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPushed ( )
{
	static UFunction* pFnInternalPushed = NULL;

	if ( ! pFnInternalPushed )
		pFnInternalPushed = (UFunction*) UObject::GObjObjects()->Data[ 42268 ];

	UGameAICommand_eventInternalPushed_Parms InternalPushed_Parms;

	this->ProcessEvent ( pFnInternalPushed, &InternalPushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class AGameAIController*       AI                             ( CPF_Parm )

void UGameAICommand::eventInternalPrePushed ( class AGameAIController* AI )
{
	static UFunction* pFnInternalPrePushed = NULL;

	if ( ! pFnInternalPrePushed )
		pFnInternalPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 42266 ];

	UGameAICommand_eventInternalPrePushed_Parms InternalPrePushed_Parms;
	InternalPrePushed_Parms.AI = AI;

	this->ProcessEvent ( pFnInternalPrePushed, &InternalPrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )

bool UGameAICommand::InitCommand ( class AGameAIController* AI )
{
	static UFunction* pFnInitCommand = NULL;

	if ( ! pFnInitCommand )
		pFnInitCommand = (UFunction*) UObject::GObjObjects()->Data[ 42262 ];

	UGameAICommand_execInitCommand_Parms InitCommand_Parms;
	InitCommand_Parms.AI = AI;

	this->ProcessEvent ( pFnInitCommand, &InitCommand_Parms, NULL );

	return InitCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// class AActor*                  UserActor                      ( CPF_Parm )

bool UGameAICommand::InitCommandUserActor ( class AGameAIController* AI, class AActor* UserActor )
{
	static UFunction* pFnInitCommandUserActor = NULL;

	if ( ! pFnInitCommandUserActor )
		pFnInitCommandUserActor = (UFunction*) UObject::GObjObjects()->Data[ 42258 ];

	UGameAICommand_execInitCommandUserActor_Parms InitCommandUserActor_Parms;
	InitCommandUserActor_Parms.AI = AI;
	InitCommandUserActor_Parms.UserActor = UserActor;

	this->ProcessEvent ( pFnInitCommandUserActor, &InitCommandUserActor_Parms, NULL );

	return InitCommandUserActor_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0] 
// Parameters infos:
// struct FColor                  FadeColor                      ( CPF_Parm )
// unsigned char                  FromAlpha                      ( CPF_Parm )
// unsigned char                  ToAlpha                        ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm )

void AGamePlayerController::ClientColorFade ( struct FColor FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime )
{
	static UFunction* pFnClientColorFade = NULL;

	if ( ! pFnClientColorFade )
		pFnClientColorFade = (UFunction*) UObject::GObjObjects()->Data[ 41761 ];

	AGamePlayerController_execClientColorFade_Parms ClientColorFade_Parms;
	memcpy ( &ClientColorFade_Parms.FadeColor, &FadeColor, 0x4 );
	ClientColorFade_Parms.FromAlpha = FromAlpha;
	ClientColorFade_Parms.ToAlpha = ToAlpha;
	ClientColorFade_Parms.FadeTime = FadeTime;

	this->ProcessEvent ( pFnClientColorFade, &ClientColorFade_Parms, NULL );
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bDesiredPauseState             ( CPF_Parm )

void AGamePlayerController::eventWarmupPause ( unsigned long bDesiredPauseState )
{
	static UFunction* pFnWarmupPause = NULL;

	if ( ! pFnWarmupPause )
		pFnWarmupPause = (UFunction*) UObject::GObjObjects()->Data[ 41756 ];

	AGamePlayerController_eventWarmupPause_Parms WarmupPause_Parms;
	WarmupPause_Parms.bDesiredPauseState = bDesiredPauseState;

	this->ProcessEvent ( pFnWarmupPause, &WarmupPause_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGamePlayerController::CanUnpauseWarmup ( )
{
	static UFunction* pFnCanUnpauseWarmup = NULL;

	if ( ! pFnCanUnpauseWarmup )
		pFnCanUnpauseWarmup = (UFunction*) UObject::GObjObjects()->Data[ 41754 ];

	AGamePlayerController_execCanUnpauseWarmup_Parms CanUnpauseWarmup_Parms;

	this->ProcessEvent ( pFnCanUnpauseWarmup, &CanUnpauseWarmup_Parms, NULL );

	return CanUnpauseWarmup_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MovieName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGamePlayerController::GetCurrentMovie ( struct FString* MovieName )
{
	static UFunction* pFnGetCurrentMovie = NULL;

	if ( ! pFnGetCurrentMovie )
		pFnGetCurrentMovie = (UFunction*) UObject::GObjObjects()->Data[ 41752 ];

	AGamePlayerController_execGetCurrentMovie_Parms GetCurrentMovie_Parms;

	pFnGetCurrentMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentMovie, &GetCurrentMovie_Parms, NULL );

	pFnGetCurrentMovie->FunctionFlags |= 0x400;

	if ( MovieName )
		memcpy ( MovieName, &GetCurrentMovie_Parms.MovieName, 0xC );
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:
// float                          DelayInSeconds                 ( CPF_Parm )
// unsigned long                  bAllowMovieToFinish            ( CPF_Parm )
// unsigned long                  bForceStopNonSkippable         ( CPF_Parm )
// unsigned long                  bForceStopLoadingMovie         ( CPF_Parm )

void AGamePlayerController::eventClientStopMovie ( float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie )
{
	static UFunction* pFnClientStopMovie = NULL;

	if ( ! pFnClientStopMovie )
		pFnClientStopMovie = (UFunction*) UObject::GObjObjects()->Data[ 41747 ];

	AGamePlayerController_eventClientStopMovie_Parms ClientStopMovie_Parms;
	ClientStopMovie_Parms.DelayInSeconds = DelayInSeconds;
	ClientStopMovie_Parms.bAllowMovieToFinish = bAllowMovieToFinish;
	ClientStopMovie_Parms.bForceStopNonSkippable = bForceStopNonSkippable;
	ClientStopMovie_Parms.bForceStopLoadingMovie = bForceStopLoadingMovie;

	pFnClientStopMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientStopMovie, &ClientStopMovie_Parms, NULL );

	pFnClientStopMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:
// struct FString                 MovieName                      ( CPF_Parm | CPF_NeedCtorLink )
// int                            InStartOfRenderingMovieFrame   ( CPF_Parm )
// int                            InEndOfRenderingMovieFrame     ( CPF_Parm )
// unsigned long                  bRestrictPausing               ( CPF_Parm )
// unsigned long                  bPlayOnceFromStream            ( CPF_Parm )
// unsigned long                  bOnlyBackButtonSkipsMovie      ( CPF_Parm )

void AGamePlayerController::eventClientPlayMovie ( struct FString MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, unsigned long bRestrictPausing, unsigned long bPlayOnceFromStream, unsigned long bOnlyBackButtonSkipsMovie )
{
	static UFunction* pFnClientPlayMovie = NULL;

	if ( ! pFnClientPlayMovie )
		pFnClientPlayMovie = (UFunction*) UObject::GObjObjects()->Data[ 41740 ];

	AGamePlayerController_eventClientPlayMovie_Parms ClientPlayMovie_Parms;
	memcpy ( &ClientPlayMovie_Parms.MovieName, &MovieName, 0xC );
	ClientPlayMovie_Parms.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	ClientPlayMovie_Parms.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;
	ClientPlayMovie_Parms.bRestrictPausing = bRestrictPausing;
	ClientPlayMovie_Parms.bPlayOnceFromStream = bPlayOnceFromStream;
	ClientPlayMovie_Parms.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	pFnClientPlayMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientPlayMovie, &ClientPlayMovie_Parms, NULL );

	pFnClientPlayMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGamePlayerController::KeepPlayingLoadingMovie ( )
{
	static UFunction* pFnKeepPlayingLoadingMovie = NULL;

	if ( ! pFnKeepPlayingLoadingMovie )
		pFnKeepPlayingLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 41739 ];

	AGamePlayerController_execKeepPlayingLoadingMovie_Parms KeepPlayingLoadingMovie_Parms;

	pFnKeepPlayingLoadingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKeepPlayingLoadingMovie, &KeepPlayingLoadingMovie_Parms, NULL );

	pFnKeepPlayingLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bShowMovie                     ( CPF_Parm )
// unsigned long                  bPauseAfterHide                ( CPF_OptionalParm | CPF_Parm )
// float                          PauseDuration                  ( CPF_OptionalParm | CPF_Parm )
// float                          KeepPlayingDuration            ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverridePreviousDelays        ( CPF_OptionalParm | CPF_Parm )

void AGamePlayerController::ShowLoadingMovie ( unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays )
{
	static UFunction* pFnShowLoadingMovie = NULL;

	if ( ! pFnShowLoadingMovie )
		pFnShowLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 41733 ];

	AGamePlayerController_execShowLoadingMovie_Parms ShowLoadingMovie_Parms;
	ShowLoadingMovie_Parms.bShowMovie = bShowMovie;
	ShowLoadingMovie_Parms.bPauseAfterHide = bPauseAfterHide;
	ShowLoadingMovie_Parms.PauseDuration = PauseDuration;
	ShowLoadingMovie_Parms.KeepPlayingDuration = KeepPlayingDuration;
	ShowLoadingMovie_Parms.bOverridePreviousDelays = bOverridePreviousDelays;

	pFnShowLoadingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoadingMovie, &ShowLoadingMovie_Parms, NULL );

	pFnShowLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] 
// Parameters infos:
// struct FName                   InSoundModeName                ( CPF_Parm )

void AGamePlayerController::SetSoundMode ( struct FName InSoundModeName )
{
	static UFunction* pFnSetSoundMode = NULL;

	if ( ! pFnSetSoundMode )
		pFnSetSoundMode = (UFunction*) UObject::GObjObjects()->Data[ 41729 ];

	AGamePlayerController_execSetSoundMode_Parms SetSoundMode_Parms;
	memcpy ( &SetSoundMode_Parms.InSoundModeName, &InSoundModeName, 0x8 );

	this->ProcessEvent ( pFnSetSoundMode, &SetSoundMode_Parms, NULL );
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] 
// Parameters infos:
// class UCameraShake*            ShakeData                      ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )

void AGamePlayerController::DoForceFeedbackForScreenShake ( class UCameraShake* ShakeData, float Scale )
{
	static UFunction* pFnDoForceFeedbackForScreenShake = NULL;

	if ( ! pFnDoForceFeedbackForScreenShake )
		pFnDoForceFeedbackForScreenShake = (UFunction*) UObject::GObjObjects()->Data[ 41717 ];

	AGamePlayerController_execDoForceFeedbackForScreenShake_Parms DoForceFeedbackForScreenShake_Parms;
	DoForceFeedbackForScreenShake_Parms.ShakeData = ShakeData;
	DoForceFeedbackForScreenShake_Parms.Scale = Scale;

	this->ProcessEvent ( pFnDoForceFeedbackForScreenShake, &DoForceFeedbackForScreenShake_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGamePlayerController::eventNotifyCrowdAgentInRadius ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnNotifyCrowdAgentInRadius = NULL;

	if ( ! pFnNotifyCrowdAgentInRadius )
		pFnNotifyCrowdAgentInRadius = (UFunction*) UObject::GObjObjects()->Data[ 41715 ];

	AGamePlayerController_eventNotifyCrowdAgentInRadius_Parms NotifyCrowdAgentInRadius_Parms;
	NotifyCrowdAgentInRadius_Parms.Agent = Agent;

	this->ProcessEvent ( pFnNotifyCrowdAgentInRadius, &NotifyCrowdAgentInRadius_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGamePlayerController::eventNotifyCrowdAgentRefresh ( )
{
	static UFunction* pFnNotifyCrowdAgentRefresh = NULL;

	if ( ! pFnNotifyCrowdAgentRefresh )
		pFnNotifyCrowdAgentRefresh = (UFunction*) UObject::GObjObjects()->Data[ 41714 ];

	AGamePlayerController_eventNotifyCrowdAgentRefresh_Parms NotifyCrowdAgentRefresh_Parms;

	this->ProcessEvent ( pFnNotifyCrowdAgentRefresh, &NotifyCrowdAgentRefresh_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AGamePlayerController::CrowdDebug ( unsigned long bEnabled )
{
	static UFunction* pFnCrowdDebug = NULL;

	if ( ! pFnCrowdDebug )
		pFnCrowdDebug = (UFunction*) UObject::GObjObjects()->Data[ 41708 ];

	AGamePlayerController_execCrowdDebug_Parms CrowdDebug_Parms;
	CrowdDebug_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnCrowdDebug, &CrowdDebug_Parms, NULL );
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGamePlayerController::GetUIPlayerIndex ( )
{
	static UFunction* pFnGetUIPlayerIndex = NULL;

	if ( ! pFnGetUIPlayerIndex )
		pFnGetUIPlayerIndex = (UFunction*) UObject::GObjObjects()->Data[ 41706 ];

	AGamePlayerController_execGetUIPlayerIndex_Parms GetUIPlayerIndex_Parms;

	pFnGetUIPlayerIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUIPlayerIndex, &GetUIPlayerIndex_Parms, NULL );

	pFnGetUIPlayerIndex->FunctionFlags |= 0x400;

	return GetUIPlayerIndex_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// [0x00020002] 
// Parameters infos:
// class USeqAct_ToggleMouseCursor* inAction                       ( CPF_Parm )

void AGamePlayerController::OnToggleMouseCursor ( class USeqAct_ToggleMouseCursor* inAction )
{
	static UFunction* pFnOnToggleMouseCursor = NULL;

	if ( ! pFnOnToggleMouseCursor )
		pFnOnToggleMouseCursor = (UFunction*) UObject::GObjObjects()->Data[ 41702 ];

	AGamePlayerController_execOnToggleMouseCursor_Parms OnToggleMouseCursor_Parms;
	OnToggleMouseCursor_Parms.inAction = inAction;

	this->ProcessEvent ( pFnOnToggleMouseCursor, &OnToggleMouseCursor_Parms, NULL );
};

// Function GameFramework.GameCheatManager.OnRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void UGameCheatManager::OnRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnOnRequestComplete = NULL;

	if ( ! pFnOnRequestComplete )
		pFnOnRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 42581 ];

	UGameCheatManager_execOnRequestComplete_Parms OnRequestComplete_Parms;
	OnRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnRequestComplete_Parms.Response = Response;
	OnRequestComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent ( pFnOnRequestComplete, &OnRequestComplete_Parms, NULL );
};

// Function GameFramework.GameCheatManager.TestHttp
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Verb                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Payload                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bSendParallelRequest           ( CPF_OptionalParm | CPF_Parm )

void UGameCheatManager::TestHttp ( struct FString Verb, struct FString Payload, struct FString URL, unsigned long bSendParallelRequest )
{
	static UFunction* pFnTestHttp = NULL;

	if ( ! pFnTestHttp )
		pFnTestHttp = (UFunction*) UObject::GObjObjects()->Data[ 42575 ];

	UGameCheatManager_execTestHttp_Parms TestHttp_Parms;
	memcpy ( &TestHttp_Parms.Verb, &Verb, 0xC );
	memcpy ( &TestHttp_Parms.Payload, &Payload, 0xC );
	memcpy ( &TestHttp_Parms.URL, &URL, 0xC );
	TestHttp_Parms.bSendParallelRequest = bSendParallelRequest;

	this->ProcessEvent ( pFnTestHttp, &TestHttp_Parms, NULL );
};

// Function GameFramework.GameCheatManager.EnableDebugCamera
// [0x00820002] 
// Parameters infos:
// unsigned long                  bEnableDebugText               ( CPF_Parm )

void UGameCheatManager::EnableDebugCamera ( unsigned long bEnableDebugText )
{
	static UFunction* pFnEnableDebugCamera = NULL;

	if ( ! pFnEnableDebugCamera )
		pFnEnableDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 42569 ];

	UGameCheatManager_execEnableDebugCamera_Parms EnableDebugCamera_Parms;
	EnableDebugCamera_Parms.bEnableDebugText = bEnableDebugText;

	this->ProcessEvent ( pFnEnableDebugCamera, &EnableDebugCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// [0x00824202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bToggleDebugCameraOff          ( CPF_OptionalParm | CPF_Parm )

void UGameCheatManager::TeleportPawnToCamera ( unsigned long bToggleDebugCameraOff )
{
	static UFunction* pFnTeleportPawnToCamera = NULL;

	if ( ! pFnTeleportPawnToCamera )
		pFnTeleportPawnToCamera = (UFunction*) UObject::GObjObjects()->Data[ 42563 ];

	UGameCheatManager_execTeleportPawnToCamera_Parms TeleportPawnToCamera_Parms;
	TeleportPawnToCamera_Parms.bToggleDebugCameraOff = bToggleDebugCameraOff;

	this->ProcessEvent ( pFnTeleportPawnToCamera, &TeleportPawnToCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.ToggleDebugCamera
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bDrawDebugText                 ( CPF_OptionalParm | CPF_Parm )

void UGameCheatManager::ToggleDebugCamera ( unsigned long bDrawDebugText )
{
	static UFunction* pFnToggleDebugCamera = NULL;

	if ( ! pFnToggleDebugCamera )
		pFnToggleDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 42559 ];

	UGameCheatManager_execToggleDebugCamera_Parms ToggleDebugCamera_Parms;
	ToggleDebugCamera_Parms.bDrawDebugText = bDrawDebugText;

	this->ProcessEvent ( pFnToggleDebugCamera, &ToggleDebugCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.PatchDebugCameraController
// [0x00020002] 
// Parameters infos:

void UGameCheatManager::PatchDebugCameraController ( )
{
	static UFunction* pFnPatchDebugCameraController = NULL;

	if ( ! pFnPatchDebugCameraController )
		pFnPatchDebugCameraController = (UFunction*) UObject::GObjObjects()->Data[ 42557 ];

	UGameCheatManager_execPatchDebugCameraController_Parms PatchDebugCameraController_Parms;

	this->ProcessEvent ( pFnPatchDebugCameraController, &PatchDebugCameraController_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitDebugColor
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::InitDebugColor ( )
{
	static UFunction* pFnInitDebugColor = NULL;

	if ( ! pFnInitDebugColor )
		pFnInitDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 42826 ];

	AGameCrowdAgent_execInitDebugColor_Parms InitDebugColor_Parms;

	this->ProcessEvent ( pFnInitDebugColor, &InitDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameCrowdAgent::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 42823 ];

	AGameCrowdAgent_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameCrowdAgent::GetDestString ( )
{
	static UFunction* pFnGetDestString = NULL;

	if ( ! pFnGetDestString )
		pFnGetDestString = (UFunction*) UObject::GObjObjects()->Data[ 42820 ];

	AGameCrowdAgent_execGetDestString_Parms GetDestString_Parms;

	this->ProcessEvent ( pFnGetDestString, &GetDestString_Parms, NULL );

	return GetDestString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AGameCrowdAgent::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 42804 ];

	AGameCrowdAgent_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AGameCrowdAgent::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 42799 ];

	AGameCrowdAgent_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

struct FVector AGameCrowdAgent::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 42793 ];

	AGameCrowdAgent_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventInitNavigationHandle ( )
{
	static UFunction* pFnInitNavigationHandle = NULL;

	if ( ! pFnInitNavigationHandle )
		pFnInitNavigationHandle = (UFunction*) UObject::GObjObjects()->Data[ 42792 ];

	AGameCrowdAgent_eventInitNavigationHandle_Parms InitNavigationHandle_Parms;

	this->ProcessEvent ( pFnInitNavigationHandle, &InitNavigationHandle_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )

void AGameCrowdAgent::eventOverlappedActorEvent ( class AActor* A )
{
	static UFunction* pFnOverlappedActorEvent = NULL;

	if ( ! pFnOverlappedActorEvent )
		pFnOverlappedActorEvent = (UFunction*) UObject::GObjObjects()->Data[ 42790 ];

	AGameCrowdAgent_eventOverlappedActorEvent_Parms OverlappedActorEvent_Parms;
	OverlappedActorEvent_Parms.A = A;

	this->ProcessEvent ( pFnOverlappedActorEvent, &OverlappedActorEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024002] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 42782 ];

	AGameCrowdAgent_execTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventFireDeathEvent ( )
{
	static UFunction* pFnFireDeathEvent = NULL;

	if ( ! pFnFireDeathEvent )
		pFnFireDeathEvent = (UFunction*) UObject::GObjObjects()->Data[ 42781 ];

	AGameCrowdAgent_eventFireDeathEvent_Parms FireDeathEvent_Parms;

	this->ProcessEvent ( pFnFireDeathEvent, &FireDeathEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AGameCrowdAgent::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 42779 ];

	AGameCrowdAgent_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  DestinationActor               ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::eventUpdateIntermediatePoint ( class AActor* DestinationActor )
{
	static UFunction* pFnUpdateIntermediatePoint = NULL;

	if ( ! pFnUpdateIntermediatePoint )
		pFnUpdateIntermediatePoint = (UFunction*) UObject::GObjObjects()->Data[ 42777 ];

	AGameCrowdAgent_eventUpdateIntermediatePoint_Parms UpdateIntermediatePoint_Parms;
	UpdateIntermediatePoint_Parms.DestinationActor = DestinationActor;

	this->ProcessEvent ( pFnUpdateIntermediatePoint, &UpdateIntermediatePoint_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AGameCrowdAgent::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 42769 ];

	AGameCrowdAgent_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdAgent::IsIdle ( )
{
	static UFunction* pFnIsIdle = NULL;

	if ( ! pFnIsIdle )
		pFnIsIdle = (UFunction*) UObject::GObjObjects()->Data[ 42767 ];

	AGameCrowdAgent_execIsIdle_Parms IsIdle_Parms;

	pFnIsIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsIdle, &IsIdle_Parms, NULL );

	pFnIsIdle->FunctionFlags |= 0x400;

	return IsIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameCrowdAgentBehavior* BehaviorArchetype              ( CPF_Parm )

void AGameCrowdAgent::SetCurrentBehavior ( class UGameCrowdAgentBehavior* BehaviorArchetype )
{
	static UFunction* pFnSetCurrentBehavior = NULL;

	if ( ! pFnSetCurrentBehavior )
		pFnSetCurrentBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42756 ];

	AGameCrowdAgent_execSetCurrentBehavior_Parms SetCurrentBehavior_Parms;
	SetCurrentBehavior_Parms.BehaviorArchetype = BehaviorArchetype;

	pFnSetCurrentBehavior->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentBehavior, &SetCurrentBehavior_Parms, NULL );

	pFnSetCurrentBehavior->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42765 ];

	AGameCrowdAgent_eventStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  EventType                      ( CPF_Parm )
// class AActor*                  InInstigator                   ( CPF_Parm )
// unsigned long                  bViralCause                    ( CPF_Parm )
// unsigned long                  bPropagateViralFlag            ( CPF_Parm )

void AGameCrowdAgent::eventHandleBehaviorEvent ( unsigned char EventType, class AActor* InInstigator, unsigned long bViralCause, unsigned long bPropagateViralFlag )
{
	static UFunction* pFnHandleBehaviorEvent = NULL;

	if ( ! pFnHandleBehaviorEvent )
		pFnHandleBehaviorEvent = (UFunction*) UObject::GObjObjects()->Data[ 42759 ];

	AGameCrowdAgent_eventHandleBehaviorEvent_Parms HandleBehaviorEvent_Parms;
	HandleBehaviorEvent_Parms.EventType = EventType;
	HandleBehaviorEvent_Parms.InInstigator = InInstigator;
	HandleBehaviorEvent_Parms.bViralCause = bViralCause;
	HandleBehaviorEvent_Parms.bPropagateViralFlag = bPropagateViralFlag;

	this->ProcessEvent ( pFnHandleBehaviorEvent, &HandleBehaviorEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00020002] 
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorObject              ( CPF_Parm )

void AGameCrowdAgent::ActivateInstancedBehavior ( class UGameCrowdAgentBehavior* NewBehaviorObject )
{
	static UFunction* pFnActivateInstancedBehavior = NULL;

	if ( ! pFnActivateInstancedBehavior )
		pFnActivateInstancedBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42757 ];

	AGameCrowdAgent_execActivateInstancedBehavior_Parms ActivateInstancedBehavior_Parms;
	ActivateInstancedBehavior_Parms.NewBehaviorObject = NewBehaviorObject;

	this->ProcessEvent ( pFnActivateInstancedBehavior, &ActivateInstancedBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           ( CPF_Parm )
// class AActor*                  LookAtActor                    ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::eventActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor )
{
	static UFunction* pFnActivateBehavior = NULL;

	if ( ! pFnActivateBehavior )
		pFnActivateBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42753 ];

	AGameCrowdAgent_eventActivateBehavior_Parms ActivateBehavior_Parms;
	ActivateBehavior_Parms.NewBehaviorArchetype = NewBehaviorArchetype;
	ActivateBehavior_Parms.LookAtActor = LookAtActor;

	this->ProcessEvent ( pFnActivateBehavior, &ActivateBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetSeePlayer ( )
{
	static UFunction* pFnResetSeePlayer = NULL;

	if ( ! pFnResetSeePlayer )
		pFnResetSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 42752 ];

	AGameCrowdAgent_execResetSeePlayer_Parms ResetSeePlayer_Parms;

	this->ProcessEvent ( pFnResetSeePlayer, &ResetSeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::TryRandomBehavior ( )
{
	static UFunction* pFnTryRandomBehavior = NULL;

	if ( ! pFnTryRandomBehavior )
		pFnTryRandomBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42749 ];

	AGameCrowdAgent_execTryRandomBehavior_Parms TryRandomBehavior_Parms;

	this->ProcessEvent ( pFnTryRandomBehavior, &TryRandomBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AGameCrowdAgent::eventNotifySeePlayer ( class APlayerController* PC )
{
	static UFunction* pFnNotifySeePlayer = NULL;

	if ( ! pFnNotifySeePlayer )
		pFnNotifySeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 42745 ];

	AGameCrowdAgent_eventNotifySeePlayer_Parms NotifySeePlayer_Parms;
	NotifySeePlayer_Parms.PC = PC;

	this->ProcessEvent ( pFnNotifySeePlayer, &NotifySeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::PlaySpawnBehavior ( )
{
	static UFunction* pFnPlaySpawnBehavior = NULL;

	if ( ! pFnPlaySpawnBehavior )
		pFnPlaySpawnBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42744 ];

	AGameCrowdAgent_execPlaySpawnBehavior_Parms PlaySpawnBehavior_Parms;

	this->ProcessEvent ( pFnPlaySpawnBehavior, &PlaySpawnBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventHandlePotentialAgentEncounter ( )
{
	static UFunction* pFnHandlePotentialAgentEncounter = NULL;

	if ( ! pFnHandlePotentialAgentEncounter )
		pFnHandlePotentialAgentEncounter = (UFunction*) UObject::GObjObjects()->Data[ 42743 ];

	AGameCrowdAgent_eventHandlePotentialAgentEncounter_Parms HandlePotentialAgentEncounter_Parms;

	this->ProcessEvent ( pFnHandlePotentialAgentEncounter, &HandlePotentialAgentEncounter_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42742 ];

	AGameCrowdAgent_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	this->ProcessEvent ( pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42741 ];

	AGameCrowdAgent_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayAgentAnimation* Action                         ( CPF_Parm )

void AGameCrowdAgent::OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42739 ];

	AGameCrowdAgent_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;
	OnPlayAgentAnimation_Parms.Action = Action;

	this->ProcessEvent ( pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00C20102] 
// Parameters infos:
// class AActor*                  SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )
// float                          AgentWarmupTime                ( CPF_Parm )
// unsigned long                  bWarmupPosition                ( CPF_Parm )
// unsigned long                  bCheckWarmupVisibility         ( CPF_Parm )
// TArray< struct FCrowdSpawnerPlayerInfo > PlayerInfo                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdAgent::InitializeAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, unsigned long bWarmupPosition, unsigned long bCheckWarmupVisibility, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo )
{
	static UFunction* pFnInitializeAgent = NULL;

	if ( ! pFnInitializeAgent )
		pFnInitializeAgent = (UFunction*) UObject::GObjObjects()->Data[ 42702 ];

	AGameCrowdAgent_execInitializeAgent_Parms InitializeAgent_Parms;
	InitializeAgent_Parms.SpawnLoc = SpawnLoc;
	InitializeAgent_Parms.AgentTemplate = AgentTemplate;
	InitializeAgent_Parms.NewGroup = NewGroup;
	InitializeAgent_Parms.AgentWarmupTime = AgentWarmupTime;
	InitializeAgent_Parms.bWarmupPosition = bWarmupPosition;
	InitializeAgent_Parms.bCheckWarmupVisibility = bCheckWarmupVisibility;

	this->ProcessEvent ( pFnInitializeAgent, &InitializeAgent_Parms, NULL );

	if ( PlayerInfo )
		memcpy ( PlayerInfo, &InitializeAgent_Parms.PlayerInfo, 0xC );
};

// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Pct                            ( CPF_Parm )
// struct FVector                 CurPos                         ( CPF_Parm )
// float                          CurRadius                      ( CPF_Parm )
// struct FVector                 DestPos                        ( CPF_Parm )
// float                          DestRadius                     ( CPF_Parm )

struct FVector AGameCrowdAgent::GetAttemptedSpawnLocation ( float Pct, struct FVector CurPos, float CurRadius, struct FVector DestPos, float DestRadius )
{
	static UFunction* pFnGetAttemptedSpawnLocation = NULL;

	if ( ! pFnGetAttemptedSpawnLocation )
		pFnGetAttemptedSpawnLocation = (UFunction*) UObject::GObjObjects()->Data[ 42692 ];

	AGameCrowdAgent_execGetAttemptedSpawnLocation_Parms GetAttemptedSpawnLocation_Parms;
	GetAttemptedSpawnLocation_Parms.Pct = Pct;
	memcpy ( &GetAttemptedSpawnLocation_Parms.CurPos, &CurPos, 0xC );
	GetAttemptedSpawnLocation_Parms.CurRadius = CurRadius;
	memcpy ( &GetAttemptedSpawnLocation_Parms.DestPos, &DestPos, 0xC );
	GetAttemptedSpawnLocation_Parms.DestRadius = DestRadius;

	this->ProcessEvent ( pFnGetAttemptedSpawnLocation, &GetAttemptedSpawnLocation_Parms, NULL );

	return GetAttemptedSpawnLocation_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnableLightEnvironment        ( CPF_Parm )
// struct FLightingChannelContainer AgentLightingChannel           ( CPF_Parm )
// unsigned long                  bCastShadows                   ( CPF_Parm )

void AGameCrowdAgent::SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 42688 ];

	AGameCrowdAgent_execSetLighting_Parms SetLighting_Parms;
	SetLighting_Parms.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy ( &SetLighting_Parms.AgentLightingChannel, &AgentLightingChannel, 0x4 );
	SetLighting_Parms.bCastShadows = bCastShadows;

	this->ProcessEvent ( pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdAgent::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 42682 ];

	AGameCrowdAgent_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 42681 ];

	AGameCrowdAgent_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetPooledAgent ( )
{
	static UFunction* pFnResetPooledAgent = NULL;

	if ( ! pFnResetPooledAgent )
		pFnResetPooledAgent = (UFunction*) UObject::GObjObjects()->Data[ 42680 ];

	AGameCrowdAgent_execResetPooledAgent_Parms ResetPooledAgent_Parms;

	this->ProcessEvent ( pFnResetPooledAgent, &ResetPooledAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.KillAgent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventKillAgent ( )
{
	static UFunction* pFnKillAgent = NULL;

	if ( ! pFnKillAgent )
		pFnKillAgent = (UFunction*) UObject::GObjObjects()->Data[ 42679 ];

	AGameCrowdAgent_eventKillAgent_Parms KillAgent_Parms;

	this->ProcessEvent ( pFnKillAgent, &KillAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00820102] 
// Parameters infos:

void AGameCrowdAgent::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42675 ];

	AGameCrowdAgent_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::SetMaxSpeed ( )
{
	static UFunction* pFnSetMaxSpeed = NULL;

	if ( ! pFnSetMaxSpeed )
		pFnSetMaxSpeed = (UFunction*) UObject::GObjObjects()->Data[ 42674 ];

	AGameCrowdAgent_execSetMaxSpeed_Parms SetMaxSpeed_Parms;

	this->ProcessEvent ( pFnSetMaxSpeed, &SetMaxSpeed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void AGameCrowdAgent::eventSetCurrentDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnSetCurrentDestination = NULL;

	if ( ! pFnSetCurrentDestination )
		pFnSetCurrentDestination = (UFunction*) UObject::GObjObjects()->Data[ 42672 ];

	AGameCrowdAgent_eventSetCurrentDestination_Parms SetCurrentDestination_Parms;
	SetCurrentDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnSetCurrentDestination, &SetCurrentDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventWaitForGroupMembers ( )
{
	static UFunction* pFnWaitForGroupMembers = NULL;

	if ( ! pFnWaitForGroupMembers )
		pFnWaitForGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 42670 ];

	AGameCrowdAgent_eventWaitForGroupMembers_Parms WaitForGroupMembers_Parms;

	this->ProcessEvent ( pFnWaitForGroupMembers, &WaitForGroupMembers_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FBehaviorEntry > BehaviorList                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 BestCameraLoc                  ( CPF_OptionalParm | CPF_Parm )

bool AGameCrowdAgent::PickBehaviorFrom ( TArray< struct FBehaviorEntry > BehaviorList, struct FVector BestCameraLoc )
{
	static UFunction* pFnPickBehaviorFrom = NULL;

	if ( ! pFnPickBehaviorFrom )
		pFnPickBehaviorFrom = (UFunction*) UObject::GObjObjects()->Data[ 42160 ];

	AGameCrowdAgent_execPickBehaviorFrom_Parms PickBehaviorFrom_Parms;
	memcpy ( &PickBehaviorFrom_Parms.BehaviorList, &BehaviorList, 0xC );
	memcpy ( &PickBehaviorFrom_Parms.BestCameraLoc, &BestCameraLoc, 0xC );

	this->ProcessEvent ( pFnPickBehaviorFrom, &PickBehaviorFrom_Parms, NULL );

	return PickBehaviorFrom_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdAgent::IsPanicked ( )
{
	static UFunction* pFnIsPanicked = NULL;

	if ( ! pFnIsPanicked )
		pFnIsPanicked = (UFunction*) UObject::GObjObjects()->Data[ 42657 ];

	AGameCrowdAgent_execIsPanicked_Parms IsPanicked_Parms;

	pFnIsPanicked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPanicked, &IsPanicked_Parms, NULL );

	pFnIsPanicked->FunctionFlags |= 0x400;

	return IsPanicked_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameCrowdAgent::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 42655 ];

	AGameCrowdAgent_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AGameCrowdAgent::GetCollisionExtent ( )
{
	static UFunction* pFnGetCollisionExtent = NULL;

	if ( ! pFnGetCollisionExtent )
		pFnGetCollisionExtent = (UFunction*) UObject::GObjObjects()->Data[ 42653 ];

	AGameCrowdAgent_execGetCollisionExtent_Parms GetCollisionExtent_Parms;

	pFnGetCollisionExtent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCollisionExtent, &GetCollisionExtent_Parms, NULL );

	pFnGetCollisionExtent->FunctionFlags |= 0x400;

	return GetCollisionExtent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::CreateAttachments ( )
{
	static UFunction* pFnCreateAttachments = NULL;

	if ( ! pFnCreateAttachments )
		pFnCreateAttachments = (UFunction*) UObject::GObjObjects()->Data[ 42887 ];

	AGameCrowdAgentSkeletal_execCreateAttachments_Parms CreateAttachments_Parms;

	this->ProcessEvent ( pFnCreateAttachments, &CreateAttachments_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void AGameCrowdAgentSkeletal::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 42883 ];

	AGameCrowdAgentSkeletal_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42882 ];

	AGameCrowdAgentSkeletal_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	this->ProcessEvent ( pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42881 ];

	AGameCrowdAgentSkeletal_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventClearLatentAnimation ( )
{
	static UFunction* pFnClearLatentAnimation = NULL;

	if ( ! pFnClearLatentAnimation )
		pFnClearLatentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42880 ];

	AGameCrowdAgentSkeletal_eventClearLatentAnimation_Parms ClearLatentAnimation_Parms;

	this->ProcessEvent ( pFnClearLatentAnimation, &ClearLatentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayAgentAnimation* Action                         ( CPF_Parm )

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42878 ];

	AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;
	OnPlayAgentAnimation_Parms.Action = Action;

	this->ProcessEvent ( pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bRootMotionEnabled             ( CPF_Parm )

void AGameCrowdAgentSkeletal::SetRootMotion ( unsigned long bRootMotionEnabled )
{
	static UFunction* pFnSetRootMotion = NULL;

	if ( ! pFnSetRootMotion )
		pFnSetRootMotion = (UFunction*) UObject::GObjObjects()->Data[ 42876 ];

	AGameCrowdAgentSkeletal_execSetRootMotion_Parms SetRootMotion_Parms;
	SetRootMotion_Parms.bRootMotionEnabled = bRootMotionEnabled;

	pFnSetRootMotion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRootMotion, &SetRootMotion_Parms, NULL );

	pFnSetRootMotion->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AGameCrowdAgentSkeletal::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 42874 ];

	AGameCrowdAgentSkeletal_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnableLightEnvironment        ( CPF_Parm )
// struct FLightingChannelContainer AgentLightingChannel           ( CPF_Parm )
// unsigned long                  bCastShadows                   ( CPF_Parm )

void AGameCrowdAgentSkeletal::SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 42870 ];

	AGameCrowdAgentSkeletal_execSetLighting_Parms SetLighting_Parms;
	SetLighting_Parms.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy ( &SetLighting_Parms.AgentLightingChannel, &AgentLightingChannel, 0x4 );
	SetLighting_Parms.bCastShadows = bCastShadows;

	this->ProcessEvent ( pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42869 ];

	AGameCrowdAgentSkeletal_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.StopBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgentSM::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42908 ];

	AGameCrowdAgentSM_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// [0x00024002] 
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           ( CPF_Parm )
// class AActor*                  LookAtActor                    ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgentSM::ActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor )
{
	static UFunction* pFnActivateBehavior = NULL;

	if ( ! pFnActivateBehavior )
		pFnActivateBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42905 ];

	AGameCrowdAgentSM_execActivateBehavior_Parms ActivateBehavior_Parms;
	ActivateBehavior_Parms.NewBehaviorArchetype = NewBehaviorArchetype;
	ActivateBehavior_Parms.LookAtActor = LookAtActor;

	this->ProcessEvent ( pFnActivateBehavior, &ActivateBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// [0x00820102] 
// Parameters infos:
// struct FColor                  InC                            ( CPF_Parm )

void AGameCrowdAgentSM::ChangeDebugColor ( struct FColor InC )
{
	static UFunction* pFnChangeDebugColor = NULL;

	if ( ! pFnChangeDebugColor )
		pFnChangeDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 42902 ];

	AGameCrowdAgentSM_execChangeDebugColor_Parms ChangeDebugColor_Parms;
	memcpy ( &ChangeDebugColor_Parms.InC, &InC, 0x4 );

	this->ProcessEvent ( pFnChangeDebugColor, &ChangeDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSM::InitDebugColor ( )
{
	static UFunction* pFnInitDebugColor = NULL;

	if ( ! pFnInitDebugColor )
		pFnInitDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 42901 ];

	AGameCrowdAgentSM_execInitDebugColor_Parms InitDebugColor_Parms;

	this->ProcessEvent ( pFnInitDebugColor, &InitDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSM::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42900 ];

	AGameCrowdAgentSM_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdAgentBehavior::AllowBehaviorAt ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 42158 ];

	UGameCrowdAgentBehavior_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;
	AllowBehaviorAt_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );

	return AllowBehaviorAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdAgentBehavior::AllowThisDestination ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 42191 ];

	UGameCrowdAgentBehavior_execAllowThisDestination_Parms AllowThisDestination_Parms;
	AllowThisDestination_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );

	return AllowThisDestination_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         OtherAgent                     ( CPF_Parm )

void UGameCrowdAgentBehavior::eventPropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent )
{
	static UFunction* pFnPropagateViralBehaviorTo = NULL;

	if ( ! pFnPropagateViralBehaviorTo )
		pFnPropagateViralBehaviorTo = (UFunction*) UObject::GObjObjects()->Data[ 42649 ];

	UGameCrowdAgentBehavior_eventPropagateViralBehaviorTo_Parms PropagateViralBehaviorTo_Parms;
	PropagateViralBehaviorTo_Parms.OtherAgent = OtherAgent;

	this->ProcessEvent ( pFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdAgentBehavior::GetBehaviorInstigator ( )
{
	static UFunction* pFnGetBehaviorInstigator = NULL;

	if ( ! pFnGetBehaviorInstigator )
		pFnGetBehaviorInstigator = (UFunction*) UObject::GObjObjects()->Data[ 42647 ];

	UGameCrowdAgentBehavior_execGetBehaviorInstigator_Parms GetBehaviorInstigator_Parms;

	this->ProcessEvent ( pFnGetBehaviorInstigator, &GetBehaviorInstigator_Parms, NULL );

	return GetBehaviorInstigator_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActionTarget                ( CPF_Parm )

void UGameCrowdAgentBehavior::ActivatedBy ( class AActor* NewActionTarget )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 42645 ];

	UGameCrowdAgentBehavior_execActivatedBy_Parms ActivatedBy_Parms;
	ActivatedBy_Parms.NewActionTarget = NewActionTarget;

	this->ProcessEvent ( pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdAgentBehavior::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 42643 ];

	UGameCrowdAgentBehavior_execGetDestinationActor_Parms GetDestinationActor_Parms;

	this->ProcessEvent ( pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );

	return GetDestinationActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00020000] 
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void UGameCrowdAgentBehavior::ChangingDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 42641 ];

	UGameCrowdAgentBehavior_execChangingDestination_Parms ChangingDestination_Parms;
	ChangingDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdAgentBehavior::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 42639 ];

	UGameCrowdAgentBehavior_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UGameCrowdAgentBehavior::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 42635 ];

	UGameCrowdAgentBehavior_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00020000] 
// Parameters infos:

void UGameCrowdAgentBehavior::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42634 ];

	UGameCrowdAgentBehavior_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdAgentBehavior::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42632 ];

	UGameCrowdAgentBehavior_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdAgentBehavior::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 42630 ];

	UGameCrowdAgentBehavior_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameCrowdAgentBehavior::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 42629 ];

	UGameCrowdAgentBehavior_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	this->ProcessEvent ( pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 CameraLoc                      ( CPF_Parm )

bool UGameCrowdAgentBehavior::CanBeUsedBy ( class AGameCrowdAgent* Agent, struct FVector CameraLoc )
{
	static UFunction* pFnCanBeUsedBy = NULL;

	if ( ! pFnCanBeUsedBy )
		pFnCanBeUsedBy = (UFunction*) UObject::GObjObjects()->Data[ 42625 ];

	UGameCrowdAgentBehavior_execCanBeUsedBy_Parms CanBeUsedBy_Parms;
	CanBeUsedBy_Parms.Agent = Agent;
	memcpy ( &CanBeUsedBy_Parms.CameraLoc, &CameraLoc, 0xC );

	this->ProcessEvent ( pFnCanBeUsedBy, &CanBeUsedBy_Parms, NULL );

	return CanBeUsedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameCrowdAgentBehavior::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 42623 ];

	UGameCrowdAgentBehavior_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	pFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdAgentBehavior::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 42621 ];

	UGameCrowdAgentBehavior_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// [0x00026400] ( FUNC_Native )
// Parameters infos:
// class AGameCrowdBehaviorPoint* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// class AActor*                  Instigator                     ( CPF_Parm )
// struct FVector                 AtLocation                     ( CPF_Parm )
// float                          InRange                        ( CPF_Parm )
// float                          InDuration                     ( CPF_Parm )
// class AActor*                  BaseActor                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRequireLOS                    ( CPF_OptionalParm | CPF_Parm )

class AGameCrowdBehaviorPoint* UGameCrowdAgentBehavior::TriggerCrowdBehavior ( unsigned char EventType, class AActor* Instigator, struct FVector AtLocation, float InRange, float InDuration, class AActor* BaseActor, unsigned long bRequireLOS )
{
	static UFunction* pFnTriggerCrowdBehavior = NULL;

	if ( ! pFnTriggerCrowdBehavior )
		pFnTriggerCrowdBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42612 ];

	UGameCrowdAgentBehavior_execTriggerCrowdBehavior_Parms TriggerCrowdBehavior_Parms;
	TriggerCrowdBehavior_Parms.EventType = EventType;
	TriggerCrowdBehavior_Parms.Instigator = Instigator;
	memcpy ( &TriggerCrowdBehavior_Parms.AtLocation, &AtLocation, 0xC );
	TriggerCrowdBehavior_Parms.InRange = InRange;
	TriggerCrowdBehavior_Parms.InDuration = InDuration;
	TriggerCrowdBehavior_Parms.BaseActor = BaseActor;
	TriggerCrowdBehavior_Parms.bRequireLOS = bRequireLOS;

	pFnTriggerCrowdBehavior->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTriggerCrowdBehavior, &TriggerCrowdBehavior_Parms, NULL );

	pFnTriggerCrowdBehavior->FunctionFlags |= 0x400;

	return TriggerCrowdBehavior_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 42942 ];

	UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42941 ];

	UGameCrowdBehavior_PlayAnimation_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow ( )
{
	static UFunction* pFnPlayAgentAnimationNow = NULL;

	if ( ! pFnPlayAgentAnimationNow )
		pFnPlayAgentAnimationNow = (UFunction*) UObject::GObjObjects()->Data[ 42937 ];

	UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Parms PlayAgentAnimationNow_Parms;

	this->ProcessEvent ( pFnPlayAgentAnimationNow, &PlayAgentAnimationNow_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UGameCrowdBehavior_PlayAnimation::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 42933 ];

	UGameCrowdBehavior_PlayAnimation_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput ( )
{
	static UFunction* pFnSetSequenceOutput = NULL;

	if ( ! pFnSetSequenceOutput )
		pFnSetSequenceOutput = (UFunction*) UObject::GObjObjects()->Data[ 42932 ];

	UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Parms SetSequenceOutput_Parms;

	pFnSetSequenceOutput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSequenceOutput, &SetSequenceOutput_Parms, NULL );

	pFnSetSequenceOutput->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 42931 ];

	UGameCrowdBehavior_PlayAnimation_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	this->ProcessEvent ( pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_PlayAnimation::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42924 ];

	UGameCrowdBehavior_PlayAnimation_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 42961 ];

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 42958 ];

	UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;
	AllowBehaviorAt_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );

	return AllowBehaviorAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 42955 ];

	UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Parms AllowThisDestination_Parms;
	AllowThisDestination_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );

	return AllowThisDestination_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdBehavior_RunFromPanic::GetBehaviorInstigator ( )
{
	static UFunction* pFnGetBehaviorInstigator = NULL;

	if ( ! pFnGetBehaviorInstigator )
		pFnGetBehaviorInstigator = (UFunction*) UObject::GObjObjects()->Data[ 42953 ];

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorInstigator_Parms GetBehaviorInstigator_Parms;

	this->ProcessEvent ( pFnGetBehaviorInstigator, &GetBehaviorInstigator_Parms, NULL );

	return GetBehaviorInstigator_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42952 ];

	UGameCrowdBehavior_RunFromPanic_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42950 ];

	UGameCrowdBehavior_RunFromPanic_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActionTarget                ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::ActivatedBy ( class AActor* NewActionTarget )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 42946 ];

	UGameCrowdBehavior_RunFromPanic_execActivatedBy_Parms ActivatedBy_Parms;
	ActivatedBy_Parms.NewActionTarget = NewActionTarget;

	this->ProcessEvent ( pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitForGroup::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42970 ];

	UGameCrowdBehavior_WaitForGroup_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 42968 ];

	UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 42965 ];

	UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_WaitForGroup::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42963 ];

	UGameCrowdBehavior_WaitForGroup_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 42983 ];

	UGameCrowdBehavior_WaitInQueue_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 42981 ];

	UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 42979 ];

	UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 42977 ];

	UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Parms GetDestinationActor_Parms;

	this->ProcessEvent ( pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );

	return GetDestinationActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void UGameCrowdBehavior_WaitInQueue::ChangingDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 42975 ];

	UGameCrowdBehavior_WaitInQueue_execChangingDestination_Parms ChangingDestination_Parms;
	ChangingDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitInQueue::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 42973 ];

	UGameCrowdBehavior_WaitInQueue_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   NewDestination                 ( CPF_Parm )

void UGameCrowdGroup::UpdateDestinations ( class AGameCrowdDestination* NewDestination )
{
	static UFunction* pFnUpdateDestinations = NULL;

	if ( ! pFnUpdateDestinations )
		pFnUpdateDestinations = (UFunction*) UObject::GObjObjects()->Data[ 43027 ];

	UGameCrowdGroup_execUpdateDestinations_Parms UpdateDestinations_Parms;
	UpdateDestinations_Parms.NewDestination = NewDestination;

	this->ProcessEvent ( pFnUpdateDestinations, &UpdateDestinations_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdGroup::RemoveMember ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnRemoveMember = NULL;

	if ( ! pFnRemoveMember )
		pFnRemoveMember = (UFunction*) UObject::GObjObjects()->Data[ 43025 ];

	UGameCrowdGroup_execRemoveMember_Parms RemoveMember_Parms;
	RemoveMember_Parms.Agent = Agent;

	this->ProcessEvent ( pFnRemoveMember, &RemoveMember_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdGroup::AddMember ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAddMember = NULL;

	if ( ! pFnAddMember )
		pFnAddMember = (UFunction*) UObject::GObjObjects()->Data[ 43023 ];

	UGameCrowdGroup_execAddMember_Parms AddMember_Parms;
	AddMember_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAddMember, &AddMember_Parms, NULL );
};

// Function GameFramework.GameCrowdInfoVolume.UnTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AGameCrowdInfoVolume::UnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 43039 ];

	AGameCrowdInfoVolume_execUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function GameFramework.GameCrowdInfoVolume.Touch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AGameCrowdInfoVolume::Touch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 43032 ];

	AGameCrowdInfoVolume_execTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] 
// Parameters infos:
// class USeqAct_Toggle*          Action                         ( CPF_Parm )

void AGameCrowdInteractionPoint::OnToggle ( class USeqAct_Toggle* Action )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 41865 ];

	AGameCrowdInteractionPoint_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AGameCrowdBehaviorPoint::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 42991 ];

	AGameCrowdBehaviorPoint_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// [0x00020002] 
// Parameters infos:

void AGameCrowdBehaviorPoint::DestroySelf ( )
{
	static UFunction* pFnDestroySelf = NULL;

	if ( ! pFnDestroySelf )
		pFnDestroySelf = (UFunction*) UObject::GObjObjects()->Data[ 42990 ];

	AGameCrowdBehaviorPoint_execDestroySelf_Parms DestroySelf_Parms;

	this->ProcessEvent ( pFnDestroySelf, &DestroySelf_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdBehaviorPoint::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42989 ];

	AGameCrowdBehaviorPoint_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.DrawDebug
// [0x00C24102] 
// Parameters infos:
// unsigned long                  bPresistent                    ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FCrowdSpawnerPlayerInfo > PlayerInfo                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdDestination::DrawDebug ( unsigned long bPresistent, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 42225 ];

	AGameCrowdDestination_execDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.bPresistent = bPresistent;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );

	if ( PlayerInfo )
		memcpy ( PlayerInfo, &DrawDebug_Parms.PlayerInfo, 0xC );
};

// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameCrowdDestination::GetDestinationRadius ( )
{
	static UFunction* pFnGetDestinationRadius = NULL;

	if ( ! pFnGetDestinationRadius )
		pFnGetDestinationRadius = (UFunction*) UObject::GObjObjects()->Data[ 42223 ];

	AGameCrowdDestination_execGetDestinationRadius_Parms GetDestinationRadius_Parms;

	this->ProcessEvent ( pFnGetDestinationRadius, &GetDestinationRadius_Parms, NULL );

	return GetDestinationRadius_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// [0x00420102] 
// Parameters infos:
// float                          MaxSpawnDist                   ( CPF_Parm )
// TArray< struct FCrowdSpawnerPlayerInfo > PlayerInfo                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdDestination::PrioritizeSpawnPoint ( float MaxSpawnDist, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo )
{
	static UFunction* pFnPrioritizeSpawnPoint = NULL;

	if ( ! pFnPrioritizeSpawnPoint )
		pFnPrioritizeSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 42217 ];

	AGameCrowdDestination_execPrioritizeSpawnPoint_Parms PrioritizeSpawnPoint_Parms;
	PrioritizeSpawnPoint_Parms.MaxSpawnDist = MaxSpawnDist;

	this->ProcessEvent ( pFnPrioritizeSpawnPoint, &PrioritizeSpawnPoint_Parms, NULL );

	if ( PlayerInfo )
		memcpy ( PlayerInfo, &PrioritizeSpawnPoint_Parms.PlayerInfo, 0xC );
};

// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MaxSpawnDistSq                 ( CPF_Parm )
// unsigned long                  bForceNavMeshPathing           ( CPF_Parm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// TArray< struct FCrowdSpawnerPlayerInfo > PlayerInfo                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdDestination::AnalyzeSpawnPoint ( float MaxSpawnDistSq, unsigned long bForceNavMeshPathing, class UNavigationHandle* NavHandle, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo )
{
	static UFunction* pFnAnalyzeSpawnPoint = NULL;

	if ( ! pFnAnalyzeSpawnPoint )
		pFnAnalyzeSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 42202 ];

	AGameCrowdDestination_execAnalyzeSpawnPoint_Parms AnalyzeSpawnPoint_Parms;
	AnalyzeSpawnPoint_Parms.MaxSpawnDistSq = MaxSpawnDistSq;
	AnalyzeSpawnPoint_Parms.bForceNavMeshPathing = bForceNavMeshPathing;
	AnalyzeSpawnPoint_Parms.NavHandle = NavHandle;

	this->ProcessEvent ( pFnAnalyzeSpawnPoint, &AnalyzeSpawnPoint_Parms, NULL );

	if ( PlayerInfo )
		memcpy ( PlayerInfo, &AnalyzeSpawnPoint_Parms.PlayerInfo, 0xC );

	return AnalyzeSpawnPoint_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00C20102] 
// Parameters infos:
// class USeqAct_GameCrowdSpawner* Spawner                        ( CPF_Parm )
// struct FVector                 SpawnPos                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdDestination::GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 42196 ];

	AGameCrowdDestination_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.Spawner = Spawner;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnPos )
		memcpy ( SpawnPos, &GetSpawnPosition_Parms.SpawnPos, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameCrowdDestination::GetSpawnRadius ( )
{
	static UFunction* pFnGetSpawnRadius = NULL;

	if ( ! pFnGetSpawnRadius )
		pFnGetSpawnRadius = (UFunction*) UObject::GObjObjects()->Data[ 42194 ];

	AGameCrowdDestination_execGetSpawnRadius_Parms GetSpawnRadius_Parms;

	this->ProcessEvent ( pFnGetSpawnRadius, &GetSpawnRadius_Parms, NULL );

	return GetSpawnRadius_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

bool AGameCrowdDestination::eventAllowableDestinationFor ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAllowableDestinationFor = NULL;

	if ( ! pFnAllowableDestinationFor )
		pFnAllowableDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 42170 ];

	AGameCrowdDestination_eventAllowableDestinationFor_Parms AllowableDestinationFor_Parms;
	AllowableDestinationFor_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAllowableDestinationFor, &AllowableDestinationFor_Parms, NULL );

	return AllowableDestinationFor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  CheckCnt                       ( CPF_OptionalParm | CPF_Parm )

bool AGameCrowdDestination::AtCapacity ( unsigned char CheckCnt )
{
	static UFunction* pFnAtCapacity = NULL;

	if ( ! pFnAtCapacity )
		pFnAtCapacity = (UFunction*) UObject::GObjObjects()->Data[ 42185 ];

	AGameCrowdDestination_execAtCapacity_Parms AtCapacity_Parms;
	AtCapacity_Parms.CheckCnt = CheckCnt;

	this->ProcessEvent ( pFnAtCapacity, &AtCapacity_Parms, NULL );

	return AtCapacity_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ArrivingAgent                  ( CPF_Parm )

void AGameCrowdDestination::eventIncrementCustomerCount ( class AGameCrowdAgent* ArrivingAgent )
{
	static UFunction* pFnIncrementCustomerCount = NULL;

	if ( ! pFnIncrementCustomerCount )
		pFnIncrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 42180 ];

	AGameCrowdDestination_eventIncrementCustomerCount_Parms IncrementCustomerCount_Parms;
	IncrementCustomerCount_Parms.ArrivingAgent = ArrivingAgent;

	this->ProcessEvent ( pFnIncrementCustomerCount, &IncrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         DepartingAgent                 ( CPF_Parm )

void AGameCrowdDestination::eventDecrementCustomerCount ( class AGameCrowdAgent* DepartingAgent )
{
	static UFunction* pFnDecrementCustomerCount = NULL;

	if ( ! pFnDecrementCustomerCount )
		pFnDecrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 42172 ];

	AGameCrowdDestination_eventDecrementCustomerCount_Parms DecrementCustomerCount_Parms;
	DecrementCustomerCount_Parms.DepartingAgent = DepartingAgent;

	this->ProcessEvent ( pFnDecrementCustomerCount, &DecrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// unsigned long                  bIgnoreRestrictions            ( CPF_Parm )

void AGameCrowdDestination::PickNewDestinationFor ( class AGameCrowdAgent* Agent, unsigned long bIgnoreRestrictions )
{
	static UFunction* pFnPickNewDestinationFor = NULL;

	if ( ! pFnPickNewDestinationFor )
		pFnPickNewDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 42162 ];

	AGameCrowdDestination_execPickNewDestinationFor_Parms PickNewDestinationFor_Parms;
	PickNewDestinationFor_Parms.Agent = Agent;
	PickNewDestinationFor_Parms.bIgnoreRestrictions = bIgnoreRestrictions;

	this->ProcessEvent ( pFnPickNewDestinationFor, &PickNewDestinationFor_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdDestination::eventReachedDestination ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 42152 ];

	AGameCrowdDestination_eventReachedDestination_Parms ReachedDestination_Parms;
	ReachedDestination_Parms.Agent = Agent;

	this->ProcessEvent ( pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 42151 ];

	AGameCrowdDestination_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42148 ];

	AGameCrowdDestination_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 TestPosition                   ( CPF_Parm )
// unsigned long                  bTestExactly                   ( CPF_Parm )

bool AGameCrowdDestination::ReachedByAgent ( class AGameCrowdAgent* Agent, struct FVector TestPosition, unsigned long bTestExactly )
{
	static UFunction* pFnReachedByAgent = NULL;

	if ( ! pFnReachedByAgent )
		pFnReachedByAgent = (UFunction*) UObject::GObjObjects()->Data[ 42143 ];

	AGameCrowdDestination_execReachedByAgent_Parms ReachedByAgent_Parms;
	ReachedByAgent_Parms.Agent = Agent;
	memcpy ( &ReachedByAgent_Parms.TestPosition, &TestPosition, 0xC );
	ReachedByAgent_Parms.bTestExactly = bTestExactly;

	pFnReachedByAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReachedByAgent, &ReachedByAgent_Parms, NULL );

	pFnReachedByAgent->FunctionFlags |= 0x400;

	return ReachedByAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestinationQueuePoint::HasCustomer ( )
{
	static UFunction* pFnHasCustomer = NULL;

	if ( ! pFnHasCustomer )
		pFnHasCustomer = (UFunction*) UObject::GObjObjects()->Data[ 42178 ];

	AGameCrowdDestinationQueuePoint_execHasCustomer_Parms HasCustomer_Parms;

	this->ProcessEvent ( pFnHasCustomer, &HasCustomer_Parms, NULL );

	return HasCustomer_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         OldCustomer                    ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::ClearQueue ( class AGameCrowdAgent* OldCustomer )
{
	static UFunction* pFnClearQueue = NULL;

	if ( ! pFnClearQueue )
		pFnClearQueue = (UFunction*) UObject::GObjObjects()->Data[ 43019 ];

	AGameCrowdDestinationQueuePoint_execClearQueue_Parms ClearQueue_Parms;
	ClearQueue_Parms.OldCustomer = OldCustomer;

	this->ProcessEvent ( pFnClearQueue, &ClearQueue_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         NewCustomer                    ( CPF_Parm )
// class AGameCrowdInteractionPoint* PreviousPosition               ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::AddCustomer ( class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition )
{
	static UFunction* pFnAddCustomer = NULL;

	if ( ! pFnAddCustomer )
		pFnAddCustomer = (UFunction*) UObject::GObjObjects()->Data[ 43016 ];

	AGameCrowdDestinationQueuePoint_execAddCustomer_Parms AddCustomer_Parms;
	AddCustomer_Parms.NewCustomer = NewCustomer;
	AddCustomer_Parms.PreviousPosition = PreviousPosition;

	this->ProcessEvent ( pFnAddCustomer, &AddCustomer_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void AGameCrowdDestinationQueuePoint::ActuallyAdvance ( )
{
	static UFunction* pFnActuallyAdvance = NULL;

	if ( ! pFnActuallyAdvance )
		pFnActuallyAdvance = (UFunction*) UObject::GObjObjects()->Data[ 43012 ];

	AGameCrowdDestinationQueuePoint_execActuallyAdvance_Parms ActuallyAdvance_Parms;

	this->ProcessEvent ( pFnActuallyAdvance, &ActuallyAdvance_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00020102] 
// Parameters infos:
// class AGameCrowdInteractionPoint* FrontPosition                  ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo ( class AGameCrowdInteractionPoint* FrontPosition )
{
	static UFunction* pFnAdvanceCustomerTo = NULL;

	if ( ! pFnAdvanceCustomerTo )
		pFnAdvanceCustomerTo = (UFunction*) UObject::GObjObjects()->Data[ 43010 ];

	AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Parms AdvanceCustomerTo_Parms;
	AdvanceCustomerTo_Parms.FrontPosition = FrontPosition;

	this->ProcessEvent ( pFnAdvanceCustomerTo, &AdvanceCustomerTo_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::eventReachedDestination ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 43007 ];

	AGameCrowdDestinationQueuePoint_eventReachedDestination_Parms ReachedDestination_Parms;
	ReachedDestination_Parms.Agent = Agent;

	this->ProcessEvent ( pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestinationQueuePoint::HasSpace ( )
{
	static UFunction* pFnHasSpace = NULL;

	if ( ! pFnHasSpace )
		pFnHasSpace = (UFunction*) UObject::GObjObjects()->Data[ 42183 ];

	AGameCrowdDestinationQueuePoint_execHasSpace_Parms HasSpace_Parms;

	this->ProcessEvent ( pFnHasSpace, &HasSpace_Parms, NULL );

	return HasSpace_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 TestPosition                   ( CPF_Parm )

bool AGameCrowdDestinationQueuePoint::QueueReachedBy ( class AGameCrowdAgent* Agent, struct FVector TestPosition )
{
	static UFunction* pFnQueueReachedBy = NULL;

	if ( ! pFnQueueReachedBy )
		pFnQueueReachedBy = (UFunction*) UObject::GObjObjects()->Data[ 43003 ];

	AGameCrowdDestinationQueuePoint_execQueueReachedBy_Parms QueueReachedBy_Parms;
	QueueReachedBy_Parms.Agent = Agent;
	memcpy ( &QueueReachedBy_Parms.TestPosition, &TestPosition, 0xC );

	pFnQueueReachedBy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueueReachedBy, &QueueReachedBy_Parms, NULL );

	pFnQueueReachedBy->FunctionFlags |= 0x400;

	return QueueReachedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// [0x00C20802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class AGameCrowdAgent* AGameCrowdPopulationManager::eventCreateNewAgent ( class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnCreateNewAgent = NULL;

	if ( ! pFnCreateNewAgent )
		pFnCreateNewAgent = (UFunction*) UObject::GObjObjects()->Data[ 43181 ];

	AGameCrowdPopulationManager_eventCreateNewAgent_Parms CreateNewAgent_Parms;
	CreateNewAgent_Parms.SpawnLoc = SpawnLoc;
	CreateNewAgent_Parms.AgentTemplate = AgentTemplate;
	CreateNewAgent_Parms.NewGroup = NewGroup;

	this->ProcessEvent ( pFnCreateNewAgent, &CreateNewAgent_Parms, NULL );

	if ( Item )
		memcpy ( Item, &CreateNewAgent_Parms.Item, 0x7C );

	return CreateNewAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.Warmup
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            WarmupNum                      ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdPopulationManager::Warmup ( int WarmupNum, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnWarmup = NULL;

	if ( ! pFnWarmup )
		pFnWarmup = (UFunction*) UObject::GObjObjects()->Data[ 43177 ];

	AGameCrowdPopulationManager_execWarmup_Parms Warmup_Parms;
	Warmup_Parms.WarmupNum = WarmupNum;

	pFnWarmup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWarmup, &Warmup_Parms, NULL );

	pFnWarmup->FunctionFlags |= 0x400;

	if ( Item )
		memcpy ( Item, &Warmup_Parms.Item, 0x7C );

	return Warmup_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   SpawnLoc                       ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent ( class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnSpawnAgent = NULL;

	if ( ! pFnSpawnAgent )
		pFnSpawnAgent = (UFunction*) UObject::GObjObjects()->Data[ 43173 ];

	AGameCrowdPopulationManager_execSpawnAgent_Parms SpawnAgent_Parms;
	SpawnAgent_Parms.SpawnLoc = SpawnLoc;

	pFnSpawnAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpawnAgent, &SpawnAgent_Parms, NULL );

	pFnSpawnAgent->FunctionFlags |= 0x400;

	if ( Item )
		memcpy ( Item, &SpawnAgent_Parms.Item, 0x7C );

	return SpawnAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SpawnerIdx                     ( CPF_Parm )
// class AGameCrowdDestination*   SpawnLoc                       ( CPF_Parm )

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgentByIdx ( int SpawnerIdx, class AGameCrowdDestination* SpawnLoc )
{
	static UFunction* pFnSpawnAgentByIdx = NULL;

	if ( ! pFnSpawnAgentByIdx )
		pFnSpawnAgentByIdx = (UFunction*) UObject::GObjObjects()->Data[ 43169 ];

	AGameCrowdPopulationManager_execSpawnAgentByIdx_Parms SpawnAgentByIdx_Parms;
	SpawnAgentByIdx_Parms.SpawnerIdx = SpawnerIdx;
	SpawnAgentByIdx_Parms.SpawnLoc = SpawnLoc;

	pFnSpawnAgentByIdx->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpawnAgentByIdx, &SpawnAgentByIdx_Parms, NULL );

	pFnSpawnAgentByIdx->FunctionFlags |= 0x400;

	return SpawnAgentByIdx_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Candidate                      ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdPopulationManager::ValidateSpawnAt ( class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnValidateSpawnAt = NULL;

	if ( ! pFnValidateSpawnAt )
		pFnValidateSpawnAt = (UFunction*) UObject::GObjObjects()->Data[ 43158 ];

	AGameCrowdPopulationManager_execValidateSpawnAt_Parms ValidateSpawnAt_Parms;
	ValidateSpawnAt_Parms.Candidate = Candidate;

	this->ProcessEvent ( pFnValidateSpawnAt, &ValidateSpawnAt_Parms, NULL );

	if ( Item )
		memcpy ( Item, &ValidateSpawnAt_Parms.Item, 0x7C );

	return ValidateSpawnAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// [0x00420002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint ( class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnAddPrioritizedSpawnPoint = NULL;

	if ( ! pFnAddPrioritizedSpawnPoint )
		pFnAddPrioritizedSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 43153 ];

	AGameCrowdPopulationManager_execAddPrioritizedSpawnPoint_Parms AddPrioritizedSpawnPoint_Parms;
	AddPrioritizedSpawnPoint_Parms.GCD = GCD;

	this->ProcessEvent ( pFnAddPrioritizedSpawnPoint, &AddPrioritizedSpawnPoint_Parms, NULL );

	if ( Item )
		memcpy ( Item, &AddPrioritizedSpawnPoint_Parms.Item, 0x7C );
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// [0x00420002] 
// Parameters infos:
// int                            StartIndex                     ( CPF_Parm )
// int                            NumToUpdate                    ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdPopulationManager::AnalyzeSpawnPoints ( int StartIndex, int NumToUpdate, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnAnalyzeSpawnPoints = NULL;

	if ( ! pFnAnalyzeSpawnPoints )
		pFnAnalyzeSpawnPoints = (UFunction*) UObject::GObjObjects()->Data[ 43145 ];

	AGameCrowdPopulationManager_execAnalyzeSpawnPoints_Parms AnalyzeSpawnPoints_Parms;
	AnalyzeSpawnPoints_Parms.StartIndex = StartIndex;
	AnalyzeSpawnPoints_Parms.NumToUpdate = NumToUpdate;

	this->ProcessEvent ( pFnAnalyzeSpawnPoints, &AnalyzeSpawnPoints_Parms, NULL );

	if ( Item )
		memcpy ( Item, &AnalyzeSpawnPoints_Parms.Item, 0x7C );
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGameCrowdPopulationManager::eventPrioritizeSpawnPoints ( float DeltaTime, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnPrioritizeSpawnPoints = NULL;

	if ( ! pFnPrioritizeSpawnPoints )
		pFnPrioritizeSpawnPoints = (UFunction*) UObject::GObjObjects()->Data[ 43141 ];

	AGameCrowdPopulationManager_eventPrioritizeSpawnPoints_Parms PrioritizeSpawnPoints_Parms;
	PrioritizeSpawnPoints_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPrioritizeSpawnPoints, &PrioritizeSpawnPoints_Parms, NULL );

	if ( Item )
		memcpy ( Item, &PrioritizeSpawnPoints_Parms.Item, 0x7C );
};

// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// [0x00422500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FCrowdSpawnerPlayerInfo > out_PlayerInfo                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdPopulationManager::StaticGetPlayerInfo ( TArray< struct FCrowdSpawnerPlayerInfo >* out_PlayerInfo )
{
	static UFunction* pFnStaticGetPlayerInfo = NULL;

	if ( ! pFnStaticGetPlayerInfo )
		pFnStaticGetPlayerInfo = (UFunction*) UObject::GObjObjects()->Data[ 43137 ];

	AGameCrowdPopulationManager_execStaticGetPlayerInfo_Parms StaticGetPlayerInfo_Parms;

	pFnStaticGetPlayerInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStaticGetPlayerInfo, &StaticGetPlayerInfo_Parms, NULL );

	pFnStaticGetPlayerInfo->FunctionFlags |= 0x400;

	if ( out_PlayerInfo )
		memcpy ( out_PlayerInfo, &StaticGetPlayerInfo_Parms.out_PlayerInfo, 0xC );

	return StaticGetPlayerInfo_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdPopulationManager::GetPlayerInfo ( )
{
	static UFunction* pFnGetPlayerInfo = NULL;

	if ( ! pFnGetPlayerInfo )
		pFnGetPlayerInfo = (UFunction*) UObject::GObjObjects()->Data[ 43135 ];

	AGameCrowdPopulationManager_execGetPlayerInfo_Parms GetPlayerInfo_Parms;

	pFnGetPlayerInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerInfo, &GetPlayerInfo_Parms, NULL );

	pFnGetPlayerInfo->FunctionFlags |= 0x400;

	return GetPlayerInfo_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdDestination*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class AGameCrowdDestination* AGameCrowdPopulationManager::eventPickSpawnPoint ( struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnPickSpawnPoint = NULL;

	if ( ! pFnPickSpawnPoint )
		pFnPickSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 43129 ];

	AGameCrowdPopulationManager_eventPickSpawnPoint_Parms PickSpawnPoint_Parms;

	this->ProcessEvent ( pFnPickSpawnPoint, &PickSpawnPoint_Parms, NULL );

	if ( Item )
		memcpy ( Item, &PickSpawnPoint_Parms.Item, 0x7C );

	return PickSpawnPoint_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AGameCrowdPopulationManager::eventUpdateSpawner ( float DeltaTime, struct FCrowdSpawnInfoItem* Item )
{
	static UFunction* pFnUpdateSpawner = NULL;

	if ( ! pFnUpdateSpawner )
		pFnUpdateSpawner = (UFunction*) UObject::GObjObjects()->Data[ 43121 ];

	AGameCrowdPopulationManager_eventUpdateSpawner_Parms UpdateSpawner_Parms;
	UpdateSpawner_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateSpawner, &UpdateSpawner_Parms, NULL );

	if ( Item )
		memcpy ( Item, &UpdateSpawner_Parms.Item, 0x7C );

	return UpdateSpawner_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameCrowdPopulationManager::UpdateAllSpawners ( float DeltaTime )
{
	static UFunction* pFnUpdateAllSpawners = NULL;

	if ( ! pFnUpdateAllSpawners )
		pFnUpdateAllSpawners = (UFunction*) UObject::GObjObjects()->Data[ 43119 ];

	AGameCrowdPopulationManager_execUpdateAllSpawners_Parms UpdateAllSpawners_Parms;
	UpdateAllSpawners_Parms.DeltaTime = DeltaTime;

	pFnUpdateAllSpawners->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateAllSpawners, &UpdateAllSpawners_Parms, NULL );

	pFnUpdateAllSpawners->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameCrowdPopulationManager::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43117 ];

	AGameCrowdPopulationManager_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdPopulationManager::ShouldDebugDestinations ( )
{
	static UFunction* pFnShouldDebugDestinations = NULL;

	if ( ! pFnShouldDebugDestinations )
		pFnShouldDebugDestinations = (UFunction*) UObject::GObjObjects()->Data[ 43115 ];

	AGameCrowdPopulationManager_execShouldDebugDestinations_Parms ShouldDebugDestinations_Parms;

	this->ProcessEvent ( pFnShouldDebugDestinations, &ShouldDebugDestinations_Parms, NULL );

	return ShouldDebugDestinations_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdPopulationManager::IsSpawningActive ( )
{
	static UFunction* pFnIsSpawningActive = NULL;

	if ( ! pFnIsSpawningActive )
		pFnIsSpawningActive = (UFunction*) UObject::GObjObjects()->Data[ 43112 ];

	AGameCrowdPopulationManager_execIsSpawningActive_Parms IsSpawningActive_Parms;

	this->ProcessEvent ( pFnIsSpawningActive, &IsSpawningActive_Parms, NULL );

	return IsSpawningActive_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// [0x00C20102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdPopulationManager::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 43089 ];

	AGameCrowdPopulationManager_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdPopulationManager::AgentDestroyed ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43085 ];

	AGameCrowdPopulationManager_execAgentDestroyed_Parms AgentDestroyed_Parms;
	AgentDestroyed_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventFlushAllAgents ( )
{
	static UFunction* pFnFlushAllAgents = NULL;

	if ( ! pFnFlushAllAgents )
		pFnFlushAllAgents = (UFunction*) UObject::GObjObjects()->Data[ 43083 ];

	AGameCrowdPopulationManager_eventFlushAllAgents_Parms FlushAllAgents_Parms;

	this->ProcessEvent ( pFnFlushAllAgents, &FlushAllAgents_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FCrowdSpawnInfoItem     Item                           ( CPF_Parm | CPF_NeedCtorLink )

void AGameCrowdPopulationManager::eventFlushAgents ( struct FCrowdSpawnInfoItem Item )
{
	static UFunction* pFnFlushAgents = NULL;

	if ( ! pFnFlushAgents )
		pFnFlushAgents = (UFunction*) UObject::GObjObjects()->Data[ 43080 ];

	AGameCrowdPopulationManager_eventFlushAgents_Parms FlushAgents_Parms;
	memcpy ( &FlushAgents_Parms.Item, &Item, 0x7C );

	this->ProcessEvent ( pFnFlushAgents, &FlushAgents_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       ( CPF_Parm )

int AGameCrowdPopulationManager::eventCreateSpawner ( class USeqAct_GameCrowdPopulationManagerToggle* inAction )
{
	static UFunction* pFnCreateSpawner = NULL;

	if ( ! pFnCreateSpawner )
		pFnCreateSpawner = (UFunction*) UObject::GObjObjects()->Data[ 43076 ];

	AGameCrowdPopulationManager_eventCreateSpawner_Parms CreateSpawner_Parms;
	CreateSpawner_Parms.inAction = inAction;

	this->ProcessEvent ( pFnCreateSpawner, &CreateSpawner_Parms, NULL );

	return CreateSpawner_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// [0x00020002] 
// Parameters infos:
// class AGameCrowdInfoVolume*    Vol                            ( CPF_Parm )

void AGameCrowdPopulationManager::SetCrowdInfoVolume ( class AGameCrowdInfoVolume* Vol )
{
	static UFunction* pFnSetCrowdInfoVolume = NULL;

	if ( ! pFnSetCrowdInfoVolume )
		pFnSetCrowdInfoVolume = (UFunction*) UObject::GObjObjects()->Data[ 43074 ];

	AGameCrowdPopulationManager_execSetCrowdInfoVolume_Parms SetCrowdInfoVolume_Parms;
	SetCrowdInfoVolume_Parms.Vol = Vol;

	this->ProcessEvent ( pFnSetCrowdInfoVolume, &SetCrowdInfoVolume_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )

void AGameCrowdPopulationManager::RemoveSpawnPoint ( class AGameCrowdDestination* GCD )
{
	static UFunction* pFnRemoveSpawnPoint = NULL;

	if ( ! pFnRemoveSpawnPoint )
		pFnRemoveSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 43070 ];

	AGameCrowdPopulationManager_execRemoveSpawnPoint_Parms RemoveSpawnPoint_Parms;
	RemoveSpawnPoint_Parms.GCD = GCD;

	this->ProcessEvent ( pFnRemoveSpawnPoint, &RemoveSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )

void AGameCrowdPopulationManager::AddSpawnPoint ( class AGameCrowdDestination* GCD )
{
	static UFunction* pFnAddSpawnPoint = NULL;

	if ( ! pFnAddSpawnPoint )
		pFnAddSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 43068 ];

	AGameCrowdPopulationManager_execAddSpawnPoint_Parms AddSpawnPoint_Parms;
	AddSpawnPoint_Parms.GCD = GCD;

	this->ProcessEvent ( pFnAddSpawnPoint, &AddSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventNotifyPathChanged ( )
{
	static UFunction* pFnNotifyPathChanged = NULL;

	if ( ! pFnNotifyPathChanged )
		pFnNotifyPathChanged = (UFunction*) UObject::GObjObjects()->Data[ 43067 ];

	AGameCrowdPopulationManager_eventNotifyPathChanged_Parms NotifyPathChanged_Parms;

	this->ProcessEvent ( pFnNotifyPathChanged, &NotifyPathChanged_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43065 ];

	AGameCrowdPopulationManager_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AGameCrowdReplicationActor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43194 ];

	AGameCrowdReplicationActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00880102] 
// Parameters infos:
// class UCameraShake*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Epicenter                      ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )

class UCameraShake* AGameExplosionActor::ChooseCameraShake ( struct FVector Epicenter, class APlayerController* PC )
{
	static UFunction* pFnChooseCameraShake = NULL;

	if ( ! pFnChooseCameraShake )
		pFnChooseCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 43363 ];

	AGameExplosionActor_execChooseCameraShake_Parms ChooseCameraShake_Parms;
	memcpy ( &ChooseCameraShake_Parms.Epicenter, &Epicenter, 0xC );
	ChooseCameraShake_Parms.PC = PC;

	this->ProcessEvent ( pFnChooseCameraShake, &ChooseCameraShake_Parms, NULL );

	return ChooseCameraShake_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::SpawnCameraLensEffects ( )
{
	static UFunction* pFnSpawnCameraLensEffects = NULL;

	if ( ! pFnSpawnCameraLensEffects )
		pFnSpawnCameraLensEffects = (UFunction*) UObject::GObjObjects()->Data[ 43361 ];

	AGameExplosionActor_execSpawnCameraLensEffects_Parms SpawnCameraLensEffects_Parms;

	this->ProcessEvent ( pFnSpawnCameraLensEffects, &SpawnCameraLensEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DoExplosionCameraEffects ( )
{
	static UFunction* pFnDoExplosionCameraEffects = NULL;

	if ( ! pFnDoExplosionCameraEffects )
		pFnDoExplosionCameraEffects = (UFunction*) UObject::GObjObjects()->Data[ 43357 ];

	AGameExplosionActor_execDoExplosionCameraEffects_Parms DoExplosionCameraEffects_Parms;

	this->ProcessEvent ( pFnDoExplosionCameraEffects, &DoExplosionCameraEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00820102] 
// Parameters infos:

void AGameExplosionActor::DrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 43354 ];

	AGameExplosionActor_execDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DelayedExplosionDamage ( )
{
	static UFunction* pFnDelayedExplosionDamage = NULL;

	if ( ! pFnDelayedExplosionDamage )
		pFnDelayedExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 43353 ];

	AGameExplosionActor_execDelayedExplosionDamage_Parms DelayedExplosionDamage_Parms;

	this->ProcessEvent ( pFnDelayedExplosionDamage, &DelayedExplosionDamage_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00024102] 
// Parameters infos:
// class UGameExplosion*          NewExplosionTemplate           ( CPF_Parm )
// struct FVector                 Direction                      ( CPF_OptionalParm | CPF_Parm )

void AGameExplosionActor::Explode ( class UGameExplosion* NewExplosionTemplate, struct FVector Direction )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 43347 ];

	AGameExplosionActor_execExplode_Parms Explode_Parms;
	Explode_Parms.NewExplosionTemplate = NewExplosionTemplate;
	memcpy ( &Explode_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionFogVolume ( )
{
	static UFunction* pFnSpawnExplosionFogVolume = NULL;

	if ( ! pFnSpawnExplosionFogVolume )
		pFnSpawnExplosionFogVolume = (UFunction*) UObject::GObjObjects()->Data[ 43346 ];

	AGameExplosionActor_execSpawnExplosionFogVolume_Parms SpawnExplosionFogVolume_Parms;

	this->ProcessEvent ( pFnSpawnExplosionFogVolume, &SpawnExplosionFogVolume_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionDecal ( )
{
	static UFunction* pFnSpawnExplosionDecal = NULL;

	if ( ! pFnSpawnExplosionDecal )
		pFnSpawnExplosionDecal = (UFunction*) UObject::GObjObjects()->Data[ 43345 ];

	AGameExplosionActor_execSpawnExplosionDecal_Parms SpawnExplosionDecal_Parms;

	this->ProcessEvent ( pFnSpawnExplosionDecal, &SpawnExplosionDecal_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] 
// Parameters infos:
// class UParticleSystem*         Template                       ( CPF_Parm )

void AGameExplosionActor::SpawnExplosionParticleSystem ( class UParticleSystem* Template )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 43343 ];

	AGameExplosionActor_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;
	SpawnExplosionParticleSystem_Parms.Template = Template;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] 
// Parameters infos:
// class UPhysicalMaterial*       PhysMaterial                   ( CPF_Parm )

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial )
{
	static UFunction* pFnUpdateExplosionTemplateWithPerMaterialFX = NULL;

	if ( ! pFnUpdateExplosionTemplateWithPerMaterialFX )
		pFnUpdateExplosionTemplateWithPerMaterialFX = (UFunction*) UObject::GObjObjects()->Data[ 43341 ];

	AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms UpdateExplosionTemplateWithPerMaterialFX_Parms;
	UpdateExplosionTemplateWithPerMaterialFX_Parms.PhysMaterial = PhysMaterial;

	this->ProcessEvent ( pFnUpdateExplosionTemplateWithPerMaterialFX, &UpdateExplosionTemplateWithPerMaterialFX_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// [0x00080000] 
// Parameters infos:
// class AActor*                  Victim                         ( CPF_Parm )
// float                          VictimDist                     ( CPF_Parm )

void AGameExplosionActor::SpecialCringeEffectsFor ( class AActor* Victim, float VictimDist )
{
	static UFunction* pFnSpecialCringeEffectsFor = NULL;

	if ( ! pFnSpecialCringeEffectsFor )
		pFnSpecialCringeEffectsFor = (UFunction*) UObject::GObjObjects()->Data[ 43338 ];

	AGameExplosionActor_execSpecialCringeEffectsFor_Parms SpecialCringeEffectsFor_Parms;
	SpecialCringeEffectsFor_Parms.Victim = Victim;
	SpecialCringeEffectsFor_Parms.VictimDist = VictimDist;

	this->ProcessEvent ( pFnSpecialCringeEffectsFor, &SpecialCringeEffectsFor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// [0x00080000] 
// Parameters infos:
// class AGamePawn*               VictimPawn                     ( CPF_Parm )
// float                          VictimDist                     ( CPF_Parm )

void AGameExplosionActor::SpecialPawnEffectsFor ( class AGamePawn* VictimPawn, float VictimDist )
{
	static UFunction* pFnSpecialPawnEffectsFor = NULL;

	if ( ! pFnSpecialPawnEffectsFor )
		pFnSpecialPawnEffectsFor = (UFunction*) UObject::GObjObjects()->Data[ 43335 ];

	AGameExplosionActor_execSpecialPawnEffectsFor_Parms SpecialPawnEffectsFor_Parms;
	SpecialPawnEffectsFor_Parms.VictimPawn = VictimPawn;
	SpecialPawnEffectsFor_Parms.VictimDist = VictimDist;

	this->ProcessEvent ( pFnSpecialPawnEffectsFor, &SpecialPawnEffectsFor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bCauseDamage                   ( CPF_Parm )
// unsigned long                  bCauseFractureEffects          ( CPF_Parm )
// unsigned long                  bCauseEffects                  ( CPF_Parm )

float AGameExplosionActor::GetEffectCheckRadius ( unsigned long bCauseDamage, unsigned long bCauseFractureEffects, unsigned long bCauseEffects )
{
	static UFunction* pFnGetEffectCheckRadius = NULL;

	if ( ! pFnGetEffectCheckRadius )
		pFnGetEffectCheckRadius = (UFunction*) UObject::GObjObjects()->Data[ 43329 ];

	AGameExplosionActor_execGetEffectCheckRadius_Parms GetEffectCheckRadius_Parms;
	GetEffectCheckRadius_Parms.bCauseDamage = bCauseDamage;
	GetEffectCheckRadius_Parms.bCauseFractureEffects = bCauseFractureEffects;
	GetEffectCheckRadius_Parms.bCauseEffects = bCauseEffects;

	this->ProcessEvent ( pFnGetEffectCheckRadius, &GetEffectCheckRadius_Parms, NULL );

	return GetEffectCheckRadius_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00880102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bCauseDamage                   ( CPF_Parm )
// unsigned long                  bCauseEffects                  ( CPF_Parm )

bool AGameExplosionActor::DoExplosionDamage ( unsigned long bCauseDamage, unsigned long bCauseEffects )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 43299 ];

	AGameExplosionActor_execDoExplosionDamage_Parms DoExplosionDamage_Parms;
	DoExplosionDamage_Parms.bCauseDamage = bCauseDamage;
	DoExplosionDamage_Parms.bCauseEffects = bCauseEffects;

	this->ProcessEvent ( pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );

	return DoExplosionDamage_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FBox                    BBox                           ( CPF_Parm )

float AGameExplosionActor::BoxDistanceToPoint ( struct FVector Start, struct FBox BBox )
{
	static UFunction* pFnBoxDistanceToPoint = NULL;

	if ( ! pFnBoxDistanceToPoint )
		pFnBoxDistanceToPoint = (UFunction*) UObject::GObjObjects()->Data[ 43295 ];

	AGameExplosionActor_execBoxDistanceToPoint_Parms BoxDistanceToPoint_Parms;
	memcpy ( &BoxDistanceToPoint_Parms.Start, &Start, 0xC );
	memcpy ( &BoxDistanceToPoint_Parms.BBox, &BBox, 0x1C );

	pFnBoxDistanceToPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBoxDistanceToPoint, &BoxDistanceToPoint_Parms, NULL );

	pFnBoxDistanceToPoint->FunctionFlags |= 0x400;

	return BoxDistanceToPoint_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00080102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool AGameExplosionActor::IsBehindExplosion ( class AActor* A )
{
	static UFunction* pFnIsBehindExplosion = NULL;

	if ( ! pFnIsBehindExplosion )
		pFnIsBehindExplosion = (UFunction*) UObject::GObjObjects()->Data[ 43292 ];

	AGameExplosionActor_execIsBehindExplosion_Parms IsBehindExplosion_Parms;
	IsBehindExplosion_Parms.A = A;

	this->ProcessEvent ( pFnIsBehindExplosion, &IsBehindExplosion_Parms, NULL );

	return IsBehindExplosion_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Victim                         ( CPF_Parm )

bool AGameExplosionActor::DoFullDamageToActor ( class AActor* Victim )
{
	static UFunction* pFnDoFullDamageToActor = NULL;

	if ( ! pFnDoFullDamageToActor )
		pFnDoFullDamageToActor = (UFunction*) UObject::GObjObjects()->Data[ 43289 ];

	AGameExplosionActor_execDoFullDamageToActor_Parms DoFullDamageToActor_Parms;
	DoFullDamageToActor_Parms.Victim = Victim;

	this->ProcessEvent ( pFnDoFullDamageToActor, &DoFullDamageToActor_Parms, NULL );

	return DoFullDamageToActor_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] 
// Parameters infos:
// class UPhysicalMaterial*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial ( )
{
	static UFunction* pFnGetPhysicalMaterial = NULL;

	if ( ! pFnGetPhysicalMaterial )
		pFnGetPhysicalMaterial = (UFunction*) UObject::GObjObjects()->Data[ 43281 ];

	AGameExplosionActor_execGetPhysicalMaterial_Parms GetPhysicalMaterial_Parms;

	this->ProcessEvent ( pFnGetPhysicalMaterial, &GetPhysicalMaterial_Parms, NULL );

	return GetPhysicalMaterial_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameExplosionActor::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43280 ];

	AGameExplosionActor_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMeshWithoutBeingSeen ( )
{
	static UFunction* pFnReattachMeshWithoutBeingSeen = NULL;

	if ( ! pFnReattachMeshWithoutBeingSeen )
		pFnReattachMeshWithoutBeingSeen = (UFunction*) UObject::GObjObjects()->Data[ 43426 ];

	AGamePawn_execReattachMeshWithoutBeingSeen_Parms ReattachMeshWithoutBeingSeen_Parms;

	this->ProcessEvent ( pFnReattachMeshWithoutBeingSeen, &ReattachMeshWithoutBeingSeen_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMesh ( )
{
	static UFunction* pFnReattachMesh = NULL;

	if ( ! pFnReattachMesh )
		pFnReattachMesh = (UFunction*) UObject::GObjObjects()->Data[ 43425 ];

	AGamePawn_execReattachMesh_Parms ReattachMesh_Parms;

	this->ProcessEvent ( pFnReattachMesh, &ReattachMesh_Parms, NULL );
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInWantShadow                  ( CPF_Parm )

void AGamePawn::eventUpdateShadowSettings ( unsigned long bInWantShadow )
{
	static UFunction* pFnUpdateShadowSettings = NULL;

	if ( ! pFnUpdateShadowSettings )
		pFnUpdateShadowSettings = (UFunction*) UObject::GObjObjects()->Data[ 43421 ];

	AGamePawn_eventUpdateShadowSettings_Parms UpdateShadowSettings_Parms;
	UpdateShadowSettings_Parms.bInWantShadow = bInWantShadow;

	this->ProcessEvent ( pFnUpdateShadowSettings, &UpdateShadowSettings_Parms, NULL );
};

// Function GameFramework.DebugCameraController.ConsoleCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWriteToLog                    ( CPF_OptionalParm | CPF_Parm )

struct FString ADebugCameraController::ConsoleCommand ( struct FString Command, unsigned long bWriteToLog )
{
	static UFunction* pFnConsoleCommand = NULL;

	if ( ! pFnConsoleCommand )
		pFnConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 41794 ];

	ADebugCameraController_execConsoleCommand_Parms ConsoleCommand_Parms;
	memcpy ( &ConsoleCommand_Parms.Command, &Command, 0xC );
	ConsoleCommand_Parms.bWriteToLog = bWriteToLog;

	pFnConsoleCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConsoleCommand, &ConsoleCommand_Parms, NULL );

	pFnConsoleCommand->FunctionFlags |= 0x400;

	return ConsoleCommand_Parms.ReturnValue;
};

// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::ShowDebugSelectedInfo ( )
{
	static UFunction* pFnShowDebugSelectedInfo = NULL;

	if ( ! pFnShowDebugSelectedInfo )
		pFnShowDebugSelectedInfo = (UFunction*) UObject::GObjObjects()->Data[ 41821 ];

	ADebugCameraController_execShowDebugSelectedInfo_Parms ShowDebugSelectedInfo_Parms;

	this->ProcessEvent ( pFnShowDebugSelectedInfo, &ShowDebugSelectedInfo_Parms, NULL );
};

// Function GameFramework.DebugCameraController.NativeInputKey
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool ADebugCameraController::NativeInputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnNativeInputKey = NULL;

	if ( ! pFnNativeInputKey )
		pFnNativeInputKey = (UFunction*) UObject::GObjObjects()->Data[ 41807 ];

	ADebugCameraController_execNativeInputKey_Parms NativeInputKey_Parms;
	NativeInputKey_Parms.ControllerId = ControllerId;
	memcpy ( &NativeInputKey_Parms.Key, &Key, 0x8 );
	NativeInputKey_Parms.Event = Event;
	NativeInputKey_Parms.AmountDepressed = AmountDepressed;
	NativeInputKey_Parms.bGamepad = bGamepad;

	this->ProcessEvent ( pFnNativeInputKey, &NativeInputKey_Parms, NULL );

	return NativeInputKey_Parms.ReturnValue;
};

// Function GameFramework.DebugCameraController.InitDebugInputSystem
// [0x00020002] 
// Parameters infos:

void ADebugCameraController::InitDebugInputSystem ( )
{
	static UFunction* pFnInitDebugInputSystem = NULL;

	if ( ! pFnInitDebugInputSystem )
		pFnInitDebugInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 41802 ];

	ADebugCameraController_execInitDebugInputSystem_Parms InitDebugInputSystem_Parms;

	this->ProcessEvent ( pFnInitDebugInputSystem, &InitDebugInputSystem_Parms, NULL );
};

// Function GameFramework.DebugCameraController.DisableDebugCamera
// [0x00020002] 
// Parameters infos:

void ADebugCameraController::DisableDebugCamera ( )
{
	static UFunction* pFnDisableDebugCamera = NULL;

	if ( ! pFnDisableDebugCamera )
		pFnDisableDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 41801 ];

	ADebugCameraController_execDisableDebugCamera_Parms DisableDebugCamera_Parms;

	this->ProcessEvent ( pFnDisableDebugCamera, &DisableDebugCamera_Parms, NULL );
};

// Function GameFramework.DebugCameraController.NormalSpeed
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::NormalSpeed ( )
{
	static UFunction* pFnNormalSpeed = NULL;

	if ( ! pFnNormalSpeed )
		pFnNormalSpeed = (UFunction*) UObject::GObjObjects()->Data[ 41800 ];

	ADebugCameraController_execNormalSpeed_Parms NormalSpeed_Parms;

	this->ProcessEvent ( pFnNormalSpeed, &NormalSpeed_Parms, NULL );
};

// Function GameFramework.DebugCameraController.MoreSpeed
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::MoreSpeed ( )
{
	static UFunction* pFnMoreSpeed = NULL;

	if ( ! pFnMoreSpeed )
		pFnMoreSpeed = (UFunction*) UObject::GObjObjects()->Data[ 41799 ];

	ADebugCameraController_execMoreSpeed_Parms MoreSpeed_Parms;

	this->ProcessEvent ( pFnMoreSpeed, &MoreSpeed_Parms, NULL );
};

// Function GameFramework.DebugCameraController.SetFreezeRendering
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::SetFreezeRendering ( )
{
	static UFunction* pFnSetFreezeRendering = NULL;

	if ( ! pFnSetFreezeRendering )
		pFnSetFreezeRendering = (UFunction*) UObject::GObjObjects()->Data[ 41798 ];

	ADebugCameraController_execSetFreezeRendering_Parms SetFreezeRendering_Parms;

	this->ProcessEvent ( pFnSetFreezeRendering, &SetFreezeRendering_Parms, NULL );
};

// Function GameFramework.DebugCameraController.OnDeactivate
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ADebugCameraController::OnDeactivate ( class APlayerController* PC )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 41796 ];

	ADebugCameraController_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.PC = PC;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function GameFramework.DebugCameraController.OnActivate
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ADebugCameraController::OnActivate ( class APlayerController* PC )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 41790 ];

	ADebugCameraController_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.PC = PC;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function GameFramework.DebugCameraController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADebugCameraController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41789 ];

	ADebugCameraController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.DebugCameraController.Unselect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ADebugCameraController::Unselect ( )
{
	static UFunction* pFnUnselect = NULL;

	if ( ! pFnUnselect )
		pFnUnselect = (UFunction*) UObject::GObjObjects()->Data[ 41788 ];

	ADebugCameraController_execUnselect_Parms Unselect_Parms;

	pFnUnselect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnselect, &Unselect_Parms, NULL );

	pFnUnselect->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.SecondarySelect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 HitLoc                         ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )

void ADebugCameraController::SecondarySelect ( struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnSecondarySelect = NULL;

	if ( ! pFnSecondarySelect )
		pFnSecondarySelect = (UFunction*) UObject::GObjObjects()->Data[ 41784 ];

	ADebugCameraController_execSecondarySelect_Parms SecondarySelect_Parms;
	memcpy ( &SecondarySelect_Parms.HitLoc, &HitLoc, 0xC );
	memcpy ( &SecondarySelect_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &SecondarySelect_Parms.HitInfo, &HitInfo, 0x1C );

	pFnSecondarySelect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSecondarySelect, &SecondarySelect_Parms, NULL );

	pFnSecondarySelect->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.PrimarySelect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 HitLoc                         ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )

void ADebugCameraController::PrimarySelect ( struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnPrimarySelect = NULL;

	if ( ! pFnPrimarySelect )
		pFnPrimarySelect = (UFunction*) UObject::GObjObjects()->Data[ 41780 ];

	ADebugCameraController_execPrimarySelect_Parms PrimarySelect_Parms;
	memcpy ( &PrimarySelect_Parms.HitLoc, &HitLoc, 0xC );
	memcpy ( &PrimarySelect_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &PrimarySelect_Parms.HitInfo, &HitInfo, 0x1C );

	pFnPrimarySelect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPrimarySelect, &PrimarySelect_Parms, NULL );

	pFnPrimarySelect->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileHUD.RenderKismetHud
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RenderKismetHud ( )
{
	static UFunction* pFnRenderKismetHud = NULL;

	if ( ! pFnRenderKismetHud )
		pFnRenderKismetHud = (UFunction*) UObject::GObjObjects()->Data[ 44118 ];

	AMobileHUD_execRenderKismetHud_Parms RenderKismetHud_Parms;

	this->ProcessEvent ( pFnRenderKismetHud, &RenderKismetHud_Parms, NULL );
};

// Function GameFramework.MobileHUD.AddKismetRenderEvent
// [0x00020002] 
// Parameters infos:
// class USeqEvent_HudRender*     NewEvent                       ( CPF_Parm )

void AMobileHUD::AddKismetRenderEvent ( class USeqEvent_HudRender* NewEvent )
{
	static UFunction* pFnAddKismetRenderEvent = NULL;

	if ( ! pFnAddKismetRenderEvent )
		pFnAddKismetRenderEvent = (UFunction*) UObject::GObjObjects()->Data[ 44115 ];

	AMobileHUD_execAddKismetRenderEvent_Parms AddKismetRenderEvent_Parms;
	AddKismetRenderEvent_Parms.NewEvent = NewEvent;

	this->ProcessEvent ( pFnAddKismetRenderEvent, &AddKismetRenderEvent_Parms, NULL );
};

// Function GameFramework.MobileHUD.RefreshKismetLinks
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RefreshKismetLinks ( )
{
	static UFunction* pFnRefreshKismetLinks = NULL;

	if ( ! pFnRefreshKismetLinks )
		pFnRefreshKismetLinks = (UFunction*) UObject::GObjObjects()->Data[ 44110 ];

	AMobileHUD_execRefreshKismetLinks_Parms RefreshKismetLinks_Parms;

	this->ProcessEvent ( pFnRefreshKismetLinks, &RefreshKismetLinks_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// [0x00820002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Slider ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Slider = NULL;

	if ( ! pFnDrawMobileZone_Slider )
		pFnDrawMobileZone_Slider = (UFunction*) UObject::GObjObjects()->Data[ 44103 ];

	AMobileHUD_execDrawMobileZone_Slider_Parms DrawMobileZone_Slider_Parms;
	DrawMobileZone_Slider_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Slider, &DrawMobileZone_Slider_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileTilt
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      MobileInput                    ( CPF_Parm )

void AMobileHUD::DrawMobileTilt ( class UMobilePlayerInput* MobileInput )
{
	static UFunction* pFnDrawMobileTilt = NULL;

	if ( ! pFnDrawMobileTilt )
		pFnDrawMobileTilt = (UFunction*) UObject::GObjObjects()->Data[ 44087 ];

	AMobileHUD_execDrawMobileTilt_Parms DrawMobileTilt_Parms;
	DrawMobileTilt_Parms.MobileInput = MobileInput;

	this->ProcessEvent ( pFnDrawMobileTilt, &DrawMobileTilt_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Trackball ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Trackball = NULL;

	if ( ! pFnDrawMobileZone_Trackball )
		pFnDrawMobileZone_Trackball = (UFunction*) UObject::GObjObjects()->Data[ 44083 ];

	AMobileHUD_execDrawMobileZone_Trackball_Parms DrawMobileZone_Trackball_Parms;
	DrawMobileZone_Trackball_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Trackball, &DrawMobileZone_Trackball_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// [0x00820002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Joystick ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Joystick = NULL;

	if ( ! pFnDrawMobileZone_Joystick )
		pFnDrawMobileZone_Joystick = (UFunction*) UObject::GObjObjects()->Data[ 44071 ];

	AMobileHUD_execDrawMobileZone_Joystick_Parms DrawMobileZone_Joystick_Parms;
	DrawMobileZone_Joystick_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Joystick, &DrawMobileZone_Joystick_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Button ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Button = NULL;

	if ( ! pFnDrawMobileZone_Button )
		pFnDrawMobileZone_Button = (UFunction*) UObject::GObjObjects()->Data[ 44049 ];

	AMobileHUD_execDrawMobileZone_Button_Parms DrawMobileZone_Button_Parms;
	DrawMobileZone_Button_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Button, &DrawMobileZone_Button_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// [0x00020002] 
// Parameters infos:

void AMobileHUD::DrawInputZoneOverlays ( )
{
	static UFunction* pFnDrawInputZoneOverlays = NULL;

	if ( ! pFnDrawInputZoneOverlays )
		pFnDrawInputZoneOverlays = (UFunction*) UObject::GObjObjects()->Data[ 44025 ];

	AMobileHUD_execDrawInputZoneOverlays_Parms DrawInputZoneOverlays_Parms;

	this->ProcessEvent ( pFnDrawInputZoneOverlays, &DrawInputZoneOverlays_Parms, NULL );
};

// Function GameFramework.MobileHUD.RenderMobileMenu
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RenderMobileMenu ( )
{
	static UFunction* pFnRenderMobileMenu = NULL;

	if ( ! pFnRenderMobileMenu )
		pFnRenderMobileMenu = (UFunction*) UObject::GObjObjects()->Data[ 44015 ];

	AMobileHUD_execRenderMobileMenu_Parms RenderMobileMenu_Parms;

	this->ProcessEvent ( pFnRenderMobileMenu, &RenderMobileMenu_Parms, NULL );
};

// Function GameFramework.MobileHUD.ShowMobileHud
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMobileHUD::ShowMobileHud ( )
{
	static UFunction* pFnShowMobileHud = NULL;

	if ( ! pFnShowMobileHud )
		pFnShowMobileHud = (UFunction*) UObject::GObjObjects()->Data[ 44013 ];

	AMobileHUD_execShowMobileHud_Parms ShowMobileHud_Parms;

	this->ProcessEvent ( pFnShowMobileHud, &ShowMobileHud_Parms, NULL );

	return ShowMobileHud_Parms.ReturnValue;
};

// Function GameFramework.MobileHUD.DrawMobileDebugString
// [0x00020002] 
// Parameters infos:
// float                          XPos                           ( CPF_Parm )
// float                          YPos                           ( CPF_Parm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )

void AMobileHUD::DrawMobileDebugString ( float XPos, float YPos, struct FString Str )
{
	static UFunction* pFnDrawMobileDebugString = NULL;

	if ( ! pFnDrawMobileDebugString )
		pFnDrawMobileDebugString = (UFunction*) UObject::GObjObjects()->Data[ 44009 ];

	AMobileHUD_execDrawMobileDebugString_Parms DrawMobileDebugString_Parms;
	DrawMobileDebugString_Parms.XPos = XPos;
	DrawMobileDebugString_Parms.YPos = YPos;
	memcpy ( &DrawMobileDebugString_Parms.Str, &Str, 0xC );

	this->ProcessEvent ( pFnDrawMobileDebugString, &DrawMobileDebugString_Parms, NULL );
};

// Function GameFramework.MobileHUD.PostRender
// [0x00020002] 
// Parameters infos:

void AMobileHUD::PostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 44007 ];

	AMobileHUD_execPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileHUD.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AMobileHUD::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44006 ];

	AMobileHUD_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileInputZone.AddKismetEventHandler
// [0x00020002] 
// Parameters infos:
// class USeqEvent_MobileZoneBase* NewHandler                     ( CPF_Parm )

void UMobileInputZone::AddKismetEventHandler ( class USeqEvent_MobileZoneBase* NewHandler )
{
	static UFunction* pFnAddKismetEventHandler = NULL;

	if ( ! pFnAddKismetEventHandler )
		pFnAddKismetEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 44415 ];

	UMobileInputZone_execAddKismetEventHandler_Parms AddKismetEventHandler_Parms;
	AddKismetEventHandler_Parms.NewHandler = NewHandler;

	this->ProcessEvent ( pFnAddKismetEventHandler, &AddKismetEventHandler_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnPostDrawZone
// [0x00120000] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileInputZone::OnPostDrawZone ( class UMobileInputZone* Zone, class UCanvas* Canvas )
{
	static UFunction* pFnOnPostDrawZone = NULL;

	if ( ! pFnOnPostDrawZone )
		pFnOnPostDrawZone = (UFunction*) UObject::GObjObjects()->Data[ 44333 ];

	UMobileInputZone_execOnPostDrawZone_Parms OnPostDrawZone_Parms;
	OnPostDrawZone_Parms.Zone = Zone;
	OnPostDrawZone_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnOnPostDrawZone, &OnPostDrawZone_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnPreDrawZone
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

bool UMobileInputZone::OnPreDrawZone ( class UMobileInputZone* Zone, class UCanvas* Canvas )
{
	static UFunction* pFnOnPreDrawZone = NULL;

	if ( ! pFnOnPreDrawZone )
		pFnOnPreDrawZone = (UFunction*) UObject::GObjObjects()->Data[ 44044 ];

	UMobileInputZone_execOnPreDrawZone_Parms OnPreDrawZone_Parms;
	OnPreDrawZone_Parms.Zone = Zone;
	OnPreDrawZone_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnOnPreDrawZone, &OnPreDrawZone_Parms, NULL );

	return OnPreDrawZone_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessSlide
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// int                            SlideValue                     ( CPF_Parm )
// struct FVector2D               ViewportSize                   ( CPF_Parm )

bool UMobileInputZone::OnProcessSlide ( class UMobileInputZone* Zone, unsigned char EventType, int SlideValue, struct FVector2D ViewportSize )
{
	static UFunction* pFnOnProcessSlide = NULL;

	if ( ! pFnOnProcessSlide )
		pFnOnProcessSlide = (UFunction*) UObject::GObjObjects()->Data[ 44335 ];

	UMobileInputZone_execOnProcessSlide_Parms OnProcessSlide_Parms;
	OnProcessSlide_Parms.Zone = Zone;
	OnProcessSlide_Parms.EventType = EventType;
	OnProcessSlide_Parms.SlideValue = SlideValue;
	memcpy ( &OnProcessSlide_Parms.ViewportSize, &ViewportSize, 0x8 );

	this->ProcessEvent ( pFnOnProcessSlide, &OnProcessSlide_Parms, NULL );

	return OnProcessSlide_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnDoubleTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnDoubleTapDelegate = NULL;

	if ( ! pFnOnDoubleTapDelegate )
		pFnOnDoubleTapDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44337 ];

	UMobileInputZone_execOnDoubleTapDelegate_Parms OnDoubleTapDelegate_Parms;
	OnDoubleTapDelegate_Parms.Zone = Zone;
	OnDoubleTapDelegate_Parms.EventType = EventType;
	memcpy ( &OnDoubleTapDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnOnDoubleTapDelegate, &OnDoubleTapDelegate_Parms, NULL );

	return OnDoubleTapDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnTapDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnTapDelegate = NULL;

	if ( ! pFnOnTapDelegate )
		pFnOnTapDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44339 ];

	UMobileInputZone_execOnTapDelegate_Parms OnTapDelegate_Parms;
	OnTapDelegate_Parms.Zone = Zone;
	OnTapDelegate_Parms.EventType = EventType;
	memcpy ( &OnTapDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnOnTapDelegate, &OnTapDelegate_Parms, NULL );

	return OnTapDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// int                            Handle                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnProcessInputDelegate ( class UMobileInputZone* Zone, float DeltaTime, int Handle, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnProcessInputDelegate = NULL;

	if ( ! pFnOnProcessInputDelegate )
		pFnOnProcessInputDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44341 ];

	UMobileInputZone_execOnProcessInputDelegate_Parms OnProcessInputDelegate_Parms;
	OnProcessInputDelegate_Parms.Zone = Zone;
	OnProcessInputDelegate_Parms.DeltaTime = DeltaTime;
	OnProcessInputDelegate_Parms.Handle = Handle;
	OnProcessInputDelegate_Parms.EventType = EventType;
	memcpy ( &OnProcessInputDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnOnProcessInputDelegate, &OnProcessInputDelegate_Parms, NULL );

	return OnProcessInputDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.DeactivateZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileInputZone::DeactivateZone ( )
{
	static UFunction* pFnDeactivateZone = NULL;

	if ( ! pFnDeactivateZone )
		pFnDeactivateZone = (UFunction*) UObject::GObjObjects()->Data[ 44391 ];

	UMobileInputZone_execDeactivateZone_Parms DeactivateZone_Parms;

	pFnDeactivateZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeactivateZone, &DeactivateZone_Parms, NULL );

	pFnDeactivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileInputZone.ActivateZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileInputZone::ActivateZone ( )
{
	static UFunction* pFnActivateZone = NULL;

	if ( ! pFnActivateZone )
		pFnActivateZone = (UFunction*) UObject::GObjObjects()->Data[ 44390 ];

	UMobileInputZone_execActivateZone_Parms ActivateZone_Parms;

	pFnActivateZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActivateZone, &ActivateZone_Parms, NULL );

	pFnActivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuObject.RenderObject
// [0x00020000] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuObject::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44502 ];

	UMobileMenuObject_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.SetCanvasPos
// [0x00024002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          OffsetX                        ( CPF_OptionalParm | CPF_Parm )
// float                          OffsetY                        ( CPF_OptionalParm | CPF_Parm )

void UMobileMenuObject::SetCanvasPos ( class UCanvas* Canvas, float OffsetX, float OffsetY )
{
	static UFunction* pFnSetCanvasPos = NULL;

	if ( ! pFnSetCanvasPos )
		pFnSetCanvasPos = (UFunction*) UObject::GObjObjects()->Data[ 44496 ];

	UMobileMenuObject_execSetCanvasPos_Parms SetCanvasPos_Parms;
	SetCanvasPos_Parms.Canvas = Canvas;
	SetCanvasPos_Parms.OffsetX = OffsetX;
	SetCanvasPos_Parms.OffsetY = OffsetY;

	this->ProcessEvent ( pFnSetCanvasPos, &SetCanvasPos_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuObject::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44474 ];

	UMobileMenuObject_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.GetRealPosition
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void UMobileMenuObject::eventGetRealPosition ( float* PosX, float* PosY )
{
	static UFunction* pFnGetRealPosition = NULL;

	if ( ! pFnGetRealPosition )
		pFnGetRealPosition = (UFunction*) UObject::GObjObjects()->Data[ 44469 ];

	UMobileMenuObject_eventGetRealPosition_Parms GetRealPosition_Parms;

	this->ProcessEvent ( pFnGetRealPosition, &GetRealPosition_Parms, NULL );

	if ( PosX )
		*PosX = GetRealPosition_Parms.PosX;

	if ( PosY )
		*PosY = GetRealPosition_Parms.PosY;
};

// Function GameFramework.MobileMenuObject.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuObject::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44462 ];

	UMobileMenuObject_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuImage.RenderObject
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuImage::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44615 ];

	UMobileMenuImage_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

bool UMobileMenuScene::MobileMenuCommand ( struct FString Command )
{
	static UFunction* pFnMobileMenuCommand = NULL;

	if ( ! pFnMobileMenuCommand )
		pFnMobileMenuCommand = (UFunction*) UObject::GObjObjects()->Data[ 44310 ];

	UMobileMenuScene_execMobileMenuCommand_Parms MobileMenuCommand_Parms;
	memcpy ( &MobileMenuCommand_Parms.Command, &Command, 0xC );

	this->ProcessEvent ( pFnMobileMenuCommand, &MobileMenuCommand_Parms, NULL );

	return MobileMenuCommand_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.FindMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobileMenuObject*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Tag                            ( CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuObject* UMobileMenuScene::FindMenuObject ( struct FString Tag )
{
	static UFunction* pFnFindMenuObject = NULL;

	if ( ! pFnFindMenuObject )
		pFnFindMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44487 ];

	UMobileMenuScene_execFindMenuObject_Parms FindMenuObject_Parms;
	memcpy ( &FindMenuObject_Parms.Tag, &Tag, 0xC );

	this->ProcessEvent ( pFnFindMenuObject, &FindMenuObject_Parms, NULL );

	return FindMenuObject_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.CleanUpScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileMenuScene::CleanUpScene ( )
{
	static UFunction* pFnCleanUpScene = NULL;

	if ( ! pFnCleanUpScene )
		pFnCleanUpScene = (UFunction*) UObject::GObjObjects()->Data[ 44975 ];

	UMobileMenuScene_execCleanUpScene_Parms CleanUpScene_Parms;

	pFnCleanUpScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCleanUpScene, &CleanUpScene_Parms, NULL );

	pFnCleanUpScene->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuScene.Closed
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::Closed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 44974 ];

	UMobileMenuScene_execClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.Closing
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMobileMenuScene::Closing ( )
{
	static UFunction* pFnClosing = NULL;

	if ( ! pFnClosing )
		pFnClosing = (UFunction*) UObject::GObjObjects()->Data[ 44294 ];

	UMobileMenuScene_execClosing_Parms Closing_Parms;

	this->ProcessEvent ( pFnClosing, &Closing_Parms, NULL );

	return Closing_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.MadeTopMenu
// [0x00020000] 
// Parameters infos:

void UMobileMenuScene::MadeTopMenu ( )
{
	static UFunction* pFnMadeTopMenu = NULL;

	if ( ! pFnMadeTopMenu )
		pFnMadeTopMenu = (UFunction*) UObject::GObjObjects()->Data[ 44973 ];

	UMobileMenuScene_execMadeTopMenu_Parms MadeTopMenu_Parms;

	this->ProcessEvent ( pFnMadeTopMenu, &MadeTopMenu_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.Opened
// [0x00020000] 
// Parameters infos:
// struct FString                 Mode                           ( CPF_Parm | CPF_NeedCtorLink )

void UMobileMenuScene::Opened ( struct FString Mode )
{
	static UFunction* pFnOpened = NULL;

	if ( ! pFnOpened )
		pFnOpened = (UFunction*) UObject::GObjObjects()->Data[ 44971 ];

	UMobileMenuScene_execOpened_Parms Opened_Parms;
	memcpy ( &Opened_Parms.Mode, &Mode, 0xC );

	this->ProcessEvent ( pFnOpened, &Opened_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.OnSceneTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// unsigned long                  bInside                        ( CPF_Parm )

bool UMobileMenuScene::eventOnSceneTouch ( unsigned char EventType, float TouchX, float TouchY, unsigned long bInside )
{
	static UFunction* pFnOnSceneTouch = NULL;

	if ( ! pFnOnSceneTouch )
		pFnOnSceneTouch = (UFunction*) UObject::GObjObjects()->Data[ 44965 ];

	UMobileMenuScene_eventOnSceneTouch_Parms OnSceneTouch_Parms;
	OnSceneTouch_Parms.EventType = EventType;
	OnSceneTouch_Parms.TouchX = TouchX;
	OnSceneTouch_Parms.TouchY = TouchY;
	OnSceneTouch_Parms.bInside = bInside;

	this->ProcessEvent ( pFnOnSceneTouch, &OnSceneTouch_Parms, NULL );

	return OnSceneTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.OnTouch
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuObject*       Sender                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )

void UMobileMenuScene::eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44960 ];

	UMobileMenuScene_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.Sender = Sender;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.PreRenderMenuObject
// [0x00020000] 
// Parameters infos:
// class UMobileMenuObject*       MenuObject                     ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobileMenuScene::PreRenderMenuObject ( class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnPreRenderMenuObject = NULL;

	if ( ! pFnPreRenderMenuObject )
		pFnPreRenderMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44956 ];

	UMobileMenuScene_execPreRenderMenuObject_Parms PreRenderMenuObject_Parms;
	PreRenderMenuObject_Parms.MenuObject = MenuObject;
	PreRenderMenuObject_Parms.Canvas = Canvas;
	PreRenderMenuObject_Parms.RenderDelta = RenderDelta;

	this->ProcessEvent ( pFnPreRenderMenuObject, &PreRenderMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.RenderScene
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobileMenuScene::RenderScene ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderScene = NULL;

	if ( ! pFnRenderScene )
		pFnRenderScene = (UFunction*) UObject::GObjObjects()->Data[ 44952 ];

	UMobileMenuScene_execRenderScene_Parms RenderScene_Parms;
	RenderScene_Parms.Canvas = Canvas;
	RenderScene_Parms.RenderDelta = RenderDelta;

	this->ProcessEvent ( pFnRenderScene, &RenderScene_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.GetSceneFont
// [0x00020002] 
// Parameters infos:
// class UFont*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UFont* UMobileMenuScene::GetSceneFont ( )
{
	static UFunction* pFnGetSceneFont = NULL;

	if ( ! pFnGetSceneFont )
		pFnGetSceneFont = (UFunction*) UObject::GObjObjects()->Data[ 44950 ];

	UMobileMenuScene_execGetSceneFont_Parms GetSceneFont_Parms;

	this->ProcessEvent ( pFnGetSceneFont, &GetSceneFont_Parms, NULL );

	return GetSceneFont_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.InitMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuScene::eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuScene = NULL;

	if ( ! pFnInitMenuScene )
		pFnInitMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 44940 ];

	UMobileMenuScene_eventInitMenuScene_Parms InitMenuScene_Parms;
	InitMenuScene_Parms.PlayerInput = PlayerInput;
	InitMenuScene_Parms.ScreenWidth = ScreenWidth;
	InitMenuScene_Parms.ScreenHeight = ScreenHeight;
	InitMenuScene_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuScene, &InitMenuScene_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UMobileMenuScene::GetGlobalScaleY ( )
{
	static UFunction* pFnGetGlobalScaleY = NULL;

	if ( ! pFnGetGlobalScaleY )
		pFnGetGlobalScaleY = (UFunction*) UObject::GObjObjects()->Data[ 44494 ];

	UMobileMenuScene_execGetGlobalScaleY_Parms GetGlobalScaleY_Parms;

	pFnGetGlobalScaleY->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGlobalScaleY, &GetGlobalScaleY_Parms, NULL );

	pFnGetGlobalScaleY->FunctionFlags |= 0x400;

	return GetGlobalScaleY_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UMobileMenuScene::GetGlobalScaleX ( )
{
	static UFunction* pFnGetGlobalScaleX = NULL;

	if ( ! pFnGetGlobalScaleX )
		pFnGetGlobalScaleX = (UFunction*) UObject::GObjObjects()->Data[ 44492 ];

	UMobileMenuScene_execGetGlobalScaleX_Parms GetGlobalScaleX_Parms;

	pFnGetGlobalScaleX->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGlobalScaleX, &GetGlobalScaleX_Parms, NULL );

	pFnGetGlobalScaleX->FunctionFlags |= 0x400;

	return GetGlobalScaleX_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// class UMobileMenuScene*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MenuClassName                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Mode                           ( CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenuMode ( struct FString MenuClassName, struct FString Mode )
{
	static UFunction* pFnOpenMobileMenuMode = NULL;

	if ( ! pFnOpenMobileMenuMode )
		pFnOpenMobileMenuMode = (UFunction*) UObject::GObjObjects()->Data[ 44316 ];

	UMobilePlayerInput_execOpenMobileMenuMode_Parms OpenMobileMenuMode_Parms;
	memcpy ( &OpenMobileMenuMode_Parms.MenuClassName, &MenuClassName, 0xC );
	memcpy ( &OpenMobileMenuMode_Parms.Mode, &Mode, 0xC );

	this->ProcessEvent ( pFnOpenMobileMenuMode, &OpenMobileMenuMode_Parms, NULL );

	return OpenMobileMenuMode_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// class UMobileMenuScene*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MenuClassName                  ( CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenu ( struct FString MenuClassName )
{
	static UFunction* pFnOpenMobileMenu = NULL;

	if ( ! pFnOpenMobileMenu )
		pFnOpenMobileMenu = (UFunction*) UObject::GObjObjects()->Data[ 44312 ];

	UMobilePlayerInput_execOpenMobileMenu_Parms OpenMobileMenu_Parms;
	memcpy ( &OpenMobileMenu_Parms.MenuClassName, &MenuClassName, 0xC );

	this->ProcessEvent ( pFnOpenMobileMenu, &OpenMobileMenu_Parms, NULL );

	return OpenMobileMenu_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 MenuCommand                    ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::MobileMenuCommand ( struct FString MenuCommand )
{
	static UFunction* pFnMobileMenuCommand = NULL;

	if ( ! pFnMobileMenuCommand )
		pFnMobileMenuCommand = (UFunction*) UObject::GObjObjects()->Data[ 44307 ];

	UMobilePlayerInput_execMobileMenuCommand_Parms MobileMenuCommand_Parms;
	memcpy ( &MobileMenuCommand_Parms.MenuCommand, &MenuCommand, 0xC );

	this->ProcessEvent ( pFnMobileMenuCommand, &MobileMenuCommand_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SceneRenderToggle
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::SceneRenderToggle ( )
{
	static UFunction* pFnSceneRenderToggle = NULL;

	if ( ! pFnSceneRenderToggle )
		pFnSceneRenderToggle = (UFunction*) UObject::GObjObjects()->Data[ 44306 ];

	UMobilePlayerInput_execSceneRenderToggle_Parms SceneRenderToggle_Parms;

	this->ProcessEvent ( pFnSceneRenderToggle, &SceneRenderToggle_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
// [0x00020002] 
// Parameters infos:
// struct FString                 PendingURL                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  TravelType                     ( CPF_Parm )
// unsigned long                  bIsSeamlessTravel              ( CPF_Parm )

void UMobilePlayerInput::PreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel )
{
	static UFunction* pFnPreClientTravel = NULL;

	if ( ! pFnPreClientTravel )
		pFnPreClientTravel = (UFunction*) UObject::GObjObjects()->Data[ 44301 ];

	UMobilePlayerInput_execPreClientTravel_Parms PreClientTravel_Parms;
	memcpy ( &PreClientTravel_Parms.PendingURL, &PendingURL, 0xC );
	PreClientTravel_Parms.TravelType = TravelType;
	PreClientTravel_Parms.bIsSeamlessTravel = bIsSeamlessTravel;

	this->ProcessEvent ( pFnPreClientTravel, &PreClientTravel_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.RenderMenus
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobilePlayerInput::eventRenderMenus ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderMenus = NULL;

	if ( ! pFnRenderMenus )
		pFnRenderMenus = (UFunction*) UObject::GObjObjects()->Data[ 44297 ];

	UMobilePlayerInput_eventRenderMenus_Parms RenderMenus_Parms;
	RenderMenus_Parms.Canvas = Canvas;
	RenderMenus_Parms.RenderDelta = RenderDelta;

	this->ProcessEvent ( pFnRenderMenus, &RenderMenus_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CloseAllMenus
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventCloseAllMenus ( )
{
	static UFunction* pFnCloseAllMenus = NULL;

	if ( ! pFnCloseAllMenus )
		pFnCloseAllMenus = (UFunction*) UObject::GObjObjects()->Data[ 44296 ];

	UMobilePlayerInput_eventCloseAllMenus_Parms CloseAllMenus_Parms;

	this->ProcessEvent ( pFnCloseAllMenus, &CloseAllMenus_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuScene*        SceneToClose                   ( CPF_Parm )

void UMobilePlayerInput::eventCloseMenuScene ( class UMobileMenuScene* SceneToClose )
{
	static UFunction* pFnCloseMenuScene = NULL;

	if ( ! pFnCloseMenuScene )
		pFnCloseMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 44289 ];

	UMobilePlayerInput_eventCloseMenuScene_Parms CloseMenuScene_Parms;
	CloseMenuScene_Parms.SceneToClose = SceneToClose;

	this->ProcessEvent ( pFnCloseMenuScene, &CloseMenuScene_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuScene*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  SceneClass                     ( CPF_Parm )
// struct FString                 Mode                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuScene* UMobilePlayerInput::eventOpenMenuScene ( class UClass* SceneClass, struct FString Mode )
{
	static UFunction* pFnOpenMenuScene = NULL;

	if ( ! pFnOpenMenuScene )
		pFnOpenMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 44283 ];

	UMobilePlayerInput_eventOpenMenuScene_Parms OpenMenuScene_Parms;
	OpenMenuScene_Parms.SceneClass = SceneClass;
	memcpy ( &OpenMenuScene_Parms.Mode, &Mode, 0xC );

	this->ProcessEvent ( pFnOpenMenuScene, &OpenMenuScene_Parms, NULL );

	return OpenMenuScene_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 GroupName                      ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::SetMobileInputConfig ( struct FString GroupName )
{
	static UFunction* pFnSetMobileInputConfig = NULL;

	if ( ! pFnSetMobileInputConfig )
		pFnSetMobileInputConfig = (UFunction*) UObject::GObjObjects()->Data[ 44280 ];

	UMobilePlayerInput_execSetMobileInputConfig_Parms SetMobileInputConfig_Parms;
	memcpy ( &SetMobileInputConfig_Parms.GroupName, &GroupName, 0xC );

	this->ProcessEvent ( pFnSetMobileInputConfig, &SetMobileInputConfig_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 GroupName                      ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::ActivateInputGroup ( struct FString GroupName )
{
	static UFunction* pFnActivateInputGroup = NULL;

	if ( ! pFnActivateInputGroup )
		pFnActivateInputGroup = (UFunction*) UObject::GObjObjects()->Data[ 44277 ];

	UMobilePlayerInput_execActivateInputGroup_Parms ActivateInputGroup_Parms;
	memcpy ( &ActivateInputGroup_Parms.GroupName, &GroupName, 0xC );

	this->ProcessEvent ( pFnActivateInputGroup, &ActivateInputGroup_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
// [0x00020002] 
// Parameters infos:
// TArray< class UMobileInputZone* > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< class UMobileInputZone* > UMobilePlayerInput::GetCurrentZones ( )
{
	static UFunction* pFnGetCurrentZones = NULL;

	if ( ! pFnGetCurrentZones )
		pFnGetCurrentZones = (UFunction*) UObject::GObjObjects()->Data[ 44034 ];

	UMobilePlayerInput_execGetCurrentZones_Parms GetCurrentZones_Parms;

	this->ProcessEvent ( pFnGetCurrentZones, &GetCurrentZones_Parms, NULL );

	return GetCurrentZones_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.HasZones
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMobilePlayerInput::HasZones ( )
{
	static UFunction* pFnHasZones = NULL;

	if ( ! pFnHasZones )
		pFnHasZones = (UFunction*) UObject::GObjObjects()->Data[ 44032 ];

	UMobilePlayerInput_execHasZones_Parms HasZones_Parms;

	this->ProcessEvent ( pFnHasZones, &HasZones_Parms, NULL );

	return HasZones_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ZoneName                       ( CPF_Parm | CPF_NeedCtorLink )

class UMobileInputZone* UMobilePlayerInput::FindorAddZone ( struct FString ZoneName )
{
	static UFunction* pFnFindorAddZone = NULL;

	if ( ! pFnFindorAddZone )
		pFnFindorAddZone = (UFunction*) UObject::GObjObjects()->Data[ 44270 ];

	UMobilePlayerInput_execFindorAddZone_Parms FindorAddZone_Parms;
	memcpy ( &FindorAddZone_Parms.ZoneName, &ZoneName, 0xC );

	this->ProcessEvent ( pFnFindorAddZone, &FindorAddZone_Parms, NULL );

	return FindorAddZone_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindZone
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ZoneName                       ( CPF_Parm | CPF_NeedCtorLink )

class UMobileInputZone* UMobilePlayerInput::FindZone ( struct FString ZoneName )
{
	static UFunction* pFnFindZone = NULL;

	if ( ! pFnFindZone )
		pFnFindZone = (UFunction*) UObject::GObjObjects()->Data[ 43964 ];

	UMobilePlayerInput_execFindZone_Parms FindZone_Parms;
	memcpy ( &FindZone_Parms.ZoneName, &ZoneName, 0xC );

	this->ProcessEvent ( pFnFindZone, &FindZone_Parms, NULL );

	return FindZone_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// [0x00020002] 
// Parameters infos:
// class USeqEvent_MobileRawInput* NewHandler                     ( CPF_Parm )

void UMobilePlayerInput::AddKismetRawInputEventHandler ( class USeqEvent_MobileRawInput* NewHandler )
{
	static UFunction* pFnAddKismetRawInputEventHandler = NULL;

	if ( ! pFnAddKismetRawInputEventHandler )
		pFnAddKismetRawInputEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 44265 ];

	UMobilePlayerInput_execAddKismetRawInputEventHandler_Parms AddKismetRawInputEventHandler_Parms;
	AddKismetRawInputEventHandler_Parms.NewHandler = NewHandler;

	this->ProcessEvent ( pFnAddKismetRawInputEventHandler, &AddKismetRawInputEventHandler_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// [0x00020002] 
// Parameters infos:
// class USeqEvent_MobileBase*    NewHandler                     ( CPF_Parm )

void UMobilePlayerInput::AddKismetEventHandler ( class USeqEvent_MobileBase* NewHandler )
{
	static UFunction* pFnAddKismetEventHandler = NULL;

	if ( ! pFnAddKismetEventHandler )
		pFnAddKismetEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 44262 ];

	UMobilePlayerInput_execAddKismetEventHandler_Parms AddKismetEventHandler_Parms;
	AddKismetEventHandler_Parms.NewHandler = NewHandler;

	this->ProcessEvent ( pFnAddKismetEventHandler, &AddKismetEventHandler_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventRefreshKismetLinks ( )
{
	static UFunction* pFnRefreshKismetLinks = NULL;

	if ( ! pFnRefreshKismetLinks )
		pFnRefreshKismetLinks = (UFunction*) UObject::GObjObjects()->Data[ 44257 ];

	UMobilePlayerInput_eventRefreshKismetLinks_Parms RefreshKismetLinks_Parms;

	this->ProcessEvent ( pFnRefreshKismetLinks, &RefreshKismetLinks_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::SwapZoneOwners ( )
{
	static UFunction* pFnSwapZoneOwners = NULL;

	if ( ! pFnSwapZoneOwners )
		pFnSwapZoneOwners = (UFunction*) UObject::GObjObjects()->Data[ 44254 ];

	UMobilePlayerInput_execSwapZoneOwners_Parms SwapZoneOwners_Parms;

	this->ProcessEvent ( pFnSwapZoneOwners, &SwapZoneOwners_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitializeInputZones ( )
{
	static UFunction* pFnInitializeInputZones = NULL;

	if ( ! pFnInitializeInputZones )
		pFnInitializeInputZones = (UFunction*) UObject::GObjObjects()->Data[ 44249 ];

	UMobilePlayerInput_execInitializeInputZones_Parms InitializeInputZones_Parms;

	this->ProcessEvent ( pFnInitializeInputZones, &InitializeInputZones_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitTouchSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitTouchSystem ( )
{
	static UFunction* pFnInitTouchSystem = NULL;

	if ( ! pFnInitTouchSystem )
		pFnInitTouchSystem = (UFunction*) UObject::GObjObjects()->Data[ 44248 ];

	UMobilePlayerInput_execInitTouchSystem_Parms InitTouchSystem_Parms;

	this->ProcessEvent ( pFnInitTouchSystem, &InitTouchSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::ClientInitInputSystem ( )
{
	static UFunction* pFnClientInitInputSystem = NULL;

	if ( ! pFnClientInitInputSystem )
		pFnClientInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44247 ];

	UMobilePlayerInput_execClientInitInputSystem_Parms ClientInitInputSystem_Parms;

	this->ProcessEvent ( pFnClientInitInputSystem, &ClientInitInputSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44246 ];

	UMobilePlayerInput_execInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobilePlayerInput::ProcessWorldTouch ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnProcessWorldTouch = NULL;

	if ( ! pFnProcessWorldTouch )
		pFnProcessWorldTouch = (UFunction*) UObject::GObjObjects()->Data[ 44241 ];

	UMobilePlayerInput_execProcessWorldTouch_Parms ProcessWorldTouch_Parms;
	ProcessWorldTouch_Parms.Zone = Zone;
	ProcessWorldTouch_Parms.EventType = EventType;
	memcpy ( &ProcessWorldTouch_Parms.TouchLocation, &TouchLocation, 0x8 );

	pFnProcessWorldTouch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessWorldTouch, &ProcessWorldTouch_Parms, NULL );

	pFnProcessWorldTouch->FunctionFlags |= 0x400;

	return ProcessWorldTouch_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Delta                          ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobilePlayerInput::SendInputAxis ( struct FName Key, float Delta, float DeltaTime )
{
	static UFunction* pFnSendInputAxis = NULL;

	if ( ! pFnSendInputAxis )
		pFnSendInputAxis = (UFunction*) UObject::GObjObjects()->Data[ 44237 ];

	UMobilePlayerInput_execSendInputAxis_Parms SendInputAxis_Parms;
	memcpy ( &SendInputAxis_Parms.Key, &Key, 0x8 );
	SendInputAxis_Parms.Delta = Delta;
	SendInputAxis_Parms.DeltaTime = DeltaTime;

	pFnSendInputAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendInputAxis, &SendInputAxis_Parms, NULL );

	pFnSendInputAxis->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.SendInputKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_Parm )

void UMobilePlayerInput::SendInputKey ( struct FName Key, unsigned char Event, float AmountDepressed )
{
	static UFunction* pFnSendInputKey = NULL;

	if ( ! pFnSendInputKey )
		pFnSendInputKey = (UFunction*) UObject::GObjObjects()->Data[ 44233 ];

	UMobilePlayerInput_execSendInputKey_Parms SendInputKey_Parms;
	memcpy ( &SendInputKey_Parms.Key, &Key, 0x8 );
	SendInputKey_Parms.Event = Event;
	SendInputKey_Parms.AmountDepressed = AmountDepressed;

	pFnSendInputKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendInputKey, &SendInputKey_Parms, NULL );

	pFnSendInputKey->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            NewViewportX                   ( CPF_Parm )
// int                            NewViewportY                   ( CPF_Parm )
// int                            NewViewportSizeX               ( CPF_Parm )
// int                            NewViewportSizeY               ( CPF_Parm )

void UMobilePlayerInput::ConditionalUpdateInputZones ( int NewViewportX, int NewViewportY, int NewViewportSizeX, int NewViewportSizeY )
{
	static UFunction* pFnConditionalUpdateInputZones = NULL;

	if ( ! pFnConditionalUpdateInputZones )
		pFnConditionalUpdateInputZones = (UFunction*) UObject::GObjObjects()->Data[ 44228 ];

	UMobilePlayerInput_execConditionalUpdateInputZones_Parms ConditionalUpdateInputZones_Parms;
	ConditionalUpdateInputZones_Parms.NewViewportX = NewViewportX;
	ConditionalUpdateInputZones_Parms.NewViewportY = NewViewportY;
	ConditionalUpdateInputZones_Parms.NewViewportSizeX = NewViewportSizeX;
	ConditionalUpdateInputZones_Parms.NewViewportSizeY = NewViewportSizeY;

	pFnConditionalUpdateInputZones->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConditionalUpdateInputZones, &ConditionalUpdateInputZones_Parms, NULL );

	pFnConditionalUpdateInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bIsFirstInitialize             ( CPF_Parm )

void UMobilePlayerInput::NativeInitializeInputZones ( unsigned long bIsFirstInitialize )
{
	static UFunction* pFnNativeInitializeInputZones = NULL;

	if ( ! pFnNativeInitializeInputZones )
		pFnNativeInitializeInputZones = (UFunction*) UObject::GObjObjects()->Data[ 44226 ];

	UMobilePlayerInput_execNativeInitializeInputZones_Parms NativeInitializeInputZones_Parms;
	NativeInitializeInputZones_Parms.bIsFirstInitialize = bIsFirstInitialize;

	pFnNativeInitializeInputZones->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeInitializeInputZones, &NativeInitializeInputZones_Parms, NULL );

	pFnNativeInitializeInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::NativeInitializeInputSystem ( )
{
	static UFunction* pFnNativeInitializeInputSystem = NULL;

	if ( ! pFnNativeInitializeInputSystem )
		pFnNativeInitializeInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44225 ];

	UMobilePlayerInput_execNativeInitializeInputSystem_Parms NativeInitializeInputSystem_Parms;

	pFnNativeInitializeInputSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeInitializeInputSystem, &NativeInitializeInputSystem_Parms, NULL );

	pFnNativeInitializeInputSystem->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.OnInputTouch
// [0x00120000] 
// Parameters infos:
// int                            Handle                         ( CPF_Parm )
// unsigned char                  Type                           ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )
// float                          DeviceTimestamp                ( CPF_Parm )
// int                            TouchpadIndex                  ( CPF_Parm )

void UMobilePlayerInput::OnInputTouch ( int Handle, unsigned char Type, struct FVector2D TouchLocation, float DeviceTimestamp, int TouchpadIndex )
{
	static UFunction* pFnOnInputTouch = NULL;

	if ( ! pFnOnInputTouch )
		pFnOnInputTouch = (UFunction*) UObject::GObjObjects()->Data[ 44183 ];

	UMobilePlayerInput_execOnInputTouch_Parms OnInputTouch_Parms;
	OnInputTouch_Parms.Handle = Handle;
	OnInputTouch_Parms.Type = Type;
	memcpy ( &OnInputTouch_Parms.TouchLocation, &TouchLocation, 0x8 );
	OnInputTouch_Parms.DeviceTimestamp = DeviceTimestamp;
	OnInputTouch_Parms.TouchpadIndex = TouchpadIndex;

	this->ProcessEvent ( pFnOnInputTouch, &OnInputTouch_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// int                            TouchpadIndex                  ( CPF_Parm )

bool UMobilePlayerInput::OnPreviewTouch ( float X, float Y, int TouchpadIndex )
{
	static UFunction* pFnOnPreviewTouch = NULL;

	if ( ! pFnOnPreviewTouch )
		pFnOnPreviewTouch = (UFunction*) UObject::GObjObjects()->Data[ 44185 ];

	UMobilePlayerInput_execOnPreviewTouch_Parms OnPreviewTouch_Parms;
	OnPreviewTouch_Parms.X = X;
	OnPreviewTouch_Parms.Y = Y;
	OnPreviewTouch_Parms.TouchpadIndex = TouchpadIndex;

	this->ProcessEvent ( pFnOnPreviewTouch, &OnPreviewTouch_Parms, NULL );

	return OnPreviewTouch_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// [0x00120000] 
// Parameters infos:

void UMobilePlayerInput::OnTouchNotHandledInMenu ( )
{
	static UFunction* pFnOnTouchNotHandledInMenu = NULL;

	if ( ! pFnOnTouchNotHandledInMenu )
		pFnOnTouchNotHandledInMenu = (UFunction*) UObject::GObjObjects()->Data[ 44187 ];

	UMobilePlayerInput_execOnTouchNotHandledInMenu_Parms OnTouchNotHandledInMenu_Parms;

	this->ProcessEvent ( pFnOnTouchNotHandledInMenu, &OnTouchNotHandledInMenu_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.PlayerInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UMobilePlayerInput::eventPlayerInput ( float DeltaTime )
{
	static UFunction* pFnPlayerInput = NULL;

	if ( ! pFnPlayerInput )
		pFnPlayerInput = (UFunction*) UObject::GObjObjects()->Data[ 44214 ];

	UMobilePlayerInput_eventPlayerInput_Parms PlayerInput_Parms;
	PlayerInput_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerInput, &PlayerInput_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CancelMobileInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::CancelMobileInput ( )
{
	static UFunction* pFnCancelMobileInput = NULL;

	if ( ! pFnCancelMobileInput )
		pFnCancelMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 44213 ];

	UMobilePlayerInput_execCancelMobileInput_Parms CancelMobileInput_Parms;

	pFnCancelMobileInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelMobileInput, &CancelMobileInput_Parms, NULL );

	pFnCancelMobileInput->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.ProcessMobileInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UMobilePlayerInput::ProcessMobileInput ( float DeltaTime )
{
	static UFunction* pFnProcessMobileInput = NULL;

	if ( ! pFnProcessMobileInput )
		pFnProcessMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 44211 ];

	UMobilePlayerInput_execProcessMobileInput_Parms ProcessMobileInput_Parms;
	ProcessMobileInput_Parms.DeltaTime = DeltaTime;

	pFnProcessMobileInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessMobileInput, &ProcessMobileInput_Parms, NULL );

	pFnProcessMobileInput->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] 
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 45006 ];

	UNavMeshGoal_OutOfViewFrom_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// struct FVector                 InOutOfViewLocation            ( CPF_Parm )

bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint ( class UNavigationHandle* NavHandle, struct FVector InOutOfViewLocation )
{
	static UFunction* pFnMustBeHiddenFromThisPoint = NULL;

	if ( ! pFnMustBeHiddenFromThisPoint )
		pFnMustBeHiddenFromThisPoint = (UFunction*) UObject::GObjObjects()->Data[ 45001 ];

	UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Parms MustBeHiddenFromThisPoint_Parms;
	MustBeHiddenFromThisPoint_Parms.NavHandle = NavHandle;
	memcpy ( &MustBeHiddenFromThisPoint_Parms.InOutOfViewLocation, &InOutOfViewLocation, 0xC );

	this->ProcessEvent ( pFnMustBeHiddenFromThisPoint, &MustBeHiddenFromThisPoint_Parms, NULL );

	return MustBeHiddenFromThisPoint_Parms.ReturnValue;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::RecycleNative ( )
{
	static UFunction* pFnRecycleNative = NULL;

	if ( ! pFnRecycleNative )
		pFnRecycleNative = (UFunction*) UObject::GObjObjects()->Data[ 45000 ];

	UNavMeshGoal_OutOfViewFrom_execRecycleNative_Parms RecycleNative_Parms;

	pFnRecycleNative->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRecycleNative, &RecycleNative_Parms, NULL );

	pFnRecycleNative->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] 
// Parameters infos:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 45021 ];

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// struct FVector                 InLocation                     ( CPF_Const | CPF_Parm )
// struct FRotator                InRotation                     ( CPF_Const | CPF_Parm )
// float                          InDistanceToCheck              ( CPF_Const | CPF_Parm )
// TArray< struct FVector >       InLocationsToCheck             ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations ( class UNavigationHandle* NavHandle, struct FVector InLocation, struct FRotator InRotation, float InDistanceToCheck, TArray< struct FVector > InLocationsToCheck )
{
	static UFunction* pFnBiasAgainstPolysWithinDistanceOfLocations = NULL;

	if ( ! pFnBiasAgainstPolysWithinDistanceOfLocations )
		pFnBiasAgainstPolysWithinDistanceOfLocations = (UFunction*) UObject::GObjObjects()->Data[ 45012 ];

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Parms BiasAgainstPolysWithinDistanceOfLocations_Parms;
	BiasAgainstPolysWithinDistanceOfLocations_Parms.NavHandle = NavHandle;
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InLocation, &InLocation, 0xC );
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InRotation, &InRotation, 0xC );
	BiasAgainstPolysWithinDistanceOfLocations_Parms.InDistanceToCheck = InDistanceToCheck;
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InLocationsToCheck, &InLocationsToCheck, 0xC );

	this->ProcessEvent ( pFnBiasAgainstPolysWithinDistanceOfLocations, &BiasAgainstPolysWithinDistanceOfLocations_Parms, NULL );

	return BiasAgainstPolysWithinDistanceOfLocations_Parms.ReturnValue;
};

// Function GameFramework.SecondaryViewportClient.PostRender
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void USecondaryViewportClient::eventPostRender ( class UCanvas* Canvas )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 44979 ];

	USecondaryViewportClient_eventPostRender_Parms PostRender_Parms;
	PostRender_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileSecondaryViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileSecondaryViewportClient::eventPostRender ( class UCanvas* Canvas )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 44981 ];

	UMobileSecondaryViewportClient_eventPostRender_Parms PostRender_Parms;
	PostRender_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void USeqAct_GameCrowdPopulationManagerToggle::AgentDestroyed ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 45076 ];

	USeqAct_GameCrowdPopulationManagerToggle_execAgentDestroyed_Parms AgentDestroyed_Parms;
	AgentDestroyed_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USeqAct_GameCrowdPopulationManagerToggle::GetMaxSpawnDist ( )
{
	static UFunction* pFnGetMaxSpawnDist = NULL;

	if ( ! pFnGetMaxSpawnDist )
		pFnGetMaxSpawnDist = (UFunction*) UObject::GObjObjects()->Data[ 45074 ];

	USeqAct_GameCrowdPopulationManagerToggle_execGetMaxSpawnDist_Parms GetMaxSpawnDist_Parms;

	this->ProcessEvent ( pFnGetMaxSpawnDist, &GetMaxSpawnDist_Parms, NULL );

	return GetMaxSpawnDist_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdPopulationManager* PopMgr                         ( CPF_Parm )
// struct FCrowdSpawnInfoItem     out_Item                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USeqAct_GameCrowdPopulationManagerToggle::eventFillCrowdSpawnInfoItem ( class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem* out_Item )
{
	static UFunction* pFnFillCrowdSpawnInfoItem = NULL;

	if ( ! pFnFillCrowdSpawnInfoItem )
		pFnFillCrowdSpawnInfoItem = (UFunction*) UObject::GObjObjects()->Data[ 45070 ];

	USeqAct_GameCrowdPopulationManagerToggle_eventFillCrowdSpawnInfoItem_Parms FillCrowdSpawnInfoItem_Parms;
	FillCrowdSpawnInfoItem_Parms.PopMgr = PopMgr;

	this->ProcessEvent ( pFnFillCrowdSpawnInfoItem, &FillCrowdSpawnInfoItem_Parms, NULL );

	if ( out_Item )
		memcpy ( out_Item, &FillCrowdSpawnInfoItem_Parms.out_Item, 0x7C );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_GameCrowdPopulationManagerToggle::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45068 ];

	USeqAct_GameCrowdPopulationManagerToggle_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_GameCrowdSpawner::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45079 ];

	USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_MobileSaveLoadValue::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45084 ];

	USeqAct_MobileSaveLoadValue_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgentSkeletal* Agent                          ( CPF_Parm )

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor ( class AGameCrowdAgentSkeletal* Agent )
{
	static UFunction* pFnSetCurrentAnimationActionFor = NULL;

	if ( ! pFnSetCurrentAnimationActionFor )
		pFnSetCurrentAnimationActionFor = (UFunction*) UObject::GObjObjects()->Data[ 45105 ];

	USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Parms SetCurrentAnimationActionFor_Parms;
	SetCurrentAnimationActionFor_Parms.Agent = Agent;

	this->ProcessEvent ( pFnSetCurrentAnimationActionFor, &SetCurrentAnimationActionFor_Parms, NULL );
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_PlayAgentAnimation::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45103 ];

	USeqAct_PlayAgentAnimation_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRender.Render
// [0x00020000] 
// Parameters infos:
// class UCanvas*                 TargetCanvas                   ( CPF_Parm )
// class AHUD*                    TargetHud                      ( CPF_Parm )

void USeqEvent_HudRender::Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 45117 ];

	USeqEvent_HudRender_execRender_Parms Render_Parms;
	Render_Parms.TargetCanvas = TargetCanvas;
	Render_Parms.TargetHud = TargetHud;

	this->ProcessEvent ( pFnRender, &Render_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_HudRender::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 45113 ];

	USeqEvent_HudRender_eventRegisterEvent_Parms RegisterEvent_Parms;

	this->ProcessEvent ( pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      MPI                            ( CPF_Parm )

void USeqEvent_MobileBase::eventAddToMobileInput ( class UMobilePlayerInput* MPI )
{
	static UFunction* pFnAddToMobileInput = NULL;

	if ( ! pFnAddToMobileInput )
		pFnAddToMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 45165 ];

	USeqEvent_MobileBase_eventAddToMobileInput_Parms AddToMobileInput_Parms;
	AddToMobileInput_Parms.MPI = MPI;

	this->ProcessEvent ( pFnAddToMobileInput, &AddToMobileInput_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileBase::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 45161 ];

	USeqEvent_MobileBase_eventRegisterEvent_Parms RegisterEvent_Parms;

	this->ProcessEvent ( pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqEvent_MobileMotion::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45189 ];

	USeqEvent_MobileMotion_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      MPI                            ( CPF_Parm )

void USeqEvent_MobileZoneBase::eventAddToMobileInput ( class UMobilePlayerInput* MPI )
{
	static UFunction* pFnAddToMobileInput = NULL;

	if ( ! pFnAddToMobileInput )
		pFnAddToMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 45168 ];

	USeqEvent_MobileZoneBase_eventAddToMobileInput_Parms AddToMobileInput_Parms;
	AddToMobileInput_Parms.MPI = MPI;

	this->ProcessEvent ( pFnAddToMobileInput, &AddToMobileInput_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileRawInput::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 45196 ];

	USeqEvent_MobileRawInput_eventRegisterEvent_Parms RegisterEvent_Parms;

	this->ProcessEvent ( pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameCameraBase::eventModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 42551 ];

	UGameCameraBase_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0x150 );
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] 
// Parameters infos:

void UGameCameraBase::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 42550 ];

	UGameCameraBase_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameCameraBase.DisplayDebug
// [0x00420100] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 42546 ];

	UGameCameraBase_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 42541 ];

	UGameCameraBase_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420000] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 42536 ];

	UGameCameraBase_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameCameraBase::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 42535 ];

	UGameCameraBase_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020000] 
// Parameters infos:
// class UGameCameraBase*         NewCamera                      ( CPF_Parm )

void UGameCameraBase::OnBecomeInActive ( class UGameCameraBase* NewCamera )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 42533 ];

	UGameCameraBase_execOnBecomeInActive_Parms OnBecomeInActive_Parms;
	OnBecomeInActive_Parms.NewCamera = NewCamera;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020000] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameCameraBase::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 42531 ];

	UGameCameraBase_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 43823 ];

	UGameThirdPersonCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameThirdPersonCamera::eventModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 43821 ];

	UGameThirdPersonCamera_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0x150 );
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameThirdPersonCamera::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 43819 ];

	UGameThirdPersonCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 43814 ];

	UGameThirdPersonCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] ( FUNC_Final )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UGameThirdPersonCamera::UpdateCameraMode ( class APawn* P )
{
	static UFunction* pFnUpdateCameraMode = NULL;

	if ( ! pFnUpdateCameraMode )
		pFnUpdateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 43761 ];

	UGameThirdPersonCamera_execUpdateCameraMode_Parms UpdateCameraMode_Parms;
	UpdateCameraMode_Parms.P = P;

	this->ProcessEvent ( pFnUpdateCameraMode, &UpdateCameraMode_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] 
// Parameters infos:
// class UGameThirdPersonCameraMode* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode ( class APawn* P )
{
	static UFunction* pFnFindBestCameraMode = NULL;

	if ( ! pFnFindBestCameraMode )
		pFnFindBestCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 43809 ];

	UGameThirdPersonCamera_execFindBestCameraMode_Parms FindBestCameraMode_Parms;
	FindBestCameraMode_Parms.P = P;

	this->ProcessEvent ( pFnFindBestCameraMode, &FindBestCameraMode_Parms, NULL );

	return FindBestCameraMode_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] 
// Parameters infos:
// struct FRotator                Delta                          ( CPF_Parm )

void UGameThirdPersonCamera::AdjustFocusPointInterpolation ( struct FRotator Delta )
{
	static UFunction* pFnAdjustFocusPointInterpolation = NULL;

	if ( ! pFnAdjustFocusPointInterpolation )
		pFnAdjustFocusPointInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 43807 ];

	UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Parms AdjustFocusPointInterpolation_Parms;
	memcpy ( &AdjustFocusPointInterpolation_Parms.Delta, &Delta, 0xC );

	this->ProcessEvent ( pFnAdjustFocusPointInterpolation, &AdjustFocusPointInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UGameThirdPersonCamera::GetActualFocusLocation ( )
{
	static UFunction* pFnGetActualFocusLocation = NULL;

	if ( ! pFnGetActualFocusLocation )
		pFnGetActualFocusLocation = (UFunction*) UObject::GObjObjects()->Data[ 43803 ];

	UGameThirdPersonCamera_execGetActualFocusLocation_Parms GetActualFocusLocation_Parms;

	this->ProcessEvent ( pFnGetActualFocusLocation, &GetActualFocusLocation_Parms, NULL );

	return GetActualFocusLocation_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UGameThirdPersonCamera::eventUpdateFocusPoint ( class APawn* P )
{
	static UFunction* pFnUpdateFocusPoint = NULL;

	if ( ! pFnUpdateFocusPoint )
		pFnUpdateFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 43799 ];

	UGameThirdPersonCamera_eventUpdateFocusPoint_Parms UpdateFocusPoint_Parms;
	UpdateFocusPoint_Parms.P = P;

	this->ProcessEvent ( pFnUpdateFocusPoint, &UpdateFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] 
// Parameters infos:
// unsigned long                  bLeaveCameraRotation           ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::ClearFocusPoint ( unsigned long bLeaveCameraRotation )
{
	static UFunction* pFnClearFocusPoint = NULL;

	if ( ! pFnClearFocusPoint )
		pFnClearFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 43797 ];

	UGameThirdPersonCamera_execClearFocusPoint_Parms ClearFocusPoint_Parms;
	ClearFocusPoint_Parms.bLeaveCameraRotation = bLeaveCameraRotation;

	this->ProcessEvent ( pFnClearFocusPoint, &ClearFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameThirdPersonCamera::GetFocusActor ( )
{
	static UFunction* pFnGetFocusActor = NULL;

	if ( ! pFnGetFocusActor )
		pFnGetFocusActor = (UFunction*) UObject::GObjObjects()->Data[ 43795 ];

	UGameThirdPersonCamera_execGetFocusActor_Parms GetFocusActor_Parms;

	this->ProcessEvent ( pFnGetFocusActor, &GetFocusActor_Parms, NULL );

	return GetFocusActor_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] 
// Parameters infos:
// class AActor*                  FocusActor                     ( CPF_Parm )
// struct FName                   FocusBoneName                  ( CPF_Parm )
// struct FVector2D               InterpSpeedRange               ( CPF_Parm )
// struct FVector2D               InFocusFOV                     ( CPF_Parm )
// float                          CameraFOV                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlwaysFocus                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAdjustCamera                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreTrace                   ( CPF_OptionalParm | CPF_Parm )
// float                          FocusPitchOffsetDeg            ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::SetFocusOnActor ( class AActor* FocusActor, struct FName FocusBoneName, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg )
{
	static UFunction* pFnSetFocusOnActor = NULL;

	if ( ! pFnSetFocusOnActor )
		pFnSetFocusOnActor = (UFunction*) UObject::GObjObjects()->Data[ 43785 ];

	UGameThirdPersonCamera_execSetFocusOnActor_Parms SetFocusOnActor_Parms;
	SetFocusOnActor_Parms.FocusActor = FocusActor;
	memcpy ( &SetFocusOnActor_Parms.FocusBoneName, &FocusBoneName, 0x8 );
	memcpy ( &SetFocusOnActor_Parms.InterpSpeedRange, &InterpSpeedRange, 0x8 );
	memcpy ( &SetFocusOnActor_Parms.InFocusFOV, &InFocusFOV, 0x8 );
	SetFocusOnActor_Parms.CameraFOV = CameraFOV;
	SetFocusOnActor_Parms.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnActor_Parms.bAdjustCamera = bAdjustCamera;
	SetFocusOnActor_Parms.bIgnoreTrace = bIgnoreTrace;
	SetFocusOnActor_Parms.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	this->ProcessEvent ( pFnSetFocusOnActor, &SetFocusOnActor_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] 
// Parameters infos:
// struct FVector                 FocusWorldLoc                  ( CPF_Parm )
// struct FVector2D               InterpSpeedRange               ( CPF_Parm )
// struct FVector2D               InFocusFOV                     ( CPF_Parm )
// float                          CameraFOV                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlwaysFocus                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAdjustCamera                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreTrace                   ( CPF_OptionalParm | CPF_Parm )
// float                          FocusPitchOffsetDeg            ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::SetFocusOnLoc ( struct FVector FocusWorldLoc, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg )
{
	static UFunction* pFnSetFocusOnLoc = NULL;

	if ( ! pFnSetFocusOnLoc )
		pFnSetFocusOnLoc = (UFunction*) UObject::GObjObjects()->Data[ 43776 ];

	UGameThirdPersonCamera_execSetFocusOnLoc_Parms SetFocusOnLoc_Parms;
	memcpy ( &SetFocusOnLoc_Parms.FocusWorldLoc, &FocusWorldLoc, 0xC );
	memcpy ( &SetFocusOnLoc_Parms.InterpSpeedRange, &InterpSpeedRange, 0x8 );
	memcpy ( &SetFocusOnLoc_Parms.InFocusFOV, &InFocusFOV, 0x8 );
	SetFocusOnLoc_Parms.CameraFOV = CameraFOV;
	SetFocusOnLoc_Parms.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnLoc_Parms.bAdjustCamera = bAdjustCamera;
	SetFocusOnLoc_Parms.bIgnoreTrace = bIgnoreTrace;
	SetFocusOnLoc_Parms.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	this->ProcessEvent ( pFnSetFocusOnLoc, &SetFocusOnLoc_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] 
// Parameters infos:
// int                            AngleOffset                    ( CPF_Parm )

void UGameThirdPersonCamera::AdjustTurn ( int AngleOffset )
{
	static UFunction* pFnAdjustTurn = NULL;

	if ( ! pFnAdjustTurn )
		pFnAdjustTurn = (UFunction*) UObject::GObjObjects()->Data[ 43774 ];

	UGameThirdPersonCamera_execAdjustTurn_Parms AdjustTurn_Parms;
	AdjustTurn_Parms.AngleOffset = AngleOffset;

	this->ProcessEvent ( pFnAdjustTurn, &AdjustTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameThirdPersonCamera::EndTurn ( )
{
	static UFunction* pFnEndTurn = NULL;

	if ( ! pFnEndTurn )
		pFnEndTurn = (UFunction*) UObject::GObjObjects()->Data[ 43773 ];

	UGameThirdPersonCamera_execEndTurn_Parms EndTurn_Parms;

	pFnEndTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndTurn, &EndTurn_Parms, NULL );

	pFnEndTurn->FunctionFlags |= 0x400;
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] 
// Parameters infos:
// int                            StartAngle                     ( CPF_Parm )
// int                            EndAngle                       ( CPF_Parm )
// float                          TimeSec                        ( CPF_Parm )
// float                          DelaySec                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlignTargetWhenFinished       ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::BeginTurn ( int StartAngle, int EndAngle, float TimeSec, float DelaySec, unsigned long bAlignTargetWhenFinished )
{
	static UFunction* pFnBeginTurn = NULL;

	if ( ! pFnBeginTurn )
		pFnBeginTurn = (UFunction*) UObject::GObjObjects()->Data[ 43767 ];

	UGameThirdPersonCamera_execBeginTurn_Parms BeginTurn_Parms;
	BeginTurn_Parms.StartAngle = StartAngle;
	BeginTurn_Parms.EndAngle = EndAngle;
	BeginTurn_Parms.TimeSec = TimeSec;
	BeginTurn_Parms.DelaySec = DelaySec;
	BeginTurn_Parms.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	this->ProcessEvent ( pFnBeginTurn, &BeginTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] ( FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::PlayerUpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnPlayerUpdateCamera = NULL;

	if ( ! pFnPlayerUpdateCamera )
		pFnPlayerUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 43762 ];

	UGameThirdPersonCamera_execPlayerUpdateCamera_Parms PlayerUpdateCamera_Parms;
	PlayerUpdateCamera_Parms.P = P;
	PlayerUpdateCamera_Parms.CameraActor = CameraActor;
	PlayerUpdateCamera_Parms.DeltaTime = DeltaTime;

	pFnPlayerUpdateCamera->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerUpdateCamera, &PlayerUpdateCamera_Parms, NULL );

	pFnPlayerUpdateCamera->FunctionFlags |= 0x400;

	if ( OutVT )
		memcpy ( OutVT, &PlayerUpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 43756 ];

	UGameThirdPersonCamera_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

float UGameThirdPersonCamera::eventGetDesiredFOV ( class APawn* ViewedPawn )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 43751 ];

	UGameThirdPersonCamera_eventGetDesiredFOV_Parms GetDesiredFOV_Parms;
	GetDesiredFOV_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );

	return GetDesiredFOV_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 43750 ];

	UGameThirdPersonCamera_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43749 ];

	UGameThirdPersonCamera_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] 
// Parameters infos:
// class UGameThirdPersonCameraMode* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ModeClass                      ( CPF_Parm )

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode ( class UClass* ModeClass )
{
	static UFunction* pFnCreateCameraMode = NULL;

	if ( ! pFnCreateCameraMode )
		pFnCreateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 43744 ];

	UGameThirdPersonCamera_execCreateCameraMode_Parms CreateCameraMode_Parms;
	CreateCameraMode_Parms.ModeClass = ModeClass;

	this->ProcessEvent ( pFnCreateCameraMode, &CreateCameraMode_Parms, NULL );

	return CreateCameraMode_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          inHorizFOV                     ( CPF_Parm )
// class APawn*                   CameraTargetPawn               ( CPF_Parm )

float AGamePlayerCamera::AdjustFOVForViewport ( float inHorizFOV, class APawn* CameraTargetPawn )
{
	static UFunction* pFnAdjustFOVForViewport = NULL;

	if ( ! pFnAdjustFOVForViewport )
		pFnAdjustFOVForViewport = (UFunction*) UObject::GObjObjects()->Data[ 43461 ];

	AGamePlayerCamera_execAdjustFOVForViewport_Parms AdjustFOVForViewport_Parms;
	AdjustFOVForViewport_Parms.inHorizFOV = inHorizFOV;
	AdjustFOVForViewport_Parms.CameraTargetPawn = CameraTargetPawn;

	pFnAdjustFOVForViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdjustFOVForViewport, &AdjustFOVForViewport_Parms, NULL );

	pFnAdjustFOVForViewport->FunctionFlags |= 0x400;

	return AdjustFOVForViewport_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 43473 ];

	AGamePlayerCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] 
// Parameters infos:

void AGamePlayerCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 43472 ];

	AGamePlayerCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] 
// Parameters infos:
// struct FVector                 NewColorScale                  ( CPF_Parm )

void AGamePlayerCamera::SetColorScale ( struct FVector NewColorScale )
{
	static UFunction* pFnSetColorScale = NULL;

	if ( ! pFnSetColorScale )
		pFnSetColorScale = (UFunction*) UObject::GObjObjects()->Data[ 43470 ];

	AGamePlayerCamera_execSetColorScale_Parms SetColorScale_Parms;
	memcpy ( &SetColorScale_Parms.NewColorScale, &NewColorScale, 0xC );

	this->ProcessEvent ( pFnSetColorScale, &SetColorScale_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 43465 ];

	AGamePlayerCamera_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420102] 
// Parameters infos:
// struct FTViewTarget            OutVT                          ( CPF_Const | CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::UpdateCameraLensEffects ( struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCameraLensEffects = NULL;

	if ( ! pFnUpdateCameraLensEffects )
		pFnUpdateCameraLensEffects = (UFunction*) UObject::GObjObjects()->Data[ 43462 ];

	AGamePlayerCamera_execUpdateCameraLensEffects_Parms UpdateCameraLensEffects_Parms;

	this->ProcessEvent ( pFnUpdateCameraLensEffects, &UpdateCameraLensEffects_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCameraLensEffects_Parms.OutVT, 0x2C );
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateViewTarget = NULL;

	if ( ! pFnUpdateViewTarget )
		pFnUpdateViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 43455 ];

	AGamePlayerCamera_execUpdateViewTarget_Parms UpdateViewTarget_Parms;
	UpdateViewTarget_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateViewTarget, &UpdateViewTarget_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateViewTarget_Parms.OutVT, 0x2C );
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGamePlayerCamera::ShouldConstrainAspectRatio ( )
{
	static UFunction* pFnShouldConstrainAspectRatio = NULL;

	if ( ! pFnShouldConstrainAspectRatio )
		pFnShouldConstrainAspectRatio = (UFunction*) UObject::GObjObjects()->Data[ 43453 ];

	AGamePlayerCamera_execShouldConstrainAspectRatio_Parms ShouldConstrainAspectRatio_Parms;

	this->ProcessEvent ( pFnShouldConstrainAspectRatio, &ShouldConstrainAspectRatio_Parms, NULL );

	return ShouldConstrainAspectRatio_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00080002] 
// Parameters infos:
// class UGameCameraBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  CameraTarget                   ( CPF_Parm )

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType ( class AActor* CameraTarget )
{
	static UFunction* pFnFindBestCameraType = NULL;

	if ( ! pFnFindBestCameraType )
		pFnFindBestCameraType = (UFunction*) UObject::GObjObjects()->Data[ 43449 ];

	AGamePlayerCamera_execFindBestCameraType_Parms FindBestCameraType_Parms;
	FindBestCameraType_Parms.CameraTarget = CameraTarget;

	this->ProcessEvent ( pFnFindBestCameraType, &FindBestCameraType_Parms, NULL );

	return FindBestCameraType_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43448 ];

	AGamePlayerCamera_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43447 ];

	AGamePlayerCamera_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  TargetBase                     ( CPF_Parm )

void AGamePlayerCamera::CacheLastTargetBaseInfo ( class AActor* TargetBase )
{
	static UFunction* pFnCacheLastTargetBaseInfo = NULL;

	if ( ! pFnCacheLastTargetBaseInfo )
		pFnCacheLastTargetBaseInfo = (UFunction*) UObject::GObjObjects()->Data[ 43445 ];

	AGamePlayerCamera_execCacheLastTargetBaseInfo_Parms CacheLastTargetBaseInfo_Parms;
	CacheLastTargetBaseInfo_Parms.TargetBase = TargetBase;

	pFnCacheLastTargetBaseInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCacheLastTargetBaseInfo, &CacheLastTargetBaseInfo_Parms, NULL );

	pFnCacheLastTargetBaseInfo->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] 
// Parameters infos:
// class UGameCameraBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  CameraClass                    ( CPF_Parm )

class UGameCameraBase* AGamePlayerCamera::CreateCamera ( class UClass* CameraClass )
{
	static UFunction* pFnCreateCamera = NULL;

	if ( ! pFnCreateCamera )
		pFnCreateCamera = (UFunction*) UObject::GObjObjects()->Data[ 43441 ];

	AGamePlayerCamera_execCreateCamera_Parms CreateCamera_Parms;
	CreateCamera_Parms.CameraClass = CameraClass;

	this->ProcessEvent ( pFnCreateCamera, &CreateCamera_Parms, NULL );

	return CreateCamera_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FViewOffsetData         NewViewOffset                  ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::SetViewOffset ( struct FViewOffsetData* NewViewOffset )
{
	static UFunction* pFnSetViewOffset = NULL;

	if ( ! pFnSetViewOffset )
		pFnSetViewOffset = (UFunction*) UObject::GObjObjects()->Data[ 43932 ];

	UGameThirdPersonCameraMode_execSetViewOffset_Parms SetViewOffset_Parms;

	pFnSetViewOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewOffset, &SetViewOffset_Parms, NULL );

	pFnSetViewOffset->FunctionFlags |= 0x400;

	if ( NewViewOffset )
		memcpy ( NewViewOffset, &SetViewOffset_Parms.NewViewOffset, 0x24 );
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00420102] 
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameThirdPersonCameraMode::ModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 43930 ];

	UGameThirdPersonCameraMode_execModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0x150 );
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            VT                             ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::UpdatePostProcess ( float DeltaTime, struct FTViewTarget* VT )
{
	static UFunction* pFnUpdatePostProcess = NULL;

	if ( ! pFnUpdatePostProcess )
		pFnUpdatePostProcess = (UFunction*) UObject::GObjObjects()->Data[ 43920 ];

	UGameThirdPersonCameraMode_execUpdatePostProcess_Parms UpdatePostProcess_Parms;
	UpdatePostProcess_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdatePostProcess, &UpdatePostProcess_Parms, NULL );

	if ( VT )
		memcpy ( VT, &UpdatePostProcess_Parms.VT, 0x2C );
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TraceOwner                     ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::DOFTrace ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace )
{
	static UFunction* pFnDOFTrace = NULL;

	if ( ! pFnDOFTrace )
		pFnDOFTrace = (UFunction*) UObject::GObjObjects()->Data[ 43912 ];

	UGameThirdPersonCameraMode_execDOFTrace_Parms DOFTrace_Parms;
	DOFTrace_Parms.TraceOwner = TraceOwner;
	memcpy ( &DOFTrace_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &DOFTrace_Parms.EndTrace, &EndTrace, 0xC );

	this->ProcessEvent ( pFnDOFTrace, &DOFTrace_Parms, NULL );

	return DOFTrace_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TraceOwner                     ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace )
{
	static UFunction* pFnGetDOFFocusLoc = NULL;

	if ( ! pFnGetDOFFocusLoc )
		pFnGetDOFFocusLoc = (UFunction*) UObject::GObjObjects()->Data[ 43907 ];

	UGameThirdPersonCameraMode_execGetDOFFocusLoc_Parms GetDOFFocusLoc_Parms;
	GetDOFFocusLoc_Parms.TraceOwner = TraceOwner;
	memcpy ( &GetDOFFocusLoc_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &GetDOFFocusLoc_Parms.EndTrace, &EndTrace, 0xC );

	this->ProcessEvent ( pFnGetDOFFocusLoc, &GetDOFFocusLoc_Parms, NULL );

	return GetDOFFocusLoc_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 43902 ];

	UGameThirdPersonCameraMode_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

bool UGameThirdPersonCameraMode::SetFocusPoint ( class APawn* ViewedPawn )
{
	static UFunction* pFnSetFocusPoint = NULL;

	if ( ! pFnSetFocusPoint )
		pFnSetFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 43801 ];

	UGameThirdPersonCameraMode_execSetFocusPoint_Parms SetFocusPoint_Parms;
	SetFocusPoint_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnSetFocusPoint, &SetFocusPoint_Parms, NULL );

	return SetFocusPoint_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TargetPawn                     ( CPF_Parm )
// struct FTViewTarget            CurrentViewTarget              ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::eventGetCameraWorstCaseLoc ( class APawn* TargetPawn, struct FTViewTarget CurrentViewTarget )
{
	static UFunction* pFnGetCameraWorstCaseLoc = NULL;

	if ( ! pFnGetCameraWorstCaseLoc )
		pFnGetCameraWorstCaseLoc = (UFunction*) UObject::GObjObjects()->Data[ 43897 ];

	UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Parms GetCameraWorstCaseLoc_Parms;
	GetCameraWorstCaseLoc_Parms.TargetPawn = TargetPawn;
	memcpy ( &GetCameraWorstCaseLoc_Parms.CurrentViewTarget, &CurrentViewTarget, 0x2C );

	this->ProcessEvent ( pFnGetCameraWorstCaseLoc, &GetCameraWorstCaseLoc_Parms, NULL );

	return GetCameraWorstCaseLoc_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

float UGameThirdPersonCameraMode::GetDesiredFOV ( class APawn* ViewedPawn )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 43754 ];

	UGameThirdPersonCameraMode_execGetDesiredFOV_Parms GetDesiredFOV_Parms;
	GetDesiredFOV_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );

	return GetDesiredFOV_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )
// struct FVector                 Offset                         ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::eventAdjustViewOffset ( class APawn* P, struct FVector Offset )
{
	static UFunction* pFnAdjustViewOffset = NULL;

	if ( ! pFnAdjustViewOffset )
		pFnAdjustViewOffset = (UFunction*) UObject::GObjObjects()->Data[ 43892 ];

	UGameThirdPersonCameraMode_eventAdjustViewOffset_Parms AdjustViewOffset_Parms;
	AdjustViewOffset_Parms.P = P;
	memcpy ( &AdjustViewOffset_Parms.Offset, &Offset, 0xC );

	this->ProcessEvent ( pFnAdjustViewOffset, &AdjustViewOffset_Parms, NULL );

	return AdjustViewOffset_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] 
// Parameters infos:
// class APawn*                   TargetPawn                     ( CPF_Parm )
// class UGameThirdPersonCameraMode* NewMode                        ( CPF_Parm )

void UGameThirdPersonCameraMode::OnBecomeInActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 43889 ];

	UGameThirdPersonCameraMode_execOnBecomeInActive_Parms OnBecomeInActive_Parms;
	OnBecomeInActive_Parms.TargetPawn = TargetPawn;
	OnBecomeInActive_Parms.NewMode = NewMode;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class APawn*                   TargetPawn                     ( CPF_Parm )
// class UGameThirdPersonCameraMode* PrevMode                       ( CPF_Parm )

void UGameThirdPersonCameraMode::OnBecomeActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 43886 ];

	UGameThirdPersonCameraMode_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.TargetPawn = TargetPawn;
	OnBecomeActive_Parms.PrevMode = PrevMode;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] 
// Parameters infos:

void UGameThirdPersonCameraMode::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 43885 ];

	UGameThirdPersonCameraMode_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                InRotation                     ( CPF_Parm )
// struct FVector                 RelativeSpaceOffset            ( CPF_Parm )

struct FVector UGameSpecialMove::RelativeToWorldOffset ( struct FRotator InRotation, struct FVector RelativeSpaceOffset )
{
	static UFunction* pFnRelativeToWorldOffset = NULL;

	if ( ! pFnRelativeToWorldOffset )
		pFnRelativeToWorldOffset = (UFunction*) UObject::GObjObjects()->Data[ 43570 ];

	UGameSpecialMove_execRelativeToWorldOffset_Parms RelativeToWorldOffset_Parms;
	memcpy ( &RelativeToWorldOffset_Parms.InRotation, &InRotation, 0xC );
	memcpy ( &RelativeToWorldOffset_Parms.RelativeSpaceOffset, &RelativeSpaceOffset, 0xC );

	pFnRelativeToWorldOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRelativeToWorldOffset, &RelativeToWorldOffset_Parms, NULL );

	pFnRelativeToWorldOffset->FunctionFlags |= 0x400;

	return RelativeToWorldOffset_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                InRotation                     ( CPF_Parm )
// struct FVector                 WorldSpaceOffset               ( CPF_Parm )

struct FVector UGameSpecialMove::WorldToRelativeOffset ( struct FRotator InRotation, struct FVector WorldSpaceOffset )
{
	static UFunction* pFnWorldToRelativeOffset = NULL;

	if ( ! pFnWorldToRelativeOffset )
		pFnWorldToRelativeOffset = (UFunction*) UObject::GObjObjects()->Data[ 43566 ];

	UGameSpecialMove_execWorldToRelativeOffset_Parms WorldToRelativeOffset_Parms;
	memcpy ( &WorldToRelativeOffset_Parms.InRotation, &InRotation, 0xC );
	memcpy ( &WorldToRelativeOffset_Parms.WorldSpaceOffset, &WorldSpaceOffset, 0xC );

	pFnWorldToRelativeOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWorldToRelativeOffset, &WorldToRelativeOffset_Parms, NULL );

	pFnWorldToRelativeOffset->FunctionFlags |= 0x400;

	return WorldToRelativeOffset_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// struct FRotator                NewRotation                    ( CPF_Parm )

void UGameSpecialMove::ForcePawnRotation ( class APawn* P, struct FRotator NewRotation )
{
	static UFunction* pFnForcePawnRotation = NULL;

	if ( ! pFnForcePawnRotation )
		pFnForcePawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 43563 ];

	UGameSpecialMove_execForcePawnRotation_Parms ForcePawnRotation_Parms;
	ForcePawnRotation_Parms.P = P;
	memcpy ( &ForcePawnRotation_Parms.NewRotation, &NewRotation, 0xC );

	pFnForcePawnRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForcePawnRotation, &ForcePawnRotation_Parms, NULL );

	pFnForcePawnRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.MessageEvent
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   EventName                      ( CPF_Parm )
// class UObject*                 Sender                         ( CPF_Parm )

bool UGameSpecialMove::MessageEvent ( struct FName EventName, class UObject* Sender )
{
	static UFunction* pFnMessageEvent = NULL;

	if ( ! pFnMessageEvent )
		pFnMessageEvent = (UFunction*) UObject::GObjObjects()->Data[ 43559 ];

	UGameSpecialMove_execMessageEvent_Parms MessageEvent_Parms;
	memcpy ( &MessageEvent_Parms.EventName, &EventName, 0x8 );
	MessageEvent_Parms.Sender = Sender;

	this->ProcessEvent ( pFnMessageEvent, &MessageEvent_Parms, NULL );

	return MessageEvent_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::ResetFacePreciseRotation ( )
{
	static UFunction* pFnResetFacePreciseRotation = NULL;

	if ( ! pFnResetFacePreciseRotation )
		pFnResetFacePreciseRotation = (UFunction*) UObject::GObjObjects()->Data[ 43558 ];

	UGameSpecialMove_execResetFacePreciseRotation_Parms ResetFacePreciseRotation_Parms;

	pFnResetFacePreciseRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetFacePreciseRotation, &ResetFacePreciseRotation_Parms, NULL );

	pFnResetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameSpecialMove::eventReachedPrecisePosition ( )
{
	static UFunction* pFnReachedPrecisePosition = NULL;

	if ( ! pFnReachedPrecisePosition )
		pFnReachedPrecisePosition = (UFunction*) UObject::GObjObjects()->Data[ 43557 ];

	UGameSpecialMove_eventReachedPrecisePosition_Parms ReachedPrecisePosition_Parms;

	this->ProcessEvent ( pFnReachedPrecisePosition, &ReachedPrecisePosition_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                RotationToFace                 ( CPF_Parm )
// float                          InterpolationTime              ( CPF_Parm )

void UGameSpecialMove::SetFacePreciseRotation ( struct FRotator RotationToFace, float InterpolationTime )
{
	static UFunction* pFnSetFacePreciseRotation = NULL;

	if ( ! pFnSetFacePreciseRotation )
		pFnSetFacePreciseRotation = (UFunction*) UObject::GObjObjects()->Data[ 43554 ];

	UGameSpecialMove_execSetFacePreciseRotation_Parms SetFacePreciseRotation_Parms;
	memcpy ( &SetFacePreciseRotation_Parms.RotationToFace, &RotationToFace, 0xC );
	SetFacePreciseRotation_Parms.InterpolationTime = InterpolationTime;

	pFnSetFacePreciseRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFacePreciseRotation, &SetFacePreciseRotation_Parms, NULL );

	pFnSetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 DestinationToReach             ( CPF_Parm )
// unsigned long                  bCancel                        ( CPF_OptionalParm | CPF_Parm )

void UGameSpecialMove::SetReachPreciseDestination ( struct FVector DestinationToReach, unsigned long bCancel )
{
	static UFunction* pFnSetReachPreciseDestination = NULL;

	if ( ! pFnSetReachPreciseDestination )
		pFnSetReachPreciseDestination = (UFunction*) UObject::GObjObjects()->Data[ 43551 ];

	UGameSpecialMove_execSetReachPreciseDestination_Parms SetReachPreciseDestination_Parms;
	memcpy ( &SetReachPreciseDestination_Parms.DestinationToReach, &DestinationToReach, 0xC );
	SetReachPreciseDestination_Parms.bCancel = bCancel;

	pFnSetReachPreciseDestination->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetReachPreciseDestination, &SetReachPreciseDestination_Parms, NULL );

	pFnSetReachPreciseDestination->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameSpecialMove::ShouldReplicate ( )
{
	static UFunction* pFnShouldReplicate = NULL;

	if ( ! pFnShouldReplicate )
		pFnShouldReplicate = (UFunction*) UObject::GObjObjects()->Data[ 43549 ];

	UGameSpecialMove_execShouldReplicate_Parms ShouldReplicate_Parms;

	this->ProcessEvent ( pFnShouldReplicate, &ShouldReplicate_Parms, NULL );

	return ShouldReplicate_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// [0x00020000] 
// Parameters infos:

void UGameSpecialMove::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 43548 ];

	UGameSpecialMove_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameSpecialMove::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43546 ];

	UGameSpecialMove_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// [0x00020000] 
// Parameters infos:
// struct FName                   PrevMove                       ( CPF_Parm )
// struct FName                   NextMove                       ( CPF_Parm )

void UGameSpecialMove::SpecialMoveEnded ( struct FName PrevMove, struct FName NextMove )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 43543 ];

	UGameSpecialMove_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;
	memcpy ( &SpecialMoveEnded_Parms.PrevMove, &PrevMove, 0x8 );
	memcpy ( &SpecialMoveEnded_Parms.NextMove, &NextMove, 0x8 );

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// [0x00020000] 
// Parameters infos:
// unsigned long                  bForced                        ( CPF_Parm )
// struct FName                   PrevMove                       ( CPF_Parm )

void UGameSpecialMove::SpecialMoveStarted ( unsigned long bForced, struct FName PrevMove )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 43540 ];

	UGameSpecialMove_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;
	SpecialMoveStarted_Parms.bForced = bForced;
	memcpy ( &SpecialMoveStarted_Parms.PrevMove, &PrevMove, 0x8 );

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameSpecialMove::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 43538 ];

	UGameSpecialMove_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );

	return InternalCanDoSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// [0x00024003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForceCheck                    ( CPF_OptionalParm | CPF_Parm )

bool UGameSpecialMove::CanDoSpecialMove ( unsigned long bForceCheck )
{
	static UFunction* pFnCanDoSpecialMove = NULL;

	if ( ! pFnCanDoSpecialMove )
		pFnCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 43535 ];

	UGameSpecialMove_execCanDoSpecialMove_Parms CanDoSpecialMove_Parms;
	CanDoSpecialMove_Parms.bForceCheck = bForceCheck;

	this->ProcessEvent ( pFnCanDoSpecialMove, &CanDoSpecialMove_Parms, NULL );

	return CanDoSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   InMove                         ( CPF_Parm )

bool UGameSpecialMove::CanOverrideSpecialMove ( struct FName InMove )
{
	static UFunction* pFnCanOverrideSpecialMove = NULL;

	if ( ! pFnCanOverrideSpecialMove )
		pFnCanOverrideSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 43532 ];

	UGameSpecialMove_execCanOverrideSpecialMove_Parms CanOverrideSpecialMove_Parms;
	memcpy ( &CanOverrideSpecialMove_Parms.InMove, &InMove, 0x8 );

	this->ProcessEvent ( pFnCanOverrideSpecialMove, &CanOverrideSpecialMove_Parms, NULL );

	return CanOverrideSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NewMove                        ( CPF_Parm )

bool UGameSpecialMove::CanOverrideMoveWith ( struct FName NewMove )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 43529 ];

	UGameSpecialMove_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	memcpy ( &CanOverrideMoveWith_Parms.NewMove, &NewMove, 0x8 );

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanChainMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NextMove                       ( CPF_Parm )

bool UGameSpecialMove::CanChainMove ( struct FName NextMove )
{
	static UFunction* pFnCanChainMove = NULL;

	if ( ! pFnCanChainMove )
		pFnCanChainMove = (UFunction*) UObject::GObjObjects()->Data[ 43526 ];

	UGameSpecialMove_execCanChainMove_Parms CanChainMove_Parms;
	memcpy ( &CanChainMove_Parms.NextMove, &NextMove, 0x8 );

	this->ProcessEvent ( pFnCanChainMove, &CanChainMove_Parms, NULL );

	return CanChainMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// [0x00020000] 
// Parameters infos:
// int                            Flags                          ( CPF_Parm )

void UGameSpecialMove::ExtractSpecialMoveFlags ( int Flags )
{
	static UFunction* pFnExtractSpecialMoveFlags = NULL;

	if ( ! pFnExtractSpecialMoveFlags )
		pFnExtractSpecialMoveFlags = (UFunction*) UObject::GObjObjects()->Data[ 43524 ];

	UGameSpecialMove_execExtractSpecialMoveFlags_Parms ExtractSpecialMoveFlags_Parms;
	ExtractSpecialMoveFlags_Parms.Flags = Flags;

	this->ProcessEvent ( pFnExtractSpecialMoveFlags, &ExtractSpecialMoveFlags_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// [0x00420000] 
// Parameters infos:
// int                            out_Flags                      ( CPF_Parm | CPF_OutParm )

void UGameSpecialMove::InitSpecialMoveFlags ( int* out_Flags )
{
	static UFunction* pFnInitSpecialMoveFlags = NULL;

	if ( ! pFnInitSpecialMoveFlags )
		pFnInitSpecialMoveFlags = (UFunction*) UObject::GObjObjects()->Data[ 43522 ];

	UGameSpecialMove_execInitSpecialMoveFlags_Parms InitSpecialMoveFlags_Parms;

	this->ProcessEvent ( pFnInitSpecialMoveFlags, &InitSpecialMoveFlags_Parms, NULL );

	if ( out_Flags )
		*out_Flags = InitSpecialMoveFlags_Parms.out_Flags;
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
// [0x00020002] 
// Parameters infos:
// class AGamePawn*               inPawn                         ( CPF_Parm )
// struct FName                   InHandle                       ( CPF_Parm )

void UGameSpecialMove::InitSpecialMove ( class AGamePawn* inPawn, struct FName InHandle )
{
	static UFunction* pFnInitSpecialMove = NULL;

	if ( ! pFnInitSpecialMove )
		pFnInitSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 43519 ];

	UGameSpecialMove_execInitSpecialMove_Parms InitSpecialMove_Parms;
	InitSpecialMove_Parms.inPawn = inPawn;
	memcpy ( &InitSpecialMove_Parms.InHandle, &InHandle, 0x8 );

	this->ProcessEvent ( pFnInitSpecialMove, &InitSpecialMove_Parms, NULL );
};

// Function GameFramework.GameStateObject.Reset
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameStateObject::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43592 ];

	UGameStateObject_execReset_Parms Reset_Parms;

	pFnReset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );

	pFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStateObject.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStateObject::eventPreProcessStream ( )
{
	static UFunction* pFnPreProcessStream = NULL;

	if ( ! pFnPreProcessStream )
		pFnPreProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 43591 ];

	UGameStateObject_eventPreProcessStream_Parms PreProcessStream_Parms;

	pFnPreProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPreProcessStream, &PreProcessStream_Parms, NULL );

	pFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            EventID                        ( CPF_Parm )
// int                            AggregateID                    ( CPF_Parm | CPF_OutParm )
// int                            TargetAggregateID              ( CPF_Parm | CPF_OutParm )

bool UGameStatsAggregator::GetAggregateMappingIDs ( int EventID, int* AggregateID, int* TargetAggregateID )
{
	static UFunction* pFnGetAggregateMappingIDs = NULL;

	if ( ! pFnGetAggregateMappingIDs )
		pFnGetAggregateMappingIDs = (UFunction*) UObject::GObjObjects()->Data[ 43668 ];

	UGameStatsAggregator_execGetAggregateMappingIDs_Parms GetAggregateMappingIDs_Parms;
	GetAggregateMappingIDs_Parms.EventID = EventID;

	pFnGetAggregateMappingIDs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAggregateMappingIDs, &GetAggregateMappingIDs_Parms, NULL );

	pFnGetAggregateMappingIDs->FunctionFlags |= 0x400;

	if ( AggregateID )
		*AggregateID = GetAggregateMappingIDs_Parms.AggregateID;

	if ( TargetAggregateID )
		*TargetAggregateID = GetAggregateMappingIDs_Parms.TargetAggregateID;

	return GetAggregateMappingIDs_Parms.ReturnValue;
};

// Function GameFramework.GameStatsAggregator.Reset
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43667 ];

	UGameStatsAggregator_execReset_Parms Reset_Parms;

	pFnReset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );

	pFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::eventPostProcessStream ( )
{
	static UFunction* pFnPostProcessStream = NULL;

	if ( ! pFnPostProcessStream )
		pFnPostProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 43666 ];

	UGameStatsAggregator_eventPostProcessStream_Parms PostProcessStream_Parms;

	pFnPostProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostProcessStream, &PostProcessStream_Parms, NULL );

	pFnPostProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::eventPreProcessStream ( )
{
	static UFunction* pFnPreProcessStream = NULL;

	if ( ! pFnPreProcessStream )
		pFnPreProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 43665 ];

	UGameStatsAggregator_eventPreProcessStream_Parms PreProcessStream_Parms;

	pFnPreProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPreProcessStream, &PreProcessStream_Parms, NULL );

	pFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraHUD.PostRender
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ADebugCameraHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 41836 ];

	ADebugCameraHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.DebugCameraHUD.DisplayMaterials
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          DY                             ( CPF_Parm )
// class UMeshComponent*          MeshComp                       ( CPF_Parm | CPF_EditInline )
// float                          Y                              ( CPF_Parm | CPF_OutParm )

bool ADebugCameraHUD::DisplayMaterials ( float X, float DY, class UMeshComponent* MeshComp, float* Y )
{
	static UFunction* pFnDisplayMaterials = NULL;

	if ( ! pFnDisplayMaterials )
		pFnDisplayMaterials = (UFunction*) UObject::GObjObjects()->Data[ 41827 ];

	ADebugCameraHUD_execDisplayMaterials_Parms DisplayMaterials_Parms;
	DisplayMaterials_Parms.X = X;
	DisplayMaterials_Parms.DY = DY;
	DisplayMaterials_Parms.MeshComp = MeshComp;

	this->ProcessEvent ( pFnDisplayMaterials, &DisplayMaterials_Parms, NULL );

	if ( Y )
		*Y = DisplayMaterials_Parms.Y;

	return DisplayMaterials_Parms.ReturnValue;
};

// Function GameFramework.DebugCameraHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADebugCameraHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41826 ];

	ADebugCameraHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.DebugCameraInput.InputKey
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UDebugCameraInput::InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 41853 ];

	UDebugCameraInput_execInputKey_Parms InputKey_Parms;
	InputKey_Parms.ControllerId = ControllerId;
	memcpy ( &InputKey_Parms.Key, &Key, 0x8 );
	InputKey_Parms.Event = Event;
	InputKey_Parms.AmountDepressed = AmountDepressed;
	InputKey_Parms.bGamepad = bGamepad;

	this->ProcessEvent ( pFnInputKey, &InputKey_Parms, NULL );

	return InputKey_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// [0x00020000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UGameCrowdSpawnerInterface::GetMaxSpawnDist ( )
{
	static UFunction* pFnGetMaxSpawnDist = NULL;

	if ( ! pFnGetMaxSpawnDist )
		pFnGetMaxSpawnDist = (UFunction*) UObject::GObjObjects()->Data[ 42737 ];

	UGameCrowdSpawnerInterface_execGetMaxSpawnDist_Parms GetMaxSpawnDist_Parms;

	this->ProcessEvent ( pFnGetMaxSpawnDist, &GetMaxSpawnDist_Parms, NULL );

	return GetMaxSpawnDist_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// [0x00020000] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdSpawnerInterface::AgentDestroyed ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43199 ];

	UGameCrowdSpawnerInterface_execAgentDestroyed_Parms AgentDestroyed_Parms;
	AgentDestroyed_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00420000] 
// Parameters infos:
// class USeqAct_GameCrowdSpawner* Spawner                        ( CPF_Parm )
// struct FVector                 SpawnPos                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void UGameCrowdSpawnInterface::GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 43202 ];

	UGameCrowdSpawnInterface_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.Spawner = Spawner;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnPos )
		memcpy ( SpawnPos, &GetSpawnPosition_Parms.SpawnPos, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   InEnemy                        ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor ( class APawn* InEnemy )
{
	static UFunction* pFnIsEnemyBasedOnInterpActor = NULL;

	if ( ! pFnIsEnemyBasedOnInterpActor )
		pFnIsEnemyBasedOnInterpActor = (UFunction*) UObject::GObjObjects()->Data[ 42367 ];

	UGameAICmd_Hover_MoveToGoal_execIsEnemyBasedOnInterpActor_Parms IsEnemyBasedOnInterpActor_Parms;
	IsEnemyBasedOnInterpActor_Parms.InEnemy = InEnemy;

	this->ProcessEvent ( pFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Parms, NULL );

	return IsEnemyBasedOnInterpActor_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  BlockedBy                      ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal::HandlePathObstruction ( class AActor* BlockedBy )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 42345 ];

	UGameAICmd_Hover_MoveToGoal_execHandlePathObstruction_Parms HandlePathObstruction_Parms;
	HandlePathObstruction_Parms.BlockedBy = BlockedBy;

	this->ProcessEvent ( pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );

	return HandlePathObstruction_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 42344 ];

	UGameAICmd_Hover_MoveToGoal_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// class AActor*                  InGoal                         ( CPF_Parm )
// float                          InGoalDistance                 ( CPF_Parm )
// float                          InHoverHeight                  ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal::MoveToGoal ( class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight )
{
	static UFunction* pFnMoveToGoal = NULL;

	if ( ! pFnMoveToGoal )
		pFnMoveToGoal = (UFunction*) UObject::GObjObjects()->Data[ 42337 ];

	UGameAICmd_Hover_MoveToGoal_execMoveToGoal_Parms MoveToGoal_Parms;
	MoveToGoal_Parms.AI = AI;
	MoveToGoal_Parms.InGoal = InGoal;
	MoveToGoal_Parms.InGoalDistance = InGoalDistance;
	MoveToGoal_Parms.InHoverHeight = InHoverHeight;

	this->ProcessEvent ( pFnMoveToGoal, &MoveToGoal_Parms, NULL );

	return MoveToGoal_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )
// struct FName                   Category                       ( CPF_Parm )

void UGameAICmd_Hover_MoveToGoal_Mesh::eventDrawDebug ( class AHUD* H, struct FName Category )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 42459 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_eventDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.H = H;
	memcpy ( &DrawDebug_Parms.Category, &Category, 0x8 );

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   InEnemy                        ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor ( class APawn* InEnemy )
{
	static UFunction* pFnIsEnemyBasedOnInterpActor = NULL;

	if ( ! pFnIsEnemyBasedOnInterpActor )
		pFnIsEnemyBasedOnInterpActor = (UFunction*) UObject::GObjObjects()->Data[ 42456 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execIsEnemyBasedOnInterpActor_Parms IsEnemyBasedOnInterpActor_Parms;
	IsEnemyBasedOnInterpActor_Parms.InEnemy = InEnemy;

	this->ProcessEvent ( pFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Parms, NULL );

	return IsEnemyBasedOnInterpActor_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::ShouldUpdateBreadCrumbs ( )
{
	static UFunction* pFnShouldUpdateBreadCrumbs = NULL;

	if ( ! pFnShouldUpdateBreadCrumbs )
		pFnShouldUpdateBreadCrumbs = (UFunction*) UObject::GObjObjects()->Data[ 42428 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execShouldUpdateBreadCrumbs_Parms ShouldUpdateBreadCrumbs_Parms;

	this->ProcessEvent ( pFnShouldUpdateBreadCrumbs, &ShouldUpdateBreadCrumbs_Parms, NULL );

	return ShouldUpdateBreadCrumbs_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal ( )
{
	static UFunction* pFnHasReachedGoal = NULL;

	if ( ! pFnHasReachedGoal )
		pFnHasReachedGoal = (UFunction*) UObject::GObjObjects()->Data[ 42426 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHasReachedGoal_Parms HasReachedGoal_Parms;

	this->ProcessEvent ( pFnHasReachedGoal, &HasReachedGoal_Parms, NULL );

	return HasReachedGoal_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// [0x00020000] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath ( )
{
	static UFunction* pFnReEvaluatePath = NULL;

	if ( ! pFnReEvaluatePath )
		pFnReEvaluatePath = (UFunction*) UObject::GObjObjects()->Data[ 42425 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execReEvaluatePath_Parms ReEvaluatePath_Parms;

	this->ProcessEvent ( pFnReEvaluatePath, &ReEvaluatePath_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  BlockedBy                      ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction ( class AActor* BlockedBy )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 42411 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHandlePathObstruction_Parms HandlePathObstruction_Parms;
	HandlePathObstruction_Parms.BlockedBy = BlockedBy;

	this->ProcessEvent ( pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );

	return HandlePathObstruction_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICmd_Hover_MoveToGoal_Mesh::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 42409 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 42408 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 42407 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverBackToMesh ( class AGameAIController* AI )
{
	static UFunction* pFnHoverBackToMesh = NULL;

	if ( ! pFnHoverBackToMesh )
		pFnHoverBackToMesh = (UFunction*) UObject::GObjObjects()->Data[ 42403 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverBackToMesh_Parms HoverBackToMesh_Parms;
	HoverBackToMesh_Parms.AI = AI;

	this->ProcessEvent ( pFnHoverBackToMesh, &HoverBackToMesh_Parms, NULL );

	return HoverBackToMesh_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// struct FVector                 InPoint                        ( CPF_Parm )
// float                          InGoalDistance                 ( CPF_Parm )
// float                          InHoverHeight                  ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToPoint ( class AGameAIController* AI, struct FVector InPoint, float InGoalDistance, float InHoverHeight )
{
	static UFunction* pFnHoverToPoint = NULL;

	if ( ! pFnHoverToPoint )
		pFnHoverToPoint = (UFunction*) UObject::GObjObjects()->Data[ 42396 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToPoint_Parms HoverToPoint_Parms;
	HoverToPoint_Parms.AI = AI;
	memcpy ( &HoverToPoint_Parms.InPoint, &InPoint, 0xC );
	HoverToPoint_Parms.InGoalDistance = InGoalDistance;
	HoverToPoint_Parms.InHoverHeight = InHoverHeight;

	this->ProcessEvent ( pFnHoverToPoint, &HoverToPoint_Parms, NULL );

	return HoverToPoint_Parms.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// class AActor*                  InGoal                         ( CPF_Parm )
// float                          InGoalDistance                 ( CPF_Parm )
// float                          InHoverHeight                  ( CPF_Parm )

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToGoal ( class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight )
{
	static UFunction* pFnHoverToGoal = NULL;

	if ( ! pFnHoverToGoal )
		pFnHoverToGoal = (UFunction*) UObject::GObjObjects()->Data[ 42389 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToGoal_Parms HoverToGoal_Parms;
	HoverToGoal_Parms.AI = AI;
	HoverToGoal_Parms.InGoal = InGoal;
	HoverToGoal_Parms.InGoalDistance = InGoalDistance;
	HoverToGoal_Parms.InHoverHeight = InHoverHeight;

	this->ProcessEvent ( pFnHoverToGoal, &HoverToGoal_Parms, NULL );

	return HoverToGoal_Parms.ReturnValue;
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameFixedCamera::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 43405 ];

	UGameFixedCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameFixedCamera::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 43399 ];

	UGameFixedCamera_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// [0x00020102] 
// Parameters infos:

void AGameKActorSpawnableEffect::StartScalingDown ( )
{
	static UFunction* pFnStartScalingDown = NULL;

	if ( ! pFnStartScalingDown )
		pFnStartScalingDown = (UFunction*) UObject::GObjObjects()->Data[ 43412 ];

	AGameKActorSpawnableEffect_execStartScalingDown_Parms StartScalingDown_Parms;

	this->ProcessEvent ( pFnStartScalingDown, &StartScalingDown_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameKActorSpawnableEffect::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 43410 ];

	AGameKActorSpawnableEffect_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameKActorSpawnableEffect::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43409 ];

	AGameKActorSpawnableEffect_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// [0x00820002] 
// Parameters infos:

void AMobileDebugCameraController::SetupDebugZones ( )
{
	static UFunction* pFnSetupDebugZones = NULL;

	if ( ! pFnSetupDebugZones )
		pFnSetupDebugZones = (UFunction*) UObject::GObjObjects()->Data[ 43958 ];

	AMobileDebugCameraController_execSetupDebugZones_Parms SetupDebugZones_Parms;

	this->ProcessEvent ( pFnSetupDebugZones, &SetupDebugZones_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraController::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 43957 ];

	AMobileDebugCameraController_eventInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.OnDeactivate
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AMobileDebugCameraController::OnDeactivate ( class APlayerController* PC )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 43954 ];

	AMobileDebugCameraController_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.PC = PC;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// [0x00020002] 
// Parameters infos:

void AMobileDebugCameraController::InitDebugInputSystem ( )
{
	static UFunction* pFnInitDebugInputSystem = NULL;

	if ( ! pFnInitDebugInputSystem )
		pFnInitDebugInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 43951 ];

	AMobileDebugCameraController_execInitDebugInputSystem_Parms InitDebugInputSystem_Parms;

	this->ProcessEvent ( pFnInitDebugInputSystem, &InitDebugInputSystem_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.OnActivate
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AMobileDebugCameraController::OnActivate ( class APlayerController* PC )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 43945 ];

	AMobileDebugCameraController_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.PC = PC;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraInput.InputKey
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UMobileDebugCameraInput::InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 44321 ];

	UMobileDebugCameraInput_execInputKey_Parms InputKey_Parms;
	InputKey_Parms.ControllerId = ControllerId;
	memcpy ( &InputKey_Parms.Key, &Key, 0x8 );
	InputKey_Parms.Event = Event;
	InputKey_Parms.AmountDepressed = AmountDepressed;
	InputKey_Parms.bGamepad = bGamepad;

	this->ProcessEvent ( pFnInputKey, &InputKey_Parms, NULL );

	return InputKey_Parms.ReturnValue;
};

// Function GameFramework.MobileDebugCameraHUD.PostRender
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 44133 ];

	AMobileDebugCameraHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          DY                             ( CPF_Parm )
// class UMeshComponent*          MeshComp                       ( CPF_Parm | CPF_EditInline )
// float                          Y                              ( CPF_Parm | CPF_OutParm )

bool AMobileDebugCameraHUD::DisplayMaterials ( float X, float DY, class UMeshComponent* MeshComp, float* Y )
{
	static UFunction* pFnDisplayMaterials = NULL;

	if ( ! pFnDisplayMaterials )
		pFnDisplayMaterials = (UFunction*) UObject::GObjObjects()->Data[ 44124 ];

	AMobileDebugCameraHUD_execDisplayMaterials_Parms DisplayMaterials_Parms;
	DisplayMaterials_Parms.X = X;
	DisplayMaterials_Parms.DY = DY;
	DisplayMaterials_Parms.MeshComp = MeshComp;

	this->ProcessEvent ( pFnDisplayMaterials, &DisplayMaterials_Parms, NULL );

	if ( Y )
		*Y = DisplayMaterials_Parms.Y;

	return DisplayMaterials_Parms.ReturnValue;
};

// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44123 ];

	AMobileDebugCameraHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.UpdateItemViewports
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::UpdateItemViewports ( )
{
	static UFunction* pFnUpdateItemViewports = NULL;

	if ( ! pFnUpdateItemViewports )
		pFnUpdateItemViewports = (UFunction*) UObject::GObjObjects()->Data[ 44547 ];

	UMobileMenuBar_execUpdateItemViewports_Parms UpdateItemViewports_Parms;

	this->ProcessEvent ( pFnUpdateItemViewports, &UpdateItemViewports_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.SetFirstItem
// [0x00020002] 
// Parameters infos:
// int                            First                          ( CPF_Parm )

void UMobileMenuBar::SetFirstItem ( int First )
{
	static UFunction* pFnSetFirstItem = NULL;

	if ( ! pFnSetFirstItem )
		pFnSetFirstItem = (UFunction*) UObject::GObjObjects()->Data[ 44545 ];

	UMobileMenuBar_execSetFirstItem_Parms SetFirstItem_Parms;
	SetFirstItem_Parms.First = First;

	this->ProcessEvent ( pFnSetFirstItem, &SetFirstItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.RenderItem
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// int                            ItemIndex                      ( CPF_Parm )

void UMobileMenuBar::RenderItem ( class UCanvas* Canvas, float DeltaTime, int ItemIndex )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 44541 ];

	UMobileMenuBar_execRenderItem_Parms RenderItem_Parms;
	RenderItem_Parms.Canvas = Canvas;
	RenderItem_Parms.DeltaTime = DeltaTime;
	RenderItem_Parms.ItemIndex = ItemIndex;

	this->ProcessEvent ( pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuBar::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44535 ];

	UMobileMenuBar_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuBar::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44526 ];

	UMobileMenuBar_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuBar.GetSelected
// [0x00020002] 
// Parameters infos:
// class UMobileMenuBarItem*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMobileMenuBarItem* UMobileMenuBar::GetSelected ( )
{
	static UFunction* pFnGetSelected = NULL;

	if ( ! pFnGetSelected )
		pFnGetSelected = (UFunction*) UObject::GObjObjects()->Data[ 44524 ];

	UMobileMenuBar_execGetSelected_Parms GetSelected_Parms;

	this->ProcessEvent ( pFnGetSelected, &GetSelected_Parms, NULL );

	return GetSelected_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuBar.Num
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UMobileMenuBar::Num ( )
{
	static UFunction* pFnNum = NULL;

	if ( ! pFnNum )
		pFnNum = (UFunction*) UObject::GObjObjects()->Data[ 44522 ];

	UMobileMenuBar_execNum_Parms Num_Parms;

	this->ProcessEvent ( pFnNum, &Num_Parms, NULL );

	return Num_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuBar.AddItem
// [0x00024002] 
// Parameters infos:
// class UMobileMenuBarItem*      Item                           ( CPF_Parm )
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

void UMobileMenuBar::AddItem ( class UMobileMenuBarItem* Item, int Index )
{
	static UFunction* pFnAddItem = NULL;

	if ( ! pFnAddItem )
		pFnAddItem = (UFunction*) UObject::GObjObjects()->Data[ 44519 ];

	UMobileMenuBar_execAddItem_Parms AddItem_Parms;
	AddItem_Parms.Item = Item;
	AddItem_Parms.Index = Index;

	this->ProcessEvent ( pFnAddItem, &AddItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuBar::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44513 ];

	UMobileMenuBar_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuBarItem.RenderItem
// [0x00020000] 
// Parameters infos:
// class UMobileMenuBar*          Bar                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuBarItem::RenderItem ( class UMobileMenuBar* Bar, class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 44553 ];

	UMobileMenuBarItem_execRenderItem_Parms RenderItem_Parms;
	RenderItem_Parms.Bar = Bar;
	RenderItem_Parms.Canvas = Canvas;
	RenderItem_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.RenderCaption
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileMenuButton::RenderCaption ( class UCanvas* Canvas )
{
	static UFunction* pFnRenderCaption = NULL;

	if ( ! pFnRenderCaption )
		pFnRenderCaption = (UFunction*) UObject::GObjObjects()->Data[ 44577 ];

	UMobileMenuButton_execRenderCaption_Parms RenderCaption_Parms;
	RenderCaption_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnRenderCaption, &RenderCaption_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.RenderObject
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuButton::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44571 ];

	UMobileMenuButton_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuButton::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44564 ];

	UMobileMenuButton_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuElement.RenderElement
// [0x00020000] 
// Parameters infos:
// class UMobileMenuObject*       Owner                          ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )

void UMobileMenuElement::RenderElement ( class UMobileMenuObject* Owner, class UCanvas* Canvas, float DeltaTime, float Opacity )
{
	static UFunction* pFnRenderElement = NULL;

	if ( ! pFnRenderElement )
		pFnRenderElement = (UFunction*) UObject::GObjObjects()->Data[ 44594 ];

	UMobileMenuElement_execRenderElement_Parms RenderElement_Parms;
	RenderElement_Parms.Owner = Owner;
	RenderElement_Parms.Canvas = Canvas;
	RenderElement_Parms.DeltaTime = DeltaTime;
	RenderElement_Parms.Opacity = Opacity;

	this->ProcessEvent ( pFnRenderElement, &RenderElement_Parms, NULL );
};

// Function GameFramework.MobileMenuElement.OnTouch
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuElement::OnTouch ( unsigned char EventType, float TouchX, float TouchY, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44588 ];

	UMobileMenuElement_execOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuGame.RestartPlayer
// [0x00020000] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AMobileMenuGame::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 44606 ];

	AMobileMenuGame_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.StartMatch
// [0x00020000] 
// Parameters infos:

void AMobileMenuGame::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 44605 ];

	AMobileMenuGame_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void AMobileMenuGame::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 44602 ];

	AMobileMenuGame_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.RenderDragItem
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuInventory::RenderDragItem ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderDragItem = NULL;

	if ( ! pFnRenderDragItem )
		pFnRenderDragItem = (UFunction*) UObject::GObjObjects()->Data[ 44724 ];

	UMobileMenuInventory_execRenderDragItem_Parms RenderDragItem_Parms;
	RenderDragItem_Parms.Canvas = Canvas;
	RenderDragItem_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderDragItem, &RenderDragItem_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuInventory::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44718 ];

	UMobileMenuInventory_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.GetIndexOfItem
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuElement*      Item                           ( CPF_Parm )

int UMobileMenuInventory::GetIndexOfItem ( class UMobileMenuElement* Item )
{
	static UFunction* pFnGetIndexOfItem = NULL;

	if ( ! pFnGetIndexOfItem )
		pFnGetIndexOfItem = (UFunction*) UObject::GObjObjects()->Data[ 44715 ];

	UMobileMenuInventory_execGetIndexOfItem_Parms GetIndexOfItem_Parms;
	GetIndexOfItem_Parms.Item = Item;

	this->ProcessEvent ( pFnGetIndexOfItem, &GetIndexOfItem_Parms, NULL );

	return GetIndexOfItem_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

int UMobileMenuInventory::FindSlotIndexAt ( float X, float Y )
{
	static UFunction* pFnFindSlotIndexAt = NULL;

	if ( ! pFnFindSlotIndexAt )
		pFnFindSlotIndexAt = (UFunction*) UObject::GObjObjects()->Data[ 44707 ];

	UMobileMenuInventory_execFindSlotIndexAt_Parms FindSlotIndexAt_Parms;
	FindSlotIndexAt_Parms.X = X;
	FindSlotIndexAt_Parms.Y = Y;

	this->ProcessEvent ( pFnFindSlotIndexAt, &FindSlotIndexAt_Parms, NULL );

	return FindSlotIndexAt_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.InitDragAt
// [0x00020002] 
// Parameters infos:
// int                            TouchX                         ( CPF_Parm )
// int                            TouchY                         ( CPF_Parm )

void UMobileMenuInventory::InitDragAt ( int TouchX, int TouchY )
{
	static UFunction* pFnInitDragAt = NULL;

	if ( ! pFnInitDragAt )
		pFnInitDragAt = (UFunction*) UObject::GObjObjects()->Data[ 44704 ];

	UMobileMenuInventory_execInitDragAt_Parms InitDragAt_Parms;
	InitDragAt_Parms.TouchX = TouchX;
	InitDragAt_Parms.TouchY = TouchY;

	this->ProcessEvent ( pFnInitDragAt, &InitDragAt_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
// [0x00080002] 
// Parameters infos:
// int                            InSlot                         ( CPF_Parm )

void UMobileMenuInventory::UpdateItemInSlot ( int InSlot )
{
	static UFunction* pFnUpdateItemInSlot = NULL;

	if ( ! pFnUpdateItemInSlot )
		pFnUpdateItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 44700 ];

	UMobileMenuInventory_execUpdateItemInSlot_Parms UpdateItemInSlot_Parms;
	UpdateItemInSlot_Parms.InSlot = InSlot;

	this->ProcessEvent ( pFnUpdateItemInSlot, &UpdateItemInSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.AddItemToSlot
// [0x00020002] 
// Parameters infos:
// class UMobileMenuElement*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuElement*      Element                        ( CPF_Parm )
// int                            ToSlot                         ( CPF_Parm )

class UMobileMenuElement* UMobileMenuInventory::AddItemToSlot ( class UMobileMenuElement* Element, int ToSlot )
{
	static UFunction* pFnAddItemToSlot = NULL;

	if ( ! pFnAddItemToSlot )
		pFnAddItemToSlot = (UFunction*) UObject::GObjObjects()->Data[ 44695 ];

	UMobileMenuInventory_execAddItemToSlot_Parms AddItemToSlot_Parms;
	AddItemToSlot_Parms.Element = Element;
	AddItemToSlot_Parms.ToSlot = ToSlot;

	this->ProcessEvent ( pFnAddItemToSlot, &AddItemToSlot_Parms, NULL );

	return AddItemToSlot_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Slot0                          ( CPF_Parm )
// int                            Slot1                          ( CPF_Parm )

bool UMobileMenuInventory::SwapItemsInSlots ( int Slot0, int Slot1 )
{
	static UFunction* pFnSwapItemsInSlots = NULL;

	if ( ! pFnSwapItemsInSlots )
		pFnSwapItemsInSlots = (UFunction*) UObject::GObjObjects()->Data[ 44689 ];

	UMobileMenuInventory_execSwapItemsInSlots_Parms SwapItemsInSlots_Parms;
	SwapItemsInSlots_Parms.Slot0 = Slot0;
	SwapItemsInSlots_Parms.Slot1 = Slot1;

	this->ProcessEvent ( pFnSwapItemsInSlots, &SwapItemsInSlots_Parms, NULL );

	return SwapItemsInSlots_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.OnTouch
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuInventory::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44681 ];

	UMobileMenuInventory_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuElement*      Item                           ( CPF_Parm )
// class UMobileMenuElement*      ToSlot                         ( CPF_Parm )
// int                            ToIdx                          ( CPF_Parm )
// int                            FromIdx                        ( CPF_OptionalParm | CPF_Parm )

bool UMobileMenuInventory::CanPutItemInSlot ( class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx )
{
	static UFunction* pFnCanPutItemInSlot = NULL;

	if ( ! pFnCanPutItemInSlot )
		pFnCanPutItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 44675 ];

	UMobileMenuInventory_execCanPutItemInSlot_Parms CanPutItemInSlot_Parms;
	CanPutItemInSlot_Parms.Item = Item;
	CanPutItemInSlot_Parms.ToSlot = ToSlot;
	CanPutItemInSlot_Parms.ToIdx = ToIdx;
	CanPutItemInSlot_Parms.FromIdx = FromIdx;

	this->ProcessEvent ( pFnCanPutItemInSlot, &CanPutItemInSlot_Parms, NULL );

	return CanPutItemInSlot_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.ScaleSlot
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UMobileMenuElement*      Slot                           ( CPF_Parm )

void UMobileMenuInventory::ScaleSlot ( class UMobileMenuElement* Slot )
{
	static UFunction* pFnScaleSlot = NULL;

	if ( ! pFnScaleSlot )
		pFnScaleSlot = (UFunction*) UObject::GObjObjects()->Data[ 44670 ];

	UMobileMenuInventory_execScaleSlot_Parms ScaleSlot_Parms;
	ScaleSlot_Parms.Slot = Slot;

	this->ProcessEvent ( pFnScaleSlot, &ScaleSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.AddSlot
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuElement*      Slot                           ( CPF_Parm )

int UMobileMenuInventory::AddSlot ( class UMobileMenuElement* Slot )
{
	static UFunction* pFnAddSlot = NULL;

	if ( ! pFnAddSlot )
		pFnAddSlot = (UFunction*) UObject::GObjObjects()->Data[ 44671 ];

	UMobileMenuInventory_execAddSlot_Parms AddSlot_Parms;
	AddSlot_Parms.Slot = Slot;

	this->ProcessEvent ( pFnAddSlot, &AddSlot_Parms, NULL );

	return AddSlot_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuInventory::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44663 ];

	UMobileMenuInventory_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.OnUpdateDrag
// [0x00520000] 
// Parameters infos:
// struct FDragElementInfo        Before                         ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FDragElementInfo        After                          ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMobileMenuInventory::OnUpdateDrag ( struct FDragElementInfo* Before, struct FDragElementInfo* After )
{
	static UFunction* pFnOnUpdateDrag = NULL;

	if ( ! pFnOnUpdateDrag )
		pFnOnUpdateDrag = (UFunction*) UObject::GObjObjects()->Data[ 44643 ];

	UMobileMenuInventory_execOnUpdateDrag_Parms OnUpdateDrag_Parms;

	this->ProcessEvent ( pFnOnUpdateDrag, &OnUpdateDrag_Parms, NULL );

	if ( Before )
		memcpy ( Before, &OnUpdateDrag_Parms.Before, 0x28 );

	if ( After )
		memcpy ( After, &OnUpdateDrag_Parms.After, 0x28 );
};

// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuInventory*    FromInv                        ( CPF_Parm )
// class UMobileMenuElement*      Item                           ( CPF_Parm )
// class UMobileMenuElement*      ToSlot                         ( CPF_Parm )
// int                            ToIdx                          ( CPF_Parm )
// int                            FromIdx                        ( CPF_Parm )

bool UMobileMenuInventory::DoCanPutItemInSlot ( class UMobileMenuInventory* FromInv, class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx )
{
	static UFunction* pFnDoCanPutItemInSlot = NULL;

	if ( ! pFnDoCanPutItemInSlot )
		pFnDoCanPutItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 44645 ];

	UMobileMenuInventory_execDoCanPutItemInSlot_Parms DoCanPutItemInSlot_Parms;
	DoCanPutItemInSlot_Parms.FromInv = FromInv;
	DoCanPutItemInSlot_Parms.Item = Item;
	DoCanPutItemInSlot_Parms.ToSlot = ToSlot;
	DoCanPutItemInSlot_Parms.ToIdx = ToIdx;
	DoCanPutItemInSlot_Parms.FromIdx = FromIdx;

	this->ProcessEvent ( pFnDoCanPutItemInSlot, &DoCanPutItemInSlot_Parms, NULL );

	return DoCanPutItemInSlot_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
// [0x00120000] 
// Parameters infos:
// class UMobileMenuInventory*    FromInv                        ( CPF_Parm )
// int                            SlotIndex                      ( CPF_Parm )

void UMobileMenuInventory::OnUpdateItemInSlot ( class UMobileMenuInventory* FromInv, int SlotIndex )
{
	static UFunction* pFnOnUpdateItemInSlot = NULL;

	if ( ! pFnOnUpdateItemInSlot )
		pFnOnUpdateItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 44647 ];

	UMobileMenuInventory_execOnUpdateItemInSlot_Parms OnUpdateItemInSlot_Parms;
	OnUpdateItemInSlot_Parms.FromInv = FromInv;
	OnUpdateItemInSlot_Parms.SlotIndex = SlotIndex;

	this->ProcessEvent ( pFnOnUpdateItemInSlot, &OnUpdateItemInSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuLabel.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuLabel::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44739 ];

	UMobileMenuLabel_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuList.ItemScrollSize
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuListItem*     Item                           ( CPF_Parm )

int UMobileMenuList::ItemScrollSize ( class UMobileMenuListItem* Item )
{
	static UFunction* pFnItemScrollSize = NULL;

	if ( ! pFnItemScrollSize )
		pFnItemScrollSize = (UFunction*) UObject::GObjObjects()->Data[ 44883 ];

	UMobileMenuList_execItemScrollSize_Parms ItemScrollSize_Parms;
	ItemScrollSize_Parms.Item = Item;

	this->ProcessEvent ( pFnItemScrollSize, &ItemScrollSize_Parms, NULL );

	return ItemScrollSize_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.RenderObject
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuList::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44868 ];

	UMobileMenuList_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuList.UpdateScroll
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuList::UpdateScroll ( float DeltaTime )
{
	static UFunction* pFnUpdateScroll = NULL;

	if ( ! pFnUpdateScroll )
		pFnUpdateScroll = (UFunction*) UObject::GObjObjects()->Data[ 44865 ];

	UMobileMenuList_execUpdateScroll_Parms UpdateScroll_Parms;
	UpdateScroll_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateScroll, &UpdateScroll_Parms, NULL );
};

// Function GameFramework.MobileMenuList.CalculateSelectedItem
// [0x00420002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          ScrollAmount                   ( CPF_Parm )
// unsigned long                  bForceZeroAdjustment           ( CPF_Parm )
// struct FSelectedMenuItem       Selected                       ( CPF_Parm | CPF_OutParm )

float UMobileMenuList::CalculateSelectedItem ( float ScrollAmount, unsigned long bForceZeroAdjustment, struct FSelectedMenuItem* Selected )
{
	static UFunction* pFnCalculateSelectedItem = NULL;

	if ( ! pFnCalculateSelectedItem )
		pFnCalculateSelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 44854 ];

	UMobileMenuList_execCalculateSelectedItem_Parms CalculateSelectedItem_Parms;
	CalculateSelectedItem_Parms.ScrollAmount = ScrollAmount;
	CalculateSelectedItem_Parms.bForceZeroAdjustment = bForceZeroAdjustment;

	this->ProcessEvent ( pFnCalculateSelectedItem, &CalculateSelectedItem_Parms, NULL );

	if ( Selected )
		memcpy ( Selected, &CalculateSelectedItem_Parms.Selected, 0xC );

	return CalculateSelectedItem_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetItemClickPosition
// [0x00420002] 
// Parameters infos:
// class UMobileMenuListItem*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MouseX                         ( CPF_Parm | CPF_OutParm )
// float                          MouseY                         ( CPF_Parm | CPF_OutParm )

class UMobileMenuListItem* UMobileMenuList::GetItemClickPosition ( float* MouseX, float* MouseY )
{
	static UFunction* pFnGetItemClickPosition = NULL;

	if ( ! pFnGetItemClickPosition )
		pFnGetItemClickPosition = (UFunction*) UObject::GObjObjects()->Data[ 44846 ];

	UMobileMenuList_execGetItemClickPosition_Parms GetItemClickPosition_Parms;

	this->ProcessEvent ( pFnGetItemClickPosition, &GetItemClickPosition_Parms, NULL );

	if ( MouseX )
		*MouseX = GetItemClickPosition_Parms.MouseX;

	if ( MouseY )
		*MouseY = GetItemClickPosition_Parms.MouseY;

	return GetItemClickPosition_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuList::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44830 ];

	UMobileMenuList_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.SetSelectedItem
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ItemIndex                      ( CPF_Parm )
// unsigned long                  bForceAll                      ( CPF_OptionalParm | CPF_Parm )

bool UMobileMenuList::SetSelectedItem ( int ItemIndex, unsigned long bForceAll )
{
	static UFunction* pFnSetSelectedItem = NULL;

	if ( ! pFnSetSelectedItem )
		pFnSetSelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 44826 ];

	UMobileMenuList_execSetSelectedItem_Parms SetSelectedItem_Parms;
	SetSelectedItem_Parms.ItemIndex = ItemIndex;
	SetSelectedItem_Parms.bForceAll = bForceAll;

	this->ProcessEvent ( pFnSetSelectedItem, &SetSelectedItem_Parms, NULL );

	return SetSelectedItem_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetNumVisible
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UMobileMenuList::GetNumVisible ( )
{
	static UFunction* pFnGetNumVisible = NULL;

	if ( ! pFnGetNumVisible )
		pFnGetNumVisible = (UFunction*) UObject::GObjObjects()->Data[ 44822 ];

	UMobileMenuList_execGetNumVisible_Parms GetNumVisible_Parms;

	this->ProcessEvent ( pFnGetNumVisible, &GetNumVisible_Parms, NULL );

	return GetNumVisible_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            VisibleIndex                   ( CPF_Parm )

int UMobileMenuList::SetSelectedToVisibleIndex ( int VisibleIndex )
{
	static UFunction* pFnSetSelectedToVisibleIndex = NULL;

	if ( ! pFnSetSelectedToVisibleIndex )
		pFnSetSelectedToVisibleIndex = (UFunction*) UObject::GObjObjects()->Data[ 44818 ];

	UMobileMenuList_execSetSelectedToVisibleIndex_Parms SetSelectedToVisibleIndex_Parms;
	SetSelectedToVisibleIndex_Parms.VisibleIndex = VisibleIndex;

	this->ProcessEvent ( pFnSetSelectedToVisibleIndex, &SetSelectedToVisibleIndex_Parms, NULL );

	return SetSelectedToVisibleIndex_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UMobileMenuList::GetVisibleIndexOfSelected ( )
{
	static UFunction* pFnGetVisibleIndexOfSelected = NULL;

	if ( ! pFnGetVisibleIndexOfSelected )
		pFnGetVisibleIndexOfSelected = (UFunction*) UObject::GObjObjects()->Data[ 44813 ];

	UMobileMenuList_execGetVisibleIndexOfSelected_Parms GetVisibleIndexOfSelected_Parms;

	this->ProcessEvent ( pFnGetVisibleIndexOfSelected, &GetVisibleIndexOfSelected_Parms, NULL );

	return GetVisibleIndexOfSelected_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetAmountSelected
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuListItem*     Item                           ( CPF_Parm )

float UMobileMenuList::GetAmountSelected ( class UMobileMenuListItem* Item )
{
	static UFunction* pFnGetAmountSelected = NULL;

	if ( ! pFnGetAmountSelected )
		pFnGetAmountSelected = (UFunction*) UObject::GObjObjects()->Data[ 44806 ];

	UMobileMenuList_execGetAmountSelected_Parms GetAmountSelected_Parms;
	GetAmountSelected_Parms.Item = Item;

	this->ProcessEvent ( pFnGetAmountSelected, &GetAmountSelected_Parms, NULL );

	return GetAmountSelected_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetSelected
// [0x00020002] 
// Parameters infos:
// class UMobileMenuListItem*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMobileMenuListItem* UMobileMenuList::GetSelected ( )
{
	static UFunction* pFnGetSelected = NULL;

	if ( ! pFnGetSelected )
		pFnGetSelected = (UFunction*) UObject::GObjObjects()->Data[ 44803 ];

	UMobileMenuList_execGetSelected_Parms GetSelected_Parms;

	this->ProcessEvent ( pFnGetSelected, &GetSelected_Parms, NULL );

	return GetSelected_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.Num
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UMobileMenuList::Num ( )
{
	static UFunction* pFnNum = NULL;

	if ( ! pFnNum )
		pFnNum = (UFunction*) UObject::GObjObjects()->Data[ 44801 ];

	UMobileMenuList_execNum_Parms Num_Parms;

	this->ProcessEvent ( pFnNum, &Num_Parms, NULL );

	return Num_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuList.AddItem
// [0x00024002] 
// Parameters infos:
// class UMobileMenuListItem*     Item                           ( CPF_Parm )
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

void UMobileMenuList::AddItem ( class UMobileMenuListItem* Item, int Index )
{
	static UFunction* pFnAddItem = NULL;

	if ( ! pFnAddItem )
		pFnAddItem = (UFunction*) UObject::GObjObjects()->Data[ 44798 ];

	UMobileMenuList_execAddItem_Parms AddItem_Parms;
	AddItem_Parms.Item = Item;
	AddItem_Parms.Index = Index;

	this->ProcessEvent ( pFnAddItem, &AddItem_Parms, NULL );
};

// Function GameFramework.MobileMenuList.InitMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// class UMobileMenuScene*        Scene                          ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuList::InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44792 ];

	UMobileMenuList_execInitMenuObject_Parms InitMenuObject_Parms;
	InitMenuObject_Parms.PlayerInput = PlayerInput;
	InitMenuObject_Parms.Scene = Scene;
	InitMenuObject_Parms.ScreenWidth = ScreenWidth;
	InitMenuObject_Parms.ScreenHeight = ScreenHeight;
	InitMenuObject_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuListItem.RenderItem
// [0x00020000] 
// Parameters infos:
// class UMobileMenuList*         List                           ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuListItem::RenderItem ( class UMobileMenuList* List, class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 44887 ];

	UMobileMenuListItem_execRenderItem_Parms RenderItem_Parms;
	RenderItem_Parms.List = List;
	RenderItem_Parms.Canvas = Canvas;
	RenderItem_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuObjectProxy::RenderObject ( class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44914 ];

	UMobileMenuObjectProxy_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;
	RenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuObjectProxy::eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44907 ];

	UMobileMenuObjectProxy_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;
	OnTouch_Parms.ObjectOver = ObjectOver;
	OnTouch_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );

	return OnTouch_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
// [0x00120000] 
// Parameters infos:
// class UMobileMenuObjectProxy*  Proxy                          ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobileMenuObjectProxy::OnRenderObject ( class UMobileMenuObjectProxy* Proxy, class UCanvas* Canvas, float DeltaTime )
{
	static UFunction* pFnOnRenderObject = NULL;

	if ( ! pFnOnRenderObject )
		pFnOnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44902 ];

	UMobileMenuObjectProxy_execOnRenderObject_Parms OnRenderObject_Parms;
	OnRenderObject_Parms.Proxy = Proxy;
	OnRenderObject_Parms.Canvas = Canvas;
	OnRenderObject_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnRenderObject, &OnRenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileMenuObjectProxy*  Proxy                          ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )
// class UMobileMenuObject*       ObjectOver                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

bool UMobileMenuObjectProxy::OnTouchEvent ( class UMobileMenuObjectProxy* Proxy, unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime )
{
	static UFunction* pFnOnTouchEvent = NULL;

	if ( ! pFnOnTouchEvent )
		pFnOnTouchEvent = (UFunction*) UObject::GObjObjects()->Data[ 44893 ];

	UMobileMenuObjectProxy_execOnTouchEvent_Parms OnTouchEvent_Parms;
	OnTouchEvent_Parms.Proxy = Proxy;
	OnTouchEvent_Parms.EventType = EventType;
	OnTouchEvent_Parms.TouchX = TouchX;
	OnTouchEvent_Parms.TouchY = TouchY;
	OnTouchEvent_Parms.ObjectOver = ObjectOver;
	OnTouchEvent_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnTouchEvent, &OnTouchEvent_Parms, NULL );

	return OnTouchEvent_Parms.ReturnValue;
};

// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleDragOver ( )
{
	static UFunction* pFnHandleDragOver = NULL;

	if ( ! pFnHandleDragOver )
		pFnHandleDragOver = (UFunction*) UObject::GObjObjects()->Data[ 44993 ];

	AMobileTouchInputVolume_execHandleDragOver_Parms HandleDragOver_Parms;

	this->ProcessEvent ( pFnHandleDragOver, &HandleDragOver_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleDoubleClick ( )
{
	static UFunction* pFnHandleDoubleClick = NULL;

	if ( ! pFnHandleDoubleClick )
		pFnHandleDoubleClick = (UFunction*) UObject::GObjObjects()->Data[ 44992 ];

	AMobileTouchInputVolume_execHandleDoubleClick_Parms HandleDoubleClick_Parms;

	this->ProcessEvent ( pFnHandleDoubleClick, &HandleDoubleClick_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.HandleClick
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleClick ( )
{
	static UFunction* pFnHandleClick = NULL;

	if ( ! pFnHandleClick )
		pFnHandleClick = (UFunction*) UObject::GObjObjects()->Data[ 44990 ];

	AMobileTouchInputVolume_execHandleClick_Parms HandleClick_Parms;

	this->ProcessEvent ( pFnHandleClick, &HandleClick_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.OnToggle
// [0x00020102] 
// Parameters infos:
// class USeqAct_Toggle*          inAction                       ( CPF_Parm )

void AMobileTouchInputVolume::OnToggle ( class USeqAct_Toggle* inAction )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 44988 ];

	AMobileTouchInputVolume_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.inAction = inAction;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleDragOver
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleDragOver ( )
{
	static UFunction* pFnHandleDragOver = NULL;

	if ( ! pFnHandleDragOver )
		pFnHandleDragOver = (UFunction*) UObject::GObjObjects()->Data[ 45216 ];

	UTouchableElement3D_execHandleDragOver_Parms HandleDragOver_Parms;

	this->ProcessEvent ( pFnHandleDragOver, &HandleDragOver_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleDoubleClick
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleDoubleClick ( )
{
	static UFunction* pFnHandleDoubleClick = NULL;

	if ( ! pFnHandleDoubleClick )
		pFnHandleDoubleClick = (UFunction*) UObject::GObjObjects()->Data[ 45215 ];

	UTouchableElement3D_execHandleDoubleClick_Parms HandleDoubleClick_Parms;

	this->ProcessEvent ( pFnHandleDoubleClick, &HandleDoubleClick_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleClick
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleClick ( )
{
	static UFunction* pFnHandleClick = NULL;

	if ( ! pFnHandleClick )
		pFnHandleClick = (UFunction*) UObject::GObjObjects()->Data[ 45214 ];

	UTouchableElement3D_execHandleClick_Parms HandleClick_Parms;

	this->ProcessEvent ( pFnHandleClick, &HandleClick_Parms, NULL );
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bToEntry                       ( CPF_Parm )
// TArray< class AActor* >        ActorList                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APlayerCollectorGame::eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList )
{
	static UFunction* pFnGetSeamlessTravelActorList = NULL;

	if ( ! pFnGetSeamlessTravelActorList )
		pFnGetSeamlessTravelActorList = (UFunction*) UObject::GObjObjects()->Data[ 45032 ];

	APlayerCollectorGame_eventGetSeamlessTravelActorList_Parms GetSeamlessTravelActorList_Parms;
	GetSeamlessTravelActorList_Parms.bToEntry = bToEntry;

	this->ProcessEvent ( pFnGetSeamlessTravelActorList, &GetSeamlessTravelActorList_Parms, NULL );

	if ( ActorList )
		memcpy ( ActorList, &GetSeamlessTravelActorList_Parms.ActorList, 0xC );
};

// Function GameFramework.PlayerCollectorGame.Login
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Portal                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Options                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            UniqueId                       ( CPF_Const | CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class APlayerController* APlayerCollectorGame::eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 45025 ];

	APlayerCollectorGame_eventLogin_Parms Login_Parms;
	memcpy ( &Login_Parms.Portal, &Portal, 0xC );
	memcpy ( &Login_Parms.Options, &Options, 0xC );
	memcpy ( &Login_Parms.UniqueId, &UniqueId, 0x48 );

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	if ( ErrorMessage )
		memcpy ( ErrorMessage, &Login_Parms.ErrorMessage, 0xC );

	return Login_Parms.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRenderImage.Render
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 TargetCanvas                   ( CPF_Parm )
// class AHUD*                    TargetHud                      ( CPF_Parm )

void USeqEvent_HudRenderImage::Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 45130 ];

	USeqEvent_HudRenderImage_execRender_Parms Render_Parms;
	Render_Parms.TargetCanvas = TargetCanvas;
	Render_Parms.TargetHud = TargetHud;

	this->ProcessEvent ( pFnRender, &Render_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqEvent_HudRenderText::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45158 ];

	USeqEvent_HudRenderText_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRenderText.Render
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 TargetCanvas                   ( CPF_Parm )
// class AHUD*                    TargetHud                      ( CPF_Parm )

void USeqEvent_HudRenderText::Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 45147 ];

	USeqEvent_HudRenderText_execRender_Parms Render_Parms;
	Render_Parms.TargetCanvas = TargetCanvas;
	Render_Parms.TargetHud = TargetHud;

	this->ProcessEvent ( pFnRender, &Render_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif