/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_structs.h
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

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x0018
struct FSoundThemeBinding
{
	struct FName                                       ThemeName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UUISoundTheme*                               Theme;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ThemeClassName;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x0020
struct FASValue
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              N;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                I;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     S;                                                		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture*                                    T;                                                		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x000C
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WidgetClass;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0010
struct FExternalTexture
{
	struct FString                                     Resource;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture*                                    Texture;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rotation;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              XRotation;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              YRotation;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              XScale;                                           		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              YScale;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZScale;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Alpha;                                            		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Visible : 1;                                      		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      hasX : 1;                                         		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      hasY : 1;                                         		// 0x0028 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      hasZ : 1;                                         		// 0x0028 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      hasRotation : 1;                                  		// 0x0028 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      hasXRotation : 1;                                 		// 0x0028 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      hasYRotation : 1;                                 		// 0x0028 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      hasXScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      hasYScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      hasZScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      hasAlpha : 1;                                     		// 0x0028 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      hasVisible : 1;                                   		// 0x0028 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Add;                                              		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x0028
struct FEventData
{
	class UGFxObject*                                  _this;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Type;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Data;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                mouseIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Button;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                lastIndex;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x000C
struct FGCReference
{
	class UObject*                                     m_object;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_count;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_statid;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxEngine.LoadingMovieMapInfo
// 0x0070
struct FLoadingMovieMapInfo
{
	unsigned char                                      InputType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     MapBaseName;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlaylistName;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapVariantName;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaximumPlayerCounts;                              		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ProtipMessage;                                    		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Language;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BuildEdition;                                     		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ProtipTitle;                                      		// 0x0058 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      WeatherVariant;                                   		// 0x0064 (0x0001) [0x0000000000000000]              
	class UTexture2D*                                  LargeMapImage;                                    		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSetBackgroundVisible : 1;                        		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisplayGenericBackground : 1;                    		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif