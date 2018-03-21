/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.h
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

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
/*enum ESteamMatchmakingType
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
/*enum ELeaderboardSortType
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
/*enum ELeaderboardRequestType
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
/*enum ELeaderboardFormat
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_MAX                                             = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
/*enum ELeaderboardUpdateType
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
/*enum EMuteType
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0028 (0x02D4 - 0x02AC)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:
	TArray< unsigned char >                            SessionTicket;                                    		// 0x02AC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< unsigned char >                            EncryptedTicket;                                  		// 0x02B8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x02C4 (0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SessionTicketHandle
	unsigned char                                      UnknownData01[ 0x8 ];                             		// 0x02CC (0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EncryptedTicketHandle

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3209 ];

		return pClassPointer;
	};

	bool RequiresMTXAuthorizationCode ( );
	bool RequiresAuthorizationCode ( );
	bool IsRequestingAuthorizationCode ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback );
	bool RequestAuthorizationCode ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback );
	bool GetServerAddr ( struct FIpAddr* OutServerIP, int* OutServerPort );
	bool GetServerUniqueId ( struct FUniqueNetId* OutServerUID );
	bool VerifyServerAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID );
	bool CreateServerAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int* OutAuthTicketUID );
	bool VerifyClientAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID );
	bool CreateClientAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID );
	bool SendServerAuthRequest ( struct FUniqueNetId ServerUID );
	bool SendClientAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID );
};

UClass* UOnlineAuthInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks
// 0x00DC (0x0118 - 0x003C)
class UOnlineCommunityContentInterfaceSteamworks : public UObject
{
public:
	class UOnlineSubsystemSteamworks*                  OwningSubsystem;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	struct FWorkshopItemData                           WorkshopItem;                                     		// 0x0040 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDownloadedWorkshopData__Delegate;             		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadContentListComplete__Delegate;            		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsContentListComplete__Delegate;     		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUploadContentComplete__Delegate;              		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDownloadContentComplete__Delegate;            		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnGetContentPayloadComplete__Delegate;          		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x010C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3211 ];

		return pClassPointer;
	};

	void UpdateWorkshopItemUploadProgress ( );
	void DownloadAllWorkshopData ( struct FScriptDelegate Callback );
	void CreateWorkshopItem ( );
	void RateContent ( unsigned char PlayerNum, int NewRating, struct FCommunityContentFile* FileToRate );
	void ClearGetContentPayloadCompleteDelegate ( struct FScriptDelegate GetContentPayloadCompleteDelegate );
	void AddGetContentPayloadCompleteDelegate ( struct FScriptDelegate GetContentPayloadCompleteDelegate );
	void OnGetContentPayloadComplete ( unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray< unsigned char >* Payload );
	bool GetContentPayload ( unsigned char PlayerNum, struct FCommunityContentFile* FileDownloaded );
	void ClearDownloadContentCompleteDelegate ( struct FScriptDelegate DownloadContentCompleteDelegate );
	void AddDownloadContentCompleteDelegate ( struct FScriptDelegate DownloadContentCompleteDelegate );
	void OnDownloadContentComplete ( unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray< unsigned char > Payload );
	bool DownloadContent ( unsigned char PlayerNum, struct FCommunityContentFile* FileToDownload );
	void ClearUploadContentCompleteDelegate ( struct FScriptDelegate UploadContentCompleteDelegate );
	void AddUploadContentCompleteDelegate ( struct FScriptDelegate UploadContentCompleteDelegate );
	void OnUploadContentComplete ( unsigned long bWasSuccessful, struct FCommunityContentFile UploadedFile );
	bool UploadContent ( unsigned char PlayerNum, TArray< unsigned char >* Payload, struct FCommunityContentMetadata* MetaData );
	bool GetFriendsContentList ( unsigned char PlayerNum, struct FOnlineFriend* Friend, TArray< struct FCommunityContentFile >* ContentFiles );
	void ClearReadFriendsContentListCompleteDelegate ( struct FScriptDelegate ReadFriendsContentListCompleteDelegate );
	void AddReadFriendsContentListCompleteDelegate ( struct FScriptDelegate ReadFriendsContentListCompleteDelegate );
	void OnReadFriendsContentListComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsContentList ( unsigned char PlayerNum, int StartAt, int NumToRead, TArray< struct FOnlineFriend >* Friends );
	bool GetContentList ( unsigned char PlayerNum, TArray< struct FCommunityContentFile >* ContentFiles );
	void ClearReadContentListCompleteDelegate ( struct FScriptDelegate ReadContentListCompleteDelegate );
	void AddReadContentListCompleteDelegate ( struct FScriptDelegate ReadContentListCompleteDelegate );
	void OnReadContentListComplete ( unsigned long bWasSuccessful, TArray< struct FCommunityContentFile > ContentFiles );
	bool ReadContentList ( unsigned char PlayerNum, struct FUniqueNetId NetId, struct FString Path, int StartAt, int NumToRead );
	void Exit ( );
	bool Init ( );
	void OnDownloadedWorkshopData ( unsigned long bSuccess, TArray< struct FDownloadedWorkshopData >* Items );
};

UClass* UOnlineCommunityContentInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0160 (0x0380 - 0x0220)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	struct FMatchmakingQueryState                      ServerBrowserSearchQuery;                         		// 0x0220 (0x0054) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FMatchmakingQueryState                      InviteSearchQuery;                                		// 0x0274 (0x0054) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              ServerBrowserTimeout;                             		// 0x02C8 (0x0004) [0x0000000000000000]              
	float                                              InviteTimeout;                                    		// 0x02CC (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                InviteServerUID;                                  		// 0x02D0 (0x0048) [0x0000000000000002]              ( CPF_Const )
	class UOnlineGameSearch*                           InviteGameSearch;                                 		// 0x0318 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     InviteLocationUrl;                                		// 0x031C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x0328 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x0334 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFilterEngineBuild : 1;                           		// 0x0340 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FFilterKeyToSteamKeyMapping >       FilterKeyToSteamKeyMap;                           		// 0x0344 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0350 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0354 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0360 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0364 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0370 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0374 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3213 ];

		return pClassPointer;
	};

	void PrintDebugInfoNative ( class UDebugDrawer* Drawer );
	void PrintDebugInfo ( class UDebugDrawer* Drawer );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void OnGameInviteAccepted ( struct FString ErrorString, struct FOnlineGameSearchResult* InviteResult );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
};

UClass* UOnlineGameInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet
// 0x0038 (0x0258 - 0x0220)
class UOnlineGameInterfaceSteamworks_PsyNet : public UOnlineGameInterfaceImpl
{
public:
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0238 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x023C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0248 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x024C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3215 ];

		return pClassPointer;
	};

	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	void SetFriendJoinLocation ( struct FUniqueNetId JoinablePlayerID, struct FString ServerAddress, unsigned char Visibility );
};

UClass* UOnlineGameInterfaceSteamworks_PsyNet::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0038 (0x0220 - 0x01E8)
class UOnlineLobbyInterfaceSteamworks : public UOnlineLobbyInterfaceImpl
{
public:
	TArray< struct FLobbyMetaData >                    CreateLobbySettings;                              		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueLobbyId                              PendingCreateLobbyResult;                         		// 0x01F4 (0x000C) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bLobbySearchInProgress : 1;                       		// 0x0200 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	TArray< struct FString >                           LobbyMemberKeys;                                  		// 0x0204 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyKicked__Delegate;                        		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0214 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3217 ];

		return pClassPointer;
	};

	bool KickPlayer ( unsigned char Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID );
	bool GetLobbyFromCommandline ( unsigned long bMarkAsJoined, struct FUniqueLobbyId* LobbyId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId );
	bool InviteToLobby ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID );
	bool SetLobbyOwner ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwner );
	bool SetLobbyLock ( unsigned long bLocked, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyType ( unsigned char Type, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyServer ( struct FString ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID );
	bool RemoveLobbySetting ( struct FString Key, struct FUniqueLobbyId* LobbyId );
	bool SetLobbySetting ( struct FString Key, struct FString Value, struct FUniqueLobbyId* LobbyId );
	bool GetLobbyAdmin ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId );
	void OnLobbyKicked ( int AdminIndex, struct FActiveLobbyInfo* Lobby );
	bool SendLobbyBinaryData ( struct FUniqueLobbyId* LobbyId, TArray< unsigned char >* Data );
	bool SendLobbyMessage ( struct FString Message, struct FUniqueLobbyId* LobbyId );
	bool SetLobbyUserSetting ( struct FString Key, struct FString Value, struct FUniqueLobbyId* LobbyId );
	bool LeaveLobby ( struct FUniqueLobbyId* LobbyId );
	bool JoinLobby ( int LocalPlayerNum, struct FUniqueLobbyId* LobbyId );
	bool UpdateFoundLobbies ( struct FUniqueLobbyId LobbyId );
	bool FindLobbies ( int MaxResults, TArray< struct FLobbyFilter > Filters, TArray< struct FLobbySortFilter > SortFilters, int MinSlots, unsigned char Distance );
	bool CreateLobby ( int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray< struct FLobbyMetaData > InitialSettings );
};

UClass* UOnlineLobbyInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x07E8 (0x09C4 - 0x01DC)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	TArray< struct FName >                             UnlockedDLC;                                      		// 0x01DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnlockedDLCDelegates;                             		// 0x01E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bStoringAchievement : 1;                          		// 0x01F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClientStatsStorePending : 1;                     		// 0x01F4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGSStatsStoresSuccess : 1;                        		// 0x01F4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOriginalAppOwner : 1;                            		// 0x01F4 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bNeedsKeyboardTicking : 1;                        		// 0x01F4 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bLastHasConnection : 1;                           		// 0x01F4 (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	unsigned long                                      bIsStatsSessionOk : 1;                            		// 0x01F4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHasSteamworksAccount : 1;                        		// 0x01F4 (0x0004) [0x0000000000004002] [0x00000080] ( CPF_Const | CPF_Config )
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x01F4 (0x0004) [0x0000000000004002] [0x00000100] ( CPF_Const | CPF_Config )
	unsigned long                                      bShowIPCCount : 1;                                		// 0x01F4 (0x0004) [0x0000000000004002] [0x00000200] ( CPF_Const | CPF_Config )
	unsigned long                                      bInterceptFriendMessages : 1;                     		// 0x01F4 (0x0004) [0x0000000000004000] [0x00000400] ( CPF_Config )
	int                                                TotalGSStatsStoresPending;                        		// 0x01F8 (0x0004) [0x0000000000000000]              
	unsigned char                                      UserStatsReceivedState;                           		// 0x01FC (0x0001) [0x0000000000000000]              
	unsigned char                                      LoggedInStatus;                                   		// 0x01FD (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      KeyboardInputWasCanceled;                         		// 0x01FE (0x0001) [0x0000000000000000]              
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x01FF (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x0200 (0x0001) [0x0000000000004000]              ( CPF_Config )
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                    		// 0x0204 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LocalProfileName;                                 		// 0x0208 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x0214 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0220 (0x0048) [0x0000000000000002]              ( CPF_Const )
	int                                                LoggedInPlayerNum;                                		// 0x0268 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LoggedInCountry;                                  		// 0x026C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      AvatarSizes;                                      		// 0x0278 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x0290 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LocalPlayerStorageReadDelegates;                  		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LocalPlayerStorageWriteDelegates;                 		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemotePlayerStorageReadDelegates;                 		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x02F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x0300 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x0318 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0324 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LinkStatusDelegates;                              		// 0x0330 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x033C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x0348 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x0354 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EnumerateUserFilesCompleteDelegates;              		// 0x0360 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadUserFileCompleteDelegates;                    		// 0x036C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteUserFileCompleteDelegates;                   		// 0x0378 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeleteUserFileCompleteDelegates;                  		// 0x0384 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SharedFileReadCompleteDelegates;                  		// 0x0390 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SharedFileWriteCompleteDelegates;                 		// 0x039C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ExternalUIChangeDelegates;                        		// 0x03A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputCompleteDelegates;                   		// 0x03B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     KeyboardInputResults;                             		// 0x03C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLocalTalkerSteam                           CurrentLocalTalker;                               		// 0x03CC (0x0050) [0x0000000000000000]              
	float                                              LastLocalTalkerNotificationTime;                  		// 0x041C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              MaxTalkerNotificationTime;                        		// 0x0420 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FUniqueNetId >                      PendingRequestUserInformation;                    		// 0x0424 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x0430 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AppID;                                            		// 0x043C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x0440 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPendingPlayerStats >               PendingStats;                                     		// 0x0444 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     KeyboardResultsString;                            		// 0x0450 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x045C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x0468 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendMessageReceivedDelegates;                   		// 0x0474 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AddFriendByNameCompleteDelegates;                 		// 0x0480 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProfileSettingsCache                       ProfileCache;                                     		// 0x048C (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache;                               		// 0x04B4 (0x0004) [0x0000000000000000]              
	struct FString                                     CachedFriendMessage;                              		// 0x04B8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FDeviceIdCache                              DeviceCache;                                      		// 0x04C4 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LocationUrlsForInvites;                           		// 0x04E4 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LocationUrl;                                      		// 0x04F0 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReceivedGameInviteDelegates;                      		// 0x04FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x0508 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetNumberOfCurrentPlayersCompleteDelegates;       		// 0x0514 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterHostStatGuidCompleteDelegates;            		// 0x0520 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineFriendMessage >              CachedFriendMessages;                             		// 0x052C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineStatusMapping >              StatusMappings;                                   		// 0x0538 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DefaultStatus;                                    		// 0x0544 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteMessage;                                		// 0x0550 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FControllerConnectionState                  ControllerStates[ 0x4 ];                          		// 0x055C (0x0020) [0x0000000000000000]              
	float                                              ConnectionPresenceTimeInterval;                   		// 0x057C (0x0004) [0x0000000000000000]              
	float                                              ConnectionPresenceElapsedTime;                    		// 0x0580 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     EncryptedProductKey;                              		// 0x0584 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x0590 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSteamUserCloud >                   UserCloudFiles;                                   		// 0x059C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSteamUserCloudMetadata >           UserCloudMetadata;                                		// 0x05A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFile >                        SharedFileCache;                                  		// 0x05B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQueuedAvatarRequest >              QueuedAvatarRequests;                             		// 0x05C0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FAchievementMappingInfo >           AchievementMappings;                              		// 0x05CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FAchievementProgressStat >          PendingAchievementProgress;                       		// 0x05D8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLeaderboardTemplate >              LeaderboardList;                                  		// 0x05E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardRead >          DeferredLeaderboardReads;                         		// 0x05F0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         DeferredLeaderboardWrites;                        		// 0x05FC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         PendingLeaderboardStats;                          		// 0x0608 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FViewIdToLeaderboardName >          LeaderboardNameMappings;                          		// 0x0614 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< int >                                      GameServerStatsMappings;                          		// 0x0620 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UOnlinePurchaseInterfaceSteamworks*          CachedPurchaseInt;                                		// 0x062C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                    		// 0x0630 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FIpAddr >                           PendingRedirects;                                 		// 0x0634 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UOnlineLobbyInterfaceSteamworks*             LobbyInterfaceImpl;                               		// 0x0640 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;                 		// 0x0644 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0648 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;                 		// 0x0654 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0658 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;                 		// 0x0664 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0668 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x0674 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0678 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x0684 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0688 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x0694 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0698 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x06A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x06A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;                 		// 0x06B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x06B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x06C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x06C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x06D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x06D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x06E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x06E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x06F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x06F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0704 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x0708 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0714 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x0718 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0724 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x0728 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0734 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x0738 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0744 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData16[ 0x4 ];                             		// 0x0748 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0754 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x0758 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0764 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData18[ 0x4 ];                             		// 0x0768 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0774 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData19[ 0x4 ];                             		// 0x0778 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0784 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData20[ 0x4 ];                             		// 0x0788 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0794 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData21[ 0x4 ];                             		// 0x0798 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x07A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData22[ 0x4 ];                             		// 0x07A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x07B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData23[ 0x4 ];                             		// 0x07B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                       		// 0x07C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData24[ 0x4 ];                             		// 0x07C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUserRestored__Delegate;                       		// 0x07D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData25[ 0x4 ];                             		// 0x07D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x07E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData26[ 0x4 ];                             		// 0x07E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x07F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData27[ 0x4 ];                             		// 0x07F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0804 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData28[ 0x4 ];                             		// 0x0808 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0814 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData29[ 0x4 ];                             		// 0x0818 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0824 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData30[ 0x4 ];                             		// 0x0828 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0834 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData31[ 0x4 ];                             		// 0x0838 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0844 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData32[ 0x4 ];                             		// 0x0848 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0854 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData33[ 0x4 ];                             		// 0x0858 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0864 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData34[ 0x4 ];                             		// 0x0868 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0874 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData35[ 0x4 ];                             		// 0x0878 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0884 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData36[ 0x4 ];                             		// 0x0888 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0894 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData37[ 0x4 ];                             		// 0x0898 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x08A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData38[ 0x4 ];                             		// 0x08A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x08B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData39[ 0x4 ];                             		// 0x08B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x08C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData40[ 0x4 ];                             		// 0x08C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;		// 0x08D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData41[ 0x4 ];                             		// 0x08D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;         		// 0x08E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData42[ 0x4 ];                             		// 0x08E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;               		// 0x08F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData43[ 0x4 ];                             		// 0x08F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;              		// 0x0904 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData44[ 0x4 ];                             		// 0x0908 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;             		// 0x0914 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData45[ 0x4 ];                             		// 0x0918 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;             		// 0x0924 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData46[ 0x4 ];                             		// 0x0928 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;            		// 0x0934 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData47[ 0x4 ];                             		// 0x0938 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;      		// 0x0944 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData48[ 0x4 ];                             		// 0x0948 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;                  		// 0x0954 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData49[ 0x4 ];                             		// 0x0958 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTrialStatusChange__Delegate;                  		// 0x0964 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData50[ 0x4 ];                             		// 0x0968 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;      		// 0x0974 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData51[ 0x4 ];                             		// 0x0978 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;               		// 0x0984 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData52[ 0x4 ];                             		// 0x0988 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;              		// 0x0994 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData53[ 0x4 ];                             		// 0x0998 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;                  		// 0x09A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData54[ 0x4 ];                             		// 0x09A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnSystemUserControllerPairingChanged__Delegate; 		// 0x09B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData55[ 0x4 ];                             		// 0x09B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3219 ];

		return pClassPointer;
	};

	bool AllowPsyNetParty ( );
	bool CheckParentalControlInfo ( unsigned long bShowUi );
	bool RecordPlayersRecentlyMetKeys ( unsigned char LocalUserNum, TArray< struct FFriendHistoryKey > PlayerKeys );
	bool GetPlayHistoryRegistrationKey ( TArray< unsigned char >* Key );
	bool IsOriginalAppOwner ( );
	void UpdateSessionStatusFromPlayers ( int CurrentPlayerCount, int numBotPlayers );
	bool IsAchievementUnlocked ( unsigned char LocalUserNum, int AchievementId );
	bool IsRichPresenceLocalized ( );
	void UpdateGameProgress ( unsigned char LocalPlayerNum, float Progress );
	void FinishOnlineGameSession ( struct FString ServerID );
	void StartOnlineGameSession ( struct FString ServerID );
	void ClearSystemUserControllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate );
	void AddSystemUserControllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate );
	void OnSystemUserControllerPairingChanged ( int NewLocalUserNum, int PreviousLocalUserNum );
	void ClearAccountPickerInput ( );
	void LookForAccountPickerInput ( );
	void AddPlayerToSession ( unsigned char ControllerId );
	void ClearPrimaryPlayer ( );
	void RemoveUserAssociation ( unsigned char ControllerId );
	void MapEnd ( );
	void MapStart ( );
	void OnlineMatchEnd ( );
	void OnlineMatchStart ( struct FString MapName );
	void SetSessionDifficultyLevel ( int DifficultyLevel );
	void SetSessionGameplayModeName ( struct FName GameplayModeName );
	void SetSessionGameplayMode ( int GameplayMode );
	TArray< unsigned long > GetSyncedAchievements ( unsigned char LocalUserNum );
	void SetPlayedWith ( struct FUniqueNetId PlayerNetId );
	bool HandleBootMessage ( );
	void ClearErrorDialogClosedDelegate ( struct FScriptDelegate InDelegate );
	void AddErrorDialogClosedDelegate ( struct FScriptDelegate InDelegate );
	void OnErrorDialogClosed ( int LocalUserNum );
	void ClearCloseKickPlayerDialogDelegate ( struct FScriptDelegate InDelegate );
	void AddCloseKickPlayerDialogDelegate ( struct FScriptDelegate InDelegate );
	void OnCloseKickPlayerDialog ( );
	void ClearCommerceDialogClosedDelegate ( struct FScriptDelegate InDelegate );
	void AddCommerceDialogClosedDelegate ( struct FScriptDelegate InDelegate );
	void OnCommerceDialogClosed ( );
	void GetPlayerAccountID ( struct FUniqueNetId NetId );
	bool WordFilterSanitizeString ( struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID );
	void RemoveCanPlayOnlineChangedDelegate ( struct FScriptDelegate Callback );
	void AddCanPlayOnlineChangedDelegate ( struct FScriptDelegate Callback );
	bool RecordPlayersRecentlyMet ( unsigned char LocalUserNum, struct FString GameDescription, TArray< struct FUniqueNetId >* Players );
	void ClearSaveDataNoSpaceDialogCompleteDelegate ( struct FScriptDelegate DeviceDelegate );
	void AddSaveDataNoSpaceDialogCompleteDelegate ( struct FScriptDelegate DeviceDelegate );
	void OnSaveDataNoSpaceDialogComplete ( unsigned long bContinueWithoutSave );
	void ClearTrialStatusChangeDelegate ( struct FScriptDelegate InDelegate );
	void AddTrialStatusChangeDelegate ( struct FScriptDelegate InDelegate );
	void OnTrialStatusChange ( );
	bool IsTrialVersion ( );
	void ClearUnlockedDLCChangeDelegate ( struct FScriptDelegate InDelegate );
	void AddUnlockedDLCChangeDelegate ( struct FScriptDelegate InDelegate );
	TArray< struct FName > GetUnlockedDLC ( );
	void OnUnlockedDLCChange ( );
	bool GetOverlayEnabled ( );
	int GetDLCPurchaseTime ( struct FName AppName );
	void HandleGetUserInfoComplete ( struct FName NewCurrency, struct FString NewCountry );
	void GetPlayerCountry ( unsigned char LocalUserNum );
	struct FString GetPlayerLanguage ( unsigned char LocalUserNum );
	void ClearReadPlayerCountryDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate );
	void AddReadPlayerCountryDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate );
	bool AnyPlayerChatRestricted ( );
	void InitializeTrophyAPI ( );
	void OpenStoreForItems ( unsigned char LocalUserNum, TArray< struct FString > Targets );
	void OpenStoreForDLC ( unsigned char LocalUserNum, struct FName DLC );
	void OpenStoreForItemsAsync ( unsigned char LocalUserNum, TArray< struct FString > Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate );
	void OnStorePurchaseCompleteDelegate ( );
	void OpenErrorDialog ( unsigned char LocalUserNum, unsigned char ErrorCode );
	void OpenPS4DisplayMode ( unsigned char LocalUserNum, unsigned char DisplayMode, TArray< struct FString > Targets, int ServiceLabel );
	void ResetControllerColor ( int ControllerId );
	void SetControllerColor ( int ControllerId, struct FColor NewColor );
	bool AddInGamePost ( struct FString InPostID, unsigned char LocalUserNum, TArray< struct FString > StringReplaceList );
	bool IsEnabled ( );
	void SetRichPresence ( unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString );
	void ClearAllDelegates ( );
	void ClearWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate );
	void AddWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate );
	bool WriteSharedFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* Contents );
	void OnWriteSharedFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle );
	void ClearReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate );
	void AddReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate );
	bool ReadSharedFile ( struct FString SharedHandle );
	void OnReadSharedFileComplete ( unsigned long bWasSuccessful, struct FString SharedHandle );
	bool ClearSharedFile ( struct FString SharedHandle );
	bool ClearSharedFiles ( );
	bool GetSharedFileContents ( struct FString SharedHandle, TArray< unsigned char >* FileContents );
	void ClearDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate );
	void AddDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate );
	bool DeleteUserFile ( struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete );
	void OnDeleteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void ClearWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate );
	void AddWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate );
	bool WriteUserFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	void OnWriteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void ClearReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate );
	void AddReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate );
	bool ReadUserFile ( struct FString UserId, struct FString Filename );
	void OnReadUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void GetUserFileList ( struct FString UserId, TArray< struct FEmsFile >* UserFiles );
	void ClearEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate );
	void AddEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate );
	void EnumerateUserFiles ( struct FString UserId );
	void OnEnumerateUserFilesComplete ( unsigned long bWasSuccessful, struct FString UserId );
	bool ClearFile ( struct FString UserId, struct FString Filename );
	bool ClearFiles ( struct FString UserId );
	bool GetFileContents ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	bool WriteUserFileInternal ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	bool SetVoiceReceiveVolume ( float VoiceVolume );
	bool GetFriendJoinURL ( struct FUniqueNetId FriendUID, struct FString* ServerURL, struct FString* ServerUID );
	bool GetCommandlineJoinURL ( unsigned long bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID );
	bool Int64ToUniqueNetId ( struct FString UIDString, struct FUniqueNetId* OutUID );
	struct FString UniqueNetIdToInt64 ( struct FUniqueNetId* Uid );
	void NotifyVOIPPlaybackFinished ( class UAudioComponent* VOIPAudioComponent );
	void OnVOIPPlaybackFinished ( class UAudioComponent* AC );
	bool ShowProfileUI ( unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID );
	struct FString UniqueNetIdToPlayerName ( struct FUniqueNetId* Uid );
	bool DisplayAchievementProgress ( int AchievementId, int ProgressCount, int MaxProgress );
	bool CreateLeaderboard ( struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat );
	bool ResetStats ( unsigned long bResetAchievements );
	bool ShowCustomMessageUI ( unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients );
	void ClearCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId );
	class UOnlineProfileSettings* GetCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId );
	void ClearReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadCrossTitleProfileSettingsComplete ( unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful );
	bool ReadCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings );
	bool UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId );
	void GetSteamClanData ( TArray< struct FSteamPlayerClanData >* Results );
	void ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers );
	bool GetNumberOfCurrentPlayers ( );
	void ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, unsigned char Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate );
	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete );
	bool UpdateStat ( unsigned char LocalUserNum, struct FName StatName, int Points );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId UniqueId, struct FString PlayerName );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	void CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool HideKeyboardUI ( unsigned char LocalUserNum );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	int GetLocale ( );
	unsigned char GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	unsigned char GetCurrentConnectionStatus ( );
	bool IsControllerConnected ( int ControllerId );
	void ClearUserRestoredDelegate ( struct FScriptDelegate UserRestoredDelegate );
	void AddUserRestoredDelegate ( struct FScriptDelegate UserRestoredDelegate );
	void OnUserRestored ( unsigned char ControllerId );
	void ClearUserOrphanedDelegate ( struct FScriptDelegate UserOrphanedDelegate );
	void AddUserOrphanedDelegate ( struct FScriptDelegate UserOrphanedDelegate );
	void OnUserOrphaned ( unsigned char ControllerId );
	void ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void OnControllerChange ( int ControllerId, unsigned long bIsConnected );
	void SetNetworkNotificationPosition ( unsigned char NewPos );
	unsigned char GetNetworkNotificationPosition ( );
	void ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void OnExternalUIChange ( unsigned long bIsOpening );
	void ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void OnLinkStatusChange ( unsigned long bIsConnected );
	bool HasLinkConnection ( );
	struct FString eventGetPlayerNicknameFromIndex ( int UserIndex );
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void OnReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	bool ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows );
	bool ReadOnlineStatsByRank ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead );
	bool ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadOnlineStats ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players );
	bool SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj );
	bool SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId );
	void ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void OnRecognitionComplete ( );
	bool GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words );
	bool StopSpeechRecognition ( unsigned char LocalUserNum );
	bool StartSpeechRecognition ( unsigned char LocalUserNum );
	void StopNetworkedVoice ( unsigned char LocalUserNum );
	void StartNetworkedVoice ( unsigned char LocalUserNum );
	void ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking );
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority );
	bool IsHeadsetPresent ( unsigned char LocalUserNum );
	bool IsRemotePlayerTalking ( struct FUniqueNetId PlayerID );
	bool IsLocalPlayerTalking ( unsigned char LocalUserNum );
	bool UnregisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool RegisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool UnregisterLocalTalker ( unsigned char LocalUserNum );
	bool RegisterLocalTalker ( unsigned char LocalUserNum );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void GetFriendPresence ( struct FOnlineFriend* FriendData );
	void ClearFriendPresenceChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate );
	void AddFriendPresenceChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void ClearUserSignInCompleteDelegate ( struct FScriptDelegate UserSignInCompleteDelegate );
	void AddUserSignInCompleteDelegate ( struct FScriptDelegate UserSignInCompleteDelegate );
	void ClearUserSwitchCompleteDelegate ( struct FScriptDelegate UserSwitchCompleteDelegate );
	void AddUserSwitchCompleteDelegate ( struct FScriptDelegate UserSwitchCompleteDelegate );
	void SetPrimaryPlayerGamepadToLastInput ( );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool CanUploadFitnessData ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareKinectContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareWithSocialNetwork ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanBrowseInternet ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanAccessPremiumVideoContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanAccessPremiumContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanUseCloudStorage ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanRecordDVRClips ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShowPresenceInformation ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanViewPlayerProfiles ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanPurchaseContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanDownloadUserContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareUserCreatedContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanCommunicateVoice ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanCommunicateVideo ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	unsigned char CanCommunicate ( unsigned char LocalUserNum, unsigned char CommMethod, unsigned long bAttemptToResolve );
	bool CanPlayOnline ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	void SetKickPlayerDialogActive ( unsigned long Active );
	bool IsUserSwitchActive ( );
	void SetKickPreviousUser ( unsigned char LocalUserNum );
	bool SupportInGameLogin ( );
	bool ShowControllerUI ( );
	bool ShowLoginUIForOrphanedUser ( unsigned char LocalUserNum );
	bool ShowLoginUI ( unsigned char LocalUserNum, unsigned long bShowOnlineOnly );
	void FriendPresenceChange ( struct FUniqueNetId PlayerID );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	void OnUserSignInComplete ( unsigned char LocalUserNum );
	void OnUserSwitchComplete ( unsigned char LocalUserNum );
	void eventExit ( );
	bool eventInit ( );
	void CanPlayOnlineChanged ( unsigned char LocalUserNum );
};

UClass* UOnlineSubsystemSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks
// 0x0018 (0x0074 - 0x005C)
class UOnlinePurchaseInterfaceSteamworks : public UOnlinePurchaseInterfaceImpl
{
public:
	TArray< struct FAppPriceInfoRequest >              AppPriceInfoRequests;                             		// 0x005C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MicroTxnResponseDelegates;                        		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3221 ];

		return pClassPointer;
	};

	void ClearMicroTxnResponseDelegate ( struct FScriptDelegate ResponseMicroTxnDelegate );
	void AddMicroTxnResponseDelegate ( struct FScriptDelegate ResponseMicroTxnDelegate );
	struct FString FormatCurrency ( struct FString Currency, int Price );
	void HandleGetAppPriceInfoComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	bool GetAppPriceInfo ( struct FScriptDelegate Callback, struct FUniqueNetId* PlayerID, TArray< struct FName >* AppNames );
	bool AppIdToName ( struct FString AppID, unsigned long bOptional, struct FName* AppName );
	bool AppNameToId ( struct FName AppName, unsigned long bOptional, struct FString* AppID );
};

UClass* UOnlinePurchaseInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.SteamWorkshopCommandlet
// 0x0004 (0x0080 - 0x007C)
class USteamWorkshopCommandlet : public UCommandlet
{
public:
	class UOnlineSubsystemCommonImpl*                  OnlineSub;                                        		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3223 ];

		return pClassPointer;
	};

	bool eventInit ( );
};

UClass* USteamWorkshopCommandlet::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.SteamWorkshopEngine
// 0x0004 (0x07E0 - 0x07DC)
class USteamWorkshopEngine : public UGameEngine
{
public:
	unsigned long                                      bHasFinsihed : 1;                                 		// 0x07DC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3225 ];

		return pClassPointer;
	};

};

UClass* USteamWorkshopEngine::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0010 (0x01FC - 0x01EC)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	unsigned long                                      bSteamSocketsOnly : 1;                            		// 0x01EC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x01F0 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3227 ];

		return pClassPointer;
	};

};

UClass* UIpNetDriverSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0x9158 - 0x9158)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3230 ];

		return pClassPointer;
	};

};

UClass* UIpNetConnectionSteamworks::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif