/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_functions.h
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

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresMTXAuthorizationCode
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineAuthInterfaceSteamworks::RequiresMTXAuthorizationCode ( )
{
	static UFunction* pFnRequiresMTXAuthorizationCode = NULL;

	if ( ! pFnRequiresMTXAuthorizationCode )
		pFnRequiresMTXAuthorizationCode = (UFunction*) UObject::GObjObjects()->Data[ 45273 ];

	UOnlineAuthInterfaceSteamworks_execRequiresMTXAuthorizationCode_Parms RequiresMTXAuthorizationCode_Parms;

	this->ProcessEvent ( pFnRequiresMTXAuthorizationCode, &RequiresMTXAuthorizationCode_Parms, NULL );

	return RequiresMTXAuthorizationCode_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthorizationCode
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineAuthInterfaceSteamworks::RequiresAuthorizationCode ( )
{
	static UFunction* pFnRequiresAuthorizationCode = NULL;

	if ( ! pFnRequiresAuthorizationCode )
		pFnRequiresAuthorizationCode = (UFunction*) UObject::GObjObjects()->Data[ 45271 ];

	UOnlineAuthInterfaceSteamworks_execRequiresAuthorizationCode_Parms RequiresAuthorizationCode_Parms;

	this->ProcessEvent ( pFnRequiresAuthorizationCode, &RequiresAuthorizationCode_Parms, NULL );

	return RequiresAuthorizationCode_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.IsRequestingAuthorizationCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineAuthInterfaceSteamworks::IsRequestingAuthorizationCode ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback )
{
	static UFunction* pFnIsRequestingAuthorizationCode = NULL;

	if ( ! pFnIsRequestingAuthorizationCode )
		pFnIsRequestingAuthorizationCode = (UFunction*) UObject::GObjObjects()->Data[ 45267 ];

	UOnlineAuthInterfaceSteamworks_execIsRequestingAuthorizationCode_Parms IsRequestingAuthorizationCode_Parms;
	memcpy ( &IsRequestingAuthorizationCode_Parms.PlayerID, &PlayerID, 0x48 );
	memcpy ( &IsRequestingAuthorizationCode_Parms.Callback, &Callback, 0x10 );

	pFnIsRequestingAuthorizationCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRequestingAuthorizationCode, &IsRequestingAuthorizationCode_Parms, NULL );

	pFnIsRequestingAuthorizationCode->FunctionFlags |= 0x400;

	return IsRequestingAuthorizationCode_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthorizationCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineAuthInterfaceSteamworks::RequestAuthorizationCode ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback )
{
	static UFunction* pFnRequestAuthorizationCode = NULL;

	if ( ! pFnRequestAuthorizationCode )
		pFnRequestAuthorizationCode = (UFunction*) UObject::GObjObjects()->Data[ 45263 ];

	UOnlineAuthInterfaceSteamworks_execRequestAuthorizationCode_Parms RequestAuthorizationCode_Parms;
	memcpy ( &RequestAuthorizationCode_Parms.PlayerID, &PlayerID, 0x48 );
	memcpy ( &RequestAuthorizationCode_Parms.Callback, &Callback, 0x10 );

	pFnRequestAuthorizationCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestAuthorizationCode, &RequestAuthorizationCode_Parms, NULL );

	pFnRequestAuthorizationCode->FunctionFlags |= 0x400;

	return RequestAuthorizationCode_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FIpAddr                 OutServerIP                    ( CPF_Parm | CPF_OutParm )
// int                            OutServerPort                  ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::GetServerAddr ( struct FIpAddr* OutServerIP, int* OutServerPort )
{
	static UFunction* pFnGetServerAddr = NULL;

	if ( ! pFnGetServerAddr )
		pFnGetServerAddr = (UFunction*) UObject::GObjObjects()->Data[ 45259 ];

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Parms GetServerAddr_Parms;

	pFnGetServerAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerAddr, &GetServerAddr_Parms, NULL );

	pFnGetServerAddr->FunctionFlags |= 0x400;

	if ( OutServerIP )
		memcpy ( OutServerIP, &GetServerAddr_Parms.OutServerIP, 0x14 );

	if ( OutServerPort )
		*OutServerPort = GetServerAddr_Parms.OutServerPort;

	return GetServerAddr_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            OutServerUID                   ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId ( struct FUniqueNetId* OutServerUID )
{
	static UFunction* pFnGetServerUniqueId = NULL;

	if ( ! pFnGetServerUniqueId )
		pFnGetServerUniqueId = (UFunction*) UObject::GObjObjects()->Data[ 45256 ];

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Parms GetServerUniqueId_Parms;

	pFnGetServerUniqueId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerUniqueId, &GetServerUniqueId_Parms, NULL );

	pFnGetServerUniqueId->FunctionFlags |= 0x400;

	if ( OutServerUID )
		memcpy ( OutServerUID, &GetServerUniqueId_Parms.OutServerUID, 0x48 );

	return GetServerUniqueId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID )
{
	static UFunction* pFnVerifyServerAuthSession = NULL;

	if ( ! pFnVerifyServerAuthSession )
		pFnVerifyServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 45251 ];

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Parms VerifyServerAuthSession_Parms;
	memcpy ( &VerifyServerAuthSession_Parms.ServerUID, &ServerUID, 0x48 );
	memcpy ( &VerifyServerAuthSession_Parms.ServerIP, &ServerIP, 0x14 );
	VerifyServerAuthSession_Parms.AuthTicketUID = AuthTicketUID;

	pFnVerifyServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyServerAuthSession, &VerifyServerAuthSession_Parms, NULL );

	pFnVerifyServerAuthSession->FunctionFlags |= 0x400;

	return VerifyServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            OutAuthTicketUID               ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int* OutAuthTicketUID )
{
	static UFunction* pFnCreateServerAuthSession = NULL;

	if ( ! pFnCreateServerAuthSession )
		pFnCreateServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 45245 ];

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Parms CreateServerAuthSession_Parms;
	memcpy ( &CreateServerAuthSession_Parms.ClientUID, &ClientUID, 0x48 );
	memcpy ( &CreateServerAuthSession_Parms.ClientIP, &ClientIP, 0x14 );
	CreateServerAuthSession_Parms.ClientPort = ClientPort;

	pFnCreateServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateServerAuthSession, &CreateServerAuthSession_Parms, NULL );

	pFnCreateServerAuthSession->FunctionFlags |= 0x400;

	if ( OutAuthTicketUID )
		*OutAuthTicketUID = CreateServerAuthSession_Parms.OutAuthTicketUID;

	return CreateServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID )
{
	static UFunction* pFnVerifyClientAuthSession = NULL;

	if ( ! pFnVerifyClientAuthSession )
		pFnVerifyClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 45239 ];

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Parms VerifyClientAuthSession_Parms;
	memcpy ( &VerifyClientAuthSession_Parms.ClientUID, &ClientUID, 0x48 );
	memcpy ( &VerifyClientAuthSession_Parms.ClientIP, &ClientIP, 0x14 );
	VerifyClientAuthSession_Parms.ClientPort = ClientPort;
	VerifyClientAuthSession_Parms.AuthTicketUID = AuthTicketUID;

	pFnVerifyClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyClientAuthSession, &VerifyClientAuthSession_Parms, NULL );

	pFnVerifyClientAuthSession->FunctionFlags |= 0x400;

	return VerifyClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            ServerPort                     ( CPF_Parm )
// unsigned long                  bSecure                        ( CPF_Parm )
// int                            OutAuthTicketUID               ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID )
{
	static UFunction* pFnCreateClientAuthSession = NULL;

	if ( ! pFnCreateClientAuthSession )
		pFnCreateClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 45232 ];

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Parms CreateClientAuthSession_Parms;
	memcpy ( &CreateClientAuthSession_Parms.ServerUID, &ServerUID, 0x48 );
	memcpy ( &CreateClientAuthSession_Parms.ServerIP, &ServerIP, 0x14 );
	CreateClientAuthSession_Parms.ServerPort = ServerPort;
	CreateClientAuthSession_Parms.bSecure = bSecure;

	pFnCreateClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateClientAuthSession, &CreateClientAuthSession_Parms, NULL );

	pFnCreateClientAuthSession->FunctionFlags |= 0x400;

	if ( OutAuthTicketUID )
		*OutAuthTicketUID = CreateClientAuthSession_Parms.OutAuthTicketUID;

	return CreateClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest ( struct FUniqueNetId ServerUID )
{
	static UFunction* pFnSendServerAuthRequest = NULL;

	if ( ! pFnSendServerAuthRequest )
		pFnSendServerAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 45229 ];

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Parms SendServerAuthRequest_Parms;
	memcpy ( &SendServerAuthRequest_Parms.ServerUID, &ServerUID, 0x48 );

	pFnSendServerAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendServerAuthRequest, &SendServerAuthRequest_Parms, NULL );

	pFnSendServerAuthRequest->FunctionFlags |= 0x400;

	return SendServerAuthRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID )
{
	static UFunction* pFnSendClientAuthRequest = NULL;

	if ( ! pFnSendClientAuthRequest )
		pFnSendClientAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 45225 ];

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Parms SendClientAuthRequest_Parms;
	SendClientAuthRequest_Parms.ClientConnection = ClientConnection;
	memcpy ( &SendClientAuthRequest_Parms.ClientUID, &ClientUID, 0x48 );

	pFnSendClientAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendClientAuthRequest, &SendClientAuthRequest_Parms, NULL );

	pFnSendClientAuthRequest->FunctionFlags |= 0x400;

	return SendClientAuthRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineCommunityContentInterfaceSteamworks::UpdateWorkshopItemUploadProgress ( )
{
	static UFunction* pFnUpdateWorkshopItemUploadProgress = NULL;

	if ( ! pFnUpdateWorkshopItemUploadProgress )
		pFnUpdateWorkshopItemUploadProgress = (UFunction*) UObject::GObjObjects()->Data[ 45388 ];

	UOnlineCommunityContentInterfaceSteamworks_execUpdateWorkshopItemUploadProgress_Parms UpdateWorkshopItemUploadProgress_Parms;

	pFnUpdateWorkshopItemUploadProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateWorkshopItemUploadProgress, &UpdateWorkshopItemUploadProgress_Parms, NULL );

	pFnUpdateWorkshopItemUploadProgress->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::DownloadAllWorkshopData ( struct FScriptDelegate Callback )
{
	static UFunction* pFnDownloadAllWorkshopData = NULL;

	if ( ! pFnDownloadAllWorkshopData )
		pFnDownloadAllWorkshopData = (UFunction*) UObject::GObjObjects()->Data[ 45386 ];

	UOnlineCommunityContentInterfaceSteamworks_execDownloadAllWorkshopData_Parms DownloadAllWorkshopData_Parms;
	memcpy ( &DownloadAllWorkshopData_Parms.Callback, &Callback, 0x10 );

	pFnDownloadAllWorkshopData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDownloadAllWorkshopData, &DownloadAllWorkshopData_Parms, NULL );

	pFnDownloadAllWorkshopData->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineCommunityContentInterfaceSteamworks::CreateWorkshopItem ( )
{
	static UFunction* pFnCreateWorkshopItem = NULL;

	if ( ! pFnCreateWorkshopItem )
		pFnCreateWorkshopItem = (UFunction*) UObject::GObjObjects()->Data[ 45385 ];

	UOnlineCommunityContentInterfaceSteamworks_execCreateWorkshopItem_Parms CreateWorkshopItem_Parms;

	pFnCreateWorkshopItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateWorkshopItem, &CreateWorkshopItem_Parms, NULL );

	pFnCreateWorkshopItem->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent
// [0x00420000] 
// Parameters infos:
// unsigned char                  PlayerNum                      ( CPF_Parm )
// int                            NewRating                      ( CPF_Parm )
// struct FCommunityContentFile   FileToRate                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::RateContent ( unsigned char PlayerNum, int NewRating, struct FCommunityContentFile* FileToRate )
{
	static UFunction* pFnRateContent = NULL;

	if ( ! pFnRateContent )
		pFnRateContent = (UFunction*) UObject::GObjObjects()->Data[ 45381 ];

	UOnlineCommunityContentInterfaceSteamworks_execRateContent_Parms RateContent_Parms;
	RateContent_Parms.PlayerNum = PlayerNum;
	RateContent_Parms.NewRating = NewRating;

	this->ProcessEvent ( pFnRateContent, &RateContent_Parms, NULL );

	if ( FileToRate )
		memcpy ( FileToRate, &RateContent_Parms.FileToRate, 0x80 );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::ClearGetContentPayloadCompleteDelegate ( struct FScriptDelegate GetContentPayloadCompleteDelegate )
{
	static UFunction* pFnClearGetContentPayloadCompleteDelegate = NULL;

	if ( ! pFnClearGetContentPayloadCompleteDelegate )
		pFnClearGetContentPayloadCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45379 ];

	UOnlineCommunityContentInterfaceSteamworks_execClearGetContentPayloadCompleteDelegate_Parms ClearGetContentPayloadCompleteDelegate_Parms;
	memcpy ( &ClearGetContentPayloadCompleteDelegate_Parms.GetContentPayloadCompleteDelegate, &GetContentPayloadCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGetContentPayloadCompleteDelegate, &ClearGetContentPayloadCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::AddGetContentPayloadCompleteDelegate ( struct FScriptDelegate GetContentPayloadCompleteDelegate )
{
	static UFunction* pFnAddGetContentPayloadCompleteDelegate = NULL;

	if ( ! pFnAddGetContentPayloadCompleteDelegate )
		pFnAddGetContentPayloadCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45377 ];

	UOnlineCommunityContentInterfaceSteamworks_execAddGetContentPayloadCompleteDelegate_Parms AddGetContentPayloadCompleteDelegate_Parms;
	memcpy ( &AddGetContentPayloadCompleteDelegate_Parms.GetContentPayloadCompleteDelegate, &GetContentPayloadCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGetContentPayloadCompleteDelegate, &AddGetContentPayloadCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete
// [0x00520000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FCommunityContentFile   FileDownloaded                 ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        Payload                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::OnGetContentPayloadComplete ( unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray< unsigned char >* Payload )
{
	static UFunction* pFnOnGetContentPayloadComplete = NULL;

	if ( ! pFnOnGetContentPayloadComplete )
		pFnOnGetContentPayloadComplete = (UFunction*) UObject::GObjObjects()->Data[ 45289 ];

	UOnlineCommunityContentInterfaceSteamworks_execOnGetContentPayloadComplete_Parms OnGetContentPayloadComplete_Parms;
	OnGetContentPayloadComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnGetContentPayloadComplete_Parms.FileDownloaded, &FileDownloaded, 0x80 );

	this->ProcessEvent ( pFnOnGetContentPayloadComplete, &OnGetContentPayloadComplete_Parms, NULL );

	if ( Payload )
		memcpy ( Payload, &OnGetContentPayloadComplete_Parms.Payload, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FCommunityContentFile   FileDownloaded                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineCommunityContentInterfaceSteamworks::GetContentPayload ( unsigned char PlayerNum, struct FCommunityContentFile* FileDownloaded )
{
	static UFunction* pFnGetContentPayload = NULL;

	if ( ! pFnGetContentPayload )
		pFnGetContentPayload = (UFunction*) UObject::GObjObjects()->Data[ 45369 ];

	UOnlineCommunityContentInterfaceSteamworks_execGetContentPayload_Parms GetContentPayload_Parms;
	GetContentPayload_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent ( pFnGetContentPayload, &GetContentPayload_Parms, NULL );

	if ( FileDownloaded )
		memcpy ( FileDownloaded, &GetContentPayload_Parms.FileDownloaded, 0x80 );

	return GetContentPayload_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         DownloadContentCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::ClearDownloadContentCompleteDelegate ( struct FScriptDelegate DownloadContentCompleteDelegate )
{
	static UFunction* pFnClearDownloadContentCompleteDelegate = NULL;

	if ( ! pFnClearDownloadContentCompleteDelegate )
		pFnClearDownloadContentCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45367 ];

	UOnlineCommunityContentInterfaceSteamworks_execClearDownloadContentCompleteDelegate_Parms ClearDownloadContentCompleteDelegate_Parms;
	memcpy ( &ClearDownloadContentCompleteDelegate_Parms.DownloadContentCompleteDelegate, &DownloadContentCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearDownloadContentCompleteDelegate, &ClearDownloadContentCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         DownloadContentCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::AddDownloadContentCompleteDelegate ( struct FScriptDelegate DownloadContentCompleteDelegate )
{
	static UFunction* pFnAddDownloadContentCompleteDelegate = NULL;

	if ( ! pFnAddDownloadContentCompleteDelegate )
		pFnAddDownloadContentCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45365 ];

	UOnlineCommunityContentInterfaceSteamworks_execAddDownloadContentCompleteDelegate_Parms AddDownloadContentCompleteDelegate_Parms;
	memcpy ( &AddDownloadContentCompleteDelegate_Parms.DownloadContentCompleteDelegate, &DownloadContentCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddDownloadContentCompleteDelegate, &AddDownloadContentCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FCommunityContentFile   FileDownloaded                 ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        Payload                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadContentComplete ( unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray< unsigned char > Payload )
{
	static UFunction* pFnOnDownloadContentComplete = NULL;

	if ( ! pFnOnDownloadContentComplete )
		pFnOnDownloadContentComplete = (UFunction*) UObject::GObjObjects()->Data[ 45291 ];

	UOnlineCommunityContentInterfaceSteamworks_execOnDownloadContentComplete_Parms OnDownloadContentComplete_Parms;
	OnDownloadContentComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDownloadContentComplete_Parms.FileDownloaded, &FileDownloaded, 0x80 );
	memcpy ( &OnDownloadContentComplete_Parms.Payload, &Payload, 0xC );

	this->ProcessEvent ( pFnOnDownloadContentComplete, &OnDownloadContentComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FCommunityContentFile   FileToDownload                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineCommunityContentInterfaceSteamworks::DownloadContent ( unsigned char PlayerNum, struct FCommunityContentFile* FileToDownload )
{
	static UFunction* pFnDownloadContent = NULL;

	if ( ! pFnDownloadContent )
		pFnDownloadContent = (UFunction*) UObject::GObjObjects()->Data[ 45357 ];

	UOnlineCommunityContentInterfaceSteamworks_execDownloadContent_Parms DownloadContent_Parms;
	DownloadContent_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent ( pFnDownloadContent, &DownloadContent_Parms, NULL );

	if ( FileToDownload )
		memcpy ( FileToDownload, &DownloadContent_Parms.FileToDownload, 0x80 );

	return DownloadContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UploadContentCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::ClearUploadContentCompleteDelegate ( struct FScriptDelegate UploadContentCompleteDelegate )
{
	static UFunction* pFnClearUploadContentCompleteDelegate = NULL;

	if ( ! pFnClearUploadContentCompleteDelegate )
		pFnClearUploadContentCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45355 ];

	UOnlineCommunityContentInterfaceSteamworks_execClearUploadContentCompleteDelegate_Parms ClearUploadContentCompleteDelegate_Parms;
	memcpy ( &ClearUploadContentCompleteDelegate_Parms.UploadContentCompleteDelegate, &UploadContentCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUploadContentCompleteDelegate, &ClearUploadContentCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UploadContentCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::AddUploadContentCompleteDelegate ( struct FScriptDelegate UploadContentCompleteDelegate )
{
	static UFunction* pFnAddUploadContentCompleteDelegate = NULL;

	if ( ! pFnAddUploadContentCompleteDelegate )
		pFnAddUploadContentCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45353 ];

	UOnlineCommunityContentInterfaceSteamworks_execAddUploadContentCompleteDelegate_Parms AddUploadContentCompleteDelegate_Parms;
	memcpy ( &AddUploadContentCompleteDelegate_Parms.UploadContentCompleteDelegate, &UploadContentCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUploadContentCompleteDelegate, &AddUploadContentCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FCommunityContentFile   UploadedFile                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::OnUploadContentComplete ( unsigned long bWasSuccessful, struct FCommunityContentFile UploadedFile )
{
	static UFunction* pFnOnUploadContentComplete = NULL;

	if ( ! pFnOnUploadContentComplete )
		pFnOnUploadContentComplete = (UFunction*) UObject::GObjObjects()->Data[ 45293 ];

	UOnlineCommunityContentInterfaceSteamworks_execOnUploadContentComplete_Parms OnUploadContentComplete_Parms;
	OnUploadContentComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnUploadContentComplete_Parms.UploadedFile, &UploadedFile, 0x80 );

	this->ProcessEvent ( pFnOnUploadContentComplete, &OnUploadContentComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// TArray< unsigned char >        Payload                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FCommunityContentMetadata MetaData                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineCommunityContentInterfaceSteamworks::UploadContent ( unsigned char PlayerNum, TArray< unsigned char >* Payload, struct FCommunityContentMetadata* MetaData )
{
	static UFunction* pFnUploadContent = NULL;

	if ( ! pFnUploadContent )
		pFnUploadContent = (UFunction*) UObject::GObjObjects()->Data[ 45345 ];

	UOnlineCommunityContentInterfaceSteamworks_execUploadContent_Parms UploadContent_Parms;
	UploadContent_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent ( pFnUploadContent, &UploadContent_Parms, NULL );

	if ( Payload )
		memcpy ( Payload, &UploadContent_Parms.Payload, 0xC );

	if ( MetaData )
		memcpy ( MetaData, &UploadContent_Parms.MetaData, 0x28 );

	return UploadContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FOnlineFriend           Friend                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FCommunityContentFile > ContentFiles                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineCommunityContentInterfaceSteamworks::GetFriendsContentList ( unsigned char PlayerNum, struct FOnlineFriend* Friend, TArray< struct FCommunityContentFile >* ContentFiles )
{
	static UFunction* pFnGetFriendsContentList = NULL;

	if ( ! pFnGetFriendsContentList )
		pFnGetFriendsContentList = (UFunction*) UObject::GObjObjects()->Data[ 45339 ];

	UOnlineCommunityContentInterfaceSteamworks_execGetFriendsContentList_Parms GetFriendsContentList_Parms;
	GetFriendsContentList_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent ( pFnGetFriendsContentList, &GetFriendsContentList_Parms, NULL );

	if ( Friend )
		memcpy ( Friend, &GetFriendsContentList_Parms.Friend, 0x78 );

	if ( ContentFiles )
		memcpy ( ContentFiles, &GetFriendsContentList_Parms.ContentFiles, 0xC );

	return GetFriendsContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::ClearReadFriendsContentListCompleteDelegate ( struct FScriptDelegate ReadFriendsContentListCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsContentListCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsContentListCompleteDelegate )
		pFnClearReadFriendsContentListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45337 ];

	UOnlineCommunityContentInterfaceSteamworks_execClearReadFriendsContentListCompleteDelegate_Parms ClearReadFriendsContentListCompleteDelegate_Parms;
	memcpy ( &ClearReadFriendsContentListCompleteDelegate_Parms.ReadFriendsContentListCompleteDelegate, &ReadFriendsContentListCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadFriendsContentListCompleteDelegate, &ClearReadFriendsContentListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::AddReadFriendsContentListCompleteDelegate ( struct FScriptDelegate ReadFriendsContentListCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsContentListCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsContentListCompleteDelegate )
		pFnAddReadFriendsContentListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45335 ];

	UOnlineCommunityContentInterfaceSteamworks_execAddReadFriendsContentListCompleteDelegate_Parms AddReadFriendsContentListCompleteDelegate_Parms;
	memcpy ( &AddReadFriendsContentListCompleteDelegate_Parms.ReadFriendsContentListCompleteDelegate, &ReadFriendsContentListCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadFriendsContentListCompleteDelegate, &AddReadFriendsContentListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineCommunityContentInterfaceSteamworks::OnReadFriendsContentListComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsContentListComplete = NULL;

	if ( ! pFnOnReadFriendsContentListComplete )
		pFnOnReadFriendsContentListComplete = (UFunction*) UObject::GObjObjects()->Data[ 45295 ];

	UOnlineCommunityContentInterfaceSteamworks_execOnReadFriendsContentListComplete_Parms OnReadFriendsContentListComplete_Parms;
	OnReadFriendsContentListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsContentListComplete, &OnReadFriendsContentListComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// int                            StartAt                        ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineCommunityContentInterfaceSteamworks::ReadFriendsContentList ( unsigned char PlayerNum, int StartAt, int NumToRead, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnReadFriendsContentList = NULL;

	if ( ! pFnReadFriendsContentList )
		pFnReadFriendsContentList = (UFunction*) UObject::GObjObjects()->Data[ 45327 ];

	UOnlineCommunityContentInterfaceSteamworks_execReadFriendsContentList_Parms ReadFriendsContentList_Parms;
	ReadFriendsContentList_Parms.PlayerNum = PlayerNum;
	ReadFriendsContentList_Parms.StartAt = StartAt;
	ReadFriendsContentList_Parms.NumToRead = NumToRead;

	this->ProcessEvent ( pFnReadFriendsContentList, &ReadFriendsContentList_Parms, NULL );

	if ( Friends )
		memcpy ( Friends, &ReadFriendsContentList_Parms.Friends, 0xC );

	return ReadFriendsContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// TArray< struct FCommunityContentFile > ContentFiles                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineCommunityContentInterfaceSteamworks::GetContentList ( unsigned char PlayerNum, TArray< struct FCommunityContentFile >* ContentFiles )
{
	static UFunction* pFnGetContentList = NULL;

	if ( ! pFnGetContentList )
		pFnGetContentList = (UFunction*) UObject::GObjObjects()->Data[ 45322 ];

	UOnlineCommunityContentInterfaceSteamworks_execGetContentList_Parms GetContentList_Parms;
	GetContentList_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent ( pFnGetContentList, &GetContentList_Parms, NULL );

	if ( ContentFiles )
		memcpy ( ContentFiles, &GetContentList_Parms.ContentFiles, 0xC );

	return GetContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::ClearReadContentListCompleteDelegate ( struct FScriptDelegate ReadContentListCompleteDelegate )
{
	static UFunction* pFnClearReadContentListCompleteDelegate = NULL;

	if ( ! pFnClearReadContentListCompleteDelegate )
		pFnClearReadContentListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45320 ];

	UOnlineCommunityContentInterfaceSteamworks_execClearReadContentListCompleteDelegate_Parms ClearReadContentListCompleteDelegate_Parms;
	memcpy ( &ClearReadContentListCompleteDelegate_Parms.ReadContentListCompleteDelegate, &ReadContentListCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadContentListCompleteDelegate, &ClearReadContentListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::AddReadContentListCompleteDelegate ( struct FScriptDelegate ReadContentListCompleteDelegate )
{
	static UFunction* pFnAddReadContentListCompleteDelegate = NULL;

	if ( ! pFnAddReadContentListCompleteDelegate )
		pFnAddReadContentListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45318 ];

	UOnlineCommunityContentInterfaceSteamworks_execAddReadContentListCompleteDelegate_Parms AddReadContentListCompleteDelegate_Parms;
	memcpy ( &AddReadContentListCompleteDelegate_Parms.ReadContentListCompleteDelegate, &ReadContentListCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadContentListCompleteDelegate, &AddReadContentListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< struct FCommunityContentFile > ContentFiles                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::OnReadContentListComplete ( unsigned long bWasSuccessful, TArray< struct FCommunityContentFile > ContentFiles )
{
	static UFunction* pFnOnReadContentListComplete = NULL;

	if ( ! pFnOnReadContentListComplete )
		pFnOnReadContentListComplete = (UFunction*) UObject::GObjObjects()->Data[ 45297 ];

	UOnlineCommunityContentInterfaceSteamworks_execOnReadContentListComplete_Parms OnReadContentListComplete_Parms;
	OnReadContentListComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadContentListComplete_Parms.ContentFiles, &ContentFiles, 0xC );

	this->ProcessEvent ( pFnOnReadContentListComplete, &OnReadContentListComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FString                 Path                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            StartAt                        ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineCommunityContentInterfaceSteamworks::ReadContentList ( unsigned char PlayerNum, struct FUniqueNetId NetId, struct FString Path, int StartAt, int NumToRead )
{
	static UFunction* pFnReadContentList = NULL;

	if ( ! pFnReadContentList )
		pFnReadContentList = (UFunction*) UObject::GObjObjects()->Data[ 45308 ];

	UOnlineCommunityContentInterfaceSteamworks_execReadContentList_Parms ReadContentList_Parms;
	ReadContentList_Parms.PlayerNum = PlayerNum;
	memcpy ( &ReadContentList_Parms.NetId, &NetId, 0x48 );
	memcpy ( &ReadContentList_Parms.Path, &Path, 0xC );
	ReadContentList_Parms.StartAt = StartAt;
	ReadContentList_Parms.NumToRead = NumToRead;

	this->ProcessEvent ( pFnReadContentList, &ReadContentList_Parms, NULL );

	return ReadContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineCommunityContentInterfaceSteamworks::Exit ( )
{
	static UFunction* pFnExit = NULL;

	if ( ! pFnExit )
		pFnExit = (UFunction*) UObject::GObjObjects()->Data[ 45307 ];

	UOnlineCommunityContentInterfaceSteamworks_execExit_Parms Exit_Parms;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExit, &Exit_Parms, NULL );

	pFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineCommunityContentInterfaceSteamworks::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 45305 ];

	UOnlineCommunityContentInterfaceSteamworks_execInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData
// [0x00520000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// TArray< struct FDownloadedWorkshopData > Items                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadedWorkshopData ( unsigned long bSuccess, TArray< struct FDownloadedWorkshopData >* Items )
{
	static UFunction* pFnOnDownloadedWorkshopData = NULL;

	if ( ! pFnOnDownloadedWorkshopData )
		pFnOnDownloadedWorkshopData = (UFunction*) UObject::GObjObjects()->Data[ 45299 ];

	UOnlineCommunityContentInterfaceSteamworks_execOnDownloadedWorkshopData_Parms OnDownloadedWorkshopData_Parms;
	OnDownloadedWorkshopData_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnDownloadedWorkshopData, &OnDownloadedWorkshopData_Parms, NULL );

	if ( Items )
		memcpy ( Items, &OnDownloadedWorkshopData_Parms.Items, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UDebugDrawer*            Drawer                         ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::PrintDebugInfoNative ( class UDebugDrawer* Drawer )
{
	static UFunction* pFnPrintDebugInfoNative = NULL;

	if ( ! pFnPrintDebugInfoNative )
		pFnPrintDebugInfoNative = (UFunction*) UObject::GObjObjects()->Data[ 45484 ];

	UOnlineGameInterfaceSteamworks_execPrintDebugInfoNative_Parms PrintDebugInfoNative_Parms;
	PrintDebugInfoNative_Parms.Drawer = Drawer;

	pFnPrintDebugInfoNative->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPrintDebugInfoNative, &PrintDebugInfoNative_Parms, NULL );

	pFnPrintDebugInfoNative->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo
// [0x00020102] 
// Parameters infos:
// class UDebugDrawer*            Drawer                         ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::PrintDebugInfo ( class UDebugDrawer* Drawer )
{
	static UFunction* pFnPrintDebugInfo = NULL;

	if ( ! pFnPrintDebugInfo )
		pFnPrintDebugInfo = (UFunction*) UObject::GObjObjects()->Data[ 45482 ];

	UOnlineGameInterfaceSteamworks_execPrintDebugInfo_Parms PrintDebugInfo_Parms;
	PrintDebugInfo_Parms.Drawer = Drawer;

	this->ProcessEvent ( pFnPrintDebugInfo, &PrintDebugInfo_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 45478 ];

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45475 ];

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45473 ];

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 45396 ];

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x48 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45466 ];

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x48 );

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45463 ];

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45461 ];

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 45393 ];

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x48 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45453 ];

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x48 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 45449 ];

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	pFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FString                 ErrorString                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted ( struct FString ErrorString, struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 45427 ];

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;
	memcpy ( &OnGameInviteAccepted_Parms.ErrorString, &ErrorString, 0xC );

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x8 );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45442 ];

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks_PsyNet::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45533 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks_PsyNet::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45531 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks_PsyNet::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 45491 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x48 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks_PsyNet::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45524 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x48 );

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks_PsyNet::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45521 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks_PsyNet::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45519 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks_PsyNet::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 45488 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x48 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks_PsyNet::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45511 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x48 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks_PsyNet::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 45507 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks_PsyNet::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 45503 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceSteamworks_PsyNet::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45498 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            JoinablePlayerID               ( CPF_Parm )
// struct FString                 ServerAddress                  ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  Visibility                     ( CPF_Parm )

void UOnlineGameInterfaceSteamworks_PsyNet::SetFriendJoinLocation ( struct FUniqueNetId JoinablePlayerID, struct FString ServerAddress, unsigned char Visibility )
{
	static UFunction* pFnSetFriendJoinLocation = NULL;

	if ( ! pFnSetFriendJoinLocation )
		pFnSetFriendJoinLocation = (UFunction*) UObject::GObjObjects()->Data[ 45494 ];

	UOnlineGameInterfaceSteamworks_PsyNet_execSetFriendJoinLocation_Parms SetFriendJoinLocation_Parms;
	memcpy ( &SetFriendJoinLocation_Parms.JoinablePlayerID, &JoinablePlayerID, 0x48 );
	memcpy ( &SetFriendJoinLocation_Parms.ServerAddress, &ServerAddress, 0xC );
	SetFriendJoinLocation_Parms.Visibility = Visibility;

	pFnSetFriendJoinLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFriendJoinLocation, &SetFriendJoinLocation_Parms, NULL );

	pFnSetFriendJoinLocation->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Reason                         ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::KickPlayer ( unsigned char Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnKickPlayer = NULL;

	if ( ! pFnKickPlayer )
		pFnKickPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45628 ];

	UOnlineLobbyInterfaceSteamworks_execKickPlayer_Parms KickPlayer_Parms;
	KickPlayer_Parms.Reason = Reason;

	this->ProcessEvent ( pFnKickPlayer, &KickPlayer_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &KickPlayer_Parms.LobbyId, 0xC );

	if ( PlayerID )
		memcpy ( PlayerID, &KickPlayer_Parms.PlayerID, 0x48 );

	return KickPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bMarkAsJoined                  ( CPF_OptionalParm | CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::GetLobbyFromCommandline ( unsigned long bMarkAsJoined, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnGetLobbyFromCommandline = NULL;

	if ( ! pFnGetLobbyFromCommandline )
		pFnGetLobbyFromCommandline = (UFunction*) UObject::GObjObjects()->Data[ 45624 ];

	UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Parms GetLobbyFromCommandline_Parms;
	GetLobbyFromCommandline_Parms.bMarkAsJoined = bMarkAsJoined;

	pFnGetLobbyFromCommandline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyFromCommandline, &GetLobbyFromCommandline_Parms, NULL );

	pFnGetLobbyFromCommandline->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &GetLobbyFromCommandline_Parms.LobbyId, 0xC );

	return GetLobbyFromCommandline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Const | CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::ShowInviteUI ( unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnShowInviteUI = NULL;

	if ( ! pFnShowInviteUI )
		pFnShowInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 45620 ];

	UOnlineLobbyInterfaceSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowInviteUI, &ShowInviteUI_Parms, NULL );

	pFnShowInviteUI->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &ShowInviteUI_Parms.LobbyId, 0xC );

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::InviteToLobby ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnInviteToLobby = NULL;

	if ( ! pFnInviteToLobby )
		pFnInviteToLobby = (UFunction*) UObject::GObjObjects()->Data[ 45616 ];

	UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Parms InviteToLobby_Parms;

	pFnInviteToLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteToLobby, &InviteToLobby_Parms, NULL );

	pFnInviteToLobby->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &InviteToLobby_Parms.LobbyId, 0xC );

	if ( PlayerID )
		memcpy ( PlayerID, &InviteToLobby_Parms.PlayerID, 0x48 );

	return InviteToLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            NewOwner                       ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyOwner ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwner )
{
	static UFunction* pFnSetLobbyOwner = NULL;

	if ( ! pFnSetLobbyOwner )
		pFnSetLobbyOwner = (UFunction*) UObject::GObjObjects()->Data[ 45612 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Parms SetLobbyOwner_Parms;

	pFnSetLobbyOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyOwner, &SetLobbyOwner_Parms, NULL );

	pFnSetLobbyOwner->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyOwner_Parms.LobbyId, 0xC );

	if ( NewOwner )
		memcpy ( NewOwner, &SetLobbyOwner_Parms.NewOwner, 0x48 );

	return SetLobbyOwner_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bLocked                        ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyLock ( unsigned long bLocked, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSetLobbyLock = NULL;

	if ( ! pFnSetLobbyLock )
		pFnSetLobbyLock = (UFunction*) UObject::GObjObjects()->Data[ 45608 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Parms SetLobbyLock_Parms;
	SetLobbyLock_Parms.bLocked = bLocked;

	pFnSetLobbyLock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyLock, &SetLobbyLock_Parms, NULL );

	pFnSetLobbyLock->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyLock_Parms.LobbyId, 0xC );

	return SetLobbyLock_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Type                           ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyType ( unsigned char Type, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSetLobbyType = NULL;

	if ( ! pFnSetLobbyType )
		pFnSetLobbyType = (UFunction*) UObject::GObjObjects()->Data[ 45604 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Parms SetLobbyType_Parms;
	SetLobbyType_Parms.Type = Type;

	pFnSetLobbyType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyType, &SetLobbyType_Parms, NULL );

	pFnSetLobbyType->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyType_Parms.LobbyId, 0xC );

	return SetLobbyType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ServerIP                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyServer ( struct FString ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID )
{
	static UFunction* pFnSetLobbyServer = NULL;

	if ( ! pFnSetLobbyServer )
		pFnSetLobbyServer = (UFunction*) UObject::GObjObjects()->Data[ 45599 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Parms SetLobbyServer_Parms;
	memcpy ( &SetLobbyServer_Parms.ServerIP, &ServerIP, 0xC );

	pFnSetLobbyServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyServer, &SetLobbyServer_Parms, NULL );

	pFnSetLobbyServer->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyServer_Parms.LobbyId, 0xC );

	if ( ServerUID )
		memcpy ( ServerUID, &SetLobbyServer_Parms.ServerUID, 0x48 );

	return SetLobbyServer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::RemoveLobbySetting ( struct FString Key, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnRemoveLobbySetting = NULL;

	if ( ! pFnRemoveLobbySetting )
		pFnRemoveLobbySetting = (UFunction*) UObject::GObjObjects()->Data[ 45595 ];

	UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Parms RemoveLobbySetting_Parms;
	memcpy ( &RemoveLobbySetting_Parms.Key, &Key, 0xC );

	pFnRemoveLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveLobbySetting, &RemoveLobbySetting_Parms, NULL );

	pFnRemoveLobbySetting->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &RemoveLobbySetting_Parms.LobbyId, 0xC );

	return RemoveLobbySetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbySetting ( struct FString Key, struct FString Value, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSetLobbySetting = NULL;

	if ( ! pFnSetLobbySetting )
		pFnSetLobbySetting = (UFunction*) UObject::GObjObjects()->Data[ 45590 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Parms SetLobbySetting_Parms;
	memcpy ( &SetLobbySetting_Parms.Key, &Key, 0xC );
	memcpy ( &SetLobbySetting_Parms.Value, &Value, 0xC );

	pFnSetLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbySetting, &SetLobbySetting_Parms, NULL );

	pFnSetLobbySetting->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbySetting_Parms.LobbyId, 0xC );

	return SetLobbySetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            AdminId                        ( CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::GetLobbyAdmin ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId )
{
	static UFunction* pFnGetLobbyAdmin = NULL;

	if ( ! pFnGetLobbyAdmin )
		pFnGetLobbyAdmin = (UFunction*) UObject::GObjObjects()->Data[ 45586 ];

	UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Parms GetLobbyAdmin_Parms;

	pFnGetLobbyAdmin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyAdmin, &GetLobbyAdmin_Parms, NULL );

	pFnGetLobbyAdmin->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &GetLobbyAdmin_Parms.LobbyId, 0xC );

	if ( AdminId )
		memcpy ( AdminId, &GetLobbyAdmin_Parms.AdminId, 0x48 );

	return GetLobbyAdmin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520000] 
// Parameters infos:
// int                            AdminIndex                     ( CPF_Parm )
// struct FActiveLobbyInfo        Lobby                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnLobbyKicked ( int AdminIndex, struct FActiveLobbyInfo* Lobby )
{
	static UFunction* pFnOnLobbyKicked = NULL;

	if ( ! pFnOnLobbyKicked )
		pFnOnLobbyKicked = (UFunction*) UObject::GObjObjects()->Data[ 45541 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Parms OnLobbyKicked_Parms;
	OnLobbyKicked_Parms.AdminIndex = AdminIndex;

	this->ProcessEvent ( pFnOnLobbyKicked, &OnLobbyKicked_Parms, NULL );

	if ( Lobby )
		memcpy ( Lobby, &OnLobbyKicked_Parms.Lobby, 0x24 );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::SendLobbyBinaryData ( struct FUniqueLobbyId* LobbyId, TArray< unsigned char >* Data )
{
	static UFunction* pFnSendLobbyBinaryData = NULL;

	if ( ! pFnSendLobbyBinaryData )
		pFnSendLobbyBinaryData = (UFunction*) UObject::GObjObjects()->Data[ 45579 ];

	UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Parms SendLobbyBinaryData_Parms;

	pFnSendLobbyBinaryData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendLobbyBinaryData, &SendLobbyBinaryData_Parms, NULL );

	pFnSendLobbyBinaryData->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &SendLobbyBinaryData_Parms.LobbyId, 0xC );

	if ( Data )
		memcpy ( Data, &SendLobbyBinaryData_Parms.Data, 0xC );

	return SendLobbyBinaryData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyMessage
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::SendLobbyMessage ( struct FString Message, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSendLobbyMessage = NULL;

	if ( ! pFnSendLobbyMessage )
		pFnSendLobbyMessage = (UFunction*) UObject::GObjObjects()->Data[ 45575 ];

	UOnlineLobbyInterfaceSteamworks_execSendLobbyMessage_Parms SendLobbyMessage_Parms;
	memcpy ( &SendLobbyMessage_Parms.Message, &Message, 0xC );

	pFnSendLobbyMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendLobbyMessage, &SendLobbyMessage_Parms, NULL );

	pFnSendLobbyMessage->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &SendLobbyMessage_Parms.LobbyId, 0xC );

	return SendLobbyMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyUserSetting ( struct FString Key, struct FString Value, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSetLobbyUserSetting = NULL;

	if ( ! pFnSetLobbyUserSetting )
		pFnSetLobbyUserSetting = (UFunction*) UObject::GObjObjects()->Data[ 45570 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Parms SetLobbyUserSetting_Parms;
	memcpy ( &SetLobbyUserSetting_Parms.Key, &Key, 0xC );
	memcpy ( &SetLobbyUserSetting_Parms.Value, &Value, 0xC );

	pFnSetLobbyUserSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyUserSetting, &SetLobbyUserSetting_Parms, NULL );

	pFnSetLobbyUserSetting->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyUserSetting_Parms.LobbyId, 0xC );

	return SetLobbyUserSetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::LeaveLobby ( struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnLeaveLobby = NULL;

	if ( ! pFnLeaveLobby )
		pFnLeaveLobby = (UFunction*) UObject::GObjObjects()->Data[ 45567 ];

	UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Parms LeaveLobby_Parms;

	pFnLeaveLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeaveLobby, &LeaveLobby_Parms, NULL );

	pFnLeaveLobby->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &LeaveLobby_Parms.LobbyId, 0xC );

	return LeaveLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            LocalPlayerNum                 ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::JoinLobby ( int LocalPlayerNum, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnJoinLobby = NULL;

	if ( ! pFnJoinLobby )
		pFnJoinLobby = (UFunction*) UObject::GObjObjects()->Data[ 45563 ];

	UOnlineLobbyInterfaceSteamworks_execJoinLobby_Parms JoinLobby_Parms;
	JoinLobby_Parms.LocalPlayerNum = LocalPlayerNum;

	pFnJoinLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinLobby, &JoinLobby_Parms, NULL );

	pFnJoinLobby->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &JoinLobby_Parms.LobbyId, 0xC );

	return JoinLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::UpdateFoundLobbies ( struct FUniqueLobbyId LobbyId )
{
	static UFunction* pFnUpdateFoundLobbies = NULL;

	if ( ! pFnUpdateFoundLobbies )
		pFnUpdateFoundLobbies = (UFunction*) UObject::GObjObjects()->Data[ 45560 ];

	UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Parms UpdateFoundLobbies_Parms;
	memcpy ( &UpdateFoundLobbies_Parms.LobbyId, &LobbyId, 0xC );

	pFnUpdateFoundLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFoundLobbies, &UpdateFoundLobbies_Parms, NULL );

	pFnUpdateFoundLobbies->FunctionFlags |= 0x400;

	return UpdateFoundLobbies_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MaxResults                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FLobbyFilter >  Filters                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FLobbySortFilter > SortFilters                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MinSlots                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  Distance                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::FindLobbies ( int MaxResults, TArray< struct FLobbyFilter > Filters, TArray< struct FLobbySortFilter > SortFilters, int MinSlots, unsigned char Distance )
{
	static UFunction* pFnFindLobbies = NULL;

	if ( ! pFnFindLobbies )
		pFnFindLobbies = (UFunction*) UObject::GObjObjects()->Data[ 45551 ];

	UOnlineLobbyInterfaceSteamworks_execFindLobbies_Parms FindLobbies_Parms;
	FindLobbies_Parms.MaxResults = MaxResults;
	memcpy ( &FindLobbies_Parms.Filters, &Filters, 0xC );
	memcpy ( &FindLobbies_Parms.SortFilters, &SortFilters, 0xC );
	FindLobbies_Parms.MinSlots = MinSlots;
	FindLobbies_Parms.Distance = Distance;

	pFnFindLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindLobbies, &FindLobbies_Parms, NULL );

	pFnFindLobbies->FunctionFlags |= 0x400;

	return FindLobbies_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            LocalPlayerNum                 ( CPF_Parm )
// int                            MaxPlayers                     ( CPF_Parm )
// unsigned char                  Type                           ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FLobbyMetaData > InitialSettings                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::CreateLobby ( int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray< struct FLobbyMetaData > InitialSettings )
{
	static UFunction* pFnCreateLobby = NULL;

	if ( ! pFnCreateLobby )
		pFnCreateLobby = (UFunction*) UObject::GObjObjects()->Data[ 45544 ];

	UOnlineLobbyInterfaceSteamworks_execCreateLobby_Parms CreateLobby_Parms;
	CreateLobby_Parms.LocalPlayerNum = LocalPlayerNum;
	CreateLobby_Parms.MaxPlayers = MaxPlayers;
	CreateLobby_Parms.Type = Type;
	memcpy ( &CreateLobby_Parms.InitialSettings, &InitialSettings, 0xC );

	pFnCreateLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateLobby, &CreateLobby_Parms, NULL );

	pFnCreateLobby->FunctionFlags |= 0x400;

	return CreateLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AllowPsyNetParty
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::AllowPsyNetParty ( )
{
	static UFunction* pFnAllowPsyNetParty = NULL;

	if ( ! pFnAllowPsyNetParty )
		pFnAllowPsyNetParty = (UFunction*) UObject::GObjObjects()->Data[ 47008 ];

	UOnlineSubsystemSteamworks_execAllowPsyNetParty_Parms AllowPsyNetParty_Parms;

	this->ProcessEvent ( pFnAllowPsyNetParty, &AllowPsyNetParty_Parms, NULL );

	return AllowPsyNetParty_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowUi                        ( CPF_Parm )

bool UOnlineSubsystemSteamworks::CheckParentalControlInfo ( unsigned long bShowUi )
{
	static UFunction* pFnCheckParentalControlInfo = NULL;

	if ( ! pFnCheckParentalControlInfo )
		pFnCheckParentalControlInfo = (UFunction*) UObject::GObjObjects()->Data[ 47005 ];

	UOnlineSubsystemSteamworks_execCheckParentalControlInfo_Parms CheckParentalControlInfo_Parms;
	CheckParentalControlInfo_Parms.bShowUi = bShowUi;

	this->ProcessEvent ( pFnCheckParentalControlInfo, &CheckParentalControlInfo_Parms, NULL );

	return CheckParentalControlInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendHistoryKey > PlayerKeys                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMetKeys ( unsigned char LocalUserNum, TArray< struct FFriendHistoryKey > PlayerKeys )
{
	static UFunction* pFnRecordPlayersRecentlyMetKeys = NULL;

	if ( ! pFnRecordPlayersRecentlyMetKeys )
		pFnRecordPlayersRecentlyMetKeys = (UFunction*) UObject::GObjObjects()->Data[ 47000 ];

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMetKeys_Parms RecordPlayersRecentlyMetKeys_Parms;
	RecordPlayersRecentlyMetKeys_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RecordPlayersRecentlyMetKeys_Parms.PlayerKeys, &PlayerKeys, 0xC );

	this->ProcessEvent ( pFnRecordPlayersRecentlyMetKeys, &RecordPlayersRecentlyMetKeys_Parms, NULL );

	return RecordPlayersRecentlyMetKeys_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< unsigned char >        Key                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetPlayHistoryRegistrationKey ( TArray< unsigned char >* Key )
{
	static UFunction* pFnGetPlayHistoryRegistrationKey = NULL;

	if ( ! pFnGetPlayHistoryRegistrationKey )
		pFnGetPlayHistoryRegistrationKey = (UFunction*) UObject::GObjObjects()->Data[ 46996 ];

	UOnlineSubsystemSteamworks_execGetPlayHistoryRegistrationKey_Parms GetPlayHistoryRegistrationKey_Parms;

	this->ProcessEvent ( pFnGetPlayHistoryRegistrationKey, &GetPlayHistoryRegistrationKey_Parms, NULL );

	if ( Key )
		memcpy ( Key, &GetPlayHistoryRegistrationKey_Parms.Key, 0xC );

	return GetPlayHistoryRegistrationKey_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::IsOriginalAppOwner ( )
{
	static UFunction* pFnIsOriginalAppOwner = NULL;

	if ( ! pFnIsOriginalAppOwner )
		pFnIsOriginalAppOwner = (UFunction*) UObject::GObjObjects()->Data[ 46993 ];

	UOnlineSubsystemSteamworks_execIsOriginalAppOwner_Parms IsOriginalAppOwner_Parms;

	this->ProcessEvent ( pFnIsOriginalAppOwner, &IsOriginalAppOwner_Parms, NULL );

	return IsOriginalAppOwner_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers
// [0x00020000] 
// Parameters infos:
// int                            CurrentPlayerCount             ( CPF_Parm )
// int                            numBotPlayers                  ( CPF_Parm )

void UOnlineSubsystemSteamworks::UpdateSessionStatusFromPlayers ( int CurrentPlayerCount, int numBotPlayers )
{
	static UFunction* pFnUpdateSessionStatusFromPlayers = NULL;

	if ( ! pFnUpdateSessionStatusFromPlayers )
		pFnUpdateSessionStatusFromPlayers = (UFunction*) UObject::GObjObjects()->Data[ 46990 ];

	UOnlineSubsystemSteamworks_execUpdateSessionStatusFromPlayers_Parms UpdateSessionStatusFromPlayers_Parms;
	UpdateSessionStatusFromPlayers_Parms.CurrentPlayerCount = CurrentPlayerCount;
	UpdateSessionStatusFromPlayers_Parms.numBotPlayers = numBotPlayers;

	this->ProcessEvent ( pFnUpdateSessionStatusFromPlayers, &UpdateSessionStatusFromPlayers_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsAchievementUnlocked ( unsigned char LocalUserNum, int AchievementId )
{
	static UFunction* pFnIsAchievementUnlocked = NULL;

	if ( ! pFnIsAchievementUnlocked )
		pFnIsAchievementUnlocked = (UFunction*) UObject::GObjObjects()->Data[ 46986 ];

	UOnlineSubsystemSteamworks_execIsAchievementUnlocked_Parms IsAchievementUnlocked_Parms;
	IsAchievementUnlocked_Parms.LocalUserNum = LocalUserNum;
	IsAchievementUnlocked_Parms.AchievementId = AchievementId;

	this->ProcessEvent ( pFnIsAchievementUnlocked, &IsAchievementUnlocked_Parms, NULL );

	return IsAchievementUnlocked_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRichPresenceLocalized
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::IsRichPresenceLocalized ( )
{
	static UFunction* pFnIsRichPresenceLocalized = NULL;

	if ( ! pFnIsRichPresenceLocalized )
		pFnIsRichPresenceLocalized = (UFunction*) UObject::GObjObjects()->Data[ 46984 ];

	UOnlineSubsystemSteamworks_execIsRichPresenceLocalized_Parms IsRichPresenceLocalized_Parms;

	this->ProcessEvent ( pFnIsRichPresenceLocalized, &IsRichPresenceLocalized_Parms, NULL );

	return IsRichPresenceLocalized_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalPlayerNum                 ( CPF_Parm )
// float                          Progress                       ( CPF_Parm )

void UOnlineSubsystemSteamworks::UpdateGameProgress ( unsigned char LocalPlayerNum, float Progress )
{
	static UFunction* pFnUpdateGameProgress = NULL;

	if ( ! pFnUpdateGameProgress )
		pFnUpdateGameProgress = (UFunction*) UObject::GObjObjects()->Data[ 46981 ];

	UOnlineSubsystemSteamworks_execUpdateGameProgress_Parms UpdateGameProgress_Parms;
	UpdateGameProgress_Parms.LocalPlayerNum = LocalPlayerNum;
	UpdateGameProgress_Parms.Progress = Progress;

	this->ProcessEvent ( pFnUpdateGameProgress, &UpdateGameProgress_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession
// [0x00020000] 
// Parameters infos:
// struct FString                 ServerID                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::FinishOnlineGameSession ( struct FString ServerID )
{
	static UFunction* pFnFinishOnlineGameSession = NULL;

	if ( ! pFnFinishOnlineGameSession )
		pFnFinishOnlineGameSession = (UFunction*) UObject::GObjObjects()->Data[ 46979 ];

	UOnlineSubsystemSteamworks_execFinishOnlineGameSession_Parms FinishOnlineGameSession_Parms;
	memcpy ( &FinishOnlineGameSession_Parms.ServerID, &ServerID, 0xC );

	this->ProcessEvent ( pFnFinishOnlineGameSession, &FinishOnlineGameSession_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession
// [0x00020000] 
// Parameters infos:
// struct FString                 ServerID                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::StartOnlineGameSession ( struct FString ServerID )
{
	static UFunction* pFnStartOnlineGameSession = NULL;

	if ( ! pFnStartOnlineGameSession )
		pFnStartOnlineGameSession = (UFunction*) UObject::GObjObjects()->Data[ 46977 ];

	UOnlineSubsystemSteamworks_execStartOnlineGameSession_Parms StartOnlineGameSession_Parms;
	memcpy ( &StartOnlineGameSession_Parms.ServerID, &ServerID, 0xC );

	this->ProcessEvent ( pFnStartOnlineGameSession, &StartOnlineGameSession_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PairingChangeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearSystemUserControllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate )
{
	static UFunction* pFnClearSystemUserControllerPairingChangedDelegate = NULL;

	if ( ! pFnClearSystemUserControllerPairingChangedDelegate )
		pFnClearSystemUserControllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46975 ];

	UOnlineSubsystemSteamworks_execClearSystemUserControllerPairingChangedDelegate_Parms ClearSystemUserControllerPairingChangedDelegate_Parms;
	memcpy ( &ClearSystemUserControllerPairingChangedDelegate_Parms.PairingChangeDelegate, &PairingChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearSystemUserControllerPairingChangedDelegate, &ClearSystemUserControllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PairingChangeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddSystemUserControllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate )
{
	static UFunction* pFnAddSystemUserControllerPairingChangedDelegate = NULL;

	if ( ! pFnAddSystemUserControllerPairingChangedDelegate )
		pFnAddSystemUserControllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46973 ];

	UOnlineSubsystemSteamworks_execAddSystemUserControllerPairingChangedDelegate_Parms AddSystemUserControllerPairingChangedDelegate_Parms;
	memcpy ( &AddSystemUserControllerPairingChangedDelegate_Parms.PairingChangeDelegate, &PairingChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddSystemUserControllerPairingChangedDelegate, &AddSystemUserControllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// [0x00120000] 
// Parameters infos:
// int                            NewLocalUserNum                ( CPF_Parm )
// int                            PreviousLocalUserNum           ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnSystemUserControllerPairingChanged ( int NewLocalUserNum, int PreviousLocalUserNum )
{
	static UFunction* pFnOnSystemUserControllerPairingChanged = NULL;

	if ( ! pFnOnSystemUserControllerPairingChanged )
		pFnOnSystemUserControllerPairingChanged = (UFunction*) UObject::GObjObjects()->Data[ 46970 ];

	UOnlineSubsystemSteamworks_execOnSystemUserControllerPairingChanged_Parms OnSystemUserControllerPairingChanged_Parms;
	OnSystemUserControllerPairingChanged_Parms.NewLocalUserNum = NewLocalUserNum;
	OnSystemUserControllerPairingChanged_Parms.PreviousLocalUserNum = PreviousLocalUserNum;

	this->ProcessEvent ( pFnOnSystemUserControllerPairingChanged, &OnSystemUserControllerPairingChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAccountPickerInput ( )
{
	static UFunction* pFnClearAccountPickerInput = NULL;

	if ( ! pFnClearAccountPickerInput )
		pFnClearAccountPickerInput = (UFunction*) UObject::GObjObjects()->Data[ 46969 ];

	UOnlineSubsystemSteamworks_execClearAccountPickerInput_Parms ClearAccountPickerInput_Parms;

	this->ProcessEvent ( pFnClearAccountPickerInput, &ClearAccountPickerInput_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::LookForAccountPickerInput ( )
{
	static UFunction* pFnLookForAccountPickerInput = NULL;

	if ( ! pFnLookForAccountPickerInput )
		pFnLookForAccountPickerInput = (UFunction*) UObject::GObjObjects()->Data[ 46968 ];

	UOnlineSubsystemSteamworks_execLookForAccountPickerInput_Parms LookForAccountPickerInput_Parms;

	this->ProcessEvent ( pFnLookForAccountPickerInput, &LookForAccountPickerInput_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession
// [0x00020000] 
// Parameters infos:
// unsigned char                  ControllerId                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::AddPlayerToSession ( unsigned char ControllerId )
{
	static UFunction* pFnAddPlayerToSession = NULL;

	if ( ! pFnAddPlayerToSession )
		pFnAddPlayerToSession = (UFunction*) UObject::GObjObjects()->Data[ 46966 ];

	UOnlineSubsystemSteamworks_execAddPlayerToSession_Parms AddPlayerToSession_Parms;
	AddPlayerToSession_Parms.ControllerId = ControllerId;

	this->ProcessEvent ( pFnAddPlayerToSession, &AddPlayerToSession_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearPrimaryPlayer ( )
{
	static UFunction* pFnClearPrimaryPlayer = NULL;

	if ( ! pFnClearPrimaryPlayer )
		pFnClearPrimaryPlayer = (UFunction*) UObject::GObjObjects()->Data[ 46965 ];

	UOnlineSubsystemSteamworks_execClearPrimaryPlayer_Parms ClearPrimaryPlayer_Parms;

	this->ProcessEvent ( pFnClearPrimaryPlayer, &ClearPrimaryPlayer_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation
// [0x00020000] 
// Parameters infos:
// unsigned char                  ControllerId                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::RemoveUserAssociation ( unsigned char ControllerId )
{
	static UFunction* pFnRemoveUserAssociation = NULL;

	if ( ! pFnRemoveUserAssociation )
		pFnRemoveUserAssociation = (UFunction*) UObject::GObjObjects()->Data[ 46963 ];

	UOnlineSubsystemSteamworks_execRemoveUserAssociation_Parms RemoveUserAssociation_Parms;
	RemoveUserAssociation_Parms.ControllerId = ControllerId;

	this->ProcessEvent ( pFnRemoveUserAssociation, &RemoveUserAssociation_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::MapEnd ( )
{
	static UFunction* pFnMapEnd = NULL;

	if ( ! pFnMapEnd )
		pFnMapEnd = (UFunction*) UObject::GObjObjects()->Data[ 46962 ];

	UOnlineSubsystemSteamworks_execMapEnd_Parms MapEnd_Parms;

	this->ProcessEvent ( pFnMapEnd, &MapEnd_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::MapStart ( )
{
	static UFunction* pFnMapStart = NULL;

	if ( ! pFnMapStart )
		pFnMapStart = (UFunction*) UObject::GObjObjects()->Data[ 46961 ];

	UOnlineSubsystemSteamworks_execMapStart_Parms MapStart_Parms;

	this->ProcessEvent ( pFnMapStart, &MapStart_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnlineMatchEnd ( )
{
	static UFunction* pFnOnlineMatchEnd = NULL;

	if ( ! pFnOnlineMatchEnd )
		pFnOnlineMatchEnd = (UFunction*) UObject::GObjObjects()->Data[ 46960 ];

	UOnlineSubsystemSteamworks_execOnlineMatchEnd_Parms OnlineMatchEnd_Parms;

	this->ProcessEvent ( pFnOnlineMatchEnd, &OnlineMatchEnd_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart
// [0x00020000] 
// Parameters infos:
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnlineMatchStart ( struct FString MapName )
{
	static UFunction* pFnOnlineMatchStart = NULL;

	if ( ! pFnOnlineMatchStart )
		pFnOnlineMatchStart = (UFunction*) UObject::GObjObjects()->Data[ 46958 ];

	UOnlineSubsystemSteamworks_execOnlineMatchStart_Parms OnlineMatchStart_Parms;
	memcpy ( &OnlineMatchStart_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnOnlineMatchStart, &OnlineMatchStart_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel
// [0x00020000] 
// Parameters infos:
// int                            DifficultyLevel                ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetSessionDifficultyLevel ( int DifficultyLevel )
{
	static UFunction* pFnSetSessionDifficultyLevel = NULL;

	if ( ! pFnSetSessionDifficultyLevel )
		pFnSetSessionDifficultyLevel = (UFunction*) UObject::GObjObjects()->Data[ 46956 ];

	UOnlineSubsystemSteamworks_execSetSessionDifficultyLevel_Parms SetSessionDifficultyLevel_Parms;
	SetSessionDifficultyLevel_Parms.DifficultyLevel = DifficultyLevel;

	this->ProcessEvent ( pFnSetSessionDifficultyLevel, &SetSessionDifficultyLevel_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName
// [0x00020000] 
// Parameters infos:
// struct FName                   GameplayModeName               ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetSessionGameplayModeName ( struct FName GameplayModeName )
{
	static UFunction* pFnSetSessionGameplayModeName = NULL;

	if ( ! pFnSetSessionGameplayModeName )
		pFnSetSessionGameplayModeName = (UFunction*) UObject::GObjObjects()->Data[ 46954 ];

	UOnlineSubsystemSteamworks_execSetSessionGameplayModeName_Parms SetSessionGameplayModeName_Parms;
	memcpy ( &SetSessionGameplayModeName_Parms.GameplayModeName, &GameplayModeName, 0x8 );

	this->ProcessEvent ( pFnSetSessionGameplayModeName, &SetSessionGameplayModeName_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode
// [0x00020000] 
// Parameters infos:
// int                            GameplayMode                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetSessionGameplayMode ( int GameplayMode )
{
	static UFunction* pFnSetSessionGameplayMode = NULL;

	if ( ! pFnSetSessionGameplayMode )
		pFnSetSessionGameplayMode = (UFunction*) UObject::GObjObjects()->Data[ 46952 ];

	UOnlineSubsystemSteamworks_execSetSessionGameplayMode_Parms SetSessionGameplayMode_Parms;
	SetSessionGameplayMode_Parms.GameplayMode = GameplayMode;

	this->ProcessEvent ( pFnSetSessionGameplayMode, &SetSessionGameplayMode_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements
// [0x00020000] 
// Parameters infos:
// TArray< unsigned long >        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

TArray< unsigned long > UOnlineSubsystemSteamworks::GetSyncedAchievements ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetSyncedAchievements = NULL;

	if ( ! pFnGetSyncedAchievements )
		pFnGetSyncedAchievements = (UFunction*) UObject::GObjObjects()->Data[ 46948 ];

	UOnlineSubsystemSteamworks_execGetSyncedAchievements_Parms GetSyncedAchievements_Parms;
	GetSyncedAchievements_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetSyncedAchievements, &GetSyncedAchievements_Parms, NULL );

	return GetSyncedAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )

void UOnlineSubsystemSteamworks::SetPlayedWith ( struct FUniqueNetId PlayerNetId )
{
	static UFunction* pFnSetPlayedWith = NULL;

	if ( ! pFnSetPlayedWith )
		pFnSetPlayedWith = (UFunction*) UObject::GObjObjects()->Data[ 46946 ];

	UOnlineSubsystemSteamworks_execSetPlayedWith_Parms SetPlayedWith_Parms;
	memcpy ( &SetPlayedWith_Parms.PlayerNetId, &PlayerNetId, 0x48 );

	pFnSetPlayedWith->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPlayedWith, &SetPlayedWith_Parms, NULL );

	pFnSetPlayedWith->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::HandleBootMessage ( )
{
	static UFunction* pFnHandleBootMessage = NULL;

	if ( ! pFnHandleBootMessage )
		pFnHandleBootMessage = (UFunction*) UObject::GObjObjects()->Data[ 46944 ];

	UOnlineSubsystemSteamworks_execHandleBootMessage_Parms HandleBootMessage_Parms;

	pFnHandleBootMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleBootMessage, &HandleBootMessage_Parms, NULL );

	pFnHandleBootMessage->FunctionFlags |= 0x400;

	return HandleBootMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearErrorDialogClosedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearErrorDialogClosedDelegate = NULL;

	if ( ! pFnClearErrorDialogClosedDelegate )
		pFnClearErrorDialogClosedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46942 ];

	UOnlineSubsystemSteamworks_execClearErrorDialogClosedDelegate_Parms ClearErrorDialogClosedDelegate_Parms;
	memcpy ( &ClearErrorDialogClosedDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearErrorDialogClosedDelegate, &ClearErrorDialogClosedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddErrorDialogClosedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddErrorDialogClosedDelegate = NULL;

	if ( ! pFnAddErrorDialogClosedDelegate )
		pFnAddErrorDialogClosedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46940 ];

	UOnlineSubsystemSteamworks_execAddErrorDialogClosedDelegate_Parms AddErrorDialogClosedDelegate_Parms;
	memcpy ( &AddErrorDialogClosedDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddErrorDialogClosedDelegate, &AddErrorDialogClosedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed
// [0x00120000] 
// Parameters infos:
// int                            LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnErrorDialogClosed ( int LocalUserNum )
{
	static UFunction* pFnOnErrorDialogClosed = NULL;

	if ( ! pFnOnErrorDialogClosed )
		pFnOnErrorDialogClosed = (UFunction*) UObject::GObjObjects()->Data[ 46938 ];

	UOnlineSubsystemSteamworks_execOnErrorDialogClosed_Parms OnErrorDialogClosed_Parms;
	OnErrorDialogClosed_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnErrorDialogClosed, &OnErrorDialogClosed_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearCloseKickPlayerDialogDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearCloseKickPlayerDialogDelegate = NULL;

	if ( ! pFnClearCloseKickPlayerDialogDelegate )
		pFnClearCloseKickPlayerDialogDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46936 ];

	UOnlineSubsystemSteamworks_execClearCloseKickPlayerDialogDelegate_Parms ClearCloseKickPlayerDialogDelegate_Parms;
	memcpy ( &ClearCloseKickPlayerDialogDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCloseKickPlayerDialogDelegate, &ClearCloseKickPlayerDialogDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCloseKickPlayerDialogDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddCloseKickPlayerDialogDelegate = NULL;

	if ( ! pFnAddCloseKickPlayerDialogDelegate )
		pFnAddCloseKickPlayerDialogDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46934 ];

	UOnlineSubsystemSteamworks_execAddCloseKickPlayerDialogDelegate_Parms AddCloseKickPlayerDialogDelegate_Parms;
	memcpy ( &AddCloseKickPlayerDialogDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCloseKickPlayerDialogDelegate, &AddCloseKickPlayerDialogDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnCloseKickPlayerDialog ( )
{
	static UFunction* pFnOnCloseKickPlayerDialog = NULL;

	if ( ! pFnOnCloseKickPlayerDialog )
		pFnOnCloseKickPlayerDialog = (UFunction*) UObject::GObjObjects()->Data[ 46933 ];

	UOnlineSubsystemSteamworks_execOnCloseKickPlayerDialog_Parms OnCloseKickPlayerDialog_Parms;

	this->ProcessEvent ( pFnOnCloseKickPlayerDialog, &OnCloseKickPlayerDialog_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearCommerceDialogClosedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearCommerceDialogClosedDelegate = NULL;

	if ( ! pFnClearCommerceDialogClosedDelegate )
		pFnClearCommerceDialogClosedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46931 ];

	UOnlineSubsystemSteamworks_execClearCommerceDialogClosedDelegate_Parms ClearCommerceDialogClosedDelegate_Parms;
	memcpy ( &ClearCommerceDialogClosedDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCommerceDialogClosedDelegate, &ClearCommerceDialogClosedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCommerceDialogClosedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddCommerceDialogClosedDelegate = NULL;

	if ( ! pFnAddCommerceDialogClosedDelegate )
		pFnAddCommerceDialogClosedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46929 ];

	UOnlineSubsystemSteamworks_execAddCommerceDialogClosedDelegate_Parms AddCommerceDialogClosedDelegate_Parms;
	memcpy ( &AddCommerceDialogClosedDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCommerceDialogClosedDelegate, &AddCommerceDialogClosedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnCommerceDialogClosed ( )
{
	static UFunction* pFnOnCommerceDialogClosed = NULL;

	if ( ! pFnOnCommerceDialogClosed )
		pFnOnCommerceDialogClosed = (UFunction*) UObject::GObjObjects()->Data[ 46928 ];

	UOnlineSubsystemSteamworks_execOnCommerceDialogClosed_Parms OnCommerceDialogClosed_Parms;

	this->ProcessEvent ( pFnOnCommerceDialogClosed, &OnCommerceDialogClosed_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerAccountID
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Const | CPF_Parm )

void UOnlineSubsystemSteamworks::GetPlayerAccountID ( struct FUniqueNetId NetId )
{
	static UFunction* pFnGetPlayerAccountID = NULL;

	if ( ! pFnGetPlayerAccountID )
		pFnGetPlayerAccountID = (UFunction*) UObject::GObjObjects()->Data[ 46925 ];

	UOnlineSubsystemSteamworks_execGetPlayerAccountID_Parms GetPlayerAccountID_Parms;
	memcpy ( &GetPlayerAccountID_Parms.NetId, &NetId, 0x48 );

	this->ProcessEvent ( pFnGetPlayerAccountID, &GetPlayerAccountID_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Comment                        ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         SanitizeDelegate               ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::WordFilterSanitizeString ( struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnWordFilterSanitizeString = NULL;

	if ( ! pFnWordFilterSanitizeString )
		pFnWordFilterSanitizeString = (UFunction*) UObject::GObjObjects()->Data[ 46920 ];

	UOnlineSubsystemSteamworks_execWordFilterSanitizeString_Parms WordFilterSanitizeString_Parms;
	memcpy ( &WordFilterSanitizeString_Parms.Comment, &Comment, 0xC );
	memcpy ( &WordFilterSanitizeString_Parms.SanitizeDelegate, &SanitizeDelegate, 0x10 );
	memcpy ( &WordFilterSanitizeString_Parms.PlayerID, &PlayerID, 0x48 );

	this->ProcessEvent ( pFnWordFilterSanitizeString, &WordFilterSanitizeString_Parms, NULL );

	return WordFilterSanitizeString_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::RemoveCanPlayOnlineChangedDelegate ( struct FScriptDelegate Callback )
{
	static UFunction* pFnRemoveCanPlayOnlineChangedDelegate = NULL;

	if ( ! pFnRemoveCanPlayOnlineChangedDelegate )
		pFnRemoveCanPlayOnlineChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46918 ];

	UOnlineSubsystemSteamworks_execRemoveCanPlayOnlineChangedDelegate_Parms RemoveCanPlayOnlineChangedDelegate_Parms;
	memcpy ( &RemoveCanPlayOnlineChangedDelegate_Parms.Callback, &Callback, 0x10 );

	this->ProcessEvent ( pFnRemoveCanPlayOnlineChangedDelegate, &RemoveCanPlayOnlineChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCanPlayOnlineChangedDelegate ( struct FScriptDelegate Callback )
{
	static UFunction* pFnAddCanPlayOnlineChangedDelegate = NULL;

	if ( ! pFnAddCanPlayOnlineChangedDelegate )
		pFnAddCanPlayOnlineChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46916 ];

	UOnlineSubsystemSteamworks_execAddCanPlayOnlineChangedDelegate_Parms AddCanPlayOnlineChangedDelegate_Parms;
	memcpy ( &AddCanPlayOnlineChangedDelegate_Parms.Callback, &Callback, 0x10 );

	this->ProcessEvent ( pFnAddCanPlayOnlineChangedDelegate, &AddCanPlayOnlineChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 GameDescription                ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMet ( unsigned char LocalUserNum, struct FString GameDescription, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRecordPlayersRecentlyMet = NULL;

	if ( ! pFnRecordPlayersRecentlyMet )
		pFnRecordPlayersRecentlyMet = (UFunction*) UObject::GObjObjects()->Data[ 46910 ];

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Parms RecordPlayersRecentlyMet_Parms;
	RecordPlayersRecentlyMet_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RecordPlayersRecentlyMet_Parms.GameDescription, &GameDescription, 0xC );

	this->ProcessEvent ( pFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RecordPlayersRecentlyMet_Parms.Players, 0xC );

	return RecordPlayersRecentlyMet_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearSaveDataNoSpaceDialogCompleteDelegate ( struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnClearSaveDataNoSpaceDialogCompleteDelegate = NULL;

	if ( ! pFnClearSaveDataNoSpaceDialogCompleteDelegate )
		pFnClearSaveDataNoSpaceDialogCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46908 ];

	UOnlineSubsystemSteamworks_execClearSaveDataNoSpaceDialogCompleteDelegate_Parms ClearSaveDataNoSpaceDialogCompleteDelegate_Parms;
	memcpy ( &ClearSaveDataNoSpaceDialogCompleteDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0x10 );

	this->ProcessEvent ( pFnClearSaveDataNoSpaceDialogCompleteDelegate, &ClearSaveDataNoSpaceDialogCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddSaveDataNoSpaceDialogCompleteDelegate ( struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnAddSaveDataNoSpaceDialogCompleteDelegate = NULL;

	if ( ! pFnAddSaveDataNoSpaceDialogCompleteDelegate )
		pFnAddSaveDataNoSpaceDialogCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46906 ];

	UOnlineSubsystemSteamworks_execAddSaveDataNoSpaceDialogCompleteDelegate_Parms AddSaveDataNoSpaceDialogCompleteDelegate_Parms;
	memcpy ( &AddSaveDataNoSpaceDialogCompleteDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0x10 );

	this->ProcessEvent ( pFnAddSaveDataNoSpaceDialogCompleteDelegate, &AddSaveDataNoSpaceDialogCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bContinueWithoutSave           ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnSaveDataNoSpaceDialogComplete ( unsigned long bContinueWithoutSave )
{
	static UFunction* pFnOnSaveDataNoSpaceDialogComplete = NULL;

	if ( ! pFnOnSaveDataNoSpaceDialogComplete )
		pFnOnSaveDataNoSpaceDialogComplete = (UFunction*) UObject::GObjObjects()->Data[ 46904 ];

	UOnlineSubsystemSteamworks_execOnSaveDataNoSpaceDialogComplete_Parms OnSaveDataNoSpaceDialogComplete_Parms;
	OnSaveDataNoSpaceDialogComplete_Parms.bContinueWithoutSave = bContinueWithoutSave;

	this->ProcessEvent ( pFnOnSaveDataNoSpaceDialogComplete, &OnSaveDataNoSpaceDialogComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearTrialStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearTrialStatusChangeDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearTrialStatusChangeDelegate = NULL;

	if ( ! pFnClearTrialStatusChangeDelegate )
		pFnClearTrialStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46902 ];

	UOnlineSubsystemSteamworks_execClearTrialStatusChangeDelegate_Parms ClearTrialStatusChangeDelegate_Parms;
	memcpy ( &ClearTrialStatusChangeDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearTrialStatusChangeDelegate, &ClearTrialStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddTrialStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddTrialStatusChangeDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddTrialStatusChangeDelegate = NULL;

	if ( ! pFnAddTrialStatusChangeDelegate )
		pFnAddTrialStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46899 ];

	UOnlineSubsystemSteamworks_execAddTrialStatusChangeDelegate_Parms AddTrialStatusChangeDelegate_Parms;
	memcpy ( &AddTrialStatusChangeDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddTrialStatusChangeDelegate, &AddTrialStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTrialStatusChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnTrialStatusChange ( )
{
	static UFunction* pFnOnTrialStatusChange = NULL;

	if ( ! pFnOnTrialStatusChange )
		pFnOnTrialStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 46898 ];

	UOnlineSubsystemSteamworks_execOnTrialStatusChange_Parms OnTrialStatusChange_Parms;

	this->ProcessEvent ( pFnOnTrialStatusChange, &OnTrialStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTrialVersion
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::IsTrialVersion ( )
{
	static UFunction* pFnIsTrialVersion = NULL;

	if ( ! pFnIsTrialVersion )
		pFnIsTrialVersion = (UFunction*) UObject::GObjObjects()->Data[ 46896 ];

	UOnlineSubsystemSteamworks_execIsTrialVersion_Parms IsTrialVersion_Parms;

	pFnIsTrialVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsTrialVersion, &IsTrialVersion_Parms, NULL );

	pFnIsTrialVersion->FunctionFlags |= 0x400;

	return IsTrialVersion_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnlockedDLCChangeDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearUnlockedDLCChangeDelegate = NULL;

	if ( ! pFnClearUnlockedDLCChangeDelegate )
		pFnClearUnlockedDLCChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46894 ];

	UOnlineSubsystemSteamworks_execClearUnlockedDLCChangeDelegate_Parms ClearUnlockedDLCChangeDelegate_Parms;
	memcpy ( &ClearUnlockedDLCChangeDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnlockedDLCChangeDelegate, &ClearUnlockedDLCChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnlockedDLCChangeDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddUnlockedDLCChangeDelegate = NULL;

	if ( ! pFnAddUnlockedDLCChangeDelegate )
		pFnAddUnlockedDLCChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46891 ];

	UOnlineSubsystemSteamworks_execAddUnlockedDLCChangeDelegate_Parms AddUnlockedDLCChangeDelegate_Parms;
	memcpy ( &AddUnlockedDLCChangeDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnlockedDLCChangeDelegate, &AddUnlockedDLCChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC
// [0x00020002] 
// Parameters infos:
// TArray< struct FName >         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FName > UOnlineSubsystemSteamworks::GetUnlockedDLC ( )
{
	static UFunction* pFnGetUnlockedDLC = NULL;

	if ( ! pFnGetUnlockedDLC )
		pFnGetUnlockedDLC = (UFunction*) UObject::GObjObjects()->Data[ 46887 ];

	UOnlineSubsystemSteamworks_execGetUnlockedDLC_Parms GetUnlockedDLC_Parms;

	this->ProcessEvent ( pFnGetUnlockedDLC, &GetUnlockedDLC_Parms, NULL );

	return GetUnlockedDLC_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnUnlockedDLCChange ( )
{
	static UFunction* pFnOnUnlockedDLCChange = NULL;

	if ( ! pFnOnUnlockedDLCChange )
		pFnOnUnlockedDLCChange = (UFunction*) UObject::GObjObjects()->Data[ 46886 ];

	UOnlineSubsystemSteamworks_execOnUnlockedDLCChange_Parms OnUnlockedDLCChange_Parms;

	this->ProcessEvent ( pFnOnUnlockedDLCChange, &OnUnlockedDLCChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::GetOverlayEnabled ( )
{
	static UFunction* pFnGetOverlayEnabled = NULL;

	if ( ! pFnGetOverlayEnabled )
		pFnGetOverlayEnabled = (UFunction*) UObject::GObjObjects()->Data[ 46884 ];

	UOnlineSubsystemSteamworks_execGetOverlayEnabled_Parms GetOverlayEnabled_Parms;

	pFnGetOverlayEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOverlayEnabled, &GetOverlayEnabled_Parms, NULL );

	pFnGetOverlayEnabled->FunctionFlags |= 0x400;

	return GetOverlayEnabled_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   AppName                        ( CPF_Parm )

int UOnlineSubsystemSteamworks::GetDLCPurchaseTime ( struct FName AppName )
{
	static UFunction* pFnGetDLCPurchaseTime = NULL;

	if ( ! pFnGetDLCPurchaseTime )
		pFnGetDLCPurchaseTime = (UFunction*) UObject::GObjObjects()->Data[ 46881 ];

	UOnlineSubsystemSteamworks_execGetDLCPurchaseTime_Parms GetDLCPurchaseTime_Parms;
	memcpy ( &GetDLCPurchaseTime_Parms.AppName, &AppName, 0x8 );

	pFnGetDLCPurchaseTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDLCPurchaseTime, &GetDLCPurchaseTime_Parms, NULL );

	pFnGetDLCPurchaseTime->FunctionFlags |= 0x400;

	return GetDLCPurchaseTime_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// struct FName                   NewCurrency                    ( CPF_Parm )
// struct FString                 NewCountry                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::HandleGetUserInfoComplete ( struct FName NewCurrency, struct FString NewCountry )
{
	static UFunction* pFnHandleGetUserInfoComplete = NULL;

	if ( ! pFnHandleGetUserInfoComplete )
		pFnHandleGetUserInfoComplete = (UFunction*) UObject::GObjObjects()->Data[ 46878 ];

	UOnlineSubsystemSteamworks_execHandleGetUserInfoComplete_Parms HandleGetUserInfoComplete_Parms;
	memcpy ( &HandleGetUserInfoComplete_Parms.NewCurrency, &NewCurrency, 0x8 );
	memcpy ( &HandleGetUserInfoComplete_Parms.NewCountry, &NewCountry, 0xC );

	this->ProcessEvent ( pFnHandleGetUserInfoComplete, &HandleGetUserInfoComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::GetPlayerCountry ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerCountry = NULL;

	if ( ! pFnGetPlayerCountry )
		pFnGetPlayerCountry = (UFunction*) UObject::GObjObjects()->Data[ 46875 ];

	UOnlineSubsystemSteamworks_execGetPlayerCountry_Parms GetPlayerCountry_Parms;
	GetPlayerCountry_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerCountry, &GetPlayerCountry_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::GetPlayerLanguage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerLanguage = NULL;

	if ( ! pFnGetPlayerLanguage )
		pFnGetPlayerLanguage = (UFunction*) UObject::GObjObjects()->Data[ 46872 ];

	UOnlineSubsystemSteamworks_execGetPlayerLanguage_Parms GetPlayerLanguage_Parms;
	GetPlayerLanguage_Parms.LocalUserNum = LocalUserNum;

	pFnGetPlayerLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerLanguage, &GetPlayerLanguage_Parms, NULL );

	pFnGetPlayerLanguage->FunctionFlags |= 0x400;

	return GetPlayerLanguage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerCountryDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerCountryDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate )
{
	static UFunction* pFnClearReadPlayerCountryDelegate = NULL;

	if ( ! pFnClearReadPlayerCountryDelegate )
		pFnClearReadPlayerCountryDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46869 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerCountryDelegate_Parms ClearReadPlayerCountryDelegate_Parms;
	ClearReadPlayerCountryDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerCountryDelegate_Parms.ReadPlayerCountryDelegate, &ReadPlayerCountryDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadPlayerCountryDelegate, &ClearReadPlayerCountryDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerCountryDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerCountryDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate )
{
	static UFunction* pFnAddReadPlayerCountryDelegate = NULL;

	if ( ! pFnAddReadPlayerCountryDelegate )
		pFnAddReadPlayerCountryDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46866 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerCountryDelegate_Parms AddReadPlayerCountryDelegate_Parms;
	AddReadPlayerCountryDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerCountryDelegate_Parms.ReadPlayerCountryDelegate, &ReadPlayerCountryDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadPlayerCountryDelegate, &AddReadPlayerCountryDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::AnyPlayerChatRestricted ( )
{
	static UFunction* pFnAnyPlayerChatRestricted = NULL;

	if ( ! pFnAnyPlayerChatRestricted )
		pFnAnyPlayerChatRestricted = (UFunction*) UObject::GObjObjects()->Data[ 46864 ];

	UOnlineSubsystemSteamworks_execAnyPlayerChatRestricted_Parms AnyPlayerChatRestricted_Parms;

	pFnAnyPlayerChatRestricted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAnyPlayerChatRestricted, &AnyPlayerChatRestricted_Parms, NULL );

	pFnAnyPlayerChatRestricted->FunctionFlags |= 0x400;

	return AnyPlayerChatRestricted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::InitializeTrophyAPI ( )
{
	static UFunction* pFnInitializeTrophyAPI = NULL;

	if ( ! pFnInitializeTrophyAPI )
		pFnInitializeTrophyAPI = (UFunction*) UObject::GObjObjects()->Data[ 46863 ];

	UOnlineSubsystemSteamworks_execInitializeTrophyAPI_Parms InitializeTrophyAPI_Parms;

	this->ProcessEvent ( pFnInitializeTrophyAPI, &InitializeTrophyAPI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FString >       Targets                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OpenStoreForItems ( unsigned char LocalUserNum, TArray< struct FString > Targets )
{
	static UFunction* pFnOpenStoreForItems = NULL;

	if ( ! pFnOpenStoreForItems )
		pFnOpenStoreForItems = (UFunction*) UObject::GObjObjects()->Data[ 46859 ];

	UOnlineSubsystemSteamworks_execOpenStoreForItems_Parms OpenStoreForItems_Parms;
	OpenStoreForItems_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OpenStoreForItems_Parms.Targets, &Targets, 0xC );

	pFnOpenStoreForItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenStoreForItems, &OpenStoreForItems_Parms, NULL );

	pFnOpenStoreForItems->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   DLC                            ( CPF_Parm )

void UOnlineSubsystemSteamworks::OpenStoreForDLC ( unsigned char LocalUserNum, struct FName DLC )
{
	static UFunction* pFnOpenStoreForDLC = NULL;

	if ( ! pFnOpenStoreForDLC )
		pFnOpenStoreForDLC = (UFunction*) UObject::GObjObjects()->Data[ 46856 ];

	UOnlineSubsystemSteamworks_execOpenStoreForDLC_Parms OpenStoreForDLC_Parms;
	OpenStoreForDLC_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OpenStoreForDLC_Parms.DLC, &DLC, 0x8 );

	pFnOpenStoreForDLC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenStoreForDLC, &OpenStoreForDLC_Parms, NULL );

	pFnOpenStoreForDLC->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync
// [0x00020001] ( FUNC_Final )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FString >       Targets                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OpenStoreForItemsAsync ( unsigned char LocalUserNum, TArray< struct FString > Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate )
{
	static UFunction* pFnOpenStoreForItemsAsync = NULL;

	if ( ! pFnOpenStoreForItemsAsync )
		pFnOpenStoreForItemsAsync = (UFunction*) UObject::GObjObjects()->Data[ 46851 ];

	UOnlineSubsystemSteamworks_execOpenStoreForItemsAsync_Parms OpenStoreForItemsAsync_Parms;
	OpenStoreForItemsAsync_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OpenStoreForItemsAsync_Parms.Targets, &Targets, 0xC );
	memcpy ( &OpenStoreForItemsAsync_Parms.OnStorePurchaseCompleteDelegate, &OnStorePurchaseCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnOpenStoreForItemsAsync, &OpenStoreForItemsAsync_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStorePurchaseCompleteDelegate ( )
{
	static UFunction* pFnOnStorePurchaseCompleteDelegate = NULL;

	if ( ! pFnOnStorePurchaseCompleteDelegate )
		pFnOnStorePurchaseCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46850 ];

	UOnlineSubsystemSteamworks_execOnStorePurchaseCompleteDelegate_Parms OnStorePurchaseCompleteDelegate_Parms;

	this->ProcessEvent ( pFnOnStorePurchaseCompleteDelegate, &OnStorePurchaseCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::OpenErrorDialog ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOpenErrorDialog = NULL;

	if ( ! pFnOpenErrorDialog )
		pFnOpenErrorDialog = (UFunction*) UObject::GObjObjects()->Data[ 46847 ];

	UOnlineSubsystemSteamworks_execOpenErrorDialog_Parms OpenErrorDialog_Parms;
	OpenErrorDialog_Parms.LocalUserNum = LocalUserNum;
	OpenErrorDialog_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOpenErrorDialog, &OpenErrorDialog_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode
// [0x00024000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  DisplayMode                    ( CPF_Parm )
// TArray< struct FString >       Targets                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            ServiceLabel                   ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemSteamworks::OpenPS4DisplayMode ( unsigned char LocalUserNum, unsigned char DisplayMode, TArray< struct FString > Targets, int ServiceLabel )
{
	static UFunction* pFnOpenPS4DisplayMode = NULL;

	if ( ! pFnOpenPS4DisplayMode )
		pFnOpenPS4DisplayMode = (UFunction*) UObject::GObjObjects()->Data[ 46841 ];

	UOnlineSubsystemSteamworks_execOpenPS4DisplayMode_Parms OpenPS4DisplayMode_Parms;
	OpenPS4DisplayMode_Parms.LocalUserNum = LocalUserNum;
	OpenPS4DisplayMode_Parms.DisplayMode = DisplayMode;
	memcpy ( &OpenPS4DisplayMode_Parms.Targets, &Targets, 0xC );
	OpenPS4DisplayMode_Parms.ServiceLabel = ServiceLabel;

	this->ProcessEvent ( pFnOpenPS4DisplayMode, &OpenPS4DisplayMode_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor
// [0x00020000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::ResetControllerColor ( int ControllerId )
{
	static UFunction* pFnResetControllerColor = NULL;

	if ( ! pFnResetControllerColor )
		pFnResetControllerColor = (UFunction*) UObject::GObjObjects()->Data[ 46839 ];

	UOnlineSubsystemSteamworks_execResetControllerColor_Parms ResetControllerColor_Parms;
	ResetControllerColor_Parms.ControllerId = ControllerId;

	this->ProcessEvent ( pFnResetControllerColor, &ResetControllerColor_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor
// [0x00020000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// struct FColor                  NewColor                       ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetControllerColor ( int ControllerId, struct FColor NewColor )
{
	static UFunction* pFnSetControllerColor = NULL;

	if ( ! pFnSetControllerColor )
		pFnSetControllerColor = (UFunction*) UObject::GObjObjects()->Data[ 46836 ];

	UOnlineSubsystemSteamworks_execSetControllerColor_Parms SetControllerColor_Parms;
	SetControllerColor_Parms.ControllerId = ControllerId;
	memcpy ( &SetControllerColor_Parms.NewColor, &NewColor, 0x4 );

	this->ProcessEvent ( pFnSetControllerColor, &SetControllerColor_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InPostID                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FString >       StringReplaceList              ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddInGamePost ( struct FString InPostID, unsigned char LocalUserNum, TArray< struct FString > StringReplaceList )
{
	static UFunction* pFnAddInGamePost = NULL;

	if ( ! pFnAddInGamePost )
		pFnAddInGamePost = (UFunction*) UObject::GObjObjects()->Data[ 46830 ];

	UOnlineSubsystemSteamworks_execAddInGamePost_Parms AddInGamePost_Parms;
	memcpy ( &AddInGamePost_Parms.InPostID, &InPostID, 0xC );
	AddInGamePost_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddInGamePost_Parms.StringReplaceList, &StringReplaceList, 0xC );

	this->ProcessEvent ( pFnAddInGamePost, &AddInGamePost_Parms, NULL );

	return AddInGamePost_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::IsEnabled ( )
{
	static UFunction* pFnIsEnabled = NULL;

	if ( ! pFnIsEnabled )
		pFnIsEnabled = (UFunction*) UObject::GObjObjects()->Data[ 46828 ];

	UOnlineSubsystemSteamworks_execIsEnabled_Parms IsEnabled_Parms;

	pFnIsEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsEnabled, &IsEnabled_Parms, NULL );

	pFnIsEnabled->FunctionFlags |= 0x400;

	return IsEnabled_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 PresenceString                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GameDataString                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::SetRichPresence ( unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString )
{
	static UFunction* pFnSetRichPresence = NULL;

	if ( ! pFnSetRichPresence )
		pFnSetRichPresence = (UFunction*) UObject::GObjObjects()->Data[ 46824 ];

	UOnlineSubsystemSteamworks_execSetRichPresence_Parms SetRichPresence_Parms;
	SetRichPresence_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRichPresence_Parms.PresenceString, &PresenceString, 0xC );
	memcpy ( &SetRichPresence_Parms.GameDataString, &GameDataString, 0xC );

	pFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRichPresence, &SetRichPresence_Parms, NULL );

	pFnSetRichPresence->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAllDelegates ( )
{
	static UFunction* pFnClearAllDelegates = NULL;

	if ( ! pFnClearAllDelegates )
		pFnClearAllDelegates = (UFunction*) UObject::GObjObjects()->Data[ 46823 ];

	UOnlineSubsystemSteamworks_execClearAllDelegates_Parms ClearAllDelegates_Parms;

	this->ProcessEvent ( pFnClearAllDelegates, &ClearAllDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate )
{
	static UFunction* pFnClearWriteSharedFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteSharedFileCompleteDelegate )
		pFnClearWriteSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46820 ];

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Parms ClearWriteSharedFileCompleteDelegate_Parms;
	memcpy ( &ClearWriteSharedFileCompleteDelegate_Parms.WriteSharedFileCompleteDelegate, &WriteSharedFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate )
{
	static UFunction* pFnAddWriteSharedFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteSharedFileCompleteDelegate )
		pFnAddWriteSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46817 ];

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Parms AddWriteSharedFileCompleteDelegate_Parms;
	memcpy ( &AddWriteSharedFileCompleteDelegate_Parms.WriteSharedFileCompleteDelegate, &WriteSharedFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        Contents                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteSharedFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* Contents )
{
	static UFunction* pFnWriteSharedFile = NULL;

	if ( ! pFnWriteSharedFile )
		pFnWriteSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 46811 ];

	UOnlineSubsystemSteamworks_execWriteSharedFile_Parms WriteSharedFile_Parms;
	memcpy ( &WriteSharedFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &WriteSharedFile_Parms.Filename, &Filename, 0xC );

	pFnWriteSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteSharedFile, &WriteSharedFile_Parms, NULL );

	pFnWriteSharedFile->FunctionFlags |= 0x400;

	if ( Contents )
		memcpy ( Contents, &WriteSharedFile_Parms.Contents, 0xC );

	return WriteSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle )
{
	static UFunction* pFnOnWriteSharedFileComplete = NULL;

	if ( ! pFnOnWriteSharedFileComplete )
		pFnOnWriteSharedFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 46806 ];

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Parms OnWriteSharedFileComplete_Parms;
	OnWriteSharedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnWriteSharedFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnWriteSharedFileComplete_Parms.Filename, &Filename, 0xC );
	memcpy ( &OnWriteSharedFileComplete_Parms.SharedHandle, &SharedHandle, 0xC );

	this->ProcessEvent ( pFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate )
{
	static UFunction* pFnClearReadSharedFileCompleteDelegate = NULL;

	if ( ! pFnClearReadSharedFileCompleteDelegate )
		pFnClearReadSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46803 ];

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Parms ClearReadSharedFileCompleteDelegate_Parms;
	memcpy ( &ClearReadSharedFileCompleteDelegate_Parms.ReadSharedFileCompleteDelegate, &ReadSharedFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate )
{
	static UFunction* pFnAddReadSharedFileCompleteDelegate = NULL;

	if ( ! pFnAddReadSharedFileCompleteDelegate )
		pFnAddReadSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46800 ];

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Parms AddReadSharedFileCompleteDelegate_Parms;
	memcpy ( &AddReadSharedFileCompleteDelegate_Parms.ReadSharedFileCompleteDelegate, &ReadSharedFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadSharedFile ( struct FString SharedHandle )
{
	static UFunction* pFnReadSharedFile = NULL;

	if ( ! pFnReadSharedFile )
		pFnReadSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 46797 ];

	UOnlineSubsystemSteamworks_execReadSharedFile_Parms ReadSharedFile_Parms;
	memcpy ( &ReadSharedFile_Parms.SharedHandle, &SharedHandle, 0xC );

	pFnReadSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadSharedFile, &ReadSharedFile_Parms, NULL );

	pFnReadSharedFile->FunctionFlags |= 0x400;

	return ReadSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete ( unsigned long bWasSuccessful, struct FString SharedHandle )
{
	static UFunction* pFnOnReadSharedFileComplete = NULL;

	if ( ! pFnOnReadSharedFileComplete )
		pFnOnReadSharedFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 46794 ];

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Parms OnReadSharedFileComplete_Parms;
	OnReadSharedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadSharedFileComplete_Parms.SharedHandle, &SharedHandle, 0xC );

	this->ProcessEvent ( pFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearSharedFile ( struct FString SharedHandle )
{
	static UFunction* pFnClearSharedFile = NULL;

	if ( ! pFnClearSharedFile )
		pFnClearSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 46791 ];

	UOnlineSubsystemSteamworks_execClearSharedFile_Parms ClearSharedFile_Parms;
	memcpy ( &ClearSharedFile_Parms.SharedHandle, &SharedHandle, 0xC );

	pFnClearSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSharedFile, &ClearSharedFile_Parms, NULL );

	pFnClearSharedFile->FunctionFlags |= 0x400;

	return ClearSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::ClearSharedFiles ( )
{
	static UFunction* pFnClearSharedFiles = NULL;

	if ( ! pFnClearSharedFiles )
		pFnClearSharedFiles = (UFunction*) UObject::GObjObjects()->Data[ 46789 ];

	UOnlineSubsystemSteamworks_execClearSharedFiles_Parms ClearSharedFiles_Parms;

	pFnClearSharedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSharedFiles, &ClearSharedFiles_Parms, NULL );

	pFnClearSharedFiles->FunctionFlags |= 0x400;

	return ClearSharedFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetSharedFileContents ( struct FString SharedHandle, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetSharedFileContents = NULL;

	if ( ! pFnGetSharedFileContents )
		pFnGetSharedFileContents = (UFunction*) UObject::GObjObjects()->Data[ 46784 ];

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Parms GetSharedFileContents_Parms;
	memcpy ( &GetSharedFileContents_Parms.SharedHandle, &SharedHandle, 0xC );

	pFnGetSharedFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSharedFileContents, &GetSharedFileContents_Parms, NULL );

	pFnGetSharedFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetSharedFileContents_Parms.FileContents, 0xC );

	return GetSharedFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate )
{
	static UFunction* pFnClearDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearDeleteUserFileCompleteDelegate )
		pFnClearDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46781 ];

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Parms ClearDeleteUserFileCompleteDelegate_Parms;
	memcpy ( &ClearDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, &DeleteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate )
{
	static UFunction* pFnAddDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddDeleteUserFileCompleteDelegate )
		pFnAddDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46778 ];

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Parms AddDeleteUserFileCompleteDelegate_Parms;
	memcpy ( &AddDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, &DeleteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldCloudDelete             ( CPF_Parm )
// unsigned long                  bShouldLocallyDelete           ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DeleteUserFile ( struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete )
{
	static UFunction* pFnDeleteUserFile = NULL;

	if ( ! pFnDeleteUserFile )
		pFnDeleteUserFile = (UFunction*) UObject::GObjObjects()->Data[ 46772 ];

	UOnlineSubsystemSteamworks_execDeleteUserFile_Parms DeleteUserFile_Parms;
	memcpy ( &DeleteUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &DeleteUserFile_Parms.Filename, &Filename, 0xC );
	DeleteUserFile_Parms.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Parms.bShouldLocallyDelete = bShouldLocallyDelete;

	pFnDeleteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteUserFile, &DeleteUserFile_Parms, NULL );

	pFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnDeleteUserFileComplete = NULL;

	if ( ! pFnOnDeleteUserFileComplete )
		pFnOnDeleteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 46768 ];

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Parms OnDeleteUserFileComplete_Parms;
	OnDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnDeleteUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate )
{
	static UFunction* pFnClearWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteUserFileCompleteDelegate )
		pFnClearWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46765 ];

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Parms ClearWriteUserFileCompleteDelegate_Parms;
	memcpy ( &ClearWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, &WriteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate )
{
	static UFunction* pFnAddWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteUserFileCompleteDelegate )
		pFnAddWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46762 ];

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Parms AddWriteUserFileCompleteDelegate_Parms;
	memcpy ( &AddWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, &WriteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteUserFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnWriteUserFile = NULL;

	if ( ! pFnWriteUserFile )
		pFnWriteUserFile = (UFunction*) UObject::GObjObjects()->Data[ 46756 ];

	UOnlineSubsystemSteamworks_execWriteUserFile_Parms WriteUserFile_Parms;
	memcpy ( &WriteUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &WriteUserFile_Parms.Filename, &Filename, 0xC );

	pFnWriteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteUserFile, &WriteUserFile_Parms, NULL );

	pFnWriteUserFile->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &WriteUserFile_Parms.FileContents, 0xC );

	return WriteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnWriteUserFileComplete = NULL;

	if ( ! pFnOnWriteUserFileComplete )
		pFnOnWriteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 46752 ];

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Parms OnWriteUserFileComplete_Parms;
	OnWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnWriteUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnWriteUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate )
{
	static UFunction* pFnClearReadUserFileCompleteDelegate = NULL;

	if ( ! pFnClearReadUserFileCompleteDelegate )
		pFnClearReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46749 ];

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Parms ClearReadUserFileCompleteDelegate_Parms;
	memcpy ( &ClearReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, &ReadUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate )
{
	static UFunction* pFnAddReadUserFileCompleteDelegate = NULL;

	if ( ! pFnAddReadUserFileCompleteDelegate )
		pFnAddReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46746 ];

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Parms AddReadUserFileCompleteDelegate_Parms;
	memcpy ( &AddReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, &ReadUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadUserFile ( struct FString UserId, struct FString Filename )
{
	static UFunction* pFnReadUserFile = NULL;

	if ( ! pFnReadUserFile )
		pFnReadUserFile = (UFunction*) UObject::GObjObjects()->Data[ 46742 ];

	UOnlineSubsystemSteamworks_execReadUserFile_Parms ReadUserFile_Parms;
	memcpy ( &ReadUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &ReadUserFile_Parms.Filename, &Filename, 0xC );

	pFnReadUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadUserFile, &ReadUserFile_Parms, NULL );

	pFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnReadUserFileComplete = NULL;

	if ( ! pFnOnReadUserFileComplete )
		pFnOnReadUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 46738 ];

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Parms OnReadUserFileComplete_Parms;
	OnReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnReadUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadUserFileComplete, &OnReadUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FEmsFile >      UserFiles                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetUserFileList ( struct FString UserId, TArray< struct FEmsFile >* UserFiles )
{
	static UFunction* pFnGetUserFileList = NULL;

	if ( ! pFnGetUserFileList )
		pFnGetUserFileList = (UFunction*) UObject::GObjObjects()->Data[ 46734 ];

	UOnlineSubsystemSteamworks_execGetUserFileList_Parms GetUserFileList_Parms;
	memcpy ( &GetUserFileList_Parms.UserId, &UserId, 0xC );

	pFnGetUserFileList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserFileList, &GetUserFileList_Parms, NULL );

	pFnGetUserFileList->FunctionFlags |= 0x400;

	if ( UserFiles )
		memcpy ( UserFiles, &GetUserFileList_Parms.UserFiles, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate )
{
	static UFunction* pFnClearEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnClearEnumerateUserFileCompleteDelegate )
		pFnClearEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46731 ];

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Parms ClearEnumerateUserFileCompleteDelegate_Parms;
	memcpy ( &ClearEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, &EnumerateUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate )
{
	static UFunction* pFnAddEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnAddEnumerateUserFileCompleteDelegate )
		pFnAddEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46728 ];

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Parms AddEnumerateUserFileCompleteDelegate_Parms;
	memcpy ( &AddEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, &EnumerateUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::EnumerateUserFiles ( struct FString UserId )
{
	static UFunction* pFnEnumerateUserFiles = NULL;

	if ( ! pFnEnumerateUserFiles )
		pFnEnumerateUserFiles = (UFunction*) UObject::GObjObjects()->Data[ 46726 ];

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Parms EnumerateUserFiles_Parms;
	memcpy ( &EnumerateUserFiles_Parms.UserId, &UserId, 0xC );

	pFnEnumerateUserFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnumerateUserFiles, &EnumerateUserFiles_Parms, NULL );

	pFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete ( unsigned long bWasSuccessful, struct FString UserId )
{
	static UFunction* pFnOnEnumerateUserFilesComplete = NULL;

	if ( ! pFnOnEnumerateUserFilesComplete )
		pFnOnEnumerateUserFilesComplete = (UFunction*) UObject::GObjObjects()->Data[ 46723 ];

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Parms OnEnumerateUserFilesComplete_Parms;
	OnEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnEnumerateUserFilesComplete_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearFile ( struct FString UserId, struct FString Filename )
{
	static UFunction* pFnClearFile = NULL;

	if ( ! pFnClearFile )
		pFnClearFile = (UFunction*) UObject::GObjObjects()->Data[ 46719 ];

	UOnlineSubsystemSteamworks_execClearFile_Parms ClearFile_Parms;
	memcpy ( &ClearFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &ClearFile_Parms.Filename, &Filename, 0xC );

	pFnClearFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFile, &ClearFile_Parms, NULL );

	pFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearFiles ( struct FString UserId )
{
	static UFunction* pFnClearFiles = NULL;

	if ( ! pFnClearFiles )
		pFnClearFiles = (UFunction*) UObject::GObjObjects()->Data[ 46716 ];

	UOnlineSubsystemSteamworks_execClearFiles_Parms ClearFiles_Parms;
	memcpy ( &ClearFiles_Parms.UserId, &UserId, 0xC );

	pFnClearFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFiles, &ClearFiles_Parms, NULL );

	pFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetFileContents ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetFileContents = NULL;

	if ( ! pFnGetFileContents )
		pFnGetFileContents = (UFunction*) UObject::GObjObjects()->Data[ 46710 ];

	UOnlineSubsystemSteamworks_execGetFileContents_Parms GetFileContents_Parms;
	memcpy ( &GetFileContents_Parms.UserId, &UserId, 0xC );
	memcpy ( &GetFileContents_Parms.Filename, &Filename, 0xC );

	pFnGetFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFileContents, &GetFileContents_Parms, NULL );

	pFnGetFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetFileContents_Parms.FileContents, 0xC );

	return GetFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteUserFileInternal ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnWriteUserFileInternal = NULL;

	if ( ! pFnWriteUserFileInternal )
		pFnWriteUserFileInternal = (UFunction*) UObject::GObjObjects()->Data[ 46704 ];

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Parms WriteUserFileInternal_Parms;
	memcpy ( &WriteUserFileInternal_Parms.UserId, &UserId, 0xC );
	memcpy ( &WriteUserFileInternal_Parms.Filename, &Filename, 0xC );

	pFnWriteUserFileInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteUserFileInternal, &WriteUserFileInternal_Parms, NULL );

	pFnWriteUserFileInternal->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &WriteUserFileInternal_Parms.FileContents, 0xC );

	return WriteUserFileInternal_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          VoiceVolume                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetVoiceReceiveVolume ( float VoiceVolume )
{
	static UFunction* pFnSetVoiceReceiveVolume = NULL;

	if ( ! pFnSetVoiceReceiveVolume )
		pFnSetVoiceReceiveVolume = (UFunction*) UObject::GObjObjects()->Data[ 46701 ];

	UOnlineSubsystemSteamworks_execSetVoiceReceiveVolume_Parms SetVoiceReceiveVolume_Parms;
	SetVoiceReceiveVolume_Parms.VoiceVolume = VoiceVolume;

	pFnSetVoiceReceiveVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Parms, NULL );

	pFnSetVoiceReceiveVolume->FunctionFlags |= 0x400;

	return SetVoiceReceiveVolume_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            FriendUID                      ( CPF_Parm )
// struct FString                 ServerURL                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ServerUID                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetFriendJoinURL ( struct FUniqueNetId FriendUID, struct FString* ServerURL, struct FString* ServerUID )
{
	static UFunction* pFnGetFriendJoinURL = NULL;

	if ( ! pFnGetFriendJoinURL )
		pFnGetFriendJoinURL = (UFunction*) UObject::GObjObjects()->Data[ 46696 ];

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Parms GetFriendJoinURL_Parms;
	memcpy ( &GetFriendJoinURL_Parms.FriendUID, &FriendUID, 0x48 );

	pFnGetFriendJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendJoinURL, &GetFriendJoinURL_Parms, NULL );

	pFnGetFriendJoinURL->FunctionFlags |= 0x400;

	if ( ServerURL )
		memcpy ( ServerURL, &GetFriendJoinURL_Parms.ServerURL, 0xC );

	if ( ServerUID )
		memcpy ( ServerUID, &GetFriendJoinURL_Parms.ServerUID, 0xC );

	return GetFriendJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bMarkAsJoined                  ( CPF_Parm )
// struct FString                 ServerURL                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ServerUID                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL ( unsigned long bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID )
{
	static UFunction* pFnGetCommandlineJoinURL = NULL;

	if ( ! pFnGetCommandlineJoinURL )
		pFnGetCommandlineJoinURL = (UFunction*) UObject::GObjObjects()->Data[ 46691 ];

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Parms GetCommandlineJoinURL_Parms;
	GetCommandlineJoinURL_Parms.bMarkAsJoined = bMarkAsJoined;

	pFnGetCommandlineJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Parms, NULL );

	pFnGetCommandlineJoinURL->FunctionFlags |= 0x400;

	if ( ServerURL )
		memcpy ( ServerURL, &GetCommandlineJoinURL_Parms.ServerURL, 0xC );

	if ( ServerUID )
		memcpy ( ServerUID, &GetCommandlineJoinURL_Parms.ServerUID, 0xC );

	return GetCommandlineJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UIDString                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            OutUID                         ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId ( struct FString UIDString, struct FUniqueNetId* OutUID )
{
	static UFunction* pFnInt64ToUniqueNetId = NULL;

	if ( ! pFnInt64ToUniqueNetId )
		pFnInt64ToUniqueNetId = (UFunction*) UObject::GObjObjects()->Data[ 46687 ];

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Parms Int64ToUniqueNetId_Parms;
	memcpy ( &Int64ToUniqueNetId_Parms.UIDString, &UIDString, 0xC );

	pFnInt64ToUniqueNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Parms, NULL );

	pFnInt64ToUniqueNetId->FunctionFlags |= 0x400;

	if ( OutUID )
		memcpy ( OutUID, &Int64ToUniqueNetId_Parms.OutUID, 0x48 );

	return Int64ToUniqueNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            Uid                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64 ( struct FUniqueNetId* Uid )
{
	static UFunction* pFnUniqueNetIdToInt64 = NULL;

	if ( ! pFnUniqueNetIdToInt64 )
		pFnUniqueNetIdToInt64 = (UFunction*) UObject::GObjObjects()->Data[ 46684 ];

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Parms UniqueNetIdToInt64_Parms;

	pFnUniqueNetIdToInt64->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Parms, NULL );

	pFnUniqueNetIdToInt64->FunctionFlags |= 0x400;

	if ( Uid )
		memcpy ( Uid, &UniqueNetIdToInt64_Parms.Uid, 0x48 );

	return UniqueNetIdToInt64_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAudioComponent*         VOIPAudioComponent             ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished ( class UAudioComponent* VOIPAudioComponent )
{
	static UFunction* pFnNotifyVOIPPlaybackFinished = NULL;

	if ( ! pFnNotifyVOIPPlaybackFinished )
		pFnNotifyVOIPPlaybackFinished = (UFunction*) UObject::GObjObjects()->Data[ 46682 ];

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Parms NotifyVOIPPlaybackFinished_Parms;
	NotifyVOIPPlaybackFinished_Parms.VOIPAudioComponent = VOIPAudioComponent;

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Parms, NULL );

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020002] 
// Parameters infos:
// class UAudioComponent*         AC                             ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished ( class UAudioComponent* AC )
{
	static UFunction* pFnOnVOIPPlaybackFinished = NULL;

	if ( ! pFnOnVOIPPlaybackFinished )
		pFnOnVOIPPlaybackFinished = (UFunction*) UObject::GObjObjects()->Data[ 46680 ];

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Parms OnVOIPPlaybackFinished_Parms;
	OnVOIPPlaybackFinished_Parms.AC = AC;

	this->ProcessEvent ( pFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 SubURL                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerUID                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowProfileUI ( unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID )
{
	static UFunction* pFnShowProfileUI = NULL;

	if ( ! pFnShowProfileUI )
		pFnShowProfileUI = (UFunction*) UObject::GObjObjects()->Data[ 46675 ];

	UOnlineSubsystemSteamworks_execShowProfileUI_Parms ShowProfileUI_Parms;
	ShowProfileUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowProfileUI_Parms.SubURL, &SubURL, 0xC );
	memcpy ( &ShowProfileUI_Parms.PlayerUID, &PlayerUID, 0x48 );

	pFnShowProfileUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowProfileUI, &ShowProfileUI_Parms, NULL );

	pFnShowProfileUI->FunctionFlags |= 0x400;

	return ShowProfileUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            Uid                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName ( struct FUniqueNetId* Uid )
{
	static UFunction* pFnUniqueNetIdToPlayerName = NULL;

	if ( ! pFnUniqueNetIdToPlayerName )
		pFnUniqueNetIdToPlayerName = (UFunction*) UObject::GObjObjects()->Data[ 46672 ];

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Parms UniqueNetIdToPlayerName_Parms;

	pFnUniqueNetIdToPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Parms, NULL );

	pFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;

	if ( Uid )
		memcpy ( Uid, &UniqueNetIdToPlayerName_Parms.Uid, 0x48 );

	return UniqueNetIdToPlayerName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AchievementId                  ( CPF_Parm )
// int                            ProgressCount                  ( CPF_Parm )
// int                            MaxProgress                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress ( int AchievementId, int ProgressCount, int MaxProgress )
{
	static UFunction* pFnDisplayAchievementProgress = NULL;

	if ( ! pFnDisplayAchievementProgress )
		pFnDisplayAchievementProgress = (UFunction*) UObject::GObjObjects()->Data[ 46667 ];

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Parms DisplayAchievementProgress_Parms;
	DisplayAchievementProgress_Parms.AchievementId = AchievementId;
	DisplayAchievementProgress_Parms.ProgressCount = ProgressCount;
	DisplayAchievementProgress_Parms.MaxProgress = MaxProgress;

	pFnDisplayAchievementProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisplayAchievementProgress, &DisplayAchievementProgress_Parms, NULL );

	pFnDisplayAchievementProgress->FunctionFlags |= 0x400;

	return DisplayAchievementProgress_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 LeaderboardName                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  SortType                       ( CPF_Parm )
// unsigned char                  DisplayFormat                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::CreateLeaderboard ( struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat )
{
	static UFunction* pFnCreateLeaderboard = NULL;

	if ( ! pFnCreateLeaderboard )
		pFnCreateLeaderboard = (UFunction*) UObject::GObjObjects()->Data[ 46662 ];

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Parms CreateLeaderboard_Parms;
	memcpy ( &CreateLeaderboard_Parms.LeaderboardName, &LeaderboardName, 0xC );
	CreateLeaderboard_Parms.SortType = SortType;
	CreateLeaderboard_Parms.DisplayFormat = DisplayFormat;

	pFnCreateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateLeaderboard, &CreateLeaderboard_Parms, NULL );

	pFnCreateLeaderboard->FunctionFlags |= 0x400;

	return CreateLeaderboard_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bResetAchievements             ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ResetStats ( unsigned long bResetAchievements )
{
	static UFunction* pFnResetStats = NULL;

	if ( ! pFnResetStats )
		pFnResetStats = (UFunction*) UObject::GObjObjects()->Data[ 46659 ];

	UOnlineSubsystemSteamworks_execResetStats_Parms ResetStats_Parms;
	ResetStats_Parms.bResetAchievements = bResetAchievements;

	pFnResetStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetStats, &ResetStats_Parms, NULL );

	pFnResetStats->FunctionFlags |= 0x400;

	return ResetStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MessageTitle                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NonEditableMessage             ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EditableMessage                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Recipients                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI ( unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients )
{
	static UFunction* pFnShowCustomMessageUI = NULL;

	if ( ! pFnShowCustomMessageUI )
		pFnShowCustomMessageUI = (UFunction*) UObject::GObjObjects()->Data[ 46651 ];

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Parms ShowCustomMessageUI_Parms;
	ShowCustomMessageUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomMessageUI_Parms.MessageTitle, &MessageTitle, 0xC );
	memcpy ( &ShowCustomMessageUI_Parms.NonEditableMessage, &NonEditableMessage, 0xC );
	memcpy ( &ShowCustomMessageUI_Parms.EditableMessage, &EditableMessage, 0xC );

	this->ProcessEvent ( pFnShowCustomMessageUI, &ShowCustomMessageUI_Parms, NULL );

	if ( Recipients )
		memcpy ( Recipients, &ShowCustomMessageUI_Parms.Recipients, 0xC );

	return ShowCustomMessageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnClearCrossTitleProfileSettings = NULL;

	if ( ! pFnClearCrossTitleProfileSettings )
		pFnClearCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 46648 ];

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Parms ClearCrossTitleProfileSettings_Parms;
	ClearCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ClearCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnGetCrossTitleProfileSettings = NULL;

	if ( ! pFnGetCrossTitleProfileSettings )
		pFnGetCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 46644 ];

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Parms GetCrossTitleProfileSettings_Parms;
	GetCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	GetCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Parms, NULL );

	return GetCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadCrossTitleProfileSettingsCompleteDelegate )
		pFnClearReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46641 ];

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadCrossTitleProfileSettingsCompleteDelegate )
		pFnAddReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46638 ];

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms AddReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete ( unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadCrossTitleProfileSettingsComplete = NULL;

	if ( ! pFnOnReadCrossTitleProfileSettingsComplete )
		pFnOnReadCrossTitleProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46634 ];

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Parms OnReadCrossTitleProfileSettingsComplete_Parms;
	OnReadCrossTitleProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadCrossTitleProfileSettingsComplete_Parms.TitleId = TitleId;
	OnReadCrossTitleProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadCrossTitleProfileSettings = NULL;

	if ( ! pFnReadCrossTitleProfileSettings )
		pFnReadCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 46629 ];

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Parms ReadCrossTitleProfileSettings_Parms;
	ReadCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadCrossTitleProfileSettings_Parms.TitleId = TitleId;
	ReadCrossTitleProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Parms, NULL );

	return ReadCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AvatarItemId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId )
{
	static UFunction* pFnUnlockAvatarAward = NULL;

	if ( ! pFnUnlockAvatarAward )
		pFnUnlockAvatarAward = (UFunction*) UObject::GObjObjects()->Data[ 46625 ];

	UOnlineSubsystemSteamworks_execUnlockAvatarAward_Parms UnlockAvatarAward_Parms;
	UnlockAvatarAward_Parms.LocalUserNum = LocalUserNum;
	UnlockAvatarAward_Parms.AvatarItemId = AvatarItemId;

	this->ProcessEvent ( pFnUnlockAvatarAward, &UnlockAvatarAward_Parms, NULL );

	return UnlockAvatarAward_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSteamPlayerClanData > Results                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetSteamClanData ( TArray< struct FSteamPlayerClanData >* Results )
{
	static UFunction* pFnGetSteamClanData = NULL;

	if ( ! pFnGetSteamClanData )
		pFnGetSteamClanData = (UFunction*) UObject::GObjObjects()->Data[ 46622 ];

	UOnlineSubsystemSteamworks_execGetSteamClanData_Parms GetSteamClanData_Parms;

	pFnGetSteamClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSteamClanData, &GetSteamClanData_Parms, NULL );

	pFnGetSteamClanData->FunctionFlags |= 0x400;

	if ( Results )
		memcpy ( Results, &GetSteamClanData_Parms.Results, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate )
{
	static UFunction* pFnClearGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnClearGetNumberOfCurrentPlayersCompleteDelegate )
		pFnClearGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46619 ];

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate )
{
	static UFunction* pFnAddGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnAddGetNumberOfCurrentPlayersCompleteDelegate )
		pFnAddGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46616 ];

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms AddGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
// Parameters infos:
// int                            TotalPlayers                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers )
{
	static UFunction* pFnOnGetNumberOfCurrentPlayersComplete = NULL;

	if ( ! pFnOnGetNumberOfCurrentPlayersComplete )
		pFnOnGetNumberOfCurrentPlayersComplete = (UFunction*) UObject::GObjObjects()->Data[ 46614 ];

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Parms OnGetNumberOfCurrentPlayersComplete_Parms;
	OnGetNumberOfCurrentPlayersComplete_Parms.TotalPlayers = TotalPlayers;

	this->ProcessEvent ( pFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayers = NULL;

	if ( ! pFnGetNumberOfCurrentPlayers )
		pFnGetNumberOfCurrentPlayers = (UFunction*) UObject::GObjObjects()->Data[ 46612 ];

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, NULL );

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;

	return GetNumberOfCurrentPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// unsigned char                  Size                           ( CPF_Parm )
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, unsigned char Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate )
{
	static UFunction* pFnReadOnlineAvatar = NULL;

	if ( ! pFnReadOnlineAvatar )
		pFnReadOnlineAvatar = (UFunction*) UObject::GObjObjects()->Data[ 46608 ];

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Parms ReadOnlineAvatar_Parms;
	memcpy ( &ReadOnlineAvatar_Parms.PlayerNetId, &PlayerNetId, 0x48 );
	ReadOnlineAvatar_Parms.Size = Size;
	memcpy ( &ReadOnlineAvatar_Parms.ReadOnlineAvatarCompleteDelegate, &ReadOnlineAvatarCompleteDelegate, 0x10 );

	pFnReadOnlineAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineAvatar, &ReadOnlineAvatar_Parms, NULL );

	pFnReadOnlineAvatar->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Description                    ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnShowCustomPlayersUI = NULL;

	if ( ! pFnShowCustomPlayersUI )
		pFnShowCustomPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 46601 ];

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;
	ShowCustomPlayersUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomPlayersUI_Parms.Title, &Title, 0xC );
	memcpy ( &ShowCustomPlayersUI_Parms.Description, &Description, 0xC );

	pFnShowCustomPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, NULL );

	pFnShowCustomPlayersUI->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ShowCustomPlayersUI_Parms.Players, 0xC );

	return ShowCustomPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->Data[ 46595 ];

	UOnlineSubsystemSteamworks_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	pFnGetAchievements->FunctionFlags |= 0x400;

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0xC );

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46591 ];

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46587 ];

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46585 ];

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->Data[ 46579 ];

	UOnlineSubsystemSteamworks_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	pFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowPlayersUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowPlayersUI = NULL;

	if ( ! pFnShowPlayersUI )
		pFnShowPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 46576 ];

	UOnlineSubsystemSteamworks_execShowPlayersUI_Parms ShowPlayersUI_Parms;
	ShowPlayersUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPlayersUI, &ShowPlayersUI_Parms, NULL );

	pFnShowPlayersUI->FunctionFlags |= 0x400;

	return ShowPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 46572 ];

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.PlayerID, &PlayerID, 0x48 );

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 46569 ];

	UOnlineSubsystemSteamworks_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnClearProfileDataChangedDelegate = NULL;

	if ( ! pFnClearProfileDataChangedDelegate )
		pFnClearProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46565 ];

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;
	ClearProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnAddProfileDataChangedDelegate = NULL;

	if ( ! pFnAddProfileDataChangedDelegate )
		pFnAddProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46561 ];

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;
	AddProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnProfileDataChanged ( )
{
	static UFunction* pFnOnProfileDataChanged = NULL;

	if ( ! pFnOnProfileDataChanged )
		pFnOnProfileDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 46560 ];

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent ( pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            PictureId                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId )
{
	static UFunction* pFnUnlockGamerPicture = NULL;

	if ( ! pFnUnlockGamerPicture )
		pFnUnlockGamerPicture = (UFunction*) UObject::GObjObjects()->Data[ 46556 ];

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;
	UnlockGamerPicture_Parms.LocalUserNum = LocalUserNum;
	UnlockGamerPicture_Parms.PictureId = PictureId;

	this->ProcessEvent ( pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, NULL );

	return UnlockGamerPicture_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46552 ];

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46548 ];

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->Data[ 46546 ];

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )
// float                          PercentComplete                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->Data[ 46541 ];

	UOnlineSubsystemSteamworks_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;
	UnlockAchievement_Parms.PercentComplete = PercentComplete;

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   StatName                       ( CPF_Parm )
// int                            Points                         ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UpdateStat ( unsigned char LocalUserNum, struct FName StatName, int Points )
{
	static UFunction* pFnUpdateStat = NULL;

	if ( ! pFnUpdateStat )
		pFnUpdateStat = (UFunction*) UObject::GObjObjects()->Data[ 46536 ];

	UOnlineSubsystemSteamworks_execUpdateStat_Parms UpdateStat_Parms;
	UpdateStat_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UpdateStat_Parms.StatName, &StatName, 0x8 );
	UpdateStat_Parms.Points = Points;

	this->ProcessEvent ( pFnUpdateStat, &UpdateStat_Parms, NULL );

	return UpdateStat_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            DeviceID                       ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::IsDeviceValid ( int DeviceID, int SizeNeeded )
{
	static UFunction* pFnIsDeviceValid = NULL;

	if ( ! pFnIsDeviceValid )
		pFnIsDeviceValid = (UFunction*) UObject::GObjObjects()->Data[ 46532 ];

	UOnlineSubsystemSteamworks_execIsDeviceValid_Parms IsDeviceValid_Parms;
	IsDeviceValid_Parms.DeviceID = DeviceID;
	IsDeviceValid_Parms.SizeNeeded = SizeNeeded;

	this->ProcessEvent ( pFnIsDeviceValid, &IsDeviceValid_Parms, NULL );

	return IsDeviceValid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 DeviceName                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName )
{
	static UFunction* pFnGetDeviceSelectionResults = NULL;

	if ( ! pFnGetDeviceSelectionResults )
		pFnGetDeviceSelectionResults = (UFunction*) UObject::GObjObjects()->Data[ 46528 ];

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;
	GetDeviceSelectionResults_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, NULL );

	if ( DeviceName )
		memcpy ( DeviceName, &GetDeviceSelectionResults_Parms.DeviceName, 0xC );

	return GetDeviceSelectionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnClearDeviceSelectionDoneDelegate )
		pFnClearDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46525 ];

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;
	ClearDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0x10 );

	this->ProcessEvent ( pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnAddDeviceSelectionDoneDelegate )
		pFnAddDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46522 ];

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;
	AddDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0x10 );

	this->ProcessEvent ( pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeviceSelectionComplete = NULL;

	if ( ! pFnOnDeviceSelectionComplete )
		pFnOnDeviceSelectionComplete = (UFunction*) UObject::GObjObjects()->Data[ 46520 ];

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;
	OnDeviceSelectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_Parm )
// unsigned long                  bManageStorage                 ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage )
{
	static UFunction* pFnShowDeviceSelectionUI = NULL;

	if ( ! pFnShowDeviceSelectionUI )
		pFnShowDeviceSelectionUI = (UFunction*) UObject::GObjObjects()->Data[ 46515 ];

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;
	ShowDeviceSelectionUI_Parms.LocalUserNum = LocalUserNum;
	ShowDeviceSelectionUI_Parms.SizeNeeded = SizeNeeded;
	ShowDeviceSelectionUI_Parms.bManageStorage = bManageStorage;

	this->ProcessEvent ( pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, NULL );

	return ShowDeviceSelectionUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMembershipMarketplaceUI = NULL;

	if ( ! pFnShowMembershipMarketplaceUI )
		pFnShowMembershipMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 46512 ];

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Parms ShowMembershipMarketplaceUI_Parms;
	ShowMembershipMarketplaceUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMembershipMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Parms, NULL );

	pFnShowMembershipMarketplaceUI->FunctionFlags |= 0x400;

	return ShowMembershipMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )
// int                            OfferId                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId )
{
	static UFunction* pFnShowContentMarketplaceUI = NULL;

	if ( ! pFnShowContentMarketplaceUI )
		pFnShowContentMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 46507 ];

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;
	ShowContentMarketplaceUI_Parms.LocalUserNum = LocalUserNum;
	ShowContentMarketplaceUI_Parms.CategoryMask = CategoryMask;
	ShowContentMarketplaceUI_Parms.OfferId = OfferId;

	pFnShowContentMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, NULL );

	pFnShowContentMarketplaceUI->FunctionFlags |= 0x400;

	return ShowContentMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviteText                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText )
{
	static UFunction* pFnShowInviteUI = NULL;

	if ( ! pFnShowInviteUI )
		pFnShowInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 46503 ];

	UOnlineSubsystemSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowInviteUI_Parms.InviteText, &InviteText, 0xC );

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowInviteUI, &ShowInviteUI_Parms, NULL );

	pFnShowInviteUI->FunctionFlags |= 0x400;

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowAchievementsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 46500 ];

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMessagesUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMessagesUI = NULL;

	if ( ! pFnShowMessagesUI )
		pFnShowMessagesUI = (UFunction*) UObject::GObjObjects()->Data[ 46497 ];

	UOnlineSubsystemSteamworks_execShowMessagesUI_Parms ShowMessagesUI_Parms;
	ShowMessagesUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMessagesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMessagesUI, &ShowMessagesUI_Parms, NULL );

	pFnShowMessagesUI->FunctionFlags |= 0x400;

	return ShowMessagesUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            UniqueId                       ( CPF_OptionalParm | CPF_Parm )
// struct FString                 PlayerName                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId UniqueId, struct FString PlayerName )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 46492 ];

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.UniqueId, &UniqueId, 0x48 );
	memcpy ( &ShowGamerCardUI_Parms.PlayerName, &PlayerName, 0xC );

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 46488 ];

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.PlayerID, &PlayerID, 0x48 );

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 46484 ];

	UOnlineSubsystemSteamworks_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteAll ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->Data[ 46481 ];

	UOnlineSubsystemSteamworks_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->Data[ 46474 ];

	UOnlineSubsystemSteamworks_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] 
// Parameters infos:
// TArray< struct FDouble >       Mus                            ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FDouble >       Sigmas                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FDouble                 OutAggregateMu                 ( CPF_Parm | CPF_OutParm )
// struct FDouble                 OutAggregateSigma              ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemSteamworks::CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma )
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if ( ! pFnCalcAggregateSkill )
		pFnCalcAggregateSkill = (UFunction*) UObject::GObjObjects()->Data[ 46467 ];

	UOnlineSubsystemSteamworks_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;
	memcpy ( &CalcAggregateSkill_Parms.Mus, &Mus, 0xC );
	memcpy ( &CalcAggregateSkill_Parms.Sigmas, &Sigmas, 0xC );

	this->ProcessEvent ( pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL );

	if ( OutAggregateMu )
		memcpy ( OutAggregateMu, &CalcAggregateSkill_Parms.OutAggregateMu, 0x8 );

	if ( OutAggregateSigma )
		memcpy ( OutAggregateSigma, &CalcAggregateSkill_Parms.OutAggregateSigma, 0x8 );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClientStatGuid                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 46463 ];

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy ( &RegisterStatGuid_Parms.PlayerID, &PlayerID, 0x48 );

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );

	if ( ClientStatGuid )
		memcpy ( ClientStatGuid, &RegisterStatGuid_Parms.ClientStatGuid, 0xC );

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 46461 ];

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46459 ];

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy ( &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46457 ];

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy ( &AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->Data[ 46455 ];

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HostStatGuid                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid ( struct FString* HostStatGuid )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 46452 ];

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );

	if ( HostStatGuid )
		memcpy ( HostStatGuid, &RegisterHostStatGuid_Parms.HostStatGuid, 0xC );

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 46450 ];

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46446 ];

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46442 ];

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 46437 ];

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x48 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0xC );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->Data[ 46432 ];

	UOnlineSubsystemSteamworks_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46429 ];

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46426 ];

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 46424 ];

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemSteamworks::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->Data[ 46420 ];

	UOnlineSubsystemSteamworks_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x48 );

	pFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	pFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46416 ];

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46412 ];

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 46409 ];

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0xC );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->Data[ 46403 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0xC );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->Data[ 46398 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x48 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->Data[ 46393 ];

	UOnlineSubsystemSteamworks_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x48 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0xC );

	pFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	pFnSendMessageToFriend->FunctionFlags |= 0x400;

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46389 ];

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46385 ];

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 46380 ];

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x48 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0xC );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 46376 ];

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x48 );

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	pFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 46372 ];

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x48 );

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->Data[ 46368 ];

	UOnlineSubsystemSteamworks_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x48 );

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	pFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46364 ];

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0x10 );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46359 ];

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0x10 );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 46357 ];

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->Data[ 46352 ];

	UOnlineSubsystemSteamworks_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0xC );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0xC );

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	pFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->Data[ 46347 ];

	UOnlineSubsystemSteamworks_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x48 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0xC );

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	pFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->Data[ 46342 ];

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46339 ];

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0x10 );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46336 ];

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0x10 );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->Data[ 46334 ];

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::HideKeyboardUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnHideKeyboardUI = NULL;

	if ( ! pFnHideKeyboardUI )
		pFnHideKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 46331 ];

	UOnlineSubsystemSteamworks_execHideKeyboardUI_Parms HideKeyboardUI_Parms;
	HideKeyboardUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnHideKeyboardUI, &HideKeyboardUI_Parms, NULL );

	return HideKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 46322 ];

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0xC );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0xC );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            StatusId                       ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > LocalizedStringSettings        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > Properties                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 46315 ];

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	SetOnlineStatus_Parms.StatusId = StatusId;

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );

	pFnSetOnlineStatus->FunctionFlags |= 0x400;

	if ( LocalizedStringSettings )
		memcpy ( LocalizedStringSettings, &SetOnlineStatus_Parms.LocalizedStringSettings, 0xC );

	if ( Properties )
		memcpy ( Properties, &SetOnlineStatus_Parms.Properties, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 46312 ];

	UOnlineSubsystemSteamworks_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 46307 ];

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46304 ];

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46301 ];

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadTitleFile ( struct FString FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 46298 ];

	UOnlineSubsystemSteamworks_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 46295 ];

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46293 ];

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy ( &ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46291 ];

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy ( &AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->Data[ 46290 ];

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemSteamworks::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->Data[ 46288 ];

	UOnlineSubsystemSteamworks_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );

	return GetLocale_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->Data[ 46286 ];

	UOnlineSubsystemSteamworks_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	pFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46283 ];

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy ( &ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46280 ];

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy ( &AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 46278 ];

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetCurrentConnectionStatus ( )
{
	static UFunction* pFnGetCurrentConnectionStatus = NULL;

	if ( ! pFnGetCurrentConnectionStatus )
		pFnGetCurrentConnectionStatus = (UFunction*) UObject::GObjObjects()->Data[ 46276 ];

	UOnlineSubsystemSteamworks_execGetCurrentConnectionStatus_Parms GetCurrentConnectionStatus_Parms;

	this->ProcessEvent ( pFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Parms, NULL );

	return GetCurrentConnectionStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsControllerConnected ( int ControllerId )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->Data[ 46273 ];

	UOnlineSubsystemSteamworks_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UserRestoredDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUserRestoredDelegate ( struct FScriptDelegate UserRestoredDelegate )
{
	static UFunction* pFnClearUserRestoredDelegate = NULL;

	if ( ! pFnClearUserRestoredDelegate )
		pFnClearUserRestoredDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46271 ];

	UOnlineSubsystemSteamworks_execClearUserRestoredDelegate_Parms ClearUserRestoredDelegate_Parms;
	memcpy ( &ClearUserRestoredDelegate_Parms.UserRestoredDelegate, &UserRestoredDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUserRestoredDelegate, &ClearUserRestoredDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UserRestoredDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUserRestoredDelegate ( struct FScriptDelegate UserRestoredDelegate )
{
	static UFunction* pFnAddUserRestoredDelegate = NULL;

	if ( ! pFnAddUserRestoredDelegate )
		pFnAddUserRestoredDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46269 ];

	UOnlineSubsystemSteamworks_execAddUserRestoredDelegate_Parms AddUserRestoredDelegate_Parms;
	memcpy ( &AddUserRestoredDelegate_Parms.UserRestoredDelegate, &UserRestoredDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUserRestoredDelegate, &AddUserRestoredDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored
// [0x00120000] 
// Parameters infos:
// unsigned char                  ControllerId                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUserRestored ( unsigned char ControllerId )
{
	static UFunction* pFnOnUserRestored = NULL;

	if ( ! pFnOnUserRestored )
		pFnOnUserRestored = (UFunction*) UObject::GObjObjects()->Data[ 46267 ];

	UOnlineSubsystemSteamworks_execOnUserRestored_Parms OnUserRestored_Parms;
	OnUserRestored_Parms.ControllerId = ControllerId;

	this->ProcessEvent ( pFnOnUserRestored, &OnUserRestored_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UserOrphanedDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUserOrphanedDelegate ( struct FScriptDelegate UserOrphanedDelegate )
{
	static UFunction* pFnClearUserOrphanedDelegate = NULL;

	if ( ! pFnClearUserOrphanedDelegate )
		pFnClearUserOrphanedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46265 ];

	UOnlineSubsystemSteamworks_execClearUserOrphanedDelegate_Parms ClearUserOrphanedDelegate_Parms;
	memcpy ( &ClearUserOrphanedDelegate_Parms.UserOrphanedDelegate, &UserOrphanedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUserOrphanedDelegate, &ClearUserOrphanedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UserOrphanedDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUserOrphanedDelegate ( struct FScriptDelegate UserOrphanedDelegate )
{
	static UFunction* pFnAddUserOrphanedDelegate = NULL;

	if ( ! pFnAddUserOrphanedDelegate )
		pFnAddUserOrphanedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46263 ];

	UOnlineSubsystemSteamworks_execAddUserOrphanedDelegate_Parms AddUserOrphanedDelegate_Parms;
	memcpy ( &AddUserOrphanedDelegate_Parms.UserOrphanedDelegate, &UserOrphanedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUserOrphanedDelegate, &AddUserOrphanedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned
// [0x00120000] 
// Parameters infos:
// unsigned char                  ControllerId                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUserOrphaned ( unsigned char ControllerId )
{
	static UFunction* pFnOnUserOrphaned = NULL;

	if ( ! pFnOnUserOrphaned )
		pFnOnUserOrphaned = (UFunction*) UObject::GObjObjects()->Data[ 46261 ];

	UOnlineSubsystemSteamworks_execOnUserOrphaned_Parms OnUserOrphaned_Parms;
	OnUserOrphaned_Parms.ControllerId = ControllerId;

	this->ProcessEvent ( pFnOnUserOrphaned, &OnUserOrphaned_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46259 ];

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy ( &ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46257 ];

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy ( &AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnControllerChange ( int ControllerId, unsigned long bIsConnected )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->Data[ 46254 ];

	UOnlineSubsystemSteamworks_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition ( unsigned char NewPos )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 46252 ];

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	pFnSetNetworkNotificationPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );

	pFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 46249 ];

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46246 ];

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy ( &ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0x10 );

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46243 ];

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy ( &AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0x10 );

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnExternalUIChange ( unsigned long bIsOpening )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->Data[ 46241 ];

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46238 ];

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy ( &ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46235 ];

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy ( &AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLinkStatusChange ( unsigned long bIsConnected )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 46233 ];

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->Data[ 46231 ];

	UOnlineSubsystemSteamworks_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	pFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 46228 ];

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// int                            LeaderboardId                  ( CPF_Parm )
// TArray< struct FOnlinePlayerScore > PlayerScores                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->Data[ 46222 ];

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy ( &WriteOnlinePlayerScores_Parms.SessionName, &SessionName, 0x8 );
	WriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

	pFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );

	pFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;

	if ( PlayerScores )
		memcpy ( PlayerScores, &WriteOnlinePlayerScores_Parms.PlayerScores, 0xC );

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46219 ];

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46216 ];

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46213 ];

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy ( &OnFlushOnlineStatsComplete_Parms.SessionName, &SessionName, 0x8 );
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::FlushOnlineStats ( struct FName SessionName )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 46210 ];

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy ( &FlushOnlineStats_Parms.SessionName, &SessionName, 0x8 );

	pFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );

	pFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Player                         ( CPF_Parm )
// class UOnlineStatsWrite*       StatsWrite                     ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 46205 ];

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy ( &WriteOnlineStats_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &WriteOnlineStats_Parms.Player, &Player, 0x48 );
	WriteOnlineStats_Parms.StatsWrite = StatsWrite;

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );

	pFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::FreeStats ( class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->Data[ 46203 ];

	UOnlineSubsystemSteamworks_execFreeStats_Parms FreeStats_Parms;
	FreeStats_Parms.StatsRead = StatsRead;

	pFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );

	pFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46200 ];

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46197 ];

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46195 ];

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            NumRows                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->Data[ 46190 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Parms.NumRows = NumRows;

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->Data[ 46184 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRank_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Parms.StartIndex = StartIndex;
	ReadOnlineStatsByRank_Parms.NumToRead = NumToRead;

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if ( ! pFnReadOnlineStatsForFriends )
		pFnReadOnlineStatsForFriends = (UFunction*) UObject::GObjObjects()->Data[ 46180 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForFriends_Parms.StatsRead = StatsRead;

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL );

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadOnlineStats ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 46174 ];

	UOnlineSubsystemSteamworks_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStats_Parms.StatsRead = StatsRead;

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );

	pFnReadOnlineStats->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ReadOnlineStats_Parms.Players, 0xC );

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->Data[ 46170 ];

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->Data[ 46166 ];

	UOnlineSubsystemSteamworks_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46162 ];

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46158 ];

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->Data[ 46157 ];

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->Data[ 46152 ];

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	pFnGetRecognitionResults->FunctionFlags |= 0x400;

	if ( Words )
		memcpy ( Words, &GetRecognitionResults_Parms.Words, 0xC );

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StopSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 46149 ];

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StartSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 46146 ];

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StopNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 46144 ];

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StartNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 46142 ];

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46139 ];

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy ( &ClearPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46135 ];

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy ( &AddPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->Data[ 46132 ];

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy ( &OnPlayerTalkingStateChange_Parms.Player, &Player, 0x48 );
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 46127 ];

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x48 );
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 46122 ];

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x48 );
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->Data[ 46117 ];

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x48 );
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsHeadsetPresent ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->Data[ 46114 ];

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 46111 ];

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy ( &IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x48 );

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 46108 ];

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 46105 ];

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy ( &UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x48 );

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 46102 ];

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy ( &RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x48 );

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 46099 ];

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 46096 ];

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 46089 ];

	UOnlineSubsystemSteamworks_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	pFnGetFriendsList->FunctionFlags |= 0x400;

	if ( Friends )
		memcpy ( Friends, &GetFriendsList_Parms.Friends, 0xC );

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46085 ];

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46081 ];

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46079 ];

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 46074 ];

	UOnlineSubsystemSteamworks_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46070 ];

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46066 ];

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 46063 ];

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 46058 ];

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 46054 ];

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46050 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x48 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46046 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x48 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 46043 ];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x48 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->Data[ 46038 ];

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x48 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46034 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46030 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 46027 ];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 46022 ];

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46018 ];

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46014 ];

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46011 ];

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 46007 ];

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 46003 ];

	UOnlineSubsystemSteamworks_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45999 ];

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45993 ];

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 45990 ];

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 45986 ];

	UOnlineSubsystemSteamworks_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45982 ];

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FOnlineFriend           FriendData                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetFriendPresence ( struct FOnlineFriend* FriendData )
{
	static UFunction* pFnGetFriendPresence = NULL;

	if ( ! pFnGetFriendPresence )
		pFnGetFriendPresence = (UFunction*) UObject::GObjObjects()->Data[ 45980 ];

	UOnlineSubsystemSteamworks_execGetFriendPresence_Parms GetFriendPresence_Parms;

	pFnGetFriendPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendPresence, &GetFriendPresence_Parms, NULL );

	pFnGetFriendPresence->FunctionFlags |= 0x400;

	if ( FriendData )
		memcpy ( FriendData, &GetFriendPresence_Parms.FriendData, 0x78 );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         PresenceDelegate               ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendPresenceChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate )
{
	static UFunction* pFnClearFriendPresenceChangeDelegate = NULL;

	if ( ! pFnClearFriendPresenceChangeDelegate )
		pFnClearFriendPresenceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45977 ];

	UOnlineSubsystemSteamworks_execClearFriendPresenceChangeDelegate_Parms ClearFriendPresenceChangeDelegate_Parms;
	ClearFriendPresenceChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendPresenceChangeDelegate_Parms.PresenceDelegate, &PresenceDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendPresenceChangeDelegate, &ClearFriendPresenceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         PresenceDelegate               ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendPresenceChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate )
{
	static UFunction* pFnAddFriendPresenceChangeDelegate = NULL;

	if ( ! pFnAddFriendPresenceChangeDelegate )
		pFnAddFriendPresenceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45973 ];

	UOnlineSubsystemSteamworks_execAddFriendPresenceChangeDelegate_Parms AddFriendPresenceChangeDelegate_Parms;
	AddFriendPresenceChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendPresenceChangeDelegate_Parms.PresenceDelegate, &PresenceDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendPresenceChangeDelegate, &AddFriendPresenceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45969 ];

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45966 ];

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0x10 );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45963 ];

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0x10 );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45961 ];

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45959 ];

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45956 ];

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0x10 );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45953 ];

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0x10 );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 45950 ];

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x48 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45947 ];

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45944 ];

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UserSignInCompleteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUserSignInCompleteDelegate ( struct FScriptDelegate UserSignInCompleteDelegate )
{
	static UFunction* pFnClearUserSignInCompleteDelegate = NULL;

	if ( ! pFnClearUserSignInCompleteDelegate )
		pFnClearUserSignInCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45942 ];

	UOnlineSubsystemSteamworks_execClearUserSignInCompleteDelegate_Parms ClearUserSignInCompleteDelegate_Parms;
	memcpy ( &ClearUserSignInCompleteDelegate_Parms.UserSignInCompleteDelegate, &UserSignInCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUserSignInCompleteDelegate, &ClearUserSignInCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UserSignInCompleteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUserSignInCompleteDelegate ( struct FScriptDelegate UserSignInCompleteDelegate )
{
	static UFunction* pFnAddUserSignInCompleteDelegate = NULL;

	if ( ! pFnAddUserSignInCompleteDelegate )
		pFnAddUserSignInCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45940 ];

	UOnlineSubsystemSteamworks_execAddUserSignInCompleteDelegate_Parms AddUserSignInCompleteDelegate_Parms;
	memcpy ( &AddUserSignInCompleteDelegate_Parms.UserSignInCompleteDelegate, &UserSignInCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUserSignInCompleteDelegate, &AddUserSignInCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UserSwitchCompleteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUserSwitchCompleteDelegate ( struct FScriptDelegate UserSwitchCompleteDelegate )
{
	static UFunction* pFnClearUserSwitchCompleteDelegate = NULL;

	if ( ! pFnClearUserSwitchCompleteDelegate )
		pFnClearUserSwitchCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45938 ];

	UOnlineSubsystemSteamworks_execClearUserSwitchCompleteDelegate_Parms ClearUserSwitchCompleteDelegate_Parms;
	memcpy ( &ClearUserSwitchCompleteDelegate_Parms.UserSwitchCompleteDelegate, &UserSwitchCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUserSwitchCompleteDelegate, &ClearUserSwitchCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UserSwitchCompleteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUserSwitchCompleteDelegate ( struct FScriptDelegate UserSwitchCompleteDelegate )
{
	static UFunction* pFnAddUserSwitchCompleteDelegate = NULL;

	if ( ! pFnAddUserSwitchCompleteDelegate )
		pFnAddUserSwitchCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45936 ];

	UOnlineSubsystemSteamworks_execAddUserSwitchCompleteDelegate_Parms AddUserSwitchCompleteDelegate_Parms;
	memcpy ( &AddUserSwitchCompleteDelegate_Parms.UserSwitchCompleteDelegate, &UserSwitchCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUserSwitchCompleteDelegate, &AddUserSwitchCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::SetPrimaryPlayerGamepadToLastInput ( )
{
	static UFunction* pFnSetPrimaryPlayerGamepadToLastInput = NULL;

	if ( ! pFnSetPrimaryPlayerGamepadToLastInput )
		pFnSetPrimaryPlayerGamepadToLastInput = (UFunction*) UObject::GObjObjects()->Data[ 45935 ];

	UOnlineSubsystemSteamworks_execSetPrimaryPlayerGamepadToLastInput_Parms SetPrimaryPlayerGamepadToLastInput_Parms;

	this->ProcessEvent ( pFnSetPrimaryPlayerGamepadToLastInput, &SetPrimaryPlayerGamepadToLastInput_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->Data[ 45931 ];

	UOnlineSubsystemSteamworks_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x48 );

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->Data[ 45926 ];

	UOnlineSubsystemSteamworks_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	pFnAreAnyFriends->FunctionFlags |= 0x400;

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0xC );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->Data[ 45922 ];

	UOnlineSubsystemSteamworks_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x48 );

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanUploadFitnessData ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanUploadFitnessData = NULL;

	if ( ! pFnCanUploadFitnessData )
		pFnCanUploadFitnessData = (UFunction*) UObject::GObjObjects()->Data[ 45916 ];

	UOnlineSubsystemSteamworks_execCanUploadFitnessData_Parms CanUploadFitnessData_Parms;
	CanUploadFitnessData_Parms.LocalUserNum = LocalUserNum;
	CanUploadFitnessData_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanUploadFitnessData_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanUploadFitnessData, &CanUploadFitnessData_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanUploadFitnessData_Parms.PrivilegeLevelHint;

	return CanUploadFitnessData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanShareKinectContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareKinectContent = NULL;

	if ( ! pFnCanShareKinectContent )
		pFnCanShareKinectContent = (UFunction*) UObject::GObjObjects()->Data[ 45910 ];

	UOnlineSubsystemSteamworks_execCanShareKinectContent_Parms CanShareKinectContent_Parms;
	CanShareKinectContent_Parms.LocalUserNum = LocalUserNum;
	CanShareKinectContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareKinectContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanShareKinectContent, &CanShareKinectContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareKinectContent_Parms.PrivilegeLevelHint;

	return CanShareKinectContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanShareWithSocialNetwork ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareWithSocialNetwork = NULL;

	if ( ! pFnCanShareWithSocialNetwork )
		pFnCanShareWithSocialNetwork = (UFunction*) UObject::GObjObjects()->Data[ 45904 ];

	UOnlineSubsystemSteamworks_execCanShareWithSocialNetwork_Parms CanShareWithSocialNetwork_Parms;
	CanShareWithSocialNetwork_Parms.LocalUserNum = LocalUserNum;
	CanShareWithSocialNetwork_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareWithSocialNetwork_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareWithSocialNetwork_Parms.PrivilegeLevelHint;

	return CanShareWithSocialNetwork_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanBrowseInternet ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanBrowseInternet = NULL;

	if ( ! pFnCanBrowseInternet )
		pFnCanBrowseInternet = (UFunction*) UObject::GObjObjects()->Data[ 45898 ];

	UOnlineSubsystemSteamworks_execCanBrowseInternet_Parms CanBrowseInternet_Parms;
	CanBrowseInternet_Parms.LocalUserNum = LocalUserNum;
	CanBrowseInternet_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanBrowseInternet_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanBrowseInternet, &CanBrowseInternet_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanBrowseInternet_Parms.PrivilegeLevelHint;

	return CanBrowseInternet_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanAccessPremiumVideoContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanAccessPremiumVideoContent = NULL;

	if ( ! pFnCanAccessPremiumVideoContent )
		pFnCanAccessPremiumVideoContent = (UFunction*) UObject::GObjObjects()->Data[ 45892 ];

	UOnlineSubsystemSteamworks_execCanAccessPremiumVideoContent_Parms CanAccessPremiumVideoContent_Parms;
	CanAccessPremiumVideoContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumVideoContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanAccessPremiumVideoContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanAccessPremiumVideoContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumVideoContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanAccessPremiumContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanAccessPremiumContent = NULL;

	if ( ! pFnCanAccessPremiumContent )
		pFnCanAccessPremiumContent = (UFunction*) UObject::GObjObjects()->Data[ 45886 ];

	UOnlineSubsystemSteamworks_execCanAccessPremiumContent_Parms CanAccessPremiumContent_Parms;
	CanAccessPremiumContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanAccessPremiumContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanAccessPremiumContent, &CanAccessPremiumContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanAccessPremiumContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanUseCloudStorage ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanUseCloudStorage = NULL;

	if ( ! pFnCanUseCloudStorage )
		pFnCanUseCloudStorage = (UFunction*) UObject::GObjObjects()->Data[ 45880 ];

	UOnlineSubsystemSteamworks_execCanUseCloudStorage_Parms CanUseCloudStorage_Parms;
	CanUseCloudStorage_Parms.LocalUserNum = LocalUserNum;
	CanUseCloudStorage_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanUseCloudStorage_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanUseCloudStorage, &CanUseCloudStorage_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanUseCloudStorage_Parms.PrivilegeLevelHint;

	return CanUseCloudStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanRecordDVRClips ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanRecordDVRClips = NULL;

	if ( ! pFnCanRecordDVRClips )
		pFnCanRecordDVRClips = (UFunction*) UObject::GObjObjects()->Data[ 45874 ];

	UOnlineSubsystemSteamworks_execCanRecordDVRClips_Parms CanRecordDVRClips_Parms;
	CanRecordDVRClips_Parms.LocalUserNum = LocalUserNum;
	CanRecordDVRClips_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanRecordDVRClips_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanRecordDVRClips, &CanRecordDVRClips_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanRecordDVRClips_Parms.PrivilegeLevelHint;

	return CanRecordDVRClips_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanShowPresenceInformation ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 45868 ];

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;
	CanShowPresenceInformation_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShowPresenceInformation_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShowPresenceInformation_Parms.PrivilegeLevelHint;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanViewPlayerProfiles ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 45862 ];

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;
	CanViewPlayerProfiles_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanViewPlayerProfiles_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanViewPlayerProfiles_Parms.PrivilegeLevelHint;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanPurchaseContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 45856 ];

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;
	CanPurchaseContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanPurchaseContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanPurchaseContent_Parms.PrivilegeLevelHint;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanDownloadUserContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 45850 ];

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;
	CanDownloadUserContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanDownloadUserContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanDownloadUserContent_Parms.PrivilegeLevelHint;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanShareUserCreatedContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareUserCreatedContent = NULL;

	if ( ! pFnCanShareUserCreatedContent )
		pFnCanShareUserCreatedContent = (UFunction*) UObject::GObjObjects()->Data[ 45844 ];

	UOnlineSubsystemSteamworks_execCanShareUserCreatedContent_Parms CanShareUserCreatedContent_Parms;
	CanShareUserCreatedContent_Parms.LocalUserNum = LocalUserNum;
	CanShareUserCreatedContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareUserCreatedContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareUserCreatedContent_Parms.PrivilegeLevelHint;

	return CanShareUserCreatedContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanCommunicateVoice ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVoice = NULL;

	if ( ! pFnCanCommunicateVoice )
		pFnCanCommunicateVoice = (UFunction*) UObject::GObjObjects()->Data[ 45838 ];

	UOnlineSubsystemSteamworks_execCanCommunicateVoice_Parms CanCommunicateVoice_Parms;
	CanCommunicateVoice_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVoice_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateVoice_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanCommunicateVoice, &CanCommunicateVoice_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVoice_Parms.PrivilegeLevelHint;

	return CanCommunicateVoice_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanCommunicateVideo ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVideo = NULL;

	if ( ! pFnCanCommunicateVideo )
		pFnCanCommunicateVideo = (UFunction*) UObject::GObjObjects()->Data[ 45832 ];

	UOnlineSubsystemSteamworks_execCanCommunicateVideo_Parms CanCommunicateVideo_Parms;
	CanCommunicateVideo_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVideo_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateVideo_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanCommunicateVideo, &CanCommunicateVideo_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVideo_Parms.PrivilegeLevelHint;

	return CanCommunicateVideo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateText = NULL;

	if ( ! pFnCanCommunicateText )
		pFnCanCommunicateText = (UFunction*) UObject::GObjObjects()->Data[ 45826 ];

	UOnlineSubsystemSteamworks_execCanCommunicateText_Parms CanCommunicateText_Parms;
	CanCommunicateText_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateText_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateText_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanCommunicateText, &CanCommunicateText_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateText_Parms.PrivilegeLevelHint;

	return CanCommunicateText_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  CommMethod                     ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanCommunicate ( unsigned char LocalUserNum, unsigned char CommMethod, unsigned long bAttemptToResolve )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 45821 ];

	UOnlineSubsystemSteamworks_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;
	CanCommunicate_Parms.CommMethod = CommMethod;
	CanCommunicate_Parms.bAttemptToResolve = bAttemptToResolve;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanPlayOnline ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 45815 ];

	UOnlineSubsystemSteamworks_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;
	CanPlayOnline_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanPlayOnline_Parms.Reason, &Reason, 0xC );

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanPlayOnline_Parms.PrivilegeLevelHint;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 45811 ];

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 45806 ];

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x48 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->Data[ 45803 ];

	UOnlineSubsystemSteamworks_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->Data[ 45800 ];

	UOnlineSubsystemSteamworks_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 45797 ];

	UOnlineSubsystemSteamworks_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45794 ];

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45791 ];

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 45789 ];

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 45786 ];

	UOnlineSubsystemSteamworks_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45782 ];

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45778 ];

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 45775 ];

	UOnlineSubsystemSteamworks_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->Data[ 45773 ];

	UOnlineSubsystemSteamworks_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	pFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 45767 ];

	UOnlineSubsystemSteamworks_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &Login_Parms.LoginName, &LoginName, 0xC );
	memcpy ( &Login_Parms.Password, &Password, 0xC );
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive
// [0x00020000] 
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetKickPlayerDialogActive ( unsigned long Active )
{
	static UFunction* pFnSetKickPlayerDialogActive = NULL;

	if ( ! pFnSetKickPlayerDialogActive )
		pFnSetKickPlayerDialogActive = (UFunction*) UObject::GObjObjects()->Data[ 45765 ];

	UOnlineSubsystemSteamworks_execSetKickPlayerDialogActive_Parms SetKickPlayerDialogActive_Parms;
	SetKickPlayerDialogActive_Parms.Active = Active;

	this->ProcessEvent ( pFnSetKickPlayerDialogActive, &SetKickPlayerDialogActive_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::IsUserSwitchActive ( )
{
	static UFunction* pFnIsUserSwitchActive = NULL;

	if ( ! pFnIsUserSwitchActive )
		pFnIsUserSwitchActive = (UFunction*) UObject::GObjObjects()->Data[ 45763 ];

	UOnlineSubsystemSteamworks_execIsUserSwitchActive_Parms IsUserSwitchActive_Parms;

	this->ProcessEvent ( pFnIsUserSwitchActive, &IsUserSwitchActive_Parms, NULL );

	return IsUserSwitchActive_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetKickPreviousUser ( unsigned char LocalUserNum )
{
	static UFunction* pFnSetKickPreviousUser = NULL;

	if ( ! pFnSetKickPreviousUser )
		pFnSetKickPreviousUser = (UFunction*) UObject::GObjObjects()->Data[ 45761 ];

	UOnlineSubsystemSteamworks_execSetKickPreviousUser_Parms SetKickPreviousUser_Parms;
	SetKickPreviousUser_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnSetKickPreviousUser, &SetKickPreviousUser_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::SupportInGameLogin ( )
{
	static UFunction* pFnSupportInGameLogin = NULL;

	if ( ! pFnSupportInGameLogin )
		pFnSupportInGameLogin = (UFunction*) UObject::GObjObjects()->Data[ 45759 ];

	UOnlineSubsystemSteamworks_execSupportInGameLogin_Parms SupportInGameLogin_Parms;

	this->ProcessEvent ( pFnSupportInGameLogin, &SupportInGameLogin_Parms, NULL );

	return SupportInGameLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::ShowControllerUI ( )
{
	static UFunction* pFnShowControllerUI = NULL;

	if ( ! pFnShowControllerUI )
		pFnShowControllerUI = (UFunction*) UObject::GObjObjects()->Data[ 45757 ];

	UOnlineSubsystemSteamworks_execShowControllerUI_Parms ShowControllerUI_Parms;

	this->ProcessEvent ( pFnShowControllerUI, &ShowControllerUI_Parms, NULL );

	return ShowControllerUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowLoginUIForOrphanedUser ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowLoginUIForOrphanedUser = NULL;

	if ( ! pFnShowLoginUIForOrphanedUser )
		pFnShowLoginUIForOrphanedUser = (UFunction*) UObject::GObjObjects()->Data[ 45754 ];

	UOnlineSubsystemSteamworks_execShowLoginUIForOrphanedUser_Parms ShowLoginUIForOrphanedUser_Parms;
	ShowLoginUIForOrphanedUser_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowLoginUIForOrphanedUser, &ShowLoginUIForOrphanedUser_Parms, NULL );

	return ShowLoginUIForOrphanedUser_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowLoginUI ( unsigned char LocalUserNum, unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 45750 ];

	UOnlineSubsystemSteamworks_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.LocalUserNum = LocalUserNum;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

void UOnlineSubsystemSteamworks::FriendPresenceChange ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnFriendPresenceChange = NULL;

	if ( ! pFnFriendPresenceChange )
		pFnFriendPresenceChange = (UFunction*) UObject::GObjObjects()->Data[ 45748 ];

	UOnlineSubsystemSteamworks_execFriendPresenceChange_Parms FriendPresenceChange_Parms;
	memcpy ( &FriendPresenceChange_Parms.PlayerID, &PlayerID, 0x48 );

	this->ProcessEvent ( pFnFriendPresenceChange, &FriendPresenceChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->Data[ 45747 ];

	UOnlineSubsystemSteamworks_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->Data[ 45746 ];

	UOnlineSubsystemSteamworks_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->Data[ 45745 ];

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->Data[ 45743 ];

	UOnlineSubsystemSteamworks_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUserSignInComplete ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnUserSignInComplete = NULL;

	if ( ! pFnOnUserSignInComplete )
		pFnOnUserSignInComplete = (UFunction*) UObject::GObjObjects()->Data[ 45741 ];

	UOnlineSubsystemSteamworks_execOnUserSignInComplete_Parms OnUserSignInComplete_Parms;
	OnUserSignInComplete_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnUserSignInComplete, &OnUserSignInComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUserSwitchComplete ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnUserSwitchComplete = NULL;

	if ( ! pFnOnUserSwitchComplete )
		pFnOnUserSwitchComplete = (UFunction*) UObject::GObjObjects()->Data[ 45739 ];

	UOnlineSubsystemSteamworks_execOnUserSwitchComplete_Parms OnUserSwitchComplete_Parms;
	OnUserSwitchComplete_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnUserSwitchComplete, &OnUserSwitchComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventExit ( )
{
	static UFunction* pFnExit = NULL;

	if ( ! pFnExit )
		pFnExit = (UFunction*) UObject::GObjObjects()->Data[ 45738 ];

	UOnlineSubsystemSteamworks_eventExit_Parms Exit_Parms;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExit, &Exit_Parms, NULL );

	pFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 45736 ];

	UOnlineSubsystemSteamworks_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::CanPlayOnlineChanged ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPlayOnlineChanged = NULL;

	if ( ! pFnCanPlayOnlineChanged )
		pFnCanPlayOnlineChanged = (UFunction*) UObject::GObjObjects()->Data[ 45734 ];

	UOnlineSubsystemSteamworks_execCanPlayOnlineChanged_Parms CanPlayOnlineChanged_Parms;
	CanPlayOnlineChanged_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanPlayOnlineChanged, &CanPlayOnlineChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ResponseMicroTxnDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePurchaseInterfaceSteamworks::ClearMicroTxnResponseDelegate ( struct FScriptDelegate ResponseMicroTxnDelegate )
{
	static UFunction* pFnClearMicroTxnResponseDelegate = NULL;

	if ( ! pFnClearMicroTxnResponseDelegate )
		pFnClearMicroTxnResponseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45692 ];

	UOnlinePurchaseInterfaceSteamworks_execClearMicroTxnResponseDelegate_Parms ClearMicroTxnResponseDelegate_Parms;
	memcpy ( &ClearMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, &ResponseMicroTxnDelegate, 0x10 );

	this->ProcessEvent ( pFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ResponseMicroTxnDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePurchaseInterfaceSteamworks::AddMicroTxnResponseDelegate ( struct FScriptDelegate ResponseMicroTxnDelegate )
{
	static UFunction* pFnAddMicroTxnResponseDelegate = NULL;

	if ( ! pFnAddMicroTxnResponseDelegate )
		pFnAddMicroTxnResponseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45690 ];

	UOnlinePurchaseInterfaceSteamworks_execAddMicroTxnResponseDelegate_Parms AddMicroTxnResponseDelegate_Parms;
	memcpy ( &AddMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, &ResponseMicroTxnDelegate, 0x10 );

	this->ProcessEvent ( pFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Currency                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            Price                          ( CPF_Parm )

struct FString UOnlinePurchaseInterfaceSteamworks::FormatCurrency ( struct FString Currency, int Price )
{
	static UFunction* pFnFormatCurrency = NULL;

	if ( ! pFnFormatCurrency )
		pFnFormatCurrency = (UFunction*) UObject::GObjObjects()->Data[ 45679 ];

	UOnlinePurchaseInterfaceSteamworks_execFormatCurrency_Parms FormatCurrency_Parms;
	memcpy ( &FormatCurrency_Parms.Currency, &Currency, 0xC );
	FormatCurrency_Parms.Price = Price;

	this->ProcessEvent ( pFnFormatCurrency, &FormatCurrency_Parms, NULL );

	return FormatCurrency_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void UOnlinePurchaseInterfaceSteamworks::HandleGetAppPriceInfoComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnHandleGetAppPriceInfoComplete = NULL;

	if ( ! pFnHandleGetAppPriceInfoComplete )
		pFnHandleGetAppPriceInfoComplete = (UFunction*) UObject::GObjObjects()->Data[ 45662 ];

	UOnlinePurchaseInterfaceSteamworks_execHandleGetAppPriceInfoComplete_Parms HandleGetAppPriceInfoComplete_Parms;
	HandleGetAppPriceInfoComplete_Parms.Request = Request;
	HandleGetAppPriceInfoComplete_Parms.Response = Response;
	HandleGetAppPriceInfoComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent ( pFnHandleGetAppPriceInfoComplete, &HandleGetAppPriceInfoComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerID                       ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FName >         AppNames                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlinePurchaseInterfaceSteamworks::GetAppPriceInfo ( struct FScriptDelegate Callback, struct FUniqueNetId* PlayerID, TArray< struct FName >* AppNames )
{
	static UFunction* pFnGetAppPriceInfo = NULL;

	if ( ! pFnGetAppPriceInfo )
		pFnGetAppPriceInfo = (UFunction*) UObject::GObjObjects()->Data[ 45654 ];

	UOnlinePurchaseInterfaceSteamworks_execGetAppPriceInfo_Parms GetAppPriceInfo_Parms;
	memcpy ( &GetAppPriceInfo_Parms.Callback, &Callback, 0x10 );

	this->ProcessEvent ( pFnGetAppPriceInfo, &GetAppPriceInfo_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetAppPriceInfo_Parms.PlayerID, 0x48 );

	if ( AppNames )
		memcpy ( AppNames, &GetAppPriceInfo_Parms.AppNames, 0xC );

	return GetAppPriceInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 AppID                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bOptional                      ( CPF_OptionalParm | CPF_Parm )
// struct FName                   AppName                        ( CPF_Parm | CPF_OutParm )

bool UOnlinePurchaseInterfaceSteamworks::AppIdToName ( struct FString AppID, unsigned long bOptional, struct FName* AppName )
{
	static UFunction* pFnAppIdToName = NULL;

	if ( ! pFnAppIdToName )
		pFnAppIdToName = (UFunction*) UObject::GObjObjects()->Data[ 45648 ];

	UOnlinePurchaseInterfaceSteamworks_execAppIdToName_Parms AppIdToName_Parms;
	memcpy ( &AppIdToName_Parms.AppID, &AppID, 0xC );
	AppIdToName_Parms.bOptional = bOptional;

	this->ProcessEvent ( pFnAppIdToName, &AppIdToName_Parms, NULL );

	if ( AppName )
		memcpy ( AppName, &AppIdToName_Parms.AppName, 0x8 );

	return AppIdToName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   AppName                        ( CPF_Parm )
// unsigned long                  bOptional                      ( CPF_OptionalParm | CPF_Parm )
// struct FString                 AppID                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlinePurchaseInterfaceSteamworks::AppNameToId ( struct FName AppName, unsigned long bOptional, struct FString* AppID )
{
	static UFunction* pFnAppNameToId = NULL;

	if ( ! pFnAppNameToId )
		pFnAppNameToId = (UFunction*) UObject::GObjObjects()->Data[ 45642 ];

	UOnlinePurchaseInterfaceSteamworks_execAppNameToId_Parms AppNameToId_Parms;
	memcpy ( &AppNameToId_Parms.AppName, &AppName, 0x8 );
	AppNameToId_Parms.bOptional = bOptional;

	this->ProcessEvent ( pFnAppNameToId, &AppNameToId_Parms, NULL );

	if ( AppID )
		memcpy ( AppID, &AppNameToId_Parms.AppID, 0xC );

	return AppNameToId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USteamWorkshopCommandlet::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 47231 ];

	USteamWorkshopCommandlet_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	return Init_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif