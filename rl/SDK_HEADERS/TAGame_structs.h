/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TAGame_structs.h
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

// ScriptStruct TAGame._AITypes_TA.BTDynamicLinkData
// 0x000C
struct FBTDynamicLinkData
{
	struct FName                                       LinkName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBTNode*                                     Node;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._AITypes_TA.AITraits
// 0x0007
struct FAITraits
{
	class UAIRole_TA*                                  Role;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Aggression;                                       		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Hostility;                                        		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Airplay;                                          		// 0x0006 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._AITypes_TA.NamedEvent
// 0x0010
struct FNamedEvent
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      Sender;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RadiusSq;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._AITypes_TA.BTProxyData
// 0x0040
struct FBTProxyData
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Gravity;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              Bounce;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	class AVehicle_TA*                                 Vehicle;                                          		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._AITypes_TA.AICachedGoalInfo
// 0x0010
struct FAICachedGoalInfo
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     FieldSize;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.SimilarLogoGroup
// 0x000C
struct FSimilarLogoGroup
{
	TArray< class UProductAsset_Logo_TA* >             SimilarLogoColorAssets;                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.GameModeData
// 0x0010
struct FGameModeData
{
	int                                                GameMode;                                         		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     LocalizedName;                                    		// 0x0004 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.PlayerChatMessage
// 0x0060
struct FPlayerChatMessage
{
	float                                              MessageTimeStamp;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0048) [0x0000000000000000]              
	unsigned char                                      ChatChannel;                                      		// 0x004C (0x0001) [0x0000000000000000]              
	int                                                Team;                                             		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.ReportPlayerData
// 0x0054
struct FReportPlayerData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.ReportedPlayerInfo
// 0x00B8
struct FReportedPlayerInfo
{
	struct FReportPlayerData                           Reporter;                                         		// 0x0000 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FReportPlayerData                           Offender;                                         		// 0x0054 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Reason;                                           		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ReportTimeStamp;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.AssetLoadResult
// 0x0010
struct FAssetLoadResult
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AssetName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	class UProductAsset_TA*                            Asset;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutData
// 0x000C
struct FClientLoadoutData
{
	TArray< int >                                      Products;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.LoadoutTeamColor
// 0x0008
struct FLoadoutTeamColor
{
	unsigned char                                      Team;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TeamColorID;                                      		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      CustomColorID;                                    		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned long                                      bSet : 1;                                         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.LoadoutTeamPaint
// 0x0008(0x0010 - 0x0008)
struct FLoadoutTeamPaint : FLoadoutTeamColor
{
	int                                                TeamFinishID;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CustomFinishID;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.LoadoutData
// 0x0028(0x0034 - 0x000C)
struct FLoadoutData : FClientLoadoutData
{
	struct FLoadoutTeamPaint                           TeamPaint;                                        		// 0x000C (0x0010) [0x0000000000000000]              
	struct FName                                       Title;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                TeamIndex;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0028 (0x000C) UNKNOWN PROPERTY: ArrayProperty TAGame._Types_TA.LoadoutData.OnlineProducts
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineProduct
// 0x000C
struct FClientLoadoutOnlineProduct
{
	TArray< class UProductAttribute_TA* >              Attributes;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineData
// 0x000C
struct FClientLoadoutOnlineData
{
	TArray< struct FClientLoadoutOnlineProduct >       Products;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.InputRate
// 0x0008
struct FInputRate
{
	float                                              RiseRate;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FallRate;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.CycleButtonItem
// 0x0018
struct FCycleButtonItem
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.GFxTeamColor
// 0x0010
struct FGFxTeamColor
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                ColorID;                                          		// 0x0004 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                X;                                                		// 0x0008 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Y;                                                		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.MapGroup
// 0x000C
struct FMapGroup
{
	TArray< class UMapData_TA* >                       Maps;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.MapImageLoadResult
// 0x000C
struct FMapImageLoadResult
{
	class UTexture2D*                                  Image;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       MapName;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.ProductThumbnailResult
// 0x000C
struct FProductThumbnailResult
{
	class UProductAsset_TA*                            Asset;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class UProductThumbnail_TA*                        Thumbnail;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.RandomWeight
// 0x000C
struct FRandomWeight
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              OrigWeight;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.WeldingInfo
// 0x0020
struct FWeldingInfo
{
	class ARBActor_TA*                                 RBActor;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Offset;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              Mass;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.VehicleInputs
// 0x0020
struct FVehicleInputs
{
	float                                              Throttle;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Steer;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pitch;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Yaw;                                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Roll;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DodgeForward;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DodgeStrafe;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bJump : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bActivateBoost : 1;                               		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bHoldingBoost : 1;                                		// 0x001C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bHandbrake : 1;                                   		// 0x001C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bJumped : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct TAGame._Types_TA.ProductAttributesArray
// 0x000C
struct FProductAttributesArray
{
	TArray< class UProductAttribute_TA* >              Attributes;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.LoadoutAttributesArray
// 0x000C
struct FLoadoutAttributesArray
{
	TArray< struct FProductAttributesArray >           Products;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.CurrencyDrop
// 0x0008
struct FCurrencyDrop
{
	int                                                CurrencyID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.RPCIntroCar
// 0x0028
struct FRPCIntroCar
{
	int                                                TemplateIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TemplateName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TemplateDescription;                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ProductsList;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.IntroCarInfo
// 0x001C
struct FIntroCarInfo
{
	int                                                TemplateIndex;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TemplateName;                                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     TemplateDescription;                              		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.EditorIntroCar
// 0x0028
struct FEditorIntroCar
{
	struct FIntroCarInfo                               Info;                                             		// 0x0000 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UProduct_TA* >                       ProductList;                                      		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.XPUnlockableFeature
// 0x0014
struct FXPUnlockableFeature
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bUnlocked : 1;                                    		// 0x000C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	int                                                XPLevelUnlocked;                                  		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.GarageComplexRow
// 0x0008
struct FGarageComplexRow
{
	int                                                RowID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.GarageComplexLoadout
// 0x001C
struct FGarageComplexLoadout
{
	struct FLoadoutTeamPaint                           TeamPaint;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0010 (0x000C) UNKNOWN PROPERTY: ArrayProperty TAGame._Types_TA.GarageComplexLoadout.OnlineProducts
};

// ScriptStruct TAGame._Types_TA.GarageComplexSlot
// 0x0044
struct FGarageComplexSlot
{
	int                                                SlotID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUnlocked : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TeamIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FGarageComplexLoadout                       SlotLoadouts[ 0x2 ];                              		// 0x000C (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.AppliedBreakoutDamage
// 0x0018
struct FAppliedBreakoutDamage
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                DamageIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TotalDamage;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.PaintAttributeParameter
// 0x0010
struct FPaintAttributeParameter
{
	unsigned char                                      PaintVariant;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.ProductLevelData
// 0x0010
struct FProductLevelData
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000040000001]              ( CPF_Edit | CPF_EditInlineNotify )
	int                                                SoftCurrency;                                     		// 0x0004 (0x0004) [0x0000000040000001]              ( CPF_Edit | CPF_EditInlineNotify )
	int                                                HardCurrency;                                     		// 0x0008 (0x0004) [0x0000000040000001]              ( CPF_Edit | CPF_EditInlineNotify )
	float                                              UnlockWeight;                                     		// 0x000C (0x0004) [0x0000000040000001]              ( CPF_Edit | CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.BallPredictionInfo
// 0x003C
struct FBallPredictionInfo
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ArchTopTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     ArchTop;                                          		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     ArchTopVelocity;                                  		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned long                                      bHitWall : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHitGround : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame._Types_TA.AimAssistSettings
// 0x0034
struct FAimAssistSettings
{
	unsigned long                                      bOverride : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ControlAlpha;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MinSteerDot;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              MaxSteerDot;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              MinVelocity;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              MaxVelocity;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              MinPlayerInputDrive;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              MinDistanceToBallXY;                              		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              MaxDistanceToBallXY;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              MinDistanceToBallZ;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              MaxDistanceToBallZ;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              MinDotAngleFromBall;                              		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              MaxDotAngleFromBall;                              		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.OnlineProductAttribute
// 0x0014
struct FOnlineProductAttribute
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.OnlineProductData
// 0x0020
struct FOnlineProductData
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0004 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.OnlineProductData.InstanceID
	int                                                SeriesID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FOnlineProductAttribute >           Attributes;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TradeHold;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.OnlinePlayerMatchData
// 0x0064
struct FOnlinePlayerMatchData
{
	class APRI_TA*                                     PRI;                                              		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0048) [0x0000000000000000]              
	int                                                GameSecondsPlayed;                                		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                GameScore;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< struct FOnlineProductData >                Loadout;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCompletedMatch : 1;                              		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.ActorHistory
// 0x0018
struct U_Types_TA_FActorHistory
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FString                                     SerializedHistory;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.SortedProductData
// 0x0020
struct FSortedProductData
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.SortedProductData.Id
	unsigned long                                      bUnlocked : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsPack : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SortPriority;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.EditorRoundData
// 0x0010
struct FEditorRoundData
{
	float                                              TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	TArray< struct FString >                           SerializedArchetypes;                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.LoadObjectResult
// 0x0009
struct FLoadObjectResult
{
	class UObject*                                     ObjectData;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UError*                                      Error;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Code;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.SaveObjectResult
// 0x0009
struct FSaveObjectResult
{
	class UObject*                                     ObjectData;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UError*                                      Error;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Code;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.MaterialTextureParam
// 0x000C
struct FMaterialTextureParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.MaterialVectorParam
// 0x0018
struct FMaterialVectorParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.MaterialScalarParam
// 0x000C
struct FMaterialScalarParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.MaterialParams
// 0x0024
struct FMaterialParams
{
	TArray< struct FMaterialTextureParam >             TextureParameters;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMaterialVectorParam >              VectorParameters;                                 		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMaterialScalarParam >              ScalarParameters;                                 		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.ProductSkinOverride
// 0x000C
struct FProductSkinOverride
{
	struct FName                                       SkinName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.UniqueNetIdGroup4
// 0x0120
struct FUniqueNetIdGroup4
{
	struct FUniqueNetId                                PlayerIDs[ 0x4 ];                                 		// 0x0000 (0x0120) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.UIProductSlotData
// 0x000C
struct FUIProductSlotData
{
	class UProductSlot_TA*                             Slot;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  Texture;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkSoundCue*                                 Sound;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.SimpleSpringSettings
// 0x0050
struct FSimpleSpringSettings
{
	struct FVector                                     Strength;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Damping;                                          		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MaxDisplacement;                                  		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseMinDisplacement : 1;                          		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     MinDisplacement;                                  		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Mass;                                             		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MassOffset;                                       		// 0x0038 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeed;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDebug : 1;                                       		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              DrawDebugOffset;                                  		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.WheelContactData
// 0x0044
struct FWheelContactData
{
	unsigned long                                      bHasContact : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasContactWithWorldGeometry : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HasContactChangeTime;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class UPrimitiveComponent*                         Component;                                        		// 0x000C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     LatDirection;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     LongDirection;                                    		// 0x0034 (0x000C) [0x0000000000000000]              
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.WheelAttachment
// 0x0018
struct FWheelAttachment
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UAttachmentBehavior_TA* >            Behaviors;                                        		// 0x0004 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	struct FName                                       Socket;                                           		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.ProductAttachment
// 0x0048
struct FProductAttachment
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               SkeletalMesh;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Translation;                                      		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Socket;                                           		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UAntennaComponent_TA*                        Antenna;                                          		// 0x0030 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UAttachmentBehavior_TA* >            Behaviors;                                        		// 0x0034 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	class UPrimitiveComponent*                         Component;                                        		// 0x0040 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AFXActor_X*                                  FXActor;                                          		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.AccumulatedRigidBodyCollision
// 0x0074
struct FAccumulatedRigidBodyCollision
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPrimitiveComponent*                         Component;                                        		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPhysicalMaterial*                           PhysMat;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     OtherVelocity;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     NormalForce;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	struct FVector                                     FrictionForce;                                    		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FVector                                     NormalVelocity;                                   		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FVector                                     FrictionVelocity;                                 		// 0x0060 (0x000C) [0x0000000000000000]              
	int                                                NumCollisions;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                NumContacts;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.StatValue
// 0x0014
struct FStatValue
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Values[ 0x3 ];                                    		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.TAPlayerStat
// 0x0008
struct FTAPlayerStat
{
	class UStatEvent_TA*                               StatEvent;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.BallHitInfo
// 0x00E1
struct FBallHitInfo
{
	class APRI_TA*                                     PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class APRI_TA*                                     AttackerPRI;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       CarName;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                TeamNum;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FReplicatedRBState                          PreHitCarPhysics;                                 		// 0x0014 (0x0038) [0x0000000000000000]              
	struct FReplicatedRBState                          PreHitBallPhysics;                                		// 0x004C (0x0038) [0x0000000000000000]              
	struct FReplicatedRBState                          PostHitBallPhysics;                               		// 0x0084 (0x0038) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x00C4 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x00D0 (0x000C) [0x0000000000000000]              
	unsigned long                                      bDodging : 1;                                     		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWheelsTouching : 1;                              		// 0x00DC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWorldTouching : 1;                               		// 0x00DC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      HitType;                                          		// 0x00E0 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.MessageValue
// 0x0020
struct FMessageValue
{
	struct FString                                     StringValue;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                IntValue;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	class UObject*                                     ObjectValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       NameValue;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                ValueType;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.MessagePacket
// 0x0010
struct FMessagePacket
{
	class UMessage_TA*                                 Message;                                          		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FMessageValue >                     Values;                                           		// 0x0004 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.ClientFrameData
// 0x0028
struct FClientFrameData
{
	struct FVehicleInputs                              VehicleInput;                                     		// 0x0000 (0x0020) [0x0000000000000000]              
	int                                                frame;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.LoadoutProductData
// 0x001C
struct FLoadoutProductData
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0008 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.LoadoutProductData.InstanceID
	TArray< class UProductAttribute_TA* >              Attributes;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.ServerSetLoadoutTeam
// 0x001C
struct FServerSetLoadoutTeam
{
	TArray< struct FLoadoutProductData >               Products;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLoadoutTeamPaint                           TeamPaint;                                        		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.ServerSetLoadoutParams
// 0x0040
struct FServerSetLoadoutParams
{
	struct FName                                       Title;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FServerSetLoadoutTeam                       Loadouts[ 0x2 ];                                  		// 0x0008 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame._Types_TA.LoadoutTeam
// 0x0014
struct FLoadoutTeam
{
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0000 (0x000C) UNKNOWN PROPERTY: ArrayProperty TAGame._Types_TA.LoadoutTeam.Products
	struct FLoadoutTeamColor                           TeamColor;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.RandomRange
// 0x0008
struct FRandomRange
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.SchematicResourceData
// 0x000C
struct FSchematicResourceData
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.SchematicResourceData.InstanceID
	int                                                Resources;                                        		// 0x0008 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.ProductFilter
// 0x008D
struct FProductFilter
{
	TArray< class UOnlineProduct_TA* >                 OnlineProducts;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UProduct_TA* >                       Products;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Label;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Slots;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            Qualities;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            UnlockMethods;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            TradeRestrictions;                                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            ExclusiveAttributes;                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            ProhibitedAttributes;                             		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SeriesIDs;                                        		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PackID;                                           		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      bExcludePacks : 1;                                		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreLicensedCars : 1;                          		// 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< int >                                      Loadout;                                          		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      LogLevel;                                         		// 0x008C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.ThumbnailComponent
// 0x0058
struct FThumbnailComponent
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FMatrix                                     BaseTransform;                                    		// 0x0010 (0x0040) [0x0000000000000000]              
	struct FName                                       Tag;                                              		// 0x0050 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.TurningCircle
// 0x0010
struct FTurningCircle
{
	struct FVector                                     Center;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.SeasonMatch
// 0x001C
struct FSeasonMatch
{
	int                                                Week;                                             		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Team0;                                            		// 0x0004 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Team1;                                            		// 0x0008 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Score0;                                           		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Score1;                                           		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Winner;                                           		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bBye : 1;                                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.SeasonTeam
// 0x0018
struct FSeasonTeam
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FName                                       LogoAsset;                                        		// 0x000C (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                EliminationWeek;                                  		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.SeasonPlayerStat
// 0x0014
struct FSeasonPlayerStat
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     StatName;                                         		// 0x0004 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                StatValue;                                        		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.SeasonPlayer
// 0x0020
struct FSeasonPlayer
{
	int                                                Team;                                             		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Id;                                               		// 0x0010 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bBot : 1;                                         		// 0x001C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.SeasonTeamRank
// 0x001C
struct FSeasonTeamRank
{
	int                                                Team;                                             		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Wins;                                             		// 0x0004 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Losses;                                           		// 0x0008 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                PointsFor;                                        		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                PointsAgainst;                                    		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                PointsDifferential;                               		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                EliminationWeek;                                  		// 0x0018 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.ReplayHeaderLoadResult
// 0x0008
struct FReplayHeaderLoadResult
{
	class UReplay_TA*                                  Header;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UError*                                      Error;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.ProfileAutoCamSettings
// 0x0028
struct FProfileAutoCamSettings
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              MoveSpeed;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              MoveSpeedZ;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              RotateSpeed;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              AerialDistance;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              FocusBlendSpeed;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              AerialPrediction;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseReplayCamera : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFocusOnGoals : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame._Types_TA.ProfileCameraSettings
// 0x001C
struct FProfileCameraSettings
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Stiffness;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              SwivelSpeed;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              TransitionSpeed;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.ProductStat
// 0x0008
struct FProductStat
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.DemolishData
// 0x0020
struct FDemolishData
{
	class ARBActor_TA*                                 Attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class ACar_TA*                                     Victim;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     AttackerVelocity;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     VictimVelocity;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame._Types_TA.UISavedKeyValue
// 0x0014
struct FUISavedKeyValue
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Value;                                            		// 0x0008 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame._Types_TA.PlaylistMapPrefs
// 0x000C(0x0024 - 0x0018)
struct FPlaylistMapPrefs : FMapPrefs
{
	struct FName                                       Playlist;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bOverrideGlobal : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.FPSBucketMetrics
// 0x0008
struct FFPSBucketMetrics
{
	int                                                FPS;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FrameCount;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame._Types_TA.BodyToEngineAudioPair
// 0x0008
struct FBodyToEngineAudioPair
{
	class UProduct_TA*                                 Body;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UProduct_TA*                                 EngineAudio;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.AchievementManager_TA.AchievementInfo
// 0x0004
struct FAchievementInfo
{
	unsigned long                                      bUnlocked : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOnlineUnlockAuthority : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.PRI_TA.ClientLoadoutDatas
// 0x0018
struct FClientLoadoutDatas
{
	struct FClientLoadoutData                          Loadouts[ 0x2 ];                                  		// 0x0000 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.PRI_TA.SkillTierData
// 0x0008
struct FSkillTierData
{
	unsigned char                                      Tier;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bReplicated : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.AdManager_TA.BillboardData
// 0x0010
struct FBillboardData
{
	struct FString                                     MaterialName;                                     		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                ZoneID;                                           		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TAGame.AdManager_TA.BillboardUpdateRequestData
// 0x0018
struct FBillboardUpdateRequestData
{
	int                                                ZoneID;                                           		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaterialIndex;                                    		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MaterialName;                                     		// 0x0008 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0014 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
};

// ScriptStruct TAGame.RPC_AdsGet_TA.AdInfo
// 0x0018
struct FAdInfo
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ZoneID;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0010 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_AdsGet_TA.AdInfo.UTCEndTime
};

// ScriptStruct TAGame.AdManager_TA.CachedAdImageData
// 0x0018
struct FCachedAdImageData
{
	struct FString                                     ImageURL;                                         		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x000C (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.AdManager_TA.CachedAdImageData.CacheEndTime
	class UTexture2DDynamic*                           ImageTexture;                                     		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TAGame.BTLockCollection.TimedLock
// 0x0010
struct FTimedLock
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ReleaseTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLockedOneFrame : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.AIController_TA.CachedProxyData
// 0x004C
struct FCachedProxyData
{
	class UBTProxyType*                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FBTProxyData                                Data;                                             		// 0x0008 (0x0040) [0x0000000000000000]              
	float                                              CacheTime;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.AIController_TA.CachedTargetData
// 0x004C
struct FCachedTargetData
{
	class UBTTarget*                                   Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FBTProxyData                                Data;                                             		// 0x0008 (0x0040) [0x0000000000000000]              
	float                                              CacheTime;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.AIController_TA.SkillRange
// 0x000C
struct FSkillRange
{
	float                                              Easy;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Hard;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TAGame.AIController_TA.CachedObstaclePoly
// 0x0020
struct FCachedObstaclePoly
{
	struct FPointer                                    Poly;                                             		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FPlane                                      Plane;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TAGame.AIController_TA.CachedObstaclesData
// 0x0024
struct FCachedObstaclesData
{
	struct FVector                                     CarLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     CarNavMeshLocation;                               		// 0x000C (0x000C) [0x0000000000000000]              
	TArray< struct FCachedObstaclePoly >               Polys;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.AIManager_TA.CachedNavMeshLocation
// 0x001C
struct FCachedNavMeshLocation
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     NavMeshLocation;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     OldActorLocation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.AssetProfiler_TA.AssetProfile
// 0x0050
struct FAssetProfile
{
	class UProductAsset_TA*                            Asset;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FRenderProfile                              RenderTimeTotal;                                  		// 0x0004 (0x0024) [0x0000000000000000]              
	struct FRenderProfile                              RenderTimePerAsset;                               		// 0x0028 (0x0024) [0x0000000000000000]              
	int                                                AssetCount;                                       		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.RBActor_TA.WorldContactData
// 0x0028
struct FWorldContactData
{
	unsigned long                                      bHasContact : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.RBActor_TA.NetworkSyncSettingsData
// 0x001C
struct FNetworkSyncSettingsData
{
	float                                              LocationFixRate;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AngularFixRate;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDeltaLocation;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinDeltaRotation;                                 		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinDeltaLinearVelocity;                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceReplicationDelay;                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDebug : 1;                                       		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TAGame.Ball_TA.PredictedPosition
// 0x0018
struct FPredictedPosition
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.Ball_TA.ExplosionData
// 0x0010
struct FExplosionData
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.Ball_TA.ExplosionDataExtended
// 0x0014
struct FExplosionDataExtended
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	class APRI_TA*                                     Scorer;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.Ball_TA.GoalPenetrationData
// 0x0020
struct FGoalPenetrationData
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     PlaneLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     PlaneNormal;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              PenetrationDistance;                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.PitchTekDrawingComponent_TA.PitchTekCarBodyContactData
// 0x0010
struct FPitchTekCarBodyContactData
{
	unsigned long                                      bHasContact : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParam
// 0x0008
struct FAnimatedMaterialParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamFloat
// 0x0004(0x000C - 0x0008)
struct FAnimatedMaterialParamFloat : FAnimatedMaterialParam
{
	class UDistributionFloat*                          Value;                                            		// 0x0008 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamVector
// 0x0004(0x000C - 0x0008)
struct FAnimatedMaterialParamVector : FAnimatedMaterialParam
{
	class UDistributionVector*                         Value;                                            		// 0x0008 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct TAGame.BoostMesh_TA.BoostMeshOverride
// 0x0014
struct FBoostMeshOverride
{
	class UActorComponent*                             Mesh;                                             		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AFXActor_X*                                  CarType;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CarTypePath;                                      		// 0x0008 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamColor
// 0x0004(0x0010 - 0x000C)
struct FAnimatedMaterialParamColor : FAnimatedMaterialParamVector
{
	class UDistributionFloat*                          AlphaValue;                                       		// 0x000C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialMesh
// 0x0048
struct FAnimatedMaterialMesh
{
	struct FName                                       MeshAttachmentName;                               		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialIndex;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FBoostMeshOverride >                MeshOverrides;                                    		// 0x0010 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	TArray< struct FAnimatedMaterialParamFloat >       FloatParams;                                      		// 0x001C (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	TArray< struct FAnimatedMaterialParamVector >      VectorParams;                                     		// 0x0028 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	TArray< struct FAnimatedMaterialParamColor >       ColorParams;                                      		// 0x0034 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	class UActorComponent*                             Mesh;                                             		// 0x0040 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              ElapsedTime;                                      		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TAGame.BTComponent.BTStatusLog
// 0x0020
struct FBTStatusLog
{
	class UBTNode*                                     Node;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Depth;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSetMessage : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCondition : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LastEvalTime;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.Camera_TA.ProfileSliderLimits
// 0x000C
struct FProfileSliderLimits
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              interval;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.Camera_TA.SwivelExtent
// 0x000C
struct FSwivelExtent
{
	int                                                PitchMin;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PitchMax;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                YawMax;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.CameraState_Car_TA.InterpVector
// 0x0024
struct FInterpVector
{
	float                                              Rate;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDistance;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.CameraState_BallCam_TA.PlaneSelectData
// 0x000C
struct FPlaneSelectData
{
	float                                              YExtent;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ZExtent;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MaxDistance;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.CameraState_BallCam_TA.AngleSelectData
// 0x0008
struct FAngleSelectData
{
	float                                              MinAngle;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxDistance;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.Vehicle_TA.BallInteractionSettings
// 0x002C
struct FBallInteractionSettings
{
	unsigned long                                      bSkipScriptForces : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FInterpCurveFloat                           PushFactorCurve;                                  		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PushZScale;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PushForwardScale;                                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRelativeSpeed;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DampingAmount;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Restitution;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Friction;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.Vehicle_TA.CarInteractionData
// 0x0008
struct FCarInteractionData
{
	class AVehicle_TA*                                 LastHitCar;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastHitTime;                                      		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TAGame.CarMeshComponent_TA.WheelSkelControlSet
// 0x0010
struct FWheelSkelControlSet
{
	class UWheel_TA*                                   Wheel;                                            		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkelControlSingleBone*                      TranslationControl;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkelControlSingleBone*                      SteerControl;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkelControlSingleBone*                      RollControl;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleWheelSettings
// 0x0008
struct FVehicleWheelSettings
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleAxleSettings
// 0x0028
struct FVehicleAxleSettings
{
	float                                              WheelMeshRadius;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelWidth;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelMeshOffsetSide;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVehicleWheelSettings                       LeftWheel;                                        		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVehicleWheelSettings                       RightWheel;                                       		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelRadius;                                      		// 0x001C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              WheelOffsetForward;                               		// 0x0020 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              WheelOffsetSide;                                  		// 0x0024 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct TAGame.EngineAudioComponent_TA.CarStateData
// 0x0010
struct FCarStateData
{
	float                                              Throttle;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WheelSpeed;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EngineRPM;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EngineLoad;                                       		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState
// 0x002C
struct FEngineAudioNativeState
{
	class UEngineAudioComponent_TA*                    Component;                                        		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UEngineAudioProfile_TA*                      Profile;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class AVehicle_TA*                                 Car;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FCarStateData                               OldCarState;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	struct FCarStateData                               CarState;                                         		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_Clutched
// 0x0004(0x0030 - 0x002C)
struct FEngineAudioNativeState_Clutched : FEngineAudioNativeState
{
	unsigned long                                      bUsingRevLimiter : 1;                             		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_OnGround
// 0x0010(0x003C - 0x002C)
struct FEngineAudioNativeState_OnGround : FEngineAudioNativeState
{
	float                                              GearSwitchTimeRemaining;                          		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              RPMShiftUp;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              RPMShiftDown;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Gear;                                             		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_InAir
// 0x0004(0x0034 - 0x0030)
struct FEngineAudioNativeState_InAir : FEngineAudioNativeState_Clutched
{
	float                                              TimeInAir;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.HandlingPreset_TA.VehicleAxleData
// 0x0014
struct FVehicleAxleData
{
	float                                              WheelRadius;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelWidth;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocalRestPosition;                                		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.PRI_TA.ClientLoadoutOnlineDatas
// 0x001C
struct FClientLoadoutOnlineDatas
{
	struct FClientLoadoutOnlineData                    Loadouts[ 0x2 ];                                  		// 0x0000 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLoadoutSet : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDeprecated : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.Team_TA.ReplicatedLogoData
// 0x0008
struct FReplicatedLogoData
{
	int                                                LogoID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSwapColors : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.CarPreviewAnim_TA.PreviewAnimKeyframe
// 0x0038
struct FPreviewAnimKeyframe
{
	struct FRotator                                    Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Translation;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FViewTargetTransitionParams                 BlendParams;                                      		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     BouncyChassisForce;                               		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAddRotation : 1;                                 		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAddTranslation : 1;                              		// 0x0034 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct TAGame.OnlineGameParty_TA.PartyMemberLoadout
// 0x0094
struct FPartyMemberLoadout
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0048) [0x0000000000000000]              
	struct FLoadoutData                                Loadout;                                          		// 0x0048 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineProductData >                OnlineLoadoutData;                                		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GaragePreviewTeam;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	class ULocalPlayer*                                LocalPlayer;                                      		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineProductStoreSet_TA*                   ProductSet;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.CheatManagerBase_TA.ReplayDuplicationParams
// 0x0008
struct FReplayDuplicationParams
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TAGame.CrowdActor_TA.CrowdNoiseModifierInstance
// 0x0008
struct FCrowdNoiseModifierInstance
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.CrowdActorSettings_TA.StatCrowdNoise
// 0x0008
struct FStatCrowdNoise
{
	class UStatEvent_TA*                               StatEvent;                                        		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UCrowdNoiseModifier_TA*                      Noise;                                            		// 0x0004 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct TAGame.CrowdActorSettings_TA.BallHitCrowdNoise
// 0x0008
struct FBallHitCrowdNoise
{
	float                                              RelativeSpeed;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCrowdNoiseModifier_TA*                      Noise;                                            		// 0x0004 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct TAGame.CrowdActorSettings_TA.CrowdDefenseSettings
// 0x0010
struct FCrowdDefenseSettings
{
	float                                              DefenseZoneTime;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefenseZoneDistance;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkSoundCue*                                 Sound;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReplayDelay;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.DebugHelpMenu_TA.DebugHelpItem
// 0x0024
struct FDebugHelpItem
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.DebugHelpMenu_TA.DebugCategory
// 0x0018
struct FDebugCategory
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDebugHelpItem >                    Items;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.FXActor_Boost_TA.ParticleParameterSet
// 0x0018
struct FParticleParameterSet
{
	TArray< struct FParticleSysParam >                 Parameters;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FParticleSysParam >                 DrivingParameters;                                		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.FXActor_Boost_TA.ParticleBodyParameterSet
// 0x0014
struct FParticleBodyParameterSet
{
	struct FName                                       AttachmentName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FParticleSysParam >                 Parameters;                                       		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.FXActor_Boost_TA.BoostMeshMaterialOverride
// 0x0010
struct FBoostMeshMaterialOverride
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Index;                                            		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.FXActor_Boost_TA.PreviewParticleOverride
// 0x000C
struct FPreviewParticleOverride
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FXAttachmentName;                                 		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.FXActor_Car_TA.WheelFX
// 0x002C
struct FWheelFX
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     Velocity;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned long                                      bHasContact : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class AFXActor_X*                                  SupersonicFXActor;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FVector                                     BoneOffset;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.ProductDatabase_TA.AssetLoadRequest
// 0x0024
struct FAssetLoadRequest
{
	struct FAssetLoadResult                            Result;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned long                                      bLoaded : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             OnLoadedCallback;                                 		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0018 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct TAGame.ProductDatabase_TA.TemporaryProduct
// 0x0014
struct FTemporaryProduct
{
	struct FString                                     AssetPath;                                        		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FName                                       SlotName;                                         		// 0x000C (0x0008) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct TAGame.XPManager_TA.TitleInfo
// 0x000C
struct FTitleInfo
{
	struct FName                                       Title;                                            		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                TitleCap;                                         		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct TAGame.Team_TA.TemporarySpawnSpot
// 0x0028
struct FTemporarySpawnSpot
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.MatchSeries_TA.SeriesTeam
// 0x0010
struct FSeriesTeam
{
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GamesWon;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GlobalLookupTexture_TA.IntVector
// 0x0008
struct FIntVector
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.MapInfo_TA.WorldColorData
// 0x0040
struct FWorldColorData
{
	struct FLinearColor                                EnvironmentA;                                     		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                EnvironmentB;                                     		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                SunLight;                                         		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                WorldLight;                                       		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.GameEvent_TA.PlayerRespawnTime
// 0x0008
struct FPlayerRespawnTime
{
	class AController*                                 Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RemainingTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_Soccar_TA.ReplicatedStingerData
// 0x0005
struct FReplicatedStingerData
{
	class UAkSoundCue*                                 Stinger;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Trigger;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_Soccar_TA.MemberTitleStat
// 0x0014
struct FMemberTitleStat
{
	class UStatCategory_TA*                            Category;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UStatTitle_TA*                               Title;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PointsEarned;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                StatCount;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class APRI_TA*                                     MemberPRI;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.StatFactory_TA.StatEventCollection
// 0x00A4
struct FStatEventCollection
{
	class UStatEvent_TA*                               Win;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Loss;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               TimePlayed;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Shot;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Assist;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Center;                                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Clear;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               PoolShot;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Goal;                                             		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               AerialGoal;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               BicycleGoal;                                      		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               BulletGoal;                                       		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               BackwardsGoal;                                    		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               LongGoal;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               OvertimeGoal;                                     		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               TurtleGoal;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               AerialHit;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               BicycleHit;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               BulletHit;                                        		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               JuggleHit;                                        		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               FirstTouch;                                       		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Save;                                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               EpicSave;                                         		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               FreezeSave;                                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               HatTrick;                                         		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Savior;                                           		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Playmaker;                                        		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               MVP;                                              		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               FastestGoal;                                      		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               SlowestGoal;                                      		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               FurthestGoal;                                     		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               OwnGoal;                                          		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               MostBallTouches;                                  		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               FewestBallTouches;                                		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               MostBoostPickups;                                 		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               FewestBoostPickups;                               		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               CarTouches;                                       		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Demolition;                                       		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               Demolish;                                         		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               BreakoutDamage;                                   		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatEvent_TA*                               BreakoutDamageLarge;                              		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.FpsBucketRecorder_TA.FpsBucketData
// 0x001C
struct FFpsBucketData
{
	int                                                FPS;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotalTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              GameThreadTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RenderThreadTime;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              GPUFrameTime;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              AvgFPS;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfo
// 0x003C
struct FFieldSpawnInfo
{
	struct FVector                                     ExtentLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Extent;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Speed;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned char                                      RotationType;                                     		// 0x0028 (0x0001) [0x0000000000000000]              
	struct FVector                                     MaxFieldExtentScale;                              		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned long                                      bSpawnCannon : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.CarSpawnData
// 0x001C
struct FCarSpawnData
{
	class AController*                                 Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfoPair
// 0x0078
struct FFieldSpawnInfoPair
{
	struct FFieldSpawnInfo                             PlayerSpawn;                                      		// 0x0000 (0x003C) [0x0000000000000000]              
	struct FFieldSpawnInfo                             BallSpawn;                                        		// 0x003C (0x003C) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSetupWave
// 0x0010
struct FFieldSetupWave
{
	TArray< struct FFieldSpawnInfoPair >               SpawnList;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxWaveLoops;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.DifficultyInfo
// 0x0024
struct FDifficultyInfo
{
	TArray< struct FFieldSetupWave >                   FieldSetupList;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TotalGameEventRounds;                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TotalGameEventRoundsToWin;                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              ResetCheckTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ResetCheckTimeAfterBallTouch;                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              MinBallVelocityForDestroy;                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              BallStartTime;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameInfo_TA.GameEventData
// 0x0014
struct FGameEventData
{
	class AGameEvent_TA*                               Archetype;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LaunchOption;                                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDestroyCurrentGame : 1;                          		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAddAllPlayers : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct TAGame.MaxActorsGroup_TA.MaxActorCallback
// 0x0024
struct FMaxActorCallback
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   EnabledDelegates;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DisabledDelegates;                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bEnabled : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessageGroup
// 0x0010
struct FChatPresetMessageGroup
{
	unsigned long                                      bTeam : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessage
// 0x001C
struct FChatPresetMessage
{
	int                                                GroupIndex;                                       		// 0x0000 (0x0004) [0x0000000040000001]              ( CPF_Edit | CPF_EditInlineNotify )
	struct FName                                       Id;                                               		// 0x0004 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bTeam : 1;                                        		// 0x000C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	struct FString                                     Label;                                            		// 0x0010 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Chat_TA.GFxChatMessage
// 0x006C
struct FGFxChatMessage
{
	int                                                Team;                                             		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned char                                      ChatChannel;                                      		// 0x001C (0x0001) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bLocalPlayer : 1;                                 		// 0x0020 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	struct FUniqueNetId                                SenderId;                                         		// 0x0024 (0x0048) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Chat_TA.PendingFilterMessage
// 0x0058
struct FPendingFilterMessage
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ChatChannel;                                      		// 0x000C (0x0001) [0x0000000000000000]              
	struct FUniqueNetId                                Recipient;                                        		// 0x0010 (0x0048) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedBindingCategory
// 0x0020
struct FLocalizedBindingCategory
{
	struct FName                                       Category;                                         		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Label;                                            		// 0x0008 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedAction
// 0x001C(0x004C - 0x0030)
struct FLocalizedAction : FBindingAction
{
	struct FString                                     Label;                                            		// 0x0030 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Description;                                      		// 0x003C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bRebindable : 1;                                  		// 0x0048 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Controls_TA.UIPlayerBinding
// 0x000C(0x0038 - 0x002C)
struct FUIPlayerBinding : FPlayerBinding
{
	struct FString                                     UIKey;                                            		// 0x002C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedNameData
// 0x0018
struct FLocalizedNameData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Position;                                         		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedDepartmentData
// 0x0018
struct FLocalizedDepartmentData
{
	struct FString                                     DepartmentTitle;                                  		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FLocalizedNameData >                Names;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedPostCreditData
// 0x0018
struct FLocalizedPostCreditData
{
	TArray< struct FString >                           Lines;                                            		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< unsigned char >                            Platforms;                                        		// 0x000C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_Credits_TA.DepartmentData
// 0x0024
struct FDepartmentData
{
	struct FString                                     DepartmentTitle;                                  		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Position;                                         		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Credits_TA.PostCreditData
// 0x0030
struct FPostCreditData
{
	struct FString                                     Line0;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Line1;                                            		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Line2;                                            		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Line3;                                            		// 0x0024 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Garage_TA.GarageTeam
// 0x0024
struct FGarageTeam
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                TeamColorID;                                      		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                CustomColorID;                                    		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0014 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Garage_TA.GarageTeam.TeamFinishID
	unsigned char                                      UnknownData01[ 0x8 ];                             		// 0x001C (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Garage_TA.GarageTeam.CustomFinishID
};

// ScriptStruct TAGame.ProductAsset_Body_TA.TeamPaintFinish
// 0x0008
struct FTeamPaintFinish
{
	class UProductAsset_PaintFinish_TA*                TeamFinish;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UProductAsset_PaintFinish_TA*                CustomFinish;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.GFxData_Map_TA.GFxMapData
// 0x0020
struct FGFxMapData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     FriendlyName;                                     		// 0x0008 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UTexture2D*                                  Thumbnail;                                        		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	class UTexture2D*                                  LargeImage;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	class UMapData_TA*                                 Data;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_Matchmaking_TA.MessageUpdate
// 0x0010
struct FMessageUpdate
{
	int                                                DelayFromStart;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MessageKey;                                       		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_Regions_TA.GFxRegion
// 0x001C
struct FGFxRegion
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bSelected : 1;                                    		// 0x0018 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.MusicTheme_TA.GameVersionMusicTheme
// 0x0020
struct FGameVersionMusicTheme
{
	TArray< class UMusicPlaylist_TA* >                 Playlists;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAkSoundCue*                                 TitleTheme;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkSoundCue*                                 Credits;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkSoundCue*                                 KonamiCode;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      GameVersion;                                      		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    DefaultIcon;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.GFxData_MusicPlayer_TA.GFxMusicPlaylist
// 0x0018
struct FGFxMusicPlaylist
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UTexture*                                    Icon;                                             		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	class UMusicPlaylist_TA*                           Playlist;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.MusicPlayerSave_TA.PlaylistState
// 0x000C
struct FPlaylistState
{
	struct FName                                       Playlist;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_Party_TA.GFxPartyMember
// 0x0068
struct FGFxPartyMember
{
	struct FUniqueNetId                                PersonaID;                                        		// 0x0000 (0x0048) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     PlayerName;                                       		// 0x0048 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     ProfileId;                                        		// 0x0054 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UTexture*                                    PlayerAvatarTexture;                              		// 0x0060 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bSplitScreen : 1;                                 		// 0x0064 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      bLocalSplitScreen : 1;                            		// 0x0064 (0x0004) [0x0000000040000000] [0x00000002] ( CPF_EditInlineNotify )
	unsigned long                                      bHasProfile : 1;                                  		// 0x0064 (0x0004) [0x0000000040000000] [0x00000004] ( CPF_EditInlineNotify )
	unsigned long                                      bPartyLeader : 1;                                 		// 0x0064 (0x0004) [0x0000000040000000] [0x00000008] ( CPF_EditInlineNotify )
	unsigned long                                      bIsPlayerTrading : 1;                             		// 0x0064 (0x0004) [0x0000000040000000] [0x00000010] ( CPF_EditInlineNotify )
	unsigned long                                      bIsPlayerInMatch : 1;                             		// 0x0064 (0x0004) [0x0000000040000000] [0x00000020] ( CPF_EditInlineNotify )
	unsigned long                                      bPlayerCanTrade : 1;                              		// 0x0064 (0x0004) [0x0000000040000000] [0x00000040] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Products_TA.LoadingProduct
// 0x0028
struct FLoadingProduct
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0004 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Products_TA.LoadingProduct.InstanceID
	TArray< int >                                      ReferencedViews;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      ThumbnailSize;                                    		// 0x001C (0x0001) [0x0000000000000000]              
	class UProductAsset_TA*                            Asset;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	class UProductThumbnail_TA*                        Thumbnail;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_ReplayViewer_TA.LocalizedCameraMode
// 0x0024
struct FLocalizedCameraMode
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bDisabled : 1;                                    		// 0x0008 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	struct FString                                     Label;                                            		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_SaveData_TA.SaveKeyValue
// 0x0014
struct FSaveKeyValue
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Value;                                            		// 0x0008 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Season_TA.SeasonWeek
// 0x0004
struct FSeasonWeek
{
	unsigned long                                      bWinner : 1;                                      		// 0x0000 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.ProductTemplate_TA.ProductReplacement2
// 0x0010
struct FProductReplacement2
{
	TArray< unsigned char >                            Platforms;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UProduct_TA*                                 Replacement;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxLogoData
// 0x0024
struct FGFxLogoData
{
	struct FName                                       AssetName;                                        		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	class UTexture*                                    Logo;                                             		// 0x0008 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                TeamColor;                                        		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                CustomColor;                                      		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     DefaultTeamName;                                  		// 0x0014 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bIsBotTeam : 1;                                   		// 0x0020 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxBotData
// 0x0018
struct FGFxBotData
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Id;                                               		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.SaveData_TA.OptionsValue
// 0x0014
struct FOptionsValue
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_Settings_TA.BindingPreset
// 0x0014
struct FBindingPreset
{
	struct FName                                       PresetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     DisplayName;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.UserSettingObserverEventCache_TA.SettingEvent
// 0x005C
struct FSettingEvent
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000000000]              
	struct FName                                       Id;                                               		// 0x0048 (0x0008) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.SaveData_TA.TrialSaveData
// 0x0010
struct FTrialSaveData
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MinutesRemaining;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0008 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveData_TA.TrialSaveData.LastPlayedTime
};

// ScriptStruct TAGame.GFxData_Stats_TA.GFxStatData
// 0x0038
struct FGFxStatData
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     DisplayValue;                                     		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UTexture*                                    Texture;                                          		// 0x0024 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Description;                                      		// 0x0028 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UClass*                                      DisplayProductStatClass;                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_Training_TA.UseAction
// 0x0018
struct FUseAction
{
	struct FString                                     ActionName;                                       		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     LocalizedActionName;                              		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.VoteActor_TA.Voter
// 0x0005
struct FVoter
{
	class APRI_TA*                                     PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxEngine_TA.SoundStateItem
// 0x000D
struct FSoundStateItem
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxShell_X*                                 Shell;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame.HUDBase_TA.ChatMessage
// 0x0070
struct FChatMessage
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATeam_TA*                                    Team;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ChatChannel;                                      		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned long                                      bPreset : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FUniqueNetId                                Recipient;                                        		// 0x0028 (0x0048) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxHUD_TA.ScreenLocation
// 0x0010
struct FScreenLocation
{
	struct FVector                                     ScreenPos;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      bOffScreen : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.Replay_TA.ReplayLogItem
// 0x001C
struct FReplayLogItem
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.Replay_TA.TimelineKeyframe
// 0x000C
struct FTimelineKeyframe
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                frame;                                            		// 0x0008 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.ReplayDirector_TA.ReplayScoreData
// 0x0010
struct FReplayScoreData
{
	class APRI_TA*                                     ScoredBy;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class APRI_TA*                                     AssistedBy;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Speed;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.ImpactEffectsComponent_TA.CollisionEffectData
// 0x0044
struct FCollisionEffectData
{
	class UPhysicalMaterial*                           PhysMat;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FEffectsMapping                             ImpactEffects;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	float                                              ImpactMomentum;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              SlideMomentum;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                PhysicsFrame;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.MatineeExporter_TA.ActorTransform
// 0x0020
struct FActorTransform
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              FOV;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.MatineeExporter_TA.ActorHistory
// 0x0014
struct AMatineeExporter_TA_FActorHistory
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FActorTransform >                   Transforms;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      ExportActor;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.OnlineGameParty_TA.StoredPartyMessage
// 0x001C
struct FStoredPartyMessage
{
	struct FString                                     PartyMessage;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MemberName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsLocal : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.OnlineGameReservations_TA.ReservationLoadout
// 0x0054
struct FReservationLoadout
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000000000]              
	TArray< int >                                      ProductIDs;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.OnlineProfile_TA.ProfileSetProperties
// 0x0000
struct FProfileSetProperties
{
};

// ScriptStruct TAGame.OnlineProfile_TA.ProfileAddProperties
// 0x0004
struct FProfileAddProperties
{
	float                                              TotalXP;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.OnlineSaveData_TA.SaveDataSetProperties
// 0x000C
struct FSaveDataSetProperties
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.OnlineSaveData_TA.SaveDataSetProperties.LastUnlockDisplayId
	class UAchievementSave_TA*                         AchievementData;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.OnlineSaveData_TA.SaveDataAddProperties
// 0x0000
struct FSaveDataAddProperties
{
};

// ScriptStruct TAGame.PlayerController_TA.ClientPacketData
// 0x0028
struct FClientPacketData
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     CameraLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CameraRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< struct FClientFrameData >                  Frames;                                           		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.PlayerController_TA.ClientData
// 0x002C
struct FClientData
{
	TArray< struct FClientFrameData >                  InputFrames;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastProcessedFrame;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LastProcessedReceivedFrame;                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LastInputTime;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              InputTimeMu;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              InputTimeVariance;                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                InputBufferSize;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              InputBufferTime;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFillingBuffer : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.PlayerController_TA.ClientStatsData
// 0x000C
struct FClientStatsData
{
	int                                                OverBufferFrames;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UnderBufferFrames;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TotalFrames;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.PlayerController_TA.ChatSpamData
// 0x0018
struct FChatSpamData
{
	float                                              RiseAmount;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RiseMultiplier;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecayRate;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LastChatTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.PlayerController_TA.CrosshairExtentInfo
// 0x0010
struct FCrosshairExtentInfo
{
	struct FVector                                     Extent;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              minDot;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.PRI_TA.ClientOnlineProductStat
// 0x000C
struct FClientOnlineProductStat
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.PRI_TA.ClientOnlineProductStat.InstanceID
	int                                                Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.PRI_TA.OnlineProductStat
// 0x000C
struct FOnlineProductStat
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.PRI_TA.OnlineProductStat.InstanceID
	class UProductStat_TA*                             ProductStat;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.ProductAsset_TA.ProductReplacement
// 0x0010
struct FProductReplacement
{
	TArray< unsigned char >                            Platforms;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UProductAsset_TA*                            Replacement;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.Profile_TA.ProfileProduct
// 0x0014
struct FProfileProduct
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.Profile_TA.ProfileProduct.InstanceID
	TArray< class UProductAttribute_TA* >              Attributes;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.RBHistory_TA.RBPhysicsSnapshot
// 0x0064
struct FRBPhysicsSnapshot
{
	struct FReplicatedRBState                          RBState;                                          		// 0x0000 (0x0038) [0x0000000000000000]              
	struct FWorldContactData                           WorldContact;                                     		// 0x0038 (0x0028) [0x0000000000000000]              
	class APhysicsVolume*                              PhysicsVolume;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.RBVehicleHistory_TA.RBVehicleSnapshot
// 0x0140
struct FRBVehicleSnapshot
{
	struct FVehicleInputs                              Input;                                            		// 0x0000 (0x0020) [0x0000000000000000]              
	struct FWheelContactData                           WheelContact0;                                    		// 0x0020 (0x0044) [0x0000000000080000]              ( CPF_Component )
	struct FWheelContactData                           WheelContact1;                                    		// 0x0064 (0x0044) [0x0000000000080000]              ( CPF_Component )
	struct FWheelContactData                           WheelContact2;                                    		// 0x00A8 (0x0044) [0x0000000000080000]              ( CPF_Component )
	struct FWheelContactData                           WheelContact3;                                    		// 0x00EC (0x0044) [0x0000000000080000]              ( CPF_Component )
	struct FCarInteractionData                         CarInteraction;                                   		// 0x0130 (0x0008) [0x0000000000000000]              
	float                                              OutputHandbrake;                                  		// 0x0138 (0x0004) [0x0000000000000000]              
	int                                                LastHitBallFrame;                                 		// 0x013C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentSnapshot
// 0x0009
struct FCarComponentSnapshot
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActivityTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      ComponentData;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentHistory
// 0x001C
struct FCarComponentHistory
{
	class ACarComponent_TA*                            CarComponent;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FCarComponentSnapshot >             Snapshots;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCarComponentSnapshot                       BackupSnapshot;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.Replay_TA.ReplayKeyframe
// 0x000C
struct FReplayKeyframe
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                frame;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Position;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.Replay_TA.ReplayActorChannel
// 0x002C
struct FReplayActorChannel
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       actorName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            Recent;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      StillDirty;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              CloseTime;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNetInitial : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlaybackPersistent : 1;                          		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.Replay_Soccar_TA.ScoredGoal
// 0x0014
struct FScoredGoal
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                PlayerTeam;                                       		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.Replay_Soccar_TA.ReplayPlayerStats
// 0x0034
struct FReplayPlayerStats
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Platform;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0010 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.Replay_Soccar_TA.ReplayPlayerStats.OnlineID
	int                                                Team;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Goals;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Saves;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Shots;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bBot : 1;                                         		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.Replay_Soccar_TA.Highlight
// 0x0014
struct FHighlight
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       CarName;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       BallName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TAGame.ReplayDirector_TA.ReplayFocusCar
// 0x0014
struct FReplayFocusCar
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       CarName;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                BallHitIndex;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayIOTaskBase
// 0x0018
struct FReplayIOTaskBase
{
	class UReplay_TA*                                  Replay;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Path;                                             		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UErrorType*                                  Error;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Ar;                                               		// 0x0014 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayExportTask
// 0x0010(0x0028 - 0x0018)
struct FReplayExportTask : FReplayIOTaskBase
{
	TArray< unsigned char >                            Data;                                             		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDebug : 1;                                       		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayClassTask
// 0x000C(0x0024 - 0x0018)
struct FReplayClassTask : FReplayIOTaskBase
{
	struct FString                                     ClassPath;                                        		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayExportCallbackData
// 0x0014
struct FReplayExportCallbackData
{
	struct FPointer                                    Task;                                             		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FScriptDelegate                             Callback;                                         		// 0x0004 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayImportTask
// 0x000C(0x0024 - 0x0018)
struct FReplayImportTask : FReplayIOTaskBase
{
	TArray< unsigned char >                            Data;                                             		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayHeaderImportTask
// 0x0000(0x0018 - 0x0018)
struct FReplayHeaderImportTask : FReplayIOTaskBase
{
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayTypeData
// 0x0018
struct FReplayTypeData
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassPath;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayImportCallbackData
// 0x0014
struct FReplayImportCallbackData
{
	struct FPointer                                    Task;                                             		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FScriptDelegate                             Callback;                                         		// 0x0004 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayHeadersCountTask
// 0x001C
struct FReplayHeadersCountTask
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FReplayTypeData >                   Replays;                                          		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UErrorType*                                  Error;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.RPC_MatchComplete_TA.OnlineProductDrop
// 0x0060
struct FOnlineProductDrop
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000000000]              
	TArray< struct FOnlineProductData >                ProductData;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCurrencyDrop >                     CurrencyData;                                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.RPC_ProductsLoadoutGet_TA.InstanceToSlotRow
// 0x0010
struct FInstanceToSlotRow
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_ProductsLoadoutGet_TA.InstanceToSlotRow.InstanceID
	int                                                SlotIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TeamIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.SaveData_TA.PlaylistSkillData
// 0x000C
struct FPlaylistSkillData
{
	int                                                Playlist;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Tier;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MatchesPlayed;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.SeqAct_DriveSpline_TA.CarSplineData
// 0x0010
struct FCarSplineData
{
	class ACar_TA*                                     Car;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASplineActor*                                Spline;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DistanceAlongSpline;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReachedSpline : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.SeqAct_SpawnCarColors_TA.SpawnCarColorSet
// 0x0008
struct FSpawnCarColorSet
{
	class UCarColorSet_TA*                             ColorSet;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRender : 1;                                      		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TAGame.SkelControlSingleBoneCopy_TA.AxisConversion
// 0x000C
struct FAxisConversion
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Source;                                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.StatFactory_TA.BallInfo
// 0x0024
struct FBallInfo
{
	class ABall_TA*                                    Ball;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGoal_TA*                                    ShotGoal;                                         		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UGoal_TA*                                    RedZoneGoal;                                      		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class APRI_TA*                                     RedZonePRI;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              GroundHitTime;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              JuggleTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              SpecialHitTime;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              SaveTime;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ShotTime;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.StatFactory_TA.StatGroupCollection
// 0x0018
struct FStatGroupCollection
{
	class UStatGroup_TA*                               Wins;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatGroup_TA*                               Losses;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatGroup_TA*                               Goals;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatGroup_TA*                               Saves;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatGroup_TA*                               Shots;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStatGroup_TA*                               Assists;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.TeamIndicator_TA.TeamVehicleIndicator
// 0x000C
struct FTeamVehicleIndicator
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ACar_TA*                                     Car;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastUpdateTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.Tutorial_TA.ButtonInfo
// 0x0020
struct FButtonInfo
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             ClickDelegate;                                    		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bCorrectAnswer : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.Tutorial_TA.ActionNameInfo
// 0x000C
struct FActionNameInfo
{
	TArray< struct FName >                             ActionNames;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.Tutorial_TA.MessageInfo
// 0x0030
struct FMessageInfo
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Body;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FButtonInfo >                       Buttons;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FActionNameInfo >                   ActionNameList;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.VehiclePickup_TA.PickupData
// 0x0008
struct FPickupData
{
	class ACar_TA*                                     Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPickedUp : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.AudioPriorityComponent_TA.PriorityCandidate
// 0x0014
struct FPriorityCandidate
{
	class AVehicle_TA*                                 Candidate;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           BonusReasons;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.BallTrajectoryComponent_TA.TrajectorySetup
// 0x0014
struct FTrajectorySetup
{
	float                                              TotalSimulateTime;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAlwaysEnabled : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdatePathEveryFrame : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                TotalPoints;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaxStepsPerFrame;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                QuickTrajectorySteps;                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.BallTrajectoryComponent_Beam_TA.TrajectoryFX
// 0x0004
struct FTrajectoryFX
{
	class UParticleSystemComponent*                    Particle;                                         		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct TAGame.BallTrajectoryComponent_Spline_TA.TrajectorySplineFX
// 0x0004
struct FTrajectorySplineFX
{
	class ASplineLoftActorMovable*                     Spline;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.BallTrajectoryComponent_Mesh_TA.MeshInfo
// 0x0034
struct FMeshInfo
{
	class UStaticMeshComponent*                        Meshes;                                           		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                PointIndex;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector                                     MoveDirection;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              DistanceAlongPath;                                		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCrossedZero : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.BreakOutActor_Platform_TA.BreakoutDamageState
// 0x0018
struct FBreakoutDamageState
{
	unsigned char                                      State;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	class APRI_TA*                                     Causer;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     DamageLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bDirectDamage : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bImmediate : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.SpecialPickup_TA.PickupReplacement
// 0x0008
struct FPickupReplacement
{
	class UProduct_TA*                                 Body;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASpecialPickup_TA*                           Pickup;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.EngineAudioProfile_TA.AudioMinMax
// 0x0008
struct FAudioMinMax
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandRange;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.EngineAudioProfile_TA.AudioGear
// 0x0010
struct FAudioGear
{
	struct FAudioMinMax                                RPMShiftDownRange;                                		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAudioMinMax                                RPMShiftUpRange;                                  		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.FlockActor_TA.FlockAgent
// 0x0034
struct FFlockAgent
{
	unsigned long                                      bWaitingForOtherAgents : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DistanceAlongSpline;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     NormalizedSplineOffset;                           		// 0x0024 (0x000C) [0x0000000000000000]              
	class ASplineActor*                                CurrentSplineActor;                               		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.FXActor_BreakoutPlatform_TA.PlatformParam
// 0x0018
struct FPlatformParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           ValueOverTime;                                    		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.PremiumSkinSet_TA.PremiumSkinSetItem
// 0x0005
struct FPremiumSkinSetItem
{
	class UPremiumSkin_TA*                             PremiumSkin;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      GameVersion;                                      		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.ProductAttribute_PaintSettings_TA.PaintMaterialGroup
// 0x000C
struct FPaintMaterialGroup
{
	TArray< class UMaterialInterface* >                Materials;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailRequest
// 0x001C
struct FRenderThumbnailRequest
{
	struct FProductThumbnailResult                     Result;                                           		// 0x0000 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             Callback;                                         		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailScene
// 0x0020
struct FRenderThumbnailScene
{
	class UProductThumbnail_TA*                        Thumbnail;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UProductAsset_TA*                            Asset;                                            		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UThumbnailScene_TA*                          Scene;                                            		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TextureWidth;                                     		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TextureHeight;                                    		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              NextRenderTime;                                   		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bBeingRendered : 1;                               		// 0x001C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct TAGame.Ball_Breakout_TA.BreakoutDamage
// 0x0008
struct FBreakoutDamage
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataListFilesTask
// 0x002D
struct FSaveDataListFilesTask
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.SaveDataListFilesTask.ControllerIndex
	struct FString                                     Path;                                             		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Pattern;                                          		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Files;                                            		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Result;                                           		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataImportTask
// 0x0030
struct FSaveDataImportTask
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.SaveDataImportTask.ControllerIndex
	struct FString                                     Path;                                             		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UObject*                                     SaveDataObject;                                   		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                Version;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Result;                                           		// 0x001C (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            Data;                                             		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bExactFileMatch : 1;                              		// 0x002C (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bPlayerSaveData : 1;                              		// 0x002C (0x0004) [0x0000000000100000] [0x00000002] 
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataExportTask
// 0x002C
struct FSaveDataExportTask
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.SaveDataExportTask.ControllerIndex
	TArray< unsigned char >                            Data;                                             		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Path;                                             		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bExactFileMatch : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerSaveData : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      Result;                                           		// 0x0024 (0x0001) [0x0000000000000000]              
	int                                                KeepNewestSaveFileCount;                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.SaveObjectManager_TA.DingoContentCache
// 0x0008
struct FDingoContentCache
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.DingoContentCache.UserXUID
};

// ScriptStruct TAGame.GameObserver_TA.GoalData
// 0x0030
struct FGoalData
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     GoalFront;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     GoalForward;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              DotToBall;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DistToBall;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              BallSpeedTowardsGoal;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              RawScorability;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Scorability;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameObserver_TA.CarGoalData
// 0x000C
struct FCarGoalData
{
	float                                              Distance;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Dot;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DotBetweenBall;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameObserver_TA.CarData
// 0x004C
struct FCarData
{
	class ACar_TA*                                     Car;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Dot;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DistToBall;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SpeedTowardsBall;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TimeToBall;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FCarGoalData                                OffensiveGoal;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FCarGoalData                                DefensiveGoal;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FString                                     LastEvent;                                        		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BallHitProbability;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              Offense;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              Defense;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              Aerial;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              PredictedDistToBall;                              		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameObserver_TA.BallData
// 0x0014
struct FBallData
{
	class ABall_TA*                                    Ball;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Altitude;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              AerialSkill;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class ACar_TA*                                     LastHitBy;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastHitTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.ListenServer_TA.LoadingPlayer
// 0x0050
struct FLoadingPlayer
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000000000]              
	int                                                NumPlayers;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              TimeoutTime;                                      		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.MapPrefsMetrics_TA.MapPrefsMetric
// 0x001C
struct FMapPrefsMetric
{
	int                                                Playlist;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             Likes;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             Dislikes;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_ProductTradeIn_TA.TradeInDrop
// 0x0008
struct FTradeInDrop
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_ProductTradeIn_TA.TradeInDrop.ProductID
};

// ScriptStruct TAGame.GFxData_ProductTradeIn_TA.TradeInDropTable
// 0x0014
struct FTradeInDropTable
{
	unsigned char                                      Quality;                                          		// 0x0000 (0x0001) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                SeriesID;                                         		// 0x0004 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	TArray< struct FTradeInDrop >                      Drops;                                            		// 0x0008 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GameEditor_Ring_TA.ActorTouchRecordData
// 0x0010
struct FActorTouchRecordData
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     TouchDirection;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_GameEditor_TA.SpawnArchetypeData
// 0x0008
struct FSpawnArchetypeData
{
	class AActor*                                      Archetype;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxSpawnCount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.OnlineGameSkillGroups_TA.PartyPlayers
// 0x000C
struct FPartyPlayers
{
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.ProductMetrics_TA.PaintMetricsData
// 0x0010
struct FPaintMetricsData
{
	unsigned char                                      TeamColorID;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                TeamProductID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      CustomColorID;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                CustomProductID;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_MenuSequence_TA.MenuSequencePair
// 0x0010
struct FMenuSequencePair
{
	struct FName                                       MenuSequence;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       MenuID;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TAGame.ESportEvents_TA.EsportEventData
// 0x0080
struct FEsportEventData
{
	struct FString                                     Image;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     URL;                                              		// 0x0024 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     StartTime;                                        		// 0x0030 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     EndTime;                                          		// 0x003C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bStartingSoon : 1;                                		// 0x0048 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      bLiveNow : 1;                                     		// 0x0048 (0x0004) [0x0000000040000000] [0x00000002] ( CPF_EditInlineNotify )
	class UTexture*                                    ImageTexture;                                     		// 0x004C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                ImageTextureSizeX;                                		// 0x0050 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                ImageTextureSizeY;                                		// 0x0054 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     UTCStartTime;                                     		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UTCEndTime;                                       		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0070 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ESportEvents_TA.EsportEventData.UTCStartTimeSeconds
	unsigned char                                      UnknownData01[ 0x8 ];                             		// 0x0078 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ESportEvents_TA.EsportEventData.UTCEndTimeSeconds
};

// ScriptStruct TAGame.Upsell_TA.UpsellData
// 0x0060
struct FUpsellData
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     BodyTitle;                                        		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Body;                                             		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     URL;                                              		// 0x0024 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UTexture*                                    SmallTexture;                                     		// 0x0030 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	class UTexture*                                    LargeTexture;                                     		// 0x0034 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                SmallTextureSizeX;                                		// 0x0038 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                SmallTextureSizeY;                                		// 0x003C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                LargeTextureSizeX;                                		// 0x0040 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                LargeTextureSizeY;                                		// 0x0044 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     SmallTextureURL;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LargeTextureURL;                                  		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_DLC_TA.GFxDLCData
// 0x004C
struct FGFxDLCData
{
	struct FString                                     PackName;                                         		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FName                                       Id;                                               		// 0x000C (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                ProductID;                                        		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     SubItems;                                         		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Price;                                            		// 0x0024 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     DiscountPrice;                                    		// 0x0030 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                DiscountPercentage;                               		// 0x003C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                LabelSlotIndex;                                   		// 0x0040 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bUnlocked : 1;                                    		// 0x0044 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned long                                      bIsNew : 1;                                       		// 0x0044 (0x0004) [0x0000000040000000] [0x00000002] ( CPF_EditInlineNotify )
	int                                                PurchaseTime;                                     		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TAGame.SkillDecayMessageHandler_TA.PlayersShownPlaylists
// 0x0054
struct FPlayersShownPlaylists
{
	TArray< class UGameSettingPlaylist_X* >            ShownPlaylists;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                PlayerID;                                         		// 0x000C (0x0048) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_MTXGarage_TA.CartInfo
// 0x0008
struct FCartInfo
{
	int                                                CatalogID;                                        		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetCatalog_TA.MTProductInfo
// 0x000C
struct FMTProductInfo
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_MicroTransactions_GetCatalog_TA.MTProductInfo.ProductID
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetCatalog_TA.MTCatalogInfo
// 0x002C
struct FMTCatalogInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FMTProductInfo >                    Items;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlatformProductID;                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Category;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Price;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.RPC_MicroTransactions_StartPurchase_TA.MTCartItem
// 0x0008
struct FMTCartItem
{
	int                                                CatalogID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_MTXGarage_TA.MTXPurchaseInfo
// 0x0020
struct FMTXPurchaseInfo
{
	int                                                CatalogID;                                        		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     PurchasePrice;                                    		// 0x0004 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     BundleItems;                                      		// 0x0010 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bCanBePlayerTraded : 1;                           		// 0x001C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.RPC_GetDLC_TA.DLCInfo
// 0x000C
struct FDLCInfo
{
	struct FName                                       DLCName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsNew : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.CameraStateSelector_Priority_TA.StateParams
// 0x0005
struct FStateParams
{
	class UCameraState_X*                              State;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Priority;                                         		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TAGame.BeamTraceComponent_TA.BeamTraceProps
// 0x0018
struct FBeamTraceProps
{
	float                                              NextTraceTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastWorldLocation;                                		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned long                                      LastWorldHit : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystemComponent*                    PSC;                                              		// 0x0014 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct TAGame.CameraState_PodiumSpotlight_TA.CachedPodiumCar
// 0x0010
struct FCachedPodiumCar
{
	class ACar_TA*                                     Car;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_Soccar_SubRules_500_TA.BallScoreData
// 0x0008
struct FBallScoreData
{
	int                                                BallTouchScore;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BallScoreWeight;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GameEvent_Soccar_SubRules_500_TA.CannonFacingInfo
// 0x001C
struct FCannonFacingInfo
{
	struct FRotator                                    OriginalFacing;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    TargetFacing;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	class ACannon_TA*                                  Cannon;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_ContainerDrops_TA.ContainerInfo
// 0x0014
struct FContainerInfo
{
	int                                                SeriesID;                                         		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     PossibleContents;                                 		// 0x0008 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetContainerDropTable_TA.RPCContainerDropTable
// 0x0014
struct FRPCContainerDropTable
{
	int                                                SeriesID;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      Drops;                                            		// 0x0008 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_CustomTeams_TA.GFxCustomTeamSettings
// 0x0014
struct FGFxCustomTeamSettings
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                TeamColorID;                                      		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                CustomColorID;                                    		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Friends_TA.PersonaDataId
// 0x0048
struct FPersonaDataId
{
	struct FUniqueNetId                                PersonaID;                                        		// 0x0000 (0x0048) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_LoadoutSets_TA.GFxLoadoutSet
// 0x0014
struct FGFxLoadoutSet
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bEquipped : 1;                                    		// 0x0010 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapType
// 0x0018
struct FGFxMapType
{
	struct FName                                       MapTypeID;                                        		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Label;                                            		// 0x0008 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UMapSet_TA*                                  MapSet;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxPlaylistType
// 0x0014
struct FGFxPlaylistType
{
	struct FName                                       PlaylistTypeID;                                   		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Label;                                            		// 0x0008 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPlaylist
// 0x0028
struct FGFxMapPlaylist
{
	struct FName                                       PlaylistId;                                       		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FName                                       PlaylistTypeID;                                   		// 0x0008 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Label;                                            		// 0x0010 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                LikesRemaining;                                   		// 0x001C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                DislikesRemaining;                                		// 0x0020 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bOverrideGlobal : 1;                              		// 0x0024 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPreference
// 0x0029
struct FGFxMapPreference
{
	struct FName                                       MapID;                                            		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FName                                       MapTypeID;                                        		// 0x0008 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FName                                       PlaylistId;                                       		// 0x0010 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Label;                                            		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UTexture2D*                                  Thumbnail;                                        		// 0x0024 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned char                                      Preference;                                       		// 0x0028 (0x0001) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_MapSelection_TA.GFxMapSelectionData
// 0x000C
struct FGFxMapSelectionData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000]              ( CPF_EditInlineNotify )
	unsigned long                                      bSelected : 1;                                    		// 0x0008 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_Mutators_TA.ModeMapPair
// 0x000C
struct FModeMapPair
{
	int                                                GameMode;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       MapName;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_Mutators_TA.CustomGameSetting
// 0x0044
struct FCustomGameSetting
{
	struct FString                                     MutatorCategoryName;                              		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     MutatorCategoryDesc;                              		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     SettingsName;                                     		// 0x0018 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                SettingIndex;                                     		// 0x0024 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FName                                       InternalName;                                     		// 0x0028 (0x0008) [0x0000000000000000]              
	int                                                GameSettingCategoryIndex;                         		// 0x0030 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             SettingNameExplicit;                              		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPresetLocked : 1;                                		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_PartyInvite_TA.Invite
// 0x0054
struct FInvite
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FUniqueNetId                                FromUser;                                         		// 0x000C (0x0048) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_PlayerBanners_TA.GFxPlayerBannerRef
// 0x000C
struct FGFxPlayerBannerRef
{
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0000 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_PlayerBanners_TA.GFxPlayerBannerRef.InstanceID
	class UGFxData_PlayerBanner_TA*                    PlayerBanner;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSlot
// 0x0018
struct FFilterProductSlot
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bSelected : 1;                                    		// 0x000C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	int                                                SlotIndex;                                        		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                PreviewQuantity;                                  		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductQuality
// 0x0018
struct FFilterProductQuality
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bSelected : 1;                                    		// 0x000C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	unsigned char                                      Quality;                                          		// 0x0010 (0x0001) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                PreviewQuantity;                                  		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductAttribute
// 0x0018
struct FFilterProductAttribute
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bSelected : 1;                                    		// 0x000C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	class UClass*                                      AttributeClass;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PreviewQuantity;                                  		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSeries
// 0x0018
struct FFilterProductSeries
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bSelected : 1;                                    		// 0x000C (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
	int                                                SeriesID;                                         		// 0x0010 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                PreviewQuantity;                                  		// 0x0014 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChat
// 0x001C
struct FLocalizedQuickChat
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	unsigned long                                      bPostGame : 1;                                    		// 0x0018 (0x0004) [0x0000000040000000] [0x00000001] ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChatBinding
// 0x0028
struct FLocalizedQuickChatBinding
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
	int                                                Group;                                            		// 0x0018 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     Action;                                           		// 0x001C (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_SpecialEvents_TA.GFxSpecialEventReward
// 0x0010
struct FGFxSpecialEventReward
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                StoreProductID;                                   		// 0x0004 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Cost;                                             		// 0x0008 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                Remaining;                                        		// 0x000C (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.RPC_GetSpecialEventCurrency_TA.EventCurrencyData
// 0x0014
struct FEventCurrencyData
{
	int                                                CurrencyID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PsyonixID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Total;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x000C (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_GetSpecialEventCurrency_TA.EventCurrencyData.ExpirationTime
};

// ScriptStruct TAGame.RPC_GetSpecialEventCurrencyRewards_TA.SpecialEventReward
// 0x001C
struct FSpecialEventReward
{
	int                                                StoreProductID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SeriesID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                CurrencyID;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxQuantityPerPlayer;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                PurchasedQuantity;                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.SearchCacheData
// 0x0010
struct FSearchCacheData
{
	float                                              TimeoutTime;                                      		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UTrainingEditorData_TA* >            TrainingModes;                                    		// 0x0004 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.FavoritedFileMetaData
// 0x0020
struct FFavoritedFileMetaData
{
	struct FString                                     Code;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x000C (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_TrainingModeBrowser_TA.FavoritedFileMetaData.UpdatedAt
	struct FString                                     Filename;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.CachedDownloadedFile
// 0x0018
struct FCachedDownloadedFile
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Code;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TAGame.RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA.CodeTimePair
// 0x0014
struct FCodeTimePair
{
	struct FString                                     Code;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x000C (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA.CodeTimePair.UpdatedAt
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeTag
// 0x0001
struct FTrainingModeTag
{
	unsigned char                                      Tag;                                              		// 0x0000 (0x0001) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeDifficulty
// 0x0001
struct FTrainingModeDifficulty
{
	unsigned char                                      Difficulty;                                       		// 0x0000 (0x0001) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeType
// 0x0001
struct FTrainingModeType
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000040000000]              ( CPF_EditInlineNotify )
};

// ScriptStruct TAGame.LoadoutSequencer_TA.SequenceData
// 0x000C
struct FSequenceData
{
	class UProductSlot_TA*                             Slot;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AnimDelay;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAssetLoaded : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.RPC_GetSpecialEvents_TA.SpecialEventData
// 0x0024
struct FSpecialEventData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0010 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_GetSpecialEvents_TA.SpecialEventData.StartTime
	unsigned char                                      UnknownData01[ 0x8 ];                             		// 0x0018 (0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_GetSpecialEvents_TA.SpecialEventData.EndTime
	int                                                CurrencyID;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TAGame.VehiclePickup_BoostModifier_Randomizer_TA.RandomPickup
// 0x0008
struct FRandomPickup
{
	class ASpecialPickup_TA*                           PickupArchetype;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif