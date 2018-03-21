/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_structs.h
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

// ScriptStruct IpDrv.AdHocDelegates.AdHocAccessPointInfo
// 0x002C
struct FAdHocAccessPointInfo
{
	struct FString                                     Ipv4Addr;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UserName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AdvertiseData;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ScanResultIndex;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                NetworkNodeIndex;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.AdHocDelegates.AdHocStationInfo
// 0x000C
struct FAdHocStationInfo
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeFile
// 0x0041
struct FMcpClashMobChallengeFile
{
	unsigned long                                      should_keep_post_challenge : 1;                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     title_id;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     file_name;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     dl_name;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     hash_code;                                        		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Type;                                             		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Status;                                           		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotificationParams
// 0x0004
struct FMcpClashMobPushNotificationParams
{
	int                                                bah;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotification
// 0x0034
struct FMcpClashMobPushNotification
{
	TArray< struct FString >                           device_tokens;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     badge_type;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Sound;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMcpClashMobPushNotificationParams          Params;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeEvent
// 0x00B4
struct FMcpClashMobChallengeEvent
{
	struct FString                                     unique_challenge_id;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     visible_date;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     start_date;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     end_date;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     completed_date;                                   		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     purge_date;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     challenge_type;                                   		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                num_attempts;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                num_successful_attempts;                          		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                goal_value;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                goal_start_value;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                goal_current_value;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      has_started : 1;                                  		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      is_visible : 1;                                   		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      has_completed : 1;                                		// 0x0068 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      was_successful : 1;                               		// 0x0068 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FMcpClashMobChallengeFile >         file_list;                                        		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                facebook_likes;                                   		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                facebook_comments;                                		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              facebook_like_scaler;                             		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              facebook_comment_scaler;                          		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                facebook_like_goal_progress;                      		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                facebook_comment_goal_progress;                   		// 0x008C (0x0004) [0x0000000000000000]              
	struct FString                                     facebook_id;                                      		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                twitter_retweets;                                 		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              twitter_retweets_scaler;                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                twitter_goal_progress;                            		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FString                                     twitter_id;                                       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeUserStatus
// 0x0068
struct FMcpClashMobChallengeUserStatus
{
	struct FString                                     unique_challenge_id;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     unique_user_id;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                num_attempts;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                num_successful_attempts;                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                goal_progress;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      did_complete : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     last_update_time;                                 		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                user_award_given;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     accept_time;                                      		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      did_preregister : 1;                              		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     facebook_like_time;                               		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      enrolled_via_facebook : 1;                        		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      liked_via_facebook : 1;                           		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      commented_via_facebook : 1;                       		// 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     twitter_retweet_time;                             		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      enrolled_via_twitter : 1;                         		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      retweeted : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.FileNameToURLMapping
// 0x0010
struct FFileNameToURLMapping
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       UrlMapping;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.TitleFileWeb
// 0x0011(0x002D - 0x001C)
struct FTitleFileWeb : FTitleFile
{
	struct FString                                     StringData;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      FileCompressionType;                              		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpClashMobManager.McpChallengeRequest
// 0x0010
struct FMcpChallengeRequest
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpClashMobManager.McpChallengeUserRequest
// 0x003C
struct FMcpChallengeUserRequest
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpChallengeRequest >              ChallengeStatusRequests;                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpChallengeRequest >              ChallengeAcceptRequests;                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpChallengeRequest >              ChallengeUpdateProgressRequests;                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpChallengeRequest >              ChallengeUpdateRewardRequests;                    		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupMember
// 0x000D
struct FMcpGroupMember
{
	struct FString                                     MemberId;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      AcceptState;                                      		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroup
// 0x0034
struct FMcpGroup
{
	struct FString                                     OwnerId;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GroupId;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GroupName;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      AccessLevel;                                      		// 0x0024 (0x0001) [0x0000000000000000]              
	TArray< struct FMcpGroupMember >                   Members;                                          		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupList
// 0x0018
struct FMcpGroupList
{
	struct FString                                     RequesterId;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpGroup >                         Groups;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpIdMappingBase.McpIdMapping
// 0x0024
struct FMcpIdMapping
{
	struct FString                                     McpId;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExternalId;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExternalType;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpIdMappingManager.AddMappingRequest
// 0x0028
struct FAddMappingRequest
{
	struct FString                                     McpId;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExternalId;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExternalType;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       Request;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpIdMappingManager.QueryMappingRequest
// 0x0010
struct FQueryMappingRequest
{
	struct FString                                     ExternalType;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       Request;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpManagedValueManagerBase.ManagedValue
// 0x000C
struct FManagedValue
{
	struct FName                                       ValueId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpManagedValueManagerBase.ManagedValueSaveSlot
// 0x0024
struct FManagedValueSaveSlot
{
	struct FString                                     OwningMcpId;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SaveSlot;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FManagedValue >                     Values;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpManagedValueManager.SaveSlotRequestState
// 0x001C
struct UMcpManagedValueManager_FSaveSlotRequestState
{
	struct FString                                     McpId;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SaveSlot;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       Request;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpManagedValueManager.ValueRequestState
// 0x0008(0x0024 - 0x001C)
struct FValueRequestState : UMcpManagedValueManager_FSaveSlotRequestState
{
	struct FName                                       ValueId;                                          		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpMessageBase.McpMessage
// 0x0049
struct FMcpMessage
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToUniqueUserId;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FromUniqueUserId;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FromFriendlyName;                                 		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageType;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ValidUntil;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      MessageCompressionType;                           		// 0x0048 (0x0001) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageList
// 0x0018
struct FMcpMessageList
{
	struct FString                                     ToUniqueUserId;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpMessage >                       Messages;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageContents
// 0x0018
struct FMcpMessageContents
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            MessageContents;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpMessageManager.McpCompressMessageRequest
// 0x0024
struct FMcpCompressMessageRequest
{
	TArray< unsigned char >                            SourceBuffer;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            DestBuffer;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OutCompressedSize;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	class UHttpRequestInterface*                       Request;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	struct FPointer                                    CompressionWorker;                                		// 0x0020 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct IpDrv.McpMessageManager.McpUncompressMessageRequest
// 0x002C
struct FMcpUncompressMessageRequest
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            SourceBuffer;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            DestBuffer;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OutUncompressedSize;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FPointer                                    UncompressionWorker;                              		// 0x0028 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFileInfo
// 0x0024(0x004C - 0x0028)
struct FMcpUserCloudFileInfo : FEmsFile
{
	struct FString                                     CreationDate;                                     		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastUpdateDate;                                   		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CompressionType;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFilesEntry
// 0x0028
struct FMcpUserCloudFilesEntry
{
	struct FString                                     UserId;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFileWeb >                     DownloadedFiles;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpUserCloudFileInfo >             EnumeratedFiles;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       HTTPRequestEnumerateFiles;                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItemAttribute
// 0x0010
struct FMcpInventoryItemAttribute
{
	struct FString                                     AttributeId;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItem
// 0x003C
struct FMcpInventoryItem
{
	struct FString                                     InstanceItemId;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GlobalItemId;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Quantity;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                QuantityIAP;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Scalar;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     LastUpdateTime;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpInventoryItemAttribute >        Attributes;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItemContainer
// 0x0010
struct FMcpInventoryItemContainer
{
	struct FString                                     GlobalItemId;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Quantity;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventorySaveSlot
// 0x0024
struct FMcpInventorySaveSlot
{
	struct FString                                     OwningMcpId;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SaveSlotId;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpInventoryItem >                 Items;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpUserInventoryManager.SaveSlotRequestState
// 0x001C
struct UMcpUserInventoryManager_FSaveSlotRequestState
{
	struct FString                                     McpId;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SaveSlotId;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       Request;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.McpUserInventoryManager.InventoryItemRequestState
// 0x000C(0x0028 - 0x001C)
struct FInventoryItemRequestState : UMcpUserInventoryManager_FSaveSlotRequestState
{
	struct FString                                     ItemID;                                           		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.McpUserManagerBase.McpUserStatus
// 0x0050
struct FMcpUserStatus
{
	struct FString                                     McpId;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SecretKey;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Ticket;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UDID;                                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RegisteredDate;                                   		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastActiveDate;                                   		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DaysInactive;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsBanned : 1;                                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct IpDrv.McpUserManager.UserRequest
// 0x0010
struct FUserRequest
{
	struct FString                                     McpId;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       Request;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// 0x000C
struct FConnectionBandwidthStats
{
	int                                                UpstreamRate;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DownstreamRate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RoundtripLatency;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// 0x0050
struct FPlayerMember
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0048) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// 0x0014
struct FClientBandwidthTestData
{
	unsigned char                                      TestType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentState;                                     		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                NumBytesToSendTotal;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumBytesSentTotal;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NumBytesSentLast;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ElapsedTestTime;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// 0x0064
struct FClientConnectionRequest
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000000000]              
	unsigned char                                      NatType;                                          		// 0x0048 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCanHostVs : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< struct FConnectionBandwidthStats >         BandwidthHistory;                                 		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinutesSinceLastTest;                             		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// 0x0028
struct FClientConnectionBandwidthTestData
{
	unsigned char                                      CurrentState;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TestType;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                BytesTotalNeeded;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                BytesReceived;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FDouble                                     RequestTestStartTime;                             		// 0x000C (0x0008) [0x0000000000000000]              
	struct FDouble                                     TestStartTime;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// 0x0098
struct FClientMeshBeaconConnection
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000000000]              
	float                                              ElapsedHeartbeatTime;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x004C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bConnectionAccepted : 1;                          		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FClientConnectionBandwidthTestData          BandwidthTest;                                    		// 0x0054 (0x0028) [0x0000000000000000]              
	unsigned char                                      NatType;                                          		// 0x007C (0x0001) [0x0000000000000000]              
	unsigned long                                      bCanHostVs : 1;                                   		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                    		// 0x0084 (0x0004) [0x0000000000000000]              
	TArray< struct FConnectionBandwidthStats >         BandwidthHistory;                                 		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinutesSinceLastTest;                             		// 0x0094 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x0018
struct FEventUploadConfig
{
	unsigned char                                      UploadType;                                       		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     UploadUrl;                                        		// 0x0004 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              Timeout;                                          		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bUseCompression : 1;                              		// 0x0014 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct IpDrv.OnlineImageDownloaderWeb.OnlineImageDownload
// 0x001C
struct FOnlineImageDownload
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bPendingRemoval : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2DDynamic*                           Texture;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x0028
struct FNewsCacheEntry
{
	struct FString                                     NewsUrl;                                          		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      ReadState;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      NewsType;                                         		// 0x000D (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     NewsItem;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Timeout;                                          		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsUnicode : 1;                                   		// 0x0020 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FPointer                                    HttpDownloader;                                   		// 0x0024 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct IpDrv.OnlinePlaylistManager.ConfiguredGameSetting
// 0x0020
struct FConfiguredGameSetting
{
	int                                                GameSettingId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GameSettingsClassName;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct IpDrv.OnlinePlaylistManager.InventorySwap
// 0x0014
struct FInventorySwap
{
	struct FName                                       Original;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     SwapTo;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.OnlinePlaylistManager.Playlist
// 0x0070
struct FPlaylist
{
	TArray< struct FConfiguredGameSetting >            ConfiguredGames;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlaylistId;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LoadBalanceId;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     LocalizationString;                               		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ContentIds;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TeamSize;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                TeamCount;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxPartySize;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MatchType;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisableDedicatedServerSearches : 1;              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FName >                             MapCycle;                                         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInventorySwap >                    InventorySwaps;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.OnlinePlaylistManager.PlaylistPopulation
// 0x000C
struct UOnlinePlaylistManager_FPlaylistPopulation
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WorldwideTotal;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RegionTotal;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineSubsystemCommonImpl.SanitizeCallbackData
// 0x0020
struct FSanitizeCallbackData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             Callback;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FString                                     Comment;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadMcp.TitleFileMcp
// 0x0004(0x0020 - 0x001C)
struct FTitleFileMcp : FTitleFile
{
	struct FPointer                                    HttpDownloader;                                   		// 0x001C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0064
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                XpLevel;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	struct FDouble                                     Mu;                                               		// 0x0050 (0x0008) [0x0000000000000000]              
	struct FDouble                                     Sigma;                                            		// 0x0058 (0x0008) [0x0000000000000000]              
	float                                              ElapsedSessionTime;                               		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x0058
struct FPartyReservation
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0004 (0x0048) [0x0000000000000000]              
	TArray< struct FPlayerReservation >                PartyMembers;                                     		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x0050
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000000000]              
	float                                              ElapsedHeartbeatTime;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x004C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct IpDrv.TitleFileDownloadCache.TitleFileCacheEntry
// 0x0020(0x003C - 0x001C)
struct FTitleFileCacheEntry : FTitleFile
{
	struct FString                                     LogicalName;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Hash;                                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      FileOp;                                           		// 0x0034 (0x0001) [0x0000000000000000]              
	struct FPointer                                    Ar;                                               		// 0x0038 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif