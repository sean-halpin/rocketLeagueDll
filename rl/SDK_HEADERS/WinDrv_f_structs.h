/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// [0x00840003] ( FUNC_Final )
struct UFacebookWindows_execOnFacebookFriendsRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHttpResponseInterface*                      Response;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDidSucceed : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  JsonPayload;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UJsonObject*                              ParsedJson;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UJsonObject*                              FriendsJson;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FPlatformInterfaceDelegateResult         DelegateResult;                                   		// 0x0024 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FFacebookFriend                          Friend;                                           		// 0x0058 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function WinDrv.FacebookWindows.RequestFacebookFriends
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UFacebookWindows_eventRequestFacebookFriends_Parms
{
};

// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// [0x00840003] ( FUNC_Final )
struct UFacebookWindows_execOnFacebookMeRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHttpResponseInterface*                      Response;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDidSucceed : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  JsonPayload;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UJsonObject*                              ParsedJson;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FPlatformInterfaceDelegateResult         DelegateResult;                                   		// 0x001C (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UFacebookWindows_eventRequestFacebookMeInfo_Parms
{
};

// Function WinDrv.FacebookWindows.FacebookRequestCallback
// [0x00020002] 
struct UFacebookWindows_execFacebookRequestCallback_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHttpResponseInterface*                      Response;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDidSucceed : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  Payload;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// [0x00020400] ( FUNC_Native )
struct UFacebookWindows_execProcessFacebookRequest_Parms
{
	struct FString                                     Payload;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ResponseCode;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WinDrv.FacebookWindows.FacebookRequest
// [0x00024002] 
struct UFacebookWindows_execFacebookRequest_Parms
{
	struct FString                                     GraphRequest;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     HTTPMethod;                                       		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           ParamKeysAndValues;                               		// 0x0018 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function WinDrv.FacebookWindows.Disconnect
// [0x00020400] ( FUNC_Native )
struct UFacebookWindows_execDisconnect_Parms
{
};

// Function WinDrv.FacebookWindows.IsAuthorized
// [0x00020400] ( FUNC_Native )
struct UFacebookWindows_execIsAuthorized_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.FacebookWindows.Authorize
// [0x00020400] ( FUNC_Native )
struct UFacebookWindows_execAuthorize_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.FacebookWindows.Init
// [0x00020400] ( FUNC_Native )
struct UFacebookWindows_execInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execProcessRequest_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execSetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     HeaderValue;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execSetContentAsString_Parms
{
	struct FString                                     ContentString;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] ( FUNC_Native )
struct UHttpRequestWindows_execSetContent_Parms
{
	TArray< unsigned char >                            ContentPayload;                                   		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execSetURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execSetVerb_Parms
{
	struct FString                                     Verb;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetVerb_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] ( FUNC_Native )
struct UHttpRequestWindows_execGetContent_Parms
{
	TArray< unsigned char >                            Content;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetContentLength_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetContentType_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetURLParameter_Parms
{
	struct FString                                     ParameterName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetHeaders_Parms
{
	TArray< struct FString >                           ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetResponseCode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetContentAsString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] ( FUNC_Native )
struct UHttpResponseWindows_execGetContent_Parms
{
	TArray< unsigned char >                            Content;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetContentLength_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetContentType_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetURLParameter_Parms
{
	struct FString                                     ParameterName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetHeaders_Parms
{
	TArray< struct FString >                           ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// [0x00020002] 
struct UHttpRequestWindowsMcp_execProcessRequest_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  URL;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif