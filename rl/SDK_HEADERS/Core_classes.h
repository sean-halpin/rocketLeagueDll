/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_classes.h
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

#define CONST_ZeroRotator                                        Rot(0,0,0)
#define CONST_ZeroVector                                         Vect(0,0,0)
#define CONST_UpVector                                           Vect(0,0,1)
#define CONST_RightVector                                        Vect(0,1,0)
#define CONST_ForwardVector                                      Vect(1,0,0)
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MinInt                                             0x80000000
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EEdition
/*enum EEdition
{
	Edition_Default                                    = 0,
	Edition_China                                      = 1,
	Edition_MAX                                        = 2
};*/

// Enum Core.Object.EDebugBreakType
/*enum EDebugBreakType
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_MAX                                       = 3
};*/

// Enum Core.Object.EAspectRatioAxisConstraint
/*enum EAspectRatioAxisConstraint
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_MAX                                    = 3
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_MAX                                             = 5
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.AlphaBlendType
/*enum AlphaBlendType
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_MAX                                            = 7
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/

// Enum Core.GameVersion.EGameVersion
/*enum EGameVersion
{
	GameVersion_Launch                                 = 0,
	GameVersion_SupersonicFury                         = 1,
	GameVersion                                        = 2,
	GameVersion_Revenge                                = 3,
	GameVersion_GrayCar                                = 4,
	GameVersion01                                      = 5,
	GameVersion02                                      = 6,
	GameVersion_Wasteland                              = 7,
	GameVersion_Update8                                = 8,
	GameVersion_DarkCar                                = 9,
	GameVersion_Update9                                = 10,
	GameVersion_Update10                               = 11,
	GameVersion_NeoTokyo                               = 12,
	GameVersion_Retail                                 = 13,
	GameVersion_Update11                               = 14,
	GameVersion_Update12                               = 15,
	GameVersion_Update13                               = 16,
	GameVersion_Update14                               = 17,
	GameVersion_Update15                               = 18,
	GameVersion_Update16                               = 19,
	GameVersion_Update17                               = 20,
	GameVersion_Update18                               = 21,
	GameVersion_Update19                               = 22,
	GameVersion_Update20                               = 23,
	GameVersion_Update21                               = 24,
	GameVersion_Update22                               = 25,
	GameVersion_Unreleased                             = 26,
	GameVersion_MAX                                    = 27
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x003C
class UObject
{
public:
	//struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    HashNext;                                         		// 0x0004 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0008 (0x0008) UNKNOWN PROPERTY: QWordProperty Core.Object.ObjectFlags
	struct FPointer                                    HashOuterNext;                                    		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x0018 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects(); 

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 

	template< class T > static T* FindObject ( char* ObjectFullName ); 
	static UClass* FindClass ( char* ClassFullName ); 

	bool IsA ( UClass* pClass ); 

	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2 ];

		return pClassPointer;
	};

	int SumInt ( int Total, int Value );
	int SortDescendingString ( struct FString A, struct FString B );
	int SortAscendingString ( struct FString A, struct FString B );
	int SortDescendingQWORD ( );
	int SortAscendingQWORD ( );
	int SortDescendingInt ( int A, int B );
	int SortAscendingInt ( int A, int B );
	struct FString PadString ( struct FString Str, int Characters );
	void GetFrameCounter ( );
	float GetScaledAxisValue ( float Value, float Sensitivity, float MaxSensitivity );
	class UObjectProvider* GetObjectProvider ( );
	unsigned char GetEdition ( );
	bool IsEdition ( unsigned char Edition );
	void SetRooted ( unsigned long bRooted );
	void ProfNodeEvent ( struct FString EventName );
	void ProfNodeSetDepthThreshold ( int Depth );
	void ProfNodeSetTimeThresholdSeconds ( float Threshold );
	void ProfNodeStop ( int AssumedTimerIndex );
	int ProfNodeStart ( struct FString TimerName );
	struct FString CreateGuidString ( );
	struct FString GetStringFromGuid ( struct FGuid* InGuid );
	struct FGuid GetGuidFromString ( struct FString* InGuidString );
	struct FGuid CreateGuid ( );
	bool IsGuidValid ( struct FGuid* InGuid );
	void InvalidateGuid ( struct FGuid* InGuid );
	class UObject* FindStructProperty ( class UClass* PropertyClass, struct FName PropertyName, struct FName StructName );
	class UObject* FindProperty ( class UClass* PropertyClass, struct FName PropertyName );
	bool Identical ( class UObject* Left, class UObject* Right );
	class UObject* DuplicateObject ( class UObject* Template, class UObject* ObjOuter, class UClass* DestClass );
	float RunningAverage ( float OldAverage, float NewValue, int NewCount, int OldCount );
	float GetCurrentTime ( );
	struct FLinearColor GetMaxLinearColorBrightness ( struct FLinearColor C );
	struct FColor GetMaxColorBrightness ( struct FColor C );
	struct FLinearColor LABtoRGB ( struct FLinearColor C );
	struct FLinearColor RGBtoLAB ( struct FLinearColor C );
	struct FLinearColor HSVtoRGB ( struct FLinearColor C );
	struct FLinearColor RGBtoHSV ( struct FLinearColor C );
	struct FLinearColor IntToLinearColor ( int I );
	struct FColor IntToColor ( int I );
	int LinearColorToInt ( struct FLinearColor C );
	int ColorToInt ( struct FColor C );
	bool SolveVelocityQuadratic ( float Distance, float Speed, float Accel, float* Time );
	float Sign ( float X );
	struct FVector2D MakeVector2D ( float X, float Y );
	struct FVector VAbs ( struct FVector V );
	struct FVector MakeVector ( float X, float Y, float Z );
	struct FVector FlattenVector ( struct FVector NormalToFlatten, struct FVector PlaneNormal );
	struct FName GetRealArchetypeName ( );
	struct FString FormatTime ( int Seconds );
	void SwapRefrences ( class UObject** A, class UObject** B );
	class UObject* GetTextArchetype ( class UClass* ArchetypeClass, struct FString Path );
	bool IsArchetype ( );
	void UnsubscribeFromAllEvents ( );
	class UObject* NewInstance ( class UObject* ObjOuter );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	struct FRotator RotatorFromInt ( int RotationPitchAndYaw );
	int RotatorToInt ( struct FRotator Rotation );
	struct FString GetLanguage ( );
	int GetRandomOptionSumFrequency ( TArray< float >* FreqList );
	int GetBuildChangelistNumber ( );
	int GetEngineVersion ( );
	float GetAppSeconds ( );
	void GetSystemTime ( int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec );
	struct FString TimeStamp ( );
	struct FVector TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse );
	struct FName GetPackageName ( );
	bool IsPendingKill ( );
	float ByteToFloat ( unsigned char inputByte, unsigned long bSigned );
	unsigned char FloatToByte ( float inputFloat, unsigned long bSigned );
	float UnwindHeading ( float A );
	float FindDeltaAngle ( float A1, float A2 );
	float GetHeadingAngle ( struct FVector Dir );
	void GetAngularDegreesFromRadians ( struct FVector2D* OutFOV );
	void GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist );
	bool GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist );
	bool GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist );
	bool LinePlaneIntersection ( struct FVector LineStart, struct FVector LineEnd, struct FVector PlaneOrigin, struct FVector PlaneNormal, unsigned long bCheckLineSegment, struct FVector* Out_Intersection, float* Out_T );
	struct FVector PointProjectToPlane ( struct FVector Point, struct FVector A, struct FVector B, struct FVector C );
	float PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint );
	float PointDistToSegment ( struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint );
	float PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint );
	void GetPerObjectConfigObjects ( class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, class UObject** OutObject );
	bool GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray< struct FString >* out_SectionNames );
	void ImportJSON ( struct FString PropertyName, struct FString* JSON );
	void StaticSaveConfig ( );
	void SaveConfig ( );
	class UObject* FindObject ( struct FString ObjectName, class UClass* ObjectClass );
	class UObject* DynamicLoadObject ( struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail );
	int EnumFromString ( class UObject* E, struct FName ValueName );
	struct FName GetEnum ( class UObject* E, int I );
	void Disable ( struct FName ProbeFunc );
	void Enable ( struct FName ProbeFunc );
	void eventContinuedState ( );
	void eventPausedState ( );
	void eventPoppedState ( );
	void eventPushedState ( );
	void eventEndState ( struct FName NextStateName );
	void eventBeginState ( struct FName PreviousStateName );
	void DumpStateStack ( );
	void PopState ( unsigned long bPopAll );
	void PushState ( struct FName NewState, struct FName NewLabel );
	struct FName GetStateName ( );
	bool IsChildState ( struct FName TestState, struct FName TestParentState );
	bool IsInState ( struct FName TestState, unsigned long bTestStateStack );
	void GotoState ( struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack );
	bool IsUTracing ( );
	void SetUTracing ( unsigned long bShouldUTrace );
	struct FName GetFuncName ( );
	void DebugBreak ( int UserFlags, unsigned char DebuggerType );
	struct FString GetScriptTrace ( );
	void ScriptTrace ( );
	struct FString ParseLocalizedPropertyPath ( struct FString PathName );
	struct FString Localize ( struct FString SectionName, struct FString KeyName, struct FString PackageName, unsigned long bOptional );
	void WarnInternal ( struct FString S );
	void LogInternal ( struct FString S, struct FName Tag, unsigned long bFileOnly );
	struct FLinearColor LinearColorLerp ( struct FLinearColor ColorA, struct FLinearColor ColorB, float Alpha );
	struct FLinearColor Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B );
	struct FLinearColor Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult );
	struct FLinearColor ConvertFromSRGB ( struct FLinearColor OldColor );
	struct FColor LinearColorToColor ( struct FLinearColor OldColor );
	struct FLinearColor ColorToLinearColor ( struct FColor OldColor );
	struct FLinearColor MakeLinearColor ( float R, float G, float B, float A );
	struct FColor LerpColor ( struct FColor A, struct FColor B, float Alpha );
	struct FColor MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A );
	struct FColor Add_ColorColor ( struct FColor A, struct FColor B );
	struct FColor Multiply_ColorFloat ( struct FColor A, float B );
	struct FColor Multiply_FloatColor ( float A, struct FColor B );
	struct FColor Subtract_ColorColor ( struct FColor A, struct FColor B );
	struct FVector2D EvalInterpCurveVector2D ( float InVal, struct FInterpCurveVector2D* Vector2DCurve );
	struct FVector EvalInterpCurveVector ( float InVal, struct FInterpCurveVector* VectorCurve );
	float EvalInterpCurveFloat ( float InVal, struct FInterpCurveFloat* FloatCurve );
	struct FVector2D vect2d ( float InX, float InY );
	float GetMappedRangeValue ( struct FVector2D InputRange, struct FVector2D OutputRange, float Value );
	float GetRangePctByValue ( struct FVector2D Range, float Value );
	float GetRangeValueByPct ( struct FVector2D Range, float Pct );
	struct FVector2D V2DNormal ( struct FVector2D A );
	float V2DSizeSq ( struct FVector2D A );
	float V2DSize ( struct FVector2D A );
	float Dot_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	struct FVector2D SubtractEqual_Vector2DVector2D ( struct FVector2D B, struct FVector2D* A );
	struct FVector2D AddEqual_Vector2DVector2D ( struct FVector2D B, struct FVector2D* A );
	struct FVector2D DivideEqual_Vector2DFloat ( float B, struct FVector2D* A );
	struct FVector2D MultiplyEqual_Vector2DFloat ( float B, struct FVector2D* A );
	struct FVector2D Divide_Vector2DFloat ( struct FVector2D A, float B );
	struct FVector2D Multiply_Vector2DFloat ( struct FVector2D A, float B );
	struct FVector2D Subtract_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	struct FVector2D Add_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	struct FQuat Subtract_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat Add_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath );
	struct FRotator QuatToRotator ( struct FQuat A );
	struct FQuat QuatFromRotator ( struct FRotator A );
	struct FQuat QuatFromAxisAndAngle ( struct FVector Axis, float Angle );
	struct FQuat QuatFindBetween ( struct FVector A, struct FVector B );
	struct FVector QuatRotateVector ( struct FQuat A, struct FVector B );
	struct FQuat QuatInvert ( struct FQuat A );
	float QuatDot ( struct FQuat A, struct FQuat B );
	struct FQuat QuatProduct ( struct FQuat A, struct FQuat B );
	struct FVector MatrixGetAxis ( struct FMatrix TM, unsigned char Axis );
	struct FVector MatrixGetOrigin ( struct FMatrix TM );
	struct FRotator MatrixGetRotator ( struct FMatrix TM );
	struct FMatrix MakeRotationMatrix ( struct FRotator Rotation );
	struct FMatrix MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation );
	struct FVector InverseTransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector TransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector InverseTransformVector ( struct FMatrix TM, struct FVector A );
	struct FVector TransformVector ( struct FMatrix TM, struct FVector A );
	struct FMatrix Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B );
	bool NotEqual_NameName ( struct FName A, struct FName B );
	bool EqualEqual_NameName ( struct FName A, struct FName B );
	bool IsA ( struct FName ClassName );
	bool ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass );
	bool NotEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool EqualEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool NotEqual_ObjectObject ( class UObject* A, class UObject* B );
	bool EqualEqual_ObjectObject ( class UObject* A, class UObject* B );
	struct FString GetPathName ( );
	struct FString PathName ( class UObject* CheckObject );
	TArray< struct FString > SplitString ( struct FString Source, struct FString Delimiter, unsigned long bCullEmpty );
	void ParseStringIntoArray ( struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces );
	struct FString RepeatString ( struct FString InValue, int Count );
	struct FString JoinArrayQWord ( struct FString delim, unsigned long bIgnoreBlanks );
	struct FString JoinArrayInt ( struct FString delim, unsigned long bIgnoreBlanks, TArray< int >* IntArray );
	struct FString JoinArrayName ( struct FString delim, unsigned long bIgnoreBlanks, TArray< struct FName >* NameArray );
	struct FString JoinArrayStr ( struct FString delim, unsigned long bIgnoreBlanks, TArray< struct FString >* StringArray );
	void JoinArray ( struct FString delim, unsigned long bIgnoreBlanks, TArray< struct FString >* StringArray, struct FString* out_Result );
	struct FString GetRightMost ( struct FString Text );
	struct FString Split ( struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr );
	struct FString Trim ( struct FString Src );
	struct FString Repl ( struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive );
	int Asc ( struct FString S );
	struct FString Chr ( int I );
	struct FString Locs ( struct FString S );
	struct FString Caps ( struct FString S );
	struct FString Right ( struct FString S, int I );
	struct FString Left ( struct FString S, int I );
	struct FString Mid ( struct FString S, int I, int J );
	int InStr ( struct FString S, struct FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos );
	int Len ( struct FString S );
	struct FString SubtractEqual_StrStr ( struct FString B, struct FString* A );
	struct FString AtEqual_StrStr ( struct FString B, struct FString* A );
	struct FString ConcatEqual_StrStr ( struct FString B, struct FString* A );
	bool ComplementEqual_StrStr ( struct FString A, struct FString B );
	bool NotEqual_StrStr ( struct FString A, struct FString B );
	bool EqualEqual_StrStr ( struct FString A, struct FString B );
	bool GreaterEqual_StrStr ( struct FString A, struct FString B );
	bool LessEqual_StrStr ( struct FString A, struct FString B );
	bool Greater_StrStr ( struct FString A, struct FString B );
	bool Less_StrStr ( struct FString A, struct FString B );
	struct FString At_StrStr ( struct FString A, struct FString B );
	struct FString Concat_StrStr ( struct FString A, struct FString B );
	struct FRotator RotateRotator ( struct FVector Axis, struct FRotator Rot, struct FRotator Direction, float Amount );
	struct FRotator MakeRotator ( int Pitch, int Yaw, int Roll );
	bool SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis );
	int ClampRotAxisFromRange ( int Current, int Min, int Max );
	int ClampRotAxisFromBase ( int Current, int Center, int MaxDelta );
	void ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis );
	struct FRotator FlattenRotatorOnAxis ( struct FVector AxisToRemove, struct FRotator RotToFlatten, struct FRotator RotToFlattenTo );
	float RSize ( struct FRotator R );
	float RDiff ( struct FRotator A, struct FRotator B );
	int NormalizeRotAxis ( int Angle );
	struct FRotator RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed );
	struct FRotator RTransform ( struct FRotator R, struct FRotator RBasis );
	struct FRotator RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator Normalize ( struct FRotator Rot );
	struct FRotator OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z );
	struct FRotator RotRand ( unsigned long bRoll );
	struct FVector GetRotatorAxis ( struct FRotator A, int Axis );
	void GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	void GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	bool ClockwiseFrom_IntInt ( int A, int B );
	struct FRotator SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator Subtract_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator Add_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator DivideEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator MultiplyEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator Divide_RotatorFloat ( struct FRotator A, float B );
	struct FRotator Multiply_FloatRotator ( float A, struct FRotator B );
	struct FRotator Multiply_RotatorFloat ( struct FRotator A, float B );
	bool NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	float GetRadiansBetweenVectors ( struct FVector V0, struct FVector v1 );
	struct FVector VClamp ( struct FVector A, struct FVector Min, struct FVector Max );
	struct FVector vect3d ( float X, float Y, float Z );
	bool InCylinder ( struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ );
	float NoZDot ( struct FVector A, struct FVector B );
	struct FVector ClampLength ( struct FVector V, float MaxLength );
	struct FVector VInterpConstantTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed );
	struct FVector VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed );
	void eventConstruct ( );
	struct FVector ProjectOnToPlane ( struct FVector InVector, struct FVector InNormal, float OverBounce );
	bool IsZero ( struct FVector A );
	struct FVector ProjectOnTo ( struct FVector X, struct FVector Y );
	struct FVector MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal );
	struct FVector VRandCone2 ( struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians );
	struct FVector VRandCone ( struct FVector Dir, float ConeHalfAngleRadians );
	struct FVector VRand ( );
	struct FVector VLerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector Normal2D ( struct FVector A );
	struct FVector Normal ( struct FVector A );
	float VSizeSq2D ( struct FVector A );
	float VSizeSq ( struct FVector A );
	float VSize2D ( struct FVector A );
	float VSize ( struct FVector A );
	struct FVector SubtractEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector AddEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector DivideEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector MultiplyEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector Cross_VectorVector ( struct FVector A, struct FVector B );
	float Dot_VectorVector ( struct FVector A, struct FVector B );
	bool NotEqual_VectorVector ( struct FVector A, struct FVector B );
	bool EqualEqual_VectorVector ( struct FVector A, struct FVector B );
	struct FVector GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector LessLess_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector Subtract_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Add_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Divide_VectorFloat ( struct FVector A, float B );
	struct FVector Multiply_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Multiply_FloatVector ( float A, struct FVector B );
	struct FVector Multiply_VectorFloat ( struct FVector A, float B );
	struct FVector Subtract_PreVector ( struct FVector A );
	float FInterpConstantTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FPctByRange ( float Value, float InMin, float InMax );
	float RandSign ( float Value );
	struct FVector CalculateGravityPosition ( struct FVector Location, struct FVector Velocity, float Gravity, float Time, struct FVector GravityDirection );
	float RandRange ( float InMin, float InMax );
	float FInterpEaseInOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseIn ( float A, float B, float Alpha, float Exp );
	float FCubicInterp ( float P0, float T0, float P1, float T1, float A );
	int FloorLog2 ( int Value );
	int FCeil ( float A );
	int FFloor ( float A );
	int Round ( float A );
	float Lerp ( float A, float B, float Alpha );
	float FClamp ( float V, float A, float B );
	float FMax ( float A, float B );
	float FMin ( float A, float B );
	float FRand ( );
	float Square ( float A );
	float Sqrt ( float A );
	float Loge ( float A );
	float Exp ( float A );
	float Atan2 ( float A, float B );
	float Atan ( float A );
	float Tan ( float A );
	float Acos ( float A );
	float Cos ( float A );
	float Asin ( float A );
	float Sin ( float A );
	float Abs ( float A );
	float SubtractEqual_FloatFloat ( float B, float* A );
	float AddEqual_FloatFloat ( float B, float* A );
	float DivideEqual_FloatFloat ( float B, float* A );
	float MultiplyEqual_FloatFloat ( float B, float* A );
	bool NotEqual_FloatFloat ( float A, float B );
	bool ComplementEqual_FloatFloat ( float A, float B );
	bool EqualEqual_FloatFloat ( float A, float B );
	bool GreaterEqual_FloatFloat ( float A, float B );
	bool LessEqual_FloatFloat ( float A, float B );
	bool Greater_FloatFloat ( float A, float B );
	bool Less_FloatFloat ( float A, float B );
	float Subtract_FloatFloat ( float A, float B );
	float Add_FloatFloat ( float A, float B );
	float Percent_FloatFloat ( float A, float B );
	float Divide_FloatFloat ( float A, float B );
	float Multiply_FloatFloat ( float A, float B );
	float MultiplyMultiply_FloatFloat ( float Base, float Exp );
	float Subtract_PreFloat ( float A );
	struct FString ToHex ( int A );
	int Clamp ( int V, int A, int B );
	int Max ( int A, int B );
	int Min ( int A, int B );
	int Rand ( int Max );
	void UnbindDelegate ( struct FName DelegateName, class UObject* TargetObject, struct FName TargetFuncName );
	void BindStateDelegate ( struct FName DelegateName, class UObject* TargetObject, struct FName TargetFuncName );
	void BindDelegate ( struct FName DelegateName, class UObject* TargetObject, struct FName TargetFuncName );
	int FromHex ( struct FString Hex );
	void QMin ( );
	void QMax ( );
	void QSubtract ( );
	bool NotEqual_QWordInt ( int B );
	bool EqualEqual_QWordInt ( int B );
	bool NotEqual_QWordQWord ( );
	bool EqualEqual_QWordQWord ( );
	bool GreaterEqual_QWordQWord ( );
	bool LessEqual_QWordQWord ( );
	bool Greater_QWordQWord ( );
	bool Less_QWordQWord ( );
	int Subtract_QWordQWord ( );
	void Add_QWordQWord ( );
	int SubtractSubtract_Int ( int* A );
	int AddAdd_Int ( int* A );
	int SubtractSubtract_PreInt ( int* A );
	int AddAdd_PreInt ( int* A );
	int SubtractEqual_IntInt ( int B, int* A );
	int AddEqual_IntInt ( int B, int* A );
	int DivideEqual_IntFloat ( float B, int* A );
	int MultiplyEqual_IntFloat ( float B, int* A );
	int Or_IntInt ( int A, int B );
	int Xor_IntInt ( int A, int B );
	int And_IntInt ( int A, int B );
	bool NotEqual_IntInt ( int A, int B );
	bool EqualEqual_IntInt ( int A, int B );
	bool GreaterEqual_IntInt ( int A, int B );
	bool LessEqual_IntInt ( int A, int B );
	bool Greater_IntInt ( int A, int B );
	bool Less_IntInt ( int A, int B );
	int GreaterGreaterGreater_IntInt ( int A, int B );
	int GreaterGreater_IntInt ( int A, int B );
	int LessLess_IntInt ( int A, int B );
	int Subtract_IntInt ( int A, int B );
	int Add_IntInt ( int A, int B );
	int Percent_IntInt ( int A, int B );
	int Divide_IntInt ( int A, int B );
	int Multiply_IntInt ( int A, int B );
	int Subtract_PreInt ( int A );
	int Complement_PreInt ( int A );
	unsigned char SubtractSubtract_Byte ( unsigned char* A );
	unsigned char AddAdd_Byte ( unsigned char* A );
	unsigned char SubtractSubtract_PreByte ( unsigned char* A );
	unsigned char AddAdd_PreByte ( unsigned char* A );
	unsigned char SubtractEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char AddEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char DivideEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char MultiplyEqual_ByteFloat ( float B, unsigned char* A );
	unsigned char MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A );
	bool OrOr_BoolBool ( unsigned long A, unsigned long B );
	bool XorXor_BoolBool ( unsigned long A, unsigned long B );
	bool AndAnd_BoolBool ( unsigned long A, unsigned long B );
	bool NotEqual_BoolBool ( unsigned long A, unsigned long B );
	bool EqualEqual_BoolBool ( unsigned long A, unsigned long B );
	bool Not_PreBool ( unsigned long A );

	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x00E129E0 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x004887C0 (0x04)
	virtual void VirtualFunction02 ( );																			// 0x00485C30 (0x08)
	virtual void VirtualFunction03 ( );																			// 0x00424E10 (0x0C)
	virtual void VirtualFunction04 ( );																			// 0x00B22030 (0x10)
	virtual void VirtualFunction05 ( );																			// 0x010C1AA0 (0x14)
	virtual void VirtualFunction06 ( );																			// 0x004B53D0 (0x18)
	virtual void VirtualFunction07 ( );																			// 0x004B5430 (0x1C)
	virtual void VirtualFunction08 ( );																			// 0x00482230 (0x20)
	virtual void VirtualFunction09 ( );																			// 0x004C0B70 (0x24)
	virtual void VirtualFunction10 ( );																			// 0x00E129E0 (0x28)
	virtual void VirtualFunction11 ( );																			// 0x004B5A30 (0x2C)
	virtual void VirtualFunction12 ( );																			// 0x0047AB80 (0x30)
	virtual void VirtualFunction13 ( );																			// 0x00483850 (0x34)
	virtual void VirtualFunction14 ( );																			// 0x0042BC70 (0x38)
	virtual void VirtualFunction15 ( );																			// 0x010C1AA0 (0x3C)
	virtual void VirtualFunction16 ( );																			// 0x004B6390 (0x40)
	virtual void VirtualFunction17 ( );																			// 0x004B4E50 (0x44)
	virtual void VirtualFunction18 ( );																			// 0x004BD8D0 (0x48)
	virtual void VirtualFunction19 ( );																			// 0x004B6460 (0x4C)
	virtual void VirtualFunction20 ( );																			// 0x004B5340 (0x50)
	virtual void VirtualFunction21 ( );																			// 0x004B4E70 (0x54)
	virtual void VirtualFunction22 ( );																			// 0x004B5310 (0x58)
	virtual void VirtualFunction23 ( );																			// 0x010C1AA0 (0x5C)
	virtual void VirtualFunction24 ( );																			// 0x010C1AA0 (0x60)
	virtual void VirtualFunction25 ( );																			// 0x01278900 (0x64)
	virtual void VirtualFunction26 ( );																			// 0x004B4E60 (0x68)
	virtual void VirtualFunction27 ( );																			// 0x004B4E70 (0x6C)
	virtual void VirtualFunction28 ( );																			// 0x004B5310 (0x70)
	virtual void VirtualFunction29 ( );																			// 0x004B4E70 (0x74)
	virtual void VirtualFunction30 ( );																			// 0x004B5310 (0x78)
	virtual void VirtualFunction31 ( );																			// 0x004BB970 (0x7C)
	virtual void VirtualFunction32 ( );																			// 0x004B6550 (0x80)
	virtual void VirtualFunction33 ( );																			// 0x004B66F0 (0x84)
	virtual void VirtualFunction34 ( );																			// 0x010C1AA0 (0x88)
	virtual void VirtualFunction35 ( );																			// 0x00472F00 (0x8C)
	virtual void VirtualFunction36 ( );																			// 0x004C7A30 (0x90)
	virtual void VirtualFunction37 ( );																			// 0x004275F0 (0x94)
	virtual void VirtualFunction38 ( );																			// 0x004B55A0 (0x98)
	virtual void VirtualFunction39 ( );																			// 0x00427620 (0x9C)
	virtual void VirtualFunction40 ( );																			// 0x00428120 (0xA0)
	virtual void VirtualFunction41 ( );																			// 0x00F94AD0 (0xA4)
	virtual void VirtualFunction42 ( );																			// 0x01278900 (0xA8)
	virtual void VirtualFunction43 ( );																			// 0x01278900 (0xAC)
	virtual void VirtualFunction44 ( );																			// 0x010C1AA0 (0xB0)
	virtual void VirtualFunction45 ( );																			// 0x00F94AD0 (0xB4)
	virtual void VirtualFunction46 ( );																			// 0x009038A0 (0xB8)
	virtual void VirtualFunction47 ( );																			// 0x00908AB0 (0xBC)
	virtual void VirtualFunction48 ( );																			// 0x00472F90 (0xC0)
	virtual void VirtualFunction49 ( );																			// 0x0047E420 (0xC4)
	virtual void VirtualFunction50 ( );																			// 0x00B22030 (0xC8)
	virtual void VirtualFunction51 ( );																			// 0x004B5FA0 (0xCC)
	virtual void VirtualFunction52 ( );																			// 0x00459B80 (0xD0)
	virtual void VirtualFunction53 ( );																			// 0x00485920 (0xD4)
	virtual void VirtualFunction54 ( );																			// 0x004B6050 (0xD8)
	virtual void VirtualFunction55 ( );																			// 0x00E156F0 (0xDC)
	virtual void VirtualFunction56 ( );																			// 0x004B52F0 (0xE0)
	virtual void VirtualFunction57 ( );																			// 0x004B5FC0 (0xE4)
	virtual void VirtualFunction58 ( );																			// 0x0042B2A0 (0xE8)
	virtual void VirtualFunction59 ( );																			// 0x004C7260 (0xEC)
	virtual void VirtualFunction60 ( );																			// 0x00F94AD0 (0xF0)
	virtual void VirtualFunction61 ( );																			// 0x00424E20 (0xF4)
	virtual void VirtualFunction62 ( );																			// 0x00424E40 (0xF8)
	virtual void VirtualFunction63 ( );																			// 0x004CAC30 (0xFC)
	virtual void VirtualFunction64 ( );																			// 0x004B4E80 (0x100)
	virtual void VirtualFunction65 ( );																			// 0x00482120 (0x104)
	virtual void ProcessEvent ( class UFunction* pFunction, void* pParms, void* pResult = NULL );				// 0x0046FA50 (0x108)
};

UClass* UObject::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1 ];

		return pClassPointer;
	};

};

UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 6 ];

		return pClassPointer;
	};

};

UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x00BC (0x00FC - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x0078 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             SuppressPublic;                                   		// 0x00C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x00CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x00D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x00E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x00F0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 5 ];

		return pClassPointer;
	};

};

UClass* USystem::pClassPointer = NULL;

// Class Core.Subscription
// 0x0010 (0x004C - 0x003C)
class USubscription : public UObject
{
public:
	struct FScriptDelegate                             __SubscriberCallback__Delegate;                   		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38 ];

		return pClassPointer;
	};

	void __Subscription__TriggerAll ( class USubscription* S );
	class USubscription* GetNone ( );
	void TriggerAll ( TArray< class USubscription* >* Subscriptions );
	class USubscription* Create ( struct FScriptDelegate InCallback );
	void eventDispose ( );
	void TriggerCallback ( );
	void SetCallback ( struct FScriptDelegate InCallback );
	void SubscriberCallback ( );
};

UClass* USubscription::pClassPointer = NULL;

// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x84 ];                            		// 0x003C (0x0084) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40 ];

		return pClassPointer;
	};

};

UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42 ];

		return pClassPointer;
	};

};

UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44 ];

		return pClassPointer;
	};

};

UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.ObjectProvider
// 0x0080 (0x00BC - 0x003C)
class UObjectProvider : public UObject
{
public:
	struct FPointer                                    VfTable_FObjectDestructionSubscriber;             		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< class UObject* >                           Objects;                                          		// 0x0040 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FObjectProviderSubscription >       SubscribedToAdds;                                 		// 0x004C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FObjectProviderSubscription >       SubscribedToRemoves;                              		// 0x0058 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FObjectProviderSubscription >       SubscribedToLists;                                		// 0x0064 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FArray_Mirror                               Injections;                                       		// 0x0070 (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FObjectProviderPendingCallback >    PendingCallbacks;                                 		// 0x007C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bNeedsCleanup : 1;                                		// 0x0088 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )
	struct FScriptDelegate                             __ObjectSubscriptionCallback__Delegate;           		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ObjectListSubscriptionCallback__Delegate;       		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __ObjectChangeCallback__Delegate;                 		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46 ];

		return pClassPointer;
	};

	void SetSingleton ( class UClass* ObjClass, class UObject* Replacement );
	void AddAndRemoveObjects ( TArray< class UObject* >* AddObjects, TArray< class UObject* >* RemoveObjects );
	void RemoveObjects ( TArray< class UObject* >* InObjects );
	void RemoveObject ( class UObject* Obj );
	void AddObjects ( TArray< class UObject* >* InObjects );
	void AddObject ( class UObject* Obj );
	class UObject* GetOrCreate ( class UClass* ObjClass );
	class UObject* Get ( class UClass* ObjClass );
	void AllObjects ( class UClass* BaseClass, class UClass* InterfaceClass, class UObject** Obj );
	void Inject ( class UObject* Subscriber );
	void UnsubscribeAll ( class UObject* Subscription );
	void Unsubscribe ( struct FScriptDelegate Callback );
	void SubscribeList ( class UClass* BaseClass, struct FScriptDelegate Callback );
	void Subscribe ( class UClass* BaseClass, struct FScriptDelegate OnAdd, struct FScriptDelegate OnRemove );
	void ObjectChangeCallback ( );
	void ObjectListSubscriptionCallback ( class UObjectProvider* Provider );
	void ObjectSubscriptionCallback ( class UObject* Obj );
};

UClass* UObjectProvider::pClassPointer = NULL;

// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48 ];

		return pClassPointer;
	};

};

UClass* UMetaData::pClassPointer = NULL;

// Class Core.Linker
// 0x0138 (0x0174 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x138 ];                           		// 0x003C (0x0138) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51 ];

		return pClassPointer;
	};

};

UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x00A8 (0x021C - 0x0174)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0xA8 ];                            		// 0x0174 (0x00A8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50 ];

		return pClassPointer;
	};

};

UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x05C8 (0x073C - 0x0174)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x5C8 ];                           		// 0x0174 (0x05C8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54 ];

		return pClassPointer;
	};

};

UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56 ];

		return pClassPointer;
	};

};

UClass* UInterface::pClassPointer = NULL;

// Class Core.FileSystem
// 0x0000 (0x003C - 0x003C)
class UFileSystem : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58 ];

		return pClassPointer;
	};

	int CrcString ( struct FString* Str );
	int CrcBytes ( TArray< unsigned char >* Bytes );
	bool DeleteDirectoryTree ( struct FString Path );
	bool DeleteFile ( struct FString Path );
	bool AppendStringToFile ( struct FString Path, struct FString Text );
	bool SaveStringToFile ( struct FString Path, struct FString Text );
	bool SaveBytesToFile ( struct FString Path, TArray< unsigned char >* Bytes );
	bool LoadFileToBytes ( struct FString Path, TArray< unsigned char >* OutBytes );
	bool LoadFileToString ( struct FString Path, struct FString* OutText );
	struct FString GetFileExtensionWithoutDot ( struct FString Path );
	struct FString GetFileExtension ( struct FString Path );
	struct FString GetFilePathWithoutExtension ( struct FString Path );
	struct FString GetFileNameWithoutExtension ( struct FString Path );
	struct FString GetFilename ( struct FString Path );
	void FindFiles ( struct FString Path, TArray< struct FString >* OutFilenames );
};

UClass* UFileSystem::pClassPointer = NULL;

// Class Core.Field
// 0x000C (0x0048 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62 ];

		return pClassPointer;
	};

};

UClass* UField::pClassPointer = NULL;

// Class Core.Struct
// 0x0044 (0x008C - 0x0048)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                                    // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      SuperField;                                              // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Children;                                                // NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      PropertySize;                                            // NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData01[ 0x30 ];                                   // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61 ];

		return pClassPointer;
	};

};

UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x001C (0x00A8 - 0x008C)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x008C (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60 ];

		return pClassPointer;
	};

};

UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.Function
// 0x0020 (0x00AC - 0x008C)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                            // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     iNative;                                                  // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     RepOffset;                                                // NOT AUTO-GENERATED PROPERTY 
	struct FName                                       FriendlyName;                                             // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     NumParms;                                                 // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     ParmsSize;                                                // NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ReturnValueOffset;                                        // NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData00[ 0x4 ];                                     // NOT AUTO-GENERATED PROPERTY 
	void*                                              Func;                                                     // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 66 ];

		return pClassPointer;
	};

};

UClass* UFunction::pClassPointer = NULL;

// Class Core.Property
// 0x003C (0x0084 - 0x0048)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0048 (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69 ];

		return pClassPointer;
	};

};

UClass* UProperty::pClassPointer = NULL;

// Class Core.StructProperty
// 0x0004 (0x0088 - 0x0084)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68 ];

		return pClassPointer;
	};

};

UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x0084 - 0x0084)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72 ];

		return pClassPointer;
	};

};

UClass* UStrProperty::pClassPointer = NULL;

// Class Core.QWordProperty
// 0x0000 (0x0084 - 0x0084)
class UQWordProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74 ];

		return pClassPointer;
	};

};

UClass* UQWordProperty::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x000C (0x0090 - 0x0084)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0084 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77 ];

		return pClassPointer;
	};

};

UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x0090 - 0x0090)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76 ];

		return pClassPointer;
	};

};

UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0004 (0x0094 - 0x0090)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0090 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80 ];

		return pClassPointer;
	};

};

UClass* UClassProperty::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x0084 - 0x0084)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82 ];

		return pClassPointer;
	};

};

UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0008 (0x008C - 0x0084)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0084 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84 ];

		return pClassPointer;
	};

};

UClass* UMapProperty::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x0084 - 0x0084)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86 ];

		return pClassPointer;
	};

};

UClass* UIntProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0004 (0x0088 - 0x0084)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88 ];

		return pClassPointer;
	};

};

UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x0084 - 0x0084)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90 ];

		return pClassPointer;
	};

};

UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0008 (0x008C - 0x0084)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0084 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92 ];

		return pClassPointer;
	};

};

UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0004 (0x0088 - 0x0084)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 94 ];

		return pClassPointer;
	};

};

UClass* UByteProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0004 (0x0088 - 0x0084)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96 ];

		return pClassPointer;
	};

};

UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0004 (0x0088 - 0x0084)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98 ];

		return pClassPointer;
	};

};

UClass* UArrayProperty::pClassPointer = NULL;

// Class Core.Enum
// 0x000C (0x0054 - 0x0048)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0048 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 100 ];

		return pClassPointer;
	};

};

UClass* UEnum::pClassPointer = NULL;

// Class Core.Const
// 0x000C (0x0054 - 0x0048)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0048 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 102 ];

		return pClassPointer;
	};

};

UClass* UConst::pClassPointer = NULL;

// Class Core.FeatureSystem
// 0x020C (0x0248 - 0x003C)
class UFeatureSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET
	unsigned long                                      Matchmaking : 1;                                  		// 0x0048 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      PrivateMatch : 1;                                 		// 0x004C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      SplitscreenMatch : 1;                             		// 0x0050 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      SplitscreenJoin : 1;                              		// 0x0054 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      SeasonMode : 1;                                   		// 0x0058 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Tutorial : 1;                                     		// 0x005C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Garage : 1;                                       		// 0x0060 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Options : 1;                                      		// 0x0064 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      ReplaySaves : 1;                                  		// 0x0068 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      MainMenu : 1;                                     		// 0x006C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      MidgameMenu : 1;                                  		// 0x0070 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET
	unsigned long                                      Party : 1;                                        		// 0x0078 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      PsyNetParty : 1;                                  		// 0x007C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Achievements : 1;                                 		// 0x0080 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET
	unsigned long                                      Stats : 1;                                        		// 0x0088 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Leaderboards : 1;                                 		// 0x008C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      XP : 1;                                           		// 0x0090 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Chat : 1;                                         		// 0x0094 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      LicenseAgreement : 1;                             		// 0x0098 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      FullCredits : 1;                                  		// 0x009C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00A0 (0x0004) MISSED OFFSET
	unsigned long                                      TrainingDifficulties : 1;                         		// 0x00A4 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Ads : 1;                                          		// 0x00A8 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Microtransactions : 1;                            		// 0x00AC (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      ItemDrops : 1;                                    		// 0x00B0 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Spectator : 1;                                    		// 0x00B4 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      CrossPlatformPrivateMatch : 1;                    		// 0x00B8 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Lan : 1;                                          		// 0x00BC (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00C0 (0x0004) MISSED OFFSET
	unsigned long                                      BuyDLC : 1;                                       		// 0x00C4 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00C8 (0x0004) MISSED OFFSET
	unsigned long                                      PlayerReporting : 1;                              		// 0x00CC (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      PremiumGarage : 1;                                		// 0x00D0 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      PodiumSpotlight : 1;                              		// 0x00D4 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x00D8 (0x0004) MISSED OFFSET
	unsigned long                                      CustomTeamNames : 1;                              		// 0x00DC (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      CustomTeamColors : 1;                             		// 0x00E0 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      PlayerTrading : 1;                                		// 0x00E4 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      GaragePresets : 1;                                		// 0x00E8 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      PartyChat : 1;                                    		// 0x00EC (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData07[ 0x10 ];                            		// 0x00F0 (0x0010) MISSED OFFSET
	unsigned long                                      OnlineServices : 1;                               		// 0x0100 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      RemoveCrossPlatformProducts : 1;                  		// 0x0104 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Mutators : 1;                                     		// 0x0108 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      ProductValidation : 1;                            		// 0x010C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      RumbleMode : 1;                                   		// 0x0110 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      PlayerTitle : 1;                                  		// 0x0114 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      DynamicThumbnails : 1;                            		// 0x0118 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      MapPrefs : 1;                                     		// 0x011C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Workshop : 1;                                     		// 0x0120 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x0124 (0x0004) MISSED OFFSET
	unsigned long                                      Avatars : 1;                                      		// 0x0128 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x012C (0x0004) MISSED OFFSET
	unsigned long                                      Tournaments : 1;                                  		// 0x0130 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData10[ 0x24 ];                            		// 0x0134 (0x0024) MISSED OFFSET
	unsigned long                                      Inventory : 1;                                    		// 0x0158 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      TrainingEditor : 1;                               		// 0x015C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      RedeemCode : 1;                                   		// 0x0160 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      VoiceChat : 1;                                    		// 0x0164 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      EditBindings : 1;                                 		// 0x0168 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      UIScale : 1;                                      		// 0x016C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      SplitScreen : 1;                                  		// 0x0170 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Crossplay : 1;                                    		// 0x0174 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      CompetitiveDivisions : 1;                         		// 0x0178 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      KeySelection : 1;                                 		// 0x017C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData11[ 0x10 ];                            		// 0x0180 (0x0010) MISSED OFFSET
	unsigned long                                      FreePlayMapSelection : 1;                         		// 0x0190 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData12[ 0x8 ];                             		// 0x0194 (0x0008) MISSED OFFSET
	unsigned long                                      MatchAdmin : 1;                                   		// 0x019C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      FilterContent : 1;                                		// 0x01A0 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x01A4 (0x0004) MISSED OFFSET
	unsigned long                                      GarageSuperSonicTrail : 1;                        		// 0x01A8 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      GarageBallExplosions : 1;                         		// 0x01AC (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      GarageEngineAudio : 1;                            		// 0x01B0 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x01B4 (0x0004) MISSED OFFSET
	unsigned long                                      EsportsCamera : 1;                                		// 0x01B8 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData15[ 0x8 ];                             		// 0x01BC (0x0008) MISSED OFFSET
	unsigned long                                      ClientXP : 1;                                     		// 0x01C4 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData16[ 0xC ];                             		// 0x01C8 (0x000C) MISSED OFFSET
	unsigned long                                      ClanforgeReservation : 1;                         		// 0x01D4 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x01D8 (0x0004) MISSED OFFSET
	unsigned long                                      UserSettingObserver : 1;                          		// 0x01DC (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      Metrics : 1;                                      		// 0x01E0 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      MusicPlaylistSelection : 1;                       		// 0x01E4 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData18[ 0x8 ];                             		// 0x01E8 (0x0008) MISSED OFFSET
	unsigned long                                      SpecialEvents : 1;                                		// 0x01F0 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData19[ 0x14 ];                            		// 0x01F4 (0x0014) MISSED OFFSET
	unsigned long                                      PlayerBannerCustomization : 1;                    		// 0x0208 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      SecureUDP : 1;                                    		// 0x020C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      PsyNet : 1;                                       		// 0x0210 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      OnlinePlayerStorage : 1;                          		// 0x0214 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      OnlineSaveData : 1;                               		// 0x0218 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      LocalSaveData : 1;                                		// 0x021C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData20[ 0x8 ];                             		// 0x0220 (0x0008) MISSED OFFSET
	unsigned long                                      CrowdV2 : 1;                                      		// 0x0228 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      ChatBan : 1;                                      		// 0x022C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      BacktraceCrashDumps : 1;                          		// 0x0230 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData21[ 0xC ];                             		// 0x0234 (0x000C) MISSED OFFSET
	unsigned long                                      MonsterCarV2 : 1;                                 		// 0x0240 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      SpotifyButton : 1;                                		// 0x0244 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104 ];

		return pClassPointer;
	};

};

UClass* UFeatureSystem::pClassPointer = NULL;

// Class Core.Factory
// 0x0040 (0x007C - 0x003C)
class UFactory : public UObject
{
public:
	struct FString                                     Category;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      SupportedClass;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	class UClass*                                      ContextClass;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCreateNew : 1;                                   		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEditAfterNew : 1;                                		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEditorImport : 1;                                		// 0x0068 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bText : 1;                                        		// 0x0068 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAssetNameMatchesPackageName : 1;                 		// 0x0068 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                AutoPriority;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ValidGameNames;                                   		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 188 ];

		return pClassPointer;
	};

};

UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x007C - 0x007C)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 187 ];

		return pClassPointer;
	};

};

UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 191 ];

		return pClassPointer;
	};

};

UClass* UExporter::pClassPointer = NULL;

// Class Core.ErrorType
// 0x000C (0x0048 - 0x003C)
class UErrorType : public UObject
{
public:
	struct FString                                     LocalizationKey;                                  		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 197 ];

		return pClassPointer;
	};

	class UError* CreateError ( struct FString InErrorMessage, int InErrorCode );
	struct FString GetLocalizedMessage ( );
};

UClass* UErrorType::pClassPointer = NULL;

// Class Core.ErrorList
// 0x0018 (0x0054 - 0x003C)
class UErrorList : public UObject
{
public:
	struct FString                                     LocalizationPackage;                              		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     LocalizationSection;                              		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 199 ];

		return pClassPointer;
	};

	class UErrorType* GetErrorType ( struct FName Error );
};

UClass* UErrorList::pClassPointer = NULL;

// Class Core.Error
// 0x0014 (0x0050 - 0x003C)
class UError : public UObject
{
public:
	class UErrorType*                                  Type;                                             		// 0x003C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     Message;                                          		// 0x0040 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	int                                                Code;                                             		// 0x004C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 201 ];

		return pClassPointer;
	};

	struct FString GetDebugMessage ( );
	struct FString GetLocalizedMessage ( );
};

UClass* UError::pClassPointer = NULL;

// Class Core.DebugDrawer
// 0x0044 (0x0080 - 0x003C)
class UDebugDrawer : public UObject
{
public:
	struct FColor                                      DefaultTextColor;                                 		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSilent : 1;                                      		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPrintActorsInline : 1;                           		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                Indentation;                                      		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     IndentationString;                                		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UObject* >                           PrintedObjects;                                   		// 0x0054 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UObject* >                           QueuedObjects;                                    		// 0x0060 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                PrintObjectCount;                                 		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __LogFunc__Delegate;                              		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 203 ];

		return pClassPointer;
	};

	void Reset ( );
	void PrintText ( struct FString Text, struct FColor InColor );
	void eventPrintArrayProperty ( struct FString PropertyName, int Index, struct FString Value );
	void eventPrintProperty ( struct FString PropertyName, struct FString Value );
	void eventEndSection ( );
	void eventStartSection ( );
	void eventPrintObject ( struct FString Title, class UObject* ForObj );
	void eventPrintSeperater ( );
	void eventDebugArrayObject ( struct FString Title, int Index, class UObject* ForObj );
	void eventDebugObject ( struct FString Title, class UObject* ForObj );
	bool ShouldDisplayDebug ( struct FName Category );
	void LogFunc ( struct FString Str );
};

UClass* UDebugDrawer::pClassPointer = NULL;

// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 206 ];

		return pClassPointer;
	};

};

UClass* UComponent::pClassPointer = NULL;

// Class Core.StringMap
// 0x003C (0x0084 - 0x0048)
class UStringMap : public UComponent
{
public:
	struct FMap_Mirror                                 Map;                                              		// 0x0048 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 205 ];

		return pClassPointer;
	};

	void Append ( class UStringMap* Other );
	bool Contains ( struct FString Key );
	void Remove ( struct FString Key );
	bool TryGet ( struct FString Key, struct FString* OutValue );
	struct FString Get ( struct FString Key );
	void Set ( struct FString Key, struct FString Value );
};

UClass* UStringMap::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209 ];

		return pClassPointer;
	};

	struct FVector GetVectorValue ( float F, int LastExtreme );
};

UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211 ];

		return pClassPointer;
	};

	float GetFloatValue ( float F );
};

UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x0048 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0054 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0060 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.AsyncTask
// 0x0048 (0x0084 - 0x003C)
class UAsyncTask : public UObject
{
public:
	unsigned long                                      bComplete : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisposed : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	class UError*                                      Error;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __EventAsyncTaskSuccess__Delegate;                		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0048 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAsyncTaskFail__Delegate;                   		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventAsyncTaskComplete__Delegate;               		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventDisposed__Delegate;                        		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218 ];

		return pClassPointer;
	};

	void QueCallbacks ( );
	class UAsyncTask* CreateError ( class UError* InError );
	class UAsyncTask* CreateSuccess ( );
	class UAsyncTask* Create ( );
	class UAsyncTask* DependOn ( class UAsyncTask* Other );
	class UAsyncTask* eventNotifyOnDispose ( struct FScriptDelegate Callback );
	void eventClearCallbacks ( );
	void eventDispose ( );
	void SetComplete ( class UError* InError );
	void eventSetError ( class UError* InError );
	class UAsyncTask* eventNotifyOnComplete ( struct FScriptDelegate Callback );
	class UAsyncTask* eventNotifyOnFail ( struct FScriptDelegate Callback );
	class UAsyncTask* eventNotifyOnSuccess ( struct FScriptDelegate Callback );
	void EventDisposed ( );
	void EventAsyncTaskComplete ( class UError* TaskError );
	void EventAsyncTaskFail ( class UError* TaskError );
	void EventAsyncTaskSuccess ( );
};

UClass* UAsyncTask::pClassPointer = NULL;

// Class Core.AsyncResult
// 0x0000 (0x0084 - 0x0084)
class UAsyncResult : public UAsyncTask
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217 ];

		return pClassPointer;
	};

};

UClass* UAsyncResult::pClassPointer = NULL;

// Class Core.State
// 0x0048 (0x00D4 - 0x008C)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x008C (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221 ];

		return pClassPointer;
	};

};

UClass* UState::pClassPointer = NULL;

// Class Core.Package
// 0x00B4 (0x00F0 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xB4 ];                            		// 0x003C (0x00B4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223 ];

		return pClassPointer;
	};

};

UClass* UPackage::pClassPointer = NULL;

// Class Core.Class
// 0x0178 (0x024C - 0x00D4)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0x178 ];                           		// 0x00D4 (0x0178) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 225 ];

		return pClassPointer;
	};

};

UClass* UClass::pClassPointer = NULL;

// Class Core._LoggingDoc
// 0x0000 (0x003C - 0x003C)
class U_LoggingDoc : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 5899 ];

		return pClassPointer;
	};

	void TestSpecialLogging ( );
};

UClass* U_LoggingDoc::pClassPointer = NULL;

// Class Core.GameVersion
// 0x0000 (0x003C - 0x003C)
class UGameVersion : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 6051 ];

		return pClassPointer;
	};

};

UClass* UGameVersion::pClassPointer = NULL;

// Class Core.IDisposable
// 0x0000 (0x003C - 0x003C)
class UIDisposable : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 6169 ];

		return pClassPointer;
	};

	void eventDispose ( );
};

UClass* UIDisposable::pClassPointer = NULL;

// Class Core.MulticastDelegateSystem
// 0x000C (0x0048 - 0x003C)
class UMulticastDelegateSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103899 ];

		return pClassPointer;
	};

};

UClass* UMulticastDelegateSystem::pClassPointer = NULL;

// Class Core.PropertyChangeDispatcher
// 0x000C (0x0048 - 0x003C)
class UPropertyChangeDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107392 ];

		return pClassPointer;
	};

};

UClass* UPropertyChangeDispatcher::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif